// What a draw reads besides its textures -- constants, vertex data, indices --
// copied out of guest memory and the register file into the frame arena.
#include "renderer_state.h"
#include "../memory_watch.h"
#include "../../guest.h"
#include "../../kernel/physical.h"

#include <algorithm>
#include <bit>
#include <cstring>

#ifdef MW2_HAVE_VULKAN

namespace vk::renderer::detail
{
    // A draw's constants, vertex data and indices are copied here and addressed by
    // offset, and it is reset when the frame is submitted.
    uint32_t Allocate(uint32_t bytes, ArenaKind kind)
    {
        const uint32_t aligned = (g.arenaUsed + g.uniformAlignment - 1) & ~(g.uniformAlignment - 1);
        if (aligned + bytes > g.arenaSlotBytes)
        {
            g.arenaOverflows++;
            return UINT32_MAX;
        }
        g.arenaUsed = aligned + bytes;
        g.arenaWritten[kind] += bytes;
        // Offsets are into the whole buffer -- they become descriptor offsets and
        // storage-buffer indices -- so the slot's base is carried in the answer.
        return g.arenaBase + aligned;
    }

    uint32_t CopyIntoArena(const void* bytes, uint32_t size, ArenaKind kind)
    {
        const uint32_t at = Allocate(size, kind);
        if (at == UINT32_MAX) return at;
        std::memcpy(g.arenaMapped + at, bytes, size);
        return at;
    }

    // The file holds 512 vec4 and a stage sees 256 from wherever its base says --
    // for a pixel shader usually 256, so uploading the low half twice would hand
    // it the vertex shader's constants.
    // `needed` is how many of the 256 the shader reads. The uniform block is
    // still declared as all 256 and the descriptor range is still 4 KB, so what
    // sits above the copy is whatever the arena held -- which the shader never
    // reads. That is why each slot keeps 4 KB of headroom.
    uint32_t WriteConstantWindow(const gpu::RegisterFile& r, uint32_t windowRegister,
                                 uint32_t slot, uint32_t needed)
    {
        const gpu::ConstantWindow window{ r[windowRegister] };
        const uint32_t base = std::min(window.Base(), 256u);
        const uint32_t first = gpu::kConstantBaseAlu + base * 4;

        State::Cached& cache = g.constantWindows[slot];
        // The cached copy covers `cache.count` of them; it serves this draw if
        // it reaches far enough and none of what it holds has been written
        // since. Stamping only the copied range, rather than all 256, means a
        // write to a constant nobody in this window reads does not throw it out.
        if (cache.valid && cache.base == base && cache.count >= needed &&
            cache.stamp == r.StampOf(first, cache.count * 4))
        {
            g.arenaReused[kArenaConstants] += needed * 16;
            return cache.at;
        }

        const uint32_t bytes = needed * 16;
        const uint32_t at = Allocate(bytes, kArenaConstants);
        if (at == UINT32_MAX) return at;
        std::memcpy(g.arenaMapped + at, &r.values[first], bytes);
        cache = { r.StampOf(first, needed * 4), base, at, true, needed };
        return at;
    }

    // What a program needs copied: one past the highest constant it names, or
    // the whole window when it indexes them with a run-time value.
    uint32_t ConstantsNeeded(const shader::Translation& program)
    {
        if (program.addressedConstants) return 256;
        return std::min(program.constantsRead, 256u);
    }

    // Xenos takes three corners of a rectangle and works out the fourth as
    // v0 + v2 - v1. The data is still in the guest's byte order here, and a field
    // that is the same at all three corners -- a packed colour, most often -- is
    // carried across rather than run through arithmetic that would not mean
    // anything for it.
    void BuildFourthCorner(uint32_t* vertices, uint32_t stride, uint32_t rect,
                           uint32_t at)
    {
        const uint32_t* v0 = vertices + (rect * 3 + 0) * stride;
        const uint32_t* v1 = vertices + (rect * 3 + 1) * stride;
        const uint32_t* v2 = vertices + (rect * 3 + 2) * stride;
        uint32_t* out = vertices + at * stride;
        for (uint32_t d = 0; d < stride; d++)
        {
            const uint32_t a = __builtin_bswap32(v0[d]);
            const uint32_t b = __builtin_bswap32(v1[d]);
            const uint32_t c = __builtin_bswap32(v2[d]);
            const uint32_t value =
                (a == b && b == c)
                    ? a
                    : std::bit_cast<uint32_t>(std::bit_cast<float>(a) +
                                              std::bit_cast<float>(c) -
                                              std::bit_cast<float>(b));
            out[d] = __builtin_bswap32(value);
        }
    }

