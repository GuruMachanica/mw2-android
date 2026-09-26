#include "crypto.h"

#include <algorithm>
#include <cstring>

// AES-128 decryption (FIPS 197, the equivalent inverse cipher written out
// round by round). Only an XEX's 5 MB goes through it, once per launch, so it
// is table-free apart from the S-boxes, which are derived rather than typed.
namespace
{
    struct Boxes
    {
        uint8_t sbox[256];
        uint8_t inverse[256];
        Boxes()
        {
            // The S-box is the multiplicative inverse in GF(2^8) followed by an
            // affine map; walking p and q = 1/p together yields both at once.
            uint8_t p = 1, q = 1;
            do
            {
                p = uint8_t(p ^ (p << 1) ^ (p & 0x80 ? 0x1B : 0));   // p *= 3
                q ^= q << 1; q ^= q << 2; q ^= q << 4;               // q /= 3
                if (q & 0x80) q ^= 0x09;
                auto rotl = [](uint8_t x, int s) { return uint8_t((x << s) | (x >> (8 - s))); };
                const uint8_t s = uint8_t(q ^ rotl(q, 1) ^ rotl(q, 2) ^ rotl(q, 3) ^ rotl(q, 4) ^ 0x63);
                sbox[p] = s;
            } while (p != 1);
            sbox[0] = 0x63;
            for (int i = 0; i < 256; i++) inverse[sbox[i]] = uint8_t(i);
        }
    };
    const Boxes g_boxes;

    uint8_t Times2(uint8_t x) { return uint8_t((x << 1) ^ (x & 0x80 ? 0x1B : 0)); }
    uint8_t Multiply(uint8_t x, uint8_t y)
    {
        uint8_t r = 0;
        for (; y; y >>= 1, x = Times2(x))
            if (y & 1) r ^= x;
        return r;
    }

    // The eleven round keys, 16 bytes each.
    void Expand(const install::crypto::Key& key, uint8_t out[176])
    {
        std::memcpy(out, key.data(), 16);
        uint8_t rcon = 1;
        for (int i = 16; i < 176; i += 4)
        {
            uint8_t t[4] = { out[i - 4], out[i - 3], out[i - 2], out[i - 1] };
            if (i % 16 == 0)
            {
                const uint8_t first = t[0];
                t[0] = uint8_t(g_boxes.sbox[t[1]] ^ rcon);
                t[1] = g_boxes.sbox[t[2]];
                t[2] = g_boxes.sbox[t[3]];
                t[3] = g_boxes.sbox[first];
                rcon = Times2(rcon);
            }
            for (int j = 0; j < 4; j++) out[i + j] = uint8_t(out[i - 16 + j] ^ t[j]);
        }
    }

    void DecryptBlock(const uint8_t keys[176], uint8_t s[16])
    {
        for (int i = 0; i < 16; i++) s[i] ^= keys[160 + i];
        for (int round = 9; ; round--)
        {
            // Inverse ShiftRows: row r (bytes r, r+4, r+8, r+12) rotates right by r.
            uint8_t t[16];
            for (int c = 0; c < 4; c++)
                for (int r = 0; r < 4; r++) t[((c + r) % 4) * 4 + r] = s[c * 4 + r];
            for (int i = 0; i < 16; i++) s[i] = uint8_t(g_boxes.inverse[t[i]] ^ keys[round * 16 + i]);
            if (round == 0) break;
            for (int c = 0; c < 4; c++)   // inverse MixColumns
            {
                uint8_t* col = s + c * 4;
                const uint8_t a0 = col[0], a1 = col[1], a2 = col[2], a3 = col[3];
                col[0] = uint8_t(Multiply(a0, 14) ^ Multiply(a1, 11) ^ Multiply(a2, 13) ^ Multiply(a3, 9));
                col[1] = uint8_t(Multiply(a0, 9) ^ Multiply(a1, 14) ^ Multiply(a2, 11) ^ Multiply(a3, 13));
                col[2] = uint8_t(Multiply(a0, 13) ^ Multiply(a1, 9) ^ Multiply(a2, 14) ^ Multiply(a3, 11));
                col[3] = uint8_t(Multiply(a0, 11) ^ Multiply(a1, 13) ^ Multiply(a2, 9) ^ Multiply(a3, 14));
            }
        }
    }
}

