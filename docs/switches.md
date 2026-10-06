# Switches

The runtime is configured through `MW2_*` environment variables. A flag is on
when set to anything but empty or `0` (`runtime/env.h`).

Switches marked **R** are read by every build. The rest are diagnostic: a build
without diagnostics (`RELEASE=1 ./build.sh`, `-DMW2_DIAGNOSTICS=OFF`) treats
them as unset whatever the environment says, and also drops the keys `F7`,
`F9`, `F10` and `F11`, `kill -USR2` and the end-of-run reports.

## Running

| switch | | effect |
|---|---|---|
| `MW2_WINDOW=0\|1` | R | the window, which every build opens; `MW2_WINDOW=0` keeps it shut, for a headless run. Closing it ends the run as `MW2_RUN_SECONDS` does, with the reports. The frame keeps its proportions in any window shape |
| `MW2_FULLSCREEN=1` | R | starts fullscreen, borderless at the desktop's resolution. `F8` toggles it |
| `MW2_LOG_FILE=<path>` | R | writes the log there, creating its folder. The log goes to stderr, so `> file` does not catch it. A title started from the other one's menus writes on in the same file |
| `MW2_REPORT=1` | R | what a bug report needs, as the launcher's REPORT A BUG sets it: the log names the graphics driver and ends with the run's frame rate, frame time spread and what was compiled at a draw ([building.md](building.md)) |
| `MW2_LOG_TIME=1` | | stamps every log line with the time since start |
| `MW2_CONSOLE="30:map af_caves;45:god"` | R | queues commands into the title's console command buffer at the given wall-clock seconds; see [gameplay.md](gameplay.md) |
| `MW2_NET_LINK=0\|1` | R | whether the Ethernet link is reported up. Default down for the campaign, up for the multiplayer, which starts no match without one |
| `MW2_NO_AUTO_SAVE_DEVICE=1` | R | leaves the save-device choice to the title's prompt instead of choosing the hard disk ([saves.md](saves.md)) |
| `MW2_NO_AUDIO=1` | R | opens no playback device; the mixer and decoder still run ([audio.md](audio.md)) |
| `MW2_RUN_SECONDS=<n>` | | reports and exits after n seconds |
| `MW2_WATCHDOG=<seconds>` | | when it fires: the `MW2_DUMP` blocks, what every guest thread is blocked on (handle and caller) or spinning on, and every thread's backtrace, which is the guest call stack; then exits |
| `kill -USR2 <pid>` | | every thread's stack, as the watchdog prints them, and the run continues (Linux). Sent a few times, it tells a stuck thread from a looping one |
| `MW2_INPUT_SCRIPT="20:start,26:a"` | | presses pad inputs at wall-clock seconds. An entry names a button (`a b x y lb rb start back up down left right lthumb rthumb`), a trigger (`lt`, `rt`) or a stick direction (`lx+ lx- ly+ ly- rx+ rx- ry+ ry-`), with an optional hold time: `"40:lt:25"` holds the left trigger 25 s. Default hold 0.2 s. A name ending in `@2`, `@3` or `@4` is that player's controller, which the script then stands in for: `"5:a@2"`. `guide` is the Guide button, which opens the sign-in screen |

## Online

Read by every build; see [multiplayer.md](multiplayer.md).

| switch | effect |
|---|---|
| `MW2_NAME=<name>` | lan: the player's name (default: the login name) |
| `MW2_LAN_PORT=<port>` | lan: the shared broadcast port (3074) |
| `MW2_LAN_JOIN=<name>` | lan: joins that player's party or lobby when it is seen |
| `MW2_LAN_ACCEPT=1` | lan: accepts invitations |
| `MW2_STEAM_APPID=<id>` | steam: the app id to run as (480, Spacewar) |
| `MW2_STEAMCLIENT=<path>` | steam: the Steam client library, when it is not found |
| `MW2_TRACE_ONLINE=1` | every datagram through the service (diagnostic) |

## Moving the player

Diagnostic. The multiplayer refuses `setviewpos`, so a spot is reached by
walking to it.

