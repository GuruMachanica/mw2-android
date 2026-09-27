#pragma once
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include "diagnostics.h"
// Minimal logging. LOGK is for the lines that trace what the title asked of the
// kernel or the GPU, "[k]" so they can be told from the rest.
//
// A whole run emits a few hundred lines, so this is not a hot path. Configure
// with -DMW2_LOGGING=OFF to compile every call below to nothing, warnings
// included; -DMW2_DIAGNOSTICS=OFF is what removes the traces and reports.
//
// The disabled form keeps the arguments inside an `if (false)`, so they are
// still type-checked and still count as used, and no expression in a log call
// may have a side effect the program needs.
//
// MW2_LOG_TIME=1 starts every line with the seconds since the first one, so a
// line can be matched with something somebody saw on screen at that moment.
namespace mw2log
{
    inline const char* Stamp()
    {
        static const bool on = diag::Flag("MW2_LOG_TIME");
        if (!on) return "";
        static const auto start = std::chrono::steady_clock::now();
        thread_local char text[24];
        const double seconds = std::chrono::duration<double>(
                                   std::chrono::steady_clock::now() - start).count();
        std::snprintf(text, sizeof text, "%9.3f ", seconds);
        return text;
    }
}

// Android has no stderr to write to: a process's output goes nowhere unless
// the device was set up to keep it. The lines go to logcat and to the app's
// own log screen instead (runtime/android/log.cpp), through one function
// rather than the macro's format string, so the level survives.
#ifdef MW2_ANDROID
namespace mw2log
{
    void AndroidWrite(char level, const char* format, ...) __attribute__((format(printf, 2, 3)));
}
#endif

#if defined(MW2_NO_LOGGING)
#   define MW2_LOG_AT(level, fmt, ...) \
        do { if (false) std::fprintf(stderr, fmt "\n", ##__VA_ARGS__); } while (false)
#elif defined(MW2_ANDROID)
#   define MW2_LOG_AT(level, fmt, ...) mw2log::AndroidWrite(level, fmt, ##__VA_ARGS__)
#else
#   define MW2_LOG_AT(level, fmt, ...) \
        std::fprintf(stderr, "%s[%c] " fmt "\n", mw2log::Stamp(), level, ##__VA_ARGS__)
#endif

#define LOGI(fmt, ...) MW2_LOG_AT('i', fmt, ##__VA_ARGS__)
#define LOGW(fmt, ...) MW2_LOG_AT('w', fmt, ##__VA_ARGS__)
#define LOGE(fmt, ...) MW2_LOG_AT('E', fmt, ##__VA_ARGS__)
#define LOGK(fmt, ...) MW2_LOG_AT('k', fmt, ##__VA_ARGS__)
