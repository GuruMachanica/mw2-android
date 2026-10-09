// Translated shaders, the pipelines built from them, and the shader cache that
// rebuilds a previous run's pipelines before the title asks for them.
#include "renderer_state.h"
#include "../../diagnostics.h"
#include "../../log.h"
#include "../../report.h"

#include <cstdio>

#ifdef MW2_HAVE_VULKAN

namespace vk::renderer::detail
{
    // A shader the title has not drawn with before here: taken from the ones
    // compiled when it was loaded (TakePrepared), or translated and compiled
    // now -- a stall, which is why the load-time path exists.
    const Shader* ShaderFor(shader::Type type, uint64_t hash, const uint32_t* code, size_t words)
    {
        if (!code || !words) return nullptr;
        auto found = g.shaders.find(hash);
        if (found != g.shaders.end())
            return found->second.module ? &found->second : nullptr;

        Shader entry;
        if (!TakePrepared(hash, entry))
        {
            stutters::Timed timed(stutters::kShaders);
            const auto translateStart = std::chrono::steady_clock::now();
            entry = BuildShader(type, code, words);
            const uint64_t took = uint64_t(std::chrono::duration_cast<std::chrono::microseconds>(
                std::chrono::steady_clock::now() - translateStart).count());
            g.translateMicroseconds += took;
            report::Add(report::kShader, took);
            g.shadersBuiltAtDraw++;
        }
        const bool ok = entry.module != VK_NULL_HANDLE;
        if (!ok)
            LOGW("renderer: %s shader %016llX not usable: %s",
                 type == shader::Type::Vertex ? "vertex" : "pixel",
                 (unsigned long long)hash,
                 entry.translation.ok ? "driver refused the module"
                                      : entry.translation.error.c_str());
        auto& stored = g.shaders.emplace(hash, std::move(entry)).first->second;
        return ok ? &stored : nullptr;
    }

    VkCompareOp CompareOp(uint32_t function)
    {
        switch (function & 7)
        {
        case 0: return VK_COMPARE_OP_NEVER;
        case 1: return VK_COMPARE_OP_LESS;
        case 2: return VK_COMPARE_OP_EQUAL;
        case 3: return VK_COMPARE_OP_LESS_OR_EQUAL;
        case 4: return VK_COMPARE_OP_GREATER;
        case 5: return VK_COMPARE_OP_NOT_EQUAL;
        case 6: return VK_COMPARE_OP_GREATER_OR_EQUAL;
        default: return VK_COMPARE_OP_ALWAYS;
        }
    }

    // Xenos's stencil operations are Vulkan's, in the same order.
    VkStencilOp StencilOp(uint32_t op)
    {
        constexpr VkStencilOp kOps[8] = {
            VK_STENCIL_OP_KEEP, VK_STENCIL_OP_ZERO, VK_STENCIL_OP_REPLACE,
            VK_STENCIL_OP_INCREMENT_AND_CLAMP, VK_STENCIL_OP_DECREMENT_AND_CLAMP,
            VK_STENCIL_OP_INVERT, VK_STENCIL_OP_INCREMENT_AND_WRAP, VK_STENCIL_OP_DECREMENT_AND_WRAP,
        };
        return kOps[op & 7];
    }

    VkBlendFactor BlendFactor(uint32_t factor)
    {
        switch (factor)
        {
        case 0:  return VK_BLEND_FACTOR_ZERO;
        case 1:  return VK_BLEND_FACTOR_ONE;
        case 4:  return VK_BLEND_FACTOR_SRC_COLOR;
        case 5:  return VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
        case 6:  return VK_BLEND_FACTOR_SRC_ALPHA;
        case 7:  return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        case 8:  return VK_BLEND_FACTOR_DST_COLOR;
        case 9:  return VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR;
        case 10: return VK_BLEND_FACTOR_DST_ALPHA;
        case 11: return VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
        case 12: return VK_BLEND_FACTOR_CONSTANT_COLOR;
        case 13: return VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
        case 14: return VK_BLEND_FACTOR_CONSTANT_ALPHA;
        case 15: return VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA;
        case 16: return VK_BLEND_FACTOR_SRC_ALPHA_SATURATE;
        default: return VK_BLEND_FACTOR_ONE;
        }
    }

