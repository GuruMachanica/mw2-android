#pragma once
// What the game does not need to run: traces, dumps, statistics, the end-of-run
// reports, the stutter detector and the headless test harness.
//
// -DMW2_DIAGNOSTICS=OFF (RELEASE=1 ./build.sh) builds without it. The code is
// still compiled in that build, behind a constant false, so it cannot rot
// unnoticed; the optimiser removes it. Only what must not exist at all -- a hook
// on a guest function, a whole file of dumps -- is behind #if MW2_DIAGNOSTICS.
#include <cstdint>
#include <type_traits>
#include "counter.h"
#include "env.h"

#ifndef MW2_DIAGNOSTICS
#   define MW2_DIAGNOSTICS 1
#endif

namespace diag
{
    inline constexpr bool kOn = MW2_DIAGNOSTICS != 0;

    // The MW2_* debug switches, read as env:: reads them; unset in a release build.
    inline bool Flag(const char* name)
    {
        if constexpr (kOn) return env::Flag(name);
        else return false;
    }
    inline const char* Text(const char* name)
    {
        if constexpr (kOn) return env::Text(name);
        else return nullptr;
    }
    inline uint64_t Number(const char* name, uint64_t fallback = 0, int base = 10)
    {
        if constexpr (kOn) return env::Number(name, fallback, base);
        else return fallback;
    }
    inline double Real(const char* name, double fallback = 0.0)
    {
        if constexpr (kOn) return env::Real(name, fallback);
        else return fallback;
    }

    // A statistic for the reports: a Counter, or nothing in a release build.
    // Nothing the game does may read one.
    struct NoCounter
    {
        void operator++(int) {}
        void operator++() {}
        void operator+=(uint64_t) {}
        void Add(uint64_t) {}
        void Reset() {}
        uint64_t load() const { return 0; }
        operator uint64_t() const { return 0; }
    };
    using Stat = std::conditional_t<kOn, Counter, NoCounter>;
}
