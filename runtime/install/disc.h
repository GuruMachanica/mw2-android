#pragma once
// Where the installer reads the game from: an Xbox 360 disc image (XDVDFS, as
// tools/xdvdfs.py reads it) or a folder a disc was already extracted to.
#include <cstdint>
#include <filesystem>
#include <memory>
#include <string>
#include <vector>

namespace install
{
    // Paths as UTF-8, which SDL and the log take, whatever the system's code page.
    inline std::string Utf8(const std::filesystem::path& path)
    {
        const auto text = path.u8string();
        return std::string(text.begin(), text.end());
    }
    inline std::filesystem::path FromUtf8(const std::string& text)
    {
        return std::filesystem::path(std::u8string(text.begin(), text.end()));
    }

    class Source
    {
    public:
        struct File
        {
            std::string name;       // as the disc spells it; the root holds all the title reads
            uint64_t size = 0;
            uint64_t offset = 0;    // in the image; unused for a folder
        };

        virtual ~Source() = default;
        // The files at the root of the disc.
        virtual const std::vector<File>& Files() const = 0;
        // Reads `size` bytes of `file` from `offset` into `out`.
        virtual bool Read(const File& file, uint64_t offset, void* out, size_t size) = 0;

        const File* Find(const std::string& name) const;
        bool ReadAll(const File& file, std::vector<uint8_t>& out);

        // An image file or a folder; null with `error` set if it is neither.
        static std::unique_ptr<Source> Open(const std::filesystem::path& path, std::string& error);
    };
}
