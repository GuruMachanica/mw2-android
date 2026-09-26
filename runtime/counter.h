#pragma once
#include <atomic>
#include <cstdint>

// A statistic one thread counts and any thread may read. There is a single
// writer, so an increment is a plain load and store rather than a locked
// read-modify-write -- the difference matters on a path taken a few hundred
// thousand times a frame -- and a reader still never sees a torn value.
class Counter
{
public:
    void operator++(int) { Add(1); }
    void operator++() { Add(1); }
    void operator+=(uint64_t n) { Add(n); }
    void Add(uint64_t n)
    {
        value_.store(value_.load(std::memory_order_relaxed) + n, std::memory_order_relaxed);
    }
    void Reset() { value_.store(0, std::memory_order_relaxed); }
    uint64_t load() const { return value_.load(std::memory_order_relaxed); }
    operator uint64_t() const { return load(); }

private:
    std::atomic<uint64_t> value_{ 0 };
};
