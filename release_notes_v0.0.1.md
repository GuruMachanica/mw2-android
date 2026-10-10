# Modern Warfare 2 Android — Release v0.0.1 (Alpha)

Initial release of the native Modern Warfare 2 (2009) recompilation port for Android ARM64 devices (`com.mw2.recomp.sp`).

This project statically recompiles the original Xbox 360 PowerPC executable (`default.xex`) into native 64-bit ARM machine code (`libmw2.so`), featuring an integrated Android launcher, XDVDFS disc installer, Vulkan rendering backend, and low-latency AAudio subsystem.

---

## 🎮 What's Included in v0.0.1

### 🚀 Core Engine & Native Runtime
- **Native ARM64 Execution**: Powered by XenonRecomp static PowerPC recompiler, running without CPU emulation overhead.
- **Vulkan Renderer Backend**:
  - Full Vulkan 1.1 legacy fallback path for widespread mobile SoC compatibility (Adreno & Mali).
  - High-performance shader translator converting Xenos microcode to SPIR-V.
  - Dedicated application-level shader cache with start-up prewarming to eliminate in-game shader compilation stutter.
- **Audio Subsystem**:
  - Low-latency AAudio native sink at 48 kHz stereo with linear sample interpolation.
  - Smooth APU mixer scheduling with burst-free catch-up logic and zero real-time heap allocations.
- **Input & Controls**:
  - Virtual on-screen touch overlay with multi-touch support.
  - Full physical gamepad support (Bluetooth / USB-C controllers: Xbox, DualShock/DualSense, generic HID).

---

## 🛡️ Stability & Security Hardening (Deep Audit Fixes)

This release incorporates all fixes from our comprehensive security and stability source audit:

- **GPU Pipeline Stability (Mali-G68 / Dimensity & Exynos)**:
  - Bypassed persistent `VkPipelineCache` on Arm Mali GPUs to eliminate documented driver cache deadlocks during monolithic pipeline compilation.
  - Injected static dummy viewports and scissors to prevent mobile driver null-pointer dereferences under dynamic state configurations.
  - Configured null `pColorBlendState` on depth-only subpasses (`colourFormat == VK_FORMAT_UNDEFINED`) complying with Vulkan specifications.
  - Restored `depthControl` and `modeCntl` in legacy Vulkan 1.1 shader cache prewarming keys.
  - Synchronized all `VkPipelineCache` accesses across draw pipeline compilation, library linking, and cache saving.
- **Storage & Path Traversal Prevention**:
  - Sanitized custom GPU driver imports in `DriverStore.kt`, strictly rejecting dot-segment traversal (`.` and `..`) and enforcing canonical storage containment.
  - Staged driver replacement transactionally to eliminate risks of app data loss.
- **Hardened XDVDFS Disc Extraction**:
  - Guaranteed `imageSize_` initialization prior to partition probing in `launcher/disc.cpp`, supporting all standard and non-zero partition disc layouts.
  - Bounded allocation constraints on directory metadata (32 MB cap) and verified entry boundaries against image bounds.
  - Sanitized extracted filenames against path traversal components (`/`, `\`, `..`).
  - Added 3-point sample chunk integrity validation (header, middle, and tail) before skipping existing matching-size assets.
- **Installer Safety**:
  - Aborts extraction immediately if target device storage is insufficient.
  - Verifies exact stream copy byte counts to prevent corrupted or truncated source files.

---

## 📦 Requirements

- **OS**: Android 8.0 (Oreo) or higher (API 26+)
- **Architecture**: `arm64-v8a` (64-bit ARM)
- **GPU**: Vulkan 1.1 compatible (Adreno 600+, Mali-G57/G68/G77/G78+, Immortalis)
- **RAM**: Minimum 4 GB, Recommended 6 GB+
- **Storage**: ~7 GB free internal storage for game data
- **Game Files**: An unmodified Xbox 360 Modern Warfare 2 disc image (`.iso`)

---

## 📥 Installation Guide

1. Download and install **`app-campaign-release.apk`** from the Assets below.
2. Transfer your legal Modern Warfare 2 Xbox 360 disc image (`.iso`) to your Android device (e.g. `Downloads` folder).
3. Open the MW2 launcher on your phone.
4. Tap **Select ISO / Install Game**, choose your `.iso` file, and wait for the extraction to finish.
5. Tap **Launch Campaign** and enjoy!
