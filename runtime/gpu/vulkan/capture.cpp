#include "capture.h"
#include "../../diagnostics.h"

#include "pipeline.h"
#include "../../env.h"
#include "../../log.h"

#include <atomic>
#include <chrono>
#include <cstdlib>

#ifdef MW2_HAVE_VULKAN
#include "../../platform.h"
#include "../../../third_party/renderdoc/renderdoc_app.h"
#endif

namespace
{
#ifndef MW2_HAVE_VULKAN
    struct { } g;
#else
    struct State
    {
        bool     asked = false;      // MW2_RENDERDOC was set
        double   after = 0.0;        // seconds of run time to wait first
        unsigned wanted = 4;         // how many frames to capture
        unsigned taken = 0;
        bool     looked = false;     // we have tried to find RenderDoc
        bool     open = false;       // a capture is in flight
        RENDERDOC_API_1_4_1* api = nullptr;
        const char* refused = nullptr;
        void* device = nullptr;      // the instance's dispatch table pointer
        // Frames a keypress has asked for, and whether the one in flight is
        // one of them. Written from the presenter thread, read from the one
        // that presents.
        std::atomic<unsigned> demanded{ 0 };
        // Every world frame while this is set, for a defect that comes and
        // goes between frames. Toggled from the presenter thread like the above.
        std::atomic<bool> streaming{ false };
        bool     streamed = false;   // the last boundary saw `streaming` set
        unsigned inStream = 0;       // frames captured since it was set
        enum class Why { Timer, Hand, Stream } why = Why::Timer;
    } g;

    // A capture is about 90 MB, so a key held on by mistake fills a disk in
    // minutes. This many is ~10 GB, and several seconds of play even at the
    // few frames a second capturing leaves.
    constexpr unsigned kStreamLimit = 120;

    // MW2_RENDERDOC=<seconds>[:<frames>]. Zero seconds captures the first world
    // frame there is, which on a level is during the load.
    void ReadRequest()
    {
        const char* v = diag::Text("MW2_RENDERDOC");
        if (!v) return;
        g.asked = true;
        char* end = nullptr;
        g.after = std::strtod(v, &end);
        if (end && *end == ':')
        {
            const unsigned n = unsigned(std::strtoul(end + 1, nullptr, 10));
            if (n) g.wanted = n;
        }
    }

    bool Due()
    {
        if (g.after <= 0.0) return true;
        static const std::chrono::steady_clock::time_point start =
            std::chrono::steady_clock::now();
        return std::chrono::duration<double>(
                   std::chrono::steady_clock::now() - start).count() >= g.after;
    }

    // RTLD_NOLOAD: if the injector did not put RenderDoc here, loading it now
    // would be too late anyway -- it hooks `vkCreateInstance`, and by the time
    // a frame is presented the instance is long since made.
    void Find()
    {
        g.looked = true;
#ifdef _WIN32
        void* lib = platform::LoadedLibrary("renderdoc.dll");
#else
        void* lib = platform::LoadedLibrary("librenderdoc.so");
#endif
        if (!lib) { g.refused = "RenderDoc is not in this process -- run under renderdoccmd capture"; return; }

        auto get = (pRENDERDOC_GetAPI)platform::Symbol(lib, "RENDERDOC_GetAPI");
        if (!get) { g.refused = "RenderDoc's library has no RENDERDOC_GetAPI"; return; }

        void* api = nullptr;
        if (!get(eRENDERDOC_API_Version_1_4_1, &api) || !api)
        { g.refused = "RenderDoc refused API version 1.4.1"; return; }

        void* instance = vk::pipeline::Instance();
        if (!instance) { g.refused = "no Vulkan instance to capture from"; return; }

        g.api = (RENDERDOC_API_1_4_1*)api;
        // Named rather than left to RenderDoc to find: the device that draws is
        // the one on the pipeline's instance.
        g.device = RENDERDOC_DEVICEPOINTER_FROM_VKINSTANCE(instance);

        if (const char* out = diag::Text("MW2_RENDERDOC_OUT"))
            g.api->SetCaptureFilePathTemplate(out);
        LOGI("capture: RenderDoc %s, writing to %s",
             "1.4.1", g.api->GetCaptureFilePathTemplate());
    }
#endif
}

