// The GPU as the title sees it: the thread that consumes the ring buffer, the
// vertical blank, and the interrupts both raise into the title's handler.
#include <ppc_recomp_shared.h>
#include "title.h"
#include "../pacing_trace.h"
#include "../stutters.h"
#include "memory_watch.h"
#include "internal.h"
#include "gpu.h"
#include "../crash.h"
#include "../diagnostics.h"
#include "../guest.h"
#include "../image_move.h"
#include "../log.h"
#include "../kernel/kernel.h"
#include "vulkan/pipeline.h"
#include "vulkan/presenter.h"
#include "vulkan/renderer.h"
#include "vulkan/texture_cache.h"

#include <atomic>
#include <chrono>
#include <mutex>
#include <thread>

namespace
{
    using namespace gpu::detail;

    // D3D9's interrupt handler only retires queued flips -- and with them the
    // frame counter its render thread waits on -- when bit 0 is set.
    constexpr uint32_t kDisplayStatus       = kRegisterAperture + 0x6544u;
    constexpr uint32_t kDisplayStatusVBlank = 0x1;

    // The interrupt sources the title's handler tells apart.
    constexpr uint32_t kVBlankSource           = 0;
    constexpr uint32_t kCommandProcessorSource = 1;

    // The guest PCR the current host thread raises interrupts with: the ring
    // consumer and the vblank each have one, because a KPCR is per hardware
    // thread on the console too.
    thread_local uint32_t t_guestPcr = 0;

    struct Ring
    {
        uint32_t base = 0;        // guest VA of dword 0
        uint32_t dwords = 0;      // power of two
        uint32_t mask = 0;
        uint32_t readIndex = 0;
    };

    struct State
    {
        Ring     ring;
        uint32_t rptrWriteBack = 0;      // guest VA, or 0
        uint32_t interruptCallback = 0;
        uint32_t interruptContext = 0;
        uint32_t gpuPcr = 0, vblankPcr = 0;

        // The console delivers a graphics interrupt on one hardware thread, so
        // the two threads that can raise one here take turns.
        std::mutex guestCall;

        std::thread worker, vblank;
        std::atomic<bool> running{ false };
        std::atomic<uint64_t> frames{ 0 };       // VdSwap calls
        diag::Stat vblanks;
        // The consumer's time in the batches it executed; the rest of its life
        // it had nothing to read, which is the title not keeping it fed.
        std::atomic<uint64_t> consumerBusyNanoseconds{ 0 };
        std::chrono::steady_clock::time_point consumerStarted, consumerStopped;
        std::chrono::steady_clock::time_point start;
    };
    State g;

    void RaiseInterrupt(uint32_t source)
    {
        static bool reported = false;
        PPCFunc* fn = g.interruptCallback ? kernel::GuestFunction(g.interruptCallback) : nullptr;
        if (!fn || !t_guestPcr)
        {
            if (!reported)
            {
                reported = true;
                LOGW("gpu: no graphics interrupt callback to call yet (%08X)", g.interruptCallback);
            }
            return;
        }
        thread_local uint32_t stack = kernel::AllocateGuest(64 * 1024, 0x1000);
        if (!stack) return;
        PPCContext ctx{};
        ctx.r1.u32  = (stack + 64 * 1024 - 0x100) & ~0xFu;
        ctx.r13.u32 = t_guestPcr;
        ctx.r3.u32  = source;
        ctx.r4.u32  = g.interruptContext;
        ctx.fpscr.loadFromHost();
        fn(ctx, guest::Base());
    }

