// The audio render driver: the 5.333 ms mixer cadence and the host output.
//
// Pacing is by the wall clock, with the device as the arbiter: when SDL's queue
// runs low the callback is pumped early (the device clock is a touch faster
// than ours, or a burst of output is due), and when it grows past a limit the
// frames are dropped (the device has stalled, or there is none); the callback
// still runs at the nominal rate either way, because the title's sound state
// machines advance inside it and a silent run must still finish its sounds.
#include <ppc_recomp_shared.h>
#include "audio.h"
#include "../diagnostics.h"
#include "../env.h"
#include "../guest.h"
#include "../log.h"
#include "../crash.h"
#include "../platform.h"
#include "../kernel/kernel.h"

#ifdef MW2_USE_SDL
#include <SDL3/SDL.h>
#endif

#ifdef MW2_ANDROID
#include "../android/android.h"
#endif

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <condition_variable>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <thread>

namespace
{
    using Clock = std::chrono::steady_clock;

    constexpr uint32_t kFrequency = 48000;
    constexpr uint32_t kChannels = 6;
    constexpr uint32_t kSamplesPerChannel = 256;
    constexpr uint32_t kFrameFloats = kChannels * kSamplesPerChannel;
    constexpr uint32_t kFrameBytes = kFrameFloats * sizeof(float);
    constexpr auto     kFrameInterval = std::chrono::microseconds(5333);

    // Queue bounds on the host side, in frames of 5.333 ms.
    constexpr uint32_t kLowWaterFrames  = 3;    // unused
    constexpr uint32_t kHighWaterFrames = 48;   // drop above this (256 ms)

    constexpr uint32_t kMaxClients = 8;
    constexpr uint32_t kHandleTag = 0x41550000u;
    // Twice what a guest thread gets: the mixer's frames are deep, and an
    // overflow here lands in whichever allocation sits below the stack.
    constexpr uint32_t kStackSize = 1024u * 1024u;

    struct Client
    {
        bool inUse = false;
        uint32_t callback = 0;
        uint32_t context = 0;
        Clock::time_point next{};
    };

    std::mutex g_lock;
    std::condition_variable g_wake;
    Client g_clients[kMaxClients];
    bool g_workerStarted = false;

    diag::Stat g_callbacks, g_frames, g_dropped, g_earlyPumps;   // the audio thread's
    std::atomic<bool> g_outputOpen{ false };

#ifdef MW2_USE_SDL
    SDL_AudioStream* g_stream = nullptr;
    std::mutex g_streamLock;
#endif

    // MW2_NO_AUDIO=1: no playback device; the mixer and the decoder still run.
    bool OutputDisabled()
    {
        static const bool off = env::Flag("MW2_NO_AUDIO");
        return off;
    }

    void OpenOutput()
    {
#ifdef MW2_ANDROID
        if (OutputDisabled()) { LOGI("audio: output disabled (MW2_NO_AUDIO)"); return; }
        // AAudio, in its low-latency mode where the device has one. The sink
        // does the 5.1-to-stereo fold and any rate conversion the device
        // needs (runtime/android/audio.cpp).
        if (!android::audio::Open())
        {
            LOGW("audio: no AAudio stream; frames are discarded");
            return;
        }
        g_outputOpen = true;
        LOGI("audio: AAudio open; feeding 5.1 float at 48 kHz");
#elif defined(MW2_USE_SDL)
        if (OutputDisabled()) { LOGI("audio: output disabled (MW2_NO_AUDIO)"); return; }
        if (!SDL_InitSubSystem(SDL_INIT_AUDIO))
        {
            LOGW("audio: SDL audio would not start (%s)", SDL_GetError());
            return;
        }
        SDL_AudioSpec spec{};
        spec.format = SDL_AUDIO_F32;
        spec.channels = int(kChannels);
        spec.freq = int(kFrequency);
        std::lock_guard<std::mutex> guard(g_streamLock);
        g_stream = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
        if (!g_stream)
        {
            LOGW("audio: no playback device (%s); the driver is %s", SDL_GetError(), SDL_GetCurrentAudioDriver());
            return;
        }
        SDL_AudioSpec deviceSpec{};
        int deviceFrames = 0;
        SDL_GetAudioDeviceFormat(SDL_GetAudioStreamDevice(g_stream), &deviceSpec, &deviceFrames);
        SDL_ResumeAudioStreamDevice(g_stream);
        g_outputOpen = true;
        LOGI("audio: %s, device %d Hz %d ch, %d-sample buffers; feeding 5.1 float at 48 kHz",
             SDL_GetCurrentAudioDriver(), deviceSpec.freq, deviceSpec.channels, deviceFrames);
#else
        LOGI("audio: built without SDL; frames are discarded");
#endif
    }

