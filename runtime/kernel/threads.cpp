// Guest threads. Each gets a host thread, its own guest stack, its own KPCR
// block for r13, and its own PPCContext.
#include <ppc_recomp_shared.h>
#include "kernel.h"
#include "objects.h"
#include "../guest.h"
#include "../log.h"
#include "../crash.h"

#include <atomic>
#include <cstdlib>
#include <cstring>
#include <thread>
#include <algorithm>
#include <cstdio>

using namespace kernel;

namespace
{
    constexpr uint32_t kDefaultStackSize = 512u * 1024u;

    // The main thread is id 1 (main.cpp); the first thread the title creates is
    // XAudio2's mixer, and game code that runs from its voice callbacks must
    // not pass the title's "is this the main thread" checks.
    std::atomic<uint32_t> g_nextThreadId{ 2 };   // the main thread is 1

    // Signalled once it has exited, which is what a wait on a thread waits for.
    struct GuestThread : Dispatcher
    {
        uint32_t threadId = 0;
        uint32_t xapiStartup = 0;
        uint32_t startAddress = 0;
        uint32_t startContext = 0;
        uint32_t stackBase = 0;
        uint32_t pcr = 0;
        uint8_t processor = 0;
        bool exited = false;      // under the dispatcher lock
        Event resumeGate;         // signalled when the thread may run

        const char* TypeName() const override { return "thread"; }
        bool Signalled(uintptr_t) const override { return exited; }

        // The host thread holds the object for as long as it runs.
        static void Launch(const std::shared_ptr<GuestThread>& thread)
        {
            std::thread([thread] { thread->Body(); }).detach();
        }

        void Exit()
        {
            std::lock_guard held(DispatcherLock());
            exited = true;
            Wake();
        }

        void Body()
        {
            Dispatcher* gate = &resumeGate;
            Wait(&gate, 1, false, nullptr);

            // ExCreateThread's fourth argument is XAPI's thread-startup shim, and the
            // kernel enters that rather than the routine: it installs the per-thread state
            // -- notably the TLS array the KPCR points at, out of which the CRT and zlib
            // allocate -- and then calls the routine. Jumping straight to the routine
            // leaves every allocation from a created thread reading an empty pool.
            const bool viaShim = xapiStartup != 0;
            uint32_t entry = viaShim ? xapiStartup : startAddress;

            PPCFunc* fn = kernel::GuestFunction(entry);
            if (!fn)
            {
                LOGE("thread %u: no recompiled function at %08X", threadId, entry);
                Exit();
                return;
            }

            PPCContext ctx{};
            std::memset(&ctx, 0, sizeof(ctx));
            ctx.r1.u32 = (stackBase + kDefaultStackSize - 0x100) & ~0xFu;
            ctx.r13.u32 = pcr;
            if (viaShim) { ctx.r3.u32 = startAddress; ctx.r4.u32 = startContext; }
            else         { ctx.r3.u32 = startContext; }
            ctx.fpscr.loadFromHost();

            char label[64];
            std::snprintf(label, sizeof label, "guest thread %u (routine %08X)", threadId, startAddress);
            crash::RegisterThread(label);

            fn(ctx, guest::Base());
            LOGK("thread %u returned", threadId);
            crash::UnregisterThread();
            Exit();
        }
    };
}

uint32_t kernel::NewThreadId() { return g_nextThreadId++; }

