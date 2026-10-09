// A draw: the render target and pass it goes into, its constants and
// textures, the fixed-function state, and the command itself.
#include "renderer_state.h"
#include "../../diagnostics.h"
#include "texture_cache.h"
#include "../texture.h"
#include "../../guest.h"
#include "../../kernel/physical.h"
#include "../../log.h"

#include <algorithm>
#include <bit>
#include <cmath>
#include <cstring>

#ifdef MW2_HAVE_VULKAN

namespace vk::renderer::detail
{
    void ScissorOf(const gpu::RegisterFile& r, VkRect2D& scissor)
    {
        const gpu::ScissorCorner topLeft{ r[gpu::PA_SC_WINDOW_SCISSOR_TL] };
        const gpu::ScissorCorner bottomRight{ r[gpu::PA_SC_WINDOW_SCISSOR_BR] };
        scissor.offset = { int32_t(topLeft.X()), int32_t(topLeft.Y()) };
        scissor.extent = { bottomRight.X() > topLeft.X() ? bottomRight.X() - topLeft.X() : 0,
                           bottomRight.Y() > topLeft.Y() ? bottomRight.Y() - topLeft.Y() : 0 };
    }

    // The viewport is a scale and an offset rather than a rectangle, and
    // PA_CL_VTE_CNTL says which of the six terms apply at all.
    void ViewportOf(const gpu::RegisterFile& r, const VkRect2D& scissor, VkViewport& viewport)
    {
        auto asFloat = [&](uint32_t index) { return std::bit_cast<float>(r[index]); };
        const gpu::ViewportControl control{ r[gpu::PA_CL_VTE_CNTL] };

        // The hardware's transform is `screen = offset + ndc * scale`; Vulkan's is
        // `screen = y + (ndc + 1)/2 * height`, so height = 2*scale and y = offset -
        // scale.
        //
        // Keeping the sign is the whole point. Xenos puts +Y up in clip space and
        // expresses that as a negative Y scale; Vulkan puts +Y down. Taking the
        // magnitude gives a viewport of the right size that draws upside down -- and
        // reverses every triangle's winding with it, so culling discards the frame.
        //
        // A term that is switched off is not absent, it is one: the hardware
        // computes `window = ndc * 1 + 0` and the shader is expected to have
        // emitted window coordinates itself. That is what a pre-transformed
        // vertex is -- D3D9's XYZRHW -- and MW2 clears EDRAM with one. Filling
        // the target's size in instead maps [-1,1] across the whole surface, so
        // a vertex at pixel 1024 lands at NDC 1024 and the primitive is clipped
        // away entirely. Follows Xenia's GetViewportInfo (BSD-3).
        const float xScale = control.XScale() ? asFloat(gpu::PA_CL_VPORT_XSCALE) : 1.0f;
        const float yScale = control.YScale() ? asFloat(gpu::PA_CL_VPORT_XSCALE + 2) : 1.0f;
        const float xOffset = control.XOffset() ? asFloat(gpu::PA_CL_VPORT_XSCALE + 1) : 0.0f;
        const float yOffset = control.YOffset() ? asFloat(gpu::PA_CL_VPORT_XSCALE + 3) : 0.0f;
        float x = xOffset - xScale, y = yOffset - yScale;
        float w = 2.0f * xScale, h = 2.0f * yScale;
        // A viewport of no width is not a transform, it is an unset register.
        if (w == 0.0f || h == 0.0f) { x = float(scissor.offset.x); y = float(scissor.offset.y);
                                      w = float(scissor.extent.width); h = float(scissor.extent.height); }

        viewport.x = x;
        viewport.y = y;
        viewport.width = w;
        viewport.height = h;
        const float zScale = control.ZScale() ? asFloat(gpu::PA_CL_VPORT_XSCALE + 4) : 1.0f;
        const float zOffset = control.ZOffset() ? asFloat(gpu::PA_CL_VPORT_XSCALE + 5) : 0.0f;
        viewport.minDepth = std::clamp(std::min(zOffset, zOffset + zScale), 0.0f, 1.0f);
        viewport.maxDepth = std::clamp(std::max(zOffset, zOffset + zScale), 0.0f, 1.0f);
    }

