# Textures

How a Xenos texture is described, how it is laid out in guest memory, and how
the runtime turns it into a Vulkan image that matches what the console's GPU
would sample at the moment a draw executes.

| Piece | Where |
|---|---|
| Fetch constant, tiling, level layout, untiling | `runtime/gpu/texture.{h,cpp}` |
| Xenos to Vulkan formats and swizzles | `runtime/gpu/vulkan/texture_formats.{h,cpp}` |
| Images, samplers, descriptor sets, re-reads | `runtime/gpu/vulkan/texture_cache.{h,cpp}` |
| The images' memory, in blocks | `runtime/gpu/vulkan/image_memory.{h,cpp}` |
| Write watch on guest pages | `runtime/gpu/memory_watch.{h,cpp}` |
| The image pool's block copy | `runtime/image_move.{h,cpp}` |
| Upload round-trip test | `tools/upload_texture.cpp` (target `upload-texture`) |

## The fetch constant

A texture is described entirely by its fetch constant: six dwords per slot,
thirty-two slots, in the register file at `0x4800`. A shader's `tfetch` only
names the slot. The same window also holds vertex fetch constants (three per
six-dword group); the low two bits of dword 0 say which a slot holds (2
texture, 3 vertex). Field layout follows Xenia's `xe_gpu_texture_fetch_t`
(`gpu::TextureFetch`):

| Dword | Bits | Field |
|---|---|---|
| 0 | 0..1 | type |
| 0 | 2..9 | sign per component: unsigned, signed, biased, gamma |
| 0 | 10..18 | clamp X, Y, Z (3 bits each) |
| 0 | 22..30 | pitch in texels >> 5 |
| 0 | 31 | tiled |
| 1 | 0..5 | format |
| 1 | 6..7 | endianness: none, 8in16, 8in32, 16in32 |
| 1 | 10 | stacked (2D array) |
| 1 | 12..31 | base address >> 12 (physical) |
| 2 | | size minus one: 1D 24 bits; 2D 13+13 (+6 bits of stack depth at 26); 3D 11+11+10 |
| 3 | 1..12 | swizzle, 3 bits per component |
| 3 | 13..18 | exponent adjust (signed) |
| 3 | 19..24 | mag, min, mip filter (2 bits each): point, linear, base map |
| 3 | 25..27 | anisotropy |
| 4 | 2..5, 6..9 | min and max mip level |
| 4 | 12..21 | LOD bias, signed, in 32nds |
| 5 | 0..1 | border colour |
| 5 | 9..10 | dimension: 1D, 2D/stacked, 3D, cube |
| 5 | 11 | packed mips |
| 5 | 12..31 | mip address >> 12 (physical) |

Addresses are GPU physical addresses, not addresses in the runtime's flat
guest space; they must be resolved with `kernel::FromPhysical`. Read as flat
addresses they land in untouched memory, which looks exactly like a texture
the title has not filled yet.

## Layout in guest memory

`gpu::ExtentsOf` (Xenia's `GetSubresourcesFromFetchConstant` and
`GetGuestTextureLayout`) says where the levels are; `gpu::ReadTexture` reads
them into a linear, host-endian buffer, still in the guest's block format, one
level after another.

**Levels.** Level 0 is at the base address with the fetch constant's pitch.
Levels 1 and up follow one another from the mip address, each laid out as if
the base were a power of two on each side, so a level's stride is not its own
size. Pitch and height are rounded up to a 32x32-block tile, for linear
textures too; a linear mip's rows are also 256-byte aligned. Each cube face or
array slice of a level starts on a 4 KB boundary.

Which levels exist:

- no mip address means no chain, whatever the level range says;
- a texture whose min level is above 0 may point both addresses at the chain,
  and then has no base;
- the mip filter is not consulted, because a fetch instruction may override it.

