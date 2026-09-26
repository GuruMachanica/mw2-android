#include "texture.h"

#include <algorithm>
#include <cstdlib>
#include <cstring>

namespace
{
    struct Entry { const char* name; uint32_t bits; uint32_t bw; uint32_t bh; };

    // A null name is a value the hardware does not define; the gaps are real.
    const Entry kFormats[64] = {
        /* 0*/ { "1_REVERSE", 1, 1, 1 },
        /* 1*/ { "1", 1, 1, 1 },
        /* 2*/ { "8", 8, 1, 1 },
        /* 3*/ { "1_5_5_5", 16, 1, 1 },
        /* 4*/ { "5_6_5", 16, 1, 1 },
        /* 5*/ { "6_5_5", 16, 1, 1 },
        /* 6*/ { "8_8_8_8", 32, 1, 1 },
        /* 7*/ { "2_10_10_10", 32, 1, 1 },
        /* 8*/ { "8_A", 8, 1, 1 },
        /* 9*/ { "8_B", 8, 1, 1 },
        /*10*/ { "8_8", 16, 1, 1 },
        /*11*/ { "Cr_Y1_Cb_Y0_REP", 16, 2, 1 },
        /*12*/ { "Y1_Cr_Y0_Cb_REP", 16, 2, 1 },
        /*13*/ { "16_16_EDRAM", 32, 1, 1 },
        /*14*/ { "8_8_8_8_A", 32, 1, 1 },
        /*15*/ { "4_4_4_4", 16, 1, 1 },
        /*16*/ { "10_11_11", 32, 1, 1 },
        /*17*/ { "11_11_10", 32, 1, 1 },
        /*18*/ { "DXT1", 64, 4, 4 },
        /*19*/ { "DXT2_3", 128, 4, 4 },
        /*20*/ { "DXT4_5", 128, 4, 4 },
        /*21*/ { "16_16_16_16_EDRAM", 64, 1, 1 },
        /*22*/ { "24_8", 32, 1, 1 },
        /*23*/ { "24_8_FLOAT", 32, 1, 1 },
        /*24*/ { "16", 16, 1, 1 },
        /*25*/ { "16_16", 32, 1, 1 },
        /*26*/ { "16_16_16_16", 64, 1, 1 },
        /*27*/ { "16_EXPAND", 16, 1, 1 },
        /*28*/ { "16_16_EXPAND", 32, 1, 1 },
        /*29*/ { "16_16_16_16_EXPAND", 64, 1, 1 },
        /*30*/ { "16_FLOAT", 16, 1, 1 },
        /*31*/ { "16_16_FLOAT", 32, 1, 1 },
        /*32*/ { "16_16_16_16_FLOAT", 64, 1, 1 },
        /*33*/ { "32", 32, 1, 1 },
        /*34*/ { "32_32", 64, 1, 1 },
        /*35*/ { "32_32_32_32", 128, 1, 1 },
        /*36*/ { "32_FLOAT", 32, 1, 1 },
        /*37*/ { "32_32_FLOAT", 64, 1, 1 },
        /*38*/ { "32_32_32_32_FLOAT", 128, 1, 1 },
        /*39*/ { "32_AS_8", 8, 1, 1 },
        /*40*/ { "32_AS_8_8", 16, 1, 1 },
        /*41*/ { "16_MPEG", 16, 1, 1 },
        /*42*/ { "16_16_MPEG", 32, 1, 1 },
        /*43*/ { "8_INTERLACED", 8, 1, 1 },
        /*44*/ { "32_AS_8_INTERLACED", 8, 1, 1 },
        /*45*/ { "32_AS_8_8_INTERLACED", 16, 1, 1 },
        /*46*/ { "16_INTERLACED", 16, 1, 1 },
        /*47*/ { "16_MPEG_INTERLACED", 16, 1, 1 },
        /*48*/ { "16_16_MPEG_INTERLACED", 32, 1, 1 },
        /*49*/ { "DXN", 128, 4, 4 },
        /*50*/ { "8_8_8_8_AS_16_16_16_16", 32, 1, 1 },
        /*51*/ { "DXT1_AS_16_16_16_16", 64, 4, 4 },
        /*52*/ { "DXT2_3_AS_16_16_16_16", 128, 4, 4 },
        /*53*/ { "DXT4_5_AS_16_16_16_16", 128, 4, 4 },
        /*54*/ { "2_10_10_10_AS_16_16_16_16", 32, 1, 1 },
        /*55*/ { "10_11_11_AS_16_16_16_16", 32, 1, 1 },
        /*56*/ { "11_11_10_AS_16_16_16_16", 32, 1, 1 },
        /*57*/ { "32_32_32_FLOAT", 96, 1, 1 },
        /*58*/ { "DXT3A", 64, 4, 4 },
        /*59*/ { "DXT5A", 64, 4, 4 },
        /*60*/ { "CTX1", 64, 4, 4 },
        /*61*/ { "DXT3A_AS_1_1_1_1", 64, 4, 4 },
        /*62*/ { "8_8_8_8_GAMMA_EDRAM", 32, 1, 1 },
        /*63*/ { "2_10_10_10_FLOAT_EDRAM", 32, 1, 1 },
    };
}