| switch | effect |
|---|---|
| `MW2_WALK_TO="x,y[,radius[,yaw]]"` | walks to a point and holds there, facing the yaw given or turning slowly; reports the closest approach and how often it got itself unstuck |
| `MW2_WALK_PATH=<file>[,<file>...]` | walks a recorded route (`x y` per line); with several, the one starting nearest the spawn. A line `left x y z yaw pitch` or `fire x y z yaw pitch` goes to the spot, turns to the aim, and presses d-pad left or the right trigger there |
| `MW2_TEAM_UP=1\|2` | on the team selection, taps Up that many times before choosing, instead of Auto-assign, so a run spawns on the same side every time |
| `MW2_WALK_PAUSE=<seconds>` | stands still at every corner of the route |
| `MW2_QUIT_AFTER_ARRIVAL=<seconds>` | ends the run that long after the walk arrives, or after it stops getting nearer for `MW2_QUIT_IF_STUCK` seconds (45) |
| `MW2_RECORD_PATH=<file>` | writes where the player goes as a route for `MW2_WALK_PATH`, a point every `MW2_RECORD_SPACING` units (110), with d-pad left and right-trigger presses and their aim |
| `MW2_TRACE_VIEWPOS=1` | logs where the player stands once a second |
| `F9` | with the window open and `MW2_ENGINE_LOG=1`: runs the title's `viewpos` and logs the position, whose five numbers `setviewpos x y z yaw pitch` takes in single player |

## The guest

| switch | effect |
|---|---|
| `MW2_TRACE_INDIRECT` | CMake option, on by default: reports an indirect call with no recompiled target instead of jumping to null |
| `MW2_ENGINE_LOG=1` | the title's own `Com_Printf` output in the log |
| `MW2_TRACE_ERRORS=1` | the guest call stack under every `Com_Error`; one wrapper raises every error, so the message alone does not say where it came from |
| `MW2_TRACE_CBUF=1` | every command queued to the title's console, which shows what a menu runs |
| `MW2_TRACE_FILES=1` | every file opened, read and written. The files asked for and not found are listed at exit regardless |
| `MW2_TRACE_XMA=1` | every XMA decoder kick with its buffers, and FFmpeg's log |
| `MW2_DUMP=<hex>[:words][,...]` | blocks of guest memory to print when the watchdog fires (16 words by default) |
| `MW2_WATCH=<hex>[:bytes]` | a write watchpoint (Linux): the page is made read-only, and every guest write into the range is reported with its call stack and thread, up to `MW2_WATCH_REPORTS` (20); the command processor's writes there are reported too. It logs when it gives up on a busy page |

## The command stream

| switch | effect |
|---|---|
| `MW2_DUMP_SHADERS=<dir>` | every distinct shader's microcode, for `tools/xenos_shader.py` and `translate-shader` |
| `MW2_DUMP_TEXTURES=<dir>` | every distinct bound texture, untiled, as PNM with each mip level, its fetch constant logged. `MW2_DUMP_TEXTURES_RAW=1` also writes the guest bytes; `MW2_DUMP_TEXTURES_AFTER=<seconds>` starts later, since a streamed texture is empty at its first bind |
| end-of-run reports | packets by opcode, frame times, draws and presents per second, arena copies, draws per render target, texture and shader work |

## Drawing

