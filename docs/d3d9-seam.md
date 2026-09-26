# The D3D9 seam

MW2 links Direct3D 9 statically (LTCG, no symbols), so there is no API
boundary to intercept. The library runs as recompiled guest code. It builds
PM4 command streams in guest memory and submits them through a ring buffer and
the `Vd*` kernel imports. The runtime stands in for the GPU: it executes that
stream as the Xenos command processor would (`runtime/gpu/command_processor.cpp`),
and it hooks a few library functions by address (`runtime/title.h`). How draws
become Vulkan work is covered in [rendering.md](rendering.md).

## The library

In the campaign executable the library spans `820B6098..820D4C54`: 281
functions, with 101 entry points called from 228 engine sites
(`tools/d3d_region.py`; `tools/classify_d3d.py` lists the device fields each
entry point touches). It is not inlined, so any entry point can be hooked on its
own with `GUEST_HOOK`. The multiplayer contains the same build at other
addresses. Device offsets: `+10548` render-state shadow, `+13520/13524/13528`
command buffer base/cursor/end, `+10896` arena progress block.

The engine reads fields of D3D resource objects itself; texture headers, for
example, are built in the title's own memory (`tools/resource_audit.py`).
Resource creation must therefore keep running the title's code. A host backend
can adopt the guest structs but cannot replace them.

