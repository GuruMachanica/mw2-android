// Command buffers and their submission: the frame slots, the end of a frame,
// and the title's occlusion queries, which live and die with the render passes.
#include "renderer_state.h"
#include "capture.h"
#include "presenter.h"
#include "texture_cache.h"
#include "../../log.h"
#include "../../pacing_trace.h"
#include "../../report.h"

#ifdef MW2_HAVE_VULKAN

namespace vk::renderer::detail
{
    // Destroying an image the GPU may still use. Waiting for the device is not
    // enough on its own: it covers work already submitted, and the command buffer
    // being recorded -- a render pass open on the very view about to go, or a
    // copy out of it -- has not been. Destroying under it leaves that buffer
    // pointing at freed memory, and submitting it has the GPU write through
    // addresses nothing backs: the page faults every run of this runtime logged
    // until one of them hung the driver and took the machine down. So the open
    // buffer is finished and waited for first, and a fresh one is begun if the
    // caller was in the middle of recording. Commands the recorder thread has
    // not made yet name it too, so it is waited for as well.
    void RetireBeforeDestroy()
    {
        const bool wasRecording = g.recording;
        if (wasRecording) Submit(true);
        vk::record::Drain();
        // The queue is in order, so nothing is outstanding afterwards.
        vkDeviceWaitIdle(g.device);
        for (State::Slot& slot : g.slots) slot.inFlight = false;
        if (wasRecording) BeginFrame();
    }

    bool BeginFrame()
    {
        if (g.recording) return true;

        // Round to the next slot and wait only if the GPU has not finished with
        // it. With three of them and a wait at the present, that is normally
        // already true and this costs nothing.
        g.slot = (g.slot + 1) % kFrameSlots;
        State::Slot& slot = g.slots[g.slot];
        if (!WaitForSlot(slot, "a frame slot's fence")) return false;
        NoteCompleted();
        g.arenaBase = slot.arenaBase;
        vk::textures::BeginUploads(g.slot);
        g.ended.clear();
        g.segment = 0;
        g.command = slot.buffers[0];
        vk::record::Into(g.command);
        const VkDevice device = g.device;
        const VkCommandPool pool = slot.commands;
        Record([=](VkCommandBuffer) { vkResetCommandPool(device, pool, 0); });
        BeginSegmentBuffer();
        g.arenaUsed = 0;
        g.constantWindows[0].valid = g.constantWindows[1].valid = false;
        g.fetchBlock.valid = g.booleans.valid = g.loops.valid = false;
        g.recording = true;
        return true;
    }

