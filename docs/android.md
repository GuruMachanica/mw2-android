# Android

The same runtime, on a phone. Nothing about the recompiled code changes: it
is C++ that was already free of x86 assumptions, so an arm64 compiler takes
it as it stands. What changes is everything around it -- the window, the
sound, the pad, the driver -- and that is what `runtime/android/` is.

The app is in `android/`. It builds the repository's own `CMakeLists.txt`
through Gradle's `externalNativeBuild`, so there is one native build, not
two, and `cmake/android.cmake` is the only place the phone build differs.

## What you need

- Everything [building.md](building.md) asks for, done once on a desktop:
  the recompiled C++ (`ppc/` or `ppc_mp/`) and `mw2/default.xex` and
  `mw2/default_mp.xex` have to exist before Gradle can build anything. The
  recompiler runs on the desktop; only the resulting C++ is compiled for the
  phone.
- Android Studio, or the command-line SDK with **NDK r27 or later** (r27 is
  the first whose linker aligns a library for 16 KB pages, which Android 15
  devices need) and **JDK 17**.
- A phone with **arm64** and **Vulkan 1.3** (or Vulkan 1.1 with `VK_KHR_dynamic_rendering`),
  Android 10 or later. MediaTek Dimensity, Google Tensor, Samsung Exynos (Mali and Xclipse),
  and Qualcomm Snapdragon are fully supported. A 32-bit build is refused at configure time:
  the guest's address space is a single 4 GiB reservation and will not fit in one.

Expect the native build to take **one to several hours** the first time. It
is two million lines of generated C++ in a few hundred translation units;
`org.gradle.parallel` and a machine with cores and memory are what help.

## Building

```sh
# once, on the desktop: the recompiled sources and the two executables
TITLE=sp ./build.sh
TITLE=mp ./build.sh          # only if you want the multiplayer app too

# optional: custom graphics drivers (see "Drivers" below)
./android/fetch_deps.sh

cd android
./gradlew assembleCampaignRelease        # or assembleMultiplayerRelease
```

The apk lands in `android/app/build/outputs/apk/campaign/release/`. No local
toolchain? The same build runs on GitHub Actions from a link to your copy of
the game -- see "Building it on GitHub Actions" below.

`android/` has no Gradle wrapper checked in (the jar is a binary). Android
Studio makes one on first open; from a terminal, `gradle wrapper` once with
any Gradle 8.1x, or just use `gradle` directly as the CI job does.

Two product flavours, because the disc carries two executables and each is
recompiled into a tree of its own:

| Flavour        | CMake            | Package               |
| -------------- | ---------------- | --------------------- |
| `campaign`     | `-DMW2_TITLE=sp` | `com.mw2.recomp.sp`   |
| `multiplayer`  | `-DMW2_TITLE=mp` | `com.mw2.recomp.mp`   |

Both can be installed at once; they share nothing but the source.

`assembleCampaignDebug` builds far quicker only in the sense that it skips
the shrinker -- the native compile is the same work. For iterating on the
app's Kotlin, build once and then use `installCampaignDebug`.

## Building it on GitHub Actions

`.github/workflows/android.yml` does all of the above on a runner, from a
link to your own copy of the game. Actions tab -> **android** -> *Run
workflow*.

It asks for:

| | |
| --- | --- |
| **Link to one zip** | the simplest way: both executables in a single archive. Fill this in and leave the rest empty |
| **Link to default.xex** | if you would rather not zip them |
| **Link to default_mp.xex** | both executables are needed whichever app you build: the installer checks a player's copy against each, so the build has to know both hashes |
| **Link to the disc image** | instead of either, if you would rather hand over the whole thing. Large -- Hugging Face serves it, Drive generally refuses |
| **Which app** | campaign, multiplayer, or both |
| **How hard the compiler works** | `-O2` by default. `-O3` is a few percent quicker to run and a good deal slower to build, which matters when a job is given six hours |

### One zip with both executables

Zip them however you like -- loose, or in a folder inside the archive, under
whatever names -- upload it, and give the link. The archive is unpacked and
each file inside is looked at in turn.

Which of the two is which is decided by the executables themselves, not by
their file names: a XEX carries the name it was built under, and the
multiplayer one says so. `1.xex` and `2.xex` land the right way round. Only
if that header is missing from both does the order in the archive decide it,
and the log says plainly that it had to guess -- name them `default.xex` and
`default_mp.xex` in that case and there is nothing left to guess at.

7z works as well as zip. An archive holding the whole disc image works too.

A link typed into the form is written into the run's record, where anyone who
can read this repository's Actions can see it. To keep it out of there, put
it in **Settings -> Secrets and variables -> Actions** instead and leave the
form empty:

