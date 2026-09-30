# The runtime

`runtime/` is the host side of the recompilation. It stands in for the Xbox
360: it reserves the guest address space, loads the title's image, provides
the kernel and XAM imports, runs guest threads on host threads, and executes
the GPU command stream through Vulkan and the audio hardware through SDL.

MW2 links D3D9 and XAudio2 statically, so both are recompiled guest code. The
runtime meets the title at the kernel imports (`Vd*` for the GPU, `XAudio*` and
`XMA*` for sound) and, where it needs more than those show, by hooking
individual guest functions.

| topic | doc |
|---|---|
| the GPU seam: ring buffer, flip handshake, D3D9 hooks | [d3d9-seam.md](d3d9-seam.md) |
| shaders, textures, render targets | [shaders.md](shaders.md), [textures.md](textures.md), [rendering.md](rendering.md) |
| sound | [audio.md](audio.md) |
| saved games and the profile | [saves.md](saves.md) |
| networking and the online services | [multiplayer.md](multiplayer.md) |
| switches | [switches.md](switches.md) |

## Guest address space

The recompiled code addresses memory as a 32-bit offset from one host base
pointer, so the whole 4 GiB guest space is a single reservation
(`guest_memory.*`). A guest pointer is dereferenced as `base + address`, with
nothing in between to translate or hook.

| guest range | contents |
|---|---|
| `0x82000000`..`PPC_IMAGE_BASE + PPC_IMAGE_SIZE` | the XEX image |
| image end .. `+ PPC_CODE_SIZE * 2` | the function table `PPC_LOOKUP_FUNC` indexes |
| `0x84600000`..`0xA0000000` | virtual heap (`NtAllocateVirtualMemory`, stacks, thread blocks) |
| `0xA0000000`..`0xC0000000` | physical heap (`MmAllocatePhysicalMemoryEx`), 512 MB |
| `0xC0000000`..`0xE0000000` | the same 512 MB again |

The physical range is exactly the console's 512 MB of RAM because the title
turns a virtual address into a physical one by masking off the top three bits,
which only round-trips when the heap ends at `0xC0000000`.

The console reaches its RAM through several address windows, and the title uses
two of them for the same bytes: D3D9 hands the command processor addresses
formed as `(address & 0x1FFFFFFF) - 0x40000000` (the `0xC0000000` window) and
later reads its own structures back through them. The second window is
therefore the same memory, not a copy: one shared memory object is mapped at
both `0xA0000000` and `0xC0000000`.

- **Linux**: the space is one `MAP_NORESERVE` anonymous mapping, backed on
  first touch; the physical bank is a `memfd` mapped `MAP_FIXED | MAP_SHARED`
  over both windows.
- **Windows**: a view can only replace a placeholder of exactly its size, so the
  space is reserved with `VirtualAlloc2(MEM_RESERVE_PLACEHOLDER)`, split at the
  two windows, the bank mapped into both with `MapViewOfFile3`, and the rest
  turned into an ordinary reservation. This needs Windows 10 1803 or later.
  Windows only backs committed pages, so the fault handler commits a reserved
  page (in 64 KB chunks) the first time the guest touches it, as Linux does by
  itself.

### Heaps

`kernel.cpp` keeps two heaps, virtual and physical. Freed blocks are merged
with their neighbours and reused first-fit, and are zeroed when handed out
again, as the console's pages come. Everything above a heap's high-water mark
has never been used and is already zero.

`MmAllocatePhysicalMemoryEx` aligns every block to at least 64 KB, whatever
alignment the caller asks for. The console serves physical memory in 64 KB
pages (16 MB for the largest requests), so a title never sees a large block at
an odd 4 KB offset, and MW2 depends on it: it takes one 444 MB block for nearly
all of its memory, asked for with 4 KB alignment, and on a base that is only
4 KB aligned its own sub-allocators corrupt the script compiler's data during
level loads.

`MmGetPhysicalAddress` (`kernel::ToPhysical`) is exactly the sequence the title
inlines: `(va & 0x1FFFFFFF) + (((va >> 20) + 0x200) & 0x1000)`.
`kernel::FromPhysical` goes the other way for the GPU side; it prefers the
physical heap, since everything the GPU is handed comes from there.

## Loading the image

`main.cpp` gets the image one of two ways (`runtime/install/`):

