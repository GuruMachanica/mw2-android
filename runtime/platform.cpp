#include "platform.h"

#include <cstdio>
#include <cstring>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <timeapi.h>
#include <string>
#else
#include <climits>
#include <dlfcn.h>
// bionic has no execinfo.h: Android's unwinder is reached another way, and
// the backtrace below is written by hand there.
#if !defined(__ANDROID__)
#include <execinfo.h>
#endif
#include <pthread.h>
#include <sched.h>
#include <sys/resource.h>
#include <unistd.h>
#endif

#ifdef _WIN32

#include <cmath>

// C23's round-half-to-even, which the recompiled vector rounding reaches
// through simde and the UCRT does not have. Whatever the rounding mode: a tie
// goes to the even neighbour, anything else to the nearer one.
extern "C" float roundevenf(float x)
{
    const float nearest = std::round(x);   // ties away from zero
    if (std::fabs(nearest - x) != 0.5f) return nearest;
    return 2.0f * std::round(x * 0.5f);
}

namespace { DWORD g_mainThread = 0; }

void platform::Initialise()
{
    g_mainThread = GetCurrentThreadId();
    timeBeginPeriod(1);
    // A player's build has no console window of its own. Started from a
    // terminal, it writes there, as a console program would.
    if (!GetConsoleWindow() && AttachConsole(ATTACH_PARENT_PROCESS))
    {
        std::freopen("CONOUT$", "w", stdout);
        std::freopen("CONOUT$", "w", stderr);
    }
}

uint32_t platform::ThreadId() { return uint32_t(GetCurrentThreadId()); }
bool platform::IsMainThread() { return GetCurrentThreadId() == g_mainThread; }

void platform::SetThreadName(const char* name)
{
    wchar_t wide[64];
    const int n = MultiByteToWideChar(CP_UTF8, 0, name, -1, wide, 64);
    if (n <= 0) return;
    // Windows 10 1607 and later; looked up, so older systems just go without.
    using SetDescription = HRESULT(WINAPI*)(HANDLE, PCWSTR);
    static const auto set = reinterpret_cast<SetDescription>(
        reinterpret_cast<void*>(GetProcAddress(GetModuleHandleW(L"kernel32.dll"), "SetThreadDescription")));
    if (set) set(GetCurrentThread(), wide);
}

void platform::LowerThreadPriority() { SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_BELOW_NORMAL); }
void platform::IdleThreadPriority() { SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_IDLE); }

// No symbols without a PDB: each frame as its offset in the executable, which
// `llvm-symbolizer --obj=mw2.exe` turns back into a name on the build machine.
void platform::PrintBacktrace(const char* why)
{
    void* frames[64];
    const USHORT n = CaptureStackBackTrace(0, 64, frames, nullptr);
    const auto module = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    std::fprintf(stderr, "\n[E] ---- %s (%u frames) ----\n", why, unsigned(n));
    for (USHORT i = 0; i < n; i++)
    {
        const auto at = reinterpret_cast<uintptr_t>(frames[i]);
        HMODULE owner = nullptr;
        GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                           reinterpret_cast<LPCWSTR>(frames[i]), &owner);
        if (reinterpret_cast<uintptr_t>(owner) == module)
            std::fprintf(stderr, "[E]   exe+0x%llx\n", (unsigned long long)(at - module));
        else
            std::fprintf(stderr, "[E]   %p\n", frames[i]);
    }
    std::fprintf(stderr, "[E] --------------------------------\n");
    std::fflush(stderr);
}

namespace
{
    struct ThreadStart { void (*body)(void*); void* argument; const char* name; };

    DWORD WINAPI RunThread(LPVOID raw)
    {
        ThreadStart start = *static_cast<ThreadStart*>(raw);
        delete static_cast<ThreadStart*>(raw);
        if (start.name) platform::SetThreadName(start.name);
        start.body(start.argument);
        return 0;
    }
}

bool platform::StartThread(void (*body)(void*), void* argument, size_t stackBytes,
                           const char* name)
{
    auto* start = new ThreadStart{ body, argument, name };
    const HANDLE thread = CreateThread(nullptr, stackBytes, &RunThread, start, 0, nullptr);
    if (!thread) { delete start; return false; }
    CloseHandle(thread);   // detached: nothing joins these
    return true;
}

void* platform::OpenLibrary(const char* path)
{
    const int n = MultiByteToWideChar(CP_UTF8, 0, path, -1, nullptr, 0);
    std::wstring wide(size_t(n > 0 ? n : 1), L'\0');
    MultiByteToWideChar(CP_UTF8, 0, path, -1, wide.data(), n);
    // The library's own folder is searched for what it loads in turn.
    return LoadLibraryExW(wide.c_str(), nullptr, LOAD_WITH_ALTERED_SEARCH_PATH);
}

void* platform::LoadedLibrary(const char* name) { return GetModuleHandleA(name); }

void* platform::Symbol(void* library, const char* name)
{
    return reinterpret_cast<void*>(GetProcAddress(static_cast<HMODULE>(library), name));
}

#else

void platform::Initialise() {}
uint32_t platform::ThreadId() { return uint32_t(gettid()); }
bool platform::IsMainThread() { return gettid() == getpid(); }