    VkBlendOp BlendOp(uint32_t op)
    {
        switch (op & 7)
        {
        case 1:  return VK_BLEND_OP_SUBTRACT;
        case 2:  return VK_BLEND_OP_MIN;
        case 3:  return VK_BLEND_OP_MAX;
        case 4:  return VK_BLEND_OP_REVERSE_SUBTRACT;
        default: return VK_BLEND_OP_ADD;
        }
    }

    VkPrimitiveTopology TopologyFor(uint32_t primitive)
    {
        switch (primitive)
        {
        case 1:  return VK_PRIMITIVE_TOPOLOGY_POINT_LIST;
        case 2:  return VK_PRIMITIVE_TOPOLOGY_LINE_LIST;
        case 3:  return VK_PRIMITIVE_TOPOLOGY_LINE_STRIP;
        case 4:  return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
        case 5:  return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN;
        case 6:  return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP;
        // A rectangle list is expanded into two triangles a rectangle before the
        // draw, so by here it is an ordinary triangle list.
        case 8:  return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
        case 12: return VK_PRIMITIVE_TOPOLOGY_LINE_STRIP;      // line loop
        default: return VK_PRIMITIVE_TOPOLOGY_MAX_ENUM;
        }
    }

    DepthTests DepthTestsFor(uint32_t control)
    {
        const gpu::DepthControl depthControl{ control };
        DepthTests tests;
        tests.depthTest = depthControl.ZEnable();
        tests.depthWrite = depthControl.ZWrite();
        tests.depthCompare = CompareOp(depthControl.ZFunc());
        // The reference and the masks are set on their own. Back faces share
        // the front's operations unless the title gives them their own.
        tests.stencilTest = depthControl.StencilEnable();
        tests.front = { StencilOp(depthControl.StencilFail()), StencilOp(depthControl.StencilZPass()),
                        StencilOp(depthControl.StencilZFail()), CompareOp(depthControl.StencilFunc()),
                        0, 0, 0 };
        tests.back = tests.front;
        if (depthControl.BackfaceEnable())
            tests.back = { StencilOp(depthControl.StencilFailBack()),
                           StencilOp(depthControl.StencilZPassBack()),
                           StencilOp(depthControl.StencilZFailBack()),
                           CompareOp(depthControl.StencilFuncBack()), 0, 0, 0 };
        return tests;
    }

    void FacesFor(uint32_t modeCntl, VkCullModeFlags& cull, VkFrontFace& front)
    {
        const gpu::ModeCntl mode{ modeCntl };
        // A whole class of geometry missing and nothing else wrong is what a
        // winding read backwards looks like, so it is worth being able to take
        // the culling away in one run.
        static const bool noCull = diag::Flag("MW2_NO_CULL");
        cull = noCull ? 0u
                      : ((mode.CullFront() ? VK_CULL_MODE_FRONT_BIT : 0u) |
                         (mode.CullBack() ? VK_CULL_MODE_BACK_BIT : 0u));
        front = mode.FrontIsClockwise() ? VK_FRONT_FACE_CLOCKWISE : VK_FRONT_FACE_COUNTER_CLOCKWISE;
    }