- **A player's start** (no arguments, or `--install <iso or folder>`): the
  executable works from its own folder. If `game/<xex>` is missing it asks for
  the disc image in the desktop's file dialog (or takes the one given to
  `--install`) and copies the fastfiles (`.ff`), the image archives (`.pak`),
  the movies (`.bik`) and both executables into `game/`, executables last, so
  an executable present means a finished install. It then reads
  `game/default.xex` or `game/default_mp.xex`, refuses it unless its SHA-256
  matches the one CMake baked in from `mw2/` (another region or a title update
  has other code at other addresses), and decrypts and decompresses the XEX2 in memory at every
  launch (`install/xex.cpp`, `install/crypto.cpp`).
- **A development run** names the image and the game folder:
  `./build/mw2 mw2/default.pe mw2/game`. The image may be the flat PE that
  `tools/xexdump.py` writes or the XEX itself, decrypted on the way in.

The image is copied to `PPC_IMAGE_BASE`, and every recompiled function from
`PPCFuncMappings` is written into the function table, so an indirect call
finds its target with `PPC_LOOKUP_FUNC`. The main thread then gets a 1 MB guest
stack and a thread block, and enters the XEX entry point (`T_ENTRY_POINT` in
`title.h`). The guest never returns in practice. A run ends through
`crash::RequestExit` (the window closed, a run deadline), through a fault, or
when the title calls `HalReturnToFirmware`; the first two print the same
end-of-run reports.

## r13, the KPCR and thread ids

`r13` is the Xbox 360 thread pointer: it points into the KPCR, and the
recompiled code makes around 1100 r13-relative accesses. `kernel::CreateThreadBlock`
allocates one block per guest thread:

| part | size | notes |
|---|---|---|
| KPCR | 0x8000 | `r13` points 0x4000 in, so negative offsets stay inside |
| KTHREAD | 0x1000 | also the thread object's dispatcher header |
| TLS | 0x200 | a copy of the image's TLS template (from the PE's TLS directory) |

| field | offset |
|---|---|
| `KPCR.TlsData` | r13 + 0 |
| `KPCR.CurrentThread` | r13 + 256 |
| `KPCR.CurrentProcessorNumber` | r13 + 268 (byte) |
| `KTHREAD.ThreadId` | KTHREAD + 332 |

Rules the block has to satisfy:

- The thread id must be real. The recompiled `GetCurrentThreadId` reads
  `[[r13 + 256] + 332]`, and IW4's render lock compares thread ids; with every
  thread reporting 0 the lock's owner test is always true and its ticket lock
  deadlocks. The main thread is id 1; created threads draw from 2 upwards, so
  code running from XAudio2's voice callbacks does not pass the title's "is
  this the main thread" checks.
- `TlsData` must point at a populated TLS block: the CRT hangs its per-thread
  allocator off it, and a null pointer sends every thread to one pool at
  address 0.
- The processor number must be the one the thread was put on. IW4 dispatches on
  the byte at r13+268 (the renderer's command-buffer jobs are only accepted on
  processors 1 and 2), and XAudio2's workers wait for each other by processor
  number. `ExCreateThread` takes it from the top byte of the creation flags and
  `KeSetAffinityThread` from its affinity mask, each a one-bit mask over the six
  hardware threads.

## Kernel and XAM imports

Every import is a function `__imp__<Name>` the recompiled code calls. The
runtime implements them with `PPC_FUNC(__imp__<Name>)` in `runtime/kernel/`:

| file | what |
|---|---|
| `memory.cpp`, `kernel.cpp` | virtual and physical memory, the heaps, thread blocks, APCs, the time stamp bundle |
| `objects.*`, `sync_objects.cpp` | the object table; events, semaphores, mutants, timers and the waits on them |
| `sync.cpp` | critical sections, spinlocks, TLS slots |
| `threads.cpp` | thread creation, resume, affinity |
| `misc.cpp` | clocks, delays, module queries |
| `files.cpp` | file I/O |
| `content.cpp`, `profile.cpp` | content packages and the profile ([saves.md](saves.md)) |
| `xam.cpp` | users, XOVERLAPPED, notifications, UI calls, sessions and Live stand-ins |
| `input.cpp` | gamepad |
| `net.cpp` | XNet and Winsock |
| `video.cpp` | `Vd*`, the GPU's kernel surface ([d3d9-seam.md](d3d9-seam.md)) |
| `audio.cpp` | `XAudio*`, `XMA*` ([audio.md](audio.md)) |

`build.sh` runs `tools/genshared.py`, which writes `ppc_recomp_shared.h` and the
list of imports the title uses, then `tools/gen_kernel_stubs.py`, which writes
`stubs_generated.cpp` beside the recompiled tree: every import no
`runtime/kernel/*.cpp` defines becomes a stub that logs its name once, counts
its calls and returns 0. The end-of-run report lists the stubs a run reached.

