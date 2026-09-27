#include "memory_watch.h"

#ifndef _WIN32
#include <unistd.h>
#endif
#include "../guest_memory.h"
#include "../log.h"

#include <algorithm>
#include <atomic>
#include <cstring>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#else
#include <sys/mman.h>
#endif

namespace
{
    constexpr uint32_t kPhysicalBytes = guest::kPhysicalEnd - guest::kPhysicalBase;
    constexpr uint32_t kPages = kPhysicalBytes / gpu::watch::kPageBytes;

    // A page's life. The consumer moves Never or Loose to Arming and Arming to
    // Watched; anyone who writes moves Arming or Watched to Loose, and makes
    // the page writable *before* doing so -- so a page is never writable while
    // it reads Watched for longer than it takes the writer's handler to finish.
    enum State : uint8_t
    {
        kNever = 0,     // never copied; writable; a fault here is not ours
        kLoose = 1,     // copied once, written since; writable
        kArming = 2,    // read-only, being copied
        kWatched = 3,   // read-only, the copy is current
    };
    std::atomic<uint8_t> g_state[kPages];

    // Consumer-only bookkeeping.
    uint64_t g_lastServed[kPages];   // the last submission to read the page's copy
    uint32_t g_armedFrame[kPages];
    uint8_t  g_strikes[kPages];      // how often it was written soon after being copied
    // Which copy the page holds: a stamp that rises with every copy made, so
    // "watched" can be asked as "watched since" -- a page written and copied
    // again in between reads Watched with a later stamp.
    uint64_t g_armedAt[kPages];
    uint64_t g_stamp = 0;

    uint8_t* g_shadow = nullptr;
    std::atomic<bool> g_enabled{ false };

    std::atomic<uint64_t> g_faults{ 0 }, g_bulkWrites{ 0 };
    uint64_t g_arms = 0, g_pagesArmed = 0, g_armedWrittenDuring = 0, g_armFailures = 0;
    uint64_t g_served = 0, g_servedBytes = 0, g_tracked = 0;
    uint64_t g_refusedInFlight = 0, g_refusedBackingOff = 0, g_refusedOutside = 0;

    // Both windows onto the physical bank: a write through either lands on the
    // page, so both have to be read-only for a write to be seen.
    bool Protect(uint32_t firstPage, uint32_t pages, bool writable)
    {
        uint8_t* base = guest::Base();
        const size_t offset = size_t(firstPage) * gpu::watch::kPageBytes;
        const size_t length = size_t(pages) * gpu::watch::kPageBytes;
        bool ok = true;
        for (uint32_t window : { guest::kPhysicalBase, guest::kApertureBase })
        {
#ifdef _WIN32
            DWORD was;
            ok &= VirtualProtect(base + window + offset, length, writable ? PAGE_READWRITE : PAGE_READONLY, &was) != 0;
#else
            ok &= mprotect(base + window + offset, length, writable ? PROT_READ | PROT_WRITE : PROT_READ) == 0;
#endif
        }
        return ok;
    }

    // The writer's half of the protocol. Safe in a signal handler.
    void Loosen(uint32_t page)
    {
        for (;;)
        {
            uint8_t state = g_state[page].load(std::memory_order_acquire);
            if (state == kNever || state == kLoose) return;
            Protect(page, 1, true);
            if (g_state[page].compare_exchange_weak(state, kLoose, std::memory_order_acq_rel))
                return;
        }
    }

    // Offset into the bank of a guest address in either window, or -1.
    int64_t PhysicalOffset(uint64_t guestAddress)
    {
        for (uint64_t window : { uint64_t(guest::kPhysicalBase), uint64_t(guest::kApertureBase) })
            if (guestAddress >= window && guestAddress < window + kPhysicalBytes)
                return int64_t(guestAddress - window);
        return -1;
    }