const char* gpu::TextureFormatName(uint32_t format)
{
    return format < 64 ? kFormats[format].name : nullptr;
}

gpu::TextureFormatInfo gpu::TextureFormatOf(uint32_t format)
{
    TextureFormatInfo info;
    if (format >= 64 || !kFormats[format].name) return info;
    info.bitsPerBlock = kFormats[format].bits;
    info.blockWidth   = kFormats[format].bw;
    info.blockHeight  = kFormats[format].bh;
    info.known = true;
    return info;
}


namespace
{
    // The scatter across two banks and four pipes that ends both tiled address
    // functions. Identical for 2D and 3D; only what feeds it differs.
    template <typename Address>
    Address TiledCombine(Address outerInner, uint32_t bank, uint32_t pipe, uint32_t yLsb)
    {
        return Address((yLsb << 4) | (pipe << 6) | (bank << 11))
             | (outerInner & 0xF)
             | (((outerInner >> 4) & 0x1) << 5)
             | (((outerInner >> 5) & 0x7) << 8)
             | ((outerInner >> 8) << 12);
    }
}

int32_t gpu::TiledOffset2D(int32_t x, int32_t y, uint32_t pitchAlignedBlocks,
                           uint32_t bytesPerBlockLog2)
{
    // Blocks are grouped into 32x32 macro tiles; within one, rows pair up and
    // the address is scattered across two banks and four pipes. The bit
    // shuffle at the end is that scatter, not an optimisation.
    const int32_t outerBlocks =
        ((y >> 5) * int32_t(pitchAlignedBlocks >> 5) + (x >> 5)) << 6;
    const int32_t innerBlocks = (((y >> 1) & 0x7) << 3) | (x & 0x7);
    const int32_t outerInner = (outerBlocks | innerBlocks) << bytesPerBlockLog2;

    const uint32_t bank = (y >> 4) & 0x1;
    const uint32_t pipe = ((x >> 3) & 0x3) ^ (((y >> 3) & 0x1) << 1);
    const uint32_t yLsb = uint32_t(y) & 0x1;

    return TiledCombine(outerInner, bank, pipe, yLsb);
}

// A volume's macro tile is 32x16x4 blocks, not 32x32x1, and the slice index
// takes part in both the inner address and the bank -- so a volume is not a
// stack of 2D-tiled images and cannot be read as one. Follows Xenia's
// texture_address::Tiled3D (BSD-3).
//
// Checked against the light grid estate binds every draw, 512x256x4 with four
// bytes a block: the function maps all 524288 texels to 524288 distinct
// addresses spanning exactly the 2 MB the texture occupies, and each slice then
// reads the same 11.4% non-zero. Reading the slices as a stack instead gives
// 43%, 0%, 0%, 2.6% -- three quarters of the volume empty, which is what left
// the world unlit.
int64_t gpu::TiledOffset3D(int32_t x, int32_t y, int32_t z,
                           uint32_t pitchAlignedBlocks, uint32_t heightAlignedBlocks,
                           uint32_t bytesPerBlockLog2)
{
    const int32_t outerBlocks =
        ((((z >> 2) * int32_t(heightAlignedBlocks >> 4) + (y >> 4)) *
          int32_t(pitchAlignedBlocks >> 5)) + (x >> 5)) << 7;
    const int32_t innerBlocks = ((z & 0x3) << 5) | (((y >> 1) & 0x3) << 3) | (x & 0x7);
    const int64_t outerInner = int64_t(outerBlocks | innerBlocks) << bytesPerBlockLog2;

    const uint32_t bank = uint32_t((y >> 3) ^ (z >> 2)) & 0x1;
    const uint32_t pipe = (uint32_t(x >> 3) & 0x3) ^ (bank << 1);
    return TiledCombine(outerInner, bank, pipe, uint32_t(y) & 0x1);
}

