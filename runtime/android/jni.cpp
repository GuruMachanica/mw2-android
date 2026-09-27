// What the app calls, and the thread the game runs on.
//
// Everything here is the app's side of the runtime: the activity hands over
// its surface, its touch state and its settings, and gets back a status line,
// the log and a few numbers for the overlay. Nothing in the rest of the
// runtime knows Java exists.
//
// The game runs on a thread this file makes, never on Android's main thread:
// the guest never returns, and a title that owns the UI thread is an
// application Android kills within five seconds. That thread also gets a
// stack of its own -- the recompiled PowerPC nests deeply on the host stack,
// and Android's default thread stack of one megabyte is not enough for it.
#ifdef MW2_ANDROID

#include "android.h"
#include "../run.h"
#include "../log.h"
#include "../env.h"
#include "../crash.h"
#include "../install/install.h"
#include "../gpu/vulkan/presenter.h"
#include "../gpu/vulkan/texture_cache.h"

#include <android/native_window.h>
#include <android/native_window_jni.h>
#include <jni.h>
#include <pthread.h>
#include <unistd.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <mutex>
#include <string>
#include <vector>

// Implemented in window.cpp; the app's calls land here.
namespace android::detail
{
    void SetWindow(ANativeWindow* window, uint32_t width, uint32_t height, double refreshHz);
    void DestroyWindow();
    void SetPaused(bool paused);
    void SetRunning(bool running);
    void SetRefreshHz(double hz);
    std::string LogTail();
}
namespace android::input::detail { void SetRumbleSink(void (*sink)(uint32_t, uint16_t, uint16_t)); }

namespace
{
    JavaVM* g_vm = nullptr;
    pthread_key_t g_envKey;
    bool g_envKeyMade = false;

    jobject g_listener = nullptr;       // a global reference; the app's callbacks
    jmethodID g_onRumble = nullptr;
    jmethodID g_onStatus = nullptr;

    android::Paths g_paths;
    std::atomic<bool> g_started{ false };
    pthread_t g_gameThread{};

    std::string g_gameFolder;

    // ---- install progress, read by the app while the copy runs ------------
    std::mutex g_progressLock;
    std::string g_progressFile;
    uint64_t g_progressDone = 0, g_progressTotal = 0;

    // ---- frame statistics --------------------------------------------------
    std::mutex g_statsLock;
    uint64_t g_lastPresented = 0;
    std::chrono::steady_clock::time_point g_lastStatsAt{};
    float g_fps = 0;

    void DetachThread(void*)
    {
        if (g_vm) g_vm->DetachCurrentThread();
    }