    // Copies a run of pages into the shadow and watches them. True when every
    // one came out Watched: a write during the copy leaves its page Loose.
    bool Arm(uint32_t first, uint32_t count, uint64_t frame)
    {
        for (uint32_t p = first; p < first + count; p++)
        {
            const uint8_t was = g_state[p].load(std::memory_order_relaxed);
            // Paced by how soon the page was written after it was last copied.
            // Anything inside a thousand frames counts: the title's dynamic
            // geometry goes round a ring that comes back to a page every few
            // frames, and copying it back in after each lap cost a fault and
            // two mprotects a page for data the next lap overwrites unread.
            if (was == kLoose)
                g_strikes[p] = (frame - g_armedFrame[p] < 1024)
                                   ? uint8_t(std::min(g_strikes[p] + 1, 10))
                                   : 0;
            g_armedFrame[p] = uint32_t(frame);
            g_state[p].store(kArming, std::memory_order_release);
        }
        g_arms++;
        g_stamp++;
        for (uint32_t p = first; p < first + count; p++) g_armedAt[p] = g_stamp;
        if (!Protect(first, count, false))
        {
            // Out of mappings, most likely. Nothing is watched, nothing is served.
            Protect(first, count, true);
            for (uint32_t p = first; p < first + count; p++)
                g_state[p].store(kLoose, std::memory_order_release);
            g_armFailures++;
            return false;
        }
        std::memcpy(g_shadow + size_t(first) * gpu::watch::kPageBytes,
                    guest::Base() + guest::kPhysicalBase + size_t(first) * gpu::watch::kPageBytes,
                    size_t(count) * gpu::watch::kPageBytes);
        bool all = true;
        for (uint32_t p = first; p < first + count; p++)
        {
            uint8_t arming = kArming;
            if (!g_state[p].compare_exchange_strong(arming, kWatched, std::memory_order_acq_rel))
            {
                g_armedWrittenDuring++;
                all = false;
            }
        }
        g_pagesArmed += count;
        return all;
    }
}

void gpu::watch::SetShadow(uint8_t* shadow, uint32_t bytes)
{
    if (!shadow || bytes < kPhysicalBytes)
    {
        // Every page writable again before the handler stops answering for
        // them, or the title's next write to one is taken for a crash.
        g_shadow = nullptr;
        for (uint32_t page = 0; page < kPages; page++) Loosen(page);
        g_enabled.store(false, std::memory_order_release);
        return;
    }
    // A host page larger than the unit protected here cannot be made to
    // work: the protection would always spill onto pages this code has not
    // recorded, and their next write would be taken for a crash. Better to
    // draw without the shadow than to die at the first one.
#ifndef _WIN32
    const long hostPage = sysconf(_SC_PAGESIZE);
    if (hostPage > 0 && size_t(hostPage) > kPageBytes)
    {
        LOGW("gpu: the host's pages are %ld bytes and the watch works in %u;"
             " the shadow of guest memory stays off", hostPage, kPageBytes);
        g_shadow = nullptr;
        g_enabled.store(false, std::memory_order_release);
        return;
    }
#endif
    g_shadow = shadow;
    g_enabled.store(true, std::memory_order_release);
}

bool gpu::watch::Enabled() { return g_enabled.load(std::memory_order_relaxed); }

bool gpu::watch::HandleFault(const void* address)
{
    if (!g_enabled.load(std::memory_order_relaxed)) return false;
    uint8_t* base = guest::Base();
    const uint8_t* at = static_cast<const uint8_t*>(address);
    if (!base || at < base || at >= base + 0x100000000ull) return false;
    const int64_t offset = PhysicalOffset(uint64_t(at - base));
    if (offset < 0) return false;
    const uint32_t page = uint32_t(offset / kPageBytes);
    // Never watched: the fault is somebody else's.
    if (g_state[page].load(std::memory_order_acquire) == kNever)
    {
        // Said once. A write into the physical bank that faults on a page
        // this code never protected means the protection is landing wider
        // than it is recorded -- the host's pages are bigger than ours --
        // and the crash that follows is this code's doing, not the title's.
        static std::atomic<bool> said{ false };
        if (!said.exchange(true, std::memory_order_relaxed))
        {
            LOGE("gpu: a write to guest %08X faulted on a page the watch never armed."
                 " If this is followed by a crash, the host's page size is the reason.",
                 uint32_t(uint64_t(at - base)));
        }
        return false;
    }
    // Loose already: another thread's handler got there first and the page is
    // writable, or is being armed again and the retry will fault properly.
    Loosen(page);
    g_faults.fetch_add(1, std::memory_order_relaxed);
    return true;
}

namespace
{
    // Every page of the range watched, copying in those that can be. A copy is
    // never replaced while a submission on the GPU can read it. For the
    // shadow, pages the title keeps writing wait longer each time before they
    // are copied again (`backOff`).
    bool Ready(uint32_t first, uint32_t last, uint64_t (*completed)(), uint64_t frame,
               bool backOff)
    {
        uint32_t p = first;
        while (p <= last && g_state[p].load(std::memory_order_acquire) == kWatched) p++;
        if (p > last) return true;

        uint64_t done = UINT64_MAX;
        for (uint32_t q = p; q <= last; q++)
        {
            const uint8_t state = g_state[q].load(std::memory_order_acquire);
            if (state == kWatched) continue;
            if (g_lastServed[q] && done == UINT64_MAX) done = completed();
            if (g_lastServed[q] && g_lastServed[q] > done) { g_refusedInFlight++; return false; }
            if (backOff && state == kLoose &&
                frame < uint64_t(g_armedFrame[q]) + (1u << g_strikes[q]))
            { g_refusedBackingOff++; return false; }
        }
        bool all = true;
        for (uint32_t q = p; q <= last;)
        {
            if (g_state[q].load(std::memory_order_acquire) == kWatched) { q++; continue; }
            uint32_t run = 1;
            while (q + run <= last && g_state[q + run].load(std::memory_order_acquire) != kWatched)
                run++;
            all &= Arm(q, run, frame);
            q += run;
        }
        return all;
    }