namespace
{
    uint32_t Log2Ceil(uint32_t value)
    {
        uint32_t n = 0;
        while ((1u << n) < value) n++;
        return n;
    }

    uint32_t Log2Floor(uint32_t value)
    {
        uint32_t n = 0;
        while (value >>= 1) n++;
        return n;
    }

    uint32_t AlignUp(uint32_t value, uint32_t alignment)
    {
        return (value + alignment - 1) / alignment * alignment;
    }

    // Small levels do not begin where they say they do. Once a level's shorter
    // side is 16 texels or less, it and every level after it are packed into
    // a single tile, each at its own place inside it: the first three a
    // quarter, an eighth and a sixteenth of a tile along the shorter side, the
    // rest along the longer one. Reading from the corner reads other levels
    // instead -- MW2's calibration slider is a 128x16 bar, and the row of
    // dashes it drew as was levels 2 and 3 of itself. The level the packing
    // starts at can be 0. Follows Xenia's GetPackedMipLevel and
    // GetPackedMipOffset (BSD-3).
    constexpr uint32_t kNotPacked = ~0u;

    uint32_t PackedLevelOf(const gpu::TextureFetch& fetch)
    {
        if (!fetch.PackedMips()) return kNotPacked;
        const uint32_t shorter = Log2Ceil(std::min(fetch.Width(), fetch.Height()));
        return shorter > 4 ? shorter - 4 : 0;
    }

    void PackedOffset(const gpu::TextureFetch& fetch, const gpu::TextureFormatInfo& info,
                      uint32_t level, uint32_t& xBlocks, uint32_t& yBlocks, uint32_t& z)
    {
        xBlocks = yBlocks = z = 0;
        const uint32_t log2Width = Log2Ceil(fetch.Width());
        const uint32_t log2Height = Log2Ceil(fetch.Height());
        const uint32_t log2Size = std::min(log2Width, log2Height);
        if (log2Size > 4 + level) return;
        const uint32_t packedBase = log2Size > 4 ? log2Size - 4 : 0;
        const uint32_t packed = level - packedBase;
        uint32_t x = 0, y = 0;
        if (packed < 3)
        {
            if (log2Width > log2Height) y = 16 >> packed;
            else                        x = 16 >> packed;
        }
        else
        {
            uint32_t offset;
            if (log2Width > log2Height) x = offset = (1u << (log2Width - packedBase)) >> (packed - 2);
            else                        y = offset = (1u << (log2Height - packedBase)) >> (packed - 2);
            // The 1x1 levels of a volume go along its third axis instead.
            if (offset < 4 && fetch.Dimension() == gpu::TextureDimension::D3)
            {
                const uint32_t log2Depth = Log2Ceil(fetch.Depth());
                z = log2Depth > 1 + packed ? (log2Depth - packed) * 4 : 4;
            }
        }
        xBlocks = x / (info.blockWidth ? info.blockWidth : 1);
        yBlocks = y / (info.blockHeight ? info.blockHeight : 1);
    }

    // How one stored level is laid out: the base, a level of the mip chain,
    // or a packed tail, which holds several levels and is stored as one.
    //
    // The base takes its row pitch from the fetch constant and its height as
    // it is. The chain's levels are laid out as though the base were a power
    // of two on each side, whatever it really is, so a level's stride is not
    // its own size. Either way the pitch and height are rounded up to a 32x32
    // block tile -- for a linear texture too -- and each array slice or cube
    // face starts on a 4 KB boundary. Follows Xenia's GetGuestTextureLayout.
    struct Stored
    {
        uint32_t pitchBlocks = 0;     // the row pitch the address functions take
        uint32_t rowBytes = 0;
        uint32_t sliceRows = 0;       // block rows to a slice of a volume
        size_t sliceStride = 0;       // between array slices and cube faces
        size_t sliceExtent = 0;       // what one slice actually covers
    };