    // A JNIEnv for whatever thread is asking. Guest threads are not Java
    // threads, so they are attached on first use and detached when they end,
    // which the thread-specific key's destructor does.
    JNIEnv* Env()
    {
        if (!g_vm) return nullptr;
        JNIEnv* env = nullptr;
        if (g_vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) == JNI_OK) return env;
        JavaVMAttachArgs args{ JNI_VERSION_1_6, "mw2", nullptr };
        if (g_vm->AttachCurrentThread(&env, &args) != JNI_OK) return nullptr;
        if (g_envKeyMade) pthread_setspecific(g_envKey, env);
        return env;
    }

    std::string ToString(JNIEnv* env, jstring text)
    {
        if (!env || !text) return {};
        const char* bytes = env->GetStringUTFChars(text, nullptr);
        if (!bytes) return {};
        std::string copy(bytes);
        env->ReleaseStringUTFChars(text, bytes);
        return copy;
    }

    jstring FromString(JNIEnv* env, const std::string& text)
    {
        return env->NewStringUTF(text.c_str());
    }

    // XamInputSetState reaches the app here. The last values are remembered:
    // the title sets the motors every frame, and crossing into Java sixty
    // times a second to say "still nothing" is work for no reason.
    void RumbleSink(uint32_t user, uint16_t low, uint16_t high)
    {
        static std::atomic<uint32_t> last[4]{};
        if (user >= 4) return;
        const uint32_t packed = (uint32_t(low) << 16) | high;
        if (last[user].exchange(packed, std::memory_order_relaxed) == packed) return;
        if (!g_listener || !g_onRumble) return;
        JNIEnv* env = Env();
        if (!env) return;
        env->CallVoidMethod(g_listener, g_onRumble, jint(user), jint(low), jint(high));
        if (env->ExceptionCheck()) env->ExceptionClear();
    }

    void TellTheApp(const std::string& status)
    {
        android::SetStatus(status.c_str());
        if (!g_listener || !g_onStatus) return;
        JNIEnv* env = Env();
        if (!env) return;
        jstring text = FromString(env, status);
        env->CallVoidMethod(g_listener, g_onStatus, text);
        if (env->ExceptionCheck()) env->ExceptionClear();
        env->DeleteLocalRef(text);
    }

    void InstallReport(const char* file, uint64_t done, uint64_t total, void*)
    {
        std::lock_guard lock(g_progressLock);
        g_progressFile = file ? file : "";
        g_progressDone = done;
        g_progressTotal = total;
    }

    // ---- the game thread ---------------------------------------------------
    struct Launch { std::string image, gameRoot; };

    void* GameThread(void* argument)
    {
        std::unique_ptr<Launch> launch(static_cast<Launch*>(argument));

        // The hot thread of the whole process: the guest's main thread runs
        // the title's frame loop, and everything else waits on it.
        android::perf::PinToBigCores();
        android::perf::RaiseThreadPriority();

        char image[1024], root[1024], program[] = "mw2";
        std::snprintf(image, sizeof image, "%s", launch->image.c_str());
        std::snprintf(root, sizeof root, "%s", launch->gameRoot.c_str());
        char* argv[] = { program, image, root, nullptr };

        LOGI("android: starting the game from %s", image);
        const int result = mw2::Run(3, argv);
        LOGI("android: the run ended with %d", result);
        android::detail::SetRunning(false);
        g_started.store(false, std::memory_order_release);
        return nullptr;
    }

    bool StartGameThread(const std::string& image, const std::string& gameRoot)
    {
        pthread_attr_t attributes;
        pthread_attr_init(&attributes);
        // The recompiled code turns one PowerPC call into one host call, and
        // the title's deepest paths -- the renderer's state setup, the script
        // VM -- nest far enough that 1 MB is gone long before the frame ends.
        // 64 MB of *address space*: pages are only backed as the stack grows
        // into them, so this costs nothing until it is used.
        pthread_attr_setstacksize(&attributes, 64u << 20);
        pthread_attr_setdetachstate(&attributes, PTHREAD_CREATE_DETACHED);

        auto* launch = new Launch{ image, gameRoot };
        const int error = pthread_create(&g_gameThread, &attributes, GameThread, launch);
        pthread_attr_destroy(&attributes);
        if (error != 0)
        {
            delete launch;
            LOGE("android: the game thread would not start (%d)", error);
            return false;
        }
        return true;
    }

    const char* TitleExecutable()
    {
#ifdef MW2_TITLE_MP
        return "default_mp.xex";
#else
        return "default.xex";
#endif
    }
}

extern "C" JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*)
{
    g_vm = vm;
    g_envKeyMade = pthread_key_create(&g_envKey, DetachThread) == 0;
    return JNI_VERSION_1_6;
}

#define MW2_NATIVE(returns, name) \
    extern "C" JNIEXPORT returns JNICALL Java_com_mw2_recomp_NativeBridge_##name

// ---- start-up --------------------------------------------------------------

MW2_NATIVE(jboolean, nativeInit)(JNIEnv* env, jobject, jstring filesDir, jstring externalDir,
                                 jstring cacheDir, jstring nativeLibDir, jobject listener)
{
    g_paths.files = ToString(env, filesDir);
    g_paths.external = ToString(env, externalDir);
    g_paths.cache = ToString(env, cacheDir);
    g_paths.nativeLib = ToString(env, nativeLibDir);
    android::SetPaths(g_paths);

    if (g_listener) env->DeleteGlobalRef(g_listener);
    g_listener = listener ? env->NewGlobalRef(listener) : nullptr;
    if (g_listener)
    {
        jclass type = env->GetObjectClass(g_listener);
        g_onRumble = env->GetMethodID(type, "onRumble", "(III)V");
        g_onStatus = env->GetMethodID(type, "onStatus", "(Ljava/lang/String;)V");
        if (env->ExceptionCheck()) env->ExceptionClear();
        env->DeleteLocalRef(type);
    }
    android::input::detail::SetRumbleSink(RumbleSink);

    // A log per process. The launcher and the run are separate processes
    // and both used to open the same file: whichever started second wiped
    // the other's, and the one that mattered -- the run's -- was always the
    // one lost.
    std::string which = "launcher";
    if (std::FILE* cmdline = std::fopen("/proc/self/cmdline", "rb"))
    {
        char name[256] = {};
        const size_t read = std::fread(name, 1, sizeof(name) - 1, cmdline);
        std::fclose(cmdline);
        if (read > 0 && std::strstr(name, ":game")) which = "game";
    }
    const std::string logPath = g_paths.files + "/" + which + ".log";
    android::OpenLogFile(logPath.c_str());
    // Everything the runtime prints rather than logs, the crash handler's
    // backtrace above all, now reaches that file instead of /dev/null.
    android::CaptureStandardStreams();
    LOGI("--- MW2 on Android ---");
    LOGI("android: files %s", g_paths.files.c_str());
    LOGI("android: external %s", g_paths.external.c_str());
    return JNI_TRUE;
}

