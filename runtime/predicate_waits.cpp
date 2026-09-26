// The engine's generic "spin until this predicate says yes", where every stall
// in the job system and the dynamic buffers ends up. Diagnostics only.
#include <ppc_recomp_shared.h>
#include "title.h"
#include "diagnostics.h"
#include "guest.h"
#include "log.h"
#include "crash.h"
#include "engine.h"
#include "pacing_trace.h"

#if MW2_DIAGNOSTICS
#include <ctime>
#include <algorithm>
#include <atomic>
#include <chrono>
#include <mutex>
#include <vector>

// A backtrace through it says a thread is blocked; only the predicate says on
// what, and the time each thread spent in it by predicate and caller says where
// its time went.
namespace
{
    // How long a thread has spent waiting, by predicate and caller: a thread
    // stuck at the end of a run says where it was, not where its time went.
    struct Spent
    {
        std::atomic<uint32_t> predicate{ 0 }, caller{ 0 };
        std::atomic<uint64_t> nanoseconds{ 0 }, calls{ 0 };
    };
    constexpr size_t kSpent = 16;

    struct PredicateWait
    {
        std::atomic<uint32_t> predicate{ 0 };   // 0 when not waiting
        std::atomic<uint32_t> caller{ 0 };
        std::atomic<uint64_t> laps{ 0 };
        const char* thread = nullptr;
        Spent spent[kSpent];                    // written by its own thread only
    };

    std::mutex g_predicateLock;
    std::vector<PredicateWait*> g_predicates;

    PredicateWait& MyPredicate()
    {
        static thread_local PredicateWait* mine = [] {
            auto* w = new PredicateWait();
            w->thread = crash::CurrentThreadName();
            std::lock_guard g(g_predicateLock);
            g_predicates.push_back(w);
            return w;
        }();
        return *mine;
    }
}

GUEST_HOOK(T_Job_WaitPredicate)
{
    PredicateWait& w = MyPredicate();
    w.caller.store(uint32_t(ctx.lr), std::memory_order_relaxed);
    w.laps.fetch_add(1, std::memory_order_relaxed);
    const uint32_t predicate = ctx.r3.u32, caller = uint32_t(ctx.lr);
    w.predicate.store(predicate, std::memory_order_release);
    const auto began = std::chrono::steady_clock::now();
    const bool traced = pacing::On();
    const auto threadMicroseconds = [] {
        timespec cpu{};
        clock_gettime(CLOCK_THREAD_CPUTIME_ID, &cpu);
        return uint32_t(uint64_t(cpu.tv_sec) * 1000000 + cpu.tv_nsec / 1000);
    };
    if (traced)
    {
        pacing::Note(pacing::kWaitBegin, predicate);
        pacing::Note(pacing::kThreadTime, threadMicroseconds());
    }
    GUEST_ORIG(T_Job_WaitPredicate)(ctx, base);
    if (traced)
    {
        pacing::Note(pacing::kWaitEnd, predicate);
        pacing::Note(pacing::kThreadTime, threadMicroseconds());
    }
    const uint64_t took = uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(
                                       std::chrono::steady_clock::now() - began).count());
    w.predicate.store(0, std::memory_order_release);
    for (Spent& one : w.spent)
    {
        const uint32_t had = one.predicate.load(std::memory_order_relaxed);
        if (had && (had != predicate || one.caller.load(std::memory_order_relaxed) != caller))
            continue;
        if (!had)
        {
            one.caller.store(caller, std::memory_order_relaxed);
            one.predicate.store(predicate, std::memory_order_release);
        }
        one.nanoseconds.fetch_add(took, std::memory_order_relaxed);
        one.calls.fetch_add(1, std::memory_order_relaxed);
        break;
    }
}

void engine::ReportPredicateWaits()
{
    std::lock_guard g(g_predicateLock);
    struct Line { const char* thread; uint32_t predicate, caller; uint64_t nanoseconds, calls; };
    std::vector<Line> lines;
    for (const PredicateWait* w : g_predicates)
        for (const Spent& one : w->spent)
            if (one.predicate.load(std::memory_order_acquire) && one.nanoseconds.load() >= 100'000'000)
                lines.push_back({ w->thread, one.predicate.load(), one.caller.load(),
                                  one.nanoseconds.load(), one.calls.load() });
    std::sort(lines.begin(), lines.end(),
              [](const Line& a, const Line& b) { return a.nanoseconds > b.nanoseconds; });
    if (!lines.empty()) LOGI("time spent waiting on engine predicates, 100 ms or more:");
    for (const Line& line : lines)
        LOGI("  %-40s %7llu ms in %llu waits on sub_%08X from %08X",
             line.thread ? line.thread : "(unnamed)",
             (unsigned long long)(line.nanoseconds / 1000000), (unsigned long long)line.calls,
             line.predicate, line.caller);
    bool any = false;
    for (const PredicateWait* w : g_predicates)
    {
        const uint32_t p = w->predicate.load(std::memory_order_acquire);
        if (!p) continue;
        if (!any) LOGI("threads waiting on an engine predicate:");
        any = true;
        LOGI("  %-40s predicate sub_%08X, called from %08X, %llu waits so far",
             w->thread ? w->thread : "(unnamed)", p, w->caller.load(),
             (unsigned long long)w->laps.load());
    }
}
#endif