    Stored StoredLevel(const gpu::TextureFetch& fetch, const gpu::TextureFormatInfo& info,
                       bool isBase, uint32_t level)
    {
        const uint32_t bytesPerBlock = info.bitsPerBlock / 8;
        uint32_t pitchTexels, rowsTexels;
        if (isBase)
        {
            pitchTexels = fetch.Pitch() ? fetch.Pitch() : fetch.Width();
            rowsTexels = fetch.Height();
        }
        else
        {
            pitchTexels = std::max((1u << Log2Ceil(fetch.Width())) >> level, 1u);
            rowsTexels = std::max((1u << Log2Ceil(fetch.Height())) >> level, 1u);
        }
        Stored s;
        s.rowBytes = AlignUp(AlignUp(pitchTexels, info.blockWidth) / info.blockWidth, 32) *
                     bytesPerBlock;
        // A linear mip's rows are 256-byte aligned; the base's pitch is the
        // title's word for it.
        if (!fetch.Tiled() && !isBase) s.rowBytes = AlignUp(s.rowBytes, 256);
        s.pitchBlocks = s.rowBytes / bytesPerBlock;
        s.sliceRows = fetch.Dimension() == gpu::TextureDimension::D1
                        ? 1 : AlignUp(AlignUp(rowsTexels, info.blockHeight) / info.blockHeight, 32);
        size_t slice = size_t(s.rowBytes) * s.sliceRows;
        // A volume's every level is strided by the base's depth, rounded to the
        // four slices of a volume tile -- Xenia's reading, not yet checked
        // against a volume with mips.
        if (fetch.Dimension() == gpu::TextureDimension::D3) slice *= AlignUp(fetch.Depth(), 4);
        s.sliceExtent = slice;
        s.sliceStride = (slice + 4095) & ~size_t(4095);
        return s;
    }

    // Array slices to the level: six for a cube, the stack for a stacked 2D
    // texture, one otherwise -- a volume's slices are inside its level.
    uint32_t ArraySizeOf(const gpu::TextureFetch& fetch)
    {
        switch (fetch.Dimension())
        {
        case gpu::TextureDimension::Cube: return 6;
        case gpu::TextureDimension::D3:   return 1;
        default:                          return fetch.Depth();
        }
    }

    // Where stored level `level` starts, from the mip address. Level 1 is at
    // the address itself -- or, when the packing starts at level 0, the tail
    // holding every level is.
    size_t MipOffset(const gpu::TextureFetch& fetch, const gpu::TextureFormatInfo& info,
                     uint32_t level, uint32_t packedLevel)
    {
        if (packedLevel == 0) return 0;
        size_t offset = 0;
        for (uint32_t l = 1; l < level; l++)
            offset += StoredLevel(fetch, info, false, l).sliceStride * ArraySizeOf(fetch);
        return offset;
    }

    // Guest memory is big-endian and a texture says how its bytes were grouped
    // when stored. Applied to the whole block: a block's internal layout is
    // the format's business.
    void SwapEndian(uint8_t* data, size_t size, gpu::TextureEndian endian)
    {
        switch (endian)
        {
        case gpu::TextureEndian::k8in16:
            for (size_t i = 0; i + 1 < size; i += 2) std::swap(data[i], data[i + 1]);
            break;
        case gpu::TextureEndian::k8in32:
            for (size_t i = 0; i + 3 < size; i += 4)
            {
                std::swap(data[i], data[i + 3]);
                std::swap(data[i + 1], data[i + 2]);
            }
            break;
        case gpu::TextureEndian::k16in32:
            for (size_t i = 0; i + 3 < size; i += 4)
            {
                std::swap(data[i], data[i + 2]);
                std::swap(data[i + 1], data[i + 3]);
            }
            break;
        case gpu::TextureEndian::None:
            break;
        }
    }