    bool Pages(uint32_t physical, uint32_t bytes, uint32_t& first, uint32_t& last)
    {
        if (!g_shadow || !bytes) return false;
        if (uint64_t(physical) + bytes > kPhysicalBytes) { g_refusedOutside++; return false; }
        first = physical / gpu::watch::kPageBytes;
        last = uint32_t((uint64_t(physical) + bytes - 1) / gpu::watch::kPageBytes);
        return true;
    }
}

void gpu::watch::WillWrite(uint32_t guestAddress, uint32_t bytes)
{
    if (!g_enabled.load(std::memory_order_relaxed) || !bytes) return;
    const int64_t offset = PhysicalOffset(guestAddress);
    if (offset < 0) return;
    const uint32_t first = uint32_t(offset / kPageBytes);
    const uint32_t last = uint32_t(std::min<uint64_t>(uint64_t(offset) + bytes - 1,
                                                       kPhysicalBytes - 1) / kPageBytes);
    bool any = false;
    for (uint32_t p = first; p <= last && !any; p++)
        any = g_state[p].load(std::memory_order_acquire) >= kArming;
    if (!any) return;
    // Writable first, then marked: the same order a fault takes, so a page is
    // never Loose while still read-only. One re-armed in between faults as usual.
    Protect(first, last - first + 1, true);
    for (uint32_t p = first; p <= last; p++)
    {
        uint8_t state = g_state[p].load(std::memory_order_acquire);
        while (state >= kArming &&
               !g_state[p].compare_exchange_weak(state, kLoose, std::memory_order_acq_rel)) {}
    }
    g_bulkWrites.fetch_add(1, std::memory_order_relaxed);
}

bool gpu::watch::Serve(uint32_t physical, uint32_t bytes, uint64_t recording, uint64_t (*completed)(),
                       uint64_t frame)
{
    uint32_t first, last;
    if (!Pages(physical, bytes, first, last) || !Ready(first, last, completed, frame, true))
        return false;
    for (uint32_t q = first; q <= last; q++) g_lastServed[q] = recording;
    g_served++;
    g_servedBytes += bytes;
    return true;
}

uint64_t gpu::watch::Track(uint32_t physical, uint32_t bytes, uint64_t (*completed)(), uint64_t frame)
{
    uint32_t first, last;
    if (!Pages(physical, bytes, first, last) || !Ready(first, last, completed, frame, false))
        return 0;
    g_tracked++;
    return g_stamp;
}

bool gpu::watch::Unwritten(uint32_t physical, uint32_t bytes, uint64_t since)
{
    uint32_t first, last;
    if (!since || !Pages(physical, bytes, first, last)) return false;
    for (uint32_t q = first; q <= last; q++)
        if (g_state[q].load(std::memory_order_acquire) != kWatched || g_armedAt[q] > since)
            return false;
    return true;
}

void gpu::watch::Report()
{
    if (!g_arms) { LOGI("gpu: no shadow of guest memory was used; every draw copied its vertex data"); return; }
    uint32_t watched = 0, loose = 0;
    for (uint32_t p = 0; p < kPages; p++)
    {
        const uint8_t state = g_state[p].load(std::memory_order_relaxed);
        watched += state == kWatched;
        loose += state == kLoose;
    }
    LOGI("gpu: shadow of guest memory served %llu ranges (%llu MB); %llu copies of %llu pages,"
         " %llu written during the copy, %llu failed; refused %llu in flight, %llu backing off,"
         " %llu outside",
         (unsigned long long)g_served, (unsigned long long)(g_servedBytes >> 20),
         (unsigned long long)g_arms, (unsigned long long)g_pagesArmed,
         (unsigned long long)g_armedWrittenDuring, (unsigned long long)g_armFailures,
         (unsigned long long)g_refusedInFlight, (unsigned long long)g_refusedBackingOff,
         (unsigned long long)g_refusedOutside);
    LOGI("gpu: %llu write faults, %llu ranges written by the runtime; %llu texture ranges"
         " watched; %u pages watched at the end, %u written since their copy",
         (unsigned long long)g_faults.load(), (unsigned long long)g_bulkWrites.load(),
         (unsigned long long)g_tracked, watched, loose);
}