    PipelineState::PipelineState(const PipelineKey& key)
    {
        // Xenos has no fixed-function vertex input at all: the shader fetches its
        // own attributes out of set 2.
        assembly.topology = VkPrimitiveTopology(key.topology);
        viewport.viewportCount = 1;
        viewport.scissorCount = 1;

        raster.polygonMode = VK_POLYGON_MODE_FILL;
        // Culling and winding are set per draw (FacesFor).
        raster.lineWidth = 1.0f;
        // Always on, and set per draw: a shadow map drawn without the title's
        // bias shadows the very surfaces it was rendered from.
        raster.depthBiasEnable = VK_TRUE;

        multisample.rasterizationSamples = VkSampleCountFlagBits(std::max(key.samples, 1u));
        // The tests themselves are set per draw (DepthTestsFor); `depth` stays empty.

        const gpu::BlendControl blend{ key.blendControl };
        attachment.blendEnable = !blend.IsPassThrough();
        attachment.srcColorBlendFactor = BlendFactor(blend.ColorSource());
        attachment.dstColorBlendFactor = BlendFactor(blend.ColorDestination());
        attachment.colorBlendOp = BlendOp(blend.ColorOp());
        attachment.srcAlphaBlendFactor = BlendFactor(blend.AlphaSource());
        attachment.dstAlphaBlendFactor = BlendFactor(blend.AlphaDestination());
        attachment.alphaBlendOp = BlendOp(blend.AlphaOp());
        // Four bits per target, ARGB on the console and RGBA here.
        const uint32_t mask = key.colourMask & 0xF;
        attachment.colorWriteMask =
            ((mask & 1) ? VK_COLOR_COMPONENT_R_BIT : 0u) |
            ((mask & 2) ? VK_COLOR_COMPONENT_G_BIT : 0u) |
            ((mask & 4) ? VK_COLOR_COMPONENT_B_BIT : 0u) |
            ((mask & 8) ? VK_COLOR_COMPONENT_A_BIT : 0u);
        blending.attachmentCount = 1;
        blending.pAttachments = &attachment;

        static constexpr VkDynamicState kDynamicModern[] = {
            VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR, VK_DYNAMIC_STATE_DEPTH_BIAS,
            VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK, VK_DYNAMIC_STATE_STENCIL_WRITE_MASK,
            VK_DYNAMIC_STATE_STENCIL_REFERENCE, VK_DYNAMIC_STATE_CULL_MODE_EXT,
            VK_DYNAMIC_STATE_FRONT_FACE_EXT, VK_DYNAMIC_STATE_DEPTH_TEST_ENABLE_EXT,
            VK_DYNAMIC_STATE_DEPTH_WRITE_ENABLE_EXT, VK_DYNAMIC_STATE_DEPTH_COMPARE_OP_EXT,
            VK_DYNAMIC_STATE_STENCIL_TEST_ENABLE_EXT, VK_DYNAMIC_STATE_STENCIL_OP_EXT };
        static constexpr VkDynamicState kDynamicLegacy[] = {
            VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR, VK_DYNAMIC_STATE_DEPTH_BIAS,
            VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK, VK_DYNAMIC_STATE_STENCIL_WRITE_MASK,
            VK_DYNAMIC_STATE_STENCIL_REFERENCE };

        if (vk::pipeline::LegacyMode())
        {
            dynamic.dynamicStateCount = uint32_t(std::size(kDynamicLegacy));
            dynamic.pDynamicStates = kDynamicLegacy;

            FacesFor(key.modeCntl, raster.cullMode, raster.frontFace);

            const DepthTests tests = DepthTestsFor(key.depthControl);
            depth.depthTestEnable = tests.depthTest ? VK_TRUE : VK_FALSE;
            depth.depthWriteEnable = tests.depthWrite ? VK_TRUE : VK_FALSE;
            depth.depthCompareOp = tests.depthCompare;
            depth.stencilTestEnable = tests.stencilTest ? VK_TRUE : VK_FALSE;
            depth.front.failOp = tests.front.failOp;
            depth.front.passOp = tests.front.passOp;
            depth.front.depthFailOp = tests.front.depthFailOp;
            depth.front.compareOp = tests.front.compareOp;
            depth.back.failOp = tests.back.failOp;
            depth.back.passOp = tests.back.passOp;
            depth.back.depthFailOp = tests.back.depthFailOp;
            depth.back.compareOp = tests.back.compareOp;
        }
        else
        {
            dynamic.dynamicStateCount = uint32_t(std::size(kDynamicModern));
            dynamic.pDynamicStates = kDynamicModern;

            // Dynamic rendering: the formats of the targets stand where a render
            // pass would.
            colourFormat = VkFormat(key.colourFormat);
            rendering.colorAttachmentCount = 1;
            rendering.pColorAttachmentFormats = &colourFormat;
            rendering.depthAttachmentFormat = VkFormat(key.depthFormat);
            rendering.stencilAttachmentFormat = VkFormat(key.depthFormat);
        }
    }

