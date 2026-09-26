// XAudio and XMA -- the kernel's side of sound. The mixer itself is XAudio2,
// statically linked into the title and so already recompiled; what it needs
// from the kernel is a render driver to pace it and hand its frames to, and
// hardware decoder contexts for its XMA voices. Both live in runtime/apu.
#include <ppc_recomp_shared.h>
#include "kernel.h"
#include "../guest.h"
#include "../log.h"
#include "../apu/audio.h"
#include "../apu/xma.h"
#include <atomic>
#include <cstdlib>

namespace
{
    constexpr uint32_t X_E_INVALIDARG = 0x80070057;
}

// XAudioRegisterRenderDriverClient(const struct { callback; context; }* client, uint32_t* driverOut)
PPC_FUNC(__imp__XAudioRegisterRenderDriverClient)
{
    auto* client = GuestPtr<be32>(ctx.r3.u32);
    auto* driverOut = GuestPtr<be32>(ctx.r4.u32);
    if (!client || !client[0]) { ctx.r3.u64 = X_E_INVALIDARG; return; }
    uint32_t handle = apu::audio::RegisterClient(client[0], client[1]);
    if (!handle) { ctx.r3.u64 = X_E_INVALIDARG; return; }
    if (driverOut) *driverOut = handle;
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

PPC_FUNC(__imp__XAudioUnregisterRenderDriverClient)
{
    apu::audio::UnregisterClient(ctx.r3.u32);
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

// XAudioSubmitRenderDriverFrame(driver, const float samples[6][256])
PPC_FUNC(__imp__XAudioSubmitRenderDriverFrame)
{
    apu::audio::SubmitFrame(ctx.r3.u32, ctx.r4.u32);
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

// The dashboard's per-category volumes; there is no dashboard, so full.
PPC_FUNC(__imp__XAudioGetVoiceCategoryVolume)
{
    if (auto* out = GuestPtr<be<float>>(ctx.r4.u32)) *out = 1.0f;
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

// The mixer only fetches a category's volume when this says it changed, and
// its object starts out zeroed, so the first query has to report every
// category changed or every voice is scaled by zero for the whole run.
PPC_FUNC(__imp__XAudioGetVoiceCategoryVolumeChangeMask)
{
    static std::atomic<uint32_t> queries{ 0 };
    if (auto* out = GuestPtr<be32>(ctx.r4.u32)) *out = queries++ == 0 ? 0xFFFFFFFFu : 0;
    ctx.r3.u64 = X_ERROR_SUCCESS;
}

// XMACreateContext(void** contextOut)
PPC_FUNC(__imp__XMACreateContext)
{
    uint32_t context = apu::xma::AllocateContext();
    if (auto* out = GuestPtr<be32>(ctx.r3.u32)) *out = context;
    ctx.r3.u64 = context ? X_STATUS_SUCCESS : X_STATUS_NO_MEMORY;
}

PPC_FUNC(__imp__XMAReleaseContext)
{
    apu::xma::ReleaseContext(ctx.r3.u32);
    ctx.r3.u64 = 0;
}
