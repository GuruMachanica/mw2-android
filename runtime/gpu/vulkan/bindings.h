#pragma once
// The interface every translated shader is built against. The translator
// declares its resources here, the pipeline layout is made from the same
// numbers, and the renderer fills them -- so one layout serves every shader
// and nothing is reflected at bind time.
#include <cstdint>

namespace vk::bindings
{
    // Set 0: five dynamic uniform blocks, each a window of the register file
    // copied into the frame arena and pointed at by offset per draw.
    constexpr uint32_t kConstantSet = 0;
    constexpr uint32_t kVertexFloats = 0;     // 256 vec4 from SQ_VS_CONST's base
    constexpr uint32_t kFetchConstants = 1;   // 96 vertex fetch constants, two dwords
                                              // each, padded to a uvec4
    constexpr uint32_t kBoolConstants = 2;    // 256 bits as 8 dwords (2 uvec4)
    constexpr uint32_t kLoopConstants = 3;    // 32 dwords (8 uvec4)
    constexpr uint32_t kPixelFloats = 4;      // 256 vec4 from SQ_PS_CONST's base
    constexpr uint32_t kConstantBlocks = 5;
    constexpr uint32_t kFloatConstants = 256;
    constexpr uint32_t kFetchSlots = 96;
    // Each block's size, which is the range its descriptor covers.
    constexpr uint32_t kBlockBytes[kConstantBlocks] = {
        kFloatConstants * 16, kFetchSlots * 16, 8 * 4, 32 * 4, kFloatConstants * 16,
    };

    // Set 1: one combined image sampler per texture fetch constant. A shader
    // declares only the slots it samples.
    constexpr uint32_t kTextureSet = 1;
    constexpr uint32_t kTextureSlots = 32;

    // Set 2: the frame arena as an array of dwords. A vertex fetch constant
    // holds a guest physical address; the renderer copies what the draw reads
    // into the arena and rewrites the constant to point at the copy.
    constexpr uint32_t kArenaSet = 2;
    constexpr uint32_t kArenaBinding = 0;

    // Push constants, register state rather than shader state.
    // Pixel: { uint alpha function, float alpha reference, float colour scale,
    //          uint the target is the gamma form }.
    constexpr uint32_t kPixelPushOffset = 0, kPixelPushBytes = 16;
    // Vertex: { float2 scale, float2 offset }, window coordinates to clip space
    // for a program drawn with the viewport transform off.
    constexpr uint32_t kVertexPushOffset = 16, kVertexPushBytes = 16;
    // Both, and only in shaders built for render targets larger than the
    // title's (MW2_SCALE): { uint, a bit per texture slot bound to a resolve's
    // copy }, whose image is that many times the size the title gave it.
    constexpr uint32_t kScaledPushOffset = 32, kScaledPushBytes = 4;
}
