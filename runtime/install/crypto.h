#pragma once
// The two primitives a start and an install need: AES-128 to decrypt an XEX, and
// SHA-256 to tell the disc this build was made from from any other.
#include <array>
#include <cstddef>
#include <cstdint>
#include <string>

namespace install::crypto
{
    using Key = std::array<uint8_t, 16>;

    // CBC with a zero IV, in place; `size` is a multiple of 16.
    void Aes128CbcDecrypt(const Key& key, uint8_t* data, size_t size);

    class Sha256
    {
    public:
        Sha256();
        void Update(const void* data, size_t size);
        std::array<uint8_t, 32> Final();
        // Lower-case hex, as CMake's file(SHA256) writes it.
        std::string FinalHex();

    private:
        void Block(const uint8_t* block);
        uint32_t h_[8];
        uint8_t buffer_[64];
        size_t buffered_ = 0;
        uint64_t length_ = 0;
    };
}
