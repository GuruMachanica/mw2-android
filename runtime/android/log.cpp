// The log on Android: logcat, and a file when the app asks for one.
//
// Nothing reads a process's stderr on Android -- it goes to /dev/null unless
// the device is set up for it -- so the log lines the desktop build prints
// have to be handed to the platform's logger instead. The app shows the tail
// of the same lines on its own screen, which is what a player attaches to a
// bug report.
#ifdef MW2_ANDROID

#include "android.h"

#include <android/log.h>

#include <cstdarg>
#include <cstdio>
#include <cstring>
#include <deque>
#include <mutex>
#include <string>

namespace
{
    constexpr const char* kTag = "mw2";
    constexpr size_t kKeptLines = 400;     // what the app's log screen shows

    std::mutex g_lock;
    std::FILE* g_file = nullptr;
    std::deque<std::string> g_tail;
    std::string g_status;
}

void android::OpenLogFile(const char* path)
{
    if (!path || !*path) return;
    std::lock_guard lock(g_lock);
    if (g_file) { std::fclose(g_file); g_file = nullptr; }
    g_file = std::fopen(path, "w");
    if (g_file) std::setvbuf(g_file, nullptr, _IOLBF, 0);
}

void android::LogLine(char level, const char* text)
{
    const int priority = level == 'E' ? ANDROID_LOG_ERROR
                       : level == 'w' ? ANDROID_LOG_WARN
                                      : ANDROID_LOG_INFO;
    __android_log_write(priority, kTag, text);

    std::lock_guard lock(g_lock);
    if (g_file)
    {
        std::fputs(text, g_file);
        std::fputc('\n', g_file);
    }
    // Warnings and errors are what a player is asked for; the rest of the
    // tail is context around them.
    g_tail.emplace_back(text);
    if (g_tail.size() > kKeptLines) g_tail.pop_front();
}

void android::SetStatus(const char* text)
{
    if (!text) return;
    std::lock_guard lock(g_lock);
    g_status = text;
}

std::string android::Status()
{
    std::lock_guard lock(g_lock);
    return g_status;
}

namespace android::detail
{
    std::string LogTail()
    {
        std::lock_guard lock(g_lock);
        std::string all;
        for (const std::string& line : g_tail) { all += line; all += '\n'; }
        return all;
    }
}

// The printf side, called by the macros in log.h.
namespace mw2log
{
    void AndroidWrite(char level, const char* format, ...)
    {
        char text[1024];
        va_list arguments;
        va_start(arguments, format);
        const int written = std::vsnprintf(text, sizeof text, format, arguments);
        va_end(arguments);
        if (written < 0) return;
        android::LogLine(level, text);
    }
}

#endif  // MW2_ANDROID