    uint64_t VertexRange(uint32_t lowest, uint32_t highest)
    {
        return (uint64_t(lowest) << 32) | highest;
    }

    ConstantOffsets WriteConstants(const gpu::RegisterFile& r,
                                   const shader::Translation& program,
                                   const shader::Translation& pixelProgram,
                                   uint32_t lowestVertex, uint32_t highestVertex,
                                   uint32_t rectangles)
    {
        const uint32_t (&subs)[3] = program.vertexFetchSubs;
        ConstantOffsets out{ 0, 0, 0, 0, 0, false };

        out.vertexFloats = WriteConstantWindow(r, gpu::SQ_VS_CONST, 0,
                                               ConstantsNeeded(program));
        if (out.vertexFloats == UINT32_MAX) return out;
        out.pixelFloats = WriteConstantWindow(r, gpu::SQ_PS_CONST, 1,
                                              ConstantsNeeded(pixelProgram));
        if (out.pixelFloats == UINT32_MAX) return out;
        if (g.drawRecord)
            NoteConstantWindows(r, ConstantsNeeded(program), ConstantsNeeded(pixelProgram));

        // The assembled block depends on the fetch registers and on which groups
        // the shader reads, and the vertex copies it points at stay where they are
        // for the rest of the frame -- so an unchanged pair is the same block.
        const uint64_t fetchStamp = r.StampOf(gpu::kConstantBaseFetch, 32 * 6);
        // A rectangle list gets a copy of its own, with the corners it does not
        // carry written into it -- so it can never share one with another draw.
        const bool fetchCached = !rectangles &&
                                 g.fetchBlock.valid && g.fetchBlock.stamp == fetchStamp &&
                                 g.fetchBlock.base == VertexRange(lowestVertex, highestVertex) &&
                                 std::equal(subs, subs + 3, g.fetchSubs);

        // The fetch window is 32 groups of six dwords; the shader sees 96
        // constants of two dwords each, padded to a vec4.
        if (fetchCached)
        {
            if (g.drawRecord) NoteVertexWindow(nullptr, 0);   // the previous draw's
            g.arenaReused[kArenaConstants] += 96 * 16;
            out.fetch = g.fetchBlock.at;
            out.booleans = g.booleans.at;
            out.loops = g.loops.at;
            out.ok = true;
            return out;
        }
        out.fetch = Allocate(96 * 16, kArenaConstants);
        if (out.fetch == UINT32_MAX) return out;
        uint32_t* fetch = reinterpret_cast<uint32_t*>(g.arenaMapped + out.fetch);
        std::memset(fetch, 0, 96 * 16);
        for (uint32_t group = 0; group < 32; group++)
        {
            const uint32_t* source = &r.values[gpu::kConstantBaseFetch + group * 6];
            for (uint32_t sub = 0; sub < 3; sub++)
            {
                uint32_t* entry = fetch + (group * 3 + sub) * 4;
                entry[0] = source[sub * 2];
                entry[1] = source[sub * 2 + 1];
            }
        }

        // A vertex fetch constant holds a physical address. Rather than making all of
        // guest memory addressable by the GPU, the data each fetch names is copied
        // into the frame arena and the address rewritten to point at the copy -- so
        // the shader's arithmetic is untouched and only what a draw reads crosses.
        // What has been copied for this draw, so two of its fetch slots naming one
        // buffer copy it once. It does not outlive the draw: see below.
        constexpr uint32_t kFetchSlots = 32 * 3;
        struct Made { uint32_t address, base, first, dwords; };
        Made made[kFetchSlots];          // every entry is written before it is read
        uint32_t madeCount = 0;
        for (uint32_t group = 0; group < 32; group++)
        {
            for (uint32_t sub = 0; sub < 3; sub++)
            {
                if (!(subs[sub] & (1u << group))) continue;
                uint32_t* entry = fetch + (group * 3 + sub) * 4;
                const uint32_t type = entry[0] & 3;
                if (type != 3) continue;                       // not a vertex fetch
                const uint32_t declared = (entry[1] >> 2) & 0xFFFFFF;
                if (!declared) { entry[0] = 0; continue; }
                const uint32_t va = kernel::FromPhysical(entry[0] & ~3u);
                if (!va) { entry[0] = 0; continue; }
                if (g.drawRecord) NoteVertexBuffer(entry[0] & ~3u);

                // The window the program reaches, not the extent the constant spans:
                // a model near the end of a shared vertex heap is indexed from the
                // heap's base, so the prefix below it is as large as the buffer.
                const uint32_t slot = group * 3 + sub;
                const uint32_t stride = program.vertexFetchStride[slot];

                if (rectangles && stride)
                {
                    const uint32_t given = rectangles * 3;
                    const uint32_t total = given + rectangles;
                    const uint32_t at = Allocate(total * stride * 4, kArenaVertices);
                    if (at == UINT32_MAX) return out;
                    uint32_t* vertices = reinterpret_cast<uint32_t*>(g.arenaMapped + at);
                    const uint32_t have = std::min(given * stride, declared);
                    std::memcpy(vertices, guest::Base() + va, have * 4);
                    if (have < given * stride)
                        std::memset(vertices + have, 0, (given * stride - have) * 4);
                    for (uint32_t rect = 0; rect < rectangles; rect++)
                        BuildFourthCorner(vertices, stride, rect, given + rect);
                    if (g.drawRecord) NoteVertexWindow(guest::Base() + va, have * 4);
                    entry[0] = at | type;
                    continue;
                }

                const uint64_t from = uint64_t(lowestVertex) * stride;
                const uint64_t to = uint64_t(highestVertex) * stride +
                                    program.vertexFetchTail[slot];
                // The copy stops at the end of the buffer the fetch constant
                // declares; a window that starts past it has nothing to copy.
                if (from >= declared) { entry[0] = 0; continue; }
                const uint32_t first = uint32_t(from);
                const uint32_t last = uint32_t(std::min<uint64_t>(to, declared));
                if (last <= first) { entry[0] = 0; continue; }
                const uint32_t words = last - first;
                if (g.drawRecord) NoteVertexWindow(guest::Base() + va + first * 4, words * 4);

                // Pages the title has not written since the shadow copied them
                // are read there, at the guest's own address, and not copied.
                const uint32_t physical = entry[0] & ~3u;
                if (g.shadowBase && va == guest::kPhysicalBase + physical &&
                    gpu::watch::Serve(physical + first * 4, words * 4, g.submissionSerial + 1,
                                      CompletedSerial, g.frames))
                {
                    g.arenaReused[kArenaVertices] += words * 4;
                    entry[0] = (g.shadowBase + physical) | type;
                    continue;
                }

                // One copy serves the other fetch slots of THIS draw that name
                // the same buffer, and no draw after it. Nothing stamps a write
                // to guest memory the way the register file stamps its own, so a
                // copy made earlier in the frame cannot be told apart from one
                // the title has overwritten since -- and it does overwrite, into
                // a ring of dynamic geometry it reuses within the frame. Serving
                // that stale copy draws one mesh through another's indices,
                // which is a triangle stretched across the screen. Measured:
                // holding the copies for a whole frame saved 3 MB of the 12 MB
                // copied per frame here, and cost correctness for it.
                Made* found = nullptr;
                for (uint32_t i = 0; i < madeCount; i++)
                    if (made[i].address == (entry[0] & ~3u)) { found = &made[i]; break; }
                const bool covered = found && found->dwords && found->first <= first &&
                                     found->first + found->dwords >= last;
                if (covered)
                    g.arenaReused[kArenaVertices] += words * 4;
                else
                {
                    // Never the union with what was cached: draws reaching into a
                    // shared heap from both ends would ratchet it out to the whole
                    // buffer, and every later miss would copy all of it.
                    const uint32_t at = CopyIntoArena(guest::Base() + va + first * 4,
                                                      words * 4, kArenaVertices);
                    if (at == UINT32_MAX) return out;
                    if (!found) found = &made[madeCount++];
                    *found = { entry[0] & ~3u, at - first * 4, first, words };
                }
                entry[0] = found->base | type;
            }
        }

        const uint64_t boolStamp = r.StampOf(gpu::kConstantBaseBool, 8);
        if (g.booleans.valid && g.booleans.stamp == boolStamp)
        {
            g.arenaReused[kArenaConstants] += 8 * 4;
            out.booleans = g.booleans.at;
        }
        else
        {
            out.booleans = CopyIntoArena(&r.values[gpu::kConstantBaseBool], 8 * 4, kArenaConstants);
            if (out.booleans == UINT32_MAX) return out;
            g.booleans = { boolStamp, 0, out.booleans, true };
        }

        const uint64_t loopStamp = r.StampOf(gpu::kConstantBaseLoop, 32);
        if (g.loops.valid && g.loops.stamp == loopStamp)
        {
            g.arenaReused[kArenaConstants] += 32 * 4;
            out.loops = g.loops.at;
        }
        else
        {
            out.loops = CopyIntoArena(&r.values[gpu::kConstantBaseLoop], 32 * 4, kArenaConstants);
            if (out.loops == UINT32_MAX) return out;
            g.loops = { loopStamp, 0, out.loops, true };
        }

        g.fetchBlock = { fetchStamp, VertexRange(lowestVertex, highestVertex), out.fetch, true };
        std::copy(subs, subs + 3, g.fetchSubs);
        out.ok = true;
        return out;
    }

