#pragma once
#include <cstdint>

// The console's XMA decoder: 320 hardware contexts, each a 64-byte block in
// physical memory the title fills in directly, driven by a register window at
// 0x7FEA0000. The title's XAudio2 (statically linked, so already recompiled)
// allocates contexts through XMACreateContext, points them at 2 KB XMA2 packets
// and a small PCM ring, and kicks them by writing a bit into the window; the
// decoder writes 16-bit big-endian PCM into the ring and advances the context's
// bit offset, and XAudio2 reads the ring on its next pass.
//
// Decoding is done on the kicking thread, so by the time the store returns the
// context already reflects the work -- the closest thing to the hardware's
// latency that costs nothing to reason about.
namespace apu::xma
{
    void Initialise();

    // The guest address of a free context (in the physical arena, as the title
    // turns it back into a physical address by masking), or 0 when all are taken.
    uint32_t AllocateContext();
    void     ReleaseContext(uint32_t guestAddress);

    // A store into the register window. `value` is the register's content as
    // the little-endian hardware holds it.
    void RegisterStore(uint32_t address, uint32_t value);

    void Report();
}