    // The ring consumer.
    void Worker()
    {
        crash::RegisterThread("gpu ring consumer");
        t_guestPcr = g.gpuPcr;
        LOGI("gpu: ring consumer started");
        g.consumerStarted = std::chrono::steady_clock::now();

        while (g.running.load(std::memory_order_relaxed))
        {
            DeliverOcclusionQueries();
            if (!g.ring.dwords)
            {
                std::this_thread::sleep_for(std::chrono::milliseconds(1));
                continue;
            }

            const uint32_t wptr = *GuestPtr<be32>(kCpRbWptr) & g.ring.mask;
            if (wptr != g.ring.readIndex)
            {
                const uint32_t available = (wptr - g.ring.readIndex) & g.ring.mask;
                std::chrono::steady_clock::time_point began;
                if constexpr (diag::kOn) began = std::chrono::steady_clock::now();
                pacing::Note(pacing::kBatchBegin, available);
                {
                    stutters::Timed timed(stutters::kRingBatches);
                    ExecuteRing(g.ring.base, g.ring.readIndex, g.ring.mask, available);
                }
                pacing::Note(pacing::kBatchEnd);
                if constexpr (diag::kOn)
                {
                    // A batch slow enough to notice is the consumer wedged, not busy.
                    const auto took = std::chrono::steady_clock::now() - began;
                    g.consumerBusyNanoseconds.fetch_add(
                        uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(took).count()),
                        std::memory_order_relaxed);
                    if (took > std::chrono::milliseconds(200))
                    {
                        static uint32_t shown = 0;
                        if (shown++ < 8)
                            LOGW("gpu: a ring batch of %u dwords took %lld ms", available,
                                 (long long)std::chrono::duration_cast<std::chrono::milliseconds>(took).count());
                    }
                }
                g.ring.readIndex = wptr;
                if (g.rptrWriteBack) *GuestPtr<be32>(g.rptrWriteBack) = g.ring.readIndex;
                continue;
            }
            std::this_thread::sleep_for(std::chrono::microseconds(100));
        }
        g.consumerStopped = std::chrono::steady_clock::now();
        LOGI("gpu: ring consumer stopped");
    }

    // The display's vertical blank is a property of the display. Raising it from
    // the ring consumer tied it to how long a frame took to draw -- and since
    // D3D9's swap bookkeeping and the title's own clock hang off it, the whole
    // simulation slowed with the frame rate.
    void VBlankWorker()
    {
        crash::RegisterThread("gpu vblank");
        t_guestPcr = g.vblankPcr;
        // 60 Hz, or the display's own blank when the window can follow it
        // (vk::GuestBlankPeriod): on the console the title's blank is the
        // display's, and a timer beside the display drifts from it.
        constexpr auto kPeriod = std::chrono::nanoseconds(16'666'667);
        const auto period = [&] {
            const uint64_t display = vk::GuestBlankPeriod();
            return display ? std::chrono::nanoseconds(display) : kPeriod;
        };
        auto next = std::chrono::steady_clock::now() + kPeriod;
        while (g.running.load(std::memory_order_relaxed))
        {
            // The console's clock interrupt moves the time stamp bundle on every
            // millisecond (Xenia's timer does the same), and the title's
            // millisecond clock is its tick count. Moved on only at a blank,
            // that clock went in 16.7 ms steps, and every wait the title times
            // with it -- Com_Frame's limiter, its pacing after a swap -- ended
            // at the next blank rather than when it was due. The frame rate
            // did not change with it: the main thread waits for the swap anyway.
            kernel::UpdateTimeStampBundle();
            const auto now = std::chrono::steady_clock::now();
            if (now < next)
            {
                std::this_thread::sleep_for(std::min(next - now, std::chrono::steady_clock::duration(
                                                                    std::chrono::milliseconds(1))));
                continue;
            }
            // After a stall, resume from now rather than firing once for every
            // blank that went by: the title reads a heartbeat, not a tick count.
            const auto blank = period();
            next = (now - next > blank * 4) ? now + blank : next + blank;

            g.vblanks++;
            *GuestPtr<be32>(kDisplayStatus) = kDisplayStatusVBlank;
            std::lock_guard<std::mutex> turn(g.guestCall);
            RaiseInterrupt(kVBlankSource);
        }
    }
}

bool gpu::detail::Running() { return g.running.load(std::memory_order_relaxed); }

// { cpu mask }: a command-processor interrupt, once per processor in the mask,
// as Xenia raises it. The title's handler clears that processor's pending bit
// and reads which processor it is on from the KPCR, so the PCR the call runs on
// reports each one in turn.
void gpu::detail::RaiseCommandProcessorInterrupt(uint32_t cpuMask)
{
    std::lock_guard<std::mutex> turn(g.guestCall);
    constexpr uint32_t kProcessorOffset = 268;   // KPCR.CurrentProcessorNumber
    uint8_t* processor = GuestPtr<uint8_t>(t_guestPcr + kProcessorOffset);
    const uint8_t saved = *processor;
    for (uint32_t n = 0; n < 6; n++)
        if (cpuMask & (1u << n))
        {
            *processor = uint8_t(n);
            RaiseInterrupt(kCommandProcessorSource);
        }
    *processor = saved;
}

