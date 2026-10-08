// See stutters.h.
#include "stutters.h"
#include "log.h"
#include "pacing_trace.h"

#if MW2_DIAGNOSTICS

#include <algorithm>
#include <atomic>
#include <cmath>
#include <cstdio>
#include <string>
#include <mutex>
#include <thread>
#ifndef _WIN32
#include <csignal>
#include <unistd.h>
#endif
#include "kernel/kernel.h"

namespace
{
    constexpr double kBlankMs = 1000.0 / 60.0;
    // Late by half a blank or more: the blank it was due at has gone by.
    constexpr int64_t kLateUs = 25000;
    // Longer than this is not play: a loading screen, a menu, the end of a round.
    constexpr int64_t kPauseUs = 1000000;
    constexpr uint32_t kPlayStreak = 30;   // as the in-play frame rate counts it
    constexpr uint32_t kLinesShown = 200;

    const char* const kCostNames[stutters::kCostCount] = {
        "translating shaders", "building pipelines", "reading new textures",
        "re-checking watched textures", "waiting on the GPU", "reading occlusion queries",
        "executing ring batches",
    };

    struct Spent
    {
        std::atomic<uint64_t> nanoseconds{ 0 }, times{ 0 };
    };
    Spent g_costs[stutters::kCostCount];

    std::atomic<bool> g_inPlay{ false };
    std::atomic<int64_t> g_lastStutterUs{ -1 };
    std::atomic<uint32_t> g_marks{ 0 };

    // The title's presents, from its render thread.
    std::atomic<int64_t> g_lastPresentUs{ -1 }, g_longestPresentGapUs{ 0 };

    // The renderer's side, touched only by the ring consumer.
    struct Renderer
    {
        uint32_t streak = 0;
        int64_t lastWorldUs = -1;
        uint64_t costsAt[stutters::kCostCount]{}, timesAt[stutters::kCostCount]{};
        int64_t playUs = 0;
        uint64_t stutters = 0, framesLost = 0, pauses = 0, titleLate = 0, rendererLate = 0;
        uint64_t byLength[6]{};   // 1, 2, 3, 4-7, 8-15, 16 and more frames
        uint64_t lateCostNs[stutters::kCostCount]{};
    } r;

    // The window's side: frames it let go (the window thread), and frames
    // the display held (the present wait thread).
    struct Window
    {
        uint64_t lastSerial = 0;
        uint64_t presents = 0, skips = 0, framesSkipped = 0;
        uint64_t held = 0, blanksHeld = 0;
        std::atomic<uint32_t> lines{ 0 };
    } w;

    double Seconds(int64_t us) { return double(us) / 1e6; }

    // A stall: play was going and no world frame has come for a second. What
    // the time went on is not the renderer's to say, so every guest thread's
    // wait and every thread's stack go to the log, once a stall, as
    // `kill -USR2` gives them.
    std::atomic<int64_t> g_lastWorldUs{ -1 };
    std::atomic<bool> g_ending{ false };
    void WatchForStalls()
    {
#ifndef _WIN32
        int64_t reported = -1;
        while (!g_ending.load(std::memory_order_relaxed))
        {
            usleep(100000);
            const int64_t last = g_lastWorldUs.load(std::memory_order_relaxed);
            if (g_ending.load(std::memory_order_relaxed) ||
                !g_inPlay.load(std::memory_order_relaxed) || last == reported ||
                pacing::Microseconds() - last < kPauseUs)
                continue;
            reported = last;
            LOGW("STALL: no world frame since %.3f s; what every thread is doing follows",
                 Seconds(last));
            kernel::ReportWaits();
            std::raise(SIGUSR2);
        }
#endif
    }

    uint32_t LengthBucket(uint64_t lost)
    {
        if (lost <= 3) return uint32_t(lost - 1);
        if (lost <= 7) return 3;
        if (lost <= 15) return 4;
        return 5;
    }
}

bool stutters::On()
{
    static const bool on = diag::Flag("MW2_STUTTERS");
    return on;
}

void stutters::Add(Cost cost, uint64_t nanoseconds)
{
    g_costs[cost].nanoseconds.fetch_add(nanoseconds, std::memory_order_relaxed);
    g_costs[cost].times.fetch_add(1, std::memory_order_relaxed);
}