// A setting from the app, as one of the runtime's MW2_* switches. Set before
// the run starts; nothing reads them again afterwards.
MW2_NATIVE(void, nativeSetOption)(JNIEnv* env, jobject, jstring key, jstring value)
{
    const std::string name = ToString(env, key);
    const std::string text = ToString(env, value);
    if (name.empty()) return;
    if (text.empty()) unsetenv(name.c_str());
    else setenv(name.c_str(), text.c_str(), 1);
    LOGI("android: %s=%s", name.c_str(), text.c_str());
}

MW2_NATIVE(void, nativeSelectDriver)(JNIEnv* env, jobject, jstring directory, jstring library)
{
    const std::string folder = ToString(env, directory);
    const std::string name = ToString(env, library);
    android::driver::Select(folder.empty() ? nullptr : folder.c_str(),
                            name.empty() ? nullptr : name.c_str());
}

MW2_NATIVE(jstring, nativeDriverDescription)(JNIEnv* env, jobject)
{
    std::string text = android::driver::Description();
    if (android::driver::CustomDriverFailed())
        text += " (the imported driver would not load)";
    return FromString(env, text);
}

MW2_NATIVE(jboolean, nativeStart)(JNIEnv* env, jobject, jstring gameDirectory)
{
    if (g_started.exchange(true, std::memory_order_acq_rel))
    {
        LOGW("android: the game is already running");
        return JNI_TRUE;
    }
    g_gameFolder = ToString(env, gameDirectory);
    if (g_gameFolder.empty()) g_gameFolder = g_paths.external + "/game";

    // Saves and the caches are written relative to the current directory, so
    // it is the folder the game lives in.
    const std::string parent = g_gameFolder.substr(0, g_gameFolder.find_last_of('/'));
    if (!parent.empty() && chdir(parent.c_str()) != 0)
        LOGW("android: could not change directory to %s", parent.c_str());
    install::SetGameFolder(g_gameFolder);

    android::perf::ApplyMemoryDefaults();
    android::detail::SetRunning(true);

    const std::string image = g_gameFolder + "/" + TitleExecutable();
    if (access(image.c_str(), R_OK) != 0)
    {
        TellTheApp("The game files are not installed.");
        g_started.store(false, std::memory_order_release);
        return JNI_FALSE;
    }
    if (!StartGameThread(image, g_gameFolder))
    {
        TellTheApp("The game thread would not start.");
        g_started.store(false, std::memory_order_release);
        return JNI_FALSE;
    }
    TellTheApp("Loading");
    return JNI_TRUE;
}

// Ending a run is the process ending. The guest never returns, its threads
// are inside recompiled code that cannot be unwound, and a driver mid-frame
// does not take kindly to its device disappearing. So: stop the audio, let
// the log out, and let the app kill the process -- which Android is perfectly
// happy with, and which cannot crash.
MW2_NATIVE(void, nativeRequestStop)(JNIEnv*, jobject)
{
    LOGI("android: the app asked the run to end");
    android::audio::SetMuted(true);
    android::detail::SetRunning(false);
    android::audio::Close();
}

MW2_NATIVE(jboolean, nativeIsRunning)(JNIEnv*, jobject)
{
    return g_started.load(std::memory_order_acquire) ? JNI_TRUE : JNI_FALSE;
}

MW2_NATIVE(jstring, nativeStatus)(JNIEnv* env, jobject)
{
    return FromString(env, android::Status());
}

