// Critical sections, spinlocks and thread-local storage.
//
// A critical section is the console's RTL_CRITICAL_SECTION, kept in guest
// memory as the kernel keeps it -- a dispatcher header, then the lock count
// (-1 when free), the recursion count and the owning KTHREAD -- and taken with
// an atomic on the lock count, as Xenia does. Only a thread that finds it held
// sleeps, on the header as a synchronization event.
#include <ppc_recomp_shared.h>
#include "kernel.h"
#include "objects.h"
#include "../guest.h"
#include "../log.h"

#include <atomic>
#include <mutex>
#include <thread>
#include <algorithm>
#include <vector>

using namespace kernel;

namespace
{
    constexpr uint32_t kLockCount = 16, kRecursionCount = 20, kOwningThread = 24;
    constexpr uint32_t kCurrentThreadOffset = 256;   // KPCR.CurrentThread

    uint32_t CurrentKThread(const PPCContext& ctx)
    {
        return *GuestPtr<be32>(ctx.r13.u32 + kCurrentThreadOffset);
    }

    // A big-endian guest word, changed atomically.
    std::atomic_ref<uint32_t> Word(uint32_t address)
    {
        return std::atomic_ref<uint32_t>(*reinterpret_cast<uint32_t*>(guest::Base() + address));
    }

    // Adds and returns the new value, as InterlockedIncrement does.
    int32_t Add(uint32_t address, int32_t delta)
    {
        auto word = Word(address);
        uint32_t old = word.load();
        for (;;)
        {
            const int32_t value = int32_t(__builtin_bswap32(old)) + delta;
            if (word.compare_exchange_weak(old, __builtin_bswap32(uint32_t(value)))) return value;
        }
    }

    bool CompareExchange(uint32_t address, uint32_t expected, uint32_t desired)
    {
        uint32_t old = __builtin_bswap32(expected);
        return Word(address).compare_exchange_strong(old, __builtin_bswap32(desired));
    }

    void Initialise(uint32_t cs, uint32_t spinCount)
    {
        // A synchronization event, not signalled, its wait list empty.
        *GuestPtr<uint8_t>(cs) = 1;
        *GuestPtr<uint8_t>(cs + 1) = uint8_t(std::min<uint32_t>((spinCount + 255) / 256, 255));
        *GuestPtr<be32>(cs + 4) = 0;
        *GuestPtr<be32>(cs + 8) = cs + 8;
        *GuestPtr<be32>(cs + 12) = cs + 8;
        *GuestPtr<be32>(cs + kLockCount) = uint32_t(-1);
        *GuestPtr<be32>(cs + kRecursionCount) = 0;
        *GuestPtr<be32>(cs + kOwningThread) = 0;
    }

    bool TakeIfOwned(uint32_t cs, uint32_t me)
    {
        if (*GuestPtr<be32>(cs + kOwningThread) != me) return false;
        Add(cs + kLockCount, 1);
        *GuestPtr<be32>(cs + kRecursionCount) = *GuestPtr<be32>(cs + kRecursionCount) + 1;
        return true;
    }

    void Own(uint32_t cs, uint32_t me)
    {
        *GuestPtr<be32>(cs + kOwningThread) = me;
        *GuestPtr<be32>(cs + kRecursionCount) = 1;
    }

    // TLS slots. Allocation is process-wide, values are per-thread.
    std::mutex g_tlsLock;
    std::vector<bool> g_tlsUsed;
    thread_local std::vector<uint32_t> t_tlsValues;
}

PPC_FUNC(__imp__RtlInitializeCriticalSection)
{
    Initialise(ctx.r3.u32, 0);
}

PPC_FUNC(__imp__RtlInitializeCriticalSectionAndSpinCount)
{
    Initialise(ctx.r3.u32, ctx.r4.u32);
    ctx.r3.u64 = X_STATUS_SUCCESS;
}