    // Slots neither shader names are left empty: the layout declares all
    // thirty-two, but a shader cannot read what it did not declare.
    //
    // `scaled` gets a bit for each slot bound to a resolve's copy, whose image
    // is State::scale times the size the title gave it.
    VkDescriptorSet TextureSetFor(const gpu::RegisterFile& r, uint32_t mask, const uint8_t* kinds,
                                  uint32_t& scaled)
    {
        scaled = 0;
        Stopwatch watch(g.textureNanoseconds);
        uint64_t ids[vk::textures::kSlots]{};
        for (uint32_t slot = 0; slot < vk::textures::kSlots; slot++)
        {
            if (!(mask & (1u << slot))) continue;
            gpu::TextureFetch fetch;
            for (uint32_t i = 0; i < 6; i++)
                fetch.d[i] = r[gpu::kConstantBaseFetch + slot * 6 + i];
            if (!fetch.IsTexture() || (!fetch.BaseAddress() && !fetch.MipAddress())) continue;
            auto found = g.resolvedTo.find(fetch.BaseAddress());
            const Resolved* newest =
                found == g.resolvedTo.end() ? nullptr
                                            : &found->second.copies[found->second.newest];
            if (newest && newest->view)
            {
                // The key names the copy, not just the guest address: the texture
                // cache keys descriptor sets on ids and drops them all when the
                // view behind an id changes, and with a copy per frame slot that
                // would be every frame. The fetch says whether the sampler
                // linearises, and the two views of one copy are different
                // resources to the set cache, so that is part of the key too.
                const bool linearise = !newest->depth && fetch.Linearises() && newest->gammaView;
                const uint64_t key = fetch.BaseAddress() |
                                     (uint64_t(found->second.newest + 1) << 32) |
                                     (uint64_t(linearise ? 1 : 0) << 34);
                ids[slot] = vk::textures::Adopt(
                    key, linearise ? newest->gammaView : newest->view, fetch);
                if (ids[slot])
                {
                    scaled |= 1u << slot;
                    if (g.drawRecord) NoteDrawTexture(slot, fetch, ids[slot], true);
                    continue;
                }
            }
            ids[slot] = vk::textures::Upload(fetch, nullptr);
            // MW2_MARK_EMPTY: the world pass is the multisampled one; the
            // interface and the post chain are not. A texture read from an empty
            // block matters when a draw into the world binds it.
            if constexpr (diag::kOn)
                if (ids[slot] && g.currentSamples > 1)
                    ids[slot] = vk::textures::NoteDrawnInWorld(ids[slot]);
            if (g.drawRecord) NoteDrawTexture(slot, fetch, ids[slot], false);
        }
        return static_cast<VkDescriptorSet>(vk::textures::DescriptorSet(ids, kinds));
    }

    // A draw as the recorder thread makes it: the state that changed since the
    // last draw in the command buffer, and the draw. Which state changed is
    // decided here, on the consumer, against State::Bound.
    struct DrawOp
    {
        enum : uint32_t
        {
            kNdc = 1, kPipeline = 2, kViewport = 4, kScissor = 8, kDepthBias = 16,
            kStencil = 32, kConstants = 64, kTextures = 128, kAlphaTest = 256,
            kIndexBuffer = 512, kIndexed = 1024, kFaces = 2048, kDepthTests = 4096,
            kScaled = 8192,
        };
        uint32_t set = 0;
        VkPipelineLayout layout = VK_NULL_HANDLE;
        VkPipeline pipeline = VK_NULL_HANDLE;
        VkViewport viewport{};
        VkRect2D scissor{};
        float ndc[4]{};
        float depthBias[2]{};
        uint32_t stencil[2]{};
        uint32_t push[4]{};
        uint32_t scaled = 0;
        VkCullModeFlags cullMode = 0;
        VkFrontFace frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
        DepthTests depthTests{};
        VkDescriptorSet constantSet = VK_NULL_HANDLE, textureSet = VK_NULL_HANDLE;
        uint32_t dynamic[bindings::kConstantBlocks]{};
        VkBuffer indexBuffer = VK_NULL_HANDLE;
        VkIndexType indexType = VK_INDEX_TYPE_UINT16;
        uint32_t count = 0, firstIndex = 0;