    // Frames of 5.333 ms the host still holds, or 0 without a device.
    uint32_t QueuedFrames()
    {
#ifdef MW2_ANDROID
        return android::audio::QueuedFrames();
#elif defined(MW2_USE_SDL)
        std::lock_guard<std::mutex> guard(g_streamLock);
        if (!g_stream) return 0;
        int bytes = SDL_GetAudioStreamQueued(g_stream);
        return bytes > 0 ? uint32_t(bytes) / kFrameBytes : 0;
#else
        return 0;
#endif
    }

    // The worker owns a guest stack and thread block: the callback is guest
    // code and reads its thread id out of r13 like any other.
    struct GuestCaller
    {
        uint32_t stackBase = 0, stackTop = 0, pcr = 0;

        bool Prepare()
        {
            stackBase = kernel::AllocateGuest(kStackSize, 0x1000);
            const uint32_t id = kernel::NewThreadId();
            pcr = kernel::CreateThreadBlock(id);
            if (!stackBase || !pcr) return false;
            stackTop = (stackBase + kStackSize - 0x100) & ~0xFu;
            return true;
        }

        void Call(uint32_t address, uint32_t a0)
        {
            PPCFunc* fn = kernel::GuestFunction(address);
            if (!fn)
            {
                static bool warned = false;
                if (!warned) { warned = true; LOGW("audio: no recompiled function at callback %08X", address); }
                return;
            }
            PPCContext ctx{};
            ctx.r1.u32 = stackTop;
            ctx.r13.u32 = pcr;
            ctx.r3.u32 = a0;
            ctx.fpscr.loadFromHost();
            fn(ctx, guest::Base());
        }
    };

    void WorkerMain()
    {
        crash::RegisterThread("audio worker");
        GuestCaller caller;
        if (!caller.Prepare()) { LOGE("audio: could not set up the worker's guest state"); return; }
        OpenOutput();

        Clock::time_point lastPump = Clock::now();
        for (;;)
        {
            uint32_t callback = 0, context = 0;
            {
                std::unique_lock<std::mutex> guard(g_lock);
                Client* pick = nullptr;
                for (auto& c : g_clients)
                    if (c.inUse && (!pick || c.next < pick->next)) pick = &c;
                if (!pick)
                {
                    g_wake.wait(guard);
                    continue;
                }
                const auto now = Clock::now();
                if (pick->next > now)
                {
                    g_wake.wait_until(guard, pick->next);
                    continue;
                }
                // Resynchronise if falling too far behind (e.g. process paused or long frame)
                if (pick->next + 20 * kFrameInterval < now)
                    pick->next = now;
                pick->next += kFrameInterval;
                callback = pick->callback;
                context = pick->context;
            }
            g_callbacks++;
            // The callback takes the context it registered: the title's own object.
            caller.Call(callback, context);
        }
    }

    void EnsureWorker()
    {
        if (g_workerStarted) return;
        g_workerStarted = true;
        // The mixer callback is guest code and runs on this thread, so the
        // thread needs a host stack the guest's frames fit in (platform.h).
        if (!platform::StartThread([](void*) { WorkerMain(); }, nullptr,
                                   8u * 1024u * 1024u, "audio mixer"))
        {
            LOGE("audio: the mixer thread could not be started");
            g_workerStarted = false;
        }
    }
}

