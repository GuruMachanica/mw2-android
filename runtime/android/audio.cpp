// The audio sink, where the desktop build has SDL: an AAudio stream in
// callback mode.
//
// The mixer in apu/audio.cpp runs the title's 5.333 ms cadence and hands over
// 256 samples of six channels at 48 kHz. That producer and AAudio's callback
// are two threads that must never block each other, so between them sits a
// single-producer single-consumer ring of whole mixer frames: the mixer writes
// one and moves on, the callback takes what it needs and outputs silence if
// there is nothing (an underrun is a click; a lock is a dropout).
//
// The device gets stereo: no phone has six speakers, and AAudio would resample
// and downmix in its own mixer thread anyway. The downmix is the usual ITU
// one, with the centre and surrounds at -3 dB.
#ifdef MW2_ANDROID

#include "android.h"
#include "../log.h"

#include <aaudio/AAudio.h>

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstring>
#include <mutex>
#include <vector>

namespace
{
    constexpr uint32_t kGuestRate = 48000;
    constexpr uint32_t kGuestChannels = 6;
    constexpr uint32_t kFrameSamples = 256;            // per channel, one mixer frame
    constexpr uint32_t kRingFrames = 32;               // 170 ms at most
    constexpr uint32_t kOutChannels = 2;

    // The ring holds stereo samples already downmixed, so the callback does
    // nothing but copy (and resample, if the device insisted on another rate).
    struct Ring
    {
        std::vector<float> samples;                    // kRingFrames * kFrameSamples * 2
        std::atomic<uint32_t> write{ 0 };              // in samples-per-channel
        std::atomic<uint32_t> read{ 0 };
        uint32_t capacity = 0;                         // samples per channel

        void Reset(uint32_t frames)
        {
            capacity = frames * kFrameSamples;
            samples.assign(size_t(capacity) * kOutChannels, 0.0f);
            write.store(0, std::memory_order_relaxed);
            read.store(0, std::memory_order_relaxed);
        }

        uint32_t Held() const
        {
            const uint32_t w = write.load(std::memory_order_acquire);
            const uint32_t r = read.load(std::memory_order_acquire);
            return w - r;                              // unsigned wrap is the difference
        }

        uint32_t Free() const { return capacity - std::min(Held(), capacity); }

        void Push(const float* stereo, uint32_t count)
        {
            if (!capacity) return;
            const uint32_t w = write.load(std::memory_order_relaxed);
            for (uint32_t i = 0; i < count; i++)
            {
                const uint32_t at = ((w + i) % capacity) * kOutChannels;
                samples[at] = stereo[i * 2];
                samples[at + 1] = stereo[i * 2 + 1];
            }
            write.store(w + count, std::memory_order_release);
        }

        // Takes up to `count`, returns how many it had.
        uint32_t Pop(float* out, uint32_t count)
        {
            if (!capacity) return 0;
            const uint32_t held = std::min(Held(), capacity);
            const uint32_t take = std::min(held, count);
            const uint32_t r = read.load(std::memory_order_relaxed);
            for (uint32_t i = 0; i < take; i++)
            {
                const uint32_t at = ((r + i) % capacity) * kOutChannels;
                out[i * 2] = samples[at];
                out[i * 2 + 1] = samples[at + 1];
            }
            read.store(r + take, std::memory_order_release);
            return take;
        }
    };

    std::mutex g_streamLock;          // opening and closing only
    AAudioStream* g_stream = nullptr;
    Ring g_ring;
    std::atomic<bool> g_open{ false };
    std::atomic<bool> g_muted{ false };
    std::atomic<bool> g_needRestart{ false };
    std::atomic<uint64_t> g_underruns{ 0 };
    uint32_t g_deviceRate = kGuestRate;

    // Where the resampler is between two ring samples, when the device does
    // not run at 48 kHz. Touched only by the callback.
    double g_resamplePosition = 0.0;
    float g_lastSample[kOutChannels] = { 0, 0 };

