#pragma once
// The guest addresses the runtime names, for each of the disc's two executables.
//
// The runtime hooks the title's own functions by their address -- D3D9's
// present, the fastfile loader's reads, the job system's waits -- and reads a
// few of its globals. Those addresses belong to one executable: default.xex
// (the campaign, the default) and default_mp.xex (the multiplayer) are the same
// engine built twice, and every function sits somewhere else in each. This
// table is the only place the runtime says which.
//
// A function entry is the bare hex address, without 0x, so the macros below can
// paste it onto sub_ / __imp__sub_ / 0x. A data entry is an ordinary constant,
// zero when the multiplayer's is not known: the code that reads it checks.
// A function the multiplayer has not been located in has no entry, and the
// hook that names it is compiled out under #ifdef.
//
// The multiplayer addresses were found with tools/find_in_title.py. Comments
// elsewhere in the runtime cite the single-player addresses.
//
// The build selects the title: -DMW2_TITLE=mp defines MW2_TITLE_MP.

#ifdef MW2_TITLE_MP

#define MW2_TITLE_NAME  "multiplayer"
#define T_ENTRY_POINT   0x823A7FE0u          // the XEX header's ENTRY_POINT

// D3D9 (statically linked; the same library build in both executables)
#define T_D3D_Present          820DFD10
#define T_D3D_ArenaWait        820E1E70
#define T_D3D_ReplayRecording  820E4848
#define T_D3D_InitPixelShader  820D7268   // a pixel shader object made over a loaded program; see shader_preload.cpp
#define T_D3D_InitVertexShader 820D7588   // the same for a vertex shader

// the job system
#define T_Job_WaitPredicate    823EFBA0

// the engine
#define T_Com_Error            82281758
#define T_Com_Printf           8227EC30
#define T_Cbuf_AddText         82275470
#define T_Memcard_InitializeSystem 8233CAF0
#define T_Image_FlushMove      823DD658
// not located in the multiplayer: T_DB_MissingAsset

// data
#define T_DATA_TimeStampBundlePtr 0x820007B4u   // the KeTimeStampBundle import record
#define T_DATA_DebugMonitorPtr    0x820007F4u   // the KeDebugMonitorData import record
#define T_DATA_DeviceTable        0u
// Where the player stands, as the title's own `viewpos` command reads it
// (sub_821237C0). That command indexes an array of client states; with one local
// player the index is zero, so the pointer to the array is the state. `Valid` is
// the field it checks before printing, and the offsets are its own.
#define T_DATA_ClientStates       0x824C3C24u   // pointer to the client states
#define T_CLIENT_STRIDE           0x000FDC00u
#define T_CLIENT_VALID            13260u
#define T_CLIENT_ORIGIN           437312u       // x, y, z
#define T_CLIENT_ANGLES           453512u       // pitch, yaw, roll

#else

#define MW2_TITLE_NAME  "campaign"
#define T_ENTRY_POINT   0x82370938u          // the XEX header's ENTRY_POINT

// D3D9
#define T_D3D_Present          820C3390
#define T_D3D_ArenaWait        820B9800
#define T_D3D_ReplayRecording  820C6130
#define T_D3D_InitPixelShader  820B8B58   // a pixel shader object made over a loaded program; see shader_preload.cpp
#define T_D3D_InitVertexShader 820B8E78   // the same for a vertex shader

// the job system
#define T_Job_WaitPredicate    823B7840

// the engine
#define T_Com_Error            822830E8
#define T_Com_Printf           82280900
#define T_Cbuf_AddText         8227CF18
#define T_DB_MissingAsset      82172340
#define T_Memcard_InitializeSystem 8230DF88
#define T_Image_FlushMove      823A52F8

// data
#define T_DATA_TimeStampBundlePtr 0x82000780u   // the KeTimeStampBundle import record
#define T_DATA_DebugMonitorPtr    0x820007F8u   // the KeDebugMonitorData import record
#define T_DATA_DeviceTable        0x83A53020u   // Memcard's chosen device per controller
// Not derived for the campaign, which takes `setviewpos` and does not need the
// autopilot the multiplayer needs. The code reading these checks for zero.
#define T_DATA_ClientStates       0u
#define T_CLIENT_STRIDE           0u
#define T_CLIENT_VALID            0u
#define T_CLIENT_ORIGIN           0u
#define T_CLIENT_ANGLES           0u

#endif

// The macros that turn a table entry into the symbols the recompiled code uses.
// MW2_CAT expands its arguments before pasting, so GUEST_FUNC(T_D3D_Present)
// is sub_820C3390 in the campaign build and sub_820DFD10 in the multiplayer's.
#define MW2_CAT_(a, b) a##b
#define MW2_CAT(a, b) MW2_CAT_(a, b)
#define MW2_STR_(x) #x
#define MW2_STR(x) MW2_STR_(x)
#define GUEST_FUNC(name) MW2_CAT(sub_, name)          // the recompiled function
#define GUEST_ORIG(name) MW2_CAT(__imp__sub_, name)   // the original, once the function is hooked
#define GUEST_ADDR(name) MW2_CAT(0x, name)            // its guest address
#define GUEST_NAME(name) "sub_" MW2_STR(name)         // its name, for a log line
// Declares the original and opens the hook's definition: GUEST_HOOK(T_x) { ... }
#define GUEST_HOOK(name) PPC_FUNC_IMPL(GUEST_ORIG(name)); PPC_FUNC(GUEST_FUNC(name))
