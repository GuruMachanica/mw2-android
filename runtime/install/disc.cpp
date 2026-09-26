#include "disc.h"

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <fstream>

namespace fs = std::filesystem;
using install::Utf8;
using install::FromUtf8;

namespace
{
    constexpr uint64_t kSector = 2048;
    constexpr char kMagic[] = "MICROSOFT*XBOX*MEDIA";

    // XDVDFS. The volume descriptor is in sector 32 of the game partition,
    // which starts at one of a few offsets depending on how the disc was dumped
    // (a full dump carries the video partition first).
    class Image final : public install::Source
    {
    public:
        bool Open(const fs::path& path, std::string& error)
        {
            file_.open(path, std::ios::binary);
            if (!file_) { error = "cannot open " + Utf8(path); return false; }
            for (uint64_t base : { 0x0ull, 0xFD90000ull, 0x2080000ull, 0x18300000ull, 0x18310000ull })
            {
                char magic[20];
                if (ReadAt(base + 32 * kSector, magic, 20) && std::memcmp(magic, kMagic, 20) == 0)
                {
                    base_ = base;
                    break;
                }
                if (base == 0x18310000ull) { error = "not an Xbox 360 disc image"; return false; }
            }
            uint8_t volume[kSector];
            if (!ReadAt(base_ + 32 * kSector, volume, kSector)) { error = "the disc image is cut short"; return false; }
            const uint32_t rootSector = Le32(volume + 0x14), rootSize = Le32(volume + 0x18);
            std::vector<uint8_t> root(rootSize);
            if (!ReadAt(base_ + rootSector * kSector, root.data(), root.size()))
            {
                error = "the disc image is cut short";
                return false;
            }
            Walk(root);
            if (files_.empty()) { error = "the disc image has no files"; return false; }
            return true;
        }

        const std::vector<File>& Files() const override { return files_; }

        bool Read(const File& file, uint64_t offset, void* out, size_t size) override
        {
            if (offset + size > file.size) return false;
            return ReadAt(file.offset + offset, out, size);
        }

    private:
        static uint32_t Le32(const uint8_t* p) { return uint32_t(p[0]) | uint32_t(p[1]) << 8 | uint32_t(p[2]) << 16 | uint32_t(p[3]) << 24; }
        static uint16_t Le16(const uint8_t* p) { return uint16_t(p[0] | p[1] << 8); }

        bool ReadAt(uint64_t at, void* out, size_t size)
        {
            file_.clear();
            file_.seekg(std::streamoff(at));
            file_.read(static_cast<char*>(out), std::streamsize(size));
            return size_t(file_.gcount()) == size;
        }

        // A directory is a binary tree of entries at 4-byte offsets:
        // { left u16, right u16, sector u32, size u32, attributes u8, name length u8, name }.
        // Only the root's files are kept: everything the title reads is there.
        void Walk(const std::vector<uint8_t>& dir)
        {
            std::vector<uint32_t> pending{ 0 }, seen;
            while (!pending.empty())
            {
                const uint32_t at = pending.back() * 4;
                pending.pop_back();
                if (std::find(seen.begin(), seen.end(), at) != seen.end() || at + 14 > dir.size()) continue;
                seen.push_back(at);
                const uint8_t* e = dir.data() + at;
                const uint16_t left = Le16(e), right = Le16(e + 2);
                if (left == 0xFFFF) continue;
                if (left) pending.push_back(left);
                if (right) pending.push_back(right);
                const uint8_t attributes = e[12], length = e[13];
                if (attributes & 0x10 || at + 14 + length > dir.size()) continue;   // a directory
                files_.push_back({ std::string(reinterpret_cast<const char*>(e + 14), length),
                                   Le32(e + 8), base_ + uint64_t(Le32(e + 4)) * kSector });
            }
        }

        std::ifstream file_;
        uint64_t base_ = 0;
        std::vector<File> files_;
    };

    // A disc already extracted: the files at the top of the folder.
    class Folder final : public install::Source
    {
    public:
        bool Open(const fs::path& path, std::string& error)
        {
            root_ = path;
            std::error_code ec;
            for (const auto& entry : fs::directory_iterator(path, ec))
                if (entry.is_regular_file(ec))
                    files_.push_back({ Utf8(entry.path().filename()), entry.file_size(ec), 0 });
            if (ec || files_.empty()) { error = "cannot read the folder " + Utf8(path); return false; }
            return true;
        }

        const std::vector<File>& Files() const override { return files_; }

        bool Read(const File& file, uint64_t offset, void* out, size_t size) override
        {
            if (open_ != file.name)
            {
                stream_ = std::ifstream(root_ / install::FromUtf8(file.name), std::ios::binary);
                open_ = file.name;
            }
            stream_.clear();
            stream_.seekg(std::streamoff(offset));
            stream_.read(static_cast<char*>(out), std::streamsize(size));
            return size_t(stream_.gcount()) == size;
        }

    private:
        fs::path root_;
        std::vector<File> files_;
        std::ifstream stream_;
        std::string open_;
    };

    bool SameName(const std::string& a, const std::string& b)
    {
        return a.size() == b.size() &&
               std::equal(a.begin(), a.end(), b.begin(), [](char x, char y) { return std::tolower(x) == std::tolower(y); });
    }
}

const install::Source::File* install::Source::Find(const std::string& name) const
{
    for (const File& file : Files())
        if (SameName(file.name, name)) return &file;
    return nullptr;
}

bool install::Source::ReadAll(const File& file, std::vector<uint8_t>& out)
{
    out.resize(file.size);
    return Read(file, 0, out.data(), out.size());
}

std::unique_ptr<install::Source> install::Source::Open(const fs::path& path, std::string& error)
{
    std::error_code ec;
    if (fs::is_directory(path, ec))
    {
        auto folder = std::make_unique<Folder>();
        if (!folder->Open(path, error)) return nullptr;
        return folder;
    }
    if (!fs::is_regular_file(path, ec)) { error = Utf8(path) + " is neither a disc image nor a folder"; return nullptr; }
    auto image = std::make_unique<Image>();
    if (!image->Open(path, error)) return nullptr;
    return image;
}