Two kernel exports are data, not functions, and nothing resolves them, so
`kernel::Initialise` writes them into the image:

- **The time stamp bundle** (`T_DATA_TimeStampBundlePtr`): interrupt time,
  system time and a millisecond tick count, kept current by the runtime.
  `GetTickCount` reads it, so an unresolved pointer freezes the title's clock.
- **`KeDebugMonitorData`** (`T_DATA_DebugMonitorPtr`): a pointer to a zero word,
  as on a retail console. XAudio2's mixer calls through it when the word is not
  zero.

### Clocks

Every `mftb` reads `PPC_QueryTimebase`, a 50 MHz counter, and
`KeQueryPerformanceFrequency` reports 50 MHz. The console's timebase runs at
that rate and titles assume it without asking: MW2's server thread converts
ticks to milliseconds with a constant 1/50000. System time is 100 ns ticks since
1601.

### Calling guest code from the host

`kernel::CallGuest` runs a guest function on the caller's stack, below its frame
and red zone, with the caller's r13. It restores MXCSR afterwards: the console
keeps the scalar and vector float modes in separate registers, x86 has one,
and the recompiled code tracks which mode it last set, so a callee that leaves
flush-to-zero on would make the caller's scalar code flush from then on.

### setjmp and longjmp

`Com_Error` leaves an error with the CRT's `longjmp` to the `setjmp` in the
thread's frame loop (the main loop, the renderer, the workers each have one).
Both recompiler configs name the pair (`setjmp_address`, `longjmp_address`), so
the recompiler emits host `setjmp`/`longjmp` there, saving the guest registers
at the `setjmp` and restoring them when the `longjmp` lands. Recompiled as
ordinary functions, the `longjmp` would return into the code that raised the
error, which carries on in a state the title never expects: a client dropped at
the end of a match hung in its error cleanup.

A host `longjmp` skips every host frame between the two, destructors included.
Runtime code that calls back into guest code -- a hook's `GUEST_ORIG`, an APC,
the scripted console -- must not hold a lock or an owning object across the
call.

## Threads

Each guest thread is a detached host thread with its own guest stack (at least
512 KB), thread block and `PPCContext` (`threads.cpp`).

- `ExCreateThread` enters XAPI's thread-startup shim (its fourth argument) with
  the routine and context as arguments, not the routine itself: the shim
  installs the per-thread state the CRT and zlib allocate from.
- A thread created suspended waits on a resume gate. `NtResumeThread` opens it
  by handle, `KeResumeThread` by thread object (XAudio2 starts its mixing
  thread that way). `NtSuspendThread` reports success without suspending.
- A thread is a dispatcher object, signalled when it exits.

## Objects and waits

`objects.*` is one object table for handles and guest objects, as the console
keeps it. `Nt*` calls name an object by handle and `Ke*` calls by the address
of its dispatcher header in guest memory; a header names its object by holding
the handle and a signature in its wait list. A header the title initialises
inline, with no kernel call, is taken up as a new object with the type and
signal state it holds, so a synchronization event made that way still
auto-resets.

Waits follow NT's dispatcher: one lock guards every object's state, a wait on
several objects (wait-any or wait-all) is satisfied atomically, and a waiting
thread sleeps until something it waits on is signalled. Timeouts follow NT's
convention: null waits forever, negative is relative, positive is an absolute
system time. Waiting on something that is not a dispatcher object (a file) is
always satisfied.

Critical sections are the console's `RTL_CRITICAL_SECTION` in guest memory,
taken with an atomic on the lock count; only a thread that finds one held
sleeps, on its header as a synchronization event. A spinlock is a guest word
holding its owner's r13. IRQL and critical regions are no-ops.

### APCs and asynchronous reads

User APCs are queued per thread and delivered only when that thread enters an
alertable wait (`Ke/NtWaitFor*`, `KeDelayExecutionThread` with the alertable
flag), which then returns `STATUS_USER_APC`, as NT does. An `NtReadFile` with a
completion routine performs its transfer at delivery time, not at the call: the
title double-buffers on the assumption that a read it issued is still in
flight while it decompresses the other buffer.

### XOVERLAPPED

Asynchronous XAM calls take the console's `XOVERLAPPED`, which is not Win32's:
the result is at +0, the length at +4 and the event to signal at +12.
`kernel::CompleteOverlapped` fills it and signals the event, so a call that
completes inline still looks finished to a caller that polls or waits.

## Files

