#pragma once
// The Android layer: everything the runtime needs from an Android application
// that the desktop build gets from SDL, the shell and the window system.
//
// The app (android/) owns the activity, the surface and the on-screen
// controls; this header is the seam between them. Nothing here exists in a
// desktop build -- the whole layer is behind MW2_ANDROID -- and nothing in it
// calls into the guest.
//
//   window.cpp   the surface handed over by SurfaceHolder, and its lifetime
//   input.cpp    the pad the touch controls and a physical pad both feed
//   audio.cpp    the AAudio sink the mixer writes into
//   driver.cpp   which Vulkan the process uses: the system's, or a Turnip
//                driver the player imported as a zip
//   perf.cpp     core affinity, thread priority and what to drop when the
//                system asks for memory back
//   jni.cpp      the calls the app makes, and the game thread
//   log.cpp      the log, to logcat and to a file
#include <cstdint>
#include <string>

#ifdef MW2_ANDROID

struct ANativeWindow;

namespace android
{
    // ---- paths ------------------------------------------------------------
    // Set once by the app at start-up. Every one is absolute and exists.
    struct Paths
    {
        std::string files;        // internal, private: saves, caches, drivers
        std::string external;     // /sdcard/Android/data/<pkg>/files: the game
        std::string cache;        // internal cache: scratch files
        std::string nativeLib;    // the apk's lib/arm64-v8a, for the driver loader
    };
    const Paths& GetPaths();
    void SetPaths(const Paths& paths);

    // ---- the window -------------------------------------------------------
    // The surface comes and goes with the activity: it is destroyed when the
    // player leaves the game and made again when they come back, while the
    // guest keeps running. The presenter follows it through these.
    //
    // A generation counter rather than a callback: the presenter is a loop,
    // and a surface that changed twice while it was busy is still one change.
    uint64_t WindowGeneration();
    // The window to present to, with a reference taken for the caller, or
    // null when there is none. Release it with ReleaseWindow.
    ANativeWindow* AcquireWindow();
    void ReleaseWindow(ANativeWindow* window);
    // Blocks until there is a window or `milliseconds` have passed. Returns
    // whether there is one. A negative timeout waits until the run ends.
    bool WaitForWindow(int milliseconds);
    // The surface's size in pixels, as the app last reported it.
    void WindowSize(uint32_t& width, uint32_t& height);
    // What the display runs at, from the app (Display.getRefreshRate).
    double RefreshHz();
    // The activity is not in front: nothing is presented, and audio is muted.
    bool Paused();

    // The presenter acknowledges that it has let go of the window, which is
    // what surfaceDestroyed waits for before it returns to Android.
    void WindowReleased();

    // ---- the run ----------------------------------------------------------
    // False once the app has asked the run to end.
    bool Running();
    // Whether this process is running under the Android app at all. Only
    // false in a unit test that links the layer without starting it.
    bool Started();

    // What the app should show when something went wrong before the first
    // frame ("no Vulkan device", "the game files are missing", ...).
    void SetStatus(const char* text);
    std::string Status();

    // ---- logging ----------------------------------------------------------
    // Called by log.h. `level` is 'i', 'w', 'E' or 'k'.
    void LogLine(char level, const char* text);
    void OpenLogFile(const char* path);

    // Replaces stdout and stderr with a pipe read back into the log. What
    // the runtime prints rather than logs -- the crash handler's backtrace
    // above all -- would otherwise go to /dev/null on a phone.
    void CaptureStandardStreams();

    // ---- what the frame-rate counter shows --------------------------------
    struct Stats
    {
        float fps = 0;              // frames the window showed, last second
        float frameMs = 0;          // the longest frame in that second
        uint32_t widthPixels = 0;
        uint32_t heightPixels = 0;
        uint64_t textureBytes = 0;
        uint64_t hostMemoryBytes = 0;
    };
    void PublishStats(const Stats& stats);
    Stats GetStats();
}

