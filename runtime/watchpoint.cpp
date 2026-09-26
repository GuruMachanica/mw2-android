#include <ppc_recomp_shared.h>
#include "watchpoint.h"
#include "guest_memory.h"
#include "gpu/gpu.h"
#include "log.h"
#include "diagnostics.h"
#include "crash.h"

#if MW2_DIAGNOSTICS && !defined(_WIN32)
#include <sys/mman.h>
#include <execinfo.h>
#include <unistd.h>
#include <ucontext.h>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <mutex>

namespace
{
    uint32_t g_lo = 0, g_hi = 0;     // the guest range being reported on
    uint8_t* g_page = nullptr;       // the host pages that carry it
    size_t   g_length = 0;
    std::atomic<bool> g_armed{ false };
    std::atomic<int>  g_reports{ 0 };
    int g_budget = 20;

    // Held from the write fault to the single-step trap that follows, so two
    // threads cannot have the page unprotected at once.
    std::mutex g_lock;
    thread_local bool t_stepping = false;

    constexpr uint64_t kTrapFlag = 0x100;

    void Protect(int flags) { mprotect(g_page, g_length, flags); }

    void Arm(uint32_t address, uint32_t bytes)
    {
        uint8_t* base = guest::Base();
        if (!base || !address || !bytes) return;
        g_lo = address;
        g_hi = address + bytes;
        const long pageSize = sysconf(_SC_PAGESIZE);
        uint8_t* first = base + (g_lo & ~uint32_t(pageSize - 1));
        uint8_t* last  = base + ((g_hi + pageSize - 1) & ~uint32_t(pageSize - 1));
        g_page = first;
        g_length = size_t(last - first);
        Protect(PROT_READ);
        g_armed.store(true, std::memory_order_release);
        LOGI("watchpoint: guest %08X..%08X armed (%zu bytes of host pages, %d reports)",
             g_lo, g_hi, g_length, g_budget);
    }
}

void watchpoint::Install()
{
    g_budget = int(diag::Number("MW2_WATCH_REPORTS", uint64_t(g_budget)));
    const char* e = diag::Text("MW2_WATCH");
    if (!e) return;

    char* end = nullptr;
    const uint32_t lo = uint32_t(std::strtoul(e, &end, 16));
    const uint32_t bytes = (end && *end == ':') ? uint32_t(std::strtoul(end + 1, nullptr, 0)) : 4;
    Arm(lo, bytes ? bytes : 4);
}

void watchpoint::Suspend()
{
    if (!g_armed.load(std::memory_order_acquire)) return;
    g_lock.lock();
    Protect(PROT_READ | PROT_WRITE);
}

void watchpoint::Resume()
{
    if (!g_armed.load(std::memory_order_acquire)) return;
    Protect(PROT_READ);
    g_lock.unlock();
}

bool watchpoint::HandleWrite(siginfo_t* info, void* uctx)
{
    if (!g_armed.load(std::memory_order_acquire)) return false;
    uint8_t* addr = (uint8_t*)info->si_addr;
    if (addr < g_page || addr >= g_page + g_length) return false;

    g_lock.lock();
    t_stepping = true;
    Protect(PROT_READ | PROT_WRITE);

    const uint32_t guestAddress = uint32_t(addr - guest::Base());
    if (guestAddress >= g_lo && guestAddress < g_hi && g_reports.fetch_add(1) < g_budget)
    {
        // Deep enough to reach the thread's own routine, and the thread named:
        // a write into another thread's block is only explained by who made it.
        void* frames[40];
        const int n = backtrace(frames, 40);
        const char* thread = crash::CurrentThreadName();
        std::fprintf(stderr, "\n[K] watchpoint: guest write to %08X at frame %llu, on %s\n",
                     guestAddress, (unsigned long long)gpu::FrameCount(),
                     thread ? thread : "an unnamed thread");
        std::fflush(stderr);
        // Frame 0 is this handler; the signal frame follows, then the writer.
        backtrace_symbols_fd(frames + 2, n > 2 ? n - 2 : n, 2);
    }

    // Let the store retire, then trap on the next instruction and re-arm.
    ((ucontext_t*)uctx)->uc_mcontext.gregs[REG_EFL] |= kTrapFlag;
    return true;
}

bool watchpoint::HandleStep(void* uctx)
{
    if (!t_stepping) return false;
    t_stepping = false;
    ((ucontext_t*)uctx)->uc_mcontext.gregs[REG_EFL] &= ~kTrapFlag;
    // Every write to the page faults, not just the ones in range, so a watchpoint
    // on a busy page has to give up or the run never finishes. Giving up silently
    // is worse than not watching at all: the run then shows no writes and reads as
    // proof that nothing writes the address.
    static std::atomic<uint64_t> faults{ 0 };
    constexpr uint64_t kFaultBudget = 2000000;
    const uint64_t n = ++faults;
    if (g_reports.load() < g_budget && n < kFaultBudget) Protect(PROT_READ);
    else
    {
        g_armed.store(false, std::memory_order_release);
        std::fprintf(stderr, "[K] watchpoint: disarmed after %llu reports and %llu"
                             " faults on the page -- later writes are NOT reported\n",
                     (unsigned long long)g_reports.load(), (unsigned long long)n);
        std::fflush(stderr);
    }
    g_lock.unlock();
    return true;
}
#endif