PPC_FUNC(__imp__ExCreateThread)
{
    auto* handleOut  = GuestPtr<be32>(ctx.r3.u32);
    uint32_t stackSize = ctx.r4.u32 ? ctx.r4.u32 : kDefaultStackSize;
    auto* threadIdOut = GuestPtr<be32>(ctx.r5.u32);
    uint32_t xapiStartup  = ctx.r6.u32;
    uint32_t startAddress = ctx.r7.u32;
    uint32_t startContext = ctx.r8.u32;
    uint32_t creationFlags = ctx.r9.u32;

    if (startAddress < PPC_CODE_BASE || startAddress >= PPC_CODE_BASE + PPC_CODE_SIZE)
    {
        LOGW("ExCreateThread: start address %08X is not guest code", startAddress);
        ctx.r3.u64 = X_STATUS_INVALID_PARAMETER;
        return;
    }

    auto t = std::make_shared<GuestThread>();
    t->threadId = g_nextThreadId++;
    t->xapiStartup = xapiStartup;
    t->startAddress = startAddress;
    t->startContext = startContext;
    t->stackBase = kernel::AllocateGuest(std::max(stackSize, kDefaultStackSize), 0x1000);

    t->pcr = kernel::CreateThreadBlock(t->threadId);
    if (!t->stackBase || !t->pcr) { ctx.r3.u64 = X_STATUS_NO_MEMORY; return; }

    // The top byte of the flags is a mask naming the hardware thread to start
    // on (one bit; Xenia's GetFakeCpuNumber). XAudio2 creates one mixing thread
    // per processor it was given and each waits, by processor number, for the
    // others to check in -- with every thread reporting 0 that barrier never
    // completes and the mixer stalls after its first frame.
    if (const uint32_t mask = creationFlags >> 24)
    {
        t->processor = uint8_t(__builtin_ctz(mask));
        *GuestPtr<uint8_t>(t->pcr + 268) = t->processor;   // KPCR.CurrentProcessorNumber
    }

    uint32_t handle = InsertHandle(t);
    if (handleOut) *handleOut = handle;
    if (threadIdOut) *threadIdOut = t->threadId;
    // The KTHREAD is the thread's dispatcher header: ObReferenceObjectByHandle
    // hands it out and KeResumeThread and KeSetAffinityThread take it.
    constexpr uint32_t kCurrentThreadOffset = 256;   // KPCR.CurrentThread
    constexpr uint8_t kThreadObject = 6;
    AttachHeader(t, *GuestPtr<be32>(t->pcr + kCurrentThreadOffset), kThreadObject);

    GuestThread::Launch(t);
    constexpr uint32_t kCreateSuspended = 1;
    if (!(creationFlags & kCreateSuspended)) t->resumeGate.Set();

    LOGK("ExCreateThread -> id %u handle %08X at %08X, %u KB stack at %08X, processor %u"
         " (flags %08X), r13 %08X%s",
         t->threadId, handle, startAddress, stackSize / 1024, t->stackBase, t->processor,
         creationFlags, t->pcr,
         (creationFlags & kCreateSuspended) ? " (suspended)" : "");
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

PPC_FUNC(__imp__NtResumeThread)
{
    auto t = LookupHandleAs<GuestThread>(ctx.r3.u32);
    if (auto* previous = GuestPtr<be32>(ctx.r4.u32)) *previous = 1;
    if (t) t->resumeGate.Set();
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

// Takes the thread object (its KTHREAD) rather than a handle. XAudio2 creates
// its mixing thread suspended and starts it this way.
PPC_FUNC(__imp__KeResumeThread)
{
    auto t = ObjectAtAs<GuestThread>(ctx.r3.u32);
    if (t) t->resumeGate.Set();
    else LOGW("KeResumeThread: %08X is not a guest thread", ctx.r3.u32);
    ctx.r3.u64 = 0;
}

PPC_FUNC(__imp__NtSuspendThread)
{
    // Suspending a running host thread safely is not possible here; report
    // success so the title's bookkeeping stays consistent.
    if (auto* previous = GuestPtr<be32>(ctx.r4.u32)) *previous = 0;
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

PPC_FUNC(__imp__ExTerminateThread)
{
    LOGK("ExTerminateThread(%u)", ctx.r3.u32);
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

// XSetThreadProcessor reaches the kernel as a one-bit affinity mask over the
// console's six hardware threads. The number behind it is not bookkeeping:
// IW4 reads the processor out of its own KPCR (a byte at r13+268) and
// dispatches on it. The renderer's command-buffer jobs are only ever accepted
// on processors 1 and 2, so with every thread reporting 0 they are refused for
// ever and the first frame of a level never finishes.
PPC_FUNC(__imp__KeSetAffinityThread)
{
    constexpr uint32_t kProcessorOffset = 268;   // KPCR.CurrentProcessorNumber
    const uint32_t affinity = ctx.r4.u32;
    auto t = ObjectAtAs<GuestThread>(ctx.r3.u32);
    if (t && affinity)
    {
        t->processor = uint8_t(__builtin_ctz(affinity));
        *GuestPtr<uint8_t>(t->pcr + kProcessorOffset) = t->processor;
    }
    else if (affinity)
        LOGW("KeSetAffinityThread: %08X is not a guest thread", ctx.r3.u32);
    ctx.r3.u64 = affinity;
}
PPC_FUNC(__imp__KeSetBasePriorityThread)  { ctx.r3.u64 = 0; }
PPC_FUNC(__imp__ExRegisterTitleTerminateNotification) { ctx.r3.u64 = 0; }