PPC_FUNC(__imp__RtlEnterCriticalSection)
{
    const uint32_t cs = ctx.r3.u32, me = CurrentKThread(ctx);
    if (TakeIfOwned(cs, me)) return;
    for (uint32_t spin = *GuestPtr<uint8_t>(cs + 1) * 256u; spin; spin--)
        if (CompareExchange(cs + kLockCount, uint32_t(-1), 0)) { Own(cs, me); return; }
    // Counted in before sleeping, so the owner's leave knows to wake a waiter.
    if (Add(cs + kLockCount, 1) != 0)
        if (auto event = ObjectAt(cs))
        {
            Dispatcher* object = event.get();
            Wait(&object, 1, false, nullptr);
        }
    Own(cs, me);
}

PPC_FUNC(__imp__RtlLeaveCriticalSection)
{
    const uint32_t cs = ctx.r3.u32;
    const uint32_t depth = *GuestPtr<be32>(cs + kRecursionCount) - 1;
    *GuestPtr<be32>(cs + kRecursionCount) = depth;
    if (depth) { Add(cs + kLockCount, -1); return; }
    *GuestPtr<be32>(cs + kOwningThread) = 0;
    if (Add(cs + kLockCount, -1) != -1)
        if (auto event = ObjectAtAs<Event>(cs)) event->Set();
}

PPC_FUNC(__imp__RtlTryEnterCriticalSection)
{
    const uint32_t cs = ctx.r3.u32, me = CurrentKThread(ctx);
    if (CompareExchange(cs + kLockCount, uint32_t(-1), 0)) { Own(cs, me); ctx.r3.u64 = 1; return; }
    ctx.r3.u64 = TakeIfOwned(cs, me) ? 1 : 0;
}

PPC_FUNC(__imp__KeTlsAlloc)
{
    std::lock_guard g(g_tlsLock);
    for (size_t i = 0; i < g_tlsUsed.size(); i++)
        if (!g_tlsUsed[i]) { g_tlsUsed[i] = true; ctx.r3.u64 = uint32_t(i); return; }
    g_tlsUsed.push_back(true);
    ctx.r3.u64 = uint32_t(g_tlsUsed.size() - 1);
}

PPC_FUNC(__imp__KeTlsFree)
{
    std::lock_guard g(g_tlsLock);
    uint32_t i = ctx.r3.u32;
    if (i < g_tlsUsed.size()) g_tlsUsed[i] = false;
    ctx.r3.u64 = 1;
}

PPC_FUNC(__imp__KeTlsGetValue)
{
    uint32_t i = ctx.r3.u32;
    ctx.r3.u64 = (i < t_tlsValues.size()) ? t_tlsValues[i] : 0;
}

PPC_FUNC(__imp__KeTlsSetValue)
{
    uint32_t i = ctx.r3.u32;
    if (i >= t_tlsValues.size()) t_tlsValues.resize(i + 1, 0);
    t_tlsValues[i] = ctx.r4.u32;
    ctx.r3.u64 = 1;
}

// Critical regions and IRQL mean nothing under a host scheduler. A spinlock
// is a word in guest memory holding its owner's r13, as Xenia keeps it.
PPC_FUNC(__imp__KeEnterCriticalRegion) { }
PPC_FUNC(__imp__KeLeaveCriticalRegion) { }
PPC_FUNC(__imp__KeRaiseIrqlToDpcLevel) { ctx.r3.u64 = 0; }
PPC_FUNC(__imp__KfLowerIrql)           { }

namespace
{
    void AcquireSpinLock(uint32_t lock, uint32_t owner)
    {
        while (!CompareExchange(lock, 0, owner)) std::this_thread::yield();
    }
}

PPC_FUNC(__imp__KfAcquireSpinLock)
{
    AcquireSpinLock(ctx.r3.u32, ctx.r13.u32);
    ctx.r3.u64 = 0;   // the previous IRQL
}

PPC_FUNC(__imp__KfReleaseSpinLock)              { Word(ctx.r3.u32).store(0); }
PPC_FUNC(__imp__KeAcquireSpinLockAtRaisedIrql)  { AcquireSpinLock(ctx.r3.u32, ctx.r13.u32); }
PPC_FUNC(__imp__KeReleaseSpinLockFromRaisedIrql){ Word(ctx.r3.u32).store(0); }
PPC_FUNC(__imp__KeTryToAcquireSpinLockAtRaisedIrql)
{
    ctx.r3.u64 = CompareExchange(ctx.r3.u32, 0, ctx.r13.u32) ? 1 : 0;
}