    // Byte-swapped into the arena, and the lowest and highest vertex named on
    // the way through. A list of nothing but restarts comes out lowest above
    // highest, which WriteIndices turns into vertex 0. Written
    // without a branch -- the restart index counts as
    // zero toward the highest, and as the largest value it can never be the
    // lowest -- so the loop vectorises; cloned for AVX2, picked at run time.
    // Nothing is read back from `out`, which is write-combined memory.
    template <typename T>
    __attribute__((always_inline)) inline
    void SwapIndices(const uint8_t* source, T* out, uint32_t count, T& lowest, T& highest)
    {
        typedef T Unaligned __attribute__((aligned(1), may_alias));
        const Unaligned* in = reinterpret_cast<const Unaligned*>(source);
        constexpr T restart = T(~T(0));
        T low = restart, high = 0;
        for (uint32_t i = 0; i < count; i++)
        {
            T value;
            if constexpr (sizeof(T) == 2) value = T(__builtin_bswap16(in[i]));
            else                          value = T(__builtin_bswap32(in[i]));
            out[i] = value;
            low = value < low ? value : low;
            const T counted = value == restart ? T(0) : value;
            high = counted > high ? counted : high;
        }
        lowest = low;
        highest = high;
    }

#if !defined(_WIN32)
    __attribute__((target_clones("avx2", "default")))
#endif
    void SwapIndices16(const uint8_t* source, uint16_t* out, uint32_t count, uint16_t& lowest,
                       uint16_t& highest)
    {
        SwapIndices(source, out, count, lowest, highest);
    }

#if !defined(_WIN32)
    __attribute__((target_clones("avx2", "default")))
#endif
    void SwapIndices32(const uint8_t* source, uint32_t* out, uint32_t count, uint32_t& lowest,
                       uint32_t& highest)
    {
        SwapIndices(source, out, count, lowest, highest);
    }