MW2_NATIVE(jstring, nativeLogTail)(JNIEnv* env, jobject)
{
    return FromString(env, android::detail::LogTail());
}

// ---- the surface -----------------------------------------------------------

MW2_NATIVE(void, nativeSurfaceChanged)(JNIEnv* env, jobject, jobject surface, jint width,
                                       jint height, jfloat refreshHz)
{
    if (!surface)
    {
        android::detail::DestroyWindow();
        return;
    }
    ANativeWindow* window = ANativeWindow_fromSurface(env, surface);
    if (!window)
    {
        LOGW("android: the surface handed over has no native window");
        return;
    }
    android::detail::SetWindow(window, uint32_t(std::max(width, 0)), uint32_t(std::max(height, 0)),
                               double(refreshHz));
    // SetWindow took its own reference.
    ANativeWindow_release(window);
}

MW2_NATIVE(void, nativeSurfaceDestroyed)(JNIEnv*, jobject)
{
    android::detail::DestroyWindow();
}

MW2_NATIVE(void, nativeSetPaused)(JNIEnv*, jobject, jboolean paused)
{
    android::detail::SetPaused(paused == JNI_TRUE);
    android::audio::SetMuted(paused == JNI_TRUE);
}

MW2_NATIVE(void, nativeTrimMemory)(JNIEnv*, jobject, jint level)
{
    android::perf::TrimMemory(int(level));
}

MW2_NATIVE(void, nativeSetRefreshRate)(JNIEnv*, jobject, jfloat hz)
{
    android::detail::SetRefreshHz(double(hz));
}

// ---- input -----------------------------------------------------------------

MW2_NATIVE(void, nativeTouchState)(JNIEnv*, jobject, jint buttons, jint leftTrigger,
                                   jint rightTrigger, jfloat leftX, jfloat leftY,
                                   jfloat rightX, jfloat rightY)
{
    android::input::Pad pad;
    pad.buttons = uint16_t(buttons);
    pad.leftTrigger = uint8_t(std::clamp(int(leftTrigger), 0, 255));
    pad.rightTrigger = uint8_t(std::clamp(int(rightTrigger), 0, 255));
    auto axis = [](float value) {
        value = std::clamp(value, -1.0f, 1.0f);
        return int16_t(value * (value < 0 ? 32768.0f : 32767.0f));
    };
    pad.leftX = axis(leftX);
    pad.leftY = axis(leftY);
    pad.rightX = axis(rightX);
    pad.rightY = axis(rightY);
    android::input::SetTouchPad(pad);
}

MW2_NATIVE(void, nativeLookDelta)(JNIEnv*, jobject, jfloat dx, jfloat dy)
{
    android::input::AddLook(float(dx), float(dy));
}

MW2_NATIVE(void, nativeLookEnd)(JNIEnv*, jobject)
{
    android::input::ClearLook();
}

MW2_NATIVE(void, nativeLookSettings)(JNIEnv*, jobject, jfloat sensitivityX, jfloat sensitivityY,
                                     jfloat smoothing, jboolean invertY, jfloat saturation)
{
    android::input::SetLookSettings(sensitivityX, sensitivityY, smoothing, invertY == JNI_TRUE,
                                    saturation);
}

MW2_NATIVE(void, nativePadState)(JNIEnv*, jobject, jint user, jint buttons, jint leftTrigger,
                                 jint rightTrigger, jfloat leftX, jfloat leftY, jfloat rightX,
                                 jfloat rightY)
{
    android::input::Pad pad;
    pad.buttons = uint16_t(buttons);
    pad.leftTrigger = uint8_t(std::clamp(int(leftTrigger), 0, 255));
    pad.rightTrigger = uint8_t(std::clamp(int(rightTrigger), 0, 255));
    auto axis = [](float value) {
        value = std::clamp(value, -1.0f, 1.0f);
        return int16_t(value * (value < 0 ? 32768.0f : 32767.0f));
    };
    pad.leftX = axis(leftX);
    pad.leftY = axis(leftY);
    pad.rightX = axis(rightX);
    pad.rightY = axis(rightY);
    android::input::SetHardwarePad(uint32_t(std::clamp(int(user), 0, 3)), pad);
}

