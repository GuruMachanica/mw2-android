# Rendering

This document covers how draws and resolves from the PM4 stream become Vulkan
work and reach the screen. Stream parsing is in [d3d9-seam.md](d3d9-seam.md),
shader translation in [shaders.md](shaders.md), and the texture cache in
[textures.md](textures.md). The code is in `runtime/gpu/vulkan/`, and
`renderer_state.h` lists the parts.

A draw packet carries only the primitive and the indices. Everything else
(shaders, constants, fetch constants, targets, blend and depth state) is
whatever the register file holds, so `vk::renderer::Draw` takes the register
file plus a `DrawCall`.

The **ring consumer** does everything tied to its point in the stream. It reads
guest memory, chooses targets and pipelines, and fills the arena. It queues the
Vulkan calls to the **recorder thread**. A **window thread** presents. Worker
threads compile shaders and optimised pipelines.

## Render targets: an image per EDRAM surface

EDRAM is not emulated. MW2 neither aliases surfaces nor renders in tiles, so a
surface is a Vulkan image keyed by `TargetKey { baseTile, pitch, host format,
samples, depth }`. The key comes from `RB_COLOR_INFO` / `RB_DEPTH_INFO` and
`RB_SURFACE_INFO` (pitch in bits 0-13, samples in bits 16-17).

- **Depth keys have no pitch.** EDRAM has one depth buffer per base tile, and
  MW2 tests world depth in a pass that describes it at another pitch than the
  pass that wrote it. Depth keys keep the sample count, which must match the
  colour image beside them.
- **Keys hold the host format**, so `8_8_8_8` and `8_8_8_8_GAMMA` at one tile
  are one image, as the title's resolves expect.
- A target is as wide as its pitch and as tall as the bottom of the window
  scissor, each at most 4096. A target that must grow is rebuilt.
- A new target is cleared once. Depth goes to 0 (MW2 tests `GEQUAL` and
  clears to 0). Colour goes to dark blue-grey, so an undrawn surface is not
  mistaken for black.
- Only render target 0 is bound.

| Guest colour format | Vulkan |
|---|---|
| 0, 1, 10 (`8_8_8_8`, `_GAMMA`) | `R8G8B8A8_UNORM` |
| 2, 3, 12 | `A2B10G10R10_UNORM_PACK32` |
| 4, 5 | `R16G16_SNORM`, `R16G16B16A16_SNORM` |
| 6, 7 | `R16G16_SFLOAT`, `R16G16B16A16_SFLOAT` |
| 14, 15 | `R32_SFLOAT`, `R32G32_SFLOAT` |

Depth is `D24_UNORM_S8_UINT`, or `D32_SFLOAT_S8_UINT` on devices without it.
Draws use dynamic rendering. Both attachments are `LOAD`/`STORE`, because a
frame is many rendering instances over the same images and only the title
clears. Barriers at `BeginRendering` and `EndPass` stand in for render-pass
dependencies.

### Clears

- **With a resolve.** `RB_COPY_CONTROL` bits 8/9 clear what the resolve read:
  `RB_COLOR_CLEAR` is ARGB, and `RB_DEPTH_CLEAR` is depth << 8 | stencil.
- **The EDRAM clear idiom.** MW2 draws a rectangle list with depth writes on,
  `ZFunc` `ALWAYS`, and the X/Y viewport scale off. The rectangles come in pairs:
  most of a row at half pitch and twice the samples, then the leftover columns,
  because a surface is not a whole number of 80-sample tiles.
  - In depth-only mode, the rectangles are not drawn. `ClearAliasedDepth` zeroes
    every depth target at or above their base tile. This happens before any
    target is sized, because the scissor is at its 8192 reset value.
  - In colour+depth mode, each half is drawn into the colour surface with the
    lowest sample count at that tile and format whose `pitch << samples` spans
    the same row.
- **Ordinary draws.** Nothing clears through a load op.