void stutters::TitlePresented()
{
    if (!On()) return;
    const int64_t now = pacing::Microseconds();
    const int64_t last = g_lastPresentUs.exchange(now, std::memory_order_relaxed);
    if (last >= 0 && now - last > g_longestPresentGapUs.load(std::memory_order_relaxed))
        g_longestPresentGapUs.store(now - last, std::memory_order_relaxed);
}

void stutters::Finished(uint64_t serial, bool world)
{
    (void)serial;
    if (!On() || !world) return;
    const int64_t now = pacing::Microseconds();
    const int64_t gap = r.lastWorldUs < 0 ? 0 : now - r.lastWorldUs;
    const int64_t titleGap = g_longestPresentGapUs.exchange(0, std::memory_order_relaxed);
    uint64_t costs[kCostCount], times[kCostCount];
    for (uint32_t c = 0; c < kCostCount; c++)
    {
        costs[c] = g_costs[c].nanoseconds.load(std::memory_order_relaxed);
        times[c] = g_costs[c].times.load(std::memory_order_relaxed);
    }
    const auto remember = [&] {
        r.lastWorldUs = now;
        g_lastWorldUs.store(now, std::memory_order_relaxed);
        std::copy(std::begin(costs), std::end(costs), r.costsAt);
        std::copy(std::begin(times), std::end(times), r.timesAt);
    };

    if (gap >= kPauseUs)
    {
        if (r.streak >= kPlayStreak)
        {
            r.pauses++;
            LOGW("STALL: over at %.3f s, %.1f s after the last world frame", Seconds(now),
                 Seconds(gap));
        }
        r.streak = 0;
        g_inPlay.store(false, std::memory_order_relaxed);
    }
    if (r.streak < kPlayStreak)
    {
        if (++r.streak == kPlayStreak)
        {
            g_inPlay.store(true, std::memory_order_relaxed);
            LOGI("stutters: in play at %.3f s, watching", Seconds(now));
            static std::once_flag watching;
            std::call_once(watching, [] { std::thread(WatchForStalls).detach(); });
        }
        remember();
        return;
    }
    r.playUs += gap;
    if (gap < kLateUs) { remember(); return; }

    const uint64_t lost = uint64_t(std::max<long>(1, std::lround(double(gap) / 1000.0 / kBlankMs) - 1));
    r.stutters++;
    r.framesLost += lost;
    r.byLength[LengthBucket(lost)]++;
    g_lastStutterUs.store(now, std::memory_order_relaxed);
    const bool titleLate = titleGap >= kLateUs;
    (titleLate ? r.titleLate : r.rendererLate)++;

    // What the renderer's occasional work cost between the two world frames.
    std::string spent;
    for (uint32_t c = 0; c < kCostCount; c++)
    {
        const uint64_t ns = costs[c] - r.costsAt[c];
        if (!titleLate) r.lateCostNs[c] += ns;
        if (c == kRingBatches || ns < 500000) continue;
        char one[96];
        std::snprintf(one, sizeof one, "%s%.1f ms %s (%llu)", spent.empty() ? "" : ", ",
                      double(ns) / 1e6, kCostNames[c],
                      (unsigned long long)(times[c] - r.timesAt[c]));
        spent += one;
    }
    if (r.stutters <= kLinesShown)
        LOGW("STUTTER %llu: %llu frame%s lost at %.3f s -- %.1f ms between world frames; %s"
             " (%.1f ms between its presents); the ring consumer was busy %.1f ms%s%s",
             (unsigned long long)r.stutters, (unsigned long long)lost, lost == 1 ? "" : "s",
             Seconds(now), double(gap) / 1000.0,
             titleLate ? "the title presented late" : "the title presented on time",
             double(titleGap) / 1000.0,
             double(costs[kRingBatches] - r.costsAt[kRingBatches]) / 1e6,
             spent.empty() ? "" : "; of that, ", spent.c_str());
    remember();
}