        void operator()(VkCommandBuffer command) const
        {
            // The pixel stage's range runs over these bytes on its way to the
            // scaled slots, so a write of them names both stages.
            constexpr VkShaderStageFlags kBoth = VK_SHADER_STAGE_VERTEX_BIT |
                                                 VK_SHADER_STAGE_FRAGMENT_BIT;
            if (set & kNdc)
                vkCmdPushConstants(command, layout, kBoth,
                                   bindings::kVertexPushOffset, sizeof ndc, ndc);
            if (set & kScaled)
                vkCmdPushConstants(command, layout, kBoth,
                                   bindings::kScaledPushOffset, sizeof scaled, &scaled);
            if (set & kPipeline)
                vkCmdBindPipeline(command, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);
            if (set & kViewport) vkCmdSetViewport(command, 0, 1, &viewport);
            if (set & kScissor) vkCmdSetScissor(command, 0, 1, &scissor);
            if (set & kDepthBias) vkCmdSetDepthBias(command, depthBias[0], 0.0f, depthBias[1]);
            if (set & kFaces)
            {
                if (dispatch.setCullMode) dispatch.setCullMode(command, cullMode);
                if (dispatch.setFrontFace) dispatch.setFrontFace(command, frontFace);
            }
            if (set & kDepthTests)
            {
                const DepthTests& d = depthTests;
                if (dispatch.setDepthTestEnable)
                {
                    dispatch.setDepthTestEnable(command, d.depthTest);
                    dispatch.setDepthWriteEnable(command, d.depthWrite);
                    dispatch.setDepthCompareOp(command, d.depthCompare);
                    dispatch.setStencilTestEnable(command, d.stencilTest);
                    dispatch.setStencilOp(command, VK_STENCIL_FACE_FRONT_BIT, d.front.failOp,
                                          d.front.passOp, d.front.depthFailOp, d.front.compareOp);
                    dispatch.setStencilOp(command, VK_STENCIL_FACE_BACK_BIT, d.back.failOp,
                                          d.back.passOp, d.back.depthFailOp, d.back.compareOp);
                }
            }
            if (set & kStencil)
            {
                const VkStencilFaceFlags faces[2] = { VK_STENCIL_FACE_FRONT_BIT,
                                                      VK_STENCIL_FACE_BACK_BIT };
                for (uint32_t i = 0; i < 2; i++)
                {
                    const gpu::StencilRefMask state{ stencil[i] };
                    vkCmdSetStencilCompareMask(command, faces[i], state.Mask());
                    vkCmdSetStencilWriteMask(command, faces[i], state.WriteMask());
                    vkCmdSetStencilReference(command, faces[i], state.Reference());
                }
            }
            if (set & kConstants)
                vkCmdBindDescriptorSets(command, VK_PIPELINE_BIND_POINT_GRAPHICS, layout,
                                        bindings::kConstantSet, 1, &constantSet,
                                        bindings::kConstantBlocks, dynamic);
            if (set & kTextures)
                vkCmdBindDescriptorSets(command, VK_PIPELINE_BIND_POINT_GRAPHICS, layout,
                                        bindings::kTextureSet, 1, &textureSet, 0, nullptr);
            if (set & kAlphaTest)
                vkCmdPushConstants(command, layout, VK_SHADER_STAGE_FRAGMENT_BIT,
                                   bindings::kPixelPushOffset, sizeof push, push);
            if (set & kIndexBuffer) vkCmdBindIndexBuffer(command, indexBuffer, 0, indexType);
            if (set & kIndexed) vkCmdDrawIndexed(command, count, 1, firstIndex, 0, 0);
            else vkCmdDraw(command, count, 1, 0, 0);
        }
    };
}

using namespace vk::renderer::detail;

