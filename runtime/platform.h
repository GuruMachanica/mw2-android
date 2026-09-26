#pragma once
// The few things the runtime asks of the host system that Linux and Windows
// spell differently. Everything else goes through the C++ library or SDL.
#include <cstdint>

namespace platform
{
    // First thing in main, before any other thread starts: Windows sleeps in
    // 15.6 ms steps unless asked for 1 ms, and the title paces itself with
    // short sleeps; and a release build there finds the terminal it was
    // started from, if any.
    void Initialise();

    // The system's id for the calling thread, as a profiler shows it.
    uint32_t ThreadId();
    bool IsMainThread();
    // Up to fifteen characters are kept on Linux.
    void SetThreadName(const char* name);
    // Background work that must not take time from the frame.
    void LowerThreadPriority();
    // Only the time nothing else wants.
    void IdleThreadPriority();

    // The calling thread's host stack to stderr. The recompiled functions are
    // named sub_XXXXXXXX, so where symbols resolve this is the guest's stack.
    void PrintBacktrace(const char* why);

    // A shared library: loaded, or only if something already loaded it.
    void* OpenLibrary(const char* path);
    void* LoadedLibrary(const char* name);
    void* Symbol(void* library, const char* name);
}
