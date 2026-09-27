#pragma once
// The few things the runtime asks of the host system that Linux and Windows
// spell differently. Everything else goes through the C++ library or SDL.
#include <cstddef>
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

    // A detached host thread with a stack of at least this size. The
    // recompiled functions carry the guest's frames on the host stack, and
    // the guest's are large: a title thread that recurses through a few
    // hundred of them wants several megabytes. glibc gives a new thread 8 MB
    // and the question never comes up; bionic gives it 1 MB, and the run
    // ends in a stack overflow somewhere deep in the recompiled code with
    // nothing to show for it. Returns false only if the thread could not be
    // started at all.
    bool StartThread(void (*body)(void*), void* argument, size_t stackBytes,
                     const char* name);

    // A shared library: loaded, or only if something already loaded it.
    void* OpenLibrary(const char* path);
    void* LoadedLibrary(const char* name);
    void* Symbol(void* library, const char* name);
}