**Packed mips.** When the packed-mips bit is set, from the first level whose
shorter side is 16 texels or less, every remaining level is stored in a single
tile, each at its own offset (`PackedOffset`, Xenia's `GetPackedMipOffset`):
the first three a quarter, an eighth and a sixteenth of a tile along the
shorter side, the rest along the longer one; a volume's 1x1 levels go along its
third axis. Packing can start at level 0, in which case level 0 itself sits
inside the tile rather than at the base address. Reading from the tile's
corner reads other levels of the same texture, which looks almost right.

**Tiling.** A tiled 2D surface groups blocks into 32x32 macro tiles with the
address scattered across two banks and four pipes (`TiledOffset2D`, Xenia's
`Tiled2D`). A volume's macro tile is 32x16x4 blocks and the slice index takes
part in the address (`TiledOffset3D`, Xenia's `Tiled3D`), so a volume cannot be
read as a stack of 2D-tiled slices.

**Endianness.** Guest memory is big-endian; each block is swapped as the fetch
constant's endian field says (`8in16` for the DXT formats, `8in32` for
`8_8_8_8`). A block's internal layout is the format's business.

**What is uploaded.** A cube map uploads six faces as an array, a volume all
its slices as a 3D image, a stacked 2D texture its first slice. 96-bit formats
(block size not a power of two) are not read.

## Formats

`vk::formats::VulkanFormatFor`. The block-compressed formats go across
byte for byte, so the untiler's output is the upload and nothing is decoded on
the CPU.

| Xenos (id) | Vulkan |
|---|---|
| 8, 8_A, 8_B (2, 8, 9) | R8 |
| 5_6_5 (4) | R5G6B5 |
| 8_8_8_8 (6, 14, 50) | R8G8B8A8 |
| 2_10_10_10 (7, 54) | A2B10G10R10 |
| 8_8 (10) | R8G8 |
| 4_4_4_4 (15) | R4G4B4A4 |
| DXT1 (18, 51) | BC1 |
| DXT2_3 (19, 52) | BC2 |
| DXT4_5 (20, 53) | BC3 |
| 16, 16_16, 16_16_16_16 (24, 25, 26) | R16 / R16G16 / R16G16B16A16 unorm |
| 16_FLOAT variants (30, 31, 32) | R16 / R16G16 / R16G16B16A16 sfloat |
| 32_FLOAT variants (36, 37, 38) | R32 / R32G32 / R32G32B32A32 sfloat |
| DXN (49) | BC5 |
| DXT3A (58) | R8, expanded on the CPU |
| DXT5A (59) | BC4 |

- **DXT3A** is sixteen explicit four-bit values per block (the alpha block of
  DXT2/3), not BC4's endpoints and indices. Both are eight bytes a block, so
  treating one as the other passes every size check and decodes to noise.
  `ReadTexture` expands it to one byte a texel. MW2 stores the world's light
  map in it.
- **Gamma.** A fetch constant whose colour components are signed `gamma` asks
  the sampler to linearise. The image view uses the sRGB counterpart
  (`SrgbFormatFor`: R8G8B8A8, BC1, BC2, BC3); Xenos' piecewise curve and sRGB
  agree to within a code value. Alpha stays linear.
- **Not supported:** CTX1 (60), which no BC format matches;
  DXT3A_AS_1_1_1_1 (61); the signed, biased and integer component modes.

**Swizzle.** The fetch constant's swizzle (3 bits per component: 0..3 a
channel, 4 zero, 5 one) maps onto the image view's component mapping. It is
not optional: a font atlas with its glyphs in one channel samples as zero
without it. The identity is `0x688`; zero means "X in all four". A guest
format with fewer channels than its host format repeats its last channel
(`HostSwizzleFor`): one-channel formats read R in all four, two-channel ones
(including DXN, whose Y the title reads from alpha) read RGGG. The guest
swizzle is composed through that (`ComposeSwizzle`).

## Images and samplers

`vk::textures::Upload(fetch)` returns an id for the texture the fetch constant
describes, uploading it the first time it is seen.

- **Kinds.** 1D textures are 2D images one row tall (the translator samples
  every 1D fetch as 2D). Cubes are cube images, volumes 3D images. A
  descriptor's view must match the kind the shader declares; where the title
  binds a 2D texture to a slot the program reads as a cube or volume, a
  fallback image of the declared kind is bound instead. Unbound slots get a
  1x1 image, since the layout declares all thirty-two.
- **Size limit.** An extent beyond `maxImageDimension2D` is rejected before
  anything is created: creating one is undefined behaviour, not an error, and
  a misparsed fetch constant can describe one. Failures are cached per fetch
  constant.
