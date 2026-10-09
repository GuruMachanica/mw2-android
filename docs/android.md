# Android Port Documentation

This document describes the architecture, hardware compatibility, build pipeline, and runtime configuration for running **Modern Warfare 2 (2009)** natively on Android.

---

## 1. Architecture Overview

Rather than running through a traditional emulator (which introduces heavy instruction translation overhead), the Android port uses ahead-of-time compiled C++ generated directly from the Xbox 360 executable:

```
Xbox 360 default.xex  --->  XenonRecomp  --->  Recompiled C++ (ppc/)
                                                     |
                                            Android NDK (Clang 18)
                                                     |
                                                libmw2.so
                                                     |
               +-------------------------------------+------------------------------------+
               |                                                                          |
    Launcher Process (UI)                                                      Game Process (:game)
  - MainActivity.kt (Kotlin)                                                 - GameActivity.kt
  - Disc discovery & installation                                            - Native Vulkan ANativeWindow
  - Custom driver selection (Turnip)                                         - Dedicated game worker thread
  - Global preferences                                                       - Low-latency AAudio engine
                                                                             - Virtual touch gamepad overlay
```

### Dual-Process Isolation
The app is structured into two separate processes in the Android manifest:
1. **The Launcher Process** (`com.mw2.recomp.sp`): Renders the setup, preferences, driver installer, and log viewer. It stays alive independently of the game run.
2. **The Game Process** (`com.mw2.recomp.sp:game`): Hosts the recompiled guest runtime and Vulkan presentation context. Because guest Xbox 360 threads cannot be gracefully unwound mid-frame without risking driver faults, exiting the game terminates the `:game` process cleanly without crashing the launcher.

---

## 2. Hardware Compatibility & GPU Requirements

### System Requirements
- **Architecture**: 64-bit ARM (`arm64-v8a`). 32-bit devices are strictly unsupported due to the guest's 4 GiB virtual address space reservation.
- **Operating System**: Android 10 or later (API level 29+). Fully compatible with 16 KB memory page kernels on Android 14 and 15.
- **RAM**: Minimum 4 GB RAM (6 GB+ recommended).
- **Storage**: ~7-8 GB free internal storage for game assets.

### GPU & Vulkan Driver Requirements
The custom Vulkan pipeline renderer requires:
- **Vulkan 1.3** core support, OR
- **Vulkan 1.1 / 1.2** with both `VK_KHR_dynamic_rendering` and `VK_EXT_extended_dynamic_state` extensions.

#### Compatibility by SoC / GPU Architecture

| SoC Family | GPU Architecture | Compatibility Status | Notes |
| :--- | :--- | :--- | :--- |
| **Qualcomm Snapdragon** | Adreno 6xx, 7xx (SD 865, 870, 888, 8 Gen 1/2/3, 7+ Gen 2) | **Supported (100%)** | Supports Vulkan 1.3 via stock drivers or custom Mesa Turnip drivers via `DriverActivity`. |
| **Google Tensor** | Mali-G78, Mali-G710, Immortalis-G715 (Pixel 6, 7, 8, 9) | **Supported (100%)** | Google ships native Vulkan 1.3 drivers on Android 13/14+. |
| **Samsung Exynos** | AMD RDNA2 / RDNA3 Xclipse (Exynos 2200, 2400) | **Supported (100%)** | Native Vulkan 1.3 driver support. |
| **MediaTek Dimensity (Flagship)** | Mali-G710, Immortalis-G720 (Dimensity 8100, 8200, 9000, 9200, 9300) | **Supported (100%)** | Native Vulkan 1.3 driver support. |
| **MediaTek Dimensity (Mid-Range)** | Mali-G57, Mali-G68 (Dimensity 700, 810, 920, 1080) | **Headless / Limited** | Most OEM vendor drivers are capped at Vulkan 1.1.177 without dynamic rendering. The app displays an on-screen compatibility alert. |

---

## 3. SoC Tuning & Performance Optimization

Modern mobile SoCs use heterogeneous CPU clusters (e.g., 1 Prime + 3 Gold + 4 Silver, or 2+2+4 on Tensor). Left to the default OS scheduler, critical guest threads can be scheduled onto low-frequency efficiency cores.

### Core Affinity (`runtime/android/perf.cpp`)
- At startup, the runtime queries `/sys/devices/system/cpu/cpu*/cpufreq/cpuinfo_max_freq` to identify the fastest CPU cores.
- Guest execution threads and the Vulkan renderer thread are pinned to performance and prime clusters using `sched_setaffinity`.
- Efficiency cores (Cortex-A55 / A510) are reserved for background OS services and audio downmix processing.

### Dynamic Memory Management & Texture Budget
- **`onTrimMemory` Responsive Budgeting**: When the OS sends low-memory warnings (`TRIM_MEMORY_RUNNING_LOW` or `TRIM_MEMORY_RUNNING_CRITICAL`), the texture cache automatically quarters its budget and calls `mallopt(M_PURGE, 0)` to return freed memory pages to the kernel, preventing low-memory kills (LMK).
- **Restoration**: When returning from background, the texture budget is dynamically restored to full capacity.

