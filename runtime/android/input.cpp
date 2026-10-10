// The pad the title reads, fed by the touch controls and by a physical pad.
//
// The overlay sends an absolute state on every touch event -- a button mask,
// two triggers and two sticks -- so a dropped event cannot leave a button
// held down. The look area is different: it sends movement, and movement has
// to become a stick deflection the title can integrate.
//
// Look: the deflection is the finger's *speed*, not its displacement. The
// title turns the view by the stick's value once a frame, so a stick set from
// speed turns the view by the distance the finger travelled, whatever rate
// either side runs at -- 60 Hz polling, 120 Hz touch reports, a frame that
// took 40 ms. Displacement alone would turn faster on a device that reports
// touches more often, which is how touch aiming usually ends up feeling
// different on every phone.
#ifdef MW2_ANDROID

#include "android.h"
#include "../log.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstring>
#include <mutex>

namespace
{
    using Clock = std::chrono::steady_clock;

    struct Source
    {
        std::mutex lock;
        android::input::Pad pad;
        bool connected = false;
    };

    Source g_touch;                     // the on-screen controls
    Source g_hardware[4];               // physical pads, as the app numbers them
    std::atomic<bool> g_hardwareEnabled{ true };

    // ---- the look area ----------------------------------------------------
    std::mutex g_lookLock;
    double g_lookAccumX = 0, g_lookAccumY = 0;      // pixels since the last poll
    Clock::time_point g_lookLast{};                 // when that poll was
    float g_lookValueX = 0, g_lookValueY = 0;       // the stick, -1..1
    bool g_lookActive = false;

    float g_sensitivityX = 1.0f, g_sensitivityY = 1.0f;
    float g_smoothing = 0.35f;                      // 0 raw, 0.9 very smooth
    bool g_invertY = false;
    // The speed, in pixels a second, at which the stick reaches full tilt.
    // 2200 px/s is a brisk flick across a 1080p phone held in landscape.
    float g_saturation = 2200.0f;

    int16_t ToAxis(float value)
    {
        value = std::clamp(value, -1.0f, 1.0f);
        constexpr float kMinThreshold = 0.015f;
        const float absVal = std::abs(value);
        if (absVal < kMinThreshold) return 0;

        // The console title has an internal thumbstick deadzone of ~14% (0.14f).
        // Touch look should respond immediately to fine movements without requiring
        // the finger to exceed a stick deadzone barrier.
        // Remap from [kMinThreshold, 1.0f] to [0.0f, 1.0f] so near-zero residuals do
        // not snap to full minimum deflection.
        constexpr float kDeadzone = 0.14f;
        const float sign = value < 0.0f ? -1.0f : 1.0f;
        const float normalized = (absVal - kMinThreshold) / (1.0f - kMinThreshold);
        const float boosted = sign * (kDeadzone + normalized * (1.0f - kDeadzone));
        return int16_t(std::lround(boosted * (boosted < 0 ? 32768.0f : 32767.0f)));
    }

    // Converts what the finger did since the last call into a stick value.
    // Called from the title's poll, which is where the title's own clock is.
    void UpdateLook(android::input::Pad& out)
    {
        std::lock_guard lock(g_lookLock);
        const auto now = Clock::now();
        if (g_lookLast.time_since_epoch().count() == 0) g_lookLast = now;
        const double elapsed = std::chrono::duration<double>(now - g_lookLast).count();

        // Two polls in the same frame: the title asks for every user's state
        // one after another, and the second must not see an empty accumulator
        // and read as "the finger stopped". Below a millisecond the last value
        // stands and nothing is consumed.
        if (elapsed >= 0.001)
        {
            g_lookLast = now;
            const double speedX = g_lookAccumX / elapsed;
            const double speedY = g_lookAccumY / elapsed;
            g_lookAccumX = g_lookAccumY = 0;

            if (!g_lookActive)
            {
                // A finger that has been lifted centres the stick immediately
                // rather than decaying through smoothing.
                g_lookValueX = 0.0f;
                g_lookValueY = 0.0f;
            }
            else
            {
                const float saturation = std::max(g_saturation, 100.0f);
                float x = float(speedX) * g_sensitivityX / saturation;
                float y = float(speedY) * g_sensitivityY / saturation;
                // Smoothing takes the stairs out of a finger reported at 120 Hz
                // against a title polling at 60; too much of it feels like ice.
                const float keep = std::clamp(g_smoothing, 0.0f, 0.9f);
                g_lookValueX = g_lookValueX * keep + std::clamp(x, -1.0f, 1.0f) * (1.0f - keep);
                g_lookValueY = g_lookValueY * keep + std::clamp(y, -1.0f, 1.0f) * (1.0f - keep);
                if (std::fabs(g_lookValueX) < 0.002f) g_lookValueX = 0;
                if (std::fabs(g_lookValueY) < 0.002f) g_lookValueY = 0;
            }
        }

        if (g_lookValueX == 0 && g_lookValueY == 0) return;
        // The guest's Y axis points up; the screen's points down.
        const float y = g_invertY ? g_lookValueY : -g_lookValueY;
        // The look area adds to the right stick rather than replacing it, so a
        // player using both the stick and the look area is not fighting them.
        const int32_t mergedX = int32_t(out.rightX) + ToAxis(g_lookValueX);
        const int32_t mergedY = int32_t(out.rightY) + ToAxis(y);
        out.rightX = int16_t(std::clamp<int32_t>(mergedX, -32768, 32767));
        out.rightY = int16_t(std::clamp<int32_t>(mergedY, -32768, 32767));
    }