#ifndef MW2_HAVE_VULKAN
void vk::capture::FrameBoundary(bool, uint64_t) {}
void vk::capture::RequestNow(unsigned) {}
void vk::capture::ToggleStream() {}
void vk::capture::Report() {}
#else

void vk::capture::FrameBoundary(bool worldDrawn, uint64_t frame)
{
    static const bool once = (ReadRequest(), true);
    (void)once;
    // No early return on `!g.asked`: that is only the timed request, and the
    // keys have to get through without MW2_RENDERDOC set. The tests below
    // stop every frame that nothing asked for.

    if (g.open)
    {
        // One capture per frame: a capture spanning several is harder to read
        // than several files, and the frames are not alike.
        if (!g.api->EndFrameCapture(g.device, nullptr))
            LOGW("capture: RenderDoc discarded the capture of frame %u", g.taken);
        g.open = false;
        g.taken++;
        if (g.why == State::Why::Hand)
        {
            g.demanded.fetch_sub(1, std::memory_order_relaxed);
            LOGI("capture: frame %u written by hand", g.taken);
        }
        else if (g.why == State::Why::Stream)
        {
            if (++g.inStream >= kStreamLimit)
            {
                g.streaming.store(false, std::memory_order_relaxed);
                LOGW("capture: F11 stream stopped at its limit of %u frames", kStreamLimit);
            }
        }
        else if (g.taken >= g.wanted)
        {
            LOGI("capture: %u frame(s) captured, done", g.taken);
            g.asked = false;
        }
    }

    const bool streaming = g.streaming.load(std::memory_order_relaxed);
    if (streaming != g.streamed)
    {
        if (streaming) g.inStream = 0;
        else LOGI("capture: F11 stream ended, %u frame(s) written", g.inStream);
        g.streamed = streaming;
    }

    // A keypress outranks the timer, and outlives the timed budget: the point
    // of it is to catch a moment nobody could have named in advance.
    const bool byHand = g.demanded.load(std::memory_order_relaxed) != 0;
    if (!byHand && !streaming && (!g.asked || g.taken >= g.wanted)) return;
    // A stream takes every frame. Whether the frame that just ended drew the
    // world says nothing reliable about the next one -- presents do not line
    // up with the title's frames -- and skipping on it left world frames out
    // of a stream, which is where a flicker went to hide.
    if (!worldDrawn && !streaming) return;
    if (!byHand && !streaming && !Due()) return;
    if (!g.looked) Find();
    if (!g.api)
    {
        // Say it at the keypress, not only in the shutdown report: somebody is
        // standing there pressing a key and deserves to know it did nothing.
        if (byHand || streaming)
            LOGW("capture: %s cannot capture -- %s", byHand ? "F10" : "F11",
                 g.refused ? g.refused : "RenderDoc is not available");
        g.asked = false;
        g.demanded.store(0, std::memory_order_relaxed);
        g.streaming.store(false, std::memory_order_relaxed);
        g.streamed = false;
        return;
    }

    g.api->StartFrameCapture(g.device, nullptr);
    g.open = true;
    g.why = byHand ? State::Why::Hand : streaming ? State::Why::Stream : State::Why::Timer;
    // RenderDoc numbers the files of a run in order -- the first has no
    // suffix, then _2, _3 -- so this is the file's own number.
    LOGI("capture: file %u records renderer frame %llu", g.taken + 1,
         (unsigned long long)frame);
}

void vk::capture::ToggleStream()
{
    static const bool once = (ReadRequest(), true);
    (void)once;
    const bool now = !g.streaming.load(std::memory_order_relaxed);
    g.streaming.store(now, std::memory_order_relaxed);
    if (now)
        LOGI("capture: F11 -- capturing every frame until F11 again (at most %u)",
             kStreamLimit);
    else
        LOGI("capture: F11 -- stopping after the frame in flight");
}

void vk::capture::RequestNow(unsigned frames)
{
    static const bool once = (ReadRequest(), true);
    (void)once;
    g.demanded.fetch_add(frames ? frames : 1, std::memory_order_relaxed);
    LOGI("capture: F10 -- %u frame(s) asked for; they are written when the next"
         " frames that draw the world finish", frames ? frames : 1);
}

void vk::capture::Report()
{
    if (!g.looked && !g.taken) return;
    if (g.refused) LOGW("capture: no RenderDoc capture -- %s", g.refused);
    else           LOGI("capture: %u RenderDoc capture(s) written", g.taken);
}

#endif