MW2_NATIVE(void, nativePadConnected)(JNIEnv*, jobject, jint user, jboolean connected)
{
    android::input::SetHardwarePadConnected(uint32_t(std::clamp(int(user), 0, 3)),
                                            connected == JNI_TRUE);
}

MW2_NATIVE(void, nativePadEnabled)(JNIEnv*, jobject, jboolean enabled)
{
    android::input::SetHardwarePadEnabled(enabled == JNI_TRUE);
}

// ---- installing ------------------------------------------------------------

MW2_NATIVE(jboolean, nativeGameInstalled)(JNIEnv* env, jobject, jstring gameDirectory)
{
    const std::string folder = ToString(env, gameDirectory);
    if (folder.empty()) return JNI_FALSE;
    install::SetGameFolder(folder);
    return install::Installed() ? JNI_TRUE : JNI_FALSE;
}

// Blocking: the app calls it from a thread of its own and polls the progress.
// Returns null when it worked, or the sentence to show when it did not.
MW2_NATIVE(jstring, nativeInstall)(JNIEnv* env, jobject, jstring source, jstring gameDirectory)
{
    const std::string from = ToString(env, source);
    const std::string folder = ToString(env, gameDirectory);
    if (from.empty() || folder.empty()) return FromString(env, "Nothing to install from.");

    install::SetGameFolder(folder);
    {
        std::lock_guard lock(g_progressLock);
        g_progressFile.clear();
        g_progressDone = g_progressTotal = 0;
    }
    std::string error;
    const bool ok = install::InstallFrom(from, error, InstallReport, nullptr);
    if (ok) return nullptr;
    return FromString(env, error);
}

MW2_NATIVE(jstring, nativeInstallProgress)(JNIEnv* env, jobject, jlongArray out)
{
    std::lock_guard lock(g_progressLock);
    if (out && env->GetArrayLength(out) >= 2)
    {
        jlong values[2] = { jlong(g_progressDone), jlong(g_progressTotal) };
        env->SetLongArrayRegion(out, 0, 2, values);
    }
    return FromString(env, g_progressFile);
}

MW2_NATIVE(void, nativeCancelInstall)(JNIEnv*, jobject)
{
    install::CancelInstall();
}

// ---- what the overlay shows -------------------------------------------------

MW2_NATIVE(void, nativeStats)(JNIEnv* env, jobject, jfloatArray out)
{
    if (!out || env->GetArrayLength(out) < 4) return;

    const uint64_t presented = vk::PresentedFrames();
    const auto now = std::chrono::steady_clock::now();
    {
        std::lock_guard lock(g_statsLock);
        if (g_lastStatsAt.time_since_epoch().count() == 0)
        {
            g_lastStatsAt = now;
            g_lastPresented = presented;
        }
        const double seconds = std::chrono::duration<double>(now - g_lastStatsAt).count();
        if (seconds >= 0.25)
        {
            const uint64_t frames = presented - g_lastPresented;
            const float measured = float(double(frames) / seconds);
            // A little smoothing: the number is for a player watching it, not
            // for a measurement.
            g_fps = g_fps > 0 ? g_fps * 0.6f + measured * 0.4f : measured;
            g_lastPresented = presented;
            g_lastStatsAt = now;
        }
    }

    uint32_t width = 0, height = 0;
    android::WindowSize(width, height);
    jfloat values[4] = {
        jfloat(g_fps),
        jfloat(double(vk::textures::LiveBytes()) / (1024.0 * 1024.0)),
        jfloat(width),
        jfloat(height),
    };
    env->SetFloatArrayRegion(out, 0, 4, values);
}

// ---- the layer's own state ---------------------------------------------------

namespace
{
    android::Paths g_storedPaths;
    android::Stats g_stats;
    std::mutex g_pathLock;
}

void android::SetPaths(const Paths& paths)
{
    std::lock_guard lock(g_pathLock);
    g_storedPaths = paths;
}

const android::Paths& android::GetPaths()
{
    // No lock: the app sets these once, before anything else runs, and every
    // reader is later than that.
    return g_storedPaths;
}

bool android::Started() { return g_started.load(std::memory_order_acquire); }

void android::PublishStats(const Stats& stats)
{
    std::lock_guard lock(g_statsLock);
    g_stats = stats;
}

android::Stats android::GetStats()
{
    std::lock_guard lock(g_statsLock);
    return g_stats;
}

#endif  // MW2_ANDROID
