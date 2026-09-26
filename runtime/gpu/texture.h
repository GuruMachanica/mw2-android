#pragma once
#include <cstdint>
#include <vector>

// Xenos texture fetch constants: six dwords per slot, thirty-two slots, in the
// register file at 0x4800. A shader's `tfetch` names a slot; everything about
// the texture comes from here rather than from the instruction.
//
// The same six dwords are also read as three vertex fetch constants -- the two
// windows are one window, and the low two bits say which a slot holds.
//
// Field layout follows Xenia's `xe_gpu_texture_fetch_t` (BSD-3).
namespace gpu
{
    enum class TextureType : uint32_t
    {
        InvalidTexture = 0, InvalidVertex = 1, Texture = 2, Vertex = 3,
    };

    enum class TextureDimension : uint32_t { D1 = 0, D2OrStacked = 1, D3 = 2, Cube = 3 };

    // Guest memory is big-endian and the host is not, so every texture needs one
    // of these applied on upload.
    enum class TextureEndian : uint32_t { None = 0, k8in16 = 1, k8in32 = 2, k16in32 = 3 };

    // A shader's `tfetch` can override the filters per instruction, but the clamp
    // modes and the border colour exist only here.
    enum class TextureClamp : uint32_t
    {
        Repeat = 0, MirroredRepeat = 1, ClampToEdge = 2, MirrorClampToEdge = 3,
        ClampToHalfway = 4, MirrorClampToHalfway = 5,
        ClampToBorder = 6, MirrorClampToBorder = 7,
    };

    // `BaseMap` is a mip filter only: sample the base level and do not filter
    // between levels. `UseFetchConst` should not appear in a fetch constant.
    enum class TextureFilter : uint32_t { Point = 0, Linear = 1, BaseMap = 2, UseFetchConst = 3 };

    // TEX_FORMAT_COMP on the console, two bits per component.
    enum class TextureSign : uint32_t
    {
        Unsigned = 0,
        Signed = 1,       // two's complement
        Biased = 2,       // 2 * value - 1
        Gamma = 3,        // linearised when sampled
    };

    struct TextureFetch
    {
        uint32_t d[6]{};

        static uint32_t Bits(uint32_t w, uint32_t lo, uint32_t count)
        {
            return (w >> lo) & ((count >= 32) ? 0xFFFFFFFFu : ((1u << count) - 1u));
        }

        TextureType Type() const { return TextureType(Bits(d[0], 0, 2)); }
        bool IsTexture() const   { return Type() == TextureType::Texture; }

        // TEX_FORMAT_COMP, one per component. `Gamma` is the interesting one:
        // the sampler linearises the stored value on the way into the shader,
        // which is how a title keeps a gamma-encoded surface -- an EDRAM
        // surface named 8_8_8_8_GAMMA, most often -- and still reads linear
        // values back out of it.
        TextureSign Sign(uint32_t component) const
        {
            return TextureSign(Bits(d[0], 2 + component * 2, 2));
        }
        // Colour only: the alpha channel of a gamma surface stays linear.
        bool Linearises() const
        {
            return Sign(0) == TextureSign::Gamma || Sign(1) == TextureSign::Gamma ||
                   Sign(2) == TextureSign::Gamma;
        }

        // Row pitch in pixels >> 5, and whether the texture is stored tiled.
        uint32_t Pitch() const   { return Bits(d[0], 22, 9) << 5; }
        bool Tiled() const       { return Bits(d[0], 31, 1) != 0; }

        uint32_t Format() const  { return Bits(d[1], 0, 6); }
        TextureEndian Endian() const { return TextureEndian(Bits(d[1], 6, 2)); }
        bool Stacked() const     { return Bits(d[1], 10, 1) != 0; }
        uint32_t BaseAddress() const { return Bits(d[1], 12, 20) << 12; }

        // Sizes are stored with one subtracted from each component.
        uint32_t Width() const
        {
            switch (Dimension())
            {
            case TextureDimension::D1: return Bits(d[2], 0, 24) + 1;
            case TextureDimension::D3: return Bits(d[2], 0, 11) + 1;
            default:                   return Bits(d[2], 0, 13) + 1;
            }
        }
        uint32_t Height() const
        {
            switch (Dimension())
            {
            case TextureDimension::D1: return 1;
            case TextureDimension::D3: return Bits(d[2], 11, 11) + 1;
            default:                   return Bits(d[2], 13, 13) + 1;
            }
        }
        uint32_t Depth() const
        {
            switch (Dimension())
            {
            case TextureDimension::D3: return Bits(d[2], 22, 10) + 1;
            case TextureDimension::Cube: return 6;
            default: return Stacked() ? Bits(d[2], 26, 6) + 1 : 1;
            }
        }

        TextureClamp ClampX() const { return TextureClamp(Bits(d[0], 10, 3)); }
        TextureClamp ClampY() const { return TextureClamp(Bits(d[0], 13, 3)); }
        TextureClamp ClampZ() const { return TextureClamp(Bits(d[0], 16, 3)); }

