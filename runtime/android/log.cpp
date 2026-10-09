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

#include <cerrno>
#include <cstdarg>
#include <cstdio>
#include <cstring>
#include <deque>
#include <mutex>
#include <pthread.h>
#include <string>
#include <unistd.h>

namespace
{
    constexpr const char* kTag = "mw2";
    constexpr size_t kKeptLines = 400;     // what the app's log screen shows

    std::mutex g_lock;
    std::FILE* g_file = nullptr;
    std::FILE* g_fileExt = nullptr;
    std::deque<std::string> g_tail;
    std::string g_status;

    std::FILE* OpenSingleLog(const char* path)
    {
        if (!path || !*path) return nullptr;
        if (std::FILE* existing = std::fopen(path, "rb"))
        {
            std::fseek(existing, 0, SEEK_END);
            const long size = std::ftell(existing);
            std::fclose(existing);
            if (size > 4 * 1024 * 1024) std::remove(path);
        }
        std::FILE* f = std::fopen(path, "a");
        if (!f) return nullptr;
        std::setvbuf(f, nullptr, _IOLBF, 0);
        std::fprintf(f, "\n===== new run, pid %d =====\n", int(getpid()));
        std::fflush(f);
        return f;
    }
}

void android::OpenLogFile(const char* path)
{
    if (!path || !*path) return;
    std::lock_guard lock(g_lock);
    if (g_file) { std::fclose(g_file); g_file = nullptr; }
    if (g_fileExt) { std::fclose(g_fileExt); g_fileExt = nullptr; }

    g_file = OpenSingleLog(path);

    const auto& ext = android::GetPaths().external;
    if (!ext.empty())
    {
        const char* slash = std::strrchr(path, '/');
        const std::string extPath = ext + "/" + (slash ? slash + 1 : "game.log");
        if (extPath != path)
        {
            g_fileExt = OpenSingleLog(extPath.c_str());
        }
    }
}

// ---- whatever the runtime prints rather than logs -------------------------
//
// crash.cpp writes the guest's backtrace to stderr, as it does on a desktop,
// and so do abort(), assert() and the C++ runtime on an uncaught exception.
// On Android none of that goes anywhere: an app's stdout and stderr are
// /dev/null unless the device has been told otherwise. So the two are
// replaced with a pipe and read back into this log, which is the difference
// between "it crashed" and a stack trace naming the guest function.
namespace
{
    int g_capture[2] = { -1, -1 };

    void* DrainStandardStreams(void*)
    {
        std::string line;
        char buffer[512];
        for (;;)
        {
            const ssize_t got = read(g_capture[0], buffer, sizeof buffer);
            if (got <= 0)
            {
                if (got < 0 && errno == EINTR) continue;
                break;
            }
            for (ssize_t i = 0; i < got; i++)
            {
                if (buffer[i] == '\n')
                {
                    if (!line.empty()) android::LogLine('E', line.c_str());
                    line.clear();
                }
                else if (line.size() < 2000)
                {
                    line.push_back(buffer[i]);
                }
            }
        }
        return nullptr;
    }
}

void android::CaptureStandardStreams()
{
    if (g_capture[0] >= 0) return;
    if (pipe(g_capture) != 0) return;

    // Unbuffered, so a crash handler's last words are not still sitting in
    // a buffer when the process dies.
    std::setvbuf(stdout, nullptr, _IONBF, 0);
    std::setvbuf(stderr, nullptr, _IONBF, 0);
    dup2(g_capture[1], STDOUT_FILENO);
    dup2(g_capture[1], STDERR_FILENO);

    pthread_t reader;
    if (pthread_create(&reader, nullptr, &DrainStandardStreams, nullptr) == 0)
    {
        pthread_detach(reader);
    }
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
    if (g_fileExt)
    {
        std::fputs(text, g_fileExt);
        std::fputc('\n', g_fileExt);
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