- **Sampler**, one per distinct state, from the fetch constant:
  - mag/min filter; mip filter linear or nearest. `BaseMap` samples the lowest
    level alone: `maxLod = minLod + 0.25`, so the min filter can still be
    chosen while every level choice rounds to the lowest (Xenia's approach).
  - `minLod` is the lowest level the image holds a picture for.
  - Anisotropy field 2..5 gives 2:1..16:1, capped by the device.
  - Clamp modes map directly; the "halfway" modes clamp at the edge texel's
    centre, which Vulkan lacks, and fall back to the plain edge clamps.
  - Cubes clamp to edge and, where `VK_EXT_non_seamless_cube_map` is
    available, filter each face on its own as Direct3D 9 does.
- **Resolved render targets** that the title samples back are not read from
  memory; the renderer lends the resolve's view (`Adopt`), see
  [rendering.md](rendering.md).
- **One image per texture.** An id is an image and a sampler. The six fetch
  dwords less the sampler's bits (clamps, filters, anisotropy, border colour)
  name the image, so a texture bound under several sampler states is held
  once.
- **Memory** comes from 64 MB blocks (`image_memory.cpp`), a range per image.
  A level streams tens of thousands of small textures through the cache, and
  an allocation each is what a driver is worst at: freeing one took over half
  a millisecond with forty thousand live. Anything over a quarter of a block
  gets an allocation of its own.
- **Letting go.** The console holds no copies: when the title puts another
  texture where one was, the old one is gone. `NewFrame` looks over the cache
  once every 64 frames, a slice of the images a frame:
  - An image is *idle* once unbound for 600 frames, which is past any
    submission still running, plus one round of the sweep.
  - An idle image whose pages the write watch saw written, and whose bytes
    then sign differently, is released. Bound again it would have had to be
    read again anyway. This is what keeps the cache near what the level is
    using: without it a streaming level left two gigabytes of such copies in
    seven minutes.
  - Past the budget (half the device-local memory, or
    `MW2_TEXTURE_BUDGET_MB`) the idle images bound longest ago go, down to
    three quarters of it.
  - A descriptor set not handed out for 600 frames is freed back to its pool.
    A set is used no later than its images are bound, so an idle image has no
    set left.
  - Released images are destroyed a few a frame (half a millisecond's worth).
  Nothing here waits for the device.

## Keeping images in step with guest memory

A fetch constant always names the same image. A title that rewrites a texture in
place (MW2 rewrites its model-lighting table, a `512x256x4 8_8_8_8` volume in
which each model owns a 4x4 patch) leaves the fetch constant unchanged, so the
bytes themselves must be watched.

**Write watch.** Where the texture's pages are in the physical bank,
`gpu::watch::Track` is called *before* the read and returns a stamp; while
`gpu::watch::Unwritten` says no page has been written since, the texture is
unchanged for certain and nothing is hashed. The watch makes a page read-only
and takes one fault on the first write (see
[rendering.md](rendering.md#the-shadow-of-guest-memory)). Unlike the vertex
shadow, `Track` never backs off from pages the title keeps writing.

**Signing.** A texture that cannot be watched is hashed over every byte of its
base and chain (sampling misses small patch rewrites). An unchanged texture is
signed at most once per frame, then every 2, 4, ... up to 16 frames. A texture
that has ever changed, or that came up empty, is signed every frame. A watched
texture whose pages were written is signed at once, whatever the schedule.

**Ranges written by the runtime.** `vk::textures::MemoryWritten` marks any
texture read from a range the runtime itself just wrote (the pool copy below)
for signing at its next bind.

### Read when the draw would execute

The console's GPU reads a texture when a draw executes, not when the command
processor parses it. Two rules follow:

1. **Not too early.** The parse can run while the title is still writing the
   texture, or before a streamed image's bytes arrive. Textures that have been
   rewritten, and textures that came up empty, must be read again at the end
   of each segment that binds them.
2. **Not too late.** The title frees a streamed texture's memory and reuses it
   once the command processor reports the draws before it done. Every read owed
   to a draw must happen before that report.

A submission is therefore cut into **segments** at every point where the
command processor tells the title that work has finished
(`vk::renderer::BeforeCompletion`, called from `command_processor.cpp`):

- `EVENT_WRITE_SHD` and `EVENT_WRITE_CFL` (end-of-pipe writes; D3D's fence is
  one);
- any memory write or `INTERRUPT` after a `WAIT_FOR_IDLE` with no draw since.

A plain `MEM_WRITE`, scratch write-back or read-pointer write happens when the
packet is fetched, ahead of earlier draws, so it tells the title nothing and is
not a completion point.

At each segment end `vk::textures::EndSegment` re-reads the segment's
rewritten and empty textures and re-stages any that changed. Each segment's
uploads go into a command buffer of their own, submitted ahead of the
segment's draws and after the previous segment, so the frame remains one
submission ordered `uploads 1, draws 1, uploads 2, draws 2, ...`. No image is
versioned. There are four upload slots, each with a staging buffer that a
submission's uploads are sub-allocated from; an upload outside a submission is
submitted and waited for on its own.

**Empty blocks.** `EmptyPercent` counts 64-byte spans that are entirely zero
(memory nothing has written is zero in long runs; a dark or black compressed
texture is not). Above 60% a texture is marked as read from an empty block and
re-read at segment end until it drops to 25% or less. With diagnostics,
`MW2_MARK_EMPTY=1` binds flat magenta in place of such a texture in the world
pass for 60 frames after it is first seen empty, and textures still empty at
segment end are logged with the pool copies around them.

## The image pool's block copy

MW2 keeps streamed images in a compacting pool. To relocate a block, the pool
(in the campaign build, `sub_823A5CB8`) allocates the new home, queues the move
(`sub_823A5780`) and points the image record at the new address. The move is
flushed through `T_Image_FlushMove` (`runtime/title.h`), which builds a surface
header over the two blocks and has the **GPU** copy them: one draw whose vertex
shader fetches the source and memory-exports it to the destination, with the
export stream constant in `c0.x`:

```
c0.x = 0x40000000 | (destination physical address / 4)
```

The translator drops memory exports ([shaders.md](shaders.md#exports)), so
`runtime/image_move.cpp` makes the copy on the CPU, at that draw:

1. A hook on `T_Image_FlushMove` records `{destination, source, size, stream
   constant}` before the title's own call writes the draw, so the parse never
   meets the draw first.
2. At every draw while copies are pending, the command processor calls
   `imagepool::AtDraw(c0.x, vertex shader hash)`. A match makes the copy there:
   every draw queued before it sees the old bytes, every one after the new.
   Once the copy shader is known, a matching `c0.x` under another shader is not
   a copy, because `c0` outlives the draw that set it.
3. `imagepool::AtFrameEnd` makes any copy whose frame the parse has left
   without meeting its draw, so a block is never left uncopied. With nothing
   consuming the command stream the copy is made immediately.

Before copying, `vk::renderer::BeforeStreamWrite` ends the current segment if
it samples the destination, so draws before the copy keep the old texture. The
copy uses `gpu::watch::WillWrite` to unprotect the range in one call and then
`vk::textures::MemoryWritten`.

The copy must be made at its draw. Made when the pool asks, it lands ahead of
draws the title has already queued that still name the block, and those draw
whatever the pool lays there next. Not made at all, the destination keeps
whatever it held before, since the image is not streamed again.

## Checking the path

- **Upload round trip.** Because block formats go across untouched, an image
  copied back off the device must return the uploaded bytes exactly.
  `upload-texture [--format=<n>] [--size=<w>x<h>]` does this for every format
  with a Vulkan equivalent; sizes that are not a multiple of the block size
  (`--size=17x9`) exercise the copy-region row length.
- **By eye.** A wrong tiling function produces a buffer of the right size full
  of plausible bytes, so only a picture confirms it. `MW2_DUMP_TEXTURES=<dir>`
  writes each distinct texture as PNM, each mip level beside it
  (`gpu::DecodeToRgba`, which exists only for this); `MW2_DUMP_TEXTURES_RAW=1`
  also writes the guest bytes for offline layout experiments. A reimplemented
  offline untiler must first reproduce a known-good texture before its output
  is trusted.
