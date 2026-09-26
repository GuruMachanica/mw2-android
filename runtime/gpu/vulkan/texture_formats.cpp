#include "texture_formats.h"

#ifndef MW2_HAVE_VULKAN
int vk::formats::VulkanFormatFor(uint32_t) { return 0; }
int vk::formats::SrgbFormatFor(int) { return 0; }
const char* vk::formats::VulkanFormatName(int) { return "unsupported"; }
uint32_t vk::formats::HostSwizzleFor(uint32_t) { return 0x688; }
uint32_t vk::formats::ComposeSwizzle(uint32_t guest, uint32_t) { return guest; }
#else

#include <vulkan/vulkan.h>

int vk::formats::VulkanFormatFor(uint32_t format)
{
    switch (format)
    {
    case 2:  case 8: case 9:  return VK_FORMAT_R8_UNORM;              // 8, 8_A, 8_B
    case 4:                   return VK_FORMAT_R5G6B5_UNORM_PACK16;   // 5_6_5
    case 6:  case 14: case 50: return VK_FORMAT_R8G8B8A8_UNORM;       // 8_8_8_8
    case 7:  case 54:         return VK_FORMAT_A2B10G10R10_UNORM_PACK32;
    case 10:                  return VK_FORMAT_R8G8_UNORM;            // 8_8
    case 15:                  return VK_FORMAT_R4G4B4A4_UNORM_PACK16;
    case 18: case 51:         return VK_FORMAT_BC1_RGBA_UNORM_BLOCK;  // DXT1
    case 19: case 52:         return VK_FORMAT_BC2_UNORM_BLOCK;       // DXT2_3
    case 20: case 53:         return VK_FORMAT_BC3_UNORM_BLOCK;       // DXT4_5
    case 24:                  return VK_FORMAT_R16_UNORM;
    case 25:                  return VK_FORMAT_R16G16_UNORM;
    case 26:                  return VK_FORMAT_R16G16B16A16_UNORM;
    case 30:                  return VK_FORMAT_R16_SFLOAT;
    case 31:                  return VK_FORMAT_R16G16_SFLOAT;
    case 32:                  return VK_FORMAT_R16G16B16A16_SFLOAT;
    case 36:                  return VK_FORMAT_R32_SFLOAT;
    case 37:                  return VK_FORMAT_R32G32_SFLOAT;
    case 38:                  return VK_FORMAT_R32G32B32A32_SFLOAT;
    case 49:                  return VK_FORMAT_BC5_UNORM_BLOCK;       // DXN
    // DXT3A is unpacked to one byte a texel by ReadTexture; only DXT5A is BC4.
    case 58:                  return VK_FORMAT_R8_UNORM;
    case 59:                  return VK_FORMAT_BC4_UNORM_BLOCK;       // DXT5A
    // DXT3A_AS_1_1_1_1 (61) is explicit four-bit values like DXT3A, each read
    // as four one-bit channels; not BC4, and not used by MW2.
    // CTX1 (60) stores two 8-bit channels the way DXN stores one pair, but not in
    // a layout any BC format matches; it would have to be expanded first.
    default:                  return VK_FORMAT_UNDEFINED;
    }
}

uint32_t vk::formats::HostSwizzleFor(uint32_t format)
{
    // Three bits a component, low component first: 0 R, 1 G, 2 B, 3 A.
    constexpr uint32_t kRRRR = 0u | (0u << 3) | (0u << 6) | (0u << 9);
    constexpr uint32_t kRGGG = 0u | (1u << 3) | (1u << 6) | (1u << 9);
    constexpr uint32_t kRGBB = 0u | (1u << 3) | (2u << 6) | (2u << 9);
    constexpr uint32_t kRGBA = 0u | (1u << 3) | (2u << 6) | (3u << 9);

    switch (format)
    {
    // One channel, answered in all four.
    case 0:  case 1:  case 2:  case 8:  case 9:  case 22: case 23: case 24:
    case 27: case 30: case 33: case 36: case 39: case 41: case 43: case 44:
    case 46: case 47:
        return kRRRR;
    // Two, the second answering blue and alpha as well.
    case 10: case 13: case 25: case 28: case 31: case 34: case 37: case 40:
    case 42: case 45: case 48: case 60:
        return kRGGG;
    // DXN is a pair of channels in a host BC5, and the title reads its Y from
    // alpha -- a flat host one there points every normal map's normal at the
    // camera, which puts the sun behind every surface it lights.
    case 49:
        return kRGGG;
    // Three, the third answering alpha.
    case 4:  case 11: case 12: case 16: case 17: case 55: case 56: case 57:
        return kRGBB;
    // DXT3A and DXT5A are a single channel however they are unpacked.
    case 58: case 59:
        return kRRRR;
    default:
        return kRGBA;
    }
}