    // Begins g.command. Set 2 is the arena as dwords and is the same for every
    // draw in the frame, so it is bound once a command buffer instead of eight
    // million times.
    void BeginSegmentBuffer()
    {
        const VkPipelineLayout layout = static_cast<VkPipelineLayout>(vk::pipeline::Layout());
        const VkDescriptorSet memorySet = g.memorySet;
        Record([=](VkCommandBuffer command) {
            VkCommandBufferBeginInfo begin{ VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
            begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
            if (vkBeginCommandBuffer(command, &begin) != VK_SUCCESS)
                LOGW("renderer: a frame's command buffer would not begin");
            vkCmdBindDescriptorSets(command, VK_PIPELINE_BIND_POINT_GRAPHICS, layout,
                                    bindings::kArenaSet, 1, &memorySet, 0, nullptr);
        });
        // A fresh command buffer remembers nothing.
        g.bound = State::Bound{};
        g.currentColour = g.currentDepth = VK_NULL_HANDLE;
        g.segmentDraws = false;
    }

    // The command processor is about to report the draws so far done
    // (vk::renderer::BeforeCompletion): the segment's textures are read for
    // the last time, and its draws closed off in a command buffer of their
    // own, so what is read after this reaches only the draws after it. The
    // submission goes on in the next command buffer, and is still one.
    void CloseSegment()
    {
        EndPass();
        if (void* uploads = vk::textures::EndSegment())
            g.ended.push_back(static_cast<VkCommandBuffer>(uploads));
        g.ended.push_back(g.command);
        Record([](VkCommandBuffer command) {
            if (vkEndCommandBuffer(command) != VK_SUCCESS)
                LOGW("renderer: a segment's command buffer would not end");
        });
        State::Slot& slot = g.slots[g.slot];
        if (++g.segment >= slot.buffers.size())
        {
            // The recorder may be making calls into the pool's other buffers:
            // it has to be done with them before the pool is touched here.
            vk::record::Drain();
            VkCommandBufferAllocateInfo allocate{ VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO };
            allocate.commandPool = slot.commands;
            allocate.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
            allocate.commandBufferCount = kSegmentBuffers;
            const size_t had = slot.buffers.size();
            slot.buffers.resize(had + kSegmentBuffers);
            if (vkAllocateCommandBuffers(g.device, &allocate, slot.buffers.data() + had) != VK_SUCCESS)
                LOGE("renderer: no command buffers for another segment");
        }
        g.command = slot.buffers[g.segment];
        vk::record::Into(g.command);
        BeginSegmentBuffer();
        g.segments++;
    }

    // The title brackets the draws it wants counted with two EVENT_WRITE_ZPD
    // events, which can be minutes of draws apart in command-buffer terms and
    // can cross any number of render passes. A Vulkan occlusion query has to
    // begin and end inside one render pass instance, so the bracket becomes one
    // query per pass it covers and the counts are added up.
    void OpenGuestQuery()
    {
        if (!g.guestCounting || g.guestQueryOpen) return;
        if (!g.guestQueries || g.guestQueryCount >= kMaxGuestQueries) return;
        const VkQueryPool pool = g.guestQueries;
        const uint32_t query = g.guestQueryFirst + g.guestQueryCount;
        const VkQueryControlFlags flags =
            vk::pipeline::PreciseOcclusionQueries() ? VK_QUERY_CONTROL_PRECISE_BIT : 0;
        Record([=](VkCommandBuffer command) { vkCmdBeginQuery(command, pool, query, flags); });
        g.guestQueryOpen = true;
    }

    void CloseGuestQuery()
    {
        if (!g.guestQueryOpen) return;
        const VkQueryPool pool = g.guestQueries;
        const uint32_t query = g.guestQueryFirst + g.guestQueryCount++;
        Record([=](VkCommandBuffer command) { vkCmdEndQuery(command, pool, query); });
        g.guestQueryOpen = false;
    }

    void EndPass()
    {
        CloseGuestQuery();
        if (g.currentColour || g.currentDepth)
            Record([](VkCommandBuffer command) {
                if (vk::pipeline::LegacyMode())
                    vkCmdEndRenderPass(command);
                else
                    dispatch.endRendering(command);
                // What a render pass's dependency out to the outside was: the
                // copies, clears, passes and sampling after it see its writes.
                VkMemoryBarrier after{ VK_STRUCTURE_TYPE_MEMORY_BARRIER };
                after.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT |
                                      VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
                after.dstAccessMask = kColourAccess | kDepthAccess | VK_ACCESS_TRANSFER_READ_BIT |
                                      VK_ACCESS_TRANSFER_WRITE_BIT | VK_ACCESS_SHADER_READ_BIT;
                vkCmdPipelineBarrier(command, kColourStages | kDepthStages,
                                     kColourStages | kDepthStages | VK_PIPELINE_STAGE_TRANSFER_BIT |
                                         VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
                                     0, 1, &after, 0, nullptr, 0, nullptr);
            });
        g.currentColour = g.currentDepth = VK_NULL_HANDLE;
    }

    // `wait` when the CPU is about to read what the submission produced -- a
    // frame read back, an occlusion query's count -- or free what it uses.
    // Otherwise it is queued and the caller carries straight on, with up to
    // kFrameSlots submissions on the GPU at once. The window thread's copy of a
    // finished frame goes into the same queue after it, and the frame's last
    // barrier orders the two.
    //
    // The submission itself is the recorder thread's, after the commands before
    // it; the serial is the consumer's, counted here.
    bool Submit(bool wait)
    {
        Stopwatch watch(g.submitNanoseconds);
        if (!g.recording) return true;
        EndPass();
        if (g.arenaUsed > g.arenaPeak) g.arenaPeak = g.arenaUsed;
        g.recording = false;

        State::Slot& slot = g.slots[g.slot];
        // The last segment's textures are read for the last time, and its
        // uploads go just ahead of its draws, after the segments before.
        std::vector<VkCommandBuffer> buffers;
        buffers.swap(g.ended);
        if (void* uploads = vk::textures::EndSubmission())
            buffers.push_back(static_cast<VkCommandBuffer>(uploads));
        buffers.push_back(g.command);
        const VkDevice device = g.device;
        const VkQueue queue = g.queue;
        const VkFence fence = slot.fence;
        Record([=, buffers = std::move(buffers)](VkCommandBuffer command) {
            const bool ended = vkEndCommandBuffer(command) == VK_SUCCESS;
            if (!ended) LOGW("renderer: a frame's command buffer would not end");
            VkSubmitInfo submit{ VK_STRUCTURE_TYPE_SUBMIT_INFO };
            submit.commandBufferCount = uint32_t(buffers.size());
            submit.pCommandBuffers = buffers.data();
            std::lock_guard lock(vk::pipeline::QueueMutex());
            vkResetFences(device, 1, &fence);
            // Whatever happens the fence is signalled, or whoever waits for
            // this slot waits for ever.
            if (!ended || vk::pipeline::Failed(vkQueueSubmit(queue, 1, &submit, fence),
                                               "a frame's submission"))
            {
                VkSubmitInfo emptySubmit{ VK_STRUCTURE_TYPE_SUBMIT_INFO };
                vkQueueSubmit(queue, 1, &emptySubmit, fence);
            }
        });
        slot.inFlight = true;
        slot.serial = ++g.submissionSerial;
        slot.queuedAt = vk::record::Position();
        g.submits++;
        if (!wait) return true;

        if (!WaitForSlot(slot, "a frame slot's fence")) return false;
        // One queue, submitted in order: this one being done says all of them are.
        for (State::Slot& other : g.slots) other.inFlight = false;
        return true;
    }

    bool WaitForSlot(State::Slot& slot, const char* what)
    {
        if (!slot.inFlight) return true;
        Stopwatch waited(g.fenceNanoseconds);
        stutters::Timed timed(stutters::kGpuWaits);
        vk::record::WaitFor(slot.queuedAt);
        VkResult res = vkWaitForFences(g.device, 1, &slot.fence, VK_TRUE, 2000000000ull);
        if (res == VK_TIMEOUT)
        {
            LOGW("renderer: waiting for %s took >2 seconds; waiting up to 5s...", what);
            res = vkWaitForFences(g.device, 1, &slot.fence, VK_TRUE, 5000000000ull);
        }
        if (res == VK_TIMEOUT)
        {
            LOGE("renderer: fence wait timed out for %s; aborting wait to avoid permanent hang", what);
            slot.inFlight = false;
            return false;
        }
        if (vk::pipeline::Failed(res, what))
            return false;
        slot.inFlight = false;
        return true;
    }

    // Asked once a submission rather than whenever it is wanted: a fence's
    // status is a system call, and the shadow wanted it for every draw that
    // touched a page the title keeps rewriting -- 7% of the consumer thread. A
    // value from a little earlier only makes the answer more cautious.
    void NoteCompleted()
    {
        uint64_t oldestRunning = UINT64_MAX;
        for (State::Slot& slot : g.slots)
            if (slot.inFlight && slot.serial < oldestRunning &&
                (!vk::record::Done(slot.queuedAt) ||
                 vkGetFenceStatus(g.device, slot.fence) != VK_SUCCESS))
                oldestRunning = slot.serial;
        g.completedSerial = oldestRunning == UINT64_MAX ? g.submissionSerial : oldestRunning - 1;
    }

    uint64_t CompletedSerial() { return g.completedSerial; }

    // The frame's image is complete in `present`: submit it, move the frame
    // counters on, look at it if asked to, and hand it to the window.
    void FinishFrame(VkImage present)
    {
        // The frame is queued, not waited for: the window thread's blit goes into
        // the same queue behind it. Only a frame something reads back has to be
        // finished first.
        const FrameReadBacks plan = PlanReadBacks();
        if (plan.Any()) RecordReadBack(present);
        if (!Submit(plan.Any())) { Skip("frame submission failed"); return; }
        g.frames++;
        vk::textures::NewFrame();

        // The title does not redraw the world every time it presents -- better than
        // half the frames of the training level are the interface over whatever the
        // last world pass left in EDRAM. The world pass is the only one drawn
        // multisampled (2x, 4x on the pass beside it; the interface is 1x) in both
        // executables, so a handful of multisampled draws says it happened. 200
        // draws into any target is the fallback for a device drawing at 1x.
        constexpr uint64_t kWorldDraws = 200;
        constexpr uint64_t kMultisampledDraws = 8;
        bool worldDrawn = false;
        for (auto& [key, target] : g.targets)
        {
            if (!target.depth && (target.colourDrawsThisFrame >= kWorldDraws ||
                                  (key.samples > 0 &&
                                   target.colourDrawsThisFrame >= kMultisampledDraws)))
                worldDrawn = true;
            target.colourDrawsThisFrame = 0;
        }
        pacing::Note(pacing::kFrame, worldDrawn ? 1 : 0);
        stutters::Finished(g.frames, worldDrawn);
        report::Frame(worldDrawn);
        NoteFrame(worldDrawn);
        SetCutsceneActive(!worldDrawn);
        if (worldDrawn)
        {
            const auto now = std::chrono::steady_clock::now();
            if (!g.worldStreak++) g.streakFrom = now;
            if (g.worldFrames)
            {
                g.lastWorldAt = now;
                g.worldFrames++;
            }
            else if (g.worldStreak == State::kPlayStreak)
            {
                g.firstWorldAt = g.streakFrom;
                g.lastWorldAt = now;
                g.worldFrames = State::kPlayStreak;
            }
        }
        else g.worldStreak = 0;
        EndFrameDraws(g.frames, worldDrawn);
        // A capture ends and begins between submissions as the GPU gets them,
        // and the window must not copy the frame out before it is submitted:
        // both come after the submission, on the recorder thread.
        const uint64_t frame = g.frames;
        vk::record::Host([=] { vk::capture::FrameBoundary(worldDrawn, frame); });
        g.presentSerial[g.presentIndex] = frame;
        g.presentIndex = (g.presentIndex + 1) % kPresentImages;
        ExamineFrame(worldDrawn, plan);
        const uint32_t width = g.presentWidth, height = g.presentHeight;
        vk::record::Host([=] { vk::ShowImage(present, width, height, frame); });
    }
}

using namespace vk::renderer::detail;

namespace
{
    // Whether the GPU has finished the submission a bracket went out in: its
    // slot has moved on to a later one (BeginFrame waited for it first), or
    // the slot's fence says so.
    bool Finished(const State::PendingQuery& query)
    {
        // Still in the command buffer being recorded.
        if (query.serial > g.submissionSerial) return false;
        const State::Slot& slot = g.slots[query.slot];
        if (slot.serial != query.serial || !slot.inFlight) return true;
        // Queued, and not yet handed to the GPU by the recorder thread.
        return vk::record::Done(slot.queuedAt) &&
               vkGetFenceStatus(g.device, slot.fence) == VK_SUCCESS;
    }

