#include "texture_cache.h"
#include "../../diagnostics.h"

#include "pipeline.h"
#include "recorder.h"
#include "texture_formats.h"
#include "../texture.h"
#include "../memory_watch.h"
#include "renderer.h"
#include "../../env.h"
#include "../../guest.h"
#include "../../image_move.h"
#include "../../kernel/physical.h"
#include "../../log.h"
#include "../../stutters.h"
#include "../../words_hash.h"

#ifndef MW2_HAVE_VULKAN
// No loader, so nothing here can be built. Every caller tolerates a cache that
// never comes up, because that is also what happens on a machine with no GPU.
bool     vk::textures::Initialise() { return false; }
void     vk::textures::Shutdown() {}
bool     vk::textures::Ready() { return false; }
uint64_t vk::textures::Upload(const gpu::TextureFetch&, const char** error)
{
    if (error) *error = "built without Vulkan";
    return kNone;
}
uint64_t vk::textures::UploadData(const gpu::TextureData&, uint32_t, const char** error)
{
    if (error) *error = "built without Vulkan";
    return kNone;
}
uint64_t vk::textures::Adopt(uint64_t, void*, const gpu::TextureFetch&) { return kNone; }
void vk::textures::ForgetSets() {}
void* vk::textures::DescriptorSet(const uint64_t*, const uint8_t*) { return nullptr; }
bool  vk::textures::Readback(uint64_t, std::vector<uint8_t>&, const char** error)
{
    if (error) *error = "built without Vulkan";
    return false;
}
uint64_t vk::textures::NoteDrawnInWorld(uint64_t id) { return id; }
void vk::textures::NewFrame() {}
void vk::textures::Report() {}
void* vk::textures::EndSegment() { return nullptr; }
void* vk::textures::EndSubmission() { return nullptr; }
uint32_t vk::textures::Version(uint64_t) { return 0; }
bool vk::textures::BoundInThisSegment(uint32_t, uint32_t) { return false; }
void vk::textures::TakeLateRestages(std::vector<uint64_t>& ids) { ids.clear(); }
uint64_t vk::textures::FrameNumber() { return 0; }
uint64_t vk::textures::LiveBytes() { return 0; }
uint64_t vk::textures::Budget() { return 0; }
void vk::textures::SetBudget(uint64_t) {}
void vk::textures::MemoryWritten(uint32_t, uint32_t) {}
void vk::textures::BeginUploads(uint32_t) {}
#else

#include <algorithm>
#include <array>
#include <chrono>
#include <cstring>
#include <map>
#include <deque>
#include <string>
#include <unordered_map>

#include <vulkan/vulkan.h>
#include "util.h"
#include "image_memory.h"

namespace
{
    // MW2_FLASH_HUNT=1 (tools/flash_hunt.sh): every texture that reaches the
    // screen with nothing in it gets its line, not only the first few, so each
    // can be matched with a flash somebody saw.
    bool FlashHunt()
    {
        static const bool on = diag::Flag("MW2_FLASH_HUNT");
        return on;
    }

    struct Image
    {
        VkImage image = VK_NULL_HANDLE;
        vk::imagememory::Range memory;
        VkImageView view = VK_NULL_HANDLE;
        // Borrowed from the sampler cache; what an id that names no sampler
        // of its own is sampled with.
        VkSampler sampler = VK_NULL_HANDLE;
        VkFormat format = VK_FORMAT_UNDEFINED;
        uint32_t width = 0, height = 0;
        uint32_t blocksWide = 0, blocksHigh = 0, bytesPerBlock = 0;
        uint32_t blockWidth = 1, blockHeight = 1;
        uint32_t swizzle = 0x688;             // XYZW, the identity
        VkDeviceSize bytes = 0;
        // Recorded, but a 1D texture is still made a 2D image one row tall: the
        // translator samples every 1D fetch as 2D at v = 0, because the title
        // also reads 2D textures along a line through 1D fetches, and a module
        // and view that disagree on the dimension are invalid either way round.
        bool oneDimensional = false;
        // Six for a cube map, which is a real cube: the shader turns the face and
        // two coordinates the title computed back into a direction, so the
        // hardware picks the level from a direction that does not jump at the
        // face edges. For a volume the same count is the depth, and the image is
        // a real 3D one -- an array bound where the module says 3D samples as
        // zero.
        uint32_t layers = 1;
        bool volume = false;
        // A title that rewrites a texture in place leaves its fetch constant
        // alone, so the cache key cannot see it. The signature can.
        uint64_t signature = 0;
        uint64_t checkedFrame = ~uint64_t(0);
        // How many frames to leave before signing this one again. A texture
        // that has not moved in a while is watched less and less, because
        // signing every bound texture every frame cost ten seconds of a ninety
        // second run. One the guest has rewritten even once is watched every
        // frame from then on: the title rewrites its model-lighting table in
        // place whenever it hands out new patches.
        uint64_t signPeriod = 1;
        uint64_t queuedSegment = ~0ull;   // the segment it was last put on rewrittenThisSegment
        // When its memory is watched (gpu/memory_watch.h), the stamp it was read
        // under: while no page of it has been written since, it is unchanged
        // for certain and nothing need be signed. Zero when it is not watched.
        uint64_t watchStamp = 0;
        uint32_t staged = 0;   // times staged; the draw list's version of it
        uint64_t boundSegment = ~0ull;   // the last segment a draw of which bound it
        bool rewritten = false;
        uint32_t address = 0, xenosFormat = 0;   // physical
        // The mip chain's memory, signed together with the base's; zero for a
        // texture with no chain.
        uint32_t mipAddress = 0;
        size_t mipBytes = 0;
        // Where each level is in the staged bytes. One level for anything
        // that did not come from a fetch constant with a chain.
        std::vector<gpu::TextureData::Level> levels;
        uint32_t fetchWords[6]{};
        // Every fetch constant that names this image: the same texture under
        // each sampler state it has been bound with.
        std::vector<std::array<uint32_t, 6>> names;
        std::array<uint32_t, 6> content{};   // its key in State::byContent
        uint32_t minLevel = 0;               // the lowest level it holds a picture for
        // Read from a block that looked never written, and when that was first
        // seen; read again at the end of its segment (EndSegment).
        bool fromAnEmptyBlock = false, countedDrawn = false;
        uint64_t emptySince = 0;
        size_t sourceBytes = 0;
        bool borrowed = false;                // the view belongs to someone else
        bool pinned = false;                  // never evicted: the magenta marker
        uint64_t lastBound = 0;               // the frame, for eviction
    };

    // Sixteen frames is a quarter of a second at sixty: long enough to be cheap,
    // short enough that a texture that starts moving is caught before it shows.
    constexpr uint64_t kSignPeriodMax = 16;

    struct StagingBuffer
    {
        VkBuffer buffer = VK_NULL_HANDLE;
        VkDeviceMemory memory = VK_NULL_HANDLE;
        uint8_t* mapped = nullptr;
        VkDeviceSize size = 0;
    };

    // The uploads of one renderer slot, and the staging they read from: a
    // command buffer for each segment of the submission (EndSegment), each
    // submitted just ahead of its segment's draws. A submission's uploads are
    // sub-allocated from one buffer, grown for the next time round when they
    // overflow it; what overflows gets a buffer of its own until then.
    struct UploadSlot
    {
        VkCommandPool pool = VK_NULL_HANDLE;
        std::vector<VkCommandBuffer> commands;   // made as segments need them
        size_t segment = 0;                      // the one being recorded into
        bool recording = false;
        StagingBuffer staging;
        VkDeviceSize used = 0, wanted = 0;
        std::vector<StagingBuffer> overflow;
    };
    constexpr VkDeviceSize kStagingLeast = 8ull << 20, kStagingMost = 256ull << 20;

    struct State
    {
        VkDevice device = VK_NULL_HANDLE;
        VkPhysicalDevice physical = VK_NULL_HANDLE;
        VkQueue queue = VK_NULL_HANDLE;
        VkPhysicalDeviceMemoryProperties memory{};
        uint32_t maxDimension = 0;

        VkCommandPool commands = VK_NULL_HANDLE;
        VkCommandBuffer command = VK_NULL_HANDLE;
        VkFence fence = VK_NULL_HANDLE;
        UploadSlot uploadSlots[vk::textures::kUploadSlots];
        UploadSlot* open = nullptr;   // uploads open between BeginUploads and EndSubmission
        uint64_t uploadsBatched = 0, uploadsAlone = 0, stagingOverflows = 0;
        // One pool fills up; a level binds far more distinct combinations of
        // textures than the menu, so pools are added as they are needed.
        std::vector<VkDescriptorPool> descriptors;

        uint64_t frame = 0;
        uint64_t refreshed = 0, resigned = 0, invalidatedByWrites = 0;
        uint64_t signNanos = 0;                       // spent signing, all textures
        uint64_t unchangedByWatch = 0;   // checks the write watch answered without signing

        // The two lists read again at the end of the segment (EndSegment):
        // textures uploaded from a block that looked empty, and textures the
        // guest has been seen to rewrite and a draw of the segment binds. Our
        // parse runs ahead of where the console's GPU would be, and that GPU
        // reads a texture when the draw executes, so a texture signed when a
        // draw binds it can still change before the draw would have run.
        std::vector<uint64_t> emptyThisSegment, rewrittenThisSegment;
        std::vector<uint64_t> lateRestages;   // see TakeLateRestages
        uint64_t segment = 0;                 // EndSegment calls so far
        uint64_t segmentsEnded = 0, segmentsWithUploads = 0;
        bool endingSubmission = false;   // inside EndSubmission
        uint64_t rereadRewritten = 0, changedAfterFirstBind = 0;
        // A texture re-read at a segment's end because its memory changed
        // after its draws were parsed, and then never bound again: the title
        // freed it and put something else there. Read before the command
        // processor reports those draws done, that is still the texture the
        // draws were made with; read after, it is whatever replaced it.
        struct LateRead { uint64_t id, frame; };
        std::vector<LateRead> lateReads;
        uint64_t lateReadsBoundAgain = 0, lateReadsOnLastUse = 0;
        uint64_t emptyDrawnInWorld = 0, refilledBeforeSubmit = 0, stillEmptyAtSubmit = 0;

