// Moving a streamed image's pixels.
//
// MW2 keeps its streamed images in a compacting pool. When the pool relocates a
// block, sub_823A5CB8 allocates the new home, asks sub_823A5780 to move the
// bytes and then points the image record at the new address. The move is not a
// memcpy: it is queued and flushed through T_Image_FlushMove, which builds a
// surface header over the two blocks and has the GPU do the copy -- the 360's
// fast path for shifting several megabytes of texture memory.
//
// The copy is one draw: a vertex shader that fetches the source and memory-
// exports it to the destination, with the export stream constant in c0.x --
// 0x40000000 | the destination's physical address in dwords. Our shaders drop
// memory exports, so the copy is made on the CPU instead, but at that draw:
// every draw the title queued before it still sees the old bytes, every one
// after it the new. Made when the pool asks, it ran up to two frames ahead of
// draws still naming the block, and they drew whatever the pool laid on it
// next. The pool says what to copy; the draw says when.
#include <ppc_recomp_shared.h>
#include "image_move.h"
#include "gpu/memory_watch.h"
#include "title.h"
#include "guest.h"
#include "diagnostics.h"
#include "log.h"
#include "watchpoint.h"
#include "gpu/gpu.h"
#include "gpu/vulkan/texture_cache.h"
#include "gpu/vulkan/renderer.h"
#include "kernel/kernel.h"

#include <algorithm>
#include <atomic>
#include <cstdio>
#include <cstring>
#include <mutex>
#include <vector>

namespace
{
    struct PendingCopy
    {
        uint32_t destination = 0, source = 0, size = 0;   // guest virtual
        uint32_t streamConstant = 0;                       // c0.x of the copy draw
        uint64_t frame = 0;                                // the guest frame asked in
    };
    std::mutex g_pendingLock;
    std::vector<PendingCopy> g_pending;
    std::atomic<uint32_t> g_pendingCount{ 0 };
    uint64_t g_copyShader = 0;          // the copy draw's vertex shader, once seen

    // What the pool has moved lately, for the flash hunt's log lines
    // (diagnostics only).
    struct Move
    {
        uint32_t destination = 0, source = 0, size = 0;   // guest virtual
        uint64_t frame = 0, sequence = 0;
    };
    constexpr size_t kMoves = 1024;
    Move g_moves[kMoves];
    uint64_t g_moveCount = 0;
    std::mutex g_moveLock;

    std::atomic<uint64_t> g_asked{ 0 }, g_bytes{ 0 };
    uint64_t g_atDraw = 0, g_atFrameEnd = 0, g_otherShader = 0;   // GPU thread only
    std::atomic<uint64_t> g_immediate{ 0 };

    // `inStream` when the copy is made where the command stream makes it, on
    // the thread that parses the stream: the renderer then orders it against
    // the draws before it.
    void Copy(uint32_t destination, uint32_t source, uint32_t size, bool inStream)
    {
        if (inStream) vk::renderer::BeforeStreamWrite(kernel::ToPhysical(destination), size);
        // The pool never asks for a move that overlaps; memmove says so for free.
        watchpoint::Suspend();
        gpu::watch::WillWrite(destination, size);
        std::memmove(guest::Base() + destination, guest::Base() + source, size);
        watchpoint::Resume();
        if constexpr (diag::kOn)
        {
            std::lock_guard held(g_moveLock);
            g_moveCount++;
            g_moves[g_moveCount % kMoves] = { destination, source, size, gpu::FrameCount(),
                                              g_moveCount };
        }
        vk::textures::MemoryWritten(kernel::ToPhysical(destination), size);
    }
}

GUEST_HOOK(T_Image_FlushMove)
{
    const uint32_t destination = ctx.r3.u32, source = ctx.r4.u32, size = ctx.r5.u32;
    const uint32_t physical = kernel::ToPhysical(destination);
    // Queued before the title's own call writes the copy draw, so the parse
    // never meets the draw before it knows what the draw copies.
    const bool atItsDraw = destination && source && size && physical && !(physical & 3) &&
                           gpu::Consuming();
    if (atItsDraw)
    {
        std::lock_guard held(g_pendingLock);
        g_pending.push_back({ destination, source, size, 0x40000000u | (physical >> 2),
                              gpu::FrameCount() });
        g_pendingCount.store(uint32_t(g_pending.size()), std::memory_order_relaxed);
    }
    GUEST_ORIG(T_Image_FlushMove)(ctx, base);
    if (!destination || !source || !size) return;
    g_asked.fetch_add(1, std::memory_order_relaxed);
    g_bytes.fetch_add(size, std::memory_order_relaxed);
    if (atItsDraw) return;
    // Nothing is consuming the command stream to order the copy against.
    g_immediate++;
    Copy(destination, source, size, false);
}