    // DXT3A is the alpha block of DXT2/3: sixteen explicit four-bit values, not
    // the two endpoints and interpolated indices of BC4. The two are both eight
    // bytes a block, so reading one as the other is not caught by any size check
    // -- it just decodes to plausible nonsense. MW2 stores the world's light map
    // in it, which is why the static geometry was lit by noise. Follows Xenia,
    // which gives k_DXT3A a load shader of its own into R8 (BSD-3).
    void ExpandDxt3a(gpu::TextureData& out)
    {
        std::vector<uint8_t> flat;
        for (gpu::TextureData::Level& level : out.levels)
        {
            const size_t at = (flat.size() + 15) & ~size_t(15);
            const size_t size = size_t(level.width) * level.height * level.layers;
            flat.resize(at + size, 0);
            for (uint32_t layer = 0; layer < level.layers; layer++)
                for (uint32_t by = 0; by < level.blocksHigh; by++)
                    for (uint32_t bx = 0; bx < level.blocksWide; bx++)
                    {
                        const uint8_t* block = out.bytes.data() + level.offset +
                            ((size_t(layer) * level.blocksHigh + by) * level.blocksWide + bx) * 8;
                        for (uint32_t i = 0; i < 16; i++)
                        {
                            const uint32_t x = (bx << 2) + (i & 3);
                            const uint32_t y = (by << 2) + (i >> 2);
                            if (x >= level.width || y >= level.height) continue;
                            const uint32_t nibble = (block[i >> 1] >> ((i & 1) * 4)) & 0xF;
                            flat[at + (size_t(layer) * level.height + y) * level.width + x] =
                                uint8_t(nibble * 17);   // 0..15 over 0..255
                        }
                    }
            level.offset = at;
            level.size = size;
            level.blocksWide = level.width;
            level.blocksHigh = level.height;
        }
        out.bytes = std::move(flat);
        out.blocksWide = out.width;
        out.blocksHigh = out.height;
        out.bytesPerBlock = 1;
        out.expanded = true;
    }
}

gpu::TextureExtents gpu::ExtentsOf(const TextureFetch& fetch)
{
    TextureExtents out;
    const TextureFormatInfo info = TextureFormatOf(fetch.Format());
    if (!info.known || !info.bitsPerBlock || (info.bitsPerBlock % 8)) return out;

    const bool volume = fetch.Dimension() == TextureDimension::D3;
    uint32_t longest = std::max(fetch.Width(), fetch.Height());
    if (volume) longest = std::max(longest, fetch.Depth());
    const uint32_t sizeMaxLevel = Log2Floor(longest);

    uint32_t base = fetch.BaseAddress(), mip = fetch.MipAddress();
    uint32_t minLevel = 0, maxLevel = 0;
    // No mip address, no mips, whatever the levels say. The mip filter is not
    // consulted: a fetch instruction may override it.
    if (mip)
    {
        minLevel = std::min(fetch.MinMipLevel(), sizeMaxLevel);
        maxLevel = std::max(std::min(fetch.MaxMipLevel(), sizeMaxLevel), minLevel);
    }
    if (maxLevel)
    {
        // A texture that starts above level 0 may point both addresses at its
        // chain, and has no base to read then.
        if (minLevel && base == mip) base = 0;
        if (!base) minLevel = std::max(minLevel, 1u);
    }
    else mip = 0;

    const uint32_t arraySize = ArraySizeOf(fetch);
    const uint32_t packedLevel = PackedLevelOf(fetch);
    if (base)
    {
        const Stored s = StoredLevel(fetch, info, true, 0);
        out.baseAddress = base;
        out.baseBytes = uint32_t(s.sliceStride * (arraySize - 1) + s.sliceExtent);
    }
    if (mip)
    {
        // The last level stored on its own, or the tail the rest are packed in.
        const uint32_t stored = packedLevel == 0 ? 0 : std::min(maxLevel, packedLevel);
        const Stored s = StoredLevel(fetch, info, false, stored);
        out.mipAddress = mip;
        out.mipBytes = uint32_t(MipOffset(fetch, info, stored, packedLevel) +
                                s.sliceStride * (arraySize - 1) + s.sliceExtent);
    }
    out.minLevel = minLevel;
    out.maxLevel = maxLevel;
    return out;
}

