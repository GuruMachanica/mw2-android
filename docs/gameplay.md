# Getting into a level

What the runtime provides between boot and a playable level. The multiplayer's
additional needs (network link, sessions) are in [multiplayer.md](multiplayer.md).

## Game data

The title reads its fastfiles from the game root (`mw2/game` for a developer
build; see [building.md](building.md)). File paths resolve case-insensitively
onto that one flat directory.

| files | status |
|---|---|
| `.ff` fastfiles, `.pak` image archives, `.bik` Bink movies | all of them are extracted, by `build.sh` from the ISO or by the launcher (`launcher/`) |

Every fastfile is needed, not only the current level's: a zone whose file is
missing makes the title report a dirty disc and fail, and the multiplayer picks
its own zones.

## Movies

Bink is linked into the title (its own `BINK` section) and decodes on the CPU,
on two threads of its own per movie, and its sound reaches the output with the
rest of the title's. Nothing in the runtime is specific to it.

The campaign plays `IW_logo` and `legal` at boot, and a level's briefing while
the level loads: `video/cin_levels.txt` in `common.ff` names it, `<map>_load`.
When the load finishes, `UI_SetActiveMenu` opens the `pregame` menu, whose item
`press_to_skip` runs `uiScript playerstart` on A, and the level starts; it also
starts when the briefing ends. With `ui_autoContinue` set it starts as soon as
the load finishes, which a scripted run wants:

    MW2_CONSOLE="1:set ui_autoContinue 1;2:map trainer"

With a movie's file missing the title logs it, skips it, and the level starts
when it is loaded.

## Loading a level from the command line

`MW2_CONSOLE` queues commands into the engine's own console command buffer,
which is the shortest path to a level:

    MW2_CONSOLE="30:map trainer"            # one command at 30 s
    MW2_CONSOLE="30:map af_caves;45:god"    # several, separated by ';'

The time is wall-clock seconds since the runtime started (the clock
`MW2_INPUT_SCRIPT` uses). Only `;` separates entries and only the first `:`
separates the time, so a command may contain spaces. It is kept in release
builds.

`runtime/console.cpp` calls the title's `Cbuf_AddText` (`T_Cbuf_AddText` in
[`runtime/title.h`](../runtime/title.h)) from `XamInputGetState`, which the title
polls once a frame on its main thread, so a live guest context is always
available. `Cbuf_AddText` copies its text, so the string only has to outlive the
call: it is written 256 bytes below the guest stack pointer, and the call is
made with the stack pointer moved further down so the callee's frame cannot
overlap it. The whole guest context is saved and restored around the call,
because the guest is in the middle of a kernel import. One command is queued per
poll; a command longer than 192 bytes is refused.

Level names are the fastfile names: `trainer` is S.S.D.D., the first campaign
mission; `af_caves` is "Just Like Old Times". In the campaign, `setviewpos x y
z yaw pitch` places the player (`F9` logs the current `viewpos`); the
multiplayer refuses it ([switches.md](switches.md)).

## Controllers

`runtime/kernel/input.cpp` backs `XamInputGetState`, `XamInputGetCapabilities`
and `XamInputSetState` with SDL3 gamepads; controller *n* is SDL's *n*-th
gamepad, looked for again once a second while absent. Capabilities report a
wired 360 pad: every control at full range and both motors at `0xFFFF`.

`XamInputSetState(user, flags, vibration)` takes the motor speeds from the third
argument (`flags` is unused). The left motor is the heavy low-frequency one,
SDL's first rumble argument. A 360 motor keeps its speed until the next call, so
each rumble is given SDL's longest duration (`0xFFFF` ms); a duration of zero
would also stop SDL resending the rumble to pads that let one lapse. The log
names the first rumble per controller, or that the pad cannot rumble.