## A draw

`Draw` resolves the topology, both shaders (by microcode hash) and the scissor,
and handles the clear idiom. It finds the targets and opens a rendering
instance if they changed. It writes indices, constants and vertex data into the
arena, builds the pipeline and texture set, and queues a `DrawOp` holding only
the state that differs from what the command buffer has bound. Draws that
cannot be made are counted by reason (`Skip`).

Primitives 1-6 map to Vulkan's point, line and triangle topologies, and 12 (line
loop) to a line strip. 8 (rectangle list) becomes triangles `a b c a c d`, with
a fourth vertex `v0 + v2 - v1` appended per rectangle, computed per dword as a
float except where all three corners agree (packed colours).

| State | Registers | Where |
|---|---|---|
| blend, write mask | `RB_BLENDCONTROL0`, `RB_COLOR_MASK` | pipeline |
| culling, winding | `PA_SU_SC_MODE_CNTL` | dynamic |
| depth and stencil tests | `RB_DEPTHCONTROL` | dynamic |
| stencil ref and masks | `RB_STENCILREFMASK(_BF)` | dynamic |
| depth bias | `PA_SU_POLY_OFFSET_*` | dynamic |
| viewport, scissor | `PA_CL_VPORT_*`, `PA_CL_VTE_CNTL`, `PA_SC_WINDOW_SCISSOR_*` | dynamic |
| alpha test | `RB_COLORCONTROL`, `RB_ALPHA_REF` | pixel push constant |

- **Viewport.** The Vulkan viewport is `height = 2 * scale`, `y = offset -
  scale`, **with signs kept**. Xenos expresses +Y up as a negative Y scale.
  Taking the magnitude flips the frame and every winding. A term that
  `PA_CL_VTE_CNTL` disables is scale 1 and offset 0 (Xenia's
  `GetViewportInfo`).
