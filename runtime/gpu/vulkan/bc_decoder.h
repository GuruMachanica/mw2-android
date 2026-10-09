#pragma once

#include "gpu/texture.h"
#include <cstdint>

namespace vk::bc
{
    // Whether this Xenos texture format is a Block-Compressed format (BC1..BC5).
    bool IsBCFormat(uint32_t xenosFormat);

    // Decompress a BC texture into uncompressed formats (RGBA8, R8, RG8).
    // Returns true on success and updates outVulkanFormat to the uncompressed VkFormat.
    bool Decompress(const gpu::TextureData& src, uint32_t xenosFormat,
                    gpu::TextureData& dst, int& outVulkanFormat);
}
