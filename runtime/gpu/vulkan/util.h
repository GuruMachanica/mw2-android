#pragma once
// Small Vulkan helpers the renderer, the texture cache, the presenter and the
// display table all need.
#include <cstdint>
#include <vulkan/vulkan.h>

namespace vk::util
{
    // The first memory type `allowed` permits that has every property in `want`.
    inline uint32_t FindMemory(const VkPhysicalDeviceMemoryProperties& memory, uint32_t allowed,
                               VkMemoryPropertyFlags want)
    {
        for (uint32_t i = 0; i < memory.memoryTypeCount; i++)
            if ((allowed & (1u << i)) && (memory.memoryTypes[i].propertyFlags & want) == want)
                return i;
        return UINT32_MAX;
    }

    // A layout transition of the first mip level, over every array layer.
    inline void Barrier(VkCommandBuffer cmd, VkImage image, VkImageAspectFlags aspect,
                        VkImageLayout from, VkImageLayout to,
                        VkAccessFlags sourceAccess, VkAccessFlags destinationAccess,
                        VkPipelineStageFlags sourceStage, VkPipelineStageFlags destinationStage)
    {
        VkImageMemoryBarrier barrier{ VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER };
        barrier.srcAccessMask = sourceAccess;
        barrier.dstAccessMask = destinationAccess;
        barrier.oldLayout = from;
        barrier.newLayout = to;
        barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.image = image;
        barrier.subresourceRange = { aspect, 0, VK_REMAINING_MIP_LEVELS, 0, VK_REMAINING_ARRAY_LAYERS };
        vkCmdPipelineBarrier(cmd, sourceStage, destinationStage, 0, 0, nullptr, 0, nullptr,
                             1, &barrier);
    }
}
