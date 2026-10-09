#include "report.h"
#include "log.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <iterator>
#include <mutex>

namespace
{
    // A frame every blank is 16.7 ms; the bounds are a blank and a half, then
    // two, three and four blanks.
    constexpr double kBounds[] = { 17.5, 25.0, 34.0, 50.0 };
    constexpr size_t kBuckets = std::size(kBounds) + 1;

    struct State
    {
        std::mutex lock;
        std::chrono::steady_clock::time_point first, last;
        bool lastWasWorld = false;
        uint64_t frames = 0, worldFrames = 0;
        // Between two world frames in a row: a loading screen in between is
        // not a slow frame.
        uint64_t intervals = 0, buckets[kBuckets]{};
        double intervalMs = 0, longestMs = 0;
        uint64_t costCount[report::kCostCount]{}, costMicroseconds[report::kCostCount]{},
                 costLongest[report::kCostCount]{};
        bool written = false;
    } s;
}

void report::Frame(bool world)
{
    if (!On()) return;
    const auto now = std::chrono::steady_clock::now();
    std::lock_guard lock(s.lock);
    if (!s.frames) s.first = now;
    s.frames++;
    if (world)
    {
        s.worldFrames++;
        if (s.lastWasWorld)
        {
            const double ms = std::chrono::duration<double, std::milli>(now - s.last).count();
            size_t bucket = 0;
            while (bucket < std::size(kBounds) && ms > kBounds[bucket]) bucket++;
            s.buckets[bucket]++;
            s.intervals++;
            s.intervalMs += ms;
            s.longestMs = std::max(s.longestMs, ms);
        }
    }
    s.lastWasWorld = world;
    s.last = now;
}

void report::Add(Cost cost, uint64_t microseconds)
{
    if (!On()) return;
    std::lock_guard lock(s.lock);
    s.costCount[cost]++;
    s.costMicroseconds[cost] += microseconds;
    s.costLongest[cost] = std::max(s.costLongest[cost], microseconds);
}

void report::Write()
{
    if (!On()) return;
    std::lock_guard lock(s.lock);
    if (s.written) return;
    s.written = true;
    const double seconds = s.frames ? std::chrono::duration<double>(s.last - s.first).count() : 0.0;
    LOGI("report: %llu frames in %.0f s, %llu of them of the world", (unsigned long long)s.frames, seconds,
         (unsigned long long)s.worldFrames);
    if (s.intervals)
    {
        auto share = [](uint64_t count) { return 100.0 * double(count) / double(s.intervals); };
        LOGI("report: in play, %.1f frames a second on average; the longest frame took %.0f ms",
             1000.0 * double(s.intervals) / s.intervalMs, s.longestMs);
        LOGI("report: frame times: %.1f%% within %.1f ms, %.1f%% to %.0f ms, %.1f%% to %.0f ms, %.1f%% to %.0f ms,"
             " %.1f%% longer",
             share(s.buckets[0]), kBounds[0], share(s.buckets[1]), kBounds[1], share(s.buckets[2]), kBounds[2],
             share(s.buckets[3]), kBounds[3], share(s.buckets[4]));
    }
    LOGI("report: compiled at a draw: %llu shaders in %llu ms (the longest %llu ms), %llu pipelines in %llu ms"
         " (the longest %llu ms)",
         (unsigned long long)s.costCount[kShader], (unsigned long long)(s.costMicroseconds[kShader] / 1000),
         (unsigned long long)(s.costLongest[kShader] / 1000), (unsigned long long)s.costCount[kPipeline],
         (unsigned long long)(s.costMicroseconds[kPipeline] / 1000),
         (unsigned long long)(s.costLongest[kPipeline] / 1000));
}