    aaudio_data_callback_result_t OnData(AAudioStream*, void* /*user*/, void* audioData,
                                         int32_t numFrames)
    {
        auto* out = static_cast<float*>(audioData);
        const uint32_t wanted = uint32_t(std::max(numFrames, 0));
        if (!wanted) return AAUDIO_CALLBACK_RESULT_CONTINUE;

        if (g_muted.load(std::memory_order_relaxed))
        {
            std::memset(out, 0, size_t(wanted) * kOutChannels * sizeof(float));
            // The ring is still drained, so unpausing does not play a stale
            // second of audio from before the player left the game.
            static std::vector<float> sink;
            sink.resize(size_t(wanted) * kOutChannels);
            g_ring.Pop(sink.data(), wanted);
            return AAUDIO_CALLBACK_RESULT_CONTINUE;
        }

        if (g_deviceRate == kGuestRate)
        {
            const uint32_t got = g_ring.Pop(out, wanted);
            if (got < wanted)
            {
                std::memset(out + size_t(got) * kOutChannels, 0,
                            size_t(wanted - got) * kOutChannels * sizeof(float));
                g_underruns.fetch_add(1, std::memory_order_relaxed);
            }
            return AAUDIO_CALLBACK_RESULT_CONTINUE;
        }

        // Linear resampling, for a device AAudio opened at another rate.
        const double step = double(kGuestRate) / double(g_deviceRate);
        float pair[2];
        for (uint32_t i = 0; i < wanted; i++)
        {
            while (g_resamplePosition >= 1.0)
            {
                if (g_ring.Pop(pair, 1) == 1)
                {
                    g_lastSample[0] = pair[0];
                    g_lastSample[1] = pair[1];
                }
                else
                {
                    g_underruns.fetch_add(1, std::memory_order_relaxed);
                    g_lastSample[0] = g_lastSample[1] = 0;
                }
                g_resamplePosition -= 1.0;
            }
            out[i * 2] = g_lastSample[0];
            out[i * 2 + 1] = g_lastSample[1];
            g_resamplePosition += step;
        }
        return AAUDIO_CALLBACK_RESULT_CONTINUE;
    }

    void OnError(AAudioStream*, void* /*user*/, aaudio_result_t error)
    {
        // Headphones unplugged, or the device went away. Closing a stream from
        // its own error callback is not allowed: the mixer thread does it when
        // it next writes.
        LOGW("audio: the stream was disconnected (%s)", AAudio_convertResultToText(error));
        g_needRestart.store(true, std::memory_order_release);
    }

    bool OpenLocked()
    {
        AAudioStreamBuilder* builder = nullptr;
        aaudio_result_t result = AAudio_createStreamBuilder(&builder);
        if (result != AAUDIO_OK || !builder)
        {
            LOGW("audio: no AAudio stream builder (%s)", AAudio_convertResultToText(result));
            return false;
        }

        AAudioStreamBuilder_setDirection(builder, AAUDIO_DIRECTION_OUTPUT);
        AAudioStreamBuilder_setSharingMode(builder, AAUDIO_SHARING_MODE_SHARED);
        AAudioStreamBuilder_setFormat(builder, AAUDIO_FORMAT_PCM_FLOAT);
        AAudioStreamBuilder_setChannelCount(builder, int32_t(kOutChannels));
        AAudioStreamBuilder_setSampleRate(builder, int32_t(kGuestRate));
        AAudioStreamBuilder_setPerformanceMode(builder, AAUDIO_PERFORMANCE_MODE_LOW_LATENCY);
        // What the stream is for. The system routes and ducks by it -- a game
        // keeps playing under a notification where music would be quietened.
        // Both arrived in Android 9, and this app runs on 8, so they are
        // asked for only where they exist; without them the stream is treated
        // as media, which is right enough that nobody would notice.
        if (__builtin_available(android 28, *))
        {
            AAudioStreamBuilder_setUsage(builder, AAUDIO_USAGE_GAME);
            AAudioStreamBuilder_setContentType(builder, AAUDIO_CONTENT_TYPE_MUSIC);
        }
        AAudioStreamBuilder_setDataCallback(builder, OnData, nullptr);
        AAudioStreamBuilder_setErrorCallback(builder, OnError, nullptr);

        AAudioStream* stream = nullptr;
        result = AAudioStreamBuilder_openStream(builder, &stream);
        AAudioStreamBuilder_delete(builder);
        if (result != AAUDIO_OK || !stream)
        {
            LOGW("audio: AAudio would not open (%s)", AAudio_convertResultToText(result));
            return false;
        }

        g_deviceRate = uint32_t(std::max(AAudioStream_getSampleRate(stream), 8000));
        const int32_t burst = std::max(AAudioStream_getFramesPerBurst(stream), 32);
        // Three bursts of slack: enough that a late mixer frame is not a click,
        // short enough that a gunshot is not behind its muzzle flash.
        AAudioStream_setBufferSizeInFrames(stream, burst * 3);
        g_resamplePosition = 1.0;
        g_lastSample[0] = g_lastSample[1] = 0;

        result = AAudioStream_requestStart(stream);
        if (result != AAUDIO_OK)
        {
            LOGW("audio: AAudio would not start (%s)", AAudio_convertResultToText(result));
            AAudioStream_close(stream);
            return false;
        }

        g_stream = stream;
        LOGI("audio: AAudio %d Hz, %d channels, burst %d, %s latency; 5.1 is downmixed to stereo",
             int(g_deviceRate), int(AAudioStream_getChannelCount(stream)), int(burst),
             AAudioStream_getPerformanceMode(stream) == AAUDIO_PERFORMANCE_MODE_LOW_LATENCY
                 ? "low" : "normal");
        return true;
    }

