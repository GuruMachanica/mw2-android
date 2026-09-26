// Turn a guest fault or hang into something readable. The recompiled functions
// are ordinary global symbols named sub_XXXXXXXX, so a host backtrace doubles
// as the guest call stack.
#include "crash.h"
#include "kernel/kernel.h"
#include "guest_memory.h"
#include "watchpoint.h"
#include "gpu/memory_watch.h"
#include "log.h"
#include "diagnostics.h"
#include "platform.h"
#include <ppc_config.h>
#include <csignal>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#ifndef _WIN32
#include <execinfo.h>
#include <unistd.h>
#include <pthread.h>
#include <deque>
#include <mutex>
#include <vector>
#include <string>
#include <atomic>

namespace
{
    struct ThreadEntry { pthread_t handle; const char* name; };
    std::mutex g_threadsLock;
    std::vector<ThreadEntry> g_threads;
    // Never shrinks: the wait and predicate records quote a thread's name
    // after the thread has gone.
    std::deque<std::string> g_names;
    thread_local const char* t_name = nullptr;
    std::atomic<bool> g_dumping{ false };

    void DumpBacktrace(const char* why)
    {
        void* frames[64];
        int n = backtrace(frames, 64);
        std::fprintf(stderr, "\n[E] ---- %s (%d frames) ----\n", why, n);
        std::fflush(stderr);
        backtrace_symbols_fd(frames, n, 2);
        std::fprintf(stderr, "[E] --------------------------------\n");
        std::fflush(stderr);
    }

    void FaultHandler(int sig, siginfo_t* info, void* uctx)
    {
        // A write watchpoint takes the page's faults and steps over them; it is not
        // the process dying, so it must be asked first.
        if (sig == SIGSEGV && watchpoint::HandleWrite(info, uctx)) return;
        // A write to a page the GPU's shadow of guest memory watches.
        if (sig == SIGSEGV && info->si_code == SEGV_ACCERR && gpu::watch::HandleFault(info->si_addr)) return;
        if (sig == SIGTRAP && watchpoint::HandleStep(uctx)) return;

        uint8_t* base = guest::Base();
        void* addr = info->si_addr;
        const char* name = (sig == SIGSEGV) ? "SIGSEGV"
                         : (sig == SIGBUS)  ? "SIGBUS"
                         : (sig == SIGFPE)  ? "SIGFPE"
                         : (sig == SIGTRAP) ? "SIGTRAP" : "SIGILL";

        std::fprintf(stderr, "\n[E] ---- guest fault: %s at host %p ----\n", name, addr);
        // The recompiler turns the PowerPC trap instructions into a host trap, and
        // IW4 builds its asserts out of them -- so this is the title saying one of its
        // own invariants broke, not the runtime crashing.
        if (sig == SIGTRAP)
            std::fprintf(stderr, "[E] -> a guest trap instruction: an assert inside the title fired\n");
        // PowerPC's divide does not fault; the title's compiler puts a trap
        // beside it (twllei rX,0) that the recompiler drops, so a zero divisor
        // reaches the host's divide instead. On the console that trap fires:
        // the zero is the bug, not the divide.
        if (sig == SIGFPE)
            std::fprintf(stderr, "[E] -> an integer divide by zero in guest code, which the title's own"
                                 " trap would have stopped on the console\n");
        if (base && addr >= (void*)base && addr < (void*)(base + 0x100000000ull))
        {
            uint64_t g = uint64_t((uint8_t*)addr - base);
            std::fprintf(stderr, "[E] guest address %08llX\n", (unsigned long long)g);
            if (g < 0x10000)
                std::fprintf(stderr, "[E] -> null dereference (a stub returned 0 where a pointer was wanted)\n");
            else if (g >= PPC_IMAGE_BASE + PPC_IMAGE_SIZE &&
                     g <  PPC_IMAGE_BASE + PPC_IMAGE_SIZE + PPC_CODE_SIZE * 2)
                std::fprintf(stderr, "[E] -> function table slot for guest code %08llX\n",
                             (unsigned long long)(PPC_CODE_BASE + (g - (PPC_IMAGE_BASE + PPC_IMAGE_SIZE)) / 2));
            else if (g >= PPC_IMAGE_BASE && g < PPC_IMAGE_BASE + PPC_IMAGE_SIZE)
                std::fprintf(stderr, "[E] -> inside the loaded image\n");
        }
        else
        {
            // Guest addresses are 32 bits, so a fault a few bytes past the top of the
            // window is a load that started just below 0x100000000 and ran off the end.
            int64_t delta = base ? int64_t((uint8_t*)addr - base) : 0;
            if (base && delta >= 0x100000000ll && delta < 0x100000010ll)
                std::fprintf(stderr,
                             "[E] a guest access ran off the top of the address space (%+lld bytes past)\n"
                             "[E] -> the pointer was around 0xFFFFFFFF: something returned -1 where an address was wanted\n",
                             (long long)(delta - 0x100000000ll));
            else
                std::fprintf(stderr, "[E] outside the guest space (offset %+lld) -- fault in host runtime code\n",
                             (long long)delta);
        }
        std::fflush(stderr);
        DumpBacktrace("fault backtrace");
        crash::OnFault();
        _exit(3);
    }