| switch | | effect |
|---|---|---|
| `MW2_MSAA=<n>` | R | draws every surface the title multisamples at n samples, rounded down to what the device offers |
| `MW2_NO_MSAA=1` | R | draws the title's 2x and 4x surfaces at one sample |
| `MW2_ARENA_MB=<n>` | R | the upload arena for constants, vertices and indices, shared by the frame slots (512) |
| `MW2_TEXTURE_BUDGET_MB=<n>` | R | the texture cache's budget before it evicts what has not been bound lately (default half the device-local memory, within 256 MB to 2 GB) |
| `MW2_PIPELINE_CACHE=<file>` | R | keeps the driver's compiled pipelines across runs |
| `MW2_SHADER_CACHE=<file>` | R | records every pipeline a run needed and builds them at the next start-up |
| `MW2_NO_PIPELINE_LIBRARIES=1` | R | builds each pipeline whole at its first draw instead of linking it from shaders compiled at load ([rendering.md](rendering.md)) |
| `MW2_TRACE_SHADER_LOADS=1` | | each shader compiled at load and each the command stream loads, with its hash |
| `MW2_TRACE_DRAWS=<n>` | | describes n draw packets in full; `MW2_TRACE_DRAWS_AFTER=<presents>` starts later |
| `MW2_TRACE_FRAME=<n>` | | narrates n frames' render targets and resolves |
| `MW2_TRACE_RENDER_AFTER=<frames>` | | where the traces below start, unless the walk arrives first |
| `MW2_TRACE_PASSES=<n>` | | a frame's passes in order: target, colour mask, depth state, scissor |
| `MW2_TRACE_SHADER_VERTS=<hex>[,...]` | | for draws with those shaders: the first float constants, the fetch constants and the vertices they name |
| `MW2_RENDER=0` | | executes and counts the stream but draws nothing |
| `MW2_ONLY_SHADER=<hex>[,...]`, `MW2_SKIP_SHADER=<hex>[,...]` | | draws only, or all but, the draws using those shaders |
| `MW2_NO_CULL=1`, `MW2_NO_DEPTH_TEST=1` | | take culling or the depth test out of every pipeline |
| `MW2_NO_SHADOW=1` | | no shadow of guest memory: every draw copies its vertex data into the arena |
| `MW2_RECORD_THREAD=0` | | makes the Vulkan calls on the ring consumer instead of the recorder thread |
| `MW2_TIME_RENDER=1` | | where the ring consumer's time goes, and how long it waits on the GPU |
| `MW2_TRACE_PACING=<file>` | | a timeline written at exit: the consumer's batches and swaps, the title's presents, and every guest thread's engine waits, kernel waits and sleeps with their callers ([multiplayer.md](multiplayer.md)) |
| `MW2_STUTTERS=1` | | from the first 30 consecutive world frames on, logs `STUTTER` for every world frame 25 ms or more after the previous one, with what the renderer spent the gap on, and `DISPLAY` when a frame is held or dropped by the window; totals at exit. The pad's Y and `F7` log a `STUTTER MARK` |

## Frames and captures

| switch | effect |
|---|---|
| `MW2_DUMP_FRAMES=<dir>` | finished frames as PNM, every `MW2_DUMP_FRAME_EVERY` frames (600); `MW2_DUMP_FRAMES_AFTER_SECONDS` starts later, `MW2_DUMP_WORLD_FRAMES=1` keeps only frames that drew the world |
| `MW2_DUMP_TARGETS=1` | every colour surface beside the presented frame |
| `MW2_FIND_FLICKER=<frames>` | reads back frames while the player stands still and reports 16x16 cells that differ from both neighbouring frames while those agree; the frames around each go to `MW2_DUMP_FRAMES` |
| `F7` | with the window open: marks a flash in the log. `MW2_FLASH_FRAMES=<n>` keeps the last n frames and writes them at each mark into `MW2_FLASH_DIR` (`diagnosis/flashes`). `MW2_FLASH_HUNT=1` (or `MW2_FLASH_DRAWS=1`) also writes every draw of the kept frames as `draws_rNNNNNN.txt`; `MW2_FLASH_HUNT=1` makes the pad's Y a mark and logs every texture drawn empty. `MW2_MARK_EMPTY=1` paints those magenta. `MW2_FLASH_MARK_AT=<seconds>` makes a mark nobody pressed. `tools/flash_hunt.sh` sets this up |
| `MW2_RENDERDOC=<seconds>[:<frames>]` | captures that many world frames (4) once the run is that old; `MW2_RENDERDOC_OUT` names the file prefix. RenderDoc must be injected before the Vulkan instance exists: run under `tools/capture_by_hand.sh` or `renderdoccmd capture` |
| `F10`, `F11` | with the window open: F10 captures the next four world frames; F11 captures every frame until pressed again (at most 120). The window runs a frame behind, so the picture in capture N was rendered in frame N-1 |
| validation | `VK_INSTANCE_LAYERS=VK_LAYER_KHRONOS_validation` enables the validation layer; its messages go to the log as `validation error:` / `validation warning:` lines, counted at exit. Add `VK_LAYER_ENABLES=VK_VALIDATION_FEATURE_ENABLE_SYNCHRONIZATION_VALIDATION_EXT` for hazards between submissions |

## Tools

| switch | effect |
|---|---|
| `MW2_TITLE=sp\|mp` | which executable the Python tools work on (`tools/title.py`); `build.sh` sets it from `TITLE` |