| Hook (`title.h`) | Campaign | MP | Purpose |
|---|---|---|---|
| `T_D3D_Present` | `820C3390` | `820DFD10` | notes the present for pacing and stutter tracking |
| `T_D3D_ArenaWait` | `820B9800` | `820E1E70` | learns the arena progress block from `[r3+10896]` |
| `T_D3D_ReplayRecording` | `820C6130` | `820E4848` | diagnostics: warns of a recorded chunk list (`[object+116]`: next +0, count +4) with a zero count or a cycle, which the do-while replay loop would never leave |
| `T_D3D_InitPixelShader`, `T_D3D_InitVertexShader` | `820B8B58`, `820B8E78` | `820D7268`, `820D7588` | hand shader microcode to the renderer at load (`shader_preload.cpp`, [rendering.md](rendering.md#pipelines)) |

## The `Vd*` imports (`runtime/kernel/video.cpp`)

- `VdInitializeRingBuffer(physical, log2(bytes) - 3)`,
  `VdEnableRingBufferRPtrWriteBack` and `VdSetGraphicsInterruptCallback`
  configure `gpu.cpp`.
- `VdQueryVideoMode`, `XGetVideoMode` and `VdGetCurrentDisplayInformation`
  report 1280x720 progressive, widescreen, HiDef, 60 Hz.
  `VdGetCurrentDisplayGamma` reports type 2 with gamma 2.2222.
- `VdGetSystemCommandBuffer` returns a scratch buffer that is never submitted.
- `VdSwap` fills the reserved present dwords (below).
- `MmGetPhysicalAddress` must match the masking the title also inlines.

Every address handed to the GPU is physical. `kernel::FromPhysical` maps it back.

## The ring consumer (`runtime/gpu/gpu.cpp`)

The ring consumer thread has its own KPCR, as a hardware thread does. It polls
`CP_RB_WPTR` in the register aperture (`0x7FC80000 + 0x714`), executes up to
it, and stores its read index at the read-pointer write-back address. It also
delivers finished occlusion queries. The aperture is plain memory. The CPU
writes some registers there directly, and `RegisterOrAperture` falls back to it
for registers the stream never wrote.

## Executing PM4

All state is one `gpu::RegisterFile` of `0x5003` dwords (`registers.h`).
Writes outside it are dropped.

| Window | Base | |
|---|---|---|
| registers | `0x0000` | |
| float constants | `0x4000` | 512 vec4; each stage sees 256 from `SQ_VS_CONST` / `SQ_PS_CONST` |
| fetch constants | `0x4800` | 32 groups of 6 dwords (a texture fetch, or 3 vertex fetches) |
| booleans / loops | `0x4900` / `0x4908` | 8 dwords / 32 dwords |

| Type | Header | Payload |
|---|---|---|
| 0 | base register bits 0-14, `ONE_REG_WRITE` bit 15, count-1 in bits 16-29 | register values |
| 1 | two register indices, bits 0-10 and 11-21 | two values |
| 2 | — | no-op |
| 3 | predicate bit 0, opcode bits 8-14, count-1 in bits 16-29 | opcode-specific |

Parsing rules:

- **A zero dword is filler** and is skipped. Read as a type-0 header, it would
  swallow the next dword and shift every later packet.
- **A packet that runs past its buffer ends that buffer**, as in Xenia's
  `ExecutePacket`. A `0xFFFFFFFF` header claims 16384 dwords and ends up here.
- **`INDIRECT_BUFFER` is followed only if it is 32-byte aligned and at most 16k
  dwords**, and at most four levels deep. A misread pointer would otherwise walk
  stale arena memory, which is full of real command buffers.
- **One ring batch is bounded** to 8M dwords of work, so the consumer always
  returns to the ring.
- Whatever part of a type-3 packet its handler did not read is skipped.
- A **predicated** packet runs only when the 64-bit bin select and bin mask
  share a bit. A predicated `XE_SWAP` never runs.

| Opcode | Packet | Behaviour |
|---|---|---|
| `0x3F`, `0x37` | `INDIRECT_BUFFER(_PFD)` | `{address, size}` |
| `0x22`, `0x36` | `DRAW_INDX`, `DRAW_INDX_2` | `{[viz token], initiator, [dma base, dma size]}` |
| `0x27` | `IM_LOAD` | `{address \| type, start<<16 \| size}`: type 0 vertex, 1 pixel |
| `0x2B` | `IM_LOAD_IMMEDIATE` | `{type, start<<16 \| size, code...}`, refused when the size disagrees with the packet |
| `0x2D`, `0x2F`, `0x55` | `SET_CONSTANT`, `LOAD_ALU_CONSTANT`, `SET_CONSTANT2` | constants by window type 0-4 (float, fetch, bool, loop, register), from memory, or by absolute index |
| `0x3D`, `0x3E`, `0x45` | `MEM_WRITE`, `REG_TO_MEM`, `COND_WRITE` | memory writes; `COND_WRITE` always writes |
| `0x3C` | `WAIT_REG_MEM` | see below |
| `0x26` | `WAIT_FOR_IDLE` | marks every draw so far finished |
| `0x54` | `INTERRUPT` | `{cpu mask}` |
| `0x58`, `0x59` | `EVENT_WRITE_SHD`, `_CFL` | end-of-pipe write of `{address, value}`; SHD initiator bit 31 writes the timebase instead |
| `0x5B` | `EVENT_WRITE_ZPD` | occlusion query event at `RB_SAMPLE_COUNT_ADDR` ([rendering.md](rendering.md#occlusion-queries)) |
| `0x50`, `0x51`, `0x60`-`0x63` | `SET_BIN_MASK/SELECT(_LO/_HI)` | predication state |
| `0x64` | `XE_SWAP` | end of frame, written by `VdSwap` |

The runtime ignores other known opcodes. It skips unknown ones and logs them.

**Shaders and draws.** A draw uses the shaders the last `IM_LOAD`s set,
identified by an FNV-1a hash of the microcode. Its initiator goes to
`VGT_DRAW_INITIATOR`, and source select 0 means indexed with a physical DMA
base. If `RB_MODECONTROL & 7` is 6 (`Copy`) the draw is a resolve; otherwise
it is a draw. While the image pool has block copies pending, each draw's `c0.x`
is checked against them. Those copies are memory-export draws, and the runtime
makes each one on the CPU at its draw (`runtime/image_move.cpp`).

**Scratch write-back.** A write to `SCRATCH_REG0..7` (`0x578`+n) whose bit is
set in `SCRATCH_UMSK` (`0x1DC`) is also stored at `SCRATCH_ADDR` (`0x1DD`) +
4n. The title then waits on that memory to learn that the GPU has got this far.

**`WAIT_REG_MEM`** `{info, address, reference, mask, interval}` waits on a
register, or on memory when `info & 0x10` is set, comparing with the function in
`info & 7`. Memory is byte-swapped according to the address's low two bits
(Xenia's `GpuSwap`). `COHER_STATUS_HOST` (`0x0A31`) is satisfied at once. An
unsatisfied wait polls every 50 us and gives up with a warning after 500 ms.

### Completion points

On the console, a "work done" report lands after the GPU has executed the draws
before it, and once the title reads it, the title may reuse what those draws
read. The parse here runs ahead of the GPU. Before such a report reaches memory,
the command processor must therefore call `vk::renderer::BeforeCompletion`, so
that every guest-memory read owed to earlier draws is made first
([rendering.md](rendering.md#submissions-segments-and-frame-slots)). Reports
that count as completion are `EVENT_WRITE_SHD` and `EVENT_WRITE_CFL`, and any
memory write or `INTERRUPT` after a `WAIT_FOR_IDLE` with no draw since.

## `VdSwap` fills 64 reserved dwords

D3D9 reserves 64 dwords in each present segment for the kernel's commands.
`VdSwap` must write all of them. Otherwise the parse reads the arena's previous
contents as packets. The runtime fills them as Xenia does:

    C0036400   XE_SWAP
    53574150   'SWAP'
    <physical front buffer>                   from the texture header at r8
    <width>, <height>                         from fetch dword 2 at r4: (x & 0x1FFF) + 1, ((x >> 13) & 0x1FFF) + 1
    80000000 x 59                             type-2 no-ops

Xenia also writes the front buffer's fetch constant. The runtime does not,
because the renderer would take it for a texture binding.

## Interrupts and the vblank

The title's callback runs with `r3` = source and `r4` = context, on a 64 KB
guest stack, with `r13` set to the raising thread's KPCR. The console
delivers graphics interrupts on one hardware thread, so the two raising threads
take turns under a mutex.

- **Source 1, command processor.** `INTERRUPT` raises it once per processor bit
  (0-5) in its mask, with `KPCR.CurrentProcessorNumber` (+268) set to that
  processor, because the handler uses it to clear that processor's pending bit.
- **Source 0, vblank.** The vblank thread (with its own KPCR) runs at
  `vk::GuestBlankPeriod()`, which follows the display
  ([rendering.md](rendering.md#presenting)), or at 60 Hz. It writes 1 to the
  display status word at aperture `+0x6544` first: D3D's handler retires queued
  flips only when bit 0 is set. The blank must not depend on frame time,
  because D3D9's swap bookkeeping and the title's clock hang off it. After a
  stall it resumes from now rather than catching up.

The vblank thread also advances `KeTimeStampBundle` every millisecond, as the
console's clock interrupt does. The title's millisecond clock is read from it,
and its timed waits would otherwise end only on blanks.

## The flip handshake

Frames are retired by D3D9's own handshake in the command stream:

1. The present segment puts D3D's flip handler, its argument and a processor
   mask in scratch registers. `SCRATCH_UMSK` writes them back to D3D's
   interrupt block at `SCRATCH_ADDR`.
2. `WAIT_REG_MEM` waits for the write-back.
3. `INTERRUPT` runs D3D's handler (source 1). The handler calls the flip handler,
   which counts the swap, calls the title's block callback, and retires the
   frame or queues it for the vblank.
4. `WAIT_REG_MEM` waits for the request to clear.

This is the only path by which frames are retired. The runtime must not retire
frames or call the block callback itself. A second path makes the retired count
overtake the submitted count, and D3D's present then waits on a meaningless
difference.

## The command-buffer arena (`runtime/gpu/arena.cpp`)

D3D9's command segments come from an arena that is a ring of its own. Before
overwriting any of it, the title polls the progress block at `[device+10896]`
until the command processor has read past:

    +0  sequence counter, +2 per report
    +4  read position, a two-bit lap counter in its low bits

Each segment ends with a trailer of two `EVENT_WRITE_SHD` packets: the position,
then the sequence. `ArenaProgress` holds the position until its sequence
arrives. It applies both only when the sequence is 1 to 1024 ahead of the last
one, and drops them otherwise.

Segments are fixed-size allocations filled only as far as needed, and the
indirect buffer covers the whole allocation. The tail can therefore hold a
well-formed trailer from an earlier lap. Applying that trailer would move the
position backwards, and the producer would wait for ever on an empty ring.
Losing a real report has the same effect. The sequence only moves forward, so
it decides which report is current.
