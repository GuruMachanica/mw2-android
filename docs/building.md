# Building from source

The retail Modern Warfare 2 disc's executables are converted to C++ with
[XenonRecomp](https://github.com/hedge-dev/XenonRecomp), compiled as native
x86-64, and linked with a host runtime that stands in for the console's kernel,
GPU (through Vulkan) and audio hardware ([runtime.md](runtime.md)).

The game data, the generated C++ and the XenonRecomp checkout are gitignored.
Everything under version control is hand-written or a patch.

## Requirements

- `cmake`, `ninja-build`, `clang-18`, `lld-18`, `python3`, `git`.
- The Vulkan headers and loader (`libvulkan-dev`). Without them the runtime
  builds with no window.
- SDL3 is fetched and linked statically; on Linux it needs the usual
  development packages for its video, audio and input backends (X11, Wayland,
  ALSA/PulseAudio/PipeWire, udev, dbus). `.github/workflows/release.yml` lists
  them.
- The retail ISO, or at least `mw2/default.xex` and `mw2/default_mp.xex`.

## build.sh

`./build.sh` does everything, in order:

1. clones XenonRecomp at a pinned commit and applies
   `patches/xenonrecomp-mw2.patch` (an existing `XenonRecomp/` is reused as it
   is);
2. builds XenonRecomp and XenonAnalyse;
3. extracts `default.xex` and `default_mp.xex` from the ISO into `mw2/`, and
   every `.ff` and `.pak` into `mw2/game/` (files already there are kept);
4. writes the flat PE image (`mw2/default.pe` or `mw2/default_mp.pe`) with
   `tools/xexdump.py`;
5. finds jump tables with XenonAnalyse (`config/mw2_switch_tables.toml`,
   `config/mw2mp_switch_tables.toml`);
6. recompiles into `ppc/` or `ppc_mp/`;
7. generates `ppc_recomp_shared.h` and the kernel import stubs
   (`tools/genshared.py`, `tools/gen_kernel_stubs.py`);
8. configures and builds the runtime with CMake.

| variable | effect |
|---|---|
| `TITLE=sp\|mp` | `sp` (default): `default.xex`, the campaign and special ops. `mp`: `default_mp.xex`, the multiplayer. Each has its own recompiled tree, switch tables, recompiler config and build directory |
| `RELEASE=1` | builds without diagnostics (`-DMW2_DIAGNOSTICS=OFF`) and, on Linux, with the C++ runtime linked statically (`MW2_PORTABLE`); adds `-release` to the build directory |
| `ONLINE=none\|lan\|steam` | the online service ([multiplayer.md](multiplayer.md)); `none` (default) keeps system link on this machine |
| `WINDOWS=1` | cross-compiles for Windows with llvm-mingw; the build directory becomes `build-win...` and the executable `mw2.exe` |
| `LLVM_MINGW=<dir>` | the unpacked [llvm-mingw](https://github.com/mstorsjo/llvm-mingw) release, required by `WINDOWS=1` |
| `ISO=<path>` | the disc image. Without one, `mw2/default.xex` and `mw2/default_mp.xex` are enough to build, and no game data is extracted |
| `BUILD_DIR=<dir>` | builds there instead of the default directory |
| `REGENERATE=0` | keeps the recompiled tree already there (skips steps 5-7), for a second build of the same title, e.g. with another `ONLINE` |
| `CMAKE_EXTRA` | passed to the configure step (a compiler launcher, `FETCHCONTENT_BASE_DIR`, ...) |

Build directories:

| | campaign | multiplayer |
|---|---|---|
| diagnostic | `build/` | `build-mp/` |
| `RELEASE=1` | `build-release/` | `build-mp-release/` |
| `WINDOWS=1` | `build-win/`, `build-win-release/` | `build-win-mp/`, `build-win-mp-release/` |

A second build directory reuses the SDL3 and FFmpeg sources `build/` fetched.

## Running

A player's copy starts with no arguments, installs the game from the disc into
`game/` beside itself on first start (or with `--install <iso or folder>`), and
decrypts the executable at every launch ([runtime.md](runtime.md#loading-the-image)).
A development run names the image and the game folder:

    ./build/mw2 mw2/default.pe mw2/game
    ./build-mp/mw2 mw2/default_mp.pe mw2/game

The multiplayer hosts a system-link match to reach a map:

    MW2_NET_LINK=1 MW2_CONSOLE="8:map mp_afghan" ./build-mp/mw2 mw2/default_mp.pe mw2/game

The switches are in [switches.md](switches.md).

## CMake options

| option | default | effect |
|---|---|---|
| `MW2_TITLE` | `sp` | which executable: `sp` or `mp` (defines `MW2_TITLE_MP`, selecting the addresses in `runtime/title.h`) |
| `MW2_DIAGNOSTICS` | `ON` | traces, dumps, statistics, end-of-run reports, the stutter detector and pacing timeline, the flash hunt, the write watchpoint and the headless harness (walker, input script, run deadlines, watchdog); see `runtime/diagnostics.h`. `OFF` unsets every diagnostic switch whatever the environment says |
| `MW2_LOGGING` | `ON` | `OFF` compiles out every log line, warnings included |
| `MW2_TRACE_INDIRECT` | `ON` | the generated code checks an indirect call's target and reports a missing one instead of jumping to null |
| `MW2_ONLINE` | `none` | the online backend, a file under `runtime/online/` |
| `MW2_PORTABLE` | `OFF` | links libstdc++ and libgcc statically (Linux) |
| `MW2_USE_SDL` | `ON` | SDL3 for the window, input and audio |

CMake reads the SHA-256 of both `mw2/*.xex` at configure time; the installer
accepts only those executables.

## Windows

`WINDOWS=1 TITLE=mp RELEASE=1 LLVM_MINGW=<dir> ./build.sh` produces
`build-win-mp-release/mw2.exe` with `cmake/mingw-w64.cmake` (clang for
`x86_64-w64-mingw32` against the UCRT). XenonRecomp itself is still built with
the host's clang-18. The executable needs nothing beside it:

- the C++ runtime and threads are linked statically;
- `vulkan-1.dll` comes with the GPU driver, so `cmake/vulkan-windows.cmake`
  fetches the Vulkan headers and makes the import library from them;
- the executable asks for 16 MB thread stacks (Linux gives 8 MB), since the
  recompiled code nests deeply on the host stack;
- a release build is a windowed program (`-mwindows`) that attaches to the
  terminal it was started from, if any.

It needs Windows 10 1803 or later, for the placeholder mapping of guest memory.

## Release workflow

`.github/workflows/release.yml` runs by hand from the Actions tab with a version
tag. It builds both titles with both `steam` and `lan` for Linux (Ubuntu 22.04,
so the binaries need glibc 2.35 at most, with Vulkan-Headers 1.3.275 installed
over the system's) and for Windows (cross-compiled on Ubuntu with llvm-mingw),
with ccache, then packages `mw2-sp` and `mw2-mp` with the README per platform
and service, and drafts a GitHub Release. The two executables come from a
private repository named by the secret `ASSET_REPO`, read with
`ASSET_REPO_TOKEN`, which holds `default.xex` and `default_mp.xex` at its root.

## Layout

| path | what |
|---|---|
| `build.sh` | the whole build |
| `CMakeLists.txt`, `cmake/` | the runtime's build; the Windows toolchain and Vulkan import library |
| `patches/` | local changes to XenonRecomp |
| `config/MW2.toml`, `config/MW2MP.toml` | recompiler config, campaign and multiplayer |
| `ppc/`, `ppc_mp/` | generated C++ and its generated glue (gitignored) |
| `runtime/` | the host runtime |
| `tools/` | generators, reverse-engineering scripts, capture helpers |
| `tools/routes/` | recorded walks across `mp_afghan` for `MW2_WALK_PATH` |
| `third_party/ffmpeg-xenia/` | builds the XMA frame decoder from Xenia's FFmpeg branch, fetched at configure time |
| `docs/` | this documentation |

### The runtime

| path | what |
|---|---|
| `main.cpp` | reserves the guest space, loads the image, starts the title, ends the run |
| `guest.h`, `guest_memory.*` | guest pointers, big-endian values, the address space |
| `env.h`, `diagnostics.h`, `log.h`, `counter.h`, `words_hash.h` | switch readers, the diagnostics gate, the log, small helpers |
| `platform.*` | what Linux and Windows spell differently |
| `title.h` | the guest addresses the runtime names, per executable |
| `install/` | the player's install from disc, XEX decryption, the executable check |
| `kernel/` | kernel and XAM imports: memory, objects and waits, threads, files, content and profile, input, networking, video, audio |
| `apu/` | the XAudio render driver and the XMA decoder |
| `online/` | the online service backends (`none`, `lan`, `steam`) |
| `gpu/` | the command processor: ring and PM4 packets, interrupts, D3D9's command-buffer arena, texture fetch and tiling, the D3D9 hooks, the write watch (`memory_watch.*`) |
| `gpu/vulkan/` | the Vulkan renderer: draws, targets, resolves, frames, pipelines and pipeline libraries, the shader translator, the texture cache, the recorder thread, the display table, the presenter window, RenderDoc capture |
| `image_move.cpp` | the image pool's block copy, which the console makes with a memory-export draw |
| `shader_preload.cpp` | hands shaders loaded with a level to the renderer to compile |
| `engine.h`, `engine_log.cpp`, `predicate_waits.cpp`, `console.cpp` | hooks into the engine: print and error paths, spin waits, the console command buffer |
| `player.cpp` | the headless walker and route recorder |
| `stutters.cpp`, `pacing_trace.cpp` | the stutter detector and the frame pacing timeline |
| `crash.cpp`, `watchpoint.cpp`, `mmio_hook.h` | the fault handler, the write watchpoint, the hardware-register store hook |

### Tools

| path | what |
|---|---|
| `xdvdfs.py`, `xexdump.py`, `xexinfo.py` | read the ISO; decrypt and decompress an XEX2 into a flat PE; dump its headers |
| `title.py` | which executable the other tools work on (`MW2_TITLE=sp\|mp`) |
| `fixbounds.py` | explicit function boundaries for leaf functions holding jump tables |
| `genshared.py`, `gen_kernel_stubs.py` | `ppc_recomp_shared.h`, the import list, and stubs for unimplemented imports |
| `extract_shaders.py` | every shader's microcode from the fastfiles |
| `xenos_shader.py`, `xenos_isa.py` | Xenos microcode disassembler |
| `translate_shader.cpp`, `upload_texture.cpp` | the `translate-shader` and `upload-texture` tools: the shader translator and texture upload against a real driver, without the game (Linux) |
| `find_in_title.py` | finds the other executable's copy of a function by its code |
| `analyze.py`, `callgraph.py`, `xref.py`, `strings_in.py` | questions about the guest image: indirect branches, the call graph, address references, strings |
| `d3d_region.py`, `classify_d3d.py`, `resource_audit.py` | map the statically linked D3D9 ([d3d9-seam.md](d3d9-seam.md)) |
| `capture_by_hand.sh`, `capture_xenia.sh` | RenderDoc captures from this runtime or from Xenia |
| `rd_run.sh` | runs a RenderDoc analysis script and closes RenderDoc afterwards; the only way to run one |
| `rd_thumbs.sh` | the picture from every `.rdc` as a PNG, plus a contact sheet |
| `flash_hunt.sh`, `flash_hunt_report.py`, `flash_draws.py` | the flash hunt: mark flashes in play, then compare the marked frame's draws with its neighbours' |

### Docs

| file | what |
|---|---|
| [building.md](building.md) | this page |
| [runtime.md](runtime.md) | how the runtime stands in for the console |
| [switches.md](switches.md) | every `MW2_*` switch |
| [d3d9-seam.md](d3d9-seam.md) | where the title meets the GPU: the statically linked D3D9, the ring, the flip handshake |
| [shaders.md](shaders.md) | Xenos microcode translated to SPIR-V |
| [textures.md](textures.md) | fetch constants, tiling, upload and invalidation |
| [rendering.md](rendering.md) | render targets, resolves, pipeline state, gamma and MSAA |
| [gameplay.md](gameplay.md) | getting from the menu into a level |
| [multiplayer.md](multiplayer.md) | the multiplayer executable and the online services |
| [audio.md](audio.md) | the audio driver and the XMA decoder |
| [saves.md](saves.md) | content packages, saved games and the profile |

## Local changes to XenonRecomp

`patches/xenonrecomp-mw2.patch`, applied by `build.sh`:

- **`XenonRecomp/recompiler.cpp`**
  - Instructions MW2 uses that the recompiler did not handle: load/store update
    forms (`lhzu`, `lhau`, `lfsu`, `lfdu`, `sthu`, `stfsu`, `stfdu`, `stbux`,
    `lbzux`, `lhzux`, `lwzux`, `ldux`, `lfsux`, `sthux`, `stdux`), `lhbrx`,
    `dcbst` (no-op), `bdzf`, `eqv`, `addc`, `addme`, `subfze`, `mulhdu`,
    `frsqrte`, `vsubuws`, `vpkswss`/`vpkswss128`, `vcfpuxws128`, `vsel128`.
  - `vpkd3d128`/`vupkd3d128`: the 10-10-10-2 signed normalised format (x in the
    low bits, w unsigned in the top two), and `float16_2` packing.
  - A jump table switches on the low 32 bits of the index register: the guard
    ahead of it is `cmplwi`, and the high half may hold other bits.
  - A jump table's `default:` returns instead of `__builtin_unreachable()`, which
    let the compiler drop the bounds check.
  - `mftb` reads `PPC_QUERY_TIMEBASE()`, a 50 MHz counter the runtime supplies,
    instead of `__rdtsc()`.
- **`XenonAnalyse/main.cpp`**: jump-table patterns for XDK 8276's instruction
  order, which schedules the index shift between the `lis` and the `addi`; the
  table and base address pairs are located by opcode rather than fixed offset,
  and `nop` padding inside a pattern is skipped.
- **`XenonAnalyse/function.cpp`**: a `bclr` ends a function only when its BO
  ignores both the condition and the counter. `bdzlr` tests the counter, and
  treating it as a return cut `memset` short.
- **`XenonUtils/ppc_context.h`**: `simde_mm_vctuxs` (float to unsigned word with
  saturation), and the `PPC_QUERY_TIMEBASE` declaration.