Guest paths look like `game:\zone\common.ff` or `\Device\Cdrom0\...`
(`files.cpp`). The device prefix is split off and looked up in a mount table:

- A path under a mounted content package (`save0:` and the like, mounted by
  `content.cpp`) resolves under that package's directory and may be created,
  written, truncated and deleted.
- Everything else resolves under the game root, which is the disc and
  read-only. Truncation depends on the path being writable, not on the
  disposition, so a disc file opened with `FILE_OVERWRITE_IF` is not emptied.

Resolution is case-insensitive, one component at a time. Deletion follows NT:
a file marked for deletion goes when its last handle closes. Reads go through a
host buffer and are copied into guest memory, because a system call writing
into a page the GPU watch has made read-only fails instead of faulting (see
[the write watch](#the-fault-handler-and-the-write-watch)).

## Input

`input.cpp` answers `XamInputGetState` from SDL3 gamepads, one per user index.
With the window open, the keyboard also drives the pad: Return is Start, Escape
Back, arrows the d-pad, Z/X/C/V are A/B/X/Y, Q/E the bumpers. The packet number
changes only when the state does, since the title reads a new packet as
"something changed". Diagnostic builds add scripted presses and the headless
walker ([switches.md](switches.md)).

## Networking

`net.cpp` implements XNet and Winsock. Every call answers definitively, since
the title spins on "pending" answers (single player polls
`XNetGetTitleXnAddr`). The Ethernet link is reported down in the campaign and
up in the multiplayer, which refuses to start a match without one
(`MW2_NET_LINK` overrides). With an online service built in, the title's
sockets and addresses go through it; see [multiplayer.md](multiplayer.md).

## The fault handler and the write watch

`crash.cpp` installs signal handlers on Linux and a vectored exception handler
on Windows. A fault is offered in turn to:

1. the `MW2_WATCH` write watchpoint (diagnostic builds, Linux only);
2. the GPU's write watch (`gpu/memory_watch.*`);
3. on Windows, the first-touch commit of a reserved page.

What is left is a real fault. The report gives the guest address, what region
it is in (null page, function table slot, image, past the top of the space),
and a backtrace. The recompiled functions are ordinary `sub_XXXXXXXX` symbols
(linked with `-rdynamic` on Linux), so the host backtrace is the guest call
stack; on Windows frames are printed as `exe+offset` for `llvm-symbolizer`. A
`SIGTRAP` is a guest trap instruction, which IW4 uses for its asserts. A
`SIGFPE` is an integer divide by zero whose guarding trap the recompiler drops.
With `MW2_TRACE_INDIRECT` (on by default), an indirect call to an address with
no recompiled function is reported instead of jumping to null.

**The write watch** tells the GPU side which pages of physical memory the
title has written. A page the GPU reads from is made read-only in both windows;
the first write faults once, marks the page written and makes it writable
again. It keeps a shadow copy of physical memory that draws read vertex data
from, and tells the texture cache when a texture's pages change
([rendering.md](rendering.md), [textures.md](textures.md)). Because the kernel
fails, rather than faults, a system call that writes into a read-only page,
nothing may have the host kernel write straight into guest memory: file reads
and received packets are copied in from a buffer of the runtime's own.

## Hooking guest functions

`title.h` names every guest function and global the runtime hooks or reads,
once for each executable, since the campaign and the multiplayer are the same
engine built twice with every function somewhere else. XenonRecomp emits each
function as a weak `sub_XXXXXXXX` that calls `__imp__sub_XXXXXXXX`;
`GUEST_HOOK(T_x)` defines a strong `sub_` in its place, and `GUEST_ORIG(T_x)`
calls the original. The hooks cover D3D9's present and command-buffer paths,
the engine's print, error and console paths, the job system's spin waits, and
the memcard setup.

Stores the recompiler marks as hardware-register writes (a store followed by
`eieio`) go through `PPC_MM_STORE_U32` from `mmio_hook.h`, force-included into
the recompiled code. The store still lands in memory; stores into the XMA
window at `0x7FEA0000` are also passed to the decoder ([audio.md](audio.md)).

## Platform layer

`platform.*` holds what Linux and Windows spell differently: the timer
resolution (Windows is asked for 1 ms sleeps, since the title paces itself with
short sleeps), attaching a release build to the terminal it was started from,
thread ids, names and priorities, backtraces, and loading shared libraries. It
also supplies `roundevenf`, which the UCRT lacks. The other platform
differences are in the places that cannot go through it: guest memory, the
fault handler, sockets (`net.cpp`, `online/`) and the Steam client's ABI.