void platform::SetThreadName(const char* name)
{
    char shortName[16];
    std::snprintf(shortName, sizeof shortName, "%s", name);
    pthread_setname_np(pthread_self(), shortName);
}

void platform::LowerThreadPriority() { setpriority(PRIO_PROCESS, static_cast<id_t>(gettid()), 10); }

void platform::IdleThreadPriority()
{
    sched_param none{};
    if (pthread_setschedparam(pthread_self(), SCHED_IDLE, &none) != 0) LowerThreadPriority();
}

#if defined(__ANDROID__)
// _Unwind_Backtrace is in libgcc/libunwind and is what bionic itself uses.
// dladdr turns an address into a library and a symbol where there is one,
// which is enough to tell "crashed in the driver" from "crashed in the
// recompiled code" -- the two that matter here.
#include <unwind.h>

namespace
{
    struct Frames { void** at; int taken; int room; };

    _Unwind_Reason_Code TakeFrame(_Unwind_Context* context, void* argument)
    {
        auto* frames = static_cast<Frames*>(argument);
        const uintptr_t pc = _Unwind_GetIP(context);
        if (!pc) return _URC_NO_REASON;
        if (frames->taken >= frames->room) return _URC_END_OF_STACK;
        frames->at[frames->taken++] = reinterpret_cast<void*>(pc);
        return _URC_NO_REASON;
    }
}

void platform::PrintBacktrace(const char* why)
{
    void* addresses[64];
    Frames frames{ addresses, 0, 64 };
    _Unwind_Backtrace(&TakeFrame, &frames);
    std::fprintf(stderr, "\n[E] ---- %s (%d frames) ----\n", why, frames.taken);
    for (int i = 0; i < frames.taken; i++)
    {
        Dl_info info{};
        if (dladdr(addresses[i], &info) && info.dli_fname)
        {
            const char* file = std::strrchr(info.dli_fname, '/');
            file = file ? file + 1 : info.dli_fname;
            const uintptr_t offset = uintptr_t(addresses[i]) - uintptr_t(info.dli_fbase);
            if (info.dli_sname)
                std::fprintf(stderr, "[E]  #%02d %s+0x%zx (%s)\n", i, info.dli_sname,
                             size_t(uintptr_t(addresses[i]) - uintptr_t(info.dli_saddr)), file);
            else
                std::fprintf(stderr, "[E]  #%02d %s+0x%zx\n", i, file, size_t(offset));
        }
        else
        {
            std::fprintf(stderr, "[E]  #%02d %p\n", i, addresses[i]);
        }
    }
    std::fprintf(stderr, "[E] --------------------------------\n");
    std::fflush(stderr);
}
#else
void platform::PrintBacktrace(const char* why)
{
    void* frames[64];
    const int n = backtrace(frames, 64);
    std::fprintf(stderr, "\n[E] ---- %s (%d frames) ----\n", why, n);
    std::fflush(stderr);
    backtrace_symbols_fd(frames, n, 2);
    std::fprintf(stderr, "[E] --------------------------------\n");
    std::fflush(stderr);
}
#endif

namespace
{
    struct ThreadStart { void (*body)(void*); void* argument; const char* name; };

    void* RunThread(void* raw)
    {
        ThreadStart start = *static_cast<ThreadStart*>(raw);
        delete static_cast<ThreadStart*>(raw);
        if (start.name) platform::SetThreadName(start.name);
        start.body(start.argument);
        return nullptr;
    }
}

bool platform::StartThread(void (*body)(void*), void* argument, size_t stackBytes,
                           const char* name)
{
    pthread_attr_t attributes;
    if (pthread_attr_init(&attributes) != 0) return false;
    pthread_attr_setdetachstate(&attributes, PTHREAD_CREATE_DETACHED);
    if (stackBytes)
    {
        // Rounded up to a page, and never below what the platform insists on.
        const size_t page = size_t(sysconf(_SC_PAGESIZE));
        size_t wanted = (stackBytes + page - 1) & ~(page - 1);
#ifdef PTHREAD_STACK_MIN
        if (wanted < size_t(PTHREAD_STACK_MIN)) wanted = size_t(PTHREAD_STACK_MIN);
#endif
        pthread_attr_setstacksize(&attributes, wanted);
    }
    auto* start = new ThreadStart{ body, argument, name };
    pthread_t thread{};
    const int made = pthread_create(&thread, &attributes, &RunThread, start);
    pthread_attr_destroy(&attributes);
    if (made != 0)
    {
        delete start;
        // A smaller stack is worth trying before giving up: a device short of
        // address space would rather have the thread than the headroom.
        pthread_t fallback{};
        auto* retry = new ThreadStart{ body, argument, name };
        if (pthread_create(&fallback, nullptr, &RunThread, retry) != 0)
        {
            delete retry;
            return false;
        }
        pthread_detach(fallback);
    }
    return true;
}

void* platform::OpenLibrary(const char* path) { return dlopen(path, RTLD_NOW | RTLD_LOCAL); }
void* platform::LoadedLibrary(const char* name) { return dlopen(name, RTLD_NOW | RTLD_NOLOAD); }
void* platform::Symbol(void* library, const char* name) { return dlsym(library, name); }

#endif