gpu::TextureData gpu::ReadTexture(const TextureFetch& fetch, const uint8_t* base,
                                  const uint8_t* mips)
{
    TextureData out;
    const TextureFormatInfo info = TextureFormatOf(fetch.Format());
    if (!info.known) { out.error = "unknown texture format"; return out; }
    if (info.bitsPerBlock % 8) { out.error = "sub-byte block size"; return out; }

    const uint32_t bytesPerBlock = info.bitsPerBlock / 8;
    // The tiled address function works in whole blocks of a power-of-two size;
    // the odd formats that are not (96-bit float triples) never appear here.
    if (bytesPerBlock & (bytesPerBlock - 1)) { out.error = "block size not a power of two"; return out; }

    out.width  = fetch.Width();
    out.height = fetch.Height();
    out.blocksWide = (out.width  + info.blockWidth  - 1) / info.blockWidth;
    out.blocksHigh = (out.height + info.blockHeight - 1) / info.blockHeight;
    out.bytesPerBlock = bytesPerBlock;
    if (!out.blocksWide || !out.blocksHigh) { out.error = "empty texture"; return out; }

    const TextureExtents extents = ExtentsOf(fetch);
    const bool readBase = base && extents.baseBytes;
    const uint32_t maxLevel = mips && extents.mipBytes ? extents.maxLevel : 0;
    if (!readBase && !maxLevel) { out.error = "no level to read"; return out; }
    out.minLevel = maxLevel ? extents.minLevel : 0;
    if (!readBase) out.minLevel = std::max(out.minLevel, 1u);

    // A cube map uploads all six faces as an array and a volume all of its
    // slices as a 3D image; a stacked 2D texture uploads its first slice.
    out.volume = fetch.Dimension() == TextureDimension::D3;
    out.layers = fetch.Dimension() == TextureDimension::Cube ? 6
               : out.volume                                  ? fetch.Depth()
                                                             : 1;
    if (!out.layers) out.layers = 1;

    const uint32_t bytesPerBlockLog2 = Log2Ceil(bytesPerBlock);
    const uint32_t packedLevel = PackedLevelOf(fetch);
    for (uint32_t level = 0; level <= maxLevel; level++)
    {
        TextureData::Level l;
        l.width = std::max(out.width >> level, 1u);
        l.height = std::max(out.height >> level, 1u);
        l.depth = out.volume ? std::max(fetch.Depth() >> level, 1u) : 1;
        l.blocksWide = (l.width + info.blockWidth - 1) / info.blockWidth;
        l.blocksHigh = (l.height + info.blockHeight - 1) / info.blockHeight;
        l.layers = out.volume ? l.depth : out.layers;
        l.offset = (out.bytes.size() + 15) & ~size_t(15);
        l.size = size_t(l.blocksWide) * l.blocksHigh * bytesPerBlock * l.layers;
        out.bytes.resize(l.offset + l.size, 0);
        out.levels.push_back(l);
        if (level == 0 && !readBase) continue;

        // Level 0 is the base; a level in the packed tail is read from the
        // tail at its own offset.
        const bool isBase = level == 0;
        const uint32_t stored = isBase ? 0 : std::min(level, packedLevel);
        const Stored s = StoredLevel(fetch, info, isBase, stored);
        const uint8_t* source = isBase ? base : mips + MipOffset(fetch, info, stored, packedLevel);
        uint32_t ox = 0, oy = 0, oz = 0;
        if (level >= packedLevel) PackedOffset(fetch, info, level, ox, oy, oz);

        const size_t rowBytes = size_t(l.blocksWide) * bytesPerBlock;
        for (uint32_t layer = 0; layer < l.layers; layer++)
        {
            for (uint32_t by = 0; by < l.blocksHigh; by++)
            {
                uint8_t* row = out.bytes.data() + l.offset + (size_t(layer) * l.blocksHigh + by) * rowBytes;
                const uint32_t sy = by + oy;
                if (!fetch.Tiled())
                {
                    const size_t slice = out.volume
                        ? size_t(layer + oz) * s.rowBytes * s.sliceRows
                        : size_t(layer) * s.sliceStride;
                    std::memcpy(row, source + slice + size_t(sy) * s.rowBytes +
                                         size_t(ox) * bytesPerBlock, rowBytes);
                    continue;
                }
                // The low three bits of x stay in the address's low bits, so an
                // aligned run of blocks -- eight of them, at most sixteen bytes
                // -- lies side by side in memory, in both tilings: one address
                // and one fixed-size copy a run instead of a call a block.
                const uint32_t run = bytesPerBlock == 1 ? 8 : std::max(1u, std::min(8u, 16u / bytesPerBlock));
                const uint32_t runBytes = run * bytesPerBlock;
                for (uint32_t bx = 0; bx < l.blocksWide;)
                {
                    const uint32_t sx = bx + ox;
                    // A volume addresses all three coordinates at once; there is no
                    // per-slice offset to add to a 2D one.
                    const size_t at = out.volume
                        ? size_t(TiledOffset3D(int32_t(sx), int32_t(sy), int32_t(layer + oz),
                                               s.pitchBlocks, s.sliceRows, bytesPerBlockLog2))
                        : layer * s.sliceStride +
                          size_t(TiledOffset2D(int32_t(sx), int32_t(sy), s.pitchBlocks,
                                               bytesPerBlockLog2));
                    uint8_t* to = row + size_t(bx) * bytesPerBlock;
                    if (sx % run == 0 && bx + run <= l.blocksWide)
                    {
                        if (runBytes == 16) std::memcpy(to, source + at, 16);
                        else if (runBytes == 8) std::memcpy(to, source + at, 8);
                        else std::memcpy(to, source + at, runBytes);
                        bx += run;
                    }
                    else
                    {
                        std::memcpy(to, source + at, bytesPerBlock);
                        bx++;
                    }
                }
            }
        }
    }
    // The swap is within each block, and a block is a whole number of the
    // units it swaps -- so one pass over the copy does every block alike. A
    // block smaller than the unit has always been left as it is.
    const TextureEndian endian = fetch.Endian();
    const uint32_t unit = endian == TextureEndian::None ? 1 : endian == TextureEndian::k8in16 ? 2 : 4;
    if (bytesPerBlock >= unit) SwapEndian(out.bytes.data(), out.bytes.size(), endian);

    if (fetch.Format() == 58 && out.bytesPerBlock == 8) ExpandDxt3a(out);

    out.ok = true;
    return out;
}


