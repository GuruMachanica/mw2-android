#pragma once
#include <cstdint>

// Xenos texture formats as Vulkan ones. Ints rather than VkFormat, so this
// header does not drag in the Vulkan headers.
namespace vk::formats
{
    // Or VK_FORMAT_UNDEFINED (0) for one with no direct equivalent. The
    // block-compressed formats go across untouched -- BC1/2/3 are DXT1/2-3/4-5
    // byte for byte, BC4 is DXT5A -- so for those the untiler's output is the
    // upload.
    int VulkanFormatFor(uint32_t xenosTextureFormat);
    // The sRGB counterpart of a colour format, for a fetch constant that asks the
    // sampler to linearise. VK_FORMAT_UNDEFINED when there is none, which is the
    // answer for every single-channel and data format.
    int SrgbFormatFor(int vulkanFormat);
    const char* VulkanFormatName(int format);
    // Where a guest format's channels land once it has been given to a host
    // format with more of them. A one-channel guest texture reads as its one
    // value in all four components, and a two-channel one repeats its second --
    // so a normal map stored as DXN answers .w with its Y, where a host BC5
    // would answer a constant one. Twelve bits, three to a component, in the
    // fetch constant's own encoding: 0-3 pick a channel, 4 is zero and 5 is one.
    uint32_t HostSwizzleFor(uint32_t xenosTextureFormat);
    // The fetch constant's swizzle reads guest channels; this reads it through
    // the one above, so that what the shader asks for is answered from where the
    // host format actually keeps it.
    uint32_t ComposeSwizzle(uint32_t guestSwizzle, uint32_t hostFormatSwizzle);
}
