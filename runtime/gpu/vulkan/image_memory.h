#pragma once
#include <cstdint>
#include <vulkan/vulkan.h>

// Memory for the texture cache's images, carved out of large blocks.
//
// A level streams tens of thousands of textures through the cache, most of
// them a few kilobytes. An allocation of its own for each is what a driver is
// worst at: freeing one took over half a millisecond here with forty thousand
// live, and some drivers allow only 4096 at all. A block is one allocation of
// kBlockBytes of one memory type, and a texture gets a range of it, so
// releasing a texture is bookkeeping and never a call into the driver. What
// does not fit a quarter of a block gets an allocation of its own.
//
// One thread at a time: the ring consumer, which is the only one that makes
// and releases textures.
namespace vk::imagememory
{
    constexpr VkDeviceSize kBlockBytes = 64ull << 20;

    struct Range
    {
        VkDeviceMemory memory = VK_NULL_HANDLE;
        VkDeviceSize offset = 0, size = 0;
        uint32_t block = UINT32_MAX;   // which block; UINT32_MAX for memory of its own
        explicit operator bool() const { return memory != VK_NULL_HANDLE; }
    };

    // A range that meets `needs` in memory of type `type`; empty when the
    // device has none left.
    Range Allocate(VkDevice device, const VkMemoryRequirements& needs, uint32_t type);
    void Free(VkDevice device, Range& range);
    // Every block, with the device idle and every image on them destroyed.
    void Shutdown(VkDevice device);

    struct Totals { uint64_t blocks = 0, blockBytes = 0, usedBytes = 0, alone = 0, aloneBytes = 0; };
    Totals Held();
}
