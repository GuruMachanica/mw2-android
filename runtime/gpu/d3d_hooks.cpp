// MW2's D3D9 is statically linked but not inlined: the engine reaches it
// through ordinary function calls, and a few of them are hooked here.
#include <ppc_recomp_shared.h>
#include "../pacing_trace.h"
#include "../stutters.h"
#include "title.h"
#include "gpu.h"
#include "internal.h"
#include "../diagnostics.h"
#include "../guest.h"
#include "../log.h"

#include <atomic>

// D3D9's present. Its frame is retired the way the console retires it: the
// command stream has the command processor raise an interrupt whose handler
// runs D3D's own flip handler, which counts the frame done.
GUEST_HOOK(T_D3D_Present)
{
    pacing::Note(pacing::kPresent);
    GUEST_ORIG(T_D3D_Present)(ctx, base);
    pacing::Note(pacing::kPresentEnd);
    gpu::Presented();
    stutters::TitlePresented();
}

// D3D9's wait for arena space, which is where the block the command processor
// reports its progress through is learnt (arena.cpp): the device holds a
// pointer to it, and it holds a sequence counter at +0 and a position at +4.
// The device's other fields are in docs/d3d9-seam.md.
GUEST_HOOK(T_D3D_ArenaWait)
{
    constexpr uint32_t kProgressBlock = 10896;   // in D3D9's device structure
    if (const uint32_t block = *GuestPtr<be32>(ctx.r3.u32 + kProgressBlock))
        gpu::SetArenaProgressBlock(block);
    GUEST_ORIG(T_D3D_ArenaWait)(ctx, base);
}

#if MW2_DIAGNOSTICS
namespace
{
    std::atomic<uint64_t> g_endless{ 0 };
}

// A renderer pass' recording is replayed by T_D3D_ReplayRecording, which walks
// the chunk list at [object+116] -- next at +0, an entry count at +4, entries
// from +8 -- and copies each chunk into the command-buffer arena. The inner
// loop counts up to [chunk+4] with a do-while, so a chunk holding no entries is
// 2^32 of them and one whose count is not a count is as good as forever. The
// thread does not come back to be diagnosed, so the list is checked on the way in.
GUEST_HOOK(T_D3D_ReplayRecording)
{
    const uint32_t object = ctx.r4.u32;
    const uint32_t head = object ? uint32_t(*GuestPtr<be32>(object + 116)) : 0;
    uint32_t nodes = 0, entries = 0;
    bool endless = false;
    // Tortoise and hare: a cycle is as endless as a bad count.
    for (uint32_t slow = head, fast = head; fast && !endless; nodes++)
    {
        const uint32_t count = *GuestPtr<be32>(slow + 4);
        if (!count || count > (1u << 20)) { endless = true; break; }
        entries += count;
        fast = *GuestPtr<be32>(fast);
        if (fast) fast = *GuestPtr<be32>(fast);
        slow = *GuestPtr<be32>(slow);
        if (!slow) break;
        if (slow == fast || nodes > 4096) endless = true;
    }
    if (endless && g_endless++ < 8)
        LOGW("d3d9: a recorded command buffer D3D9 cannot walk to the end of"
             " (object %08X, head %08X, %u chunks, %u entries)", object, head, nodes, entries);
    GUEST_ORIG(T_D3D_ReplayRecording)(ctx, base);
}

void gpu::detail::ReportD3DHooks()
{
    if (uint64_t n = g_endless.load())
        LOGI("d3d9: %llu recordings with no end", (unsigned long long)n);
}
#else
void gpu::detail::ReportD3DHooks() {}
#endif