    // The whole pipeline in one call, both shaders compiled for it: what a
    // device without pipeline libraries gets.
    VkPipeline BuildPipeline(const PipelineKey& key, const Shader& vertex, const Shader& pixel)
    {
        VkPipelineShaderStageCreateInfo stages[2]{};
        stages[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
        stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
        stages[0].module = vertex.module;
        stages[0].pName = "main";
        stages[1] = stages[0];
        stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
        stages[1].module = pixel.module;

        const PipelineState state(key);
        VkGraphicsPipelineCreateInfo info{ VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO };
        info.pNext = vk::pipeline::LegacyMode() ? nullptr : &state.rendering;
        info.renderPass = vk::pipeline::LegacyMode()
            ? GetRenderPass(VkFormat(key.colourFormat), VkFormat(key.depthFormat),
                            VkSampleCountFlagBits(std::max(key.samples, 1u)))
            : VK_NULL_HANDLE;
        info.subpass = 0;
        info.stageCount = 2;
        info.pStages = stages;
        info.pVertexInputState = &state.input;
        info.pInputAssemblyState = &state.assembly;
        info.pViewportState = &state.viewport;
        info.pRasterizationState = &state.raster;
        info.pMultisampleState = &state.multisample;
        info.pDepthStencilState = &state.depth;
        info.pColorBlendState = &state.blending;
        info.pDynamicState = &state.dynamic;
        info.layout = static_cast<VkPipelineLayout>(vk::pipeline::Layout());

        VkPipeline built = VK_NULL_HANDLE;
        if (vkCreateGraphicsPipelines(g.device, static_cast<VkPipelineCache>(vk::pipeline::Cache()),
                                      1, &info, nullptr, &built) != VK_SUCCESS)
            return VK_NULL_HANDLE;
        return built;
    }

    VkPipeline EnsurePipeline(const PipelineKey& key, const Shader& vertex, const Shader& pixel,
                              bool* made)
    {
        TakeOptimisedPipelines();
        auto found = g.pipelines.find(key);
        if (found != g.pipelines.end()) return found->second;
        if (made) *made = true;

        const auto compileStart = std::chrono::steady_clock::now();
        stutters::Timed timed(stutters::kPipelines);
        // Linked from the two shaders' libraries, compiled when the title
        // loaded them, in well under a millisecond; or the whole pipeline
        // compiled here, on a device that cannot.
        VkPipeline built = vertex.library && pixel.library ? LinkPipeline(key, vertex, pixel)
                                                           : BuildPipeline(key, vertex, pixel);
        const uint64_t took = uint64_t(std::chrono::duration_cast<std::chrono::microseconds>(
            std::chrono::steady_clock::now() - compileStart).count());
        g.compileMicroseconds += took;
        report::Add(report::kPipeline, took);
        if (!built)
            LOGW("renderer: pipeline for %016llX/%016llX rejected",
                 (unsigned long long)key.vertexShader, (unsigned long long)key.pixelShader);
        g.pipelines[key] = built;   // a failure is remembered, so it fails once
        return built;
    }

    // MW2_SHADER_CACHE=<file> records every pipeline a run needed and rebuilds
    // them at start-up on the next -- the "compiling shaders" pass the console
    // never needed. It cannot be built from the shaders alone: a pipeline is a
    // shader pair *and* the state it is drawn with, and a previous run is the only
    // place that state exists.
    const char* ShaderCachePath()
    {
        static const char* path = env::Text("MW2_SHADER_CACHE");
        return path;
    }

    constexpr uint32_t kCacheMagic = 0x32574D53;   // 'SMW2'
    constexpr uint32_t kCacheVersion = 3;   // 3: a vertex program ends by turning
                                            // window coordinates into clip space

    void WriteShaderCache()
    {
        const char* path = ShaderCachePath();
        if (!path || g.recorded.empty()) return;
        std::FILE* file = std::fopen(path, "wb");
        if (!file) return;

        const uint32_t header[4] = { kCacheMagic, kCacheVersion,
                                     uint32_t(g.shaders.size()), uint32_t(g.recorded.size()) };
        std::fwrite(header, sizeof header, 1, file);
        for (const auto& [hash, shader] : g.shaders)
        {
            const uint32_t entry[2] = { uint32_t(shader.type == shader::Type::Pixel),
                                        uint32_t(shader.code.size()) };
            std::fwrite(&hash, sizeof hash, 1, file);
            std::fwrite(entry, sizeof entry, 1, file);
            std::fwrite(shader.code.data(), 4, shader.code.size(), file);
        }
        std::fwrite(g.recorded.data(), sizeof(Recorded), g.recorded.size(), file);
        std::fclose(file);
        LOGI("renderer: wrote %zu shaders and %zu pipelines to %s",
             g.shaders.size(), g.recorded.size(), path);
    }

    // Work the draw path would otherwise do mid-frame, which is where a hitch
    // comes from -- the total is small, the moment it is paid is the problem.
    void PrewarmFromCache()
    {
        const char* path = ShaderCachePath();
        if (!path) return;
        std::FILE* file = std::fopen(path, "rb");
        if (!file) return;

        uint32_t header[4]{};
        if (std::fread(header, sizeof header, 1, file) != 1 ||
            header[0] != kCacheMagic || header[1] != kCacheVersion)
        {
            std::fclose(file);
            LOGW("renderer: %s is not a shader cache for this build, ignoring it", path);
            return;
        }

        const auto start = std::chrono::steady_clock::now();
        for (uint32_t i = 0; i < header[2]; i++)
        {
            uint64_t hash = 0;
            uint32_t entry[2]{};
            if (std::fread(&hash, sizeof hash, 1, file) != 1 ||
                std::fread(entry, sizeof entry, 1, file) != 1) { std::fclose(file); return; }
            std::vector<uint32_t> code(entry[1]);
            if (entry[1] && std::fread(code.data(), 4, code.size(), file) != code.size())
            { std::fclose(file); return; }
            ShaderFor(entry[0] ? shader::Type::Pixel : shader::Type::Vertex,
                      hash, code.data(), code.size());
        }

        std::vector<Recorded> wanted(header[3]);
        if (header[3] && std::fread(wanted.data(), sizeof(Recorded), wanted.size(), file)
                             != wanted.size())
        { std::fclose(file); return; }
        std::fclose(file);

        g.prewarmWanted = uint32_t(wanted.size());
        uint32_t last = 0;
        for (const Recorded& want : wanted)
        {
            auto vertex = g.shaders.find(want.vertexShader);
            auto pixel = g.shaders.find(want.pixelShader);
            if (vertex == g.shaders.end() || pixel == g.shaders.end() ||
                !vertex->second.module || !pixel->second.module)
                continue;
            PipelineKey key;
            key.vertexShader = want.vertexShader;
            key.pixelShader = want.pixelShader;
            key.colourFormat = want.colourFormat;
            key.depthFormat = want.depthFormat;
            key.topology = want.topology;
            key.blendControl = want.blendControl;
            key.colourMask = want.colourMask;
            key.samples = want.samples;
            if (EnsurePipeline(key, vertex->second, pixel->second)) g.prewarmed++;
            // Kept, so the cache written at shutdown is the union of this run and earlier
            // ones. Recording only what this run built would shrink it every time.
            g.recorded.push_back(want);

            // Progress, because this is the pass a player would be looking at.
            const uint32_t percent = 100 * (&want - wanted.data() + 1) / uint32_t(wanted.size());
            if (percent >= last + 25) { LOGI("compiling shaders: %u%%", percent); last = percent; }
        }
        g.prewarmMicroseconds = uint64_t(std::chrono::duration_cast<std::chrono::microseconds>(
            std::chrono::steady_clock::now() - start).count());
        LOGI("renderer: prewarmed %u of %u pipelines over %zu shaders in %llu us",
             g.prewarmed, g.prewarmWanted, g.shaders.size(),
             (unsigned long long)g.prewarmMicroseconds);
    }
}

#endif  // MW2_HAVE_VULKAN
