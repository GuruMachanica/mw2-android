#pragma once
// A hash over a key made of plain words -- a fetch constant, a pipeline's
// state, the textures a draw binds -- for the unordered maps looked up on the
// draw path, where an ordered map compared the keys word by word per level.
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <type_traits>

struct WordsHash
{
    template <typename Key>
    size_t operator()(const Key& key) const noexcept
    {
        static_assert(std::has_unique_object_representations_v<Key>,
                      "every byte of the key has to be part of its value");
        const auto* bytes = reinterpret_cast<const unsigned char*>(&key);
        uint64_t hash = sizeof(Key);
        size_t at = 0;
        for (; at + 8 <= sizeof(Key); at += 8)
        {
            uint64_t word;
            std::memcpy(&word, bytes + at, 8);
            hash = (hash ^ word) * 0x9E3779B97F4A7C15ull;
            hash ^= hash >> 29;
        }
        if (at < sizeof(Key))
        {
            uint64_t word = 0;
            std::memcpy(&word, bytes + at, sizeof(Key) - at);
            hash = (hash ^ word) * 0x9E3779B97F4A7C15ull;
            hash ^= hash >> 29;
        }
        return size_t(hash);
    }
};