    void Merge(android::input::Pad& into, const android::input::Pad& from)
    {
        into.buttons |= from.buttons;
        into.leftTrigger = std::max(into.leftTrigger, from.leftTrigger);
        into.rightTrigger = std::max(into.rightTrigger, from.rightTrigger);
        auto stronger = [](int16_t a, int16_t b) { return std::abs(int(a)) >= std::abs(int(b)) ? a : b; };
        into.leftX = stronger(into.leftX, from.leftX);
        into.leftY = stronger(into.leftY, from.leftY);
        into.rightX = stronger(into.rightX, from.rightX);
        into.rightY = stronger(into.rightY, from.rightY);
    }

    // Set by jni.cpp so a motor can reach the app.
    void (*g_rumble)(uint32_t user, uint16_t low, uint16_t high) = nullptr;
}

namespace android::input::detail
{
    void SetRumbleSink(void (*sink)(uint32_t, uint16_t, uint16_t)) { g_rumble = sink; }
}

void android::input::SetTouchPad(const Pad& pad)
{
    std::lock_guard lock(g_touch.lock);
    g_touch.pad = pad;
    g_touch.connected = true;
}

void android::input::AddLook(float dx, float dy)
{
    std::lock_guard lock(g_lookLock);
    g_lookAccumX += dx;
    g_lookAccumY += dy;
    g_lookActive = true;
    // The first movement of a gesture starts the clock here, so the time the
    // finger spent resting on the screen does not count as slow movement.
    if (g_lookLast.time_since_epoch().count() == 0) g_lookLast = Clock::now();
}

void android::input::ClearLook()
{
    std::lock_guard lock(g_lookLock);
    g_lookAccumX = g_lookAccumY = 0;
    g_lookValueX = g_lookValueY = 0;
    g_lookActive = false;
    g_lookLast = Clock::now();
}

void android::input::SetLookSettings(float sensitivityX, float sensitivityY, float smoothing,
                                     bool invertY, float saturationPixelsPerSecond)
{
    std::lock_guard lock(g_lookLock);
    g_sensitivityX = std::clamp(sensitivityX, 0.05f, 10.0f);
    g_sensitivityY = std::clamp(sensitivityY, 0.05f, 10.0f);
    g_smoothing = std::clamp(smoothing, 0.0f, 0.9f);
    g_invertY = invertY;
    if (saturationPixelsPerSecond > 100.0f) g_saturation = saturationPixelsPerSecond;
}

void android::input::SetHardwarePad(uint32_t user, const Pad& pad)
{
    if (user >= 4) return;
    std::lock_guard lock(g_hardware[user].lock);
    g_hardware[user].pad = pad;
    g_hardware[user].connected = true;
}

void android::input::SetHardwarePadConnected(uint32_t user, bool connected)
{
    if (user >= 4) return;
    std::lock_guard lock(g_hardware[user].lock);
    g_hardware[user].connected = connected;
    if (!connected) g_hardware[user].pad = Pad{};
    LOGI("input: physical pad %u %s", user, connected ? "connected" : "gone");
}

void android::input::SetHardwarePadEnabled(bool enabled)
{
    g_hardwareEnabled.store(enabled, std::memory_order_relaxed);
    LOGI("input: physical pads %s", enabled ? "on" : "off");
}

bool android::input::HardwarePadEnabled() { return g_hardwareEnabled.load(std::memory_order_relaxed); }

bool android::input::Connected(uint32_t user)
{
    if (user == 0) return true;   // the touch controls are always there
    if (user >= 4 || !HardwarePadEnabled()) return false;
    std::lock_guard lock(g_hardware[user].lock);
    return g_hardware[user].connected;
}

bool android::input::Poll(uint32_t user, Pad& out)
{
    out = Pad{};
    if (user >= 4) return false;

    bool any = false;
    if (user == 0)
    {
        std::lock_guard lock(g_touch.lock);
        if (g_touch.connected) { out = g_touch.pad; any = true; }
    }
    if (HardwarePadEnabled())
    {
        std::lock_guard lock(g_hardware[user].lock);
        if (g_hardware[user].connected)
        {
            if (any) Merge(out, g_hardware[user].pad);
            else     out = g_hardware[user].pad;
            any = true;
        }
    }
    // User 0 always answers: the touch controls stand in for a pad, and a
    // title told "no controller" on user 0 stops at its "reconnect the
    // controller" screen.
    if (user == 0)
    {
        UpdateLook(out);
        any = true;
    }
    return any;
}

void android::input::Rumble(uint32_t user, uint16_t low, uint16_t high)
{
    if (g_rumble) g_rumble(user, low, high);
}

#endif  // MW2_ANDROID