| Secret | For |
| --- | --- |
| `GAME_ARCHIVE_URL` | one zip with both executables in it |
| `DEFAULT_XEX_URL`, `DEFAULT_MP_XEX_URL` | the two executables separately |
| `ISO_URL` | the disc image, if you use one instead |
| `HF_TOKEN` | a private Hugging Face repository |
| `KEYSTORE_BASE64`, `KEYSTORE_PASSWORD`, `KEY_ALIAS`, `KEY_PASSWORD` | signing with your own key. Without them the debug key signs it, which installs perfectly well and is honest about what it is |

### What the links may look like

Anything these resolve to is identified by its first bytes, not its name, so
a file that arrives called `xex.bin` is still recognised -- and a zip holding
both executables is unpacked and both are taken out of it.

```
https://drive.google.com/file/d/<id>/view?usp=sharing     Share -> anyone with the link
https://drive.google.com/uc?export=download&id=<id>
https://huggingface.co/<you>/<repo>/blob/main/default.xex        a file page
https://huggingface.co/datasets/<you>/<repo>/resolve/main/default_mp.xex
https://your-server/whatever/default.xex
```

Drive's "this file is too large to scan" page is answered on your behalf. Its
daily download quota is not something the job can do anything about: if Drive
starts refusing, the run says so plainly, and a Hugging Face repository has no
such limit.

The same script works by hand:

```sh
# one archive with both in it
python3 tools/fetch_asset.py --into mw2 "https://.../mw2-executables.zip"

# or the two of them named
python3 tools/fetch_asset.py --into mw2 \
  "default.xex=https://..." "default_mp.xex=https://..."

TITLE=sp ./build.sh
```

### How long, and what happens when it runs out of time

The first run is hours: two million lines of generated C++, compiled for
arm64 on four cores. A job is allowed six, and a cold run can reach the end
of them.

Nothing is lost when it does. Three things are cached:

- the **recompiled tree** (`ppc/`), keyed on the executables themselves, so a
  second run with the same copy of the game skips the recompiler entirely;
- the **compiler cache**, saved even when the job fails or is cut off, so the
  next run picks up the objects the last one finished;
- the XenonRecomp build.

So: start it again. Each run gets further, and once the tree is cached and
warm, a build takes minutes.

The game's own files never leave the runner and never reach an artifact --
they are deleted as soon as the recompiler has finished with them, and the
apk is built from the recompiled C++ and the two hashes alone
(`-DMW2_XEX_SHA256_SP=`, `-DMW2_XEX_SHA256_MP=`).

## Getting the game onto the phone

The app ships no game data. The player supplies a disc image of their own
copy, or a folder holding the files from one, and the runtime's installer
([install.cpp](../runtime/install/install.cpp)) copies what is needed into
`Android/data/<package>/files/game/`, checking every file against a known
hash as it goes. About 7 GB is wanted, and an interrupted install carries on
from where it stopped.

Reading a file from the phone's shared storage needs Android's "all files"
permission, which the installer screen asks for when it needs it. Without
granting it, put the image in `Android/data/<package>/files/` -- the app can
always read its own folder -- and pick it from there.

## Drivers

Android's own `libvulkan.so` is a thin dispatch layer over whatever the
vendor shipped, and on a phone whose vendor stopped updating, that driver is
frequently years old and gets things wrong that a current one does not.
Adreno hardware can run Mesa's **Turnip** instead, which is usually quicker
as well as more correct.

The driver screen imports a driver package -- the zip as downloaded, holding
a `meta.json` and the library it names -- unpacks it into
`filesDir/drivers/<name>/` and hands the path to the runtime. There,
[driver.cpp](../runtime/android/driver.cpp) tries, in order:

1. the chosen driver through **libadrenotools**, which gives it the linker
   namespace it expects on a phone that has not been rooted;
2. the chosen driver through a plain `dlopen`, which works for a driver with
   no vendor dependencies;
3. the system's `libvulkan.so`.

libadrenotools is not vendored: it is somebody else's code under its own
licence, so `android/fetch_deps.sh` clones it into
`third_party/libadrenotools/` (gitignored) and `cmake/android.cmake` picks it
up if it is there. Without it the app still builds and runs, and the driver
screen says the imported driver could not be loaded rather than pretending.

Whichever is opened, every Vulkan entry point the runtime calls is a pointer
resolved from it at run time
([loader.h](../runtime/gpu/vulkan/loader.h), generated by
`tools/gen_vulkan_loader.py`). That is not optional on Android even with the
system driver: the platform's loader exports the core functions and nothing
else, so anything with a `KHR` or `EXT` on the end has to be asked for by
name.

