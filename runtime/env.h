#pragma once
// The MW2_* switches, read one way everywhere: a flag is on when the variable
// is set to anything but "" or "0". Callers cache the answer in a static; the
// environment does not change under a run.
#include <cstdint>
#include <cstdlib>

namespace env
{
    // Null when unset or empty.
    inline const char* Text(const char* name)
    {
        const char* value = std::getenv(name);
        return (value && *value) ? value : nullptr;
    }

    inline bool Flag(const char* name)
    {
        const char* value = Text(name);
        return value && !(value[0] == '0' && value[1] == 0);
    }

    // `base` 0 accepts 0x-prefixed hexadecimal as well.
    inline uint64_t Number(const char* name, uint64_t fallback = 0, int base = 10)
    {
        const char* value = Text(name);
        return value ? std::strtoull(value, nullptr, base) : fallback;
    }

    inline double Real(const char* name, double fallback = 0.0)
    {
        const char* value = Text(name);
        return value ? std::strtod(value, nullptr) : fallback;
    }
}
