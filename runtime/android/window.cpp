// The surface the activity hands over, and its lifetime.
//
// Android destroys the surface whenever the activity leaves the foreground and
// makes a new one when it comes back. The guest knows nothing about this: it
// keeps rendering, and the presenter follows the surface through it. Two rules
// make that safe:
//
//   * surfaceDestroyed must not return to Android until nothing holds the
//     window any more -- the Vulkan surface destroyed, the ANativeWindow
//     released. Android tears the buffer queue down behind that call, and a
//     driver still presenting into it is a crash in the driver, not in us.
//   * the presenter never blocks the guest on a window. With no surface,
//     frames are let go the moment they arrive.
#ifdef MW2_ANDROID

#include "android.h"
#include "../log.h"

#include <android/native_window.h>

#include <atomic>
#include <chrono>
#include <condition_variable>
#include <mutex>

namespace
{
    std::mutex g_lock;
    std::condition_variable g_wake;

    ANativeWindow* g_window = nullptr;      // one reference, held by this file
    uint32_t g_width = 0, g_height = 0;
    double g_refreshHz = 60.0;

    std::atomic<uint64_t> g_generation{ 0 };   // bumped whenever the surface changes
    std::atomic<uint32_t> g_holders{ 0 };      // presenter references outstanding
    bool g_awaitingRelease = false;            // surfaceDestroyed is waiting
    std::atomic<bool> g_paused{ false };
    std::atomic<bool> g_running{ true };
}

uint64_t android::WindowGeneration() { return g_generation.load(std::memory_order_acquire); }

ANativeWindow* android::AcquireWindow()
{
    std::lock_guard lock(g_lock);
    if (!g_window) return nullptr;
    ANativeWindow_acquire(g_window);
    g_holders.fetch_add(1, std::memory_order_relaxed);
    return g_window;
}

void android::ReleaseWindow(ANativeWindow* window)
{
    if (!window) return;
    ANativeWindow_release(window);
    {
        std::lock_guard lock(g_lock);
        if (g_holders.load(std::memory_order_relaxed) > 0)
            g_holders.fetch_sub(1, std::memory_order_relaxed);
    }
    g_wake.notify_all();
}

bool android::WaitForWindow(int milliseconds)
{
    std::unique_lock lock(g_lock);
    if (g_window) return true;
    if (milliseconds < 0)
    {
        g_wake.wait(lock, [] { return g_window != nullptr || !g_running.load(); });
        return g_window != nullptr;
    }
    g_wake.wait_for(lock, std::chrono::milliseconds(milliseconds),
                    [] { return g_window != nullptr || !g_running.load(); });
    return g_window != nullptr;
}

void android::WindowSize(uint32_t& width, uint32_t& height)
{
    std::lock_guard lock(g_lock);
    width = g_width;
    height = g_height;
}

double android::RefreshHz()
{
    std::lock_guard lock(g_lock);
    return g_refreshHz;
}

bool android::Paused() { return g_paused.load(std::memory_order_relaxed); }
bool android::Running() { return g_running.load(std::memory_order_relaxed); }

void android::WindowReleased()
{
    {
        std::lock_guard lock(g_lock);
        g_awaitingRelease = false;
    }
    g_wake.notify_all();
}

// ---- called from jni.cpp --------------------------------------------------
namespace android::detail
{
    // A new surface, or the same one at another size.
    void SetWindow(ANativeWindow* window, uint32_t width, uint32_t height, double refreshHz)
    {
        {
            std::lock_guard lock(g_lock);
            if (g_window && g_window != window)
            {
                ANativeWindow_release(g_window);
                g_window = nullptr;
            }
            if (window && window != g_window) ANativeWindow_acquire(window);
            g_window = window;
            g_width = width;
            g_height = height;
            if (refreshHz > 20.0 && refreshHz < 500.0) g_refreshHz = refreshHz;
            g_generation.fetch_add(1, std::memory_order_release);
        }
        g_wake.notify_all();
        LOGI("android: surface %p, %ux%u at %.2f Hz", (void*)window, width, height, refreshHz);
    }

    // surfaceDestroyed: the window goes away, and this waits for whoever is
    // presenting to let go of it. The timeout is a safety net -- a presenter
    // stuck in the driver must not hang the UI thread, because Android kills
    // an application that stops answering.
    void DestroyWindow()
    {
        ANativeWindow* going = nullptr;
        {
            std::lock_guard lock(g_lock);
            going = g_window;
            g_window = nullptr;
            g_width = g_height = 0;
            g_awaitingRelease = g_holders.load(std::memory_order_relaxed) > 0;
            g_generation.fetch_add(1, std::memory_order_release);
        }
        g_wake.notify_all();

        std::unique_lock lock(g_lock);
        if (g_awaitingRelease)
        {
            const bool letGo = g_wake.wait_for(lock, std::chrono::seconds(3), [] {
                return !g_awaitingRelease && g_holders.load(std::memory_order_relaxed) == 0;
            });
            if (!letGo)
                LOGW("android: the presenter did not let the surface go in three seconds;"
                     " tearing it down anyway");
        }
        if (going) ANativeWindow_release(going);
        LOGI("android: surface destroyed");
    }

    void SetPaused(bool paused)
    {
        g_paused.store(paused, std::memory_order_relaxed);
        g_wake.notify_all();
        LOGI("android: %s", paused ? "paused" : "resumed");
    }

    void SetRunning(bool running)
    {
        g_running.store(running, std::memory_order_relaxed);
        g_wake.notify_all();
    }

    void SetRefreshHz(double hz)
    {
        std::lock_guard lock(g_lock);
        if (hz > 20.0 && hz < 500.0) g_refreshHz = hz;
    }
}

#endif  // MW2_ANDROID
