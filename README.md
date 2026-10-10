# Modern Warfare 2 — Android & PC Port

[![Android CI](https://github.com/GuruMachanica/mw2-android/actions/workflows/android.yml/badge.svg)](https://github.com/GuruMachanica/mw2-android/actions/workflows/android.yml)
[![Release](https://img.shields.io/github/v/release/GuruMachanica/mw2-android?color=blue)](https://github.com/GuruMachanica/mw2-android/releases/latest)
[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](LICENSE)

*Call of Duty: Modern Warfare 2 (2009)* for the Xbox 360, recompiled ahead-of-time into native machine code for **Android (ARM64)**, **Linux**, and **Windows (x86-64)**.

This is **not an emulator**: Xbox 360 PowerPC machine instructions are translated ahead-of-time into native C++ via [XenonRecomp](https://github.com/hedge-dev/XenonRecomp) and compiled directly into native binaries. The game executes directly on host hardware with full platform integration.

> **Important**: No copyrighted game assets, executables, or code are included in this repository. You must provide your own legally obtained Xbox 360 game disc image (`Call of Duty: Modern Warfare 2`, version 1.0.557).

---

## Highlights & Features

### General Features
- **Full Campaign & Multiplayer**: Play the single-player campaign or multiplayer matches offline and online.
- **LAN & Steam Networking**:
  - **Steam Build**: Invite friends directly via Steam friends list without port forwarding.
  - **LAN / Direct IP Build**: Local system link matches for offline or private networks.
- **Modern Graphics Pipeline**: Native Vulkan renderer targeting 720p, 1080p, 1440p, or 4K with native MSAA.
- **Full Gamepad Support**: Xbox, PlayStation, and generic Bluetooth/USB controllers with haptic rumble.

### Android-Specific Features
- **Native Android Runtime**: Built from source as a standalone APK (`com.mw2.recomp.sp` and `com.mw2.recomp.mp`) using the Android NDK (r28+) and modern Kotlin.
- **Universal Multi-SoC Optimization**: Dynamic scheduler thread-pinning and CPU core affinity tuned for:
  - **Qualcomm Snapdragon** (Prime + Gold performance cores)
  - **MediaTek Dimensity** (Cortex-A78/X-series clusters)
  - **Google Tensor** (Tri-cluster 2+2+4 architecture)
  - **Samsung Exynos** (Mali & AMD RDNA Xclipse GPUs)
- **Vulkan 1.1 Legacy RenderPass Fallback**: Fully supported classic `VkRenderPass` and static pipeline state path for devices lacking `VK_KHR_dynamic_rendering` or `VK_EXT_extended_dynamic_state` (e.g. Dimensity 920 Mali-G68 MC4).
- **CPU BC1–BC5 Texture Decompressor**: Built-in fallback decompressor for GPUs without hardware BC/DXT texture decompression support.
- **Live Performance & Diagnostics HUD**: Interactive in-game overlay displaying real-time FPS, frame time, CPU usage, SoC thermals, app & system RAM, texture memory, and active Vulkan device.
- **Direct Play & One-Tap Setup**: The launcher automatically discovers game disc images (`.iso` / `.7z` / `.zip`) in `/sdcard/Download/` and sets up everything in one tap.
- **Customizable Touch Pad**: Virtual on-screen touch controls with customizable layout, opacity, button toggle modes (sticky ADS), and velocity-based look gestures.
- **Persistent Pipeline & Shader Cache**: Compiled Vulkan pipelines are cached persistently to storage (`pipeline.vkcache`) and auto-flushed on pause/memory trim, eliminating shader compilation stutter on repeated runs.
- **Custom Driver Loader**: Sideload and switch to custom Mesa **Turnip** Vulkan drivers for Adreno hardware on the fly via `libadrenotools`.
- **Low-Latency 3D Audio**: AAudio backend with automatic downmixing from Xbox 360 5.1 surround sound to high-fidelity stereo, driven by a rock-solid 5.333 ms wall-clock cadence eliminating audio stutter and underruns.
- **Lean Asset Pipeline & Cutscene Compression**:
  - Built-in cutscene compression tool (`tools/compress_cutscenes.py`) powered by official RAD Video Tools, reducing cutscene disk and memory footprint by **77% (shaving 940 MB)** while optimizing mobile CPU/RAM decoding.
  - Lean 5.14 GB campaign ISO package (`mw2_campaign_lean.iso`), saving over 2.7 GB compared to retail DVD-9 images by pruning unneeded multiplayer fastfiles and stripping dummy sectors while retaining 100% of the single-player campaign and offline solo Spec Ops.
- **Modern OS Support**: Full 16 KB memory page compatibility for Android 14 and Android 15.

---

## Requirements

### Android
- **Architecture**: 64-bit ARM (`arm64-v8a`). 32-bit devices are not supported.
- **OS**: Android 10 or later (API level 29+).
- **GPU / Vulkan**:
  - **Vulkan 1.3** or **Vulkan 1.1+**.
  - Modern path: Vulkan 1.3 with dynamic rendering & extended dynamic state.
  - Legacy path: Automatic Vulkan 1.1 `VkRenderPass` fallback for Mali / older vendor drivers.
  - BC Texture decompression: Automatic hardware BC if supported, or CPU fallback decoding on GPUs lacking BC compression.
  - *Compatible Devices*: Qualcomm Snapdragon 865 and newer (Turnip or stock V26+), Google Tensor G1–G4, Samsung Exynos 2200/2400 (Xclipse), MediaTek Dimensity 920/1200/8000/9000-series.
- **Storage**: ~7-8 GB free internal storage for game assets.
- **Game Media**: An ISO or disc dump of *Call of Duty: Modern Warfare 2* (Xbox 360, version 1.0.557, USA or Europe).

### PC (Windows & Linux)
- 64-bit Windows 10/11 or modern x86-64 Linux distribution.
- Vulkan 1.2+ capable GPU (AMD, NVIDIA, or Intel).
- Xbox 360 game disc image (v1.0.557).

---

## Installation & Setup

### Android Setup

1. **Install the APK**:
   Download the latest `app-campaign-release.apk` (or `app-multiplayer-release.apk`) from [Releases](../../releases/latest) and install it on your device.
2. **Provide Game Files**:
   Copy your game disc image (`mw2.iso` or `Call of Duty - Modern Warfare 2 (USA, Europe).iso`) into your phone's `Download` folder.
3. **Launch & Play**:
   - Open **MW2 Campaign**.
   - If a disc image is detected in `Download`, tap **⚡ INSTALL & PLAY**. The installer will unpack and verify the game files into your app storage.
   - Once installation completes, tap **▶ LAUNCH GAME** to start playing.
   - Enable **Direct Launch** to automatically bypass the launcher and jump straight into gameplay on future launches.

### PC Setup

1. Download the `steam` or `lan` release archive from [Releases](../../releases/latest) and extract it anywhere.
2. Run `mw2-launcher` and select **INSTALL GAME**, pointing it to your game ISO.
3. Choose **PLAY CAMPAIGN** or **PLAY MULTIPLAYER**.

---

## Controls & Keybindings

### Android Touch Controls

- **Left Stick**: Movement (walk/run).
- **Right Area**: Fluid touch-drag camera look (velocity-based look curve).
- **Action Buttons**: Jump, Crouch/Prone, Reload, Swap Weapon, Frag Grenade, Flashbang, Melee.
- **ADS Toggle**: Tap the Aim button to aim down sights; can be configured as tap-to-toggle or hold-to-aim.
- **Customize Layout**: Open pause menu → **Edit controls** to drag, resize, or adjust transparency of any button.
- **Physical Gamepad**: Bluetooth or USB Xbox/PlayStation controllers are automatically detected.

### Multiplayer & Profiles

- **Steam**: With Steam running, the game shows as *Spacewar*. Without it, the `steam` download plays as the `lan` one does, with a rank of its own. Host a PLAY ONLINE → PRIVATE MATCH, invite from Steam's friend list (or `F6`).
- **LAN**: SYSTEM LINK finds games on the network automatically. For private matches, the lobby's "Invite friends" invites everyone on the network.
- **Profiles**: Every player is a profile, made the first time you play and named after your login. The launcher's PROFILE screen renames it, and puts another profile in your place. Additional controllers can sign in with separate profiles, ranks, and settings.

| Key / Input | Action / Xbox 360 Equivalent |
| :--- | :--- |
| `W`, `A`, `S`, `D` | Movement (Left Analog Stick) |
| `Mouse Movement` | Aim & Look (Right Analog Stick) |
| `Left Mouse Click` | Fire Weapon (Right Trigger) |
| `Right Mouse Click` | Aim Down Sights (Left Trigger) |
| `Space`, `Z`, `Enter` | A (Jump / Accept / Confirm) |
| `C`, `X`, `Left Ctrl` | B (Crouch / Prone / Cancel) |
| `F`, `R` | X (Use / Reload) |
| `1`, `2`, `Y` | Y (Switch Weapon) |
| `Left Shift` | Sprint (Left Thumbstick Click) |
| `V`, `Middle Click` | Melee Attack (Right Thumbstick Click) |
| `Q`, `4` | Tactical Equipment / Flashbang (LB) |
| `E`, `G` | Lethal Equipment / Frag Grenade (RB) |
| `Enter` | START (Pause Menu / Skip Intro) |
| `Esc`, `Tab` | BACK (Scoreboard / Cancel) |
| `Arrow Keys` | D-Pad (Night Vision / Killstreaks) |
| `F8` | Toggle Fullscreen |
| `F6` | Invite Friends (Steam build) |

---

## Building from Source

### Android APK Build

#### Prerequisites
- Desktop environment (Linux or Windows).
- **JDK 17**.
- **Android SDK** with **NDK 28.2.13676358** (`platforms;android-35`).
- CMake 3.22.1+ and Python 3.10+.

```sh
# 1. Recompile Xbox 360 guest executables to C++
TITLE=sp ./build.sh
TITLE=mp ./build.sh

# 2. (Optional) Fetch libadrenotools for custom Adreno GPU driver support
./android/fetch_deps.sh

# 3. Build the Campaign APK via Gradle
cd android
./gradlew assembleCampaignRelease

# The output APK will be in:
# android/app/build/outputs/apk/campaign/release/app-campaign-release.apk
```

#### Automated GitHub Actions CI
The [.github/workflows/android.yml](.github/workflows/android.yml) workflow builds installable APKs directly on GitHub runners:
1. Go to **Actions** → **android** → **Run workflow**.
2. Supply a download link to your legal game executables or ISO archive.
3. The runner recompiles the tree, runs the NDK toolchain with `ccache`, and attaches the signed APK as an artifact.

---

## Troubleshooting & Diagnostics

- **Log Files**:
  - Android runtime logs are mirrored to internal and external storage:
    `/sdcard/Android/data/com.mw2.recomp.sp/files/game.log` and `launcher.log`.
  - On PC: pass `MW2_LOG_FILE=mw2.log` or view the terminal output.
- **Black Screen on Android**:
  - Check `game.log`. If the log reports `vulkan: the device lacks dynamic rendering and extended dynamic state`, your device's stock GPU driver lacks Vulkan 1.3 core features. For Adreno devices, use the in-app **Driver** menu to load a Turnip driver package.
- **Performance Tuning**:
  - Open **Settings** inside the Android app:
    - Set **Render Scale** to `60% - 75%` for solid 60 FPS on mid-range devices.
    - Keep **Multisampling (MSAA)** OFF on mobile tiled GPUs.
    - Set **Texture Budget** to 256 MB or 512 MB to prevent memory pressure.

---

## Credits & Acknowledgments

- **[PaulCombal/mw2-recompiled](https://github.com/PaulCombal/mw2-recompiled)**: Original Xbox 360 ahead-of-time recompilation project and Vulkan renderer architecture.
- **[hedge-dev/XenonRecomp](https://github.com/hedge-dev/XenonRecomp)**: PowerPC to C++ static recompiler.
- **[KisakCOD](https://github.com/SwagSoftware/KisakCOD)** & **[IW4x](https://github.com/iw4x/iw4x-client)**: Research into engine systems, audio mixing, and mobile input adaptations.
- **[OpenAssetTools](https://github.com/Laupetin/OpenAssetTools)**: Call of Duty FastFile and asset format tools.
- **[libadrenotools](https://github.com/bylaws/libadrenotools)**: Custom Vulkan driver loading on Android.

---

## License

This project is licensed under the **GNU General Public License v3.0** ([GPL-3.0-only](LICENSE.md)).  
See [LICENSE.md](LICENSE.md) for full terms, conditions, and third-party notices.

**Disclaimer**: This project is an independent open-source research initiative. It is not affiliated with, authorized, or endorsed by Activision, Infinity Ward, or Microsoft. All trademarks and game content belong to their respective owners. No copyrighted game assets or proprietary binaries are hosted in this repository.