void vk::renderer::Draw(const gpu::RegisterFile& r, const DrawCall& call)
{
    Stopwatch watch(g.drawNanoseconds);
    if (!g.device) return;
    // A flash hunt's record of this draw, open until it returns however it does.
    if constexpr (diag::kOn)
        g.drawRecord = BeginDrawRecord(r, call.vertexHash, call.pixelHash, call.primitive,
                                       call.indexCount, call.indexed ? call.indexAddress : 0);
    struct CloseRecord { ~CloseRecord() { g.drawRecord = nullptr; } } closeRecord;
    // Everything up to the indices: the shaders, the scissor, the render target
    // and the pass and framebuffer that go with it.
    const auto setupFrom = Timing() ? std::chrono::steady_clock::now()
                                    : std::chrono::steady_clock::time_point{};
    g.draws++;

    const VkPrimitiveTopology topology = TopologyFor(call.primitive);
    if (topology == VK_PRIMITIVE_TOPOLOGY_MAX_ENUM) { Skip("primitive type"); return; }

    const Shader* vertex = ShaderFor(shader::Type::Vertex, call.vertexHash,
                                     call.vertexCode, call.vertexWords);
    const Shader* pixel = ShaderFor(shader::Type::Pixel, call.pixelHash,
                                    call.pixelCode, call.pixelWords);
    if (!vertex || !pixel) { Skip("shader not translated"); return; }

    VkRect2D scissor{};
    ScissorOf(r, scissor);
    if (!scissor.extent.width || !scissor.extent.height) { Skip("empty scissor"); return; }

    const gpu::SurfaceInfo surface{ r[gpu::RB_SURFACE_INFO] };
    const gpu::ColorInfo colour{ r[gpu::RB_COLOR_INFO] };
    const gpu::DepthInfo depthInfo{ r[gpu::RB_DEPTH_INFO] };
    const gpu::DepthControl depthState{ r[gpu::RB_DEPTHCONTROL] };
    const gpu::ViewportControl viewportControl{ r[gpu::PA_CL_VTE_CNTL] };
    const gpu::EdramMode edramMode = gpu::EdramMode(r[gpu::RB_MODECONTROL] & 7);
    if (!surface.Pitch()) { Skip("no surface pitch"); return; }

    // MW2 clears EDRAM by drawing rectangles with the depth test ALWAYS, depth
    // writes on and the viewport transform off (see ClearAliasedDepth).
    const bool clearRectangles = call.primitive == 8 && depthState.ZWrite() &&
                                 depthState.ZFunc() == 7 &&
                                 !viewportControl.XScale() && !viewportControl.YScale();

    // The depth-only form. Answered before the targets are sized, because the
    // rectangle's scissor is left at its reset value -- 8192 square -- and
    // letting that decide how tall a surface is makes every depth buffer in the
    // frame the largest one this runtime allows.
    if (clearRectangles && edramMode == gpu::EdramMode::DepthOnly)
    {
        if (!BeginFrame()) { Skip("no command buffer"); return; }
        ClearAliasedDepth(depthInfo.BaseTile());
        Skip("EDRAM depth clear");
        return;
    }

    // The colour-and-depth form comes in pairs that describe one row of EDRAM
    // two ways: the bulk of it as a surface half as wide with twice the sample
    // count, the columns left over at the surface's own count, because a tile
    // is eighty samples wide and a surface is not a whole number of tiles. On
    // the console the pair covers the row exactly once.
    //
    // A target here is an image per sample count, so the wide half would land
    // in an image nothing else draws into, and the world surface would be
    // cleared over the sixty-four columns the other half names and nowhere
    // else. Both halves span the same row of EDRAM, and the rectangle carries
    // clip coordinates its own shader normalised by its own pitch, so drawing
    // it into the surface the world uses, with that surface's viewport, puts it
    // over exactly the columns it names on the hardware. That surface is the
    // one with the *lowest* sample count: the idiom doubles the count to halve
    // the pitch.
    uint32_t usePitch = surface.Pitch();
    uint32_t useSamples = surface.MsaaSamples();
    if (clearRectangles)
    {
        const uint32_t row = surface.Pitch() << surface.MsaaSamples();
        const uint32_t format = uint32_t(ColourFormatFor(colour.Format()));
        for (const auto& [key, target] : g.targets)
            if (!key.depth && key.baseTile == colour.BaseTile() && key.format == format &&
                key.samples < useSamples && (key.pitch << key.samples) == row)
            {
                usePitch = key.pitch;
                useSamples = key.samples;
            }
    }

    // A surface has a pitch but no height: how tall it is only shows in the region
    // the draws cover. Clamped, because a scissor left at its reset value asks for
    // a target taller than any display.
    const uint32_t width = std::min(usePitch, 4096u);
    const uint32_t height = std::clamp(uint32_t(scissor.offset.y) + scissor.extent.height,
                                       32u, 4096u);

    Target* colourTarget = EnsureTarget({ colour.BaseTile(), usePitch,
                                          uint32_t(ColourFormatFor(colour.Format())),
                                          useSamples, false },
                                        width, height, colour.Format());
    Target* depthTarget = EnsureTarget(DepthKey(depthInfo.BaseTile(), uint32_t(g.depthFormat),
                                                useSamples),
                                       width, height, depthInfo.Format());
    if (!colourTarget || !depthTarget) return;

    if (!BeginFrame()) { Skip("no command buffer"); return; }

    // Both keys carry the surface's sample count, so the two agree unless a
    // depth image made under another count is reused; a framebuffer cannot mix
    // them.
    if (colourTarget->samples != depthTarget->samples) { Skip("sample counts differ"); return; }
    const uint32_t passWidth = std::min(colourTarget->width, depthTarget->width);
    const uint32_t passHeight = std::min(colourTarget->height, depthTarget->height);
    if (colourTarget->view != g.currentColour || depthTarget->view != g.currentDepth)
    {
        if (diag::kOn && TracePasses() && DiagnoseHere() && g.passFrames <= TracePasses())
            LOGK("pass: %ux%u colour at tile %u, %ux drawn %ux, mask %08X, depth %08X, mode %u,"
                 " scissor %d,%d %ux%u, after %llu draws; depth tile %u %ux, %llu draws,"
                 " cleared %s",
                 colourTarget->width, colourTarget->height, colour.BaseTile(),
                 1u << surface.MsaaSamples(), unsigned(colourTarget->samples), r[gpu::RB_COLOR_MASK],
                 r[gpu::RB_DEPTHCONTROL], unsigned(edramMode),
                 scissor.offset.x, scissor.offset.y, scissor.extent.width,
                 scissor.extent.height, (unsigned long long)g.drawsRecorded,
                 depthInfo.BaseTile(), unsigned(depthTarget->samples),
                 (unsigned long long)depthTarget->draws,
                 depthTarget->depthClearedIn == g.frames ? "this frame" : "not this frame");
        BeginRendering(*colourTarget, *depthTarget, passWidth, passHeight);
    }

    if (Timing())
        g.setupNanoseconds += uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now() - setupFrom).count());

    // Before the constants, because the highest index in the run is what says how
    // much of the vertex buffer the fetch constants have to bring across.
    uint32_t indexOffset = 0;
    uint32_t lowestVertex = 0;
    uint32_t highestVertex = call.indexCount ? call.indexCount - 1 : 0;
    if (call.indexed)
    {
        if (!call.indexAddress || !call.indexCount) { Skip("indexed draw with no indices"); return; }
        Stopwatch indices(g.indexNanoseconds);
        indexOffset = WriteIndices(call.indexAddress, call.indexCount, call.index32,
                                   lowestVertex, highestVertex);
        if (indexOffset == UINT32_MAX) { Skip("frame arena full"); return; }
    }

    // Three vertices a rectangle, and the fourth corner is written into the arena
    // beside them: without it a clear covers the triangle it names and the rest of
    // the surface keeps what earlier frames left there.
    const uint32_t rectangles =
        (call.primitive == 8 && !call.indexed) ? call.indexCount / 3 : 0;
    if (call.primitive == 8 && !rectangles) { Skip("rectangle list this pass cannot expand"); return; }

    const ConstantOffsets constants =
        [&] { Stopwatch watch(g.constantsNanoseconds);
              return WriteConstants(r, vertex->translation, pixel->translation,
                                    lowestVertex, highestVertex, rectangles); }();
    if (!constants.ok) { Skip("frame arena full"); return; }
    // From here to the first command recorded: the pipeline key, the texture
    // descriptor set and the viewport.
    const auto stateFrom = Timing() ? std::chrono::steady_clock::now()
                                    : std::chrono::steady_clock::time_point{};

    if (rectangles)
    {
        indexOffset = Allocate(rectangles * 6 * 2, kArenaIndices);
        if (indexOffset == UINT32_MAX) { Skip("frame arena full"); return; }
        uint16_t* list = reinterpret_cast<uint16_t*>(g.arenaMapped + indexOffset);
        for (uint32_t rect = 0; rect < rectangles; rect++)
        {
            const uint16_t a = uint16_t(rect * 3), b = uint16_t(rect * 3 + 1);
            const uint16_t c = uint16_t(rect * 3 + 2);
            const uint16_t d = uint16_t(rectangles * 3 + rect);   // the corner made here
            const uint16_t six[6] = { a, b, c, a, c, d };
            std::memcpy(list + rect * 6, six, sizeof six);
        }
    }

    // MW2_TRACE_SHADER_VERTS=<hex> dumps what a draw actually hands the GPU: the
    // fetch constants after rewriting, the vertices they name, and the first
    // float constants. A sprite the title projects on the CPU carries its clip
    // positions in the vertex data itself, so "why is this quad a fifth of the
    // screen" is answered here, without a capture.
    const bool named = diag::kOn && TracedShaders().Names(call.vertexHash, call.pixelHash);
    if (named) g.vertsMatched++;
    if (named && DiagnoseHere() && g.vertsTraced < 24)
    {
        g.vertsTraced++;
        const auto viewportTerm = [&](uint32_t i) {
            return std::bit_cast<float>(r[gpu::PA_CL_VPORT_XSCALE + i]);
        };
        LOGK("verts: colour tile %u %ux %ux%u, depth tile %u, mask %08X, mode %u,"
             " depthcontrol %08X, %u rectangle(s), viewport scale/offset"
             " x %.1f/%.1f y %.1f/%.1f z %.4f/%.4f, scissor %d,%d %ux%u",
             colour.BaseTile(), 1u << surface.MsaaSamples(),
             colourTarget->width, colourTarget->height, depthInfo.BaseTile(),
             r[gpu::RB_COLOR_MASK], unsigned(edramMode), r[gpu::RB_DEPTHCONTROL],
             rectangles, viewportTerm(0), viewportTerm(1), viewportTerm(2), viewportTerm(3),
             viewportTerm(4), viewportTerm(5),
             scissor.offset.x, scissor.offset.y, scissor.extent.width, scissor.extent.height);
        if (g.vertsTraced == 1)
            LOGK("verts: the shader itself: %s",
                 shader::Describe(vertex->translation).c_str());
        LOGK("verts: %016llX/%016llX primitive %u, %u %sindices, vertices %u..%u",
             (unsigned long long)call.vertexHash, (unsigned long long)call.pixelHash,
             call.primitive, call.indexCount, call.indexed ? "" : "auto ",
             lowestVertex, highestVertex);
        const float* c = reinterpret_cast<const float*>(g.arenaMapped + constants.vertexFloats);
        for (uint32_t row = 0; row < 8; row++)
            LOGK("verts:   c%-2u %9.4f %9.4f %9.4f %9.4f", row,
                 c[row * 4], c[row * 4 + 1], c[row * 4 + 2], c[row * 4 + 3]);
        const uint32_t* fetch = reinterpret_cast<const uint32_t*>(g.arenaMapped + constants.fetch);
        for (uint32_t slot = 0; slot < 96; slot++)
        {
            const uint32_t* entry = fetch + slot * 4;
            if ((entry[0] & 3) != 3 || !entry[1]) continue;
            const uint32_t stride = vertex->translation.vertexFetchStride[slot];
            LOGK("verts:   fetch slot %u: arena %08X, %u dwords declared, stride %u",
                 slot, entry[0] & ~3u, (entry[1] >> 2) & 0xFFFFFF, stride);
            if (!stride || stride > 32) continue;
            // Past highestVertex by the rectangle count: the fourth corner of
            // each rectangle is written after the vertices the title gave.
            const uint32_t last = highestVertex + rectangles;
            for (uint32_t v = lowestVertex; v <= last && v < lowestVertex + 8; v++)
            {
                const uint32_t at = (entry[0] & ~3u) + v * stride * 4;
                if (at + stride * 4 > g.arenaBytes) break;
                // Hex as well as float: several of a vertex's dwords are packed
                // attributes, which read as floats are nonsense. The copy holds
                // the guest's big-endian bytes.
                const uint32_t* u = reinterpret_cast<const uint32_t*>(g.arenaMapped + at);
                char line[512];
                int n = std::snprintf(line, sizeof line, "verts:     v%-3u", v);
                for (uint32_t w = 0; w < stride && w < 8; w++)
                    n += std::snprintf(line + n, sizeof line - n, " %08X", u[w]);
                n += std::snprintf(line + n, sizeof line - n, "  |");
                for (uint32_t w = 0; w < stride && w < 4; w++)
                    n += std::snprintf(line + n, sizeof line - n, " %11.4f",
                                       std::bit_cast<float>(__builtin_bswap32(u[w])));
                LOGK("%s", line);
            }
        }
    }

    if constexpr (diag::kOn)
    {
        if (!OnlyShaders().hashes.empty() && !OnlyShaders().Names(call.vertexHash, call.pixelHash))
        { Skip("not the shader asked for"); return; }
        if (SkipShaders().Names(call.vertexHash, call.pixelHash))
        { Skip("the shader asked to be skipped"); return; }
    }

    PipelineKey key;
    key.vertexShader = call.vertexHash;
    key.pixelShader = call.pixelHash;
    key.colourFormat = uint32_t(colourTarget->format);
    key.depthFormat = uint32_t(depthTarget->format);
    key.topology = uint32_t(topology);
    // A shader writing nothing and a depth test rejecting everything leave the
    // same surface behind; MW2_NO_DEPTH_TEST tells them apart in one run.
    static const bool noDepth = diag::Flag("MW2_NO_DEPTH_TEST");
    // The depth and stencil tests and the culling are set per draw (below),
    // not built into the pipeline.
    const uint32_t depthControl = noDepth ? 0 : r[gpu::RB_DEPTHCONTROL];
    const uint32_t modeCntl = r[gpu::PA_SU_SC_MODE_CNTL];
    key.blendControl = r[gpu::RB_BLENDCONTROL0];
    key.colourMask = r[gpu::RB_COLOR_MASK];
    key.samples = colourTarget->samples;
    if (vk::pipeline::LegacyMode())
    {
        key.depthControl = depthControl;
        key.modeCntl = modeCntl;
    }
    bool newPipeline = false;
    VkPipeline built = [&] { Stopwatch watch(g.pipelineNanoseconds);
                             return EnsurePipeline(key, *vertex, *pixel, &newPipeline); }();
    if (!built) { Skip("pipeline rejected"); return; }
    if (newPipeline && ShaderCachePath())
        g.recorded.push_back({ key.vertexShader, key.pixelShader,
                               uint32_t(colourTarget->format), uint32_t(depthTarget->format),
                               key.topology, depthControl, key.blendControl,
                               key.colourMask, modeCntl, key.samples });

    // What each slot is declared as, so a texture of another kind is not bound
    // there. The two stages share the set; where both sample a slot the pixel
    // shader's reading wins, and the title has not been seen to disagree.
    uint8_t kinds[vk::textures::kSlots];
    for (uint32_t s = 0; s < vk::textures::kSlots; s++)
        kinds[s] = (pixel->translation.textureMask & (1u << s))
                       ? pixel->translation.textureKinds[s]
                       : vertex->translation.textureKinds[s];
    uint32_t scaledSlots = 0;
    VkDescriptorSet textureSet = TextureSetFor(
        r, vertex->translation.textureMask | pixel->translation.textureMask, kinds, scaledSlots);
    if (!textureSet) { Skip("no texture descriptor set"); return; }

    VkViewport viewport{};
    ViewportOf(r, scissor, viewport);
    scissor.extent.width = std::min(scissor.extent.width,
                                    g.currentWidth - uint32_t(scissor.offset.x));
    scissor.extent.height = std::min(scissor.extent.height,
                                     g.currentHeight - uint32_t(scissor.offset.y));

    State::Bound& bound = g.bound;
    DrawOp op;
    op.layout = static_cast<VkPipelineLayout>(vk::pipeline::Layout());

    // Window coordinates to clip space, which the translated vertex epilogue
    // applies from these four floats. The identity for every ordinary draw.
    //
    // When PA_CL_VTE_CNTL switches the X and Y scale terms off, the program has
    // emitted window coordinates itself and the hardware writes them through
    // unchanged. Vulkan clips against w first, so a vertex at window x = 960 with
    // w = 1 would be thrown out and the primitive with it -- which is how MW2's
    // EDRAM clears came to clear nothing.
    //
    // x is normalised by the pitch the *title* named rather than by the surface
    // this draw may have been redirected to, so the wide half of a clear pair --
    // half the pitch at twice the sample count -- still lands over the EDRAM it
    // names. y and the viewport share the target's height, which makes y an
    // identity.
    {
        float ndc[4] = { 1.0f, 1.0f, 0.0f, 0.0f };
        if (!viewportControl.XScale() && !viewportControl.YScale() &&
            g.currentWidth && g.currentHeight)
        {
            ndc[0] = 2.0f / float(surface.Pitch());
            ndc[1] = 2.0f / float(g.currentHeight);
            ndc[2] = -1.0f;
            ndc[3] = -1.0f;
            viewport.x = 0.0f;
            viewport.y = 0.0f;
            viewport.width = float(g.currentWidth);
            viewport.height = float(g.currentHeight);
        }
        if (!bound.ndcValid || std::memcmp(bound.ndc, ndc, sizeof ndc))
        {
            op.set |= DrawOp::kNdc;
            std::memcpy(op.ndc, ndc, sizeof ndc);
            std::memcpy(bound.ndc, ndc, sizeof ndc);
            bound.ndcValid = true;
        }
    }

    if (Timing())
        g.stateNanoseconds += uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now() - stateFrom).count());

    Stopwatch record(g.recordNanoseconds);
    if (bound.pipeline != built)
    {
        op.set |= DrawOp::kPipeline;
        op.pipeline = built;
        bound.pipeline = built;
    }

    // The title's pixels up to here, the images' from here.
    viewport.x *= float(g.scale);
    viewport.y *= float(g.scale);
    viewport.width *= float(g.scale);
    viewport.height *= float(g.scale);
    scissor = { Scaled(scissor.offset), Scaled(scissor.extent) };

    if (g.scale > 1 && (!bound.scaledValid || bound.scaled != scaledSlots))
    {
        op.set |= DrawOp::kScaled;
        op.scaled = scaledSlots;
        bound.scaled = scaledSlots;
        bound.scaledValid = true;
    }

    if (!bound.viewportValid || std::memcmp(&bound.viewport, &viewport, sizeof viewport))
    {
        op.set |= DrawOp::kViewport;
        op.viewport = viewport;
        bound.viewport = viewport;
        bound.viewportValid = true;
    }

    if (!bound.scissorValid || std::memcmp(&bound.scissor, &scissor, sizeof scissor))
    {
        op.set |= DrawOp::kScissor;
        op.scissor = scissor;
        bound.scissor = scissor;
        bound.scissorValid = true;
    }

    // The guest's polygon offset is Direct3D 9's: an absolute depth offset.
    // Vulkan's constant factor counts steps of the smallest resolvable depth
    // difference instead, so the offset is converted as Xenia does it -- for a
    // float24 guest, in float24 steps (2^21 in the [0.5, 1) range) of 8
    // float32 steps each -- and the slope from 1/16 pixel units to pixels.
    {
        const gpu::ModeCntl mode{ modeCntl };
        // Triangles, fans, strips, quads and polygons; not points, lines or
        // rectangles.
        const bool polygonal = call.primitive < 16 && ((0xE0F0u >> call.primitive) & 1);
        float scale = 0.0f, offset = 0.0f;
        auto asFloat = [&](uint32_t reg) { return std::bit_cast<float>(r[reg]); };
        if (polygonal)
        {
            // Front first: it is the face that is drawn, bar shadow volumes.
            if (mode.PolyOffsetFront() && !mode.CullFront())
            {
                scale = asFloat(gpu::PA_SU_POLY_OFFSET_FRONT_SCALE);
                offset = asFloat(gpu::PA_SU_POLY_OFFSET_FRONT_OFFSET);
                if (scale)
                {
                    // To the nearest order of magnitude, as Xenia does.
                    const double order = std::pow(10.0, std::floor(std::log10(std::fabs(scale))));
                    scale = float(std::round(scale / order) * order);
                }
            }
            if (mode.PolyOffsetBack() && !mode.CullBack() && !scale && !offset)
            {
                scale = asFloat(gpu::PA_SU_POLY_OFFSET_BACK_SCALE);
                offset = asFloat(gpu::PA_SU_POLY_OFFSET_BACK_OFFSET);
            }
        }
        else if (mode.PolyOffsetPara())
        {
            scale = asFloat(gpu::PA_SU_POLY_OFFSET_FRONT_SCALE);
            offset = asFloat(gpu::PA_SU_POLY_OFFSET_FRONT_OFFSET);
        }
        const float bias[2] = {
            offset * (depthInfo.Format() ? float(1u << 24) : float((1u << 24) - 1)),
            // A slope is depth per pixel, and the images' pixels are smaller
            // than the title's.
            scale * (1.0f / 16.0f) * float(g.scale),
        };
        if (!bound.depthBiasValid || std::memcmp(bound.depthBias, bias, sizeof bias))
        {
            op.set |= DrawOp::kDepthBias;
            std::memcpy(op.depthBias, bias, sizeof bias);
            std::memcpy(bound.depthBias, bias, sizeof bias);
            bound.depthBiasValid = true;
        }
    }

    // Culling and winding, and the depth and stencil tests: dynamic state, so
    // one pipeline serves every combination the title draws a pair of shaders
    // with, and a shader compiled on its own fits them all.
    if (!bound.facesValid || bound.modeCntl != modeCntl)
    {
        op.set |= DrawOp::kFaces;
        FacesFor(modeCntl, op.cullMode, op.frontFace);
        bound.modeCntl = modeCntl;
        bound.facesValid = true;
    }
    if (!bound.depthTestsValid || bound.depthControl != depthControl)
    {
        op.set |= DrawOp::kDepthTests;
        op.depthTests = DepthTestsFor(depthControl);
        bound.depthControl = depthControl;
        bound.depthTestsValid = true;
    }

    // The stencil reference and masks. Every pipeline declares them dynamic, so
    // they are set whether this draw tests stencil or not.
    {
        const uint32_t front = r[gpu::RB_STENCILREFMASK];
        const uint32_t stencil[2] = { front, depthState.BackfaceEnable()
                                                 ? r[gpu::RB_STENCILREFMASK_BF] : front };
        if (!bound.stencilValid || std::memcmp(bound.stencil, stencil, sizeof stencil))
        {
            op.set |= DrawOp::kStencil;
            std::memcpy(op.stencil, stencil, sizeof stencil);
            std::memcpy(bound.stencil, stencil, sizeof stencil);
            bound.stencilValid = true;
        }
    }

    // In binding order, which is the order the dynamic offsets are read in.
    const uint32_t dynamic[bindings::kConstantBlocks] = {
        constants.vertexFloats, constants.fetch, constants.booleans, constants.loops,
        constants.pixelFloats };
    if (!bound.dynamicValid || std::memcmp(bound.dynamic, dynamic, sizeof dynamic))
    {
        op.set |= DrawOp::kConstants;
        op.constantSet = g.constantSet;
        std::memcpy(op.dynamic, dynamic, sizeof dynamic);
        std::memcpy(bound.dynamic, dynamic, sizeof dynamic);
        bound.dynamicValid = true;
    }

    if (bound.textureSet != textureSet)
    {
        op.set |= DrawOp::kTextures;
        op.textureSet = textureSet;
        bound.textureSet = textureSet;
    }
    // Set 2 is bound once in BeginFrame; it is the same for every draw.

    // The alpha test. Vulkan has no fixed-function form, so the translated pixel
    // shader does the comparison and these are what it compares with; `always`
    // when the title has the test off, which the shader's mask makes free.
    //
    // Also `always` in depth-only mode, where the console does not run the pixel
    // shader at all (Xenia's reading too), so nothing it computes can discard.
    // The sun shadow casters depend on it: their technique has no pixel shader,
    // for which D3D9 loads nothing, and the draws run under whatever shader the
    // command stream loaded last.
    {
        const bool pixelShaderRuns = edramMode != gpu::EdramMode::DepthOnly;
        const gpu::ColorControl control{ r[gpu::RB_COLORCONTROL] };
        // Two to the power of the target's exponent bias, built by moving the
        // exponent of 1.0f rather than by calling powf on the draw path.
        const int32_t bias = std::clamp(colour.ExpBias(), -31, 31);
        const float scale = std::bit_cast<float>(uint32_t(0x3F800000) + (bias << 23));
        const bool gammaTarget = colour.Format() == 1;
        struct { uint32_t function; float reference; float scale; uint32_t gamma; } test{
            (control.AlphaTest() && pixelShaderRuns) ? control.AlphaFunc() : 7u,
            std::bit_cast<float>(r[gpu::RB_ALPHA_REF]),
            scale,
            gammaTarget ? 1u : 0u };
        static_assert(sizeof test == sizeof g.bound.push);
        if (!bound.pushValid || std::memcmp(bound.push, &test, sizeof test))
        {
            op.set |= DrawOp::kAlphaTest;
            std::memcpy(op.push, &test, sizeof test);
            std::memcpy(bound.push, &test, sizeof test);
            bound.pushValid = true;
        }
    }

    if (call.indexed || rectangles)
    {
        // The whole arena is bound once per index size and each draw names
        // where its indices start: a new binding every draw made the driver
        // emit it again every draw. The arena allocator's alignment keeps
        // every offset a whole number of indices.
        const bool wide = call.indexed && call.index32;
        const int indexType = wide ? int(VK_INDEX_TYPE_UINT32) : int(VK_INDEX_TYPE_UINT16);
        if (bound.indexBuffer != g.arena || bound.indexOffset != 0 ||
            bound.indexType != indexType)
        {
            op.set |= DrawOp::kIndexBuffer;
            op.indexBuffer = g.arena;
            op.indexType = VkIndexType(indexType);
            bound.indexBuffer = g.arena;
            bound.indexOffset = 0;
            bound.indexType = indexType;
        }
        op.set |= DrawOp::kIndexed;
        op.count = rectangles ? rectangles * 6 : call.indexCount;
        op.firstIndex = indexOffset / (wide ? 4 : 2);
    }
    else op.count = call.indexCount;
    Record(op);
    colourTarget->draws++;
    // The depth target too, so a dump can tell a depth buffer some pass is
    // testing against from one no pass has ever bound.
    depthTarget->draws++;
    if (edramMode == gpu::EdramMode::ColorDepth && key.colourMask &&
        !colourTarget->colourDrawsThisFrame++)
        colourTarget->framesWithColour++;
    g.drawsRecorded++;
    g.segmentDraws = true;
}

#endif  // MW2_HAVE_VULKAN
