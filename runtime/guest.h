#pragma once
#include <cstdint>
#include <cstring>
#include <string>
#include "guest_memory.h"

// A value stored big-endian, as the guest keeps everything.
template<class T> struct be
{
    T raw{};
    static T swap(T v)
    {
        if constexpr (sizeof(T) == 1) return v;
        else if constexpr (sizeof(T) == 2) { uint16_t u; std::memcpy(&u,&v,2); u = __builtin_bswap16(u); std::memcpy(&v,&u,2); return v; }
        else if constexpr (sizeof(T) == 4) { uint32_t u; std::memcpy(&u,&v,4); u = __builtin_bswap32(u); std::memcpy(&v,&u,4); return v; }
        else                               { uint64_t u; std::memcpy(&u,&v,8); u = __builtin_bswap64(u); std::memcpy(&v,&u,8); return v; }
    }
    be() = default;
    be(T v) : raw(swap(v)) {}
    operator T() const { return swap(raw); }
    be& operator=(T v) { raw = swap(v); return *this; }
};

using be16 = be<uint16_t>;
using be32 = be<uint32_t>;
using be64 = be<uint64_t>;

template<class T> inline T* GuestPtr(uint32_t addr)
{
    return addr ? reinterpret_cast<T*>(guest::Base() + addr) : nullptr;
}

inline std::string GuestAnsi(uint32_t addr)
{
    if (!addr) return {};
    const char* p = reinterpret_cast<const char*>(guest::Base() + addr);
    return std::string(p);
}

// Xbox 360 wide strings are big-endian UTF-16.
inline std::string GuestWideToUtf8(uint32_t addr, size_t maxChars = 4096)
{
    if (!addr) return {};
    const be16* p = GuestPtr<be16>(addr);
    std::string out;
    for (size_t i = 0; i < maxChars; i++)
    {
        uint16_t c = p[i];
        if (!c) break;
        if (c < 0x80) out += char(c);
        else if (c < 0x800) { out += char(0xC0 | (c >> 6)); out += char(0x80 | (c & 0x3F)); }
        else { out += char(0xE0 | (c >> 12)); out += char(0x80 | ((c >> 6) & 0x3F)); out += char(0x80 | (c & 0x3F)); }
    }
    return out;
}

// Xbox NTSTATUS values we actually need.
inline constexpr uint32_t X_STATUS_SUCCESS            = 0x00000000;
inline constexpr uint32_t X_STATUS_UNSUCCESSFUL       = 0xC0000001;
inline constexpr uint32_t X_STATUS_NOT_IMPLEMENTED    = 0xC0000002;
inline constexpr uint32_t X_STATUS_INVALID_HANDLE     = 0xC0000008;
inline constexpr uint32_t X_STATUS_INVALID_PARAMETER  = 0xC000000D;
inline constexpr uint32_t X_STATUS_NO_SUCH_FILE       = 0xC000000F;
inline constexpr uint32_t X_STATUS_END_OF_FILE        = 0xC0000011;
inline constexpr uint32_t X_STATUS_NO_MEMORY          = 0xC0000017;
inline constexpr uint32_t X_STATUS_OBJECT_NAME_NOT_FOUND = 0xC0000034;
inline constexpr uint32_t X_STATUS_OBJECT_NAME_COLLISION = 0xC0000035;
inline constexpr uint32_t X_STATUS_PENDING            = 0x00000103;
inline constexpr uint32_t X_STATUS_TIMEOUT            = 0x00000102;
inline constexpr uint32_t X_STATUS_USER_APC           = 0x000000C0;
inline constexpr uint32_t X_STATUS_ALERTED            = 0x00000101;

inline constexpr uint32_t X_ERROR_SUCCESS             = 0;
inline constexpr uint32_t X_ERROR_NOT_FOUND           = 0x00000490;
inline constexpr uint32_t X_ERROR_DEVICE_NOT_CONNECTED= 0x0000048F;
inline constexpr uint32_t X_ERROR_NO_SUCH_USER        = 0x00000525;
inline constexpr uint32_t X_ERROR_FILE_NOT_FOUND      = 0x00000002;
inline constexpr uint32_t X_ERROR_PATH_NOT_FOUND      = 0x00000003;
inline constexpr uint32_t X_ERROR_INVALID_PARAMETER   = 0x00000057;
inline constexpr uint32_t X_ERROR_BAD_ARGUMENTS       = 0x000000A0;
inline constexpr uint32_t X_ERROR_ALREADY_EXISTS      = 0x000000B7;
inline constexpr uint32_t X_ERROR_IO_PENDING          = 0x000003E5;
inline constexpr uint32_t X_ERROR_INVALID_HANDLE      = 0x00000006;
inline constexpr uint32_t X_ERROR_NOT_ENOUGH_MEMORY   = 0x00000008;
