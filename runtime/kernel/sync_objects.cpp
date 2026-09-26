// Events, semaphores, mutants, timers and the waits on them: the kernel
// imports over objects.h's dispatcher.
#include <ppc_recomp_shared.h>
#include "../pacing_trace.h"
#include "kernel.h"
#include "objects.h"
#include "../guest.h"
#include "../log.h"
#include "../crash.h"
#include "../diagnostics.h"
#include <atomic>
#include <cstdio>
#include <mutex>
#include <vector>

using namespace kernel;

namespace
{
#if MW2_DIAGNOSTICS
    // A backtrace of a stalled thread ends in pthread_cond_wait and stops being
    // informative exactly where the question starts -- which handle, and who else
    // touches it. This records that, so the watchdog can name it.
    struct WaitRecord
    {
        std::atomic<uint32_t> handle{ 0 };      // 0 when the thread is running
        std::atomic<uint32_t> caller{ 0 };      // guest return address
        std::atomic<bool>     timed{ false };
        const char* thread = nullptr;
    };

    std::mutex g_waitLock;
    std::vector<WaitRecord*> g_waitRecords;

    WaitRecord& MyWait()
    {
        static thread_local WaitRecord* mine = [] {
            auto* w = new WaitRecord();
            w->thread = crash::CurrentThreadName();
            std::lock_guard g(g_waitLock);
            g_waitRecords.push_back(w);
            return w;
        }();
        return *mine;
    }

    struct Blocked
    {
        WaitRecord& w;
        Blocked(uint32_t handle, uint32_t caller, bool timed) : w(MyWait())
        {
            w.caller.store(caller, std::memory_order_relaxed);
            w.timed.store(timed, std::memory_order_relaxed);
            w.handle.store(handle, std::memory_order_release);
        }
        ~Blocked() { w.handle.store(0, std::memory_order_release); }
    };
#else
    struct Blocked { Blocked(uint32_t, uint32_t, bool) {} };
#endif

    const int64_t* ReadTimeout(uint32_t addr, int64_t& storage)
    {
        if (!addr) return nullptr;
        storage = int64_t(uint64_t(*GuestPtr<be64>(addr)));
        return &storage;
    }

    // What a wait on something that is not a dispatcher object -- a file, a
    // notification listener -- finds: it is always signalled.
    struct AlwaysSignalled : Dispatcher
    {
        bool Signalled(uintptr_t) const override { return true; }
    };
    AlwaysSignalled g_always;

    // The objects a wait names, resolved and kept alive for its length.
    struct WaitList
    {
        std::vector<std::shared_ptr<Object>> keep;
        std::vector<Dispatcher*> objects;
        bool Add(std::shared_ptr<Object> object)
        {
            if (!object) return false;
            auto* dispatcher = dynamic_cast<Dispatcher*>(object.get());
            objects.push_back(dispatcher ? dispatcher : &g_always);
            keep.push_back(std::move(object));
            return true;
        }
    };

    // The largest wait NT allows: MAXIMUM_WAIT_OBJECTS.
    constexpr uint32_t kMaximumWaitObjects = 64;
}