namespace
{
    struct Rgba { uint8_t r, g, b, a; };

    // A 5:6:5 colour pair and two bits per pixel: the BC1 colour block, which
    // BC2 and BC3 also use.
    void DecodeColourBlock(const uint8_t* block, bool punchThrough, Rgba out[16])
    {
        const uint16_t c0 = uint16_t(block[0] | (block[1] << 8));
        const uint16_t c1 = uint16_t(block[2] | (block[3] << 8));
        auto expand = [](uint16_t c) {
            Rgba v;
            v.r = uint8_t(((c >> 11) & 0x1F) * 255 / 31);
            v.g = uint8_t(((c >> 5) & 0x3F) * 255 / 63);
            v.b = uint8_t((c & 0x1F) * 255 / 31);
            v.a = 255;
            return v;
        };
        Rgba palette[4];
        palette[0] = expand(c0);
        palette[1] = expand(c1);
        if (!punchThrough || c0 > c1)
        {
            for (int i = 0; i < 3; i++)
            {
                const uint8_t* a = &palette[0].r, *b = &palette[1].r;
                (&palette[2].r)[i] = uint8_t((2 * a[i] + b[i]) / 3);
                (&palette[3].r)[i] = uint8_t((a[i] + 2 * b[i]) / 3);
            }
            palette[2].a = palette[3].a = 255;
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                const uint8_t* a = &palette[0].r, *b = &palette[1].r;
                (&palette[2].r)[i] = uint8_t((a[i] + b[i]) / 2);
                (&palette[3].r)[i] = 0;
            }
            palette[2].a = 255;
            palette[3].a = 0;
        }
        const uint32_t bits = uint32_t(block[4]) | (uint32_t(block[5]) << 8) |
                              (uint32_t(block[6]) << 16) | (uint32_t(block[7]) << 24);
        for (int i = 0; i < 16; i++) out[i] = palette[(bits >> (2 * i)) & 3];
    }

    // Two endpoints and three bits per pixel: the BC3 alpha block, which BC4
    // (DXT5A here) uses on its own as a single channel.
    void DecodeAlphaBlock(const uint8_t* block, uint8_t out[16])
    {
        uint8_t a[8];
        a[0] = block[0];
        a[1] = block[1];
        if (a[0] > a[1])
            for (int i = 0; i < 6; i++)
                a[2 + i] = uint8_t(((6 - i) * a[0] + (1 + i) * a[1]) / 7);
        else
        {
            for (int i = 0; i < 4; i++)
                a[2 + i] = uint8_t(((4 - i) * a[0] + (1 + i) * a[1]) / 5);
            a[6] = 0;
            a[7] = 255;
        }
        uint64_t bits = 0;
        for (int i = 0; i < 6; i++) bits |= uint64_t(block[2 + i]) << (8 * i);
        for (int i = 0; i < 16; i++) out[i] = a[(bits >> (3 * i)) & 7];
    }
}

