#include "bc_decoder.h"
#include <vulkan/vulkan.h>
#include <algorithm>
#include <cstring>

namespace vk::bc
{
    bool IsBCFormat(uint32_t xenosFormat)
    {
        switch (xenosFormat)
        {
        case 18: case 51: // BC1 (DXT1)
        case 19: case 52: // BC2 (DXT2_3)
        case 20: case 53: // BC3 (DXT4_5)
        case 49:          // BC5 (DXN)
        case 59:          // BC4 (DXT5A)
            return true;
        default:
            return false;
        }
    }

    namespace
    {
        inline void DecodeBC1Block(const uint8_t* block, uint8_t outRgba[16][4], bool forceFourColor = false)
        {
            const uint16_t c0 = block[0] | (uint16_t(block[1]) << 8);
            const uint16_t c1 = block[2] | (uint16_t(block[3]) << 8);
            const uint32_t bits = block[4] | (uint32_t(block[5]) << 8) |
                                  (uint32_t(block[6]) << 16) | (uint32_t(block[7]) << 24);

            const uint8_t r0 = ((c0 >> 11) & 0x1F) * 255 / 31;
            const uint8_t g0 = ((c0 >> 5) & 0x3F) * 255 / 63;
            const uint8_t b0 = (c0 & 0x1F) * 255 / 31;

            const uint8_t r1 = ((c1 >> 11) & 0x1F) * 255 / 31;
            const uint8_t g1 = ((c1 >> 5) & 0x3F) * 255 / 63;
            const uint8_t b1 = (c1 & 0x1F) * 255 / 31;

            uint8_t colors[4][4];
            colors[0][0] = r0; colors[0][1] = g0; colors[0][2] = b0; colors[0][3] = 255;
            colors[1][0] = r1; colors[1][1] = g1; colors[1][2] = b1; colors[1][3] = 255;

            if (c0 > c1 || forceFourColor)
            {
                colors[2][0] = (2 * r0 + r1) / 3;
                colors[2][1] = (2 * g0 + g1) / 3;
                colors[2][2] = (2 * b0 + b1) / 3;
                colors[2][3] = 255;

                colors[3][0] = (r0 + 2 * r1) / 3;
                colors[3][1] = (g0 + 2 * g1) / 3;
                colors[3][2] = (b0 + 2 * b1) / 3;
                colors[3][3] = 255;
            }
            else
            {
                colors[2][0] = (r0 + r1) / 2;
                colors[2][1] = (g0 + g1) / 2;
                colors[2][2] = (b0 + b1) / 2;
                colors[2][3] = 255;

                colors[3][0] = 0;
                colors[3][1] = 0;
                colors[3][2] = 0;
                colors[3][3] = 0;
            }

            for (int i = 0; i < 16; i++)
            {
                const uint32_t sel = (bits >> (2 * i)) & 3;
                outRgba[i][0] = colors[sel][0];
                outRgba[i][1] = colors[sel][1];
                outRgba[i][2] = colors[sel][2];
                outRgba[i][3] = colors[sel][3];
            }
        }

        inline void DecodeBC3AlphaBlock(const uint8_t* block, uint8_t outAlpha[16])
        {
            const uint8_t a0 = block[0];
            const uint8_t a1 = block[1];
            const uint64_t bits = uint64_t(block[2]) |
                                  (uint64_t(block[3]) << 8) |
                                  (uint64_t(block[4]) << 16) |
                                  (uint64_t(block[5]) << 24) |
                                  (uint64_t(block[6]) << 32) |
                                  (uint64_t(block[7]) << 40);

            uint8_t alphas[8];
            alphas[0] = a0;
            alphas[1] = a1;
            if (a0 > a1)
            {
                for (int j = 1; j <= 6; j++)
                    alphas[1 + j] = ((7 - j) * a0 + j * a1) / 7;
            }
            else
            {
                for (int j = 1; j <= 4; j++)
                    alphas[1 + j] = ((5 - j) * a0 + j * a1) / 5;
                alphas[6] = 0;
                alphas[7] = 255;
            }

            for (int i = 0; i < 16; i++)
            {
                const uint32_t sel = (bits >> (3 * i)) & 7;
                outAlpha[i] = alphas[sel];
            }
        }
    }

