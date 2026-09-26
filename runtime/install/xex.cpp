#include "xex.h"
#include "crypto.h"

#include <cstring>
#include <map>

namespace
{
    // Every retail XEX's session key is encrypted with this one.
    constexpr install::crypto::Key kRetailKey = {
        0x20, 0xB1, 0x85, 0xA5, 0x9D, 0x28, 0xFD, 0xC3,
        0x40, 0x58, 0x3F, 0xBB, 0x08, 0x96, 0xBF, 0x91,
    };
    constexpr uint32_t kFileFormatInfo = 0x000003FF;
    constexpr uint32_t kExecutionInfo = 0x00040006;

    uint32_t Be32(const std::vector<uint8_t>& d, size_t at)
    {
        return uint32_t(d[at]) << 24 | uint32_t(d[at + 1]) << 16 | uint32_t(d[at + 2]) << 8 | d[at + 3];
    }
    uint16_t Be16(const std::vector<uint8_t>& d, size_t at) { return uint16_t(d[at] << 8 | d[at + 1]); }

    // The optional headers, by key: a value, or the offset of the data.
    bool Headers(const std::vector<uint8_t>& d, std::map<uint32_t, uint32_t>& out)
    {
        if (d.size() < 0x18 || std::memcmp(d.data(), "XEX2", 4) != 0) return false;
        const uint32_t count = Be32(d, 0x14);
        if (0x18 + size_t(count) * 8 > d.size()) return false;
        for (uint32_t i = 0; i < count; i++) out[Be32(d, 0x18 + i * 8)] = Be32(d, 0x18 + i * 8 + 4);
        return true;
    }
}

bool install::xex::ReadInfo(const std::vector<uint8_t>& file, Info& info)
{
    std::map<uint32_t, uint32_t> headers;
    if (!Headers(file, headers)) return false;
    const auto it = headers.find(kExecutionInfo);
    if (it == headers.end() || it->second + 24 > file.size()) return false;
    // { media id, version, base version, title id, ... }
    info.version = Be32(file, it->second + 4);
    info.titleId = Be32(file, it->second + 12);
    return true;
}

bool install::xex::Image(const std::vector<uint8_t>& file, std::vector<uint8_t>& image, std::string& error)
{
    std::map<uint32_t, uint32_t> headers;
    if (!Headers(file, headers)) { error = "not an XEX2 file"; return false; }
    const uint32_t dataOffset = Be32(file, 0x08);
    const uint32_t security = Be32(file, 0x10);
    const auto format = headers.find(kFileFormatInfo);
    if (format == headers.end() || dataOffset > file.size() || size_t(security) + 352 > file.size())
    {
        error = "the XEX header is damaged";
        return false;
    }
    const uint32_t at = format->second;
    const uint32_t formatSize = Be32(file, at);
    const uint16_t encryption = Be16(file, at + 4);
    const uint16_t compression = Be16(file, at + 6);
    if (compression != 1) { error = "the XEX uses a compression the disc does not (" + std::to_string(compression) + ")"; return false; }
    if (encryption > 1) { error = "the XEX uses an unknown encryption"; return false; }

    // The payload, padded to whole AES blocks, as tools/xexdump.py does.
    std::vector<uint8_t> data(file.begin() + dataOffset, file.end());
    data.resize((data.size() + 15) & ~size_t(15));
    if (encryption == 1)
    {
        crypto::Key session;
        std::memcpy(session.data(), file.data() + security + 336, 16);
        crypto::Aes128CbcDecrypt(kRetailKey, session.data(), 16);
        crypto::Aes128CbcDecrypt(session, data.data(), data.size());
    }

    // Basic compression: runs of data, each followed by a run of zeros.
    image.clear();
    size_t read = 0;
    for (uint32_t block = 8; block + 8 <= formatSize; block += 8)
    {
        const uint32_t size = Be32(file, at + block), zeros = Be32(file, at + block + 4);
        if (read + size > data.size()) { error = "the XEX is shorter than its blocks say"; return false; }
        image.insert(image.end(), data.begin() + read, data.begin() + read + size);
        image.insert(image.end(), zeros, 0);
        read += size;
    }
    if (image.size() < 2 || image[0] != 'M' || image[1] != 'Z')
    {
        error = "the XEX did not decrypt to an executable";
        return false;
    }
    return true;
}