uint32_t vk::formats::ComposeSwizzle(uint32_t guest, uint32_t hostFormat)
{
    uint32_t out = 0;
    for (uint32_t i = 0; i < 4; i++)
    {
        const uint32_t want = (guest >> (3 * i)) & 7;
        // 4 and 5 are the literals zero and one, and name no channel to look up;
        // 6 and 7 are not defined, and are folded onto them rather than handed
        // to a driver.
        const uint32_t got = want >= 4 ? (want & 5) : ((hostFormat >> (3 * want)) & 7);
        out |= got << (3 * i);
    }
    return out;
}

int vk::formats::SrgbFormatFor(int format)
{
    // Xenos gamma is a piecewise curve rather than sRGB exactly, but the two
    // agree to within a code value over the range that matters, and a view in
    // the sRGB format costs nothing where a shader would cost a fetch.
    switch (format)
    {
    case VK_FORMAT_R8G8B8A8_UNORM:       return VK_FORMAT_R8G8B8A8_SRGB;
    case VK_FORMAT_BC1_RGBA_UNORM_BLOCK: return VK_FORMAT_BC1_RGBA_SRGB_BLOCK;
    case VK_FORMAT_BC2_UNORM_BLOCK:      return VK_FORMAT_BC2_SRGB_BLOCK;
    case VK_FORMAT_BC3_UNORM_BLOCK:      return VK_FORMAT_BC3_SRGB_BLOCK;
    default:                             return VK_FORMAT_UNDEFINED;
    }
}

const char* vk::formats::VulkanFormatName(int format)
{
    switch (format)
    {
    case VK_FORMAT_R8_UNORM:                 return "R8";
    case VK_FORMAT_R8G8_UNORM:               return "R8G8";
    case VK_FORMAT_R8G8B8A8_UNORM:           return "R8G8B8A8";
    case VK_FORMAT_R5G6B5_UNORM_PACK16:      return "R5G6B5";
    case VK_FORMAT_R4G4B4A4_UNORM_PACK16:    return "R4G4B4A4";
    case VK_FORMAT_A2B10G10R10_UNORM_PACK32: return "A2B10G10R10";
    case VK_FORMAT_R16_UNORM:                return "R16";
    case VK_FORMAT_R16G16_UNORM:             return "R16G16";
    case VK_FORMAT_R16G16B16A16_UNORM:       return "R16G16B16A16";
    case VK_FORMAT_R16_SFLOAT:               return "R16F";
    case VK_FORMAT_R16G16_SFLOAT:            return "R16G16F";
    case VK_FORMAT_R16G16B16A16_SFLOAT:      return "R16G16B16A16F";
    case VK_FORMAT_R32_SFLOAT:               return "R32F";
    case VK_FORMAT_R32G32_SFLOAT:            return "R32G32F";
    case VK_FORMAT_R32G32B32A32_SFLOAT:      return "R32G32B32A32F";
    case VK_FORMAT_BC1_RGBA_UNORM_BLOCK:     return "BC1";
    case VK_FORMAT_BC2_UNORM_BLOCK:          return "BC2";
    case VK_FORMAT_BC3_UNORM_BLOCK:          return "BC3";
    case VK_FORMAT_BC4_UNORM_BLOCK:          return "BC4";
    case VK_FORMAT_BC5_UNORM_BLOCK:          return "BC5";
    default:                                 return "unsupported";
    }
}

#endif  // MW2_HAVE_VULKAN