PPC_FUNC(__imp__NtCreateEvent)
{
    // (Handle*, ObjectAttributes, EventType, InitialState): type 0 is a
    // notification event (manual reset), 1 a synchronization event.
    auto event = std::make_shared<Event>();
    event->manualReset = ctx.r5.u32 == 0;
    event->signalled = ctx.r6.u32 != 0;
    const uint32_t handle = InsertHandle(event);
    if (auto* out = GuestPtr<be32>(ctx.r3.u32)) *out = handle;
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

PPC_FUNC(__imp__NtSetEvent)
{
    auto event = LookupHandleAs<Event>(ctx.r3.u32);
    if (!event) { ctx.r3.u64 = X_STATUS_INVALID_HANDLE; return; }
    const bool was = event->Set();
    if (auto* previous = GuestPtr<be32>(ctx.r4.u32)) *previous = was ? 1u : 0u;
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

PPC_FUNC(__imp__NtClearEvent)
{
    auto event = LookupHandleAs<Event>(ctx.r3.u32);
    if (!event) { ctx.r3.u64 = X_STATUS_INVALID_HANDLE; return; }
    event->Reset();
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

PPC_FUNC(__imp__NtCreateMutant)
{
    // (Handle*, ObjectAttributes, InitialOwner)
    auto mutant = std::make_shared<Mutant>();
    if (ctx.r5.u32) { mutant->owner = CurrentThread(); mutant->depth = 1; }
    const uint32_t handle = InsertHandle(mutant);
    if (auto* out = GuestPtr<be32>(ctx.r3.u32)) *out = handle;
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

PPC_FUNC(__imp__NtReleaseMutant)
{
    // (Handle, PreviousCount*): the count is NT's signal state, one when free
    // and one less for every acquisition outstanding.
    auto mutant = LookupHandleAs<Mutant>(ctx.r3.u32);
    if (!mutant) { ctx.r3.u64 = X_STATUS_INVALID_HANDLE; return; }
    const int32_t depth = mutant->Release();
    if (auto* previous = GuestPtr<be32>(ctx.r4.u32)) *previous = uint32_t(1 - depth);
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

PPC_FUNC(__imp__NtCreateTimer)
{
    // (Handle*, ObjectAttributes, TimerType): 0 notification, 1 synchronization.
    auto timer = std::make_shared<Timer>();
    timer->manualReset = ctx.r5.u32 == 0;
    const uint32_t handle = InsertHandle(timer);
    if (auto* out = GuestPtr<be32>(ctx.r3.u32)) *out = handle;
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

namespace { std::atomic<uint32_t> g_timerRoutinesDropped{ 0 }; }

PPC_FUNC(__imp__NtSetTimerEx)
{
    // (Handle, DueTime*, ApcRoutine, ApcMode, ApcContext, Resume, PeriodMs, 0)
    auto timer = LookupHandleAs<Timer>(ctx.r3.u32);
    if (!timer) { ctx.r3.u64 = X_STATUS_INVALID_HANDLE; return; }
    if (!ctx.r4.u32) { ctx.r3.u64 = X_STATUS_INVALID_PARAMETER; return; }
    // A completion routine would be queued to the thread that set the timer.
    // Nothing in either title passes one; say so if that changes.
    if (ctx.r5.u32 && g_timerRoutinesDropped++ == 0)
        LOGW("NtSetTimerEx: timer %08X has a completion routine %08X, which is not called",
             ctx.r3.u32, ctx.r5.u32);
    SetTimer(timer, int64_t(uint64_t(*GuestPtr<be64>(ctx.r4.u32))), ctx.r9.u32);
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

PPC_FUNC(__imp__NtCancelTimer)
{
    // (Handle, CurrentState*)
    auto timer = LookupHandleAs<Timer>(ctx.r3.u32);
    if (!timer) { ctx.r3.u64 = X_STATUS_INVALID_HANDLE; return; }
    const bool was = CancelTimer(timer);
    if (auto* state = GuestPtr<be32>(ctx.r4.u32)) *state = was ? 1u : 0u;
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

PPC_FUNC(__imp__NtWaitForSingleObjectEx)
{
    // (Handle, WaitMode, Alertable, Timeout*). An alertable wait is a delivery
    // point for user APCs, and asynchronous reads only transfer when their APC
    // runs -- so skipping delivery here can leave the title reading a buffer
    // nothing ever filled. Only the thread itself queues its APCs, so none can
    // arrive once it is asleep.
    if (ctx.r5.u32 && kernel::DeliverUserApcs(ctx)) { ctx.r3.u64 = X_STATUS_USER_APC; return; }
    WaitList list;
    if (!list.Add(LookupHandle(ctx.r3.u32))) { ctx.r3.u64 = X_STATUS_INVALID_HANDLE; return; }
    int64_t storage;
    const int64_t* timeout = ReadTimeout(ctx.r6.u32, storage);
    Blocked blocked(ctx.r3.u32, uint32_t(ctx.lr), timeout != nullptr);
    if (pacing::On()) { pacing::Note(pacing::kKernelWait, uint32_t(ctx.lr)); pacing::NoteCallers(ctx.r1.u32); }
    ctx.r3.u64 = Wait(list.objects.data(), 1, false, timeout);
    if (pacing::On()) pacing::Note(pacing::kKernelWaitEnd);
}

// Only useful once something has stopped, so the watchdog and the fault
// handler are the callers.
void kernel::ReportWaits()
{
#if MW2_DIAGNOSTICS
    std::lock_guard g(g_waitLock);
    bool any = false;
    for (const WaitRecord* w : g_waitRecords)
    {
        const uint32_t handle = w->handle.load(std::memory_order_acquire);
        if (!handle) continue;
        if (!any) std::fprintf(stderr, "\n[E] ---- threads blocked in a wait ----\n");
        any = true;
        std::fprintf(stderr, "[E] %-40s waiting on handle %08X%s, called from %08X\n",
                     w->thread ? w->thread : "(unnamed)", handle,
                     w->timed.load(std::memory_order_relaxed) ? " (with a timeout)" : " (forever)",
                     w->caller.load(std::memory_order_relaxed));
    }
    if (any) std::fprintf(stderr, "[E] --------------------------------\n");
#endif
}

PPC_FUNC(__imp__NtWaitForMultipleObjectsEx)
{
    // (Count, Handles*, WaitType, WaitMode, Alertable, Timeout*). WaitType 0
    // waits for all of them, 1 for any. A loader thread waits here for "work
    // or shutdown", so this is an APC delivery point as the single wait is.
    const uint32_t count = ctx.r3.u32;
    auto* handles = GuestPtr<be32>(ctx.r4.u32);
    if (ctx.r7.u32 && kernel::DeliverUserApcs(ctx)) { ctx.r3.u64 = X_STATUS_USER_APC; return; }
    if (!handles || !count || count > kMaximumWaitObjects)
    { ctx.r3.u64 = X_STATUS_INVALID_PARAMETER; return; }
    WaitList list;
    for (uint32_t i = 0; i < count; i++)
        if (!list.Add(LookupHandle(handles[i]))) { ctx.r3.u64 = X_STATUS_INVALID_HANDLE; return; }
    int64_t storage;
    const int64_t* timeout = ReadTimeout(ctx.r8.u32, storage);
    Blocked blocked(handles[0], uint32_t(ctx.lr), timeout != nullptr);
    if (pacing::On()) { pacing::Note(pacing::kKernelWait, uint32_t(ctx.lr)); pacing::NoteCallers(ctx.r1.u32); }
    ctx.r3.u64 = Wait(list.objects.data(), count, ctx.r5.u32 == 0, timeout);
    if (pacing::On()) pacing::Note(pacing::kKernelWaitEnd);
}

PPC_FUNC(__imp__KeSetEvent)
{
    // (Event, Increment, Wait): returns the previous state.
    auto event = ObjectAtAs<Event>(ctx.r3.u32);
    ctx.r3.u64 = event && event->Set() ? 1 : 0;
}

PPC_FUNC(__imp__KeResetEvent)
{
    auto event = ObjectAtAs<Event>(ctx.r3.u32);
    ctx.r3.u64 = event && event->Reset() ? 1 : 0;
}

PPC_FUNC(__imp__KeWaitForSingleObject)
{
    // (Object, WaitReason, WaitMode, Alertable, Timeout*)
    if (ctx.r6.u32 && kernel::DeliverUserApcs(ctx)) { ctx.r3.u64 = X_STATUS_USER_APC; return; }
    WaitList list;
    if (!list.Add(ObjectAt(ctx.r3.u32))) { ctx.r3.u64 = X_STATUS_INVALID_PARAMETER; return; }
    int64_t storage;
    const int64_t* timeout = ReadTimeout(ctx.r7.u32, storage);
    Blocked blocked(ctx.r3.u32, uint32_t(ctx.lr), timeout != nullptr);
    if (pacing::On()) { pacing::Note(pacing::kKernelWait, uint32_t(ctx.lr)); pacing::NoteCallers(ctx.r1.u32); }
    ctx.r3.u64 = Wait(list.objects.data(), 1, false, timeout);
    if (pacing::On()) pacing::Note(pacing::kKernelWaitEnd);
}

// KeWaitForMultipleObjects(Count, Object[], WaitType, WaitReason, WaitMode,
//                          Alertable, Timeout*, WaitBlockArray)
// XAudio2's mixer hands its work to a thread of its own and waits here for
// either "done" or "stop", so the wait type and the index returned both matter.
PPC_FUNC(__imp__KeWaitForMultipleObjects)
{
    const uint32_t count = ctx.r3.u32;
    auto* objects = GuestPtr<be32>(ctx.r4.u32);
    if (ctx.r8.u32 && kernel::DeliverUserApcs(ctx)) { ctx.r3.u64 = X_STATUS_USER_APC; return; }
    if (!objects || !count || count > kMaximumWaitObjects)
    { ctx.r3.u64 = X_STATUS_INVALID_PARAMETER; return; }
    WaitList list;
    for (uint32_t i = 0; i < count; i++)
        if (!list.Add(ObjectAt(objects[i]))) { ctx.r3.u64 = X_STATUS_INVALID_PARAMETER; return; }
    int64_t storage;
    const int64_t* timeout = ReadTimeout(ctx.r9.u32, storage);
    Blocked blocked(objects[0], uint32_t(ctx.lr), timeout != nullptr);
    if (pacing::On()) { pacing::Note(pacing::kKernelWait, uint32_t(ctx.lr)); pacing::NoteCallers(ctx.r1.u32); }
    ctx.r3.u64 = Wait(list.objects.data(), count, ctx.r5.u32 == 0, timeout);
    if (pacing::On()) pacing::Note(pacing::kKernelWaitEnd);
}

PPC_FUNC(__imp__KeInitializeSemaphore)
{
    // (Semaphore, Count, Limit), written into the header as the kernel does;
    // the wait list pointing at itself makes it a new object.
    const uint32_t address = ctx.r3.u32;
    *GuestPtr<uint8_t>(address) = 5;
    *GuestPtr<be32>(address + 4) = ctx.r4.u32;
    *GuestPtr<be32>(address + 8) = address + 8;
    *GuestPtr<be32>(address + 12) = address + 8;
    *GuestPtr<be32>(address + 16) = ctx.r5.u32;
    ObjectAt(address);
}

PPC_FUNC(__imp__KeReleaseSemaphore)
{
    // (Semaphore, Increment, Adjustment, Wait): returns the previous count.
    auto semaphore = ObjectAtAs<Semaphore>(ctx.r3.u32);
    ctx.r3.u64 = semaphore ? uint32_t(semaphore->Release(int32_t(ctx.r5.u32))) : 0u;
}

PPC_FUNC(__imp__NtClose)
{
    ctx.r3.u64 = CloseHandle(ctx.r3.u32) ? X_STATUS_SUCCESS : X_STATUS_INVALID_HANDLE;
}

PPC_FUNC(__imp__NtDuplicateObject)
{
    auto object = LookupHandle(ctx.r3.u32);
    auto* out = GuestPtr<be32>(ctx.r4.u32);
    if (!object) { ctx.r3.u64 = X_STATUS_INVALID_HANDLE; return; }
    if (out) *out = InsertHandle(object);
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

PPC_FUNC(__imp__ObReferenceObjectByHandle)
{
    // (Handle, ObjectType, Object*): the object's dispatcher header, which the
    // Ke* calls take. The title references each thread it creates this way to
    // set its priority and start it.
    auto* out = GuestPtr<be32>(ctx.r5.u32);
    uint32_t header = 0;
    if (ctx.r3.u32 == kCurrentThreadHandle)
        header = *GuestPtr<be32>(ctx.r13.u32 + 256);   // KPCR.CurrentThread
    else
        header = HeaderOf(LookupHandle(ctx.r3.u32));
    if (out) *out = header;
    ctx.r3.u64 = header ? X_STATUS_SUCCESS : X_STATUS_INVALID_HANDLE;
}

PPC_FUNC(__imp__ObDereferenceObject) { ctx.r3.u64 = X_STATUS_SUCCESS; }
PPC_FUNC(__imp__ObCreateSymbolicLink) { ctx.r3.u64 = X_STATUS_SUCCESS; }
PPC_FUNC(__imp__ObDeleteSymbolicLink) { ctx.r3.u64 = X_STATUS_SUCCESS; }