    bool Decompress(const gpu::TextureData& src, uint32_t xenosFormat,
                    gpu::TextureData& dst, int& outVulkanFormat)
    {
        if (!IsBCFormat(xenosFormat)) return false;

        uint32_t bpp = 4;
        switch (xenosFormat)
        {
        case 18: case 51: // BC1
        case 19: case 52: // BC2
        case 20: case 53: // BC3
            outVulkanFormat = VK_FORMAT_R8G8B8A8_UNORM;
            bpp = 4;
            break;
        case 49:          // BC5
            outVulkanFormat = VK_FORMAT_R8G8_UNORM;
            bpp = 2;
            break;
        case 59:          // BC4
            outVulkanFormat = VK_FORMAT_R8_UNORM;
            bpp = 1;
            break;
        default:
            return false;
        }

        dst.ok = true;
        dst.error = nullptr;
        dst.width = src.width;
        dst.height = src.height;
        dst.blocksWide = src.width;
        dst.blocksHigh = src.height;
        dst.bytesPerBlock = bpp;
        dst.layers = src.layers;
        dst.volume = src.volume;
        dst.expanded = true;
        dst.minLevel = src.minLevel;
        dst.levels = src.levels;

        std::vector<uint8_t> flat;

        for (gpu::TextureData::Level& level : dst.levels)
        {
            const size_t at = (flat.size() + 15) & ~size_t(15);
            const uint32_t layerDepth = level.layers * (level.depth ? level.depth : 1);
            const size_t levelSize = size_t(level.width) * level.height * layerDepth * bpp;
            flat.resize(at + levelSize, 0);

            for (uint32_t layer = 0; layer < layerDepth; layer++)
            {
                uint8_t* dstLayer = flat.data() + at + size_t(layer) * level.width * level.height * bpp;

                for (uint32_t by = 0; by < level.blocksHigh; by++)
                {
                    for (uint32_t bx = 0; bx < level.blocksWide; bx++)
                    {
                        const size_t blockIdx = (size_t(layer) * level.blocksHigh + by) * level.blocksWide + bx;
                        const uint8_t* block = src.bytes.data() + level.offset + blockIdx * src.bytesPerBlock;

                        if (xenosFormat == 18 || xenosFormat == 51) // BC1
                        {
                            uint8_t rgba[16][4];
                            DecodeBC1Block(block, rgba, false);
                            for (int i = 0; i < 16; i++)
                            {
                                const uint32_t x = (bx << 2) + (i & 3);
                                const uint32_t y = (by << 2) + (i >> 2);
                                if (x >= level.width || y >= level.height) continue;
                                const size_t pixelOffset = (y * level.width + x) * 4;
                                std::memcpy(dstLayer + pixelOffset, rgba[i], 4);
                            }
                        }
                        else if (xenosFormat == 19 || xenosFormat == 52) // BC2
                        {
                            uint8_t rgba[16][4];
                            DecodeBC1Block(block + 8, rgba, true);
                            for (int i = 0; i < 16; i++)
                            {
                                const uint8_t nibble = (block[i / 2] >> ((i & 1) * 4)) & 0xF;
                                rgba[i][3] = uint8_t(nibble * 17);
                                const uint32_t x = (bx << 2) + (i & 3);
                                const uint32_t y = (by << 2) + (i >> 2);
                                if (x >= level.width || y >= level.height) continue;
                                const size_t pixelOffset = (y * level.width + x) * 4;
                                std::memcpy(dstLayer + pixelOffset, rgba[i], 4);
                            }
                        }
                        else if (xenosFormat == 20 || xenosFormat == 53) // BC3
                        {
                            uint8_t alpha[16];
                            DecodeBC3AlphaBlock(block, alpha);
                            uint8_t rgba[16][4];
                            DecodeBC1Block(block + 8, rgba, true);
                            for (int i = 0; i < 16; i++)
                            {
                                rgba[i][3] = alpha[i];
                                const uint32_t x = (bx << 2) + (i & 3);
                                const uint32_t y = (by << 2) + (i >> 2);
                                if (x >= level.width || y >= level.height) continue;
                                const size_t pixelOffset = (y * level.width + x) * 4;
                                std::memcpy(dstLayer + pixelOffset, rgba[i], 4);
                            }
                        }
                        else if (xenosFormat == 59) // BC4 (DXT5A) -> R8
                        {
                            uint8_t r[16];
                            DecodeBC3AlphaBlock(block, r);
                            for (int i = 0; i < 16; i++)
                            {
                                const uint32_t x = (bx << 2) + (i & 3);
                                const uint32_t y = (by << 2) + (i >> 2);
                                if (x >= level.width || y >= level.height) continue;
                                const size_t pixelOffset = y * level.width + x;
                                dstLayer[pixelOffset] = r[i];
                            }
                        }
                        else if (xenosFormat == 49) // BC5 (DXN) -> RG8
                        {
                            uint8_t r[16];
                            uint8_t g[16];
                            DecodeBC3AlphaBlock(block, r);
                            DecodeBC3AlphaBlock(block + 8, g);
                            for (int i = 0; i < 16; i++)
                            {
                                const uint32_t x = (bx << 2) + (i & 3);
                                const uint32_t y = (by << 2) + (i >> 2);
                                if (x >= level.width || y >= level.height) continue;
                                const size_t pixelOffset = (y * level.width + x) * 2;
                                dstLayer[pixelOffset + 0] = r[i];
                                dstLayer[pixelOffset + 1] = g[i];
                            }
                        }
                    }
                }
            }

            level.offset = at;
            level.size = levelSize;
            level.blocksWide = level.width;
            level.blocksHigh = level.height;
        }

        dst.bytes = std::move(flat);
        return true;
    }
}
