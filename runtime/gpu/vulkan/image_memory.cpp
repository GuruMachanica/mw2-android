// See image_memory.h.
#include "image_memory.h"

#ifdef MW2_HAVE_VULKAN

#include <iterator>
#include <map>
#include <vector>

namespace
{
    using namespace vk::imagememory;

    struct Block
    {
        VkDeviceMemory memory = VK_NULL_HANDLE;
        uint32_t type = 0;
        VkDeviceSize used = 0;
        // The free ranges by offset, neighbours merged, so a block nothing is
        // left on is one range again.
        std::map<VkDeviceSize, VkDeviceSize> free;
    };

    std::vector<Block> g_blocks;   // a freed block's entry is kept, empty, and reused
    uint32_t g_last = 0;           // the block the last range came from
    Totals g_totals;

    // The first free range of the block that holds `size` at `alignment`.
    bool Carve(Block& block, VkDeviceSize size, VkDeviceSize alignment, VkDeviceSize& offset)
    {
        for (auto range = block.free.begin(); range != block.free.end(); ++range)
        {
            const VkDeviceSize start = range->first, end = start + range->second;
            const VkDeviceSize at = (start + alignment - 1) / alignment * alignment;
            if (at + size > end) continue;
            block.free.erase(range);
            if (at > start) block.free[start] = at - start;
            if (at + size < end) block.free[at + size] = end - (at + size);
            block.used += size;
            offset = at;
            return true;
        }
        return false;
    }
}

Range vk::imagememory::Allocate(VkDevice device, const VkMemoryRequirements& needs, uint32_t type)
{
    Range range;
    range.size = needs.size;
    const VkDeviceSize alignment = needs.alignment ? needs.alignment : 1;
    if (needs.size > kBlockBytes / 4)
    {
        VkMemoryAllocateInfo allocate{ VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
        allocate.allocationSize = needs.size;
        allocate.memoryTypeIndex = type;
        if (vkAllocateMemory(device, &allocate, nullptr, &range.memory) != VK_SUCCESS)
            return Range{};
        g_totals.alone++;
        g_totals.aloneBytes += needs.size;
        return range;
    }

    const uint32_t count = uint32_t(g_blocks.size());
    for (uint32_t n = 0; n < count; n++)
    {
        const uint32_t index = (g_last + n) % count;
        Block& block = g_blocks[index];
        if (!block.memory || block.type != type || kBlockBytes - block.used < needs.size) continue;
        if (!Carve(block, needs.size, alignment, range.offset)) continue;
        range.memory = block.memory;
        range.block = g_last = index;
        g_totals.usedBytes += needs.size;
        return range;
    }

    uint32_t index = 0;
    while (index < count && g_blocks[index].memory) index++;
    if (index == count) g_blocks.emplace_back();
    Block& block = g_blocks[index];
    VkMemoryAllocateInfo allocate{ VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
    allocate.allocationSize = kBlockBytes;
    allocate.memoryTypeIndex = type;
    if (vkAllocateMemory(device, &allocate, nullptr, &block.memory) != VK_SUCCESS)
    {
        block = Block{};
        return Range{};
    }
    block.type = type;
    block.used = 0;
    block.free.clear();
    block.free[0] = kBlockBytes;
    g_totals.blocks++;
    g_totals.blockBytes += kBlockBytes;
    Carve(block, needs.size, alignment, range.offset);
    range.memory = block.memory;
    range.block = g_last = index;
    g_totals.usedBytes += needs.size;
    return range;
}

void vk::imagememory::Free(VkDevice device, Range& range)
{
    if (!range) return;
    if (range.block == UINT32_MAX)
    {
        vkFreeMemory(device, range.memory, nullptr);
        g_totals.alone--;
        g_totals.aloneBytes -= range.size;
        range = Range{};
        return;
    }
    Block& block = g_blocks[range.block];
    VkDeviceSize start = range.offset, size = range.size;
    auto next = block.free.lower_bound(start);
    if (next != block.free.begin())
    {
        auto before = std::prev(next);
        if (before->first + before->second == start)
        {
            start = before->first;
            size += before->second;
            block.free.erase(before);
        }
    }
    if (next != block.free.end() && start + size == next->first)
    {
        size += next->second;
        block.free.erase(next);
    }
    block.free[start] = size;
    block.used -= range.size;
    g_totals.usedBytes -= range.size;
    range = Range{};

    // An empty block goes back to the device when another of its type has
    // room for what comes next, so a level's worth of blocks is not kept for
    // the menu.
    if (block.used) return;
    for (const Block& other : g_blocks)
        if (&other != &block && other.memory && other.type == block.type &&
            kBlockBytes - other.used >= kBlockBytes / 4)
        {
            vkFreeMemory(device, block.memory, nullptr);
            block = Block{};
            g_totals.blocks--;
            g_totals.blockBytes -= kBlockBytes;
            return;
        }
}

void vk::imagememory::Shutdown(VkDevice device)
{
    for (Block& block : g_blocks)
        if (block.memory) vkFreeMemory(device, block.memory, nullptr);
    g_blocks.clear();
    g_last = 0;
    g_totals = Totals{};
}

vk::imagememory::Totals vk::imagememory::Held() { return g_totals; }

#endif  // MW2_HAVE_VULKAN
