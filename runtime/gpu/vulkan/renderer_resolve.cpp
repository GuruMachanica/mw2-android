// Resolves: EDRAM copied out to a texture the title reads back, or the
// finished frame copied out for the window.
#include "renderer_state.h"
#include "display_table.h"
#include "presenter.h"
#include "texture_cache.h"
#include "texture_formats.h"
#include "../texture.h"
#include "../../log.h"

#include <algorithm>
#include <cstdio>

#ifdef MW2_HAVE_VULKAN

namespace vk::renderer::detail
{
    // A resolve is a copy in the command stream and nothing more, so it does
    // not end the submission: a frame is submitted once, when it is presented.
    // Ending one at every resolve spent a frame slot on each -- six a frame --
    // so the three slots held half a frame between them, and the CPU waited for
    // the GPU to draw the world while the GPU waited for the CPU to record the
    // next one. Only a slot whose arena share is half used goes early, so the
    // rest of the frame has room.
    bool SubmitIfFilling()
    {
        return g.arenaUsed <= g.arenaSlotBytes / 2 || Submit();
    }

    // The copy this frame's resolves write and this frame's draws read. The
    // first resolve of a frame moves on to the next one; the rest of the frame
    // -- the second shadow cascade, the draws that sample it -- get that same
    // one back.
    Resolved& ResolveCopyFor(uint32_t destination)
    {
        ResolveRing& ring = g.resolvedTo[destination];
        if (ring.frame != g.frames)
        {
            ring.frame = g.frames;
            ring.newest = (ring.newest + 1) % kFrameSlots;
        }
        return ring.copies[ring.newest];
    }