bool gpu::DecodeToRgba(const TextureData& data, uint32_t format,
                       std::vector<uint8_t>& rgba, uint32_t level)
{
    if (!data.ok || level >= data.levels.size()) return false;
    const TextureFormatInfo info = TextureFormatOf(format);
    if (!info.known) return false;
    const TextureData::Level& l = data.levels[level];
    const uint8_t* bytes = data.bytes.data() + l.offset;

    // Every layer, one under another.
    const uint32_t rows = l.height * l.layers;
    rgba.assign(size_t(l.width) * rows * 4, 0);
    // DXT3A arrives unpacked to one byte a texel (see ReadTexture).
    if (data.expanded && data.bytesPerBlock == 1)
    {
        for (size_t i = 0; i < size_t(l.width) * rows && i < l.size; i++)
        {
            const uint8_t v = bytes[i];
            uint8_t* p = rgba.data() + i * 4;
            p[0] = p[1] = p[2] = v;
            p[3] = 255;
        }
        return true;
    }
    uint32_t layer = 0;
    auto put = [&](uint32_t x, uint32_t y, Rgba v) {
        if (x >= l.width || y >= l.height) return;
        uint8_t* p = rgba.data() + ((size_t(layer) * l.height + y) * l.width + x) * 4;
        p[0] = v.r; p[1] = v.g; p[2] = v.b; p[3] = v.a;
    };

    for (; layer < l.layers; layer++)
    for (uint32_t by = 0; by < l.blocksHigh; by++)
    {
        for (uint32_t bx = 0; bx < l.blocksWide; bx++)
        {
            const uint8_t* block =
                bytes + ((size_t(layer) * l.blocksHigh + by) * l.blocksWide + bx) * data.bytesPerBlock;
            const uint32_t x0 = bx * info.blockWidth, y0 = by * info.blockHeight;

            switch (format)
            {
            case 18:  // DXT1
            case 51:
            {
                Rgba colours[16];
                DecodeColourBlock(block, true, colours);
                for (int i = 0; i < 16; i++) put(x0 + (i & 3), y0 + (i >> 2), colours[i]);
                break;
            }
            case 19: case 20: case 52: case 53:   // DXT2_3, DXT4_5
            {
                Rgba colours[16];
                uint8_t alpha[16];
                // BC2 stores four bits of alpha per pixel, BC3 an interpolated block;
                // both put the colour block second.
                if (format == 19 || format == 52)
                    for (int i = 0; i < 16; i++)
                        alpha[i] = uint8_t(((block[i >> 1] >> ((i & 1) * 4)) & 0xF) * 17);
                else
                    DecodeAlphaBlock(block, alpha);
                DecodeColourBlock(block + 8, false, colours);
                for (int i = 0; i < 16; i++)
                {
                    colours[i].a = alpha[i];
                    put(x0 + (i & 3), y0 + (i >> 2), colours[i]);
                }
                break;
            }
            case 59:                              // DXT5A
            {
                uint8_t value[16];
                DecodeAlphaBlock(block, value);
                for (int i = 0; i < 16; i++)
                    put(x0 + (i & 3), y0 + (i >> 2),
                        Rgba{ value[i], value[i], value[i], 255 });
                break;
            }
            case 6: case 14: case 50:             // 8_8_8_8
                put(x0, y0, Rgba{ block[2], block[1], block[0], block[3] });
                break;
            case 10:                              // 8_8
                put(x0, y0, Rgba{ block[0], block[1], 0, 255 });
                break;
            case 2: case 8: case 9:               // 8
                put(x0, y0, Rgba{ block[0], block[0], block[0], 255 });
                break;
            default:
                return false;
            }
        }
    }
    return true;
}