    void CloseLocked()
    {
        if (!g_stream) return;
        AAudioStream_requestStop(g_stream);
        AAudioStream_close(g_stream);
        g_stream = nullptr;
    }
}

bool android::audio::Open()
{
    std::lock_guard lock(g_streamLock);
    if (g_stream) return true;
    g_ring.Reset(kRingFrames);
    const bool ok = OpenLocked();
    g_open.store(ok, std::memory_order_release);
    return ok;
}

void android::audio::Close()
{
    std::lock_guard lock(g_streamLock);
    g_open.store(false, std::memory_order_release);
    CloseLocked();
    LOGI("audio: stopped after %llu underruns", (unsigned long long)g_underruns.load());
}

bool android::audio::IsOpen() { return g_open.load(std::memory_order_acquire); }

void android::audio::SetMuted(bool muted) { g_muted.store(muted, std::memory_order_relaxed); }

uint32_t android::audio::QueuedFrames()
{
    if (!IsOpen()) return 0;
    return g_ring.Held() / kFrameSamples;
}

void android::audio::Write(const float* samples, uint32_t frames)
{
    if (!samples || !frames) return;

    // A stream that was disconnected is reopened here, on the mixer's thread.
    if (g_needRestart.exchange(false, std::memory_order_acq_rel))
    {
        std::lock_guard lock(g_streamLock);
        CloseLocked();
        g_ring.Reset(kRingFrames);
        const bool ok = OpenLocked();
        g_open.store(ok, std::memory_order_release);
        if (!ok)
        {
            LOGW("audio: could not reopen the stream; the run continues without sound");
            return;
        }
    }
    if (!IsOpen()) return;

    // Anything the ring cannot take is dropped rather than waited for: the
    // mixer must keep the title's cadence, and the sink being full means the
    // device has stalled.
    const uint32_t room = g_ring.Free();
    if (room < frames) return;

    // 5.1 in the console's order (L, R, C, LFE, Ls, Rs) down to stereo.
    constexpr float kCentre = 0.7071f, kSurround = 0.7071f, kLfe = 0.5f;
    static thread_local std::vector<float> stereo;
    stereo.resize(size_t(frames) * kOutChannels);
    for (uint32_t i = 0; i < frames; i++)
    {
        const float* in = samples + size_t(i) * kGuestChannels;
        float left  = in[0] + kCentre * in[2] + kLfe * in[3] + kSurround * in[4];
        float right = in[1] + kCentre * in[2] + kLfe * in[3] + kSurround * in[5];
        // The downmix can sum past full scale; clipping there is quieter than
        // letting it wrap in the device's converter.
        stereo[i * 2]     = std::clamp(left, -1.0f, 1.0f);
        stereo[i * 2 + 1] = std::clamp(right, -1.0f, 1.0f);
    }
    g_ring.Push(stereo.data(), frames);
}

#endif  // MW2_ANDROID
