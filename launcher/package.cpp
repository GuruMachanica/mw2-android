#include "package.h"

#include <cstring>

namespace
{
    constexpr size_t kBlock = 0x1000;
    constexpr uint32_t kPerTable = 0xAA;        // data blocks one hash table covers
    constexpr uint32_t kPerLevel1 = 0x70E4;     // and one second-level table

    struct Reader
    {
        const std::vector<uint8_t>& d;

        uint32_t Be32(size_t at) const { return uint32_t(d[at]) << 24 | uint32_t(d[at + 1]) << 16 | uint32_t(d[at + 2]) << 8 | d[at + 3]; }
        uint32_t Le24(size_t at) const { return uint32_t(d[at]) | uint32_t(d[at + 1]) << 8 | uint32_t(d[at + 2]) << 16; }
        uint32_t Be24(size_t at) const { return uint32_t(d[at]) << 16 | uint32_t(d[at + 1]) << 8 | d[at + 2]; }

        // Where a data block is in the file: the hash tables sit between them.
        size_t Offset(uint32_t block) const
        {
            uint32_t tables = 0;
            if (block >= kPerTable) tables += block / kPerTable + 1;
            if (block >= kPerLevel1) tables += block / kPerLevel1 + 1;
            return 0xC000 + size_t(block + tables) * kBlock;
        }

        // The block after this one in its file: its entry in the hash table,
        // which is the block before its group's first.
        bool Next(uint32_t block, uint32_t& next) const
        {
            const size_t entry = Offset(block - block % kPerTable) - kBlock + size_t(block % kPerTable) * 0x18;
            if (entry + 0x18 > d.size()) return false;
            next = Be24(entry + 0x15);
            return true;
        }

        bool Chain(uint32_t start, uint32_t count, std::vector<uint8_t>& out) const
        {
            out.clear();
            uint32_t block = start;
            for (uint32_t i = 0; i < count; i++)
            {
                const size_t at = Offset(block);
                if (at + kBlock > d.size()) return false;
                out.insert(out.end(), d.begin() + at, d.begin() + at + kBlock);
                if (i + 1 < count && !Next(block, block)) return false;
            }
            return true;
        }
    };
}

bool install::ReadPackage(const std::vector<uint8_t>& package, std::map<std::string, std::vector<uint8_t>>& files,
                          std::string& error)
{
    const Reader r{ package };
    if (package.size() < 0xC000 || (std::memcmp(package.data(), "LIVE", 4) != 0 && std::memcmp(package.data(), "PIRS", 4) != 0))
    {
        error = "it is not an Xbox 360 content package";
        return false;
    }
    // One hash table per group in a read-only package; a console-signed one
    // keeps two and lays its blocks out differently.
    if (((r.Be32(0x340) + 0xFFF) & 0xF000) >> 12 != 0xB)
    {
        error = "it is not a read-only package";
        return false;
    }
    const uint32_t tableBlocks = uint32_t(package[0x37C]) | uint32_t(package[0x37D]) << 8;
    std::vector<uint8_t> table;
    if (!r.Chain(r.Le24(0x37E), tableBlocks, table)) { error = "its file table is cut short"; return false; }

    for (size_t at = 0; at + 0x40 <= table.size() && table[at]; at += 0x40)
    {
        const uint8_t flags = table[at + 0x28];
        if (flags & 0x80) continue;                                 // a folder
        const std::string name(reinterpret_cast<const char*>(&table[at]), flags & 0x3F);
        const uint32_t blocks = uint32_t(table[at + 0x29]) | uint32_t(table[at + 0x2A]) << 8 | uint32_t(table[at + 0x2B]) << 16;
        const uint32_t start = uint32_t(table[at + 0x2F]) | uint32_t(table[at + 0x30]) << 8 | uint32_t(table[at + 0x31]) << 16;
        const uint32_t size = uint32_t(table[at + 0x34]) << 24 | uint32_t(table[at + 0x35]) << 16 |
                              uint32_t(table[at + 0x36]) << 8 | table[at + 0x37];
        std::vector<uint8_t> bytes;
        if (!r.Chain(start, blocks, bytes) || bytes.size() < size) { error = name + " in it is cut short"; return false; }
        bytes.resize(size);
        files[name] = std::move(bytes);
    }
    return true;
}
