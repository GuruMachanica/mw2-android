// Offline driver for the texture upload path.
//
//     upload-texture [--format=<n>] [--size=<w>x<h>]
//
// The upload path hands the driver the guest's own block bytes, so a correct
// round trip -- stage into a VkImage, copy it back out -- returns exactly what
// went in. That makes it testable without the game, and without a picture: any
// difference is a defect in the staging, the copy region, or the format choice.
//
// It runs over every format the runtime claims a Vulkan equivalent for, not
// only the four the menu uses, because the copy region arithmetic is where the
// block formats differ from the rest and the menu exercises half of it.
#include "../runtime/gpu/texture.h"
#include "../runtime/gpu/vulkan/pipeline.h"
#include "../runtime/gpu/vulkan/texture_formats.h"
#include "../runtime/gpu/vulkan/texture_cache.h"
#include "../runtime/stutters.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

namespace
{
    // Deterministic filler: a comparison that fails has to fail the same way
    // twice, and a pattern of zeroes would hide a copy that never happened.
    void Fill(std::vector<uint8_t>& bytes, uint32_t seed)
    {
        uint32_t state = seed * 2654435761u + 1;
        for (uint8_t& b : bytes)
        {
            state = state * 1664525u + 1013904223u;
            b = uint8_t(state >> 24);
        }
    }
}

// The tool links the texture cache without guest memory or the image pool: the
// uploads it makes come from its own buffers, never from a guest address.
namespace guest { uint8_t* Base() { return nullptr; } }
namespace kernel { uint32_t FromPhysical(uint32_t) { return 0; } }
namespace imagepool
{
    void DescribeMovesAround(uint32_t, uint32_t, uint64_t, char* out, size_t bytes)
    {
        if (out && bytes) out[0] = 0;
    }
}
// Nor the write watch, or a renderer to have finished submissions.
namespace gpu::watch
{
    bool Enabled() { return false; }
    uint64_t Track(uint32_t, uint32_t, uint64_t (*)(), uint64_t) { return 0; }
    bool Unwritten(uint32_t, uint32_t, uint64_t) { return false; }
}
namespace vk::renderer { uint64_t CompletedSubmission() { return 0; } }
// Nor a recorder thread with commands queued ahead of an upload.
namespace vk::record { void Drain() {} }
// Nor frames for the stutter detector to time.
namespace stutters
{
    bool On() { return false; }
    void Add(Cost, uint64_t) {}
}

int main(int argc, char** argv)
{
    int only = -1;
    uint32_t width = 64, height = 64;
    for (int i = 1; i < argc; i++)
    {
        if (std::strncmp(argv[i], "--format=", 9) == 0) only = std::atoi(argv[i] + 9);
        else if (std::strncmp(argv[i], "--size=", 7) == 0)
        {
            const char* x = std::strchr(argv[i] + 7, 'x');
            width = uint32_t(std::atoi(argv[i] + 7));
            height = x ? uint32_t(std::atoi(x + 1)) : width;
        }
        else
        {
            std::fprintf(stderr, "usage: upload-texture [--format=<n>] [--size=<w>x<h>]\n");
            return 2;
        }
    }

    if (!vk::textures::Initialise())
    {
        std::fprintf(stderr, "no Vulkan device to upload to\n");
        return 3;
    }
    std::printf("device: %s, %ux%u\n\n", vk::pipeline::DeviceName(), width, height);

    uint32_t tried = 0, matched = 0, skipped = 0, failed = 0;
    for (uint32_t format = 0; format < 64; format++)
    {
        if (only >= 0 && format != uint32_t(only)) continue;
        const char* name = gpu::TextureFormatName(format);
        if (!name) continue;
        if (vk::formats::VulkanFormatFor(format) == 0) { skipped++; continue; }

        const gpu::TextureFormatInfo info = gpu::TextureFormatOf(format);
        if (!info.known || info.bitsPerBlock % 8) { skipped++; continue; }

        gpu::TextureData data;
        data.ok = true;
        data.width = width;
        data.height = height;
        data.blocksWide = (width + info.blockWidth - 1) / info.blockWidth;
        data.blocksHigh = (height + info.blockHeight - 1) / info.blockHeight;
        data.bytesPerBlock = info.bitsPerBlock / 8;
        data.bytes.resize(size_t(data.blocksWide) * data.blocksHigh * data.bytesPerBlock);
        Fill(data.bytes, format + 1);

        tried++;
        const char* error = nullptr;
        const uint64_t id = vk::textures::UploadData(data, format, &error);
        if (id == vk::textures::kNone)
        {
            std::printf("%-20s %-14s upload rejected: %s\n", name,
                        vk::formats::VulkanFormatName(vk::formats::VulkanFormatFor(format)),
                        error ? error : "unknown");
            failed++;
            continue;
        }

        std::vector<uint8_t> back;
        if (!vk::textures::Readback(id, back, &error))
        {
            std::printf("%-20s readback failed: %s\n", name, error ? error : "unknown");
            failed++;
            continue;
        }

        size_t differing = 0;
        for (size_t i = 0; i < data.bytes.size() && i < back.size(); i++)
            differing += (data.bytes[i] != back[i]);
        const bool same = back.size() == data.bytes.size() && differing == 0;
        matched += same;
        failed += !same;
        std::printf("%-20s %-14s %5ux%-5u %7zu bytes  %s\n", name,
                    vk::formats::VulkanFormatName(int(vk::formats::VulkanFormatFor(format))),
                    data.blocksWide, data.blocksHigh, data.bytes.size(),
                    same ? "round trip exact"
                         : (back.size() != data.bytes.size() ? "wrong size back" : "differs"));
        if (!same && back.size() == data.bytes.size())
            std::printf("%-20s   %zu of %zu bytes differ\n", "", differing, data.bytes.size());
    }

    // A descriptor set over the uploads, which is the other half of the path:
    // an image nothing can bind is not uploaded, it is leaked.
    uint64_t slots[vk::textures::kSlots]{};
    for (uint32_t i = 0; i < vk::textures::kSlots && i < tried; i++) slots[i] = i + 1;
    const bool bound = vk::textures::DescriptorSet(slots) != nullptr;

    std::printf("\n%u formats: %u exact, %u wrong, %u with no Vulkan equivalent\n",
                tried, matched, failed, skipped);
    std::printf("descriptor set over %u slots: %s\n", vk::textures::kSlots,
                bound ? "written" : "FAILED");
    vk::textures::Report();
    vk::textures::Shutdown();
    vk::pipeline::Shutdown();
    return (failed || !bound) ? 1 : 0;
}
