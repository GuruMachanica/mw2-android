#pragma once
// Force-included into every recompiled translation unit (see CMakeLists.txt).
//
// The recompiler emits PPC_MM_STORE_* for a store it can tell is aimed at a
// hardware register -- one followed by eieio. In this runtime those registers
// are ordinary memory, so the store still lands there (the title reads some of
// them back), and the XMA decoder's window is additionally reported to the
// runtime: its kick, lock and clear registers are commands, not state, and
// nothing could poll a bit mask for a second write of the same value.
//
// `value` is what the guest's stw would write, i.e. before the byte swap. Only
// 32-bit stores are hooked; the title issues no other width at the window.
#include <cstdint>

extern "C" void mw2_xma_register_store(uint32_t address, uint32_t value);

#define PPC_MM_STORE_U32(x, y)                                              \
    do {                                                                    \
        const uint32_t mw2_ea = (x);                                        \
        const uint32_t mw2_value = (y);                                     \
        PPC_STORE_U32(mw2_ea, mw2_value);                                   \
        if ((mw2_ea & 0xFFFF0000u) == 0x7FEA0000u)                          \
            mw2_xma_register_store(mw2_ea, mw2_value);                      \
    } while (0)