        // MW2_MARK_EMPTY=1: the id of a flat magenta texture, bound in place of
        // anything uploaded from a block with nothing in it.
        uint64_t magenta = 0;
        uint64_t markedEmpty = 0;
        uint64_t linearisedRefused = 0;   // no sRGB form of the format to linearise with
        // Ids are one-based indices into this, so zero is never a texture.
        std::vector<Image> images;
        // A fetch constant names a texture and how it is sampled. byFetch has
        // the id for all six dwords, which is the image and the sampler;
        // byContent has the image for the dwords less the sampler's bits
        // (ContentOf), so a texture bound under several sampler states is
        // held once.
        std::unordered_map<std::array<uint32_t, 6>, uint64_t, WordsHash> byFetch;
        std::unordered_map<std::array<uint32_t, 6>, uint64_t, WordsHash> byContent;
        std::vector<uint64_t> freeIds;                // slots of g.images to use again
        std::vector<VkSampler> samplerList;           // an id's sampler, by its index less one
        std::map<uint64_t, uint32_t> samplerIndex;    // sampler key -> that index
        std::map<uint64_t, uint64_t> adopted;         // caller's key -> id
        std::map<uint64_t, VkSampler> samplers;
        // A set, the pool it came from and the frame it was last handed out
        // in: one nothing has bound for kUnusedFrames goes back to its pool.
        struct Set { VkDescriptorSet set; uint32_t pool; uint64_t lastUsed; };
        std::unordered_map<std::array<uint64_t, vk::textures::kSlots>, Set, WordsHash> sets;
        // Sets dropped from the cache all at once, which commands not yet run
        // may still bind: freed when they are that old too.
        std::vector<Set> retiredSets;
        uint32_t allocPool = 0;   // the pool the last set came from
        // Images nothing names any more, waiting to be destroyed a few a frame.
        std::deque<Image> doomed;
        Image fallback;
        Image fallbackCube, fallback3D;   // for slots declared as a cube map, a volume
        uint64_t kindMismatches = 0;

        uint32_t uploads = 0, failures = 0, descriptorSets = 0;
        uint64_t uploadedBytes = 0;
        uint64_t liveBytes = 0, budget = 0;   // what the uploaded images hold, and may
        uint64_t evicted = 0, evictedBytes = 0, evictionPasses = 0;
        uint64_t stale = 0, staleBytes = 0;   // released because their memory was rewritten
        uint64_t staleNotReally = 0;          // kept: a page was written, their bytes were not
        uint64_t shared = 0;                  // fetch constants answered by an image already held
        std::map<std::string, uint32_t> failureReasons;
        std::string lastError;
    };
    State g;

    const char* Explain(VkResult r)
    {
        switch (r)
        {
        case VK_SUCCESS: return "ok";
        case VK_ERROR_OUT_OF_HOST_MEMORY: return "out of host memory";
        case VK_ERROR_OUT_OF_DEVICE_MEMORY: return "out of device memory";
        case VK_ERROR_OUT_OF_POOL_MEMORY: return "descriptor pool full";
        case VK_ERROR_FORMAT_NOT_SUPPORTED: return "format not supported";
        default: return "failed";
        }
    }

    bool Fail(const char* what, const char** error)
    {
        g.lastError = what;
        g.failures++;
        g.failureReasons[g.lastError]++;
        if (error) *error = g.lastError.c_str();
        return false;
    }