## The controls

The on-screen pad is drawn by the app
([TouchOverlayView.kt](../android/app/src/main/java/com/mw2/recomp/TouchOverlayView.kt))
and pushed at the runtime as a controller state, so
[kernel/input.cpp](../runtime/kernel/input.cpp) cannot tell it from a real
pad -- which matters, because a title told there is no controller on user 0
stops and waits for one.

Pause and choose **Edit controls** to move anything: drag to move, pinch to
resize, and the strip along the bottom sets opacity, hides a control
entirely, or makes it stay down when tapped (which is what aiming down
sights wants). The layout is kept in `filesDir/controls.json`; a file that
cannot be read is replaced by the defaults rather than stopping the game.

Two switches, both in the pause menu and in Settings, are independent:

- **On-screen controls** hides the pad, for playing with a real controller.
- **Use a physical controller** ignores hardware pads entirely. This is not
  a nicety: plenty of phones enumerate an accessory, or their own sensors,
  as a gamepad whose stick does not rest at centre, and the character then
  walks into a wall for the whole match with nothing on screen to explain
  it.

Looking around is not a second stick. A finger on the right-hand area moves
the view by speed rather than by position
([android/input.cpp](../runtime/android/input.cpp)): the flick is turned
into a velocity, smoothed, and fed in as a right-stick deflection. A stick
drawn on glass has no spring and no centre, and a game that was designed
around one does not survive the difference; this does.

## Making it run well on a weak phone

The settings that matter, in the order they matter:

| Setting | What it does |
| --- | --- |
| **Render scale** | The renderer draws at a fraction of the screen and the display scales it up, which costs nothing because the display pipeline does that anyway. 60-75% is close to the console's own resolution. This is the single biggest lever. |
| **Texture memory** | How much the cache holds before it starts letting go of what has not been drawn recently. Left alone the runtime picks from the device's memory. |
| **Multisampling** | Off. It is pure cost on a tiled GPU. |
| **Ask the screen for 60 Hz** | The console's frame is a 60 Hz frame; a 120 Hz panel shows each of ours twice and spends twice the power doing it. |

Underneath, the app and the runtime already do the things a phone needs and
the desktop does not:

- the guest's threads run on **8 MB host stacks** and the game thread on 64 MB
  (`platform::StartThread`): the recompiled functions carry the guest's
  frames on the host stack, and bionic's 1 MB default is not enough for them;
- the main thread and the renderer are **pinned to the big cores** and given
  a raised priority (`runtime/android/perf.cpp`);
- **sustained performance mode** is asked for, which throttles sooner but
  settles at a rate the phone can hold;
- `onTrimMemory` shrinks the texture budget and hands freed pages back, so
  the system reclaims memory from the cache instead of killing the process;
- nothing is presented and the mixer is muted while the activity is away, so
  a backgrounded game is not a phone getting hot in a pocket;
- the library is linked for **16 KB pages**, which Android 15 devices
  require.

Turn on **Show frames per second** to see the frame rate, the texture memory
in use and the size actually being rendered.

## How a run starts and ends

`nativeStart` changes to the app's external files directory -- the saves and
caches are written relative to it -- and calls `mw2::Run` with the same
arguments the desktop build would get: the executable's path and the game
folder. Nothing about start-up is Android-specific past that point.

Ending is the part worth explaining. The guest never returns: its threads
are inside recompiled code that cannot be unwound, and a driver mid-frame
does not take kindly to its device disappearing. So **quitting kills the
process**. `nativeRequestStop` mutes the sound, marks the run over and
flushes the log; the activity then finishes and calls `Process.killProcess`.
The game lives in its own process (`:game` in the manifest) so this leaves
the launcher standing. There is no teardown path to get wrong, and nothing
to crash.

## When something is wrong

The launcher's **Log** button shows the tail of `filesDir/mw2.log`, which is
the same log the desktop build writes, and can share it. A crash writes a
backtrace to it first: the recompiled functions are ordinary symbols named
`sub_XXXXXXXX`, and `platform::PrintBacktrace` resolves them through
`dladdr`, so the guest's own call stack is readable.

| What you see | What it usually is |
| --- | --- |
| "The runtime library would not load" | A 32-bit device, or an apk built for another ABI. |
| Black screen, log says no surface | The driver has no `VK_KHR_android_surface` -- an imported driver that is not for this device. Switch back to the system driver. |
| Stutter every few seconds | The texture budget is too high for the phone; lower it, or lower the render scale. |
| The character walks on its own | Something is being reported as a gamepad. Turn off "Use a physical controller". |
| Install stops partway | Free space. What was copied is kept; starting again carries on. |