double gpu::detail::Seconds()
{
    return std::chrono::duration<double>(std::chrono::steady_clock::now() - g.start).count();
}

void gpu::detail::RingPosition(uint32_t& read, uint32_t& written, uint32_t& writeBack)
{
    read = g.ring.readIndex;
    written = g.ring.mask ? uint32_t(*GuestPtr<be32>(kCpRbWptr)) & g.ring.mask : 0;
    writeBack = g.rptrWriteBack ? uint32_t(*GuestPtr<be32>(g.rptrWriteBack)) : 0;
}

void gpu::Initialise()
{
    if (g.running.exchange(true)) return;
    g.start = std::chrono::steady_clock::now();
    vk::Start();
    // Eagerly, not on the first draw: a renderer that comes up on the first
    // bind reports the whole opening burst as failures.
    if (Rendering() && !vk::renderer::Initialise()) LOGW("gpu: no device came up to render on");
    g.gpuPcr = kernel::CreateThreadBlock(0xF000);
    g.vblankPcr = kernel::CreateThreadBlock(0xF001);
    g.worker = std::thread(Worker);
    g.vblank = std::thread(VBlankWorker);
}

void gpu::Shutdown()
{
    if (!g.running.exchange(false)) return;
    if (g.vblank.joinable()) g.vblank.join();
    if (g.worker.joinable()) g.worker.join();
    // The window thread first, because it shows an image the renderer owns.
    vk::StopPresenting();
    vk::renderer::Shutdown();
    vk::textures::Shutdown();
    vk::pipeline::Shutdown();
    vk::Stop();
}

bool gpu::Consuming() { return g.running.load(std::memory_order_relaxed) && g.ring.mask; }

void gpu::SetRingBuffer(uint32_t basePhysical, uint32_t sizeLog2)
{
    // The title passes log2(size in bytes) - 3.
    const uint32_t sizeBytes = 8u << sizeLog2;
    const uint32_t va = kernel::FromPhysical(basePhysical);
    g.ring.base = va;
    g.ring.dwords = sizeBytes / 4;
    g.ring.mask = g.ring.dwords - 1;
    g.ring.readIndex = 0;
    LOGI("gpu: ring buffer at %08X (physical %08X), %u KB, %u dwords",
         va, basePhysical, sizeBytes / 1024, g.ring.dwords);
}

void gpu::SetReadPointerWriteBack(uint32_t addressPhysical, uint32_t blockSizeLog2)
{
    g.rptrWriteBack = kernel::FromPhysical(addressPhysical);
    LOGI("gpu: read pointer write-back at %08X (physical %08X, block 2^%u)",
         g.rptrWriteBack, addressPhysical, blockSizeLog2);
}

void gpu::SetInterruptCallback(uint32_t callback, uint32_t context)
{
    g.interruptCallback = callback;
    g.interruptContext = context;
    LOGI("gpu: graphics interrupt callback %08X (context %08X)", callback, context);
}

void gpu::Presented() { CensusPresent(); }

void gpu::Swap() { g.frames++; }

uint64_t gpu::FrameCount() { return g.frames.load(std::memory_order_relaxed); }

void gpu::Report()
{
    if constexpr (!diag::kOn) return;
    imagepool::Report();
    if (vk::Running())
        LOGI("gpu: %llu frames reached the window", (unsigned long long)vk::PresentedFrames());
    ReportCensus();
    vk::renderer::Report();
    vk::textures::Report();
    gpu::watch::Report();
    ReportD3DHooks();
    uint32_t read = 0, written = 0, writeBack = 0;
    RingPosition(read, written, writeBack);
    LOGI("gpu: ring write %u, read %u (%u dwords outstanding)", written, read,
         (written - read) & g.ring.mask);
    LOGI("gpu: %llu frames, %llu vblanks",
         (unsigned long long)g.frames.load(), (unsigned long long)g.vblanks.load());
    if (g.consumerStopped > g.consumerStarted)
    {
        const double life = std::chrono::duration<double, std::milli>(
                                g.consumerStopped - g.consumerStarted).count();
        const double busy = double(g.consumerBusyNanoseconds.load()) / 1e6;
        LOGI("gpu: the ring consumer ran %.0f ms: %.0f ms executing the ring (%.0f%%),"
             " %.0f ms with nothing to read", life, busy, 100.0 * busy / life, life - busy);
    }
    ReportCommandProcessor();
}
