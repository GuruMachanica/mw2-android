// Every shader the title loads, handed to the renderer to compile before it is
// drawn with (renderer_libraries.cpp).
//
// MW2 streams its shaders out of the fastfiles with everything else a level
// needs: the loader thread inflates each material's programs into physical
// memory and makes a D3D shader object over each one. The console's GPU runs
// that microcode as it stands, so the shader is ready from then on; here it
// has to be translated and compiled, and done at the first draw instead it was
// a stutter wherever something new came on screen.
//
// D3D's shader object is made in place by one routine per stage, given the
// object and the program -- the physical block the loader read the shader
// into. The object holds the shader's header (magic 0x102A11xx): at +40 in a
// pixel shader's, at +872 in a vertex shader's, where the vertex fetch tables
// come first. The header's seventh word is the offset, from the header, of a
// table whose first two words are where the microcode starts in the program
// (0, 64 or 128 bytes in) and how many bytes it is. That is exactly what D3D
// later points the command stream's IM_LOAD at: on mp_afghan all 358 shaders
// the stream loaded were found this way first.
#include <ppc_recomp_shared.h>
#include "title.h"
#include "guest.h"
#include "log.h"
#include "diagnostics.h"
#include "gpu/vulkan/renderer.h"

#include <atomic>
#include <vector>

#if defined(T_D3D_InitPixelShader) && defined(T_D3D_InitVertexShader)
namespace
{
    uint32_t Word(uint32_t at)
    {
        return __builtin_bswap32(*reinterpret_cast<const uint32_t*>(guest::Base() + at));
    }

    std::atomic<uint32_t> g_unreadable{ 0 };

    void Hand(bool pixel, uint32_t object, uint32_t program)
    {
        const uint32_t header = object + (pixel ? 40 : 872);
        const uint32_t magic = Word(header);
        const uint32_t table = header + Word(header + 24);
        const uint32_t offset = Word(table), bytes = Word(table + 4);
        if ((magic & 0xFFFFFF00) != 0x102A1100 || !program || !bytes || (bytes & 3) ||
            bytes > (256u << 10) || offset > 4096)
        {
            if (g_unreadable.fetch_add(1) < 4)
                LOGW("shaders: a %s shader object at %08X has no header this can read"
                     " (%08X, microcode %u bytes at +%u); it is compiled at its first draw",
                     pixel ? "pixel" : "vertex", object, magic, bytes, offset);
            return;
        }
        // The command stream hands the renderer the microcode as native dwords.
        std::vector<uint32_t> code(bytes / 4);
        for (size_t i = 0; i < code.size(); i++) code[i] = Word(program + offset + uint32_t(i) * 4);
        vk::renderer::PrepareShader(pixel, code.data(), code.size());
        static const bool traced = diag::Flag("MW2_TRACE_SHADER_LOADS");
        if (traced)
            LOGI("shaders: %s shader made at %08X, %016llX", pixel ? "pixel" : "vertex",
                 program + offset,
                 (unsigned long long)vk::renderer::ShaderHash(code.data(), code.size()));
    }
}

GUEST_HOOK(T_D3D_InitPixelShader)
{
    const uint32_t object = ctx.r3.u32, program = ctx.r4.u32;
    GUEST_ORIG(T_D3D_InitPixelShader)(ctx, base);
    Hand(true, object, program);
}

GUEST_HOOK(T_D3D_InitVertexShader)
{
    const uint32_t object = ctx.r3.u32, program = ctx.r4.u32;
    GUEST_ORIG(T_D3D_InitVertexShader)(ctx, base);
    Hand(false, object, program);
}
#endif