void install::crypto::Aes128CbcDecrypt(const Key& key, uint8_t* data, size_t size)
{
    uint8_t keys[176];
    Expand(key, keys);
    uint8_t previous[16] = {};
    for (size_t offset = 0; offset + 16 <= size; offset += 16)
    {
        uint8_t* block = data + offset;
        uint8_t cipher[16];
        std::memcpy(cipher, block, 16);
        DecryptBlock(keys, block);
        for (int i = 0; i < 16; i++) block[i] ^= previous[i];
        std::memcpy(previous, cipher, 16);
    }
}

// SHA-256 (FIPS 180-4).
namespace
{
    constexpr uint32_t kRounds[64] = {
        0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
        0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
        0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
        0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
        0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
        0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
        0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
        0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2,
    };
    uint32_t Rotr(uint32_t x, int s) { return (x >> s) | (x << (32 - s)); }
}

install::crypto::Sha256::Sha256()
    : h_{ 0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a, 0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19 }
{
}

void install::crypto::Sha256::Block(const uint8_t* block)
{
    uint32_t w[64];
    for (int i = 0; i < 16; i++)
        w[i] = uint32_t(block[i * 4]) << 24 | uint32_t(block[i * 4 + 1]) << 16 |
               uint32_t(block[i * 4 + 2]) << 8 | block[i * 4 + 3];
    for (int i = 16; i < 64; i++)
    {
        const uint32_t s0 = Rotr(w[i - 15], 7) ^ Rotr(w[i - 15], 18) ^ (w[i - 15] >> 3);
        const uint32_t s1 = Rotr(w[i - 2], 17) ^ Rotr(w[i - 2], 19) ^ (w[i - 2] >> 10);
        w[i] = w[i - 16] + s0 + w[i - 7] + s1;
    }
    uint32_t a = h_[0], b = h_[1], c = h_[2], d = h_[3], e = h_[4], f = h_[5], g = h_[6], h = h_[7];
    for (int i = 0; i < 64; i++)
    {
        const uint32_t t1 = h + (Rotr(e, 6) ^ Rotr(e, 11) ^ Rotr(e, 25)) + ((e & f) ^ (~e & g)) + kRounds[i] + w[i];
        const uint32_t t2 = (Rotr(a, 2) ^ Rotr(a, 13) ^ Rotr(a, 22)) + ((a & b) ^ (a & c) ^ (b & c));
        h = g; g = f; f = e; e = d + t1; d = c; c = b; b = a; a = t1 + t2;
    }
    h_[0] += a; h_[1] += b; h_[2] += c; h_[3] += d; h_[4] += e; h_[5] += f; h_[6] += g; h_[7] += h;
}

void install::crypto::Sha256::Update(const void* data, size_t size)
{
    const auto* bytes = static_cast<const uint8_t*>(data);
    length_ += size;
    while (size)
    {
        const size_t take = std::min(size, sizeof(buffer_) - buffered_);
        std::memcpy(buffer_ + buffered_, bytes, take);
        buffered_ += take; bytes += take; size -= take;
        if (buffered_ == sizeof(buffer_)) { Block(buffer_); buffered_ = 0; }
    }
}

std::array<uint8_t, 32> install::crypto::Sha256::Final()
{
    const uint64_t bits = length_ * 8;
    const uint8_t one = 0x80, zero = 0;
    Update(&one, 1);
    while (buffered_ != 56) Update(&zero, 1);
    uint8_t tail[8];
    for (int i = 0; i < 8; i++) tail[i] = uint8_t(bits >> (56 - i * 8));
    Update(tail, 8);
    std::array<uint8_t, 32> out;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 4; j++) out[i * 4 + j] = uint8_t(h_[i] >> (24 - j * 8));
    return out;
}

std::string install::crypto::Sha256::FinalHex()
{
    static const char digits[] = "0123456789abcdef";
    std::string text;
    for (uint8_t byte : Final()) { text += digits[byte >> 4]; text += digits[byte & 15]; }
    return text;
}