void stutters::Shown(uint64_t serial)
{
    if (!On()) return;
    const uint64_t last = w.lastSerial;
    w.lastSerial = serial;
    if (!g_inPlay.load(std::memory_order_relaxed) || !last) return;
    w.presents++;
    if (serial <= last + 1) return;
    w.skips++;
    w.framesSkipped += serial - last - 1;
    if (w.lines.fetch_add(1, std::memory_order_relaxed) < kLinesShown)
        LOGW("DISPLAY at %.3f s: the window let %llu frame%s go unshown (before frame %llu)",
             Seconds(pacing::Microseconds()), (unsigned long long)(serial - last - 1),
             serial - last - 1 == 1 ? "" : "s", (unsigned long long)serial);
}

void stutters::Displayed(uint64_t serial, uint32_t extraBlanks, double gapMs)
{
    if (!On() || !g_inPlay.load(std::memory_order_relaxed)) return;
    w.held++;
    w.blanksHeld += extraBlanks;
    if (w.lines.fetch_add(1, std::memory_order_relaxed) < kLinesShown)
        LOGW("DISPLAY at %.3f s: the frame before %llu stayed on screen %u blank%s longer"
             " (%.1f ms between the two)", Seconds(pacing::Microseconds()),
             (unsigned long long)serial, extraBlanks, extraBlanks == 1 ? "" : "s", gapMs);
}

void stutters::Mark(const char* how)
{
    if (!On()) return;
    const int64_t now = pacing::Microseconds();
    const int64_t last = g_lastStutterUs.load(std::memory_order_relaxed);
    const uint32_t n = g_marks.fetch_add(1, std::memory_order_relaxed) + 1;
    if (last < 0)
        LOGW("STUTTER MARK %u (%s) at %.3f s: no stutter logged yet", n, how, Seconds(now));
    else
        LOGW("STUTTER MARK %u (%s) at %.3f s: the last stutter was %.0f ms before", n, how,
             Seconds(now), double(now - last) / 1000.0);
}

void stutters::Ending() { g_ending.store(true, std::memory_order_relaxed); }

void stutters::Report()
{
    if (!On()) return;
    const double minutes = double(r.playUs) / 60e6;
    LOGI("stutters: %llu in %.1f s of play (%.1f a minute), %llu frames lost; by length:"
         " 1:%llu 2:%llu 3:%llu 4-7:%llu 8-15:%llu 16+:%llu; %llu pauses over a second",
         (unsigned long long)r.stutters, Seconds(r.playUs),
         minutes > 0 ? double(r.stutters) / minutes : 0.0, (unsigned long long)r.framesLost,
         (unsigned long long)r.byLength[0], (unsigned long long)r.byLength[1],
         (unsigned long long)r.byLength[2], (unsigned long long)r.byLength[3],
         (unsigned long long)r.byLength[4], (unsigned long long)r.byLength[5],
         (unsigned long long)r.pauses);
    std::string spent;
    for (uint32_t c = 0; c < kCostCount; c++)
    {
        char one[96];
        std::snprintf(one, sizeof one, "%s%.1f ms %s", c ? ", " : "",
                      double(r.lateCostNs[c]) / 1e6, kCostNames[c]);
        spent += one;
    }
    LOGI("stutters: %llu with the title presenting late, %llu with it on time and the renderer"
         " late; across the renderer's: %s", (unsigned long long)r.titleLate,
         (unsigned long long)r.rendererLate, spent.c_str());
    spent.clear();
    for (uint32_t c = 0; c < kCostCount; c++)
    {
        char one[96];
        std::snprintf(one, sizeof one, "%s%.0f ms %s (%llu)", c ? ", " : "",
                      double(g_costs[c].nanoseconds.load()) / 1e6, kCostNames[c],
                      (unsigned long long)g_costs[c].times.load());
        spent += one;
    }
    LOGI("stutters: over the whole run: %s", spent.c_str());
    LOGI("stutters: the window showed %llu frames in play and let %llu go unshown; the"
         " display held a frame %llu times, for %llu blanks in all; %u marks",
         (unsigned long long)w.presents, (unsigned long long)w.framesSkipped,
         (unsigned long long)w.held, (unsigned long long)w.blanksHeld, g_marks.load());
}
#endif