- **Pre-transformed vertices.** With the X/Y scale off, the shader has emitted
  window coordinates (D3D9's `XYZRHW`), which Vulkan would clip away. The
  vertex epilogue applies `(2 / guest pitch, 2 / height, -1, -1)` from push
  constants over a whole-target viewport, and the identity for other draws.
- **Depth bias** uses Xenia's conversion. The offset is scaled by 2^24
  (`D24FS8`) or 2^24 - 1 (`D24S8`), and the slope is divided by 16.
- **Alpha test** runs in the pixel shader, and is forced to `ALWAYS` in
  depth-only mode, where the console runs no pixel shader. Shadow casters have
  none and would otherwise run whatever the stream loaded last.

## The frame arena

Everything a draw reads that is not a texture is copied into one host-visible
buffer. The runtime asks for 512 MB (`MW2_ARENA_MB`) and halves the request
down to 32 MB. The buffer is split into one share per frame slot, each 4 KB
short so that a full 256-vec4 uniform range stays in bounds. A draw that finds
its share full is skipped.

| Set | Contents |
|---|---|
| 0 | dynamic uniform blocks: vertex floats, fetch constants, booleans, loops, pixel floats |
| 1 | textures |
| 2 | the arena as dwords, bound once per command buffer |

- **Float constants.** Each stage reads 256 from its `SQ_VS_CONST` /
  `SQ_PS_CONST` base. The runtime copies only as many as the shader reads (all
  of them under relative addressing), and reuses the copy while the register
  file's write stamp over that range is unchanged.
- **Vertex data is relocated, not mapped.** Each vertex fetch's reachable
  window (lowest to highest index times the stride, plus the fetch tail,
  clipped to the declared size) is copied. Its address in the uploaded fetch
  constant is rewritten to point at the copy. A copy is shared only within
  **one draw**, because the title rewrites dynamic geometry in place during a
  frame.
- **Indices** are byte-swapped from big-endian for every draw, never cached,
  and scanned for their range, ignoring the restart value.

### The shadow of guest memory

The same buffer continues with a 512 MB shadow of guest physical memory, in
which physical address N sits at offset N. A vertex window in pages the title
has not written since they were copied is read there instead of being copied.
`gpu/memory_watch.cpp` tracks writes as Xenia does. Copied pages are made
read-only through both windows of the physical bank, and the title's first
write faults once, which marks the page and makes it writable again.

- A page's copy is replaced only once no submission on the GPU has read it.
- A page rewritten within 1024 frames of its copy waits 2^strikes frames (at
  most 2^10) before it is copied again. This keeps the dynamic-geometry ring
  from costing faults and `mprotect`s on every lap.
- The host kernel must never write into guest memory, because a system call
  fails with `EFAULT` on a read-only page. File reads and network packets go
  through a runtime buffer. Bulk runtime writes call `gpu::watch::WillWrite`.

The texture cache uses the same watch. `MW2_NO_SHADOW=1` (diagnostics builds)
turns the shadow off.

## Resolves

A draw in `Copy` mode is a resolve over the window scissor. `RB_COPY_CONTROL`
selects colour or depth (source 4) and the clears, `RB_COPY_DEST_BASE` gives
the destination, and `RB_COPY_DEST_PITCH` / `_INFO` describe the destination
surface.

**Resolves are not written to guest memory.** They fill a Vulkan image keyed by
destination address, and a texture fetch of that address binds the image.

- **An image per frame slot.** The first resolve of a frame advances to the next
  image, and the frame's later resolves reuse it. Frames overlap on the GPU,
  and the title resolves several shadow cascades into one destination per
  frame.
- The image has the size of the destination surface, exactly so on the frame's
  first resolve, because fetches normalise over the image. Each rectangle lands
  at its own offset.
- **A resolve that lands inside a surface started this frame** goes into that
  surface's image at the matching row, without discarding it. The sun shadow
  map is one 1024x2048 surface filled by two resolves.
- Colour is blitted and also gets an sRGB view. Depth is copied and sampled
  through a depth-only view; the title reads scene depth as a texture.
- **The frame** is a colour resolve of exactly 1280x720 of the title's pixels.
  It is blitted into one of four present images, run through the display
  colour table, and submitted.
  A resolve of any other size is never shown.

A resolve does not end the submission unless the slot's arena share is half used.

## Gamma

- **Encode on write.** Xenos applies a piecewise-linear gamma curve to RGB
  written into an `8_8_8_8_GAMMA` target, where MW2 draws the world. The pixel
  shader does the same (Xenia's `LinearToPWLGamma`) when its push-constant flag
  is set.
- **Linearise on read.** A fetch whose component signs say `gamma` samples
  through an sRGB view or format, which matches the Xenos curve to within a
  code value.
- Both are required. With only one, the post chain compounds the encoding.
- **Display colour table.** The title writes `DC_LUT_30_COLOR` 256 times from
  `DC_LUT_RW_INDEX` 0, which auto-increments, with channels selected by
  `DC_LUT_WRITE_EN_MASK`. Each entry is 10 bits per channel, blue lowest. Only
  a whole sweep is a curve, so the table is published under a lock at entry 255,
  and frames are shown untouched until then. `display_table.cpp` applies it as
  a compute pass on the present image.

## Resolution scale

`MW2_SCALE=2` or `3`, read once at start-up, makes every EDRAM surface, every
resolve copy and the present images that many times wider and taller. The
title is not told. A `Target`'s and a `Resolved`'s sizes, the keys, and every
rectangle worked out from the registers stay in the title's pixels, and are
multiplied where they are handed to Vulkan: image extents, render areas,
viewport and scissor, and the regions of resolves, copies and blits. So the
frame is still "a colour resolve of 1280x720". The scale is lowered until
4096 of the title's pixels fit one of the device's images.

The scale is a whole number, so the title's scissors and resolve rectangles
land on pixel boundaries, and it applies to every surface, since the passes
read each other's at matching sizes. Three things are not a plain
multiplication:

- **Fetches of a resolve's copy.** The translated shader takes a texture's
  size from the bound image, for half-texel offsets and unnormalised
  coordinates, and a copy is larger than the surface the title means. Each
  draw pushes a bit per slot bound to a copy, and a shader built under a scale
  divides those slots' sizes by it. A shader built without one has no such
  code ([shaders.md](shaders.md)).
- **Occlusion counts** are divided by the scale squared: the title compares
  them with numbers of its own pixels.
- **Depth bias.** The slope term is multiplied by the scale, as Xenia does: a
  slope is depth per pixel, and the pixels are smaller.

The launcher's RESOLUTION entry keeps the scale in `.env` as
`MW2_SCALE=<n>` ([switches.md](switches.md#the-settings-file)).

## Multisampling

The title's 2x and 4x surfaces are drawn with that many samples. The count is in
the target, pipeline and output-library keys, rounded up to one the device
supports for colour, depth and stencil. Multisampling needs Vulkan 1.2 and a
`SAMPLE_ZERO` depth resolve. Without them, or under `MW2_NO_MSAA=1`, everything
is 1x. `MW2_MSAA=<n>` forces n.

A multisampled image cannot be blitted, copied or sampled, so each one has a
single-sampled **twin**, and every read goes through it. Colour reaches the
twin through `vkCmdResolveImage`, which averages as the console does. Depth
reaches it through an empty rendering instance with `SAMPLE_ZERO`, because an
averaged depth describes a surface nothing was drawn at. Sample positions are
Vulkan's standard ones.

## Submissions, segments and frame slots

There are three frame slots, each with a command pool, a fence, an arena share
and a submission serial. `BeginFrame` moves to the next slot and waits only if
the GPU still holds it. A submission is normally one frame.

A submission is cut into **segments** at each completion point
([d3d9-seam.md](d3d9-seam.md#completion-points)). Once the title learns that
draws have finished, it may reuse the memory they read, which the console's GPU
had already read. So `BeforeCompletion` closes the segment:
`vk::textures::EndSegment` re-reads the segment's watched textures, and the
draws end in a command buffer of their own. Each segment is submitted as its
uploads followed by its draws. `BeforeStreamWrite` also closes a segment before
the image pool's copy overwrites memory the segment binds.

Before an image a submission may use is destroyed (a target that grows, or a
resolve image that is replaced), `RetireBeforeDestroy` submits and waits,
drains the recorder, and idles the device. Otherwise a command buffer points at
freed memory and the GPU page-faults.

## The recorder thread

`vk::record` queues each Vulkan call as a lambda holding a copy of its
arguments, in a byte ring. The recorder thread makes the calls in order,
including submissions and the frame's hand-off to the window. The swap is
parsed on the consumer, so the title's frame retires at parse time.

- A queued call must copy what it uses. It must never point at a local or read
  `g.`, which will have moved on by the time the call runs.
- A slot's fence means nothing until the recorder has submitted to it.
  `WaitForSlot` first waits for the recorder to reach `slot.queuedAt`.
- Anything that destroys what a frame may use, or that submits on its own,
  calls `vk::record::Drain` first.

`MW2_RECORD_THREAD=0` (diagnostics builds) makes the calls on the consumer.

## Presenting

The frame resolve waits (`vk::WaitUntilTaken`) until the window has copied out
the present image it is about to reuse. With four present images, the renderer
can run three frames ahead. The window presents every frame once, in order,
one per blank (`FIFO`). Frames the window has not taken within 250 ms are
dropped, so a hidden window never stalls the game. The window is resizable and
letterboxed. `F8` or `MW2_FULLSCREEN=1` switches to borderless fullscreen.

**The guest's blank follows the display.** On the console the blank the title
counts is the display's own. `VK_KHR_present_wait` timestamps each present.
The display period comes from the mode's exact rate, or from a slow average of
single-frame gaps. For a 59-61 Hz display, `vk::GuestBlankPeriod` returns that
period, 0.5% longer while more than 1.5 frames wait behind the one on screen,
so that latency drains unseen. It is never shorter. It returns 0, and the
vblank thread keeps its own 60 Hz, when the display runs at another rate,
present wait is missing, or nothing has been shown for half a second.

## Occlusion queries

The title brackets counted draws with two `EVENT_WRITE_ZPD` events, with the
record address in `RB_SAMPLE_COUNT_ADDR` (`0x2325`). A query owns 64 bytes: the
end record at the base and the begin record at +32. A record is eight
**little-endian** dwords (D3D reads them with `lwbrx`):

    +0 total  +8 z-fail  +16 z-pass  +24 stencil-fail     (lanes A and B)

The title computes the end record's z-pass minus the begin record's. D3D
writes `FFFFFEED` into the z-pass lanes and polls until they change, so **every
end record must eventually be written**, or the title hangs.

- Begin writes zeros at once and resets 64 queries of a 256-query ring.
- A Vulkan query cannot span rendering instances, so the bracket opens one in
  each instance it covers and sums them.
- End answers 0 at once if nothing was covered. Otherwise the result is
  written by `CollectOcclusionQueries` (in the consumer loop and during
  `WAIT_REG_MEM` polls) once the GPU has finished. Results go out in the order
  the title closed the brackets, saturated at `0x7FFFFFFF`.

## Pipelines

`PipelineKey` holds the two shader hashes, the attachment formats, the
topology, `RB_BLENDCONTROL0`, `RB_COLOR_MASK` and the sample count. Culling and
the depth and stencil tests are dynamic state. Dynamic rendering and extended
dynamic state are required.

On the console a shader is ready as soon as it is loaded. With
`VK_EXT_graphics_pipeline_library` the runtime compiles it at that point too
(`renderer_libraries.cpp`, `runtime/shader_preload.cpp`):

- `T_D3D_InitPixelShader` / `T_D3D_InitVertexShader` are hooked. The shader
  object's header (magic `0x102A11xx`) is at +40 (pixel) or +872 (vertex). Its
  seventh word locates `{offset in program, byte length}`, which gives exactly
  the bytes the stream later `IM_LOAD`s. Workers compile each shader as a
  pre-rasterisation or fragment-shader library.
- **A fragment library must carry the depth format in its own rendering info.**
  Without it, the library legally ignores depth and stencil state, and every
  draw comes out empty.
- State libraries are made per topology (vertex input) and per blend, mask,
  formats and samples (output). A draw fast-links the four. An idle-priority
  thread re-links them with link-time optimisation and swaps the result in.
- Workers pause during play, defined as 30 consecutive world frames, the last
  under 500 ms ago. A world frame has at least 8 colour draws into a
  multisampled target, or 200 into any target. Shaders not seen at load are
  compiled at their first draw. D3D patches vertex fetches per vertex
  declaration, so some vertex shaders exist only once bound.

Without pipeline libraries, or under `MW2_NO_PIPELINE_LIBRARIES=1`, whole
pipelines are built at their first draw.

`MW2_SHADER_CACHE=<file>` records every pipeline a run builds: microcode,
formats and state (`SMW2`, version 3). The next run rebuilds them at start-up.
It has to be recorded, because the state a shader pair is drawn with exists
only in a previous run. The file is written back as a union, so it never
shrinks. `MW2_PIPELINE_CACHE=<file>` persists the driver's `VkPipelineCache`.

## Not implemented

- Resolve write-back: the CPU cannot read resolved pixels from guest memory.
- Memory export in shaders. Its one use, the image pool's block copy, is made
  on the CPU at its draw (`runtime/image_move.cpp`).
- Multiple render targets, the console's sample positions, and alpha to
  coverage (MW2 never sets `RB_COLORCONTROL`'s alpha-to-mask bit).