uint32_t apu::audio::RegisterClient(uint32_t callback, uint32_t callbackContext)
{
    std::lock_guard<std::mutex> guard(g_lock);
    for (uint32_t i = 0; i < kMaxClients; i++)
    {
        Client& c = g_clients[i];
        if (c.inUse) continue;
        c.callback = callback;
        c.context = callbackContext;
        // The first callback only once the registering call has returned and
        // the title has finished setting its object up.
        c.next = Clock::now() + std::chrono::milliseconds(100);
        c.inUse = true;
        EnsureWorker();
        g_wake.notify_all();
        LOGK("audio: client %u registered, callback %08X context %08X", i, callback, callbackContext);
        return kHandleTag | i;
    }
    LOGW("audio: no free client slot");
    return 0;
}

void apu::audio::UnregisterClient(uint32_t handle)
{
    const uint32_t i = handle & 0xFFFF;
    if ((handle & 0xFFFF0000u) != kHandleTag || i >= kMaxClients) return;
    std::lock_guard<std::mutex> guard(g_lock);
    Client& c = g_clients[i];
    if (!c.inUse) return;
    c = Client{};
    LOGK("audio: client %u unregistered", i);
}

void apu::audio::SubmitFrame(uint32_t handle, uint32_t samplesGuestAddress)
{
    const uint32_t i = handle & 0xFFFF;
    if ((handle & 0xFFFF0000u) != kHandleTag || i >= kMaxClients || !samplesGuestAddress) return;
    g_frames++;
#ifdef MW2_ANDROID
    if (!g_outputOpen) return;
    if (android::audio::QueuedFrames() > kHighWaterFrames) { g_dropped++; return; }
    {
        // Six planes of 256 big-endian floats to interleaved host floats,
        // the same conversion the SDL path makes; the sink folds them down.
        const uint32_t* in = reinterpret_cast<const uint32_t*>(guest::Base() + samplesGuestAddress);
        alignas(16) float out[kFrameFloats];
        for (uint32_t s = 0; s < kSamplesPerChannel; s++)
            for (uint32_t c = 0; c < kChannels; c++)
            {
                uint32_t bits; std::memcpy(&bits, &in[c * kSamplesPerChannel + s], 4);
                bits = __builtin_bswap32(bits);
                std::memcpy(&out[s * kChannels + c], &bits, 4);
            }
        android::audio::Write(out, kSamplesPerChannel);
    }
    return;
#endif
#ifdef MW2_USE_SDL
    std::lock_guard<std::mutex> guard(g_streamLock);
    if (!g_stream) return;
    const int queued = SDL_GetAudioStreamQueued(g_stream);
    if (queued > int(kHighWaterFrames * kFrameBytes)) { g_dropped++; return; }

    // Six planes of 256 big-endian floats to interleaved host floats.
    const uint32_t* in = reinterpret_cast<const uint32_t*>(guest::Base() + samplesGuestAddress);
    alignas(16) float out[kFrameFloats];
    for (uint32_t s = 0; s < kSamplesPerChannel; s++)
        for (uint32_t c = 0; c < kChannels; c++)
        {
            uint32_t bits; std::memcpy(&bits, &in[c * kSamplesPerChannel + s], 4);
            bits = __builtin_bswap32(bits);
            std::memcpy(&out[s * kChannels + c], &bits, 4);
        }
    if (!SDL_PutAudioStreamData(g_stream, out, int(kFrameBytes)))
    {
        static bool warned = false;
        if (!warned) { warned = true; LOGW("audio: put failed (%s)", SDL_GetError()); }
    }
#endif
}

void apu::audio::Report()
{
    if (!g_callbacks) return;
    LOGI("audio: %llu callbacks, %llu frames submitted, %llu dropped, %llu early pumps; output %s",
         (unsigned long long)g_callbacks.load(), (unsigned long long)g_frames.load(),
         (unsigned long long)g_dropped.load(), (unsigned long long)g_earlyPumps.load(),
         g_outputOpen ? "open" : "closed");
}