        uint32_t Swizzle() const     { return Bits(d[3], 1, 12); }
        TextureFilter MagFilter() const { return TextureFilter(Bits(d[3], 19, 2)); }
        TextureFilter MinFilter() const { return TextureFilter(Bits(d[3], 21, 2)); }
        TextureFilter MipFilter() const { return TextureFilter(Bits(d[3], 23, 2)); }
        uint32_t Anisotropy() const   { return Bits(d[3], 25, 3); }
        uint32_t BorderColour() const { return Bits(d[5], 0, 2); }
        uint32_t MinMipLevel() const { return Bits(d[4], 2, 4); }
        uint32_t MaxMipLevel() const { return Bits(d[4], 6, 4); }

        TextureDimension Dimension() const { return TextureDimension(Bits(d[5], 9, 2)); }
        bool PackedMips() const  { return Bits(d[5], 11, 1) != 0; }
        uint32_t MipAddress() const { return Bits(d[5], 12, 20) << 12; }
    };

    // nullptr for one the hardware does not define, so an impossible value
    // reports as impossible rather than as a plausible format.
    const char* TextureFormatName(uint32_t format);

    // A block format stores `blockWidth * blockHeight` pixels in `bitsPerBlock`.
    struct TextureFormatInfo
    {
        uint32_t bitsPerBlock = 0;
        uint32_t blockWidth = 1;
        uint32_t blockHeight = 1;
        bool known = false;
    };
    TextureFormatInfo TextureFormatOf(uint32_t format);

    // Xenos stores textures in 32x32-block macro tiles with the address bits
    // shuffled across banks and pipes; this is Xenia's `Tiled2D` (BSD-3).
    int32_t TiledOffset2D(int32_t x, int32_t y, uint32_t pitchAlignedBlocks,
                          uint32_t bytesPerBlockLog2);

    // A volume's macro tile is 32x16x4 blocks and the slice index takes part in
    // the address, so a volume is not a stack of 2D-tiled slices; this is
    // Xenia's `Tiled3D` (BSD-3).
    int64_t TiledOffset3D(int32_t x, int32_t y, int32_t z, uint32_t pitchAlignedBlocks,
                          uint32_t heightAlignedBlocks, uint32_t bytesPerBlockLog2);

    // Where a texture's levels are in guest memory, and which of them the
    // sampler may use. Level 0 is at the base address; levels 1 and up follow
    // one another from the mip address. Either range can be absent: no mip
    // address is no mips, and a texture whose smallest level is above 0 may
    // leave the base out. Follows Xenia's GetSubresourcesFromFetchConstant and
    // GetGuestTextureLayout (BSD-3).
    struct TextureExtents
    {
        uint32_t baseAddress = 0, baseBytes = 0;   // physical; zero when not read
        uint32_t mipAddress = 0, mipBytes = 0;
        uint32_t minLevel = 0, maxLevel = 0;
    };
    TextureExtents ExtentsOf(const TextureFetch& fetch);

    // Untiled if it was tiled, byte-swapped either way. The result is still in
    // the guest's block format -- DXT stays DXT -- because that is what a Vulkan
    // driver wants to be handed.
    struct TextureData
    {
        bool ok = false;
        const char* error = nullptr;
        uint32_t width = 0, height = 0;      // the base level's, in pixels
        uint32_t blocksWide = 0, blocksHigh = 0;
        uint32_t bytesPerBlock = 0;
        // A cube map is six faces of the same shape, one after another; a volume
        // is its slices the same way. Anything else is one, so a reader that
        // ignores these still reads it right. `volume` says which of the two the
        // slices are, because a cube is an array and a volume is not.
        uint32_t layers = 1;
        bool volume = false;
        // DXT3A has no host equivalent and is unpacked here into one byte a
        // texel, so the block size the format table gives no longer describes
        // what `bytes` holds.
        bool expanded = false;
        // Each level's place in `bytes`: its layers (a volume's own depth at
        // that level) of blocksHigh rows of blocksWide blocks. Level 0 first,
        // then each smaller one, every one starting on a sixteen-byte boundary.
        struct Level
        {
            uint32_t width = 0, height = 0, depth = 1;
            uint32_t blocksWide = 0, blocksHigh = 0, layers = 1;
            size_t offset = 0, size = 0;
        };
        std::vector<Level> levels;
        // The lowest level the sampler may use: above zero when the fetch
        // constant says so, or when the base was not read at all.
        uint32_t minLevel = 0;
        std::vector<uint8_t> bytes;
    };
    // `base` and `mips` are the host addresses of the two ranges ExtentsOf
    // names; the fetch constant holds *physical* addresses, which are not
    // addresses in the runtime's flat space, so resolving them is the caller's
    // job (`kernel::FromPhysical`). A null `mips` reads the base level alone,
    // and a null `base` leaves level 0 zero.
    TextureData ReadTexture(const TextureFetch& fetch, const uint8_t* base,
                            const uint8_t* mips = nullptr);

    // Not the upload path -- a driver takes the block formats directly -- but the
    // only way to confirm by eye that untiling, endianness and addressing are all
    // right at once. One level, its layers one under another.
    bool DecodeToRgba(const TextureData& data, uint32_t format,
                      std::vector<uint8_t>& rgba, uint32_t level = 0);
}