    bool MakeResolveImage(Resolved& into, uint32_t width, uint32_t height,
                          VkFormat format, bool depth = false, bool exact = false)
    {
        // Grow only within a frame: the second shadow cascade lands inside the
        // surface the first one made, and must not throw the first away.
        //
        // But the first resolve of a frame into this copy (`exact`) sizes it to
        // the surface exactly. The fetch normalises its coordinates over the
        // image, so an image wider than the surface stretches what it holds.
        const bool fits = exact ? into.width == width && into.height == height
                                : into.width >= width && into.height >= height;
        if (into.image && fits && into.format == format && into.depth == depth)
            return true;
        if (!exact && into.image && into.format == format && into.depth == depth)
        {
            width = std::max(width, into.width);
            height = std::max(height, into.height);
        }
        // Rare -- a resolve destination that has to grow -- and both a submitted
        // slot and the buffer being recorded may still name the image being
        // replaced.
        if (into.image) RetireBeforeDestroy();
        // The texture cache has built sets on these views. Its own check -- the
        // view behind an id changed -- misses a replacement that gets the old
        // handle back, and a set on the freed image is a texture read of unbacked
        // memory: the TCP page faults that hung the GPU in play and under capture.
        if (into.image) vk::textures::ForgetSets();
        if (into.view) vkDestroyImageView(g.device, into.view, nullptr);
        if (into.gammaView) vkDestroyImageView(g.device, into.gammaView, nullptr);
        if (into.image) vkDestroyImage(g.device, into.image, nullptr);
        if (into.memory) vkFreeMemory(g.device, into.memory, nullptr);
        into = Resolved{};
        g.resolveImagesMade++;

        VkImageCreateInfo info{ VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO };
        info.imageType = VK_IMAGE_TYPE_2D;
        info.format = format;
        info.extent = { width, height, 1 };
        info.mipLevels = 1;
        info.arrayLayers = 1;
        info.samples = VK_SAMPLE_COUNT_1_BIT;
        info.tiling = VK_IMAGE_TILING_OPTIMAL;
        info.usage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
        info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
        info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        // Two views of one image, so the format has to be allowed to differ from
        // the one the image was made with. The list is what lets a driver keep
        // the compression it would otherwise give up for a mutable image.
        const VkFormat srgb = depth ? VK_FORMAT_UNDEFINED
                                    : VkFormat(vk::formats::SrgbFormatFor(format));
        const VkFormat both[2] = { format, srgb };
        VkImageFormatListCreateInfo list{ VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO };
        list.viewFormatCount = 2;
        list.pViewFormats = both;
        if (srgb != VK_FORMAT_UNDEFINED)
        {
            info.flags |= VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT;
            info.pNext = &list;
        }
        if (vkCreateImage(g.device, &info, nullptr, &into.image) != VK_SUCCESS) return false;

        VkMemoryRequirements needs{};
        vkGetImageMemoryRequirements(g.device, into.image, &needs);
        const uint32_t type = FindMemory(needs.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
        if (type == UINT32_MAX) return false;
        VkMemoryAllocateInfo allocate{ VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
        allocate.allocationSize = needs.size;
        allocate.memoryTypeIndex = type;
        if (vkAllocateMemory(g.device, &allocate, nullptr, &into.memory) != VK_SUCCESS) return false;
        vkBindImageMemory(g.device, into.image, into.memory, 0);

        VkImageViewCreateInfo view{ VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO };
        view.image = into.image;
        view.viewType = VK_IMAGE_VIEW_TYPE_2D;
        view.format = format;
        // Depth only: a view carrying stencil as well cannot be sampled.
        view.subresourceRange = { VkImageAspectFlags(depth ? VK_IMAGE_ASPECT_DEPTH_BIT
                                                           : VK_IMAGE_ASPECT_COLOR_BIT),
                                  0, 1, 0, 1 };
        if (vkCreateImageView(g.device, &view, nullptr, &into.view) != VK_SUCCESS) return false;
        if (srgb != VK_FORMAT_UNDEFINED)
        {
            view.format = srgb;
            if (vkCreateImageView(g.device, &view, nullptr, &into.gammaView) != VK_SUCCESS)
                into.gammaView = VK_NULL_HANDLE;
        }
        into.format = format;
        into.width = width;
        into.height = height;
        into.depth = depth;
        LOGI("renderer: %ux%u image for a %s resolve destination", width, height,
             depth ? "depth" : "colour");
        return true;
    }
}

using namespace vk::renderer::detail;

void vk::renderer::Resolve(const gpu::RegisterFile& r)
{
    Stopwatch watch(g.resolveNanoseconds);
    if (!g.device) return;
    const gpu::CopyControl control{ r[gpu::RB_COPY_CONTROL] };
    VkRect2D rect{};
    ScissorOf(r, rect);
    const uint32_t destination = r[gpu::RB_COPY_DEST_BASE] & ~0xFFFu;
    const gpu::SurfaceInfo surface{ r[gpu::RB_SURFACE_INFO] };
    const gpu::ColorInfo colour{ r[gpu::RB_COLOR_INFO] };
    // The title reads the scene's depth back as an ordinary texture: a soft
    // particle fades where it meets geometry, and one that cannot find the depth
    // does not fade at all. Skipping this resolve is why the sprites are opaque
    // and the frame sits under a white wash.
    if (control.FromDepth())
    {
        const gpu::DepthInfo depthInfo{ r[gpu::RB_DEPTH_INFO] };
        Target* from = FindTarget(DepthKey(depthInfo.BaseTile(), uint32_t(g.depthFormat),
                                           surface.MsaaSamples()));
        if (!from) { Skip("resolve of a depth surface never drawn into"); SubmitIfFilling(); return; }
        if (!g.recording && !BeginFrame()) { Skip("no command buffer"); return; }
        g.resolves++;
        EndPass();

        uint32_t width = std::min(rect.extent.width, from->width - uint32_t(rect.offset.x));
        uint32_t height = std::min(rect.extent.height, from->height - uint32_t(rect.offset.y));

        // The sun shadow map is one 1024x2048 surface holding two cascades, and
        // the title fills it with two resolves: the first to the surface's base,
        // the second to its lower half, four megabytes on, describing itself as
        // a surface of its own. The world's shaders then bind the whole thing,
        // at the first address, as one texture. Keeping an image per resolve
        // address gave that fetch the first cascade alone, stretched over the
        // lookup for both -- every shadow the near cascade casts landed twice as
        // far down the atlas as it should, and the far cascade was never read.
        // So a resolve that lands inside a surface an earlier resolve this frame
        // started is copied into that surface's image, at the row it lands on.
        const gpu::CopyDestPitch destPitch{ r[gpu::RB_COPY_DEST_PITCH] };
        const gpu::CopyDestInfo destInfo{ r[gpu::RB_COPY_DEST_INFO] };
        const uint32_t texelBytes = std::max(1u, gpu::TextureFormatOf(destInfo.Format()).bitsPerBlock / 8);
        const uint32_t rowBytes = destPitch.Pitch() * texelBytes;
        uint32_t surfaceBase = destination, row = 0;
        for (const auto& [base, known] : g.resolveSurfaces)
            if (known.frame == g.frames && base < destination &&
                destination - base < known.bytes && known.rowBytes == rowBytes && rowBytes &&
                (destination - base) % rowBytes == 0)
            {
                surfaceBase = base;
                row = (destination - base) / rowBytes;
                break;
            }
        if (surfaceBase == destination && rowBytes)
            g.resolveSurfaces[destination] = { rowBytes * std::min(destPitch.Height(), 8192u),
                                               rowBytes, g.frames };

        // A resolve lands where its rectangle sits: one that starts 16 rows down
        // the EDRAM surface starts 16 rows down the texture too, as Xenia's
        // copy_dest_coordinate_info has it. The shadow cascades are resolved
        // from the draw scissor rounded down to 8, which moves with the camera;
        // writing them at row 0 moved every shadow the atlas casts by that many
        // texels, and by a different amount as the view turned.
        const uint32_t destX = uint32_t(rect.offset.x);
        const uint32_t destY = row + uint32_t(rect.offset.y);

        Resolved& into = ResolveCopyFor(surfaceBase);
        // Sized for the whole surface, so the lower half has somewhere to go.
        const uint32_t imageWidth = std::max(destX + width, std::min(destPitch.Pitch(), 4096u));
        const uint32_t imageHeight = std::max(destY + height,
                                              std::min(destPitch.Height(), 4096u));
        const bool firstThisFrame = into.writtenFrame != g.frames;
        if (!destination || !width || !height ||
            !MakeResolveImage(into, imageWidth, imageHeight, from->format, true, firstThisFrame))
        {
            Skip("depth resolve destination image");
            SubmitIfFilling();
            return;
        }
        width = std::min(width, into.width > destX ? into.width - destX : 0u);
        height = std::min(height, into.height > destY ? into.height - destY : 0u);
        const bool keep = into.writtenFrame == g.frames;
        into.writtenFrame = g.frames;

        constexpr VkImageAspectFlags kBoth =
            VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT;
        VkImage fromImage = BeginReadingDepth(*from, rect.offset, width, height);
        if (!fromImage) { Skip("depth resolve of a multisampled surface"); SubmitIfFilling(); return; }
        // The second cascade keeps the first: it comes out of the layout the
        // first left it in rather than out of UNDEFINED, which may discard.
        RecordBarrier(into.image, kBoth,
                      keep ? VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL : VK_IMAGE_LAYOUT_UNDEFINED,
                      VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                      0, VK_ACCESS_TRANSFER_WRITE_BIT, kShaderStages, VK_PIPELINE_STAGE_TRANSFER_BIT);

        // A copy rather than a blit: depth cannot be filtered on the way through,
        // and a plain copy asks nothing of the format beyond being transferable.
        VkImageCopy copy{};
        copy.srcSubresource = { kBoth, 0, 0, 1 };
        copy.srcOffset = { rect.offset.x, rect.offset.y, 0 };
        copy.dstSubresource = copy.srcSubresource;
        copy.dstOffset = { int32_t(destX), int32_t(destY), 0 };
        copy.extent = { width, height, 1 };
        const VkImage intoImage = into.image;
        Record([=](VkCommandBuffer command) {
            vkCmdCopyImage(command, fromImage, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                           intoImage, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &copy);
        });

        RecordBarrier(into.image, kBoth,
                      VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                      VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                      VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_SHADER_READ_BIT,
                      VK_PIPELINE_STAGE_TRANSFER_BIT, kShaderStages);
        EndReadingDepth(*from);
        g.depthResolves++;
        ClearAfterResolve(r, control);
        if (!SubmitIfFilling()) Skip("frame submission failed");
        return;
    }

    // The registers name the surface, and the last pass recorded is not always
    // it: the world's is resolved after a later pass has bound its own.
    Target* source = FindTarget({ colour.BaseTile(), surface.Pitch(),
                                  uint32_t(ColourFormatFor(colour.Format())),
                                  surface.MsaaSamples(), false });
    if (!source) { Skip("resolve of a surface never drawn into"); SubmitIfFilling(); return; }

    // A resolve can arrive with nothing recording -- the one before it may have
    // submitted a full arena share. Its surface is still there.
    if (!g.recording && !BeginFrame()) { Skip("no command buffer"); return; }
    g.resolves++;

    EndPass();

    // Only a resolve the size of the display is the frame; presenting any other
    // would put a half-built one on the screen.
    if (rect.extent.width != g.presentWidth || rect.extent.height != g.presentHeight)
    {
        // The image is the destination surface RB_COPY_DEST_PITCH describes, not
        // the rectangle, and the rectangle lands at its own offset in it -- as
        // the depth resolve above does. The depth of field resolves a 256x152
        // rectangle, rounded up to 8 rows, into a 256x150 surface and fetches
        // 256x150; an image the size of the rectangle put two rows of whatever
        // the target held below the picture, the fetch's v = 1 reached them, and
        // their alpha of 1 -- the blur weight -- spread up through every blur
        // pass into a dark bar along the bottom of the screen when aiming down
        // the sights.
        const gpu::CopyDestPitch destPitch{ r[gpu::RB_COPY_DEST_PITCH] };
        const uint32_t destX = uint32_t(rect.offset.x);
        const uint32_t destY = uint32_t(rect.offset.y);
        const uint32_t surfaceWidth = destPitch.Pitch() ? std::min(destPitch.Pitch(), 4096u)
                                                        : destX + rect.extent.width;
        const uint32_t surfaceHeight = destPitch.Height() ? std::min(destPitch.Height(), 4096u)
                                                          : destY + rect.extent.height;
        const auto room = [](uint32_t size, uint32_t at) { return size > at ? size - at : 0u; };
        const uint32_t width = std::min({ rect.extent.width, room(surfaceWidth, destX),
                                          room(source->width, destX) });
        const uint32_t height = std::min({ rect.extent.height, room(surfaceHeight, destY),
                                           room(source->height, destY) });
        Resolved& into = ResolveCopyFor(destination);
        const bool firstThisFrame = into.writtenFrame != g.frames;
        if (!destination || !width || !height ||
            !MakeResolveImage(into, surfaceWidth, surfaceHeight, source->format, false,
                              firstThisFrame))
        {
            Skip("resolve destination image");
            SubmitIfFilling();
            return;
        }
        into.writtenFrame = g.frames;
        VkImage sourceImage = BeginReadingColour(*source, { int32_t(destX), int32_t(destY) },
                                                 width, height);
        if (!sourceImage) { Skip("resolve of a multisampled surface"); SubmitIfFilling(); return; }
        // After the draws that sampled this copy's last contents.
        RecordBarrier(into.image, VK_IMAGE_ASPECT_COLOR_BIT,
                      VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                      0, VK_ACCESS_TRANSFER_WRITE_BIT, kShaderStages, VK_PIPELINE_STAGE_TRANSFER_BIT);

        VkImageBlit copy{};
        copy.srcSubresource = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1 };
        copy.srcOffsets[0] = { int32_t(destX), int32_t(destY), 0 };
        copy.srcOffsets[1] = { int32_t(destX + width), int32_t(destY + height), 1 };
        copy.dstSubresource = copy.srcSubresource;
        copy.dstOffsets[0] = copy.srcOffsets[0];
        copy.dstOffsets[1] = copy.srcOffsets[1];
        const VkImage intoImage = into.image;
        Record([=](VkCommandBuffer command) {
            vkCmdBlitImage(command, sourceImage, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                           intoImage, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &copy,
                           VK_FILTER_LINEAR);
        });

        RecordBarrier(into.image, VK_IMAGE_ASPECT_COLOR_BIT,
                      VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                      VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_SHADER_READ_BIT,
                      VK_PIPELINE_STAGE_TRANSFER_BIT, kShaderStages);
        EndReadingColour(*source);
        ClearAfterResolve(r, control);
        if (!SubmitIfFilling()) Skip("frame submission failed");
        return;
    }

    source->presented++;

    // Copying the frame into an image of its own, rather than handing the render
    // target to the window thread, keeps the next frame from overwriting it.
    const uint32_t index = g.presentIndex;
    VkImage present = g.present[index];
    vk::WaitUntilTaken(g.presentSerial[index]);

    const VkRect2D& scissor = rect;
    const uint32_t copyWidth = std::min(scissor.extent.width ? scissor.extent.width : source->width,
                                        source->width);
    const uint32_t copyHeight = std::min(scissor.extent.height ? scissor.extent.height : source->height,
                                         source->height);
    VkImage sourceImage = BeginReadingColour(*source, scissor.offset, copyWidth, copyHeight);
    if (!sourceImage) { Skip("present of a multisampled surface"); Submit(); return; }
    // After the window's copy out of it, and the dumps' and the display
    // table's work on it, the last time round.
    RecordBarrier(present, VK_IMAGE_ASPECT_COLOR_BIT,
                  VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                  0, VK_ACCESS_TRANSFER_WRITE_BIT,
                  VK_PIPELINE_STAGE_TRANSFER_BIT | VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
                  VK_PIPELINE_STAGE_TRANSFER_BIT);

    VkImageBlit blit{};
    blit.srcSubresource = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1 };
    blit.srcOffsets[0] = { scissor.offset.x, scissor.offset.y, 0 };
    blit.srcOffsets[1] = { int32_t(scissor.offset.x + copyWidth),
                           int32_t(scissor.offset.y + copyHeight), 1 };
    blit.dstSubresource = blit.srcSubresource;
    blit.dstOffsets[0] = { 0, 0, 0 };
    blit.dstOffsets[1] = { int32_t(g.presentWidth), int32_t(g.presentHeight), 1 };
    Record([=](VkCommandBuffer command) {
        vkCmdBlitImage(command, sourceImage, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                       present, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &blit, VK_FILTER_LINEAR);
    });

    // What a television is handed has been through the display's colour table,
    // so what the window and the frame dumps show has to be too.
    vk::display::Apply(present, g.presentWidth, g.presentHeight,
                       VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);

    RecordBarrier(present, VK_IMAGE_ASPECT_COLOR_BIT,
                  VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                  VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_TRANSFER_READ_BIT,
                  VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);
    EndReadingColour(*source);

    ClearAfterResolve(r, control);
    FinishFrame(present);
}

#endif  // MW2_HAVE_VULKAN