// ---- input ---------------------------------------------------------------
namespace android::input
{
    // XINPUT_GAMEPAD's button bits, as kernel/input.cpp uses them.
    inline constexpr uint16_t kDpadUp = 0x0001, kDpadDown = 0x0002, kDpadLeft = 0x0004,
        kDpadRight = 0x0008, kStart = 0x0010, kBack = 0x0020, kLeftThumb = 0x0040,
        kRightThumb = 0x0080, kLeftShoulder = 0x0100, kRightShoulder = 0x0200,
        kA = 0x1000, kB = 0x2000, kX = 0x4000, kY = 0x8000;

    struct Pad
    {
        uint16_t buttons = 0;
        uint8_t leftTrigger = 0, rightTrigger = 0;
        int16_t leftX = 0, leftY = 0, rightX = 0, rightY = 0;
    };

    // From the touch controls: an absolute state, recomputed by the overlay
    // on every touch event, so a lost event cannot leave a button held.
    void SetTouchPad(const Pad& pad);
    // The look area's movement since the last call, in view pixels.
    void AddLook(float dx, float dy);
    // The finger left the look area: the stick centres at once.
    void ClearLook();
    void SetLookSettings(float sensitivityX, float sensitivityY, float smoothing,
                         bool invertY, float saturationPixelsPerSecond);

    // From a physical pad. `user` is 0..3, as the console numbers them.
    void SetHardwarePad(uint32_t user, const Pad& pad);
    void SetHardwarePadConnected(uint32_t user, bool connected);
    // The player can switch physical pads off entirely (a pad left plugged in
    // drifting on its sticks makes the menus unusable).
    void SetHardwarePadEnabled(bool enabled);
    bool HardwarePadEnabled();

    // What XamInputGetState answers with: the touch controls and the pad
    // merged for user 0, the pad alone for the others. False when nothing is
    // connected for that user.
    bool Poll(uint32_t user, Pad& out);
    // Whether anything at all can drive that user.
    bool Connected(uint32_t user);

    // XamInputSetState's motors, passed to the app (the phone's vibrator, or
    // a pad that has its own).
    void Rumble(uint32_t user, uint16_t low, uint16_t high);
}

// ---- audio ---------------------------------------------------------------
// An AAudio stream fed by the mixer in apu/audio.cpp: 5.1 float at 48 kHz,
// downmixed to what the device takes.
namespace android::audio
{
    bool Open();
    void Close();
    // `frames` is samples per channel; the buffer is interleaved 5.1 float.
    void Write(const float* samples, uint32_t frames);
    // How much the sink still holds, in 256-sample frames, so the mixer can
    // pace itself the way it does against SDL.
    uint32_t QueuedFrames();
    bool IsOpen();
    void SetMuted(bool muted);
}

// ---- the Vulkan driver ----------------------------------------------------
namespace android::driver
{
    // The driver the player chose, or nothing for the system's.
    // `directory` holds the unpacked zip (meta.json and the library).
    void Select(const char* directory, const char* libraryName);

    // Opens the Vulkan implementation and returns vkGetInstanceProcAddr, or
    // null with `error` filled in. Tried in order: the chosen driver through
    // libadrenotools if this build has it, the chosen driver on its own, then
    // the system's libvulkan.so.
    void* Open(std::string& error);
    // What was opened, for the log and the app's "driver" line.
    const std::string& Description();
    // True when the chosen driver was asked for and did not load, so the app
    // can tell the player instead of silently running on the system's.
    bool CustomDriverFailed();
}

// ---- performance ----------------------------------------------------------
namespace android::perf
{
    // The cores that clock highest, so the guest's main thread and the
    // renderer do not land on the little cluster mid-firefight.
    void PinToBigCores();
    void PinToAllCores();
    // A thread that must not be late: the guest's main thread, the ring
    // consumer, the audio mixer.
    void RaiseThreadPriority();
    // How much RAM the device has, in MB, and how much is free right now.
    uint32_t TotalMemoryMB();
    uint32_t AvailableMemoryMB();
    // ComponentCallbacks2.onTrimMemory: release what can be released.
    void TrimMemory(int level);
    // Sets the defaults the renderer reads out of the environment, sized for
    // this device, before anything reads them. Never overrides a value the
    // app set itself.
    void ApplyMemoryDefaults();
}

#endif  // MW2_ANDROID
