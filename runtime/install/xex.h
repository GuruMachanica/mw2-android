#pragma once
// An XEX2 as the disc carries it, turned into the memory image the recompiled
// code was made from: decrypted with the retail key and its basic compression
// undone -- what tools/xexdump.py writes as default.pe, made at every launch
// instead of kept on disk.
#include <cstdint>
#include <string>
#include <vector>

namespace install::xex
{
    struct Info
    {
        uint32_t titleId = 0;
        uint32_t version = 0;       // XEX version, 0x0000000A on the disc
    };

    // The header fields a wrong disc is told apart by; false if it is not an XEX2.
    bool ReadInfo(const std::vector<uint8_t>& file, Info& info);

    // False, with `error` saying why, for anything but encryption none/normal
    // and basic compression -- all the disc uses.
    bool Image(const std::vector<uint8_t>& file, std::vector<uint8_t>& image, std::string& error);
}