bool imagepool::CopiesWaiting() { return g_pendingCount.load(std::memory_order_relaxed) != 0; }

void imagepool::AtDraw(uint32_t streamConstant, uint64_t vertexShader)
{
    if ((streamConstant & 0xC0000000u) != 0x40000000u) return;
    PendingCopy copy;
    {
        std::lock_guard held(g_pendingLock);
        auto it = std::find_if(g_pending.begin(), g_pending.end(), [&](const PendingCopy& c) {
            return c.streamConstant == streamConstant;
        });
        if (it == g_pending.end()) return;
        // c0 outlives the draw that set it. Once the copy shader is known, an
        // old stream constant under some other draw is not a copy.
        if (g_copyShader && vertexShader != g_copyShader) { g_otherShader++; return; }
        g_copyShader = vertexShader;
        copy = *it;
        g_pending.erase(it);
        g_pendingCount.store(uint32_t(g_pending.size()), std::memory_order_relaxed);
    }
    Copy(copy.destination, copy.source, copy.size, true);
    g_atDraw++;
}

void imagepool::AtFrameEnd(uint64_t parsedFrames)
{
    std::vector<PendingCopy> overdue;
    {
        std::lock_guard held(g_pendingLock);
        auto late = std::stable_partition(g_pending.begin(), g_pending.end(),
                                          [&](const PendingCopy& c) {
                                              return parsedFrames <= c.frame + 1;
                                          });
        overdue.assign(late, g_pending.end());
        g_pending.erase(late, g_pending.end());
        g_pendingCount.store(uint32_t(g_pending.size()), std::memory_order_relaxed);
    }
    for (const PendingCopy& c : overdue) Copy(c.destination, c.source, c.size, true);
    g_atFrameEnd += overdue.size();
}

void imagepool::DescribeMovesAround(uint32_t physicalAddress, uint32_t size, uint64_t frames,
                                    char* out, size_t bytes)
{
    if (!out || !bytes) return;
    out[0] = 0;
    const uint32_t address = kernel::FromPhysical(physicalAddress);
    if (!address || !size) return;
    const uint64_t now = gpu::FrameCount();
    const uint64_t since = now > frames ? now - frames : 0;
    std::vector<Move> near;
    {
        std::lock_guard held(g_moveLock);
        for (const Move& m : g_moves)
        {
            if (!m.size || m.frame < since) continue;
            const bool into = m.destination + m.size > address && m.destination < address + size;
            const bool outOf = m.source + m.size > address && m.source < address + size;
            if (into || outOf) near.push_back(m);
        }
    }
    std::sort(near.begin(), near.end(),
              [](const Move& a, const Move& b) { return a.sequence < b.sequence; });
    size_t at = 0;
    for (const Move& m : near)
    {
        if (at + 80 >= bytes) break;
        const bool into = m.destination + m.size > address && m.destination < address + size;
        const uint32_t other = into ? m.source : m.destination;
        at += size_t(std::snprintf(out + at, bytes - at, "%s#%llu f%llu %s %08X..%08X",
                                   at ? ", " : "", (unsigned long long)m.sequence,
                                   (unsigned long long)m.frame, into ? "IN from" : "OUT to",
                                   other, other + m.size));
    }
    if (near.empty())
        std::snprintf(out, bytes, "no copy touched it in %llu frames", (unsigned long long)frames);
}

void imagepool::Report()
{
    if constexpr (!diag::kOn) return;
    const uint64_t asked = g_asked.load();
    if (!asked) return;
    LOGI("image pool: %llu blocks moved, %llu MB; %llu copied at their own draw, %llu at the"
         " end of their frame because no draw named them, %llu with nothing consuming the"
         " stream; %llu times an old stream constant sat under another shader",
         (unsigned long long)asked, (unsigned long long)(g_bytes.load() >> 20),
         (unsigned long long)g_atDraw, (unsigned long long)g_atFrameEnd,
         (unsigned long long)g_immediate.load(), (unsigned long long)g_otherShader);
}