    // MW2_DUMP=<hexaddr>[:words][,...] prints blocks of guest memory when the
    // watchdog fires. Several blocks, because the state that explains a stall is
    // rarely all in one place.
    void DumpOneBlock(const char* spec)
    {
        unsigned long addr = std::strtoul(spec, nullptr, 16);
        unsigned words = 16;
        if (const char* colon = std::strchr(spec, ':'); colon && (!std::strchr(spec, ',') || colon < std::strchr(spec, ',')))
            words = unsigned(std::strtoul(colon + 1, nullptr, 10));
        std::fprintf(stderr, "\n[E] guest memory at %08lX:\n", addr);
        for (unsigned i = 0; i < words; i++)
        {
            uint32_t v;
            std::memcpy(&v, guest::Base() + addr + i * 4, 4);
            v = __builtin_bswap32(v);
            std::fprintf(stderr, "[E]   +%-5u %08lX = %08X (%d)\n", i * 4, addr + i * 4, v, int(v));
        }
        std::fflush(stderr);
    }

    void DumpGuestMemory()
    {
        const char* spec = diag::Text("MW2_DUMP");
        if (!spec || !guest::Base()) return;
        for (const char* at = spec; at && *at; )
        {
            DumpOneBlock(at);
            const char* comma = std::strchr(at, ',');
            at = comma ? comma + 1 : nullptr;
        }
    }

    // Runs on each guest thread when the watchdog pokes it.
    void ThreadDumpHandler(int)
    {
        DumpBacktrace("thread stack");
        g_dumping.store(false, std::memory_order_release);
    }

    void DumpOtherThreads()
    {
        std::vector<ThreadEntry> threads;
        {
            std::lock_guard g(g_threadsLock);
            threads = g_threads;
        }
        pthread_t self = pthread_self();
        for (const auto& t : threads)
        {
            if (pthread_equal(t.handle, self)) continue;
            std::fprintf(stderr, "\n[E] ==== %s ====\n", t.name);
            std::fflush(stderr);
            g_dumping.store(true, std::memory_order_release);
            if (pthread_kill(t.handle, SIGUSR1) != 0) { g_dumping.store(false); continue; }
            // A last-gasp diagnostic, so a thread that never responds is skipped.
            for (int i = 0; i < 200 && g_dumping.load(std::memory_order_acquire); i++)
                usleep(1000);
        }
    }

    // SIGUSR2: every thread's stack, and the run goes on -- sent a few times
    // over a hang, it tells a thread that is stuck from one that is looping.
    void SampleHandler(int)
    {
        DumpBacktrace("sampled, this thread is here");
        DumpOtherThreads();
    }

    void AlarmHandler(int)
    {
        DumpGuestMemory();
        kernel::ReportWaits();
        DumpBacktrace("watchdog fired, this thread is here");
        DumpOtherThreads();
        crash::OnFault();
        _exit(5);
    }
}

void crash::RegisterThread(const char* name)
{
    std::lock_guard g(g_threadsLock);
    t_name = g_names.emplace_back(name).c_str();
    g_threads.push_back({ pthread_self(), t_name });
    // The system's name as well, so a profiler or /proc tells the threads apart.
    // Fifteen characters is all it keeps. Not the main thread's: its name is
    // the process's, and `pgrep mw2` has to go on finding it.
    if (!platform::IsMainThread()) platform::SetThreadName(name);
}

const char* crash::CurrentThreadName() { return t_name; }

void crash::UnregisterThread()
{
    std::lock_guard g(g_threadsLock);
    pthread_t self = pthread_self();
    for (auto it = g_threads.begin(); it != g_threads.end(); ++it)
        if (pthread_equal(it->handle, self)) { g_threads.erase(it); return; }
}

void crash::Install()
{
    struct sigaction sa{};
    sa.sa_sigaction = FaultHandler;
    sa.sa_flags = SA_SIGINFO;
    sigemptyset(&sa.sa_mask);
    sigaction(SIGSEGV, &sa, nullptr);
    sigaction(SIGBUS,  &sa, nullptr);
    sigaction(SIGILL,  &sa, nullptr);
    sigaction(SIGFPE,  &sa, nullptr);
    sigaction(SIGTRAP, &sa, nullptr);

    struct sigaction dump{};
    dump.sa_handler = ThreadDumpHandler;
    dump.sa_flags = SA_RESTART;
    sigemptyset(&dump.sa_mask);
    sigaction(SIGUSR1, &dump, nullptr);
    if constexpr (diag::kOn) std::signal(SIGUSR2, SampleHandler);

    if (const unsigned seconds = unsigned(diag::Number("MW2_WATCHDOG")))
    {
        std::signal(SIGALRM, AlarmHandler);
        alarm(seconds);
        LOGI("watchdog armed for %u seconds", seconds);
    }
}