    void Read(State::PendingQuery& query)
    {
        stutters::Timed timed(stutters::kQueryReads);
        uint64_t samples[kMaxGuestQueries]{};
        query.read = true;
        query.samples = 0;
        if (vkGetQueryPoolResults(g.device, g.guestQueries, query.first, query.count,
                                  sizeof(uint64_t) * query.count, samples, sizeof(uint64_t),
                                  VK_QUERY_RESULT_64_BIT | VK_QUERY_RESULT_WAIT_BIT) != VK_SUCCESS)
            return;
        for (uint32_t i = 0; i < query.count; i++) query.samples += samples[i];
        // The title compares the count with numbers of its own pixels.
        query.samples /= uint64_t(g.scale) * g.scale;
    }
}

using namespace vk::renderer::detail;

// The title's own occlusion query. Everything drawn between the two calls is
// counted, however many render passes and command buffers that takes.
void vk::renderer::BeginOcclusionQuery()
{
    if (!g.guestQueries) return;
    // Any query still open belongs to a bracket the title abandoned.
    EndPass();
    if (!BeginFrame()) return;
    if (g.guestQueryNext + kMaxGuestQueries > kGuestQueryRing) g.guestQueryNext = 0;
    const uint32_t first = g.guestQueryNext, last = first + kMaxGuestQueries;
    // A bracket still out on this stretch of the ring is counted now, before
    // the reset below reaches the GPU.
    for (State::PendingQuery& query : g.pendingQueries)
        if (!query.read && query.first < last && first < query.first + query.count)
        {
            // Not submitted yet: this recording holds it, and has to go first.
            if (query.serial > g.submissionSerial)
            {
                EndPass();
                if (!Submit(true) || !BeginFrame()) return;
            }
            State::Slot& slot = g.slots[query.slot];
            if (slot.serial == query.serial) WaitForSlot(slot, "an occlusion query's submission");
            Read(query);
        }
    const VkQueryPool pool = g.guestQueries;
    Record([=](VkCommandBuffer command) {
        vkCmdResetQueryPool(command, pool, first, kMaxGuestQueries);
    });
    g.guestQueryFirst = first;
    g.guestQueryCount = 0;
    g.guestCounting = true;
}

// Not submitted here: the count goes out with the rest of the frame and is
// handed over once the GPU has finished it, and the title polls the record
// until then. Submitting at every bracket ended the command buffer mid-frame
// -- the textures re-read, every binding made again in the next one -- for 8%
// of the consumer thread.
bool vk::renderer::EndOcclusionQuery(uint32_t tag, uint64_t& samples)
{
    samples = 0;
    if (!g.guestQueries || !g.guestCounting) return true;
    EndPass();
    g.guestCounting = false;
    const uint32_t counted = g.guestQueryCount;
    g.guestQueryCount = 0;
    if (!counted) return true;
    g.guestQueryNext = g.guestQueryFirst + counted;
    g.pendingQueries.push_back({ g.guestQueryFirst, counted, tag, g.slot, g.submissionSerial + 1 });
    return false;
}

uint64_t vk::renderer::CompletedSubmission() { return CompletedSerial(); }

void vk::renderer::BeforeStreamWrite(uint32_t physical, uint32_t size)
{
    if (!g.device || !g.recording) return;
    if (!vk::textures::BoundInThisSegment(physical, size)) return;
    CloseSegment();
    g.streamWriteSegments++;
}

void vk::renderer::BeforeCompletion()
{
    g.completions++;
    if (!g.device || !g.recording || !g.segmentDraws) return;
    CloseSegment();
}

void vk::renderer::CollectOcclusionQueries(void (*deliver)(uint32_t tag, uint64_t samples))
{
    // In the order the title closed them; a later bracket is not handed over
    // before an earlier one.
    size_t done = 0;
    for (State::PendingQuery& query : g.pendingQueries)
    {
        if (!query.read && !Finished(query)) break;
        if (!query.read) Read(query);
        deliver(query.tag, query.samples);
        done++;
    }
    g.pendingQueries.erase(g.pendingQueries.begin(), g.pendingQueries.begin() + done);
}

#endif  // MW2_HAVE_VULKAN