The title sends zero speeds unless the profile's rumble option is on (byte 67
of its per-controller profile record, on by default) and the local player is in
play: while spectating (`pm_type` 5) or following another player it clears every
rumble each frame. A headless test has to spawn first (`MW2_WALK_PATH`) and then
fire (`MW2_INPUT_SCRIPT`).

## Signing in

The first controller's player is the one the online service logged in, signed
in from the start. Nobody is at the others until the sign-in screen puts
someone there (`runtime/signin.cpp`), and nothing of it is kept between runs.
It is the console's screen, which a title asks for with `XamShowSigninUI` and
never draws: the multiplayer asks from SIGN IN PROFILE and CHANGE PROFILE in
split screen, and when a controller nobody is signed in at chooses SYSTEM
LINK. The Guide button opens it too, as on the console, or Back and Start
together where the system keeps that button.

The console's screen also signs a guest in beside a player on Live. This one
does not: the title's split screen is offline only, and its system link takes
one player a copy.

It lists the profiles of this machine that are not already playing, and "New
profile", which makes "Player 2" or the next free number. A profile is a line
of `saves/profiles.txt`, twelve hexadecimal digits and a name, and is signed in
locally (state 1) under the offline XUID `0xE000` over those digits; the title
names its stats by that XUID and its settings are `profile_<digits>.bin`
([saves.md](saves.md)). The launcher's PROFILE screen renames one.

The screen opens for the controller pressed last, since the call does not say
which. While it is open the title reads every controller as idle and hears
`XN_SYS_UI`; a choice is `XN_SYS_SIGNINCHANGED` with a bit per signed-in
controller, on which the title reads the new profile, stopping for a second.

The picture is drawn on the CPU with the launcher's fonts and laid over the
middle of the frame by the presenter, as a copy: it is opaque.
`MW2_DUMP_FRAMES` writes each state of it as `signin_<n>.ppm`.

## The save-device prompt

The campaign asks which storage device to save to until each controller has
one. `Memcard_InitializeSystem` keeps the choice in a table of one word per
controller, and zero means "not chosen". On the console the choice lives in the
profile and is made once; here the table starts empty every launch. The runtime
hooks `Memcard_InitializeSystem` (`runtime/kernel/content.cpp`) and, after it
returns, writes the hard disk's device id into every empty slot, so the prompt
does not appear. `MW2_NO_AUTO_SAVE_DEVICE=1` leaves the prompt to the title.
The table's address is known only for the campaign (`T_DATA_DeviceTable` is zero
in the multiplayer build). Saves themselves are in [saves.md](saves.md).

## What the level load relies on

These kernel and translation details are not visible in the menus, and the
first level load fails without them.

**Processor numbers.** The title pins its threads with `KeSetAffinityThread` (and
the top byte of the thread creation flags), a one-bit mask over the console's
six hardware threads. The runtime stores the chosen processor in
`KPCR.CurrentProcessorNumber` (offset 268), because the engine reads it: the
renderer's command-buffer jobs are admitted only on processors 1 and 2, whose
per-processor contexts they write into, and XAudio2's mixer threads wait on each
other by processor number. With every thread reporting 0, the first frame of a
level never finishes. Threads pinned to one processor run concurrently here,
which the console never does, so per-processor data is a place to look when
something races.

**Two windows onto physical memory.** D3D9 writes its recorded command chunks
through `0xA0000000` and reads them back through `0xC0000000`; both windows are
mapped over the same pages ([runtime.md](runtime.md)).

**Packed vertex formats.** Level geometry is packed and unpacked on the CPU
(skinning among others) with the VMX128 `vpkd3d128`/`vupkd3d128` instructions,
in formats upstream XenonRecomp does not implement.
`patches/xenonrecomp-mw2.patch` adds type 2 -- three 10-bit signed normalised
components with `w` in the top two bits, laid out like D3DCOLOR; like that case
the instruction only moves each field into the mantissa of `3.0f`, and the
caller's multiply-add by `(511 * 2^-22, -3.0)` finishes it, which is why full
scale is 511 -- and the `float16_2` pack.