extern "C" void MW2ReportBadIndirectCall(unsigned int guestAddress)
{
    std::fprintf(stderr, "\n[E] ---- indirect call to %08X has no recompiled function ----\n", guestAddress);
    if (guestAddress == 0)
        std::fprintf(stderr, "[E] target is null: the guest read a function pointer that was never written\n");
    else if (guestAddress < PPC_CODE_BASE || guestAddress >= PPC_CODE_BASE + PPC_CODE_SIZE)
        std::fprintf(stderr, "[E] target is outside the recompiled code range\n");
    else
        std::fprintf(stderr, "[E] target is inside the code range but was not identified as a function start\n");
    DumpBacktrace("indirect call backtrace");
    crash::OnFault();
    std::exit(4);
}
#else
// Windows: one vectored exception handler does what the signal handlers do --
// first the GPU watch's write faults and the pages the guest touches for the
// first time, then the report of a real fault.
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <atomic>
#include <deque>
#include <mutex>
#include <string>
#include <thread>

namespace
{
    std::mutex g_threadsLock;
    std::deque<std::string> g_names;
    thread_local const char* t_name = nullptr;

    const char* Describe(DWORD code)
    {
        switch (code)
        {
        case EXCEPTION_ACCESS_VIOLATION:    return "access violation";
        case EXCEPTION_ILLEGAL_INSTRUCTION: return "illegal instruction";
        case EXCEPTION_INT_DIVIDE_BY_ZERO:  return "integer divide by zero";
        case EXCEPTION_BREAKPOINT:          return "trap";
        case EXCEPTION_STACK_OVERFLOW:      return "stack overflow";
        case EXCEPTION_IN_PAGE_ERROR:       return "page error";
        default:                            return nullptr;
        }
    }

    LONG CALLBACK Handler(EXCEPTION_POINTERS* exception)
    {
        const EXCEPTION_RECORD* record = exception->ExceptionRecord;
        const DWORD code = record->ExceptionCode;
        if (code == EXCEPTION_ACCESS_VIOLATION && record->NumberParameters >= 2)
        {
            const bool write = record->ExceptionInformation[0] == 1;
            const void* at = reinterpret_cast<const void*>(record->ExceptionInformation[1]);
            if (write && gpu::watch::HandleFault(at)) return EXCEPTION_CONTINUE_EXECUTION;
            if (guest::CommitOnTouch(at)) return EXCEPTION_CONTINUE_EXECUTION;
        }
        // Everything else Windows raises -- C++ exceptions, debug output -- is
        // someone else's to handle.
        const char* name = Describe(code);
        if (!name) return EXCEPTION_CONTINUE_SEARCH;

        std::fprintf(stderr, "\n[E] ---- guest fault: %s at %p ----\n", name, record->ExceptionAddress);
        if (code == EXCEPTION_BREAKPOINT)
            std::fprintf(stderr, "[E] -> a guest trap instruction: an assert inside the title fired\n");
        if (code == EXCEPTION_ACCESS_VIOLATION && record->NumberParameters >= 2)
        {
            const auto* at = reinterpret_cast<const uint8_t*>(record->ExceptionInformation[1]);
            const uint8_t* base = guest::Base();
            if (base && at >= base && at < base + 0x100000000ull)
                std::fprintf(stderr, "[E] guest address %08llX\n", (unsigned long long)(at - base));
            else
                std::fprintf(stderr, "[E] host address %p, outside the guest space\n", static_cast<const void*>(at));
        }
        std::fflush(stderr);
        platform::PrintBacktrace("fault backtrace");
        crash::OnFault();
        TerminateProcess(GetCurrentProcess(), 3);
        return EXCEPTION_CONTINUE_SEARCH;
    }
}

void crash::Install()
{
    AddVectoredExceptionHandler(1, Handler);
    if (const unsigned seconds = unsigned(diag::Number("MW2_WATCHDOG")))
    {
        LOGI("watchdog armed for %u seconds", seconds);
        std::thread([seconds] {
            std::this_thread::sleep_for(std::chrono::seconds(seconds));
            kernel::ReportWaits();
            crash::OnFault();
            TerminateProcess(GetCurrentProcess(), 5);
        }).detach();
    }
}

void crash::RegisterThread(const char* name)
{
    std::lock_guard g(g_threadsLock);
    t_name = g_names.emplace_back(name).c_str();
    if (!platform::IsMainThread()) platform::SetThreadName(name);
}

const char* crash::CurrentThreadName() { return t_name; }
void crash::UnregisterThread() {}

extern "C" void MW2ReportBadIndirectCall(unsigned int guestAddress)
{
    std::fprintf(stderr, "\n[E] ---- indirect call to %08X has no recompiled function ----\n", guestAddress);
    platform::PrintBacktrace("indirect call backtrace");
    crash::OnFault();
    std::exit(4);
}
#endif