    // Indices are big-endian in guest memory and the hardware reads them that
    // way; Vulkan does not. `lowest` and `highest` bound the window of the vertex
    // buffer the draw can reach.
    uint32_t WriteIndices(uint32_t address, uint32_t count, bool wide,
                          uint32_t& lowest, uint32_t& highest)
    {
        // Copied afresh for every draw. One call is one draw, so a cache here
        // could only ever serve a later draw from an earlier draw's bytes, and
        // an index buffer the title rewrites within the frame -- its dynamic
        // geometry does -- would then be drawn twice from the first version.
        const uint32_t bytes = count * (wide ? 4 : 2);
        const uint32_t at = Allocate(bytes, kArenaIndices);
        if (at == UINT32_MAX) return at;
        const uint8_t* source = guest::Base() + address;
        if (g.drawRecord) NoteIndices(source, bytes);
        if (wide)
        {
            SwapIndices32(source, reinterpret_cast<uint32_t*>(g.arenaMapped + at), count,
                          lowest, highest);
        }
        else
        {
            uint16_t low, high;
            SwapIndices16(source, reinterpret_cast<uint16_t*>(g.arenaMapped + at), count,
                          low, high);
            lowest = low;
            highest = high;
        }
        if (lowest > highest) lowest = highest;
        return at;
    }
}

#endif  // MW2_HAVE_VULKAN