    // An upload outside a submission's segments, and a read-back: each records,
    // submits and waits on its own.
    VkCommandBuffer BeginCommands()
    {
        // After everything the frames before it have queued, as it was when
        // they were submitted where they were recorded.
        vk::record::Drain();
        vkResetCommandPool(g.device, g.commands, 0);
        VkCommandBufferBeginInfo begin{ VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
        begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        if (vkBeginCommandBuffer(g.command, &begin) != VK_SUCCESS) return VK_NULL_HANDLE;
        return g.command;
    }

    bool EndCommands()
    {
        if (vkEndCommandBuffer(g.command) != VK_SUCCESS) return false;
        VkSubmitInfo submit{ VK_STRUCTURE_TYPE_SUBMIT_INFO };
        submit.commandBufferCount = 1;
        submit.pCommandBuffers = &g.command;
        {
            std::lock_guard lock(vk::pipeline::QueueMutex());
            vkResetFences(g.device, 1, &g.fence);
            if (vk::pipeline::Failed(vkQueueSubmit(g.queue, 1, &submit, g.fence),
                                     "a texture upload"))
                return false;
        }
        return !vk::pipeline::Failed(vkWaitForFences(g.device, 1, &g.fence, VK_TRUE, UINT64_MAX),
                                     "a texture upload's fence");
    }

    bool MakeBuffer(VkDeviceSize size, VkBufferUsageFlags usage, VkMemoryPropertyFlags want,
                    VkBuffer& buffer, VkDeviceMemory& memory)
    {
        VkBufferCreateInfo info{ VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO };
        info.size = size;
        info.usage = usage;
        info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
        if (vkCreateBuffer(g.device, &info, nullptr, &buffer) != VK_SUCCESS) return false;

        VkMemoryRequirements needs{};
        vkGetBufferMemoryRequirements(g.device, buffer, &needs);
        const uint32_t type = vk::util::FindMemory(g.memory, needs.memoryTypeBits, want);
        if (type == UINT32_MAX) { vkDestroyBuffer(g.device, buffer, nullptr); buffer = VK_NULL_HANDLE; return false; }

        VkMemoryAllocateInfo allocate{ VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
        allocate.allocationSize = needs.size;
        allocate.memoryTypeIndex = type;
        if (vkAllocateMemory(g.device, &allocate, nullptr, &memory) != VK_SUCCESS)
        {
            vkDestroyBuffer(g.device, buffer, nullptr);
            buffer = VK_NULL_HANDLE;
            return false;
        }
        vkBindBufferMemory(g.device, buffer, memory, 0);
        return true;
    }

    bool MakeImage(Image& out, const char** error)
    {
        // Made by hand rather than read from a fetch constant: all of it is the
        // one level.
        if (out.levels.empty())
        {
            gpu::TextureData::Level only;
            only.width = out.width;
            only.height = out.height;
            only.depth = out.volume ? out.layers : 1;
            only.blocksWide = out.blocksWide;
            only.blocksHigh = out.blocksHigh;
            only.layers = out.layers;
            only.size = size_t(out.bytes);
            out.levels.push_back(only);
        }
        VkFormatProperties properties{};
        vkGetPhysicalDeviceFormatProperties(g.physical, out.format, &properties);
        // A driver with no BC support would sample garbage rather than refuse.
        if (!(properties.optimalTilingFeatures & VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT))
            return Fail("device cannot sample this format", error);

        const bool cube = !out.volume && out.layers == 6;
        if (cube && out.width != out.height) return Fail("a cube map that is not square", error);

        VkImageCreateInfo info{ VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO };
        if (cube) info.flags = VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT;
        // A 1D texture is a 2D image one row tall, which is how the translator
        // declares every 1D fetch -- see the note on oneDimensional.
        info.imageType = out.volume ? VK_IMAGE_TYPE_3D : VK_IMAGE_TYPE_2D;
        info.format = out.format;
        info.extent = { out.width, out.height, out.volume ? out.layers : 1 };
        info.mipLevels = uint32_t(std::max<size_t>(out.levels.size(), 1));
        info.arrayLayers = out.volume ? 1 : out.layers;
        info.samples = VK_SAMPLE_COUNT_1_BIT;
        info.tiling = VK_IMAGE_TILING_OPTIMAL;
        // TRANSFER_SRC only so an upload can be read back and compared; it costs
        // nothing and is the only way to prove the round trip.
        info.usage = VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT |
                     VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
        info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
        info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        VkResult r = vkCreateImage(g.device, &info, nullptr, &out.image);
        if (r != VK_SUCCESS) return Fail(Explain(r), error);

        VkMemoryRequirements needs{};
        vkGetImageMemoryRequirements(g.device, out.image, &needs);
        const uint32_t type = vk::util::FindMemory(g.memory, needs.memoryTypeBits,
                                                   VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
        if (type == UINT32_MAX) return Fail("no device-local memory", error);

        out.memory = vk::imagememory::Allocate(g.device, needs, type);
        if (!out.memory) return Fail(Explain(VK_ERROR_OUT_OF_DEVICE_MEMORY), error);
        vkBindImageMemory(g.device, out.image, out.memory.memory, out.memory.offset);

        VkImageViewCreateInfo view{ VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO };
        view.image = out.image;
        view.viewType = out.volume ? VK_IMAGE_VIEW_TYPE_3D
                      : cube       ? VK_IMAGE_VIEW_TYPE_CUBE
                                   : VK_IMAGE_VIEW_TYPE_2D;
        view.format = out.format;
        // The fetch constant's swizzle is not decoration: a font atlas whose glyphs
        // are in one channel is read through a swizzle that puts that channel where
        // the shader expects it, so without this the text samples as zero.
        //
        // Because the untiler undoes the fetch constant's own endianness, a guest
        // component lands in the host channel of the same index -- so once the
        // swizzle has been read through the host format's own (see UploadOne) it
        // maps straight onto Vulkan's.
        auto component = [](uint32_t selector) {
            switch (selector & 7)
            {
            case 0:  return VK_COMPONENT_SWIZZLE_R;
            case 1:  return VK_COMPONENT_SWIZZLE_G;
            case 2:  return VK_COMPONENT_SWIZZLE_B;
            case 3:  return VK_COMPONENT_SWIZZLE_A;
            case 4:  return VK_COMPONENT_SWIZZLE_ZERO;
            case 5:  return VK_COMPONENT_SWIZZLE_ONE;
            default: return VK_COMPONENT_SWIZZLE_IDENTITY;
            }
        };
        view.components = { component(out.swizzle >> 0), component(out.swizzle >> 3),
                            component(out.swizzle >> 6), component(out.swizzle >> 9) };
        view.subresourceRange = { VK_IMAGE_ASPECT_COLOR_BIT, 0, VK_REMAINING_MIP_LEVELS, 0,
                                  out.volume ? 1u : out.layers };
        r = vkCreateImageView(g.device, &view, nullptr, &out.view);
        if (r != VK_SUCCESS) return Fail(Explain(r), error);
        return true;
    }

    void DestroyImage(Image& image)
    {
        if (image.borrowed) { image = Image{}; return; }
        if (image.view) vkDestroyImageView(g.device, image.view, nullptr);
        if (image.image) vkDestroyImage(g.device, image.image, nullptr);
        vk::imagememory::Free(g.device, image.memory);
        image = Image{};
    }

    // One region a level, from the bytes staged at `offset`. `bufferRowLength`
    // is in texels even for a block format, so it is the block count times the
    // block width, which is what the untiler produces.
    std::vector<VkBufferImageCopy> Regions(const Image& image, VkDeviceSize offset)
    {
        std::vector<VkBufferImageCopy> regions;
        for (uint32_t level = 0; level < image.levels.size(); level++)
        {
            const gpu::TextureData::Level& l = image.levels[level];
            VkBufferImageCopy region{};
            region.bufferOffset = offset + l.offset;
            region.bufferRowLength = l.blocksWide * image.blockWidth;
            region.bufferImageHeight = l.blocksHigh * image.blockHeight;
            region.imageSubresource = { VK_IMAGE_ASPECT_COLOR_BIT, level, 0,
                                        image.volume ? 1u : image.layers };
            region.imageExtent = { l.width, l.height, image.volume ? l.depth : 1u };
            regions.push_back(region);
        }
        return regions;
    }

    bool MakeStaging(StagingBuffer& out, VkDeviceSize size)
    {
        if (!MakeBuffer(size, VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
                        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                        out.buffer, out.memory))
            return false;
        void* mapped = nullptr;
        if (vkMapMemory(g.device, out.memory, 0, size, 0, &mapped) != VK_SUCCESS)
        {
            vkDestroyBuffer(g.device, out.buffer, nullptr);
            vkFreeMemory(g.device, out.memory, nullptr);
            out = StagingBuffer{};
            return false;
        }
        out.mapped = static_cast<uint8_t*>(mapped);
        out.size = size;
        return true;
    }

    void FreeStaging(StagingBuffer& staging)
    {
        if (staging.buffer) vkDestroyBuffer(g.device, staging.buffer, nullptr);
        if (staging.memory) vkFreeMemory(g.device, staging.memory, nullptr);
        staging = StagingBuffer{};
    }

    // The copy and the barriers either side of it. The image's earlier
    // contents are not kept, but its earlier readers -- a submission still
    // running, or the draws of this one before it -- are waited for.
    void RecordCopy(VkCommandBuffer cmd, Image& image, VkBuffer source, VkDeviceSize offset)
    {
        constexpr VkPipelineStageFlags kShaders =
            VK_PIPELINE_STAGE_VERTEX_SHADER_BIT | VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT;
        vk::util::Barrier(cmd, image.image, VK_IMAGE_ASPECT_COLOR_BIT, VK_IMAGE_LAYOUT_UNDEFINED,
                          VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 0, VK_ACCESS_TRANSFER_WRITE_BIT,
                          kShaders, VK_PIPELINE_STAGE_TRANSFER_BIT);
        const std::vector<VkBufferImageCopy> regions = Regions(image, offset);
        vkCmdCopyBufferToImage(cmd, source, image.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                               uint32_t(regions.size()), regions.data());
        vk::util::Barrier(cmd, image.image, VK_IMAGE_ASPECT_COLOR_BIT,
                          VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                          VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_ACCESS_TRANSFER_WRITE_BIT,
                          VK_ACCESS_SHADER_READ_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, kShaders);
    }

    bool RecordUpload(UploadSlot& slot, Image& image, const uint8_t* bytes, size_t size,
                      const char** error)
    {
        if (!slot.recording)
        {
            // The pool is this thread's alone, so a segment's buffer is made
            // the first time a submission has that many.
            if (slot.segment >= slot.commands.size())
            {
                VkCommandBufferAllocateInfo allocate{ VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO };
                allocate.commandPool = slot.pool;
                allocate.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
                allocate.commandBufferCount = 1;
                VkCommandBuffer made = VK_NULL_HANDLE;
                if (vkAllocateCommandBuffers(g.device, &allocate, &made) != VK_SUCCESS)
                    return Fail("no upload command buffer", error);
                slot.commands.push_back(made);
            }
            VkCommandBufferBeginInfo begin{ VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
            begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
            if (vkBeginCommandBuffer(slot.commands[slot.segment], &begin) != VK_SUCCESS)
                return Fail("no upload command buffer", error);
            slot.recording = true;
        }
        // Offsets a multiple of sixteen suit every block size uploaded.
        const VkDeviceSize at = (slot.used + 15) & ~VkDeviceSize(15);
        slot.wanted = ((slot.wanted + 15) & ~VkDeviceSize(15)) + size;
        StagingBuffer* into = &slot.staging;
        VkDeviceSize offset = at;
        if (!slot.staging.buffer || at + size > slot.staging.size)
        {
            g.stagingOverflows++;
            slot.overflow.emplace_back();
            if (!MakeStaging(slot.overflow.back(), size))
            {
                slot.overflow.pop_back();
                return Fail("no staging buffer", error);
            }
            into = &slot.overflow.back();
            offset = 0;
        }
        else slot.used = at + size;
        std::memcpy(into->mapped + offset, bytes, size);
        RecordCopy(slot.commands[slot.segment], image, into->buffer, offset);
        g.uploadsBatched++;
        return true;
    }

    bool StageInto(Image& image, const uint8_t* bytes, size_t size, const char** error)
    {
        image.staged++;
        if (g.open) return RecordUpload(*g.open, image, bytes, size, error);

        StagingBuffer staging;
        if (!MakeStaging(staging, size)) return Fail("no staging buffer", error);
        std::memcpy(staging.mapped, bytes, size);
        bool ok = false;
        if (VkCommandBuffer cmd = BeginCommands())
        {
            RecordCopy(cmd, image, staging.buffer, 0);
            ok = EndCommands();
        }
        FreeStaging(staging);
        g.uploadsAlone++;
        if (!ok) return Fail("upload submission failed", error);
        return true;
    }

    VkSamplerAddressMode AddressMode(gpu::TextureClamp clamp)
    {
        switch (clamp)
        {
        case gpu::TextureClamp::Repeat:               return VK_SAMPLER_ADDRESS_MODE_REPEAT;
        case gpu::TextureClamp::MirroredRepeat:       return VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT;
        case gpu::TextureClamp::ClampToEdge:          return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        case gpu::TextureClamp::MirrorClampToEdge:    return VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE;
        // "Halfway" clamps at the edge texel's centre rather than its outer edge,
        // which Vulkan has no mode for. Clamping is the near miss.
        case gpu::TextureClamp::ClampToHalfway:       return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        case gpu::TextureClamp::MirrorClampToHalfway: return VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE;
        case gpu::TextureClamp::ClampToBorder:        return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER;
        case gpu::TextureClamp::MirrorClampToBorder:  return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER;
        }
        return VK_SAMPLER_ADDRESS_MODE_REPEAT;
    }

    VkFilter FilterOf(gpu::TextureFilter filter)
    {
        return filter == gpu::TextureFilter::Point ? VK_FILTER_NEAREST : VK_FILTER_LINEAR;
    }

    // One sampler per distinct state, keyed on the fetch constant's own bits
    // and the lowest level the texture may be sampled at.
    VkSampler SamplerFor(uint64_t key)
    {
        auto found = g.samplers.find(key);
        if (found != g.samplers.end()) return found->second;

        VkSamplerCreateInfo info{ VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO };
        info.magFilter = FilterOf(gpu::TextureFilter((key >> 0) & 3));
        info.minFilter = FilterOf(gpu::TextureFilter((key >> 2) & 3));
        info.mipmapMode = gpu::TextureFilter((key >> 4) & 3) == gpu::TextureFilter::Linear
                            ? VK_SAMPLER_MIPMAP_MODE_LINEAR : VK_SAMPLER_MIPMAP_MODE_NEAREST;
        info.addressModeU = AddressMode(gpu::TextureClamp((key >> 6) & 7));
        info.addressModeV = AddressMode(gpu::TextureClamp((key >> 9) & 7));
        info.addressModeW = AddressMode(gpu::TextureClamp((key >> 12) & 7));
        // A cube's faces clamp at their edges, each filtered on its own as
        // Direct3D 9 filters them, where the device allows it.
        if ((key >> 24) & 1)
            info.addressModeU = info.addressModeV = info.addressModeW =
                VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        if (vk::pipeline::NonSeamlessCubes())
            info.flags |= VK_SAMPLER_CREATE_NON_SEAMLESS_CUBE_MAP_BIT_EXT;
        info.borderColor = ((key >> 15) & 3) == 1 ? VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE
                                                  : VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
        // The image holds exactly the levels the fetch constant allows above
        // the lowest, so only that end needs a clamp. `BaseMap` samples the
        // lowest level alone. A clamp of exactly that level would pin the LOD
        // at it, and a LOD that never rises above zero never picks the min
        // filter; a quarter lets it, while every level choice still rounds to
        // the lowest. Follows Xenia (BSD-3).
        info.minLod = float((key >> 17) & 15);
        info.maxLod = gpu::TextureFilter((key >> 4) & 3) == gpu::TextureFilter::BaseMap
                        ? info.minLod + 0.25f : VK_LOD_CLAMP_NONE;
        // 1:1 is no anisotropy; 2:1 and up double each step. Only a sample
        // whose LOD comes from derivatives filters along them, which is the
        // hardware's rule too.
        const uint32_t aniso = (key >> 21) & 7;
        if (aniso >= 2 && aniso <= 5 && vk::pipeline::MaxAnisotropy() > 1.0f)
        {
            info.anisotropyEnable = VK_TRUE;
            info.maxAnisotropy =
                std::min(float(1u << (aniso - 1)), vk::pipeline::MaxAnisotropy());
        }

        VkSampler sampler = VK_NULL_HANDLE;
        if (vkCreateSampler(g.device, &info, nullptr, &sampler) != VK_SUCCESS) return VK_NULL_HANDLE;
        g.samplers[key] = sampler;
        return sampler;
    }

    // The sampler's place in an id, making it on first sight; zero when it
    // could not be made.
    uint32_t SamplerIndexFor(uint64_t key)
    {
        auto found = g.samplerIndex.find(key);
        if (found != g.samplerIndex.end()) return found->second;
        VkSampler sampler = SamplerFor(key);
        if (!sampler) return 0;
        g.samplerList.push_back(sampler);
        return g.samplerIndex[key] = uint32_t(g.samplerList.size());
    }

    // `minLevel` is the lowest level the image holds a picture for. Under
    // `BaseMap` it is the base whenever the base was read, whatever the fetch
    // constant's own lowest level.
    uint64_t SamplerKey(const gpu::TextureFetch& fetch, uint32_t minLevel)
    {
        if (fetch.MipFilter() == gpu::TextureFilter::BaseMap && minLevel &&
            gpu::ExtentsOf(fetch).baseBytes)
            minLevel = 0;
        return (uint64_t(fetch.MagFilter()) << 0) | (uint64_t(fetch.MinFilter()) << 2) |
               (uint64_t(fetch.MipFilter()) << 4) | (uint64_t(fetch.ClampX()) << 6) |
               (uint64_t(fetch.ClampY()) << 9) | (uint64_t(fetch.ClampZ()) << 12) |
               (uint64_t(fetch.BorderColour()) << 15) | (uint64_t(minLevel & 15) << 17) |
               (uint64_t(fetch.Anisotropy()) << 21) |
               (uint64_t(fetch.Dimension() == gpu::TextureDimension::Cube) << 24);
    }

    // Set 1 declares thirty-two combined image samplers whatever the shader
    // samples, and a descriptor a shader never reads still has to be valid.
    // One per kind a shader can declare a slot as -- 2D, a cube map, a volume --
    // because a descriptor whose view is not of the kind the module declares is
    // invalid, and the title does bind a 2D texture where a program fetches a
    // volume, and a 2D one where it fetches a cube.
    bool MakeFallbackOf(Image& out, uint32_t layers, bool volume)
    {
        out.format = VK_FORMAT_R8G8B8A8_UNORM;
        out.width = out.height = 1;
        out.blocksWide = out.blocksHigh = 1;
        out.bytesPerBlock = 4;
        out.layers = layers;
        out.volume = volume;
        out.bytes = 4 * layers;
        if (!MakeImage(out, nullptr)) return false;
        const std::vector<uint8_t> texels(4 * layers, 0);
        if (!StageInto(out, texels.data(), texels.size(), nullptr)) return false;
        out.sampler = SamplerFor(0);
        return out.sampler != VK_NULL_HANDLE;
    }

    bool MakeFallback()
    {
        return MakeFallbackOf(g.fallback, 1, false) &&
               MakeFallbackOf(g.fallbackCube, 6, false) &&
               MakeFallbackOf(g.fallback3D, 1, true);
    }

    // The kind a view was made as, in shader::Translation::textureKinds' terms.
    uint8_t KindOf(const Image& image)
    {
        return image.volume ? 2 : image.layers > 1 ? 1 : 0;
    }

    const Image& FallbackOf(uint8_t kind)
    {
        return kind == 2 ? g.fallback3D : kind == 1 ? g.fallbackCube : g.fallback;
    }

    // A slot of g.images, one-based: zero means nothing. A released image's
    // slot is used again; nothing still holds its id by then (Release).
    uint64_t NewSlot()
    {
        if (!g.freeIds.empty())
        {
            const uint64_t id = g.freeIds.back();
            g.freeIds.pop_back();
            return id;
        }
        g.images.emplace_back();
        return uint64_t(g.images.size());
    }

    uint64_t Store(Image& image)
    {
        image.lastBound = g.frame;
        image.boundSegment = g.segment;
        g.uploads++;
        g.uploadedBytes += image.bytes;
        g.liveBytes += image.bytes;
        const uint64_t id = NewSlot();
        g.images[size_t(id - 1)] = image;
        return id;
    }

    // An id is an image and, above bit 32, the sampler it is bound with: an
    // index into State::samplerList plus one, or zero for the image's own.
    constexpr uint64_t kImageBits = 0xFFFFFFFFull;
    constexpr uint32_t kSamplerShift = 32;

    Image* Find(uint64_t id)
    {
        id &= kImageBits;
        if (!id || id > g.images.size()) return nullptr;
        return &g.images[size_t(id - 1)];
    }

    VkSampler SamplerOf(uint64_t id, const Image& image)
    {
        const uint32_t index = uint32_t(id >> kSamplerShift) & 0x3FFFFFFFu;
        return index && index <= g.samplerList.size() ? g.samplerList[index - 1] : image.sampler;
    }

    // Every byte of the texture's memory, four lanes wide to keep the multiplies
    // off one dependency chain. A change to any single word is always seen, since
    // each step is a bijection of the lane's state; sampling instead missed the
    // model-lighting table's 4x4-texel patches.
    uint64_t SignatureOf(const uint8_t* base, size_t bytes)
    {
        constexpr uint64_t kPrime = 0x100000001B3ull;
        uint64_t lane[4] = { 0xCBF29CE484222325ull, 0x84222325CBF29CE4ull,
                             0x9E3779B97F4A7C15ull, 0x7F4A7C159E3779B9ull };
        size_t at = 0;
        for (; at + 32 <= bytes; at += 32)
        {
            uint64_t w[4];
            std::memcpy(w, base + at, sizeof w);
            for (int i = 0; i < 4; i++) lane[i] = (lane[i] ^ w[i]) * kPrime;
        }
        for (; at < bytes; at++) lane[at & 3] = (lane[at & 3] ^ base[at]) * kPrime;
        uint64_t hash = uint64_t(bytes) * 0x9E3779B97F4A7C15ull;
        for (int i = 0; i < 4; i++) hash = (hash ^ lane[i]) * kPrime ^ (lane[i] >> 29);
        return hash;
    }

    uint64_t TimedSignatureOf(const uint8_t* base, size_t bytes)
    {
        if constexpr (!diag::kOn) return SignatureOf(base, bytes);
        const auto started = std::chrono::steady_clock::now();
        const uint64_t signature = SignatureOf(base, bytes);
        g.signNanos += uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(
                                    std::chrono::steady_clock::now() - started).count());
        return signature;
    }

    // `signature` and `sourceBytes` describe the guest memory the texture was
    // read from, for a texture that came from a fetch constant.
    uint64_t UploadOne(const gpu::TextureData& data, uint32_t xenosFormat, uint64_t samplerKey,
                       uint32_t swizzle, bool oneDimensional, const char** error,
                       uint64_t signature = 0, size_t sourceBytes = 0, bool linearise = false)
    {
        if (!g.device) { if (error) *error = "no device"; return vk::textures::kNone; }

        int format = vk::formats::VulkanFormatFor(xenosFormat);
        if (format == VK_FORMAT_UNDEFINED)
        {
            Fail("no Vulkan equivalent for the format", error);
            return vk::textures::kNone;
        }
        // The fetch constant asked for the stored value to be linearised. An
        // sRGB image does that in the sampler; the bytes uploaded are the same
        // ones either way, so only the format changes.
        if (linearise)
        {
            const int srgb = vk::formats::SrgbFormatFor(format);
            if (srgb != VK_FORMAT_UNDEFINED) format = srgb;
            else                             g.linearisedRefused++;
        }
        const gpu::TextureFormatInfo info = gpu::TextureFormatOf(xenosFormat);

        // A desynchronised command stream leaves fetch constants that decode to
        // plausible textures of impossible size. Creating one is undefined behaviour
        // rather than an error -- the driver here builds the image and returns
        // garbage -- so the size has to be checked.
        if (data.width > g.maxDimension || data.height > g.maxDimension)
        {
            Fail("larger than the device allows", error);
            return vk::textures::kNone;
        }

        Image image;
        image.oneDimensional = oneDimensional && data.height == 1;
        image.layers = data.layers;
        image.volume = data.volume;
        image.sourceBytes = sourceBytes;
        image.signature = signature;
        // What the fetch constant asks for is in guest channels, which are not
        // always the host ones: a guest format with fewer channels than the host
        // format carrying it repeats its last, rather than reading the constants
        // the host format supplies.
        image.swizzle =
            vk::formats::ComposeSwizzle(swizzle, vk::formats::HostSwizzleFor(xenosFormat));
        image.format = VkFormat(format);
        image.width = data.width;
        image.height = data.height;
        image.blocksWide = data.blocksWide;
        image.blocksHigh = data.blocksHigh;
        image.bytesPerBlock = data.bytesPerBlock;
        image.blockWidth = data.expanded ? 1 : info.blockWidth;
        image.blockHeight = data.expanded ? 1 : info.blockHeight;
        image.bytes = data.bytes.size();
        image.levels = data.levels;

        if (!MakeImage(image, error)) { DestroyImage(image); return vk::textures::kNone; }
        if (!StageInto(image, data.bytes.data(), data.bytes.size(), error))
        {
            DestroyImage(image);
            return vk::textures::kNone;
        }
        image.sampler = SamplerFor(samplerKey);
        if (!image.sampler)
        {
            DestroyImage(image);
            Fail("no sampler", error);
            return vk::textures::kNone;
        }
        return Store(image);
    }
}

namespace
{
    // A set per distinct combination of bound textures. The menu needs a couple of
    // hundred; a level needs thousands at once, so the answer is another pool
    // rather than a bigger one.
    constexpr uint32_t kSetsPerPool = 1024;

    bool AddDescriptorPool()
    {
        VkDescriptorPoolSize size{};
        size.type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        size.descriptorCount = kSetsPerPool * vk::textures::kSlots;
        VkDescriptorPoolCreateInfo info{ VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO };
        // A set nothing binds any more is freed on its own (SweepSets).
        info.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
        info.maxSets = kSetsPerPool;
        info.poolSizeCount = 1;
        info.pPoolSizes = &size;
        VkDescriptorPool pool = VK_NULL_HANDLE;
        if (vkCreateDescriptorPool(g.device, &info, nullptr, &pool) != VK_SUCCESS) return false;
        g.descriptors.push_back(pool);
        return true;
    }
}

bool vk::textures::Initialise()
{
    if (g.device) return true;
    if (!vk::pipeline::Ready() && !vk::pipeline::Initialise()) return false;

    g.device = static_cast<VkDevice>(vk::pipeline::Device());
    g.physical = static_cast<VkPhysicalDevice>(vk::pipeline::PhysicalDevice());
    g.queue = static_cast<VkQueue>(vk::pipeline::Queue());
    if (!g.device || !g.queue)
    {
        LOGW("textures: the pipeline device has no queue to upload on");
        g.device = VK_NULL_HANDLE;
        return false;
    }
    vkGetPhysicalDeviceMemoryProperties(g.physical, &g.memory);
    VkPhysicalDeviceProperties properties{};
    vkGetPhysicalDeviceProperties(g.physical, &properties);
    g.maxDimension = properties.limits.maxImageDimension2D;
    // Half the device's own memory, within reason, unless MW2_TEXTURE_BUDGET_MB
    // says otherwise.
    VkDeviceSize deviceLocal = 0;
    for (uint32_t i = 0; i < g.memory.memoryHeapCount; i++)
        if (g.memory.memoryHeaps[i].flags & VK_MEMORY_HEAP_DEVICE_LOCAL_BIT)
            deviceLocal = std::max(deviceLocal, g.memory.memoryHeaps[i].size);
    g.budget = env::Number("MW2_TEXTURE_BUDGET_MB") << 20;
    if (!g.budget) g.budget = std::clamp<uint64_t>(deviceLocal / 2, 256ull << 20, 2048ull << 20);

    VkCommandPoolCreateInfo pool{ VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO };
    pool.flags = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT;
    pool.queueFamilyIndex = vk::pipeline::QueueFamily();
    if (vkCreateCommandPool(g.device, &pool, nullptr, &g.commands) != VK_SUCCESS)
    {
        LOGW("textures: no command pool");
        Shutdown();
        return false;
    }

    VkCommandBufferAllocateInfo allocate{ VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO };
    allocate.commandPool = g.commands;
    allocate.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    allocate.commandBufferCount = 1;
    if (vkAllocateCommandBuffers(g.device, &allocate, &g.command) != VK_SUCCESS)
    {
        LOGW("textures: no command buffer");
        Shutdown();
        return false;
    }

    VkFenceCreateInfo fence{ VK_STRUCTURE_TYPE_FENCE_CREATE_INFO };
    if (vkCreateFence(g.device, &fence, nullptr, &g.fence) != VK_SUCCESS)
    {
        LOGW("textures: no fence");
        Shutdown();
        return false;
    }

    for (UploadSlot& slot : g.uploadSlots)
    {
        if (vkCreateCommandPool(g.device, &pool, nullptr, &slot.pool) != VK_SUCCESS)
        {
            LOGW("textures: no upload command buffers");
            Shutdown();
            return false;
        }
    }

    if (!AddDescriptorPool())
    {
        LOGW("textures: no descriptor pool");
        Shutdown();
        return false;
    }

    if (!MakeFallback())
    {
        LOGW("textures: the placeholder image would not upload (%s)", g.lastError.c_str());
        Shutdown();
        return false;
    }

    LOGI("textures: uploading on %s", vk::pipeline::DeviceName());
    return true;
}

void vk::textures::Shutdown()
{
    if (!g.device) return;
    vkDeviceWaitIdle(g.device);
    for (Image& image : g.doomed) DestroyImage(image);
    g.doomed.clear();
    for (Image& image : g.images) DestroyImage(image);
    g.images.clear();
    g.freeIds.clear();
    g.byFetch.clear();
    g.byContent.clear();
    g.sets.clear();
    g.retiredSets.clear();
    g.samplerList.clear();
    g.samplerIndex.clear();
    DestroyImage(g.fallback);
    DestroyImage(g.fallbackCube);
    DestroyImage(g.fallback3D);
    for (auto& [key, sampler] : g.samplers) vkDestroySampler(g.device, sampler, nullptr);
    g.samplers.clear();
    for (VkDescriptorPool pool : g.descriptors) vkDestroyDescriptorPool(g.device, pool, nullptr);
    g.descriptors.clear();
    vk::imagememory::Shutdown(g.device);
    g.open = nullptr;
    for (UploadSlot& slot : g.uploadSlots)
    {
        FreeStaging(slot.staging);
        for (StagingBuffer& extra : slot.overflow) FreeStaging(extra);
        if (slot.pool) vkDestroyCommandPool(g.device, slot.pool, nullptr);
        slot = UploadSlot{};
    }
    if (g.fence) vkDestroyFence(g.device, g.fence, nullptr);
    if (g.commands) vkDestroyCommandPool(g.device, g.commands, nullptr);
    g.fence = VK_NULL_HANDLE;
    g.commands = VK_NULL_HANDLE;
    g.command = VK_NULL_HANDLE;
    g.device = VK_NULL_HANDLE;
}

bool vk::textures::Ready() { return g.device != VK_NULL_HANDLE; }

namespace
{
    // The host address of a texture's first byte, from the physical address its
    // fetch constant holds.
    const uint8_t* HostAddress(uint32_t physicalAddress)
    {
        if (!physicalAddress) return nullptr;
        const uint32_t va = kernel::FromPhysical(physicalAddress);
        return va ? guest::Base() + va : nullptr;
    }

    // Both ranges a texture was read from, as one signature: a rewrite of the
    // chain changes what is sampled as surely as one of the base.
    uint64_t SignSource(uint32_t base, size_t baseBytes, uint32_t mips, size_t mipBytes,
                        bool timed = false)
    {
        auto sign = [&](const uint8_t* at, size_t bytes) {
            return timed ? TimedSignatureOf(at, bytes) : SignatureOf(at, bytes);
        };
        uint64_t signature = 0;
        if (const uint8_t* at = baseBytes ? HostAddress(base) : nullptr)
            signature = sign(at, baseBytes);
        if (const uint8_t* at = mipBytes ? HostAddress(mips) : nullptr)
            signature = (signature ^ sign(at, mipBytes)) * 0x100000001B3ull + 1;
        return signature;
    }

    uint64_t SignImage(const Image& image, bool timed = false)
    {
        return SignSource(image.address, image.sourceBytes, image.mipAddress, image.mipBytes,
                          timed);
    }

    // The write watch on a texture's memory, taken before the memory is read:
    // a write after this point shows, one before it is in what is read. Zero
    // when any of it cannot be watched -- outside the physical bank, or pages
    // the title keeps rewriting -- which leaves the texture to its signature.
    uint64_t TrackSource(uint32_t base, size_t baseBytes, uint32_t mips, size_t mipBytes)
    {
        if (!gpu::watch::Enabled() || (!baseBytes && !mipBytes)) return 0;
        uint64_t stamp = 0;
        for (const auto& [address, bytes] : { std::pair{ base, baseBytes }, std::pair{ mips, mipBytes } })
        {
            if (!bytes) continue;
            if (kernel::FromPhysical(address) != guest::kPhysicalBase + address) return 0;
            const uint64_t one = gpu::watch::Track(address, uint32_t(bytes),
                                                   vk::renderer::CompletedSubmission, g.frame);
            if (!one) return 0;
            stamp = std::max(stamp, one);
        }
        return stamp;
    }

    uint64_t TrackImage(const Image& image)
    {
        return TrackSource(image.address, image.sourceBytes, image.mipAddress, image.mipBytes);
    }

    bool Unchanged(const Image& image)
    {
        return image.watchStamp &&
               (!image.sourceBytes ||
                gpu::watch::Unwritten(image.address, uint32_t(image.sourceBytes), image.watchStamp)) &&
               (!image.mipBytes ||
                gpu::watch::Unwritten(image.mipAddress, uint32_t(image.mipBytes), image.watchStamp));
    }

    // How much of a block reads as never written, in percent. Counting zero
    // bytes does not do it: a dark texture is full of them and a compressed
    // block of black is entirely zero, quite correctly. Memory nothing has
    // written is zero in long unbroken stretches, so what is counted is spans of
    // sixty-four bytes that are zero all through.
    uint8_t EmptyPercent(const uint8_t* base, size_t bytes)
    {
        if (!base || bytes < 64) return 0;
        size_t empty = 0, spans = 0;
        for (size_t at = 0; at + 64 <= bytes; at += 64, spans++)
        {
            size_t i = 0;
            while (i < 64 && !base[at + i]) i++;
            if (i == 64) empty++;
        }
        return spans ? uint8_t(empty * 100 / spans) : 0;
    }

    // Whether what was just read into this image looks like a block nothing has
    // written. Measured on the decoded texture, not the padded source extent:
    // the padding of a small texture is legitimately untouched. An image that
    // becomes empty is queued to be read again at the end of its segment.
    void NoteEmptiness(Image& image, const gpu::TextureData& data)
    {
        if ((!image.address && !image.mipAddress) || data.bytes.empty()) return;
        const uint8_t empty = EmptyPercent(data.bytes.data(), data.bytes.size());
        if (empty <= 25) { image.fromAnEmptyBlock = false; return; }
        if (empty <= 60) return;
        if (!image.fromAnEmptyBlock && g.emptyThisSegment.size() < 64)
            g.emptyThisSegment.push_back(uint64_t(&image - g.images.data()) + 1);
        image.fromAnEmptyBlock = true;
        if (!image.emptySince) image.emptySince = g.frame ? g.frame : 1;
    }

    // The texture as its memory holds it now, through the fetch constant it
    // was uploaded from; staged over the old contents if it still has their
    // shape. False when it could not be.
    bool Restage(Image& image, const gpu::TextureData& data)
    {
        return data.ok && data.bytes.size() == image.bytes &&
               StageInto(image, data.bytes.data(), data.bytes.size(), nullptr);
    }

    gpu::TextureData ReadAgain(const Image& image)
    {
        gpu::TextureFetch fetch;
        std::memcpy(fetch.d, image.fetchWords, sizeof fetch.d);
        return gpu::ReadTexture(fetch, HostAddress(image.address), HostAddress(image.mipAddress));
    }

    // The fetch constant is unchanged when only the bytes are, so the cache would
    // otherwise hand back the upload taken the first time the texture was bound.
    void RefreshIfChanged(uint64_t id)
    {
        Image* image = Find(id);
        if (!image || !image->image || image->borrowed ||
            (!image->sourceBytes && !image->mipBytes))
            return;
        // A rewritten one is read again at the end of every segment that binds
        // it, whatever happens here: the title can write it after this bind,
        // and a segment only ever sees what was read at its own end.
        const auto queueForSegment = [&] {
            if (image->queuedSegment == g.segment || g.rewrittenThisSegment.size() >= 256) return;
            image->queuedSegment = g.segment;
            g.rewrittenThisSegment.push_back(id);
        };
        if (image->rewritten) queueForSegment();
        if (image->checkedFrame == g.frame) return;

        if (Unchanged(*image))
        {
            image->checkedFrame = g.frame;
            g.unchangedByWatch++;
            return;
        }
        // Watched, and written since: due now, whatever the schedule says.
        if (!image->watchStamp && g.frame - image->checkedFrame < image->signPeriod) return;
        image->checkedFrame = g.frame;
        g.resigned++;
        stutters::Timed timed(stutters::kRefreshedTextures);

        image->watchStamp = TrackImage(*image);
        const uint64_t now = SignImage(*image, true);
        if (now == image->signature)
        {
            // An image that came up empty is checked every frame until it holds a
            // picture: "the bytes have not moved" is no reason to look less often
            // when the point is to catch the moment they do.
            if (!image->rewritten && !image->fromAnEmptyBlock &&
                image->signPeriod < kSignPeriodMax)
                image->signPeriod *= 2;
            return;
        }
        image->rewritten = true;
        image->signPeriod = 1;
        queueForSegment();

        const gpu::TextureData data = ReadAgain(*image);
        if (!Restage(*image, data)) return;
        image->signature = now;
        g.refreshed++;
        NoteEmptiness(*image, data);
    }
}

uint64_t vk::textures::FrameNumber() { return g.frame; }

uint64_t vk::textures::LiveBytes() { return g.liveBytes; }
uint64_t vk::textures::Budget() { return g.budget; }

// A budget the system asked for. The eviction pass is left to the next frame
// -- it waits for the device, and the caller is whichever thread Android
// chose to warn us on.
void vk::textures::SetBudget(uint64_t bytes)
{
    const uint64_t floor = 48ull << 20;   // below this nothing would stay cached
    g.budget = std::max(bytes, floor);
}

void vk::textures::MemoryWritten(uint32_t physicalAddress, uint32_t size)
{
    // A linear walk: a few thousand images, a couple of copies a frame.
    auto overlaps = [&](uint32_t address, size_t bytes) {
        return bytes && address < physicalAddress + size && address + bytes > physicalAddress;
    };
    for (Image& image : g.images)
    {
        if (!image.image || image.borrowed) continue;
        if (!overlaps(image.address, image.sourceBytes) &&
            !overlaps(image.mipAddress, image.mipBytes))
            continue;
        image.checkedFrame = ~uint64_t(0);
        image.signPeriod = 1;
        g.invalidatedByWrites++;
    }
}

namespace
{
    // How long an image or a set goes unbound before it may be let go: ten
    // seconds of frames, far past any submission still running or any command
    // the recorder thread has yet to make.
    constexpr uint64_t kUnusedFrames = 600;
    // The cache is looked over once in this many frames: the sets in one go at
    // the start of the round, the images a slice a frame.
    constexpr uint64_t kSweepFrames = 64;

    void FreeSet(const State::Set& entry)
    {
        vkFreeDescriptorSets(g.device, g.descriptors[entry.pool], 1, &entry.set);
    }

    // Every cached set at once, for a view that changed under an id. Commands
    // not yet run may still bind them, so they are freed with the unused.
    void RetireSets()
    {
        for (const auto& [key, entry] : g.sets)
            g.retiredSets.push_back({ entry.set, entry.pool, g.frame });
        g.sets.clear();
    }

    void SweepSets()
    {
        for (auto entry = g.sets.begin(); entry != g.sets.end();)
        {
            if (g.frame - entry->second.lastUsed < kUnusedFrames) { ++entry; continue; }
            FreeSet(entry->second);
            entry = g.sets.erase(entry);
        }
        size_t kept = 0;
        for (const State::Set& entry : g.retiredSets)
        {
            if (g.frame - entry.lastUsed < kUnusedFrames) g.retiredSets[kept++] = entry;
            else FreeSet(entry);
        }
        g.retiredSets.resize(kept);
    }

    // Whether an image can be let go: one of the cache's own, and unbound for
    // so long that the sweep of sets since has freed every set that held it
    // -- a set is used no later than the images in it are bound.
    bool Idle(const Image& image)
    {
        return image.image && !image.borrowed && !image.pinned &&
               g.frame - image.lastBound >= kUnusedFrames + kSweepFrames;
    }

    // The image stops existing for the cache now; its Vulkan objects are
    // destroyed over the next frames (DestroyDoomed).
    void Release(uint64_t id)
    {
        Image& image = g.images[size_t(id - 1)];
        for (const auto& name : image.names)
            if (auto entry = g.byFetch.find(name);
                entry != g.byFetch.end() && (entry->second & kImageBits) == id)
                g.byFetch.erase(entry);
        if (auto entry = g.byContent.find(image.content);
            entry != g.byContent.end() && entry->second == id)
            g.byContent.erase(entry);
        g.liveBytes -= image.bytes;
        g.doomed.push_back(std::move(image));
        image = Image{};
        g.freeIds.push_back(id);
    }

    // A few a frame: destroying one is cheap now that its memory is a range of
    // a block, but a sweep can let thousands go at once.
    void DestroyDoomed()
    {
        constexpr auto kLongest = std::chrono::microseconds(500);
        const auto from = std::chrono::steady_clock::now();
        while (!g.doomed.empty())
        {
            DestroyImage(g.doomed.front());
            g.doomed.pop_front();
            if (std::chrono::steady_clock::now() - from >= kLongest) break;
        }
    }

    // The cache holds copies of guest memory, and the console holds none: when
    // the title puts another texture where one was, the old one is gone. So an
    // idle image whose memory has been written since it was read is released.
    // Bound again it would have to be read again anyway, and a level that
    // streams keeps reusing the same memory -- forty thousand such copies, two
    // gigabytes, in seven minutes of one. The write watch says which may have
    // been, and its signature whether it was; an image the watch cannot cover
    // is left to the budget.
    void SweepImages()
    {
        const uint64_t phase = g.frame % kSweepFrames;
        const size_t count = g.images.size();
        const size_t from = size_t(count * phase / kSweepFrames);
        const size_t to = size_t(count * (phase + 1) / kSweepFrames);
        for (size_t i = from; i < to; i++)
        {
            Image& image = g.images[i];
            if (!Idle(image) || !image.watchStamp || Unchanged(image)) continue;
            // The watch answers for whole pages, and a neighbour's write is
            // not this texture's: the bytes decide.
            const uint64_t stamp = TrackImage(image);
            if (SignImage(image) == image.signature)
            {
                image.watchStamp = stamp;
                g.staleNotReally++;
                continue;
            }
            g.stale++;
            g.staleBytes += image.bytes;
            Release(uint64_t(i + 1));
        }
    }

    // Past the budget, the idle images bound longest ago go, down to three
    // quarters of it.
    void Evict()
    {
        std::vector<std::pair<uint64_t, uint64_t>> oldest;   // last bound, id
        for (size_t i = 0; i < g.images.size(); i++)
            if (Idle(g.images[i])) oldest.push_back({ g.images[i].lastBound, uint64_t(i + 1) });
        if (oldest.empty()) return;
        std::sort(oldest.begin(), oldest.end());
        const uint64_t target = g.budget / 4 * 3;
        uint64_t count = 0, bytes = 0;
        for (const auto& [lastBound, id] : oldest)
        {
            if (g.liveBytes <= target) break;
            bytes += g.images[size_t(id - 1)].bytes;
            count++;
            Release(id);
        }
        g.evicted += count;
        g.evictedBytes += bytes;
        if (g.evictionPasses++ < 4)
            LOGI("textures: over the %llu MB budget; evicted %llu (%llu MB) not bound for ten"
                 " seconds", (unsigned long long)(g.budget >> 20), (unsigned long long)count,
                 (unsigned long long)(bytes >> 20));
    }
}

void vk::textures::NewFrame()
{
    // The frame ending is the one after the late reads of the frame before:
    // bound in it, or not.
    size_t kept = 0;
    for (const State::LateRead& read : g.lateReads)
    {
        if (read.frame == g.frame) { g.lateReads[kept++] = read; continue; }
        const Image* image = Find(read.id);
        if (image && image->lastBound > read.frame) { g.lateReadsBoundAgain++; continue; }
        g.lateReadsOnLastUse++;
        if (image && (g.lateReadsOnLastUse <= 24 || FlashHunt()))
            LOGW("textures:   re-read on its last use, %ux%u fmt %u at %08X, frame %llu: its"
                 " memory changed after its draws were parsed, and it is not bound again",
                 image->width, image->height, image->xenosFormat, image->address,
                 (unsigned long long)read.frame);
    }
    g.lateReads.resize(kept);
    g.frame++;
    if (!g.device) return;
    // Every half minute, what the cache holds and how much of it is in use.
    if constexpr (diag::kOn)
        if (g.frame % 1800 == 0)
        {
            uint64_t held = 0, recent = 0, recentBytes = 0;
            for (const Image& image : g.images)
            {
                if (!image.image || image.borrowed) continue;
                held++;
                if (g.frame - image.lastBound < kUnusedFrames) { recent++; recentBytes += image.bytes; }
            }
            const vk::imagememory::Totals memory = vk::imagememory::Held();
            LOGI("textures: %llu held (%llu MB), %llu of them bound in the last 600 frames (%llu MB);"
                 " %llu blocks of memory (%llu MB), %zu descriptor sets",
                 (unsigned long long)held, (unsigned long long)(g.liveBytes >> 20),
                 (unsigned long long)recent, (unsigned long long)(recentBytes >> 20),
                 (unsigned long long)memory.blocks, (unsigned long long)(memory.blockBytes >> 20),
                 g.sets.size());
        }
    if (g.frame % kSweepFrames == 0)
    {
        SweepSets();
        if (g.liveBytes > g.budget) Evict();
    }
    SweepImages();
    DestroyDoomed();
}

void vk::textures::BeginUploads(uint32_t index)
{
    if (!g.device || index >= kUploadSlots) return;
    UploadSlot& slot = g.uploadSlots[index];
    // The GPU is done with everything the slot held.
    for (StagingBuffer& extra : slot.overflow) FreeStaging(extra);
    const bool overflowed = !slot.overflow.empty();
    slot.overflow.clear();
    if (overflowed || !slot.staging.buffer)
    {
        const VkDeviceSize size =
            std::clamp<VkDeviceSize>(std::max(slot.wanted, slot.staging.size * 2),
                                     kStagingLeast, kStagingMost);
        if (size != slot.staging.size)
        {
            FreeStaging(slot.staging);
            if (!MakeStaging(slot.staging, size)) slot.staging = StagingBuffer{};
        }
    }
    vkResetCommandPool(g.device, slot.pool, 0);
    slot.recording = false;
    slot.segment = 0;
    slot.used = slot.wanted = 0;
    g.open = &slot;
}

namespace
{
    // MW2_MARK_EMPTY=1: paint every world texture uploaded from a block with
    // nothing in it flat magenta, so what the counter counts can be seen. A
    // magenta flash is one the log explains; a black one is something else.
    bool MarkEmpty()
    {
        static const bool on = diag::Flag("MW2_MARK_EMPTY");
        return on;
    }

    uint64_t MagentaId()
    {
        if (g.magenta) return g.magenta;
        gpu::TextureData flat;
        flat.ok = true;
        flat.width = flat.height = 4;
        flat.blocksWide = flat.blocksHigh = 4;
        flat.bytesPerBlock = 4;
        flat.expanded = true;
        flat.bytes.resize(4 * 4 * 4);
        for (size_t at = 0; at + 4 <= flat.bytes.size(); at += 4)
        {
            flat.bytes[at + 0] = 0xFF;   // R
            flat.bytes[at + 1] = 0x00;   // G
            flat.bytes[at + 2] = 0xFF;   // B
            flat.bytes[at + 3] = 0xFF;   // A
        }
        const char* error = nullptr;
        // 0x688 is the identity swizzle, XYZW; 0 would read (R,R,R,R) -- white.
        g.magenta = UploadOne(flat, 6 /* 8_8_8_8 */, 0, 0x688, false, &error);
        if (Image* marker = Find(g.magenta)) marker->pinned = true;
        if (g.magenta == vk::textures::kNone)
            LOGW("textures: could not make the magenta marker: %s", error ? error : "?");
        return g.magenta;
    }
}

namespace
{
    // The fetch constant less what only the sampler reads: the clamps, the
    // filters and the anisotropy, and the border colour. Everything else says
    // which bytes the texture is or how the view shows them.
    std::array<uint32_t, 6> ContentOf(const gpu::TextureFetch& fetch)
    {
        std::array<uint32_t, 6> words{};
        for (uint32_t i = 0; i < 6; i++) words[i] = fetch.d[i];
        words[0] &= ~(0x1FFu << 10);   // ClampX, ClampY, ClampZ
        words[3] &= ~(0x1FFu << 19);   // MagFilter, MinFilter, MipFilter, Anisotropy
        words[5] &= ~0x3u;             // BorderColour
        return words;
    }
}

uint64_t vk::textures::Upload(const gpu::TextureFetch& fetch, const char** error)
{
    if (!g.device && !Initialise()) { if (error) *error = "no device"; return kNone; }

    std::array<uint32_t, 6> key{};
    for (uint32_t i = 0; i < 6; i++) key[i] = fetch.d[i];
    auto found = g.byFetch.find(key);
    if (found != g.byFetch.end())
    {
        if (Image* image = Find(found->second))
        {
            image->lastBound = g.frame;
            image->boundSegment = g.segment;
        }
        RefreshIfChanged(found->second & kImageBits);
        return found->second;
    }

    // The same texture under another sampler state: the image is held already.
    const std::array<uint32_t, 6> content = ContentOf(fetch);
    if (auto held = g.byContent.find(content); held != g.byContent.end())
    {
        Image& image = g.images[size_t(held->second - 1)];
        const uint32_t sampler = SamplerIndexFor(SamplerKey(fetch, image.minLevel));
        if (!sampler) { Fail("no sampler", error); return kNone; }
        image.lastBound = g.frame;
        image.boundSegment = g.segment;
        image.names.push_back(key);
        g.shared++;
        RefreshIfChanged(held->second);
        return g.byFetch[key] = held->second | (uint64_t(sampler) << kSamplerShift);
    }

    stutters::Timed timed(stutters::kNewTextures);
    // The base and the mip chain are two ranges with an address each.
    const gpu::TextureExtents extents = gpu::ExtentsOf(fetch);
    const uint8_t* base = HostAddress(extents.baseAddress);
    const uint8_t* mips = HostAddress(extents.mipAddress);
    // Watched before it is read, so a write after the read shows.
    const uint64_t watchStamp = TrackSource(extents.baseAddress, base ? extents.baseBytes : 0,
                                            extents.mipAddress, mips ? extents.mipBytes : 0);
    gpu::TextureData data = gpu::ReadTexture(fetch, base, mips);
    if (!data.ok)
    {
        Fail(data.error ? data.error : "unreadable", error);
        g.byFetch[key] = kNone;
        return kNone;
    }

    // Only the ranges actually read are watched.
    const size_t baseBytes = base ? extents.baseBytes : 0;
    const size_t mipBytes = mips && data.levels.size() > 1 ? extents.mipBytes : 0;
    const uint64_t id =
        UploadOne(data, fetch.Format(), SamplerKey(fetch, data.minLevel), fetch.Swizzle(),
                  fetch.Dimension() == gpu::TextureDimension::D1, error,
                  SignSource(extents.baseAddress, baseBytes, extents.mipAddress, mipBytes),
                  baseBytes, fetch.Linearises());
    uint64_t named = id;
    if (Image* uploaded = Find(id))
    {
        uploaded->minLevel = data.minLevel;
        uploaded->content = content;
        uploaded->names.push_back(key);
        g.byContent[content] = id;
        named |= uint64_t(SamplerIndexFor(SamplerKey(fetch, data.minLevel))) << kSamplerShift;
        uploaded->address = baseBytes ? extents.baseAddress : 0;
        uploaded->mipAddress = mipBytes ? extents.mipAddress : 0;
        uploaded->mipBytes = mipBytes;
        uploaded->xenosFormat = fetch.Format();
        uploaded->watchStamp = watchStamp;
        std::memcpy(uploaded->fetchWords, fetch.d, sizeof uploaded->fetchWords);
        NoteEmptiness(*uploaded, data);
    }
    // A failure is cached too: the same six dwords fail the same way, and a
    // texture bound every frame would otherwise fail thousands of times.
    g.byFetch[key] = named;
    return named;
}

namespace
{
    void RefreshRewritten()
    {
        std::vector<uint64_t> again;
        again.swap(g.rewrittenThisSegment);
        for (const uint64_t id : again)
        {
            Image* image = Find(id);
            if (!image || !image->image || image->borrowed ||
                (!image->sourceBytes && !image->mipBytes))
                continue;
            if (Unchanged(*image)) { g.unchangedByWatch++; continue; }
            g.rereadRewritten++;
            image->watchStamp = TrackImage(*image);
            const uint64_t now = SignImage(*image, true);
            if (now == image->signature) continue;
            if (!Restage(*image, ReadAgain(*image))) continue;
            image->signature = now;
            if constexpr (diag::kOn) g.lateRestages.push_back(id);
            g.lateReads.push_back({ id, g.frame });
            g.changedAfterFirstBind++;
        }
    }

    void RefreshEmpty()
    {
        std::vector<uint64_t> again;
        again.swap(g.emptyThisSegment);
        for (const uint64_t id : again)
        {
            Image* image = Find(id);
            if (!image || !image->image || image->borrowed || !image->fromAnEmptyBlock) continue;
            image->watchStamp = TrackImage(*image);
            const gpu::TextureData data = ReadAgain(*image);
            if (data.ok && EmptyPercent(data.bytes.data(), data.bytes.size()) <= 25)
            {
                if (!Restage(*image, data)) continue;
                if constexpr (diag::kOn) g.lateRestages.push_back(id);
                image->signature = SignImage(*image);
                image->fromAnEmptyBlock = false;
                g.refilledBeforeSubmit++;
                continue;
            }
            // Reaches the screen with nothing in it. tools/flash_hunt.sh matches
            // these lines with the flashes somebody saw.
            g.stillEmptyAtSubmit++;
            if (g.stillEmptyAtSubmit <= 24 || FlashHunt())
            {
                char moves[1024];
                imagepool::DescribeMovesAround(image->address, uint32_t(image->sourceBytes), 16,
                                               moves, sizeof moves);
                LOGI("textures:   still empty at submit, %ux%u fmt %u at %08X (%uKB), frame %llu:"
                     " %s", image->width, image->height, image->xenosFormat, image->address,
                     uint32_t(image->sourceBytes / 1024), (unsigned long long)g.frame, moves);
            }
        }
    }
}

uint32_t vk::textures::Version(uint64_t id)
{
    const Image* image = Find(id);
    return image && !image->borrowed ? image->staged : 0;
}

void vk::textures::TakeLateRestages(std::vector<uint64_t>& ids)
{
    ids.swap(g.lateRestages);
    g.lateRestages.clear();
}

bool vk::textures::BoundInThisSegment(uint32_t physical, uint32_t size)
{
    // A linear walk, as MemoryWritten's: a few thousand images, a few copies a frame.
    auto overlaps = [&](uint32_t address, size_t bytes) {
        return bytes && address < physical + size && address + bytes > physical;
    };
    for (const Image& image : g.images)
        if (image.image && !image.borrowed && image.boundSegment == g.segment &&
            (overlaps(image.address, image.sourceBytes) ||
             overlaps(image.mipAddress, image.mipBytes)))
            return true;
    return false;
}

void* vk::textures::EndSegment()
{
    const bool last = g.endingSubmission;
    {
        stutters::Timed timed(stutters::kRefreshedTextures);
        RefreshRewritten();
        RefreshEmpty();
    }
    g.segment++;
    g.segmentsEnded++;
    UploadSlot* slot = g.open;
    if (last) g.open = nullptr;
    // A segment that uploaded nothing leaves its buffer to the next.
    if (!slot || !slot->recording) return nullptr;
    slot->recording = false;
    const VkCommandBuffer uploads = slot->commands[slot->segment++];
    g.segmentsWithUploads++;
    if (vkEndCommandBuffer(uploads) != VK_SUCCESS) return nullptr;
    return uploads;
}

void* vk::textures::EndSubmission()
{
    g.endingSubmission = true;
    void* uploads = EndSegment();
    g.endingSubmission = false;
    return uploads;
}

uint64_t vk::textures::NoteDrawnInWorld(uint64_t id)
{
    Image* image = Find(id);
    if (!image || !image->fromAnEmptyBlock) return id;
    if (!image->countedDrawn)
    {
        image->countedDrawn = true;
        g.emptyDrawnInWorld++;
    }
    // Only while the texture is young. Some world textures are legitimately
    // empty -- a mask, an unused lighting slot -- and are bound every frame
    // forever, which would paint the screen and hide what is being looked for.
    constexpr uint64_t kMarkFor = 60;
    const bool young = image->emptySince && g.frame - image->emptySince < kMarkFor;
    if (!MarkEmpty() || !young) return id;
    const uint64_t magenta = MagentaId();
    if (magenta == kNone) return id;
    g.markedEmpty++;
    return magenta;
}

uint64_t vk::textures::UploadData(const gpu::TextureData& data, uint32_t xenosFormat,
                                  const char** error)
{
    if (!g.device && !Initialise()) { if (error) *error = "no device"; return kNone; }
    return UploadOne(data, xenosFormat, 0, 0x688, false, error);
}

uint64_t vk::textures::Adopt(uint64_t key, void* view, const gpu::TextureFetch& fetch)
{
    if (!g.device && !Initialise()) return kNone;
    // A resolve's copy is one level, whatever the fetch constant says.
    const uint32_t sampler = SamplerIndexFor(SamplerKey(fetch, 0));
    if (!sampler || !view) return kNone;

    auto found = g.adopted.find(key);
    const uint64_t id = found != g.adopted.end() ? found->second : NewSlot();
    if (found == g.adopted.end()) g.adopted[key] = id;
    Image& image = g.images[size_t(id - 1)];
    // The sets cache is keyed on ids, so an id whose view changed would hand back
    // a set pointing at the old one.
    if (image.view != static_cast<VkImageView>(view) && image.view) RetireSets();
    image.borrowed = true;
    image.view = static_cast<VkImageView>(view);
    return id | (uint64_t(sampler) << kSamplerShift);
}

void vk::textures::ForgetSets() { RetireSets(); }

void* vk::textures::DescriptorSet(const uint64_t ids[kSlots], const uint8_t* kinds)
{
    if (!g.device) return nullptr;

    // The declared kind is part of the key: the same textures bound for a
    // program that reads a slot as a volume need a different set.
    std::array<uint64_t, kSlots> key{};
    for (uint32_t i = 0; i < kSlots; i++)
        key[i] = ids[i] | (uint64_t(kinds ? kinds[i] : 0) << 62);
    auto found = g.sets.find(key);
    if (found != g.sets.end())
    {
        found->second.lastUsed = g.frame;
        return found->second.set;
    }

    VkDescriptorSetLayout layout =
        static_cast<VkDescriptorSetLayout>(vk::pipeline::SetLayout(1));
    if (!layout) return nullptr;

    VkDescriptorSetAllocateInfo allocate{ VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO };
    allocate.descriptorSetCount = 1;
    allocate.pSetLayouts = &layout;
    VkDescriptorSet set = VK_NULL_HANDLE;
    // A full pool is not an error: another may have room since sets were
    // freed from it, and when none has, it is the signal to open one more.
    VkResult r = VK_ERROR_OUT_OF_POOL_MEMORY;
    const uint32_t pools = uint32_t(g.descriptors.size());
    for (uint32_t n = 0; n < pools && r != VK_SUCCESS; n++)
    {
        const uint32_t pool = (g.allocPool + n) % pools;
        allocate.descriptorPool = g.descriptors[pool];
        r = vkAllocateDescriptorSets(g.device, &allocate, &set);
        if (r == VK_SUCCESS) g.allocPool = pool;
        else if (r != VK_ERROR_OUT_OF_POOL_MEMORY && r != VK_ERROR_FRAGMENTED_POOL) break;
    }
    if (r == VK_ERROR_OUT_OF_POOL_MEMORY || r == VK_ERROR_FRAGMENTED_POOL)
    {
        if (!AddDescriptorPool()) { Fail("no descriptor pool", nullptr); return nullptr; }
        g.allocPool = uint32_t(g.descriptors.size()) - 1;
        allocate.descriptorPool = g.descriptors.back();
        r = vkAllocateDescriptorSets(g.device, &allocate, &set);
    }
    if (r != VK_SUCCESS)
    {
        Fail(Explain(r), nullptr);
        return nullptr;
    }

    VkDescriptorImageInfo images[kSlots]{};
    VkWriteDescriptorSet writes[kSlots]{};
    for (uint32_t i = 0; i < kSlots; i++)
    {
        const uint8_t want = kinds ? kinds[i] : 0;
        const Image* image = Find(ids[i]);
        if (image && !image->view) image = nullptr;   // released
        if (image && KindOf(*image) != want) { image = nullptr; g.kindMismatches++; }
        if (!image) image = &FallbackOf(want);
        images[i].imageView = image->view;
        images[i].sampler = SamplerOf(ids[i], *image);
        images[i].imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;

        writes[i].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        writes[i].dstSet = set;
        writes[i].dstBinding = i;
        writes[i].descriptorCount = 1;
        writes[i].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        writes[i].pImageInfo = &images[i];
    }
    vkUpdateDescriptorSets(g.device, kSlots, writes, 0, nullptr);
    g.sets[key] = { set, g.allocPool, g.frame };
    g.descriptorSets++;
    return set;
}

bool vk::textures::Readback(uint64_t id, std::vector<uint8_t>& bytes, const char** error)
{
    Image* image = Find(id);
    if (!image) return Fail("no such texture", error);
    // An adopted entry only borrows a view; there is no image here to copy from.
    if (!image->image) return Fail("the texture is borrowed", error);

    VkBuffer buffer = VK_NULL_HANDLE;
    VkDeviceMemory memory = VK_NULL_HANDLE;
    if (!MakeBuffer(image->bytes, VK_BUFFER_USAGE_TRANSFER_DST_BIT,
                    VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                    buffer, memory))
        return Fail("no readback buffer", error);

    bool ok = false;
    if (VkCommandBuffer cmd = BeginCommands())
    {
        vk::util::Barrier(cmd, image->image, VK_IMAGE_ASPECT_COLOR_BIT,
                          VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                          VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, VK_ACCESS_SHADER_READ_BIT,
                          VK_ACCESS_TRANSFER_READ_BIT, VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
                          VK_PIPELINE_STAGE_TRANSFER_BIT);
        const std::vector<VkBufferImageCopy> regions = Regions(*image, 0);
        vkCmdCopyImageToBuffer(cmd, image->image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                               buffer, uint32_t(regions.size()), regions.data());
        vk::util::Barrier(cmd, image->image, VK_IMAGE_ASPECT_COLOR_BIT,
                          VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                          VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_ACCESS_TRANSFER_READ_BIT,
                          VK_ACCESS_SHADER_READ_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
                          VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT);
        ok = EndCommands();
    }

    if (ok)
    {
        void* mapped = nullptr;
        ok = vkMapMemory(g.device, memory, 0, image->bytes, 0, &mapped) == VK_SUCCESS;
        if (ok)
        {
            bytes.resize(size_t(image->bytes));
            std::memcpy(bytes.data(), mapped, bytes.size());
            vkUnmapMemory(g.device, memory);
        }
    }
    vkDestroyBuffer(g.device, buffer, nullptr);
    vkFreeMemory(g.device, memory, nullptr);
    if (!ok) return Fail("readback failed", error);
    return true;
}

void vk::textures::Report()
{
    if constexpr (!diag::kOn) return;
    if (!g.uploads && !g.failures) return;
    LOGI("textures: %u uploaded (%llu KB), %u failed, %u descriptor sets, %llu bound as"
         " a fallback because the shader declares another kind",
         g.uploads, (unsigned long long)(g.uploadedBytes / 1024), g.failures,
         g.descriptorSets, (unsigned long long)g.kindMismatches);
    for (const auto& [reason, count] : g.failureReasons)
        LOGI("textures:   %6u  %s", count, reason.c_str());
    if (g.linearisedRefused)
        LOGI("textures: %llu asked to be linearised in a format with no sRGB form",
             (unsigned long long)g.linearisedRefused);
    if (g.uploadsBatched || g.uploadsAlone)
        LOGI("textures: %llu uploads went ahead of the submission that needed them, %llu were"
             " submitted on their own; %llu overflowed their slot's staging",
             (unsigned long long)g.uploadsBatched, (unsigned long long)g.uploadsAlone,
             (unsigned long long)g.stagingOverflows);
    if (g.resigned)
        LOGI("textures: %llu signings (%.1f ms in all), %llu re-staged because the guest had"
             " rewritten them, %llu signed early because the image pool copied onto them",
             (unsigned long long)g.resigned, g.signNanos / 1e6, (unsigned long long)g.refreshed,
             (unsigned long long)g.invalidatedByWrites);
    if (g.unchangedByWatch)
        LOGI("textures: %llu checks answered by the write watch, nothing signed",
             (unsigned long long)g.unchangedByWatch);
    if (g.rereadRewritten)
        LOGI("textures: rewritten textures signed again at a segment's end %llu times; %llu had"
             " changed since the frame's first bind and were re-staged",
             (unsigned long long)g.rereadRewritten, (unsigned long long)g.changedAfterFirstBind);
    LOGI("textures: of those, %llu bound again the frame after, %llu on their last use (the"
         " title had freed them: a frame drawn with whatever replaced them)",
         (unsigned long long)g.lateReadsBoundAgain, (unsigned long long)g.lateReadsOnLastUse);
    LOGI("textures: %llu segments ended, %llu of them with uploads of their own",
         (unsigned long long)g.segmentsEnded, (unsigned long long)g.segmentsWithUploads);
    if (g.emptyDrawnInWorld || g.refilledBeforeSubmit || g.stillEmptyAtSubmit)
        LOGI("textures: %llu world textures drawn from a block that looked empty; read again"
             " at their segment's end, %llu were put right and %llu reached the screen empty",
             (unsigned long long)g.emptyDrawnInWorld, (unsigned long long)g.refilledBeforeSubmit,
             (unsigned long long)g.stillEmptyAtSubmit);
    LOGI("textures: %llu MB held at the end, against a budget of %llu MB; %llu evicted"
         " (%llu MB) in %llu passes", (unsigned long long)(g.liveBytes >> 20),
         (unsigned long long)(g.budget >> 20), (unsigned long long)g.evicted,
         (unsigned long long)(g.evictedBytes >> 20), (unsigned long long)g.evictionPasses);
    LOGI("textures: %llu released (%llu MB) once idle because their memory had been rewritten;"
         " %llu kept, a page of theirs written and their bytes not; %llu fetch constants were"
         " another sampler state of an image already held",
         (unsigned long long)g.stale, (unsigned long long)(g.staleBytes >> 20),
         (unsigned long long)g.staleNotReally, (unsigned long long)g.shared);
    if (g.markedEmpty)
        LOGI("textures: %llu binds painted magenta (MW2_MARK_EMPTY)",
             (unsigned long long)g.markedEmpty);
}

#endif  // MW2_HAVE_VULKAN