---

## 4. Persistent Vulkan Pipeline & Shader Caching

Compiling SPIR-V shaders and graphics pipelines on mobile drivers causes noticeable in-game frame micro-stutters.

- The runtime integrates **persistent pipeline caching** stored at:
  `/data/user/0/com.mw2.recomp.sp/cache/pipeline.vkcache`
- **Auto-Flush on Pause / Lifecycle Changes**: Whenever the surface is destroyed, the user switches apps, or memory is trimmed, `vk::pipeline::SaveCache()` automatically flushes the compiled pipeline cache to non-volatile storage.
- **Warm Starts**: On subsequent app launches, all previously encountered shaders load in milliseconds without runtime compilation stutters.

---

## 5. Controls & Virtual Gamepad

### Virtual Touch Overlay (`TouchOverlayView.kt`)
The virtual gamepad converts multi-touch gestures into normalized synthetic XInput controller packets:
- **Movement (Left Stick)**: Analog thumbstick with customizable deadzone.
- **Camera Look (Right Side)**: Uses a velocity-based flick model rather than a fixed virtual stick, allowing natural, responsive camera panning.
- **Sticky ADS**: The Aim Down Sights button can be configured to toggle or hold.
- **HUD Layout Editor**: Pause the game and tap **Edit controls** to move, resize, adjust opacity, or hide any button. Layouts are saved in `filesDir/controls.json`.

### Physical Gamepads
- Bluetooth and USB gamepads (Xbox, DualShock/DualSense, Razer Kishi, Backbone) are supported.
- Enable or disable hardware gamepads in **Settings** to avoid phantom inputs from misreported phone sensor devices.

---

## 6. Custom Vulkan Drivers (Turnip & libadrenotools)

For devices with Qualcomm Adreno GPUs, Mesa **Turnip** drivers offer substantial performance and correctness advantages over outdated OEM vendor drivers.

1. Download a compatible Turnip driver archive (`.zip` containing `meta.json` and `libvulkan_freedreno.so`).
2. Open **Graphics Driver** in the launcher.
3. Tap **Import Driver** and choose the downloaded zip.
4. The runtime extracts the driver into private storage and loads it using `libadrenotools` in a dedicated linker namespace.

---

## 7. Building from Source

### Prerequisites
- **JDK 17**.
- **Android SDK** with **NDK 28.2.13676358** (`platforms;android-35`).
- CMake 3.22.1+.
- Python 3.10+.

### Local Build Steps

```sh
# 1. Recompile Xbox 360 executables to C++ on your desktop
TITLE=sp ./build.sh
TITLE=mp ./build.sh

# 2. Fetch third-party dependencies (libadrenotools)
./android/fetch_deps.sh

# 3. Compile the Campaign APK
cd android
./gradlew assembleCampaignRelease

# Or compile the Multiplayer APK:
./gradlew assembleMultiplayerRelease
```

The compiled APK will be located at:
- `android/app/build/outputs/apk/campaign/release/app-campaign-release.apk`
- `android/app/build/outputs/apk/multiplayer/release/app-multiplayer-release.apk`

### GitHub Actions CI
The workflow in [.github/workflows/android.yml](../.github/workflows/android.yml) automates APK builds:
1. Navigate to **Actions** → **android** → **Run workflow**.
2. Supply a direct URL to your game disc archive or executables.
3. The runner builds with `ccache` and publishes the signed APK as a build artifact.

---

## 8. Game Files & Installation Workflow

The app does not bundle game files. The player provides an Xbox 360 disc image (`.iso`, `.7z`, or `.zip` of version 1.0.557):

- **Automatic Discovery**: Placing `Call of Duty - Modern Warfare 2 (USA, Europe).iso` in `/sdcard/Download/` enables the one-tap **⚡ INSTALL & PLAY** option in the launcher.
- **Extracted Location**: The installer unpacks verified game assets into:
  `/sdcard/Android/data/com.mw2.recomp.sp/files/game/`
- **Saves Location**: Campaign and profile saves are stored in:
  `/sdcard/Android/data/com.mw2.recomp.sp/files/saves/`

---

## 9. Diagnostics & Troubleshooting

| Symptom | Cause | Solution |
| :--- | :--- | :--- |
| **"Renderer Notice: GPU lacks Vulkan 1.3..."** | Device stock driver is Vulkan 1.1 without dynamic rendering. | Check for OEM system software updates. On Adreno devices, import a Turnip driver via the Driver menu. |
| **"The runtime library would not load"** | Incompatible ABI or 32-bit device. | Ensure device supports 64-bit ARM (`arm64-v8a`). |
| **Installation fails partway** | Insufficient storage space. | Ensure at least 8 GB of free storage is available on internal storage. |
| **Log inspection** | Debugging game launch or crashes. | Inspect `/sdcard/Android/data/com.mw2.recomp.sp/files/game.log` via ADB or the in-app Log viewer. |
