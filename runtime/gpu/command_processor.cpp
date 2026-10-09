// The command processor: executes the PM4 stream the title's own D3D9 builds,
// the way the Xenos front end does -- registers, constants, shader loads,
// memory writes, waits, events and draws, in stream order.
#include <ppc_recomp_shared.h>
#include "internal.h"
#include "../pacing_trace.h"
#include "gpu.h"
#include "registers.h"
#include "../counter.h"
#include "../diagnostics.h"
#include "../guest.h"
#include "../image_move.h"
#include "../log.h"
#include "../kernel/kernel.h"
#include "vulkan/renderer.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <mutex>
#include <string>
#include <thread>
#include <unordered_set>
#include <vector>

namespace
{
    using namespace gpu::detail;

    // Same command processor family as Adreno A2xx.
    enum : uint32_t
    {
        PM4_NOP                 = 0x10,
        PM4_INDIRECT_BUFFER     = 0x3F,
        PM4_INDIRECT_BUFFER_PFD = 0x37,
        PM4_WAIT_FOR_IDLE       = 0x26,
        PM4_WAIT_REG_MEM        = 0x3C,
        PM4_REG_RMW             = 0x21,
        PM4_REG_TO_MEM          = 0x3E,
        PM4_MEM_WRITE           = 0x3D,
        PM4_COND_WRITE          = 0x45,
        PM4_EVENT_WRITE         = 0x46,
        PM4_EVENT_WRITE_SHD     = 0x58,
        PM4_EVENT_WRITE_CFL     = 0x59,
        PM4_EVENT_WRITE_ZPD     = 0x5B,
        PM4_DRAW_INDX           = 0x22,
        PM4_DRAW_INDX_2         = 0x36,
        PM4_SET_CONSTANT        = 0x2D,
        PM4_SET_CONSTANT2       = 0x55,
        PM4_IM_LOAD             = 0x27,
        PM4_IM_LOAD_IMMEDIATE   = 0x2B,
        PM4_INVALIDATE_STATE    = 0x3B,
        PM4_SET_BIN_MASK        = 0x50,
        PM4_SET_BIN_SELECT      = 0x51,
        PM4_CONTEXT_UPDATE      = 0x5E,
        PM4_INTERRUPT           = 0x54,
        PM4_ME_INIT             = 0x48,
        PM4_VIZ_QUERY           = 0x23,
        PM4_LOAD_ALU_CONSTANT   = 0x2F,
        PM4_EVENT_WRITE_EXT     = 0x5A,
        PM4_SET_BIN_MASK_LO     = 0x60,
        PM4_SET_BIN_MASK_HI     = 0x61,
        PM4_SET_BIN_SELECT_LO   = 0x62,
        PM4_SET_BIN_SELECT_HI   = 0x63,
        PM4_XE_SWAP             = 0x64,
    };

    const char* OpcodeName(uint32_t op)
    {
        switch (op)
        {
        case PM4_NOP:                 return "NOP";
        case PM4_INDIRECT_BUFFER:     return "INDIRECT_BUFFER";
        case PM4_INDIRECT_BUFFER_PFD: return "INDIRECT_BUFFER_PFD";
        case PM4_WAIT_FOR_IDLE:       return "WAIT_FOR_IDLE";
        case PM4_WAIT_REG_MEM:        return "WAIT_REG_MEM";
        case PM4_REG_RMW:             return "REG_RMW";
        case PM4_REG_TO_MEM:          return "REG_TO_MEM";
        case PM4_MEM_WRITE:           return "MEM_WRITE";
        case PM4_COND_WRITE:          return "COND_WRITE";
        case PM4_EVENT_WRITE:         return "EVENT_WRITE";
        case PM4_EVENT_WRITE_SHD:     return "EVENT_WRITE_SHD";
        case PM4_EVENT_WRITE_CFL:     return "EVENT_WRITE_CFL";
        case PM4_EVENT_WRITE_ZPD:     return "EVENT_WRITE_ZPD";
        case PM4_DRAW_INDX:           return "DRAW_INDX";
        case PM4_DRAW_INDX_2:         return "DRAW_INDX_2";
        case PM4_SET_CONSTANT:        return "SET_CONSTANT";
        case PM4_SET_CONSTANT2:       return "SET_CONSTANT2";
        case PM4_IM_LOAD:             return "IM_LOAD";
        case PM4_IM_LOAD_IMMEDIATE:   return "IM_LOAD_IMMEDIATE";
        case PM4_INVALIDATE_STATE:    return "INVALIDATE_STATE";
        case PM4_SET_BIN_MASK:        return "SET_BIN_MASK";
        case PM4_SET_BIN_SELECT:      return "SET_BIN_SELECT";
        case PM4_CONTEXT_UPDATE:      return "CONTEXT_UPDATE";
        case PM4_INTERRUPT:           return "INTERRUPT";
        case PM4_ME_INIT:             return "ME_INIT";
        case PM4_VIZ_QUERY:           return "VIZ_QUERY";
        case PM4_LOAD_ALU_CONSTANT:   return "LOAD_ALU_CONSTANT";
        case PM4_EVENT_WRITE_EXT:     return "EVENT_WRITE_EXT";
        case PM4_SET_BIN_MASK_LO:     return "SET_BIN_MASK_LO";
        case PM4_SET_BIN_MASK_HI:     return "SET_BIN_MASK_HI";
        case PM4_SET_BIN_SELECT_LO:   return "SET_BIN_SELECT_LO";
        case PM4_SET_BIN_SELECT_HI:   return "SET_BIN_SELECT_HI";
        case PM4_XE_SWAP:             return "XE_SWAP";
        default:                      return nullptr;
        }
    }

    // The five constant windows SET_CONSTANT and LOAD_ALU_CONSTANT name by type.
    constexpr uint32_t kConstantWindows[5] = {
        gpu::kConstantBaseAlu,  gpu::kConstantBaseFetch, gpu::kConstantBaseBool,
        gpu::kConstantBaseLoop, gpu::kConstantBaseRegisters,
    };

    // Everything here is the GPU thread's; the statistics are read by the report.
    struct State
    {
        gpu::RegisterFile registers;

        // Predication: a type-3 packet with bit 0 set runs only when the bin
        // select and the bin mask share a bit.
        uint64_t binSelect = 0xFFFFFFFFull, binMask = 0xFFFFFFFFull;

        // The shaders the last IM_LOADs set: a draw uses whichever is loaded,
        // as it uses whatever registers are set.
        std::vector<uint32_t> shader[2];
        uint64_t shaderHash[2]{};
        std::unordered_set<uint64_t> shadersSeen;

        uint64_t swapsParsed = 0;         // PM4_XE_SWAP packets met
        // A frame's cost as the consumer sees it, swap to swap: its own CPU
        // time, and the wall clock. A frame over a vertical blank's worth
        // waits for the next one, so the spread says more than the average.
        static constexpr uint32_t kFrameBins = 7;
        uint64_t frameCpu[kFrameBins]{}, frameWall[kFrameBins]{};
        int64_t lastSwapCpu = 0, lastSwapWall = 0;
        // A WAIT_FOR_IDLE with no draw after it: the GPU has finished every draw
        // so far, so whatever the command processor writes or raises now tells
        // the title they are done (vk::renderer::BeforeCompletion).
        bool idleSinceDraw = false;
        uint64_t batchWork = 0;

        uint32_t unknownOpcodes = 0;
        diag::Stat packets, typeCount[4], opcodeCount[128], padding;
        diag::Stat buffers, buffersLostStep, implausibleBuffers, batchesAbandoned;
        diag::Stat shaderLoadsRefused, predicatedRun, predicatedSkipped, registerWritesOutOfRange;
        // WAIT_REG_MEM: seen, found not yet satisfied, time spent waiting, given up on.
        diag::Stat regMemWaits, regMemStalls, regMemWaitMicros, regMemTimeouts;

        // The display's colour table: 256 entries of ten bits per channel, blue
        // in the low bits. The title rewrites the whole ramp as one sweep of
        // entry 0 to entry 255, so the sweep in progress is kept apart from the
        // last one that finished: a present that lands mid-sweep must not see
        // half of each.
        uint32_t displayLutPending[256]{};
        uint32_t displayLut[256]{};
        std::mutex displayLutLock;
        std::atomic<bool> displayLutReady{ false };
    };
    State g;

    // Bins in milliseconds: under 8, 12, 16.7, 20, 33.3, 50, and above.
    uint32_t FrameBin(double ms)
    {
        static constexpr double kEdges[] = { 8.0, 12.0, 16.7, 20.0, 33.3, 50.0 };
        uint32_t bin = 0;
        while (bin < 6 && ms >= kEdges[bin]) bin++;
        return bin;
    }

    void NoteFrameCost()
    {
        if constexpr (!diag::kOn) return;
        timespec cpu{};
        clock_gettime(CLOCK_THREAD_CPUTIME_ID, &cpu);
        const int64_t cpuNow = int64_t(cpu.tv_sec) * 1000000000 + cpu.tv_nsec;
        const int64_t wallNow = std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count();
        if (g.lastSwapWall)
        {
            g.frameCpu[FrameBin(double(cpuNow - g.lastSwapCpu) / 1e6)]++;
            g.frameWall[FrameBin(double(wallNow - g.lastSwapWall) / 1e6)]++;
        }
        g.lastSwapCpu = cpuNow;
        g.lastSwapWall = wallNow;
    }

    // One pass over the ring must finish. A pair of dwords misread as an indirect
    // buffer sends the parse into unrelated memory where everything it finds can
    // be another indirect buffer, so a batch's work is bounded, far above a real
    // frame (~50k dwords).
    constexpr uint64_t kBatchWorkLimit = 8ull << 20;

    struct Source
    {
        uint32_t base = 0;
        uint32_t index = 0;
        uint32_t wrapMask = 0;      // 0 for a linear indirect buffer
        uint32_t remaining = 0;
        // Set when the buffer produced a packet that cannot be one: the rest of
        // it is not read, as Xenia's command processor ends a buffer there.
        bool lostStep = false;

        uint32_t Next()
        {
            const uint32_t i = wrapMask ? (index & wrapMask) : index;
            index++;
            if (remaining) remaining--;
            return *GuestPtr<be32>(base + i * 4);
        }
        void Skip(uint32_t n) { for (uint32_t i = 0; i < n && remaining; i++) Next(); }
        uint32_t AddressOf(uint32_t at) const
        {
            return base + (wrapMask ? (at & wrapMask) : at) * 4;
        }
    };

    void Execute(Source& s, int depth);

    // MW2_WATCH=<hex>[:bytes]: the command processor's own writes into the
    // watched range are reported here; the CPU's go through watchpoint.cpp.
    struct Watch { uint32_t lo = 0, hi = 0; };
    const Watch& Watched()
    {
        static const Watch w = [] {
            Watch v;
            const char* e = diag::Text("MW2_WATCH");
            if (!e) return v;
            char* end = nullptr;
            v.lo = uint32_t(std::strtoul(e, &end, 16));
            const uint32_t bytes = (end && *end == ':') ? uint32_t(std::strtoul(end + 1, nullptr, 0)) : 4;
            v.hi = v.lo + (bytes ? bytes : 4);
            return v;
        }();
        return w;
    }

    void WriteRegister(uint32_t index, uint32_t value)
    {
        if (!g.registers.InRange(index)) { g.registerWritesOutOfRange++; return; }
        g.registers.Write(index, value);

        // A scratch register whose bit is set in SCRATCH_UMSK is written back to
        // memory at SCRATCH_ADDR + 4n, as Xenia's command processor does. The
        // title writes one and then WAIT_REG_MEMs on that memory to know the GPU
        // has got this far.
        if (index >= kScratchReg0 && index <= kScratchReg0 + 7)
        {
            const uint32_t n = index - kScratchReg0;
            const uint32_t umsk = RegisterOrAperture(kScratchUmsk);
            if (umsk & (1u << n)) WritePhysical(RegisterOrAperture(kScratchAddr) + n * 4, value);
            return;
        }

        // The display's own colour lookup table, which the scanout hardware
        // applies to the front buffer. The title fills it by pointing
        // DC_LUT_RW_INDEX at an entry and writing DC_LUT_30_COLOR, which then
        // steps the index on by itself.
        if (index == gpu::DC_LUT_30_COLOR)
        {
            const uint32_t entry = g.registers[gpu::DC_LUT_RW_INDEX] & 0xFF;
            const uint32_t mask  = g.registers[gpu::DC_LUT_WRITE_EN_MASK] & 7;
            uint32_t& held = g.displayLutPending[entry];
            if (mask & 1) held = (held & ~0x000003FFu) | (value & 0x3FF);
            if (mask & 2) held = (held & ~0x000FFC00u) | (value & 0xFFC00);
            if (mask & 4) held = (held & ~0x3FF00000u) | (value & 0x3FF00000);
            g.registers.Write(gpu::DC_LUT_RW_INDEX, (entry + 1) & 0xFF);
            // Entry 255 ends the sweep: the ramp the title means is complete.
            if (entry == 0xFF)
            {
                std::lock_guard<std::mutex> guard(g.displayLutLock);
                std::memcpy(g.displayLut, g.displayLutPending, sizeof g.displayLut);
                g.displayLutReady.store(true, std::memory_order_release);
            }
        }
    }

    // The occlusion query. The command processor leaves eight counters in a
    // 32-byte record -- { total, z-fail, z-pass, stencil-fail } x two lanes the
    // title sums -- and they are little-endian, because D3D byte-swaps them when
    // it reads them back (`lwbrx`). A query owns a 64-byte slot: the end record
    // at its base and the begin record 32 bytes above, and the answer the title
    // computes is the end's z-pass count less the begin's.
    //
    // D3D marks the record it is waiting for by writing FFFFFEED into both
    // z-pass lanes, and D3DQuery::GetData reports "not finished yet" until they
    // change. The two events bracket the draws being counted, so they open and
    // close a real Vulkan occlusion query; the begin record is written as zero
    // at once, and the end record carries the whole count, written when the
    // GPU has finished counting -- as the console's GPU writes it.
    void WriteSampleCounts(uint32_t address, uint32_t count)
    {
        constexpr uint32_t kRecordBytes = 0x20;
        const uint32_t record = address & ~(kRecordBytes - 1);
        const uint32_t va = record ? kernel::FromPhysical(record) : 0;
        if (!va) return;
        // Little-endian, so the host's own word order is what the title wants.
        auto* w = GuestPtr<uint32_t>(va);
        w[0] = count; w[1] = 0;     // total, lanes A and B
        w[2] = 0;     w[3] = 0;     // z-fail
        w[4] = count; w[5] = 0;     // z-pass, which is the one the title reads
        w[6] = 0;     w[7] = 0;     // stencil-fail
    }

    // The title reads the count as a signed difference; saturate rather than
    // hand it a number that comes back negative.
    void WriteEndRecord(uint32_t address, uint64_t samples)
    {
        WriteSampleCounts(address, uint32_t(std::min<uint64_t>(samples, 0x7FFFFFFFu)));
    }

    void SampleCountEvent(uint32_t address)
    {
        // The begin record is the one with bit 5 of its address set.
        if (address & 0x20)
        {
            vk::renderer::BeginOcclusionQuery();
            WriteSampleCounts(address, 0);
            return;
        }
        uint64_t samples = 0;
        if (vk::renderer::EndOcclusionQuery(address, samples)) WriteEndRecord(address, samples);
    }

    // MW2_DUMP_SHADERS=<dir>: every distinct shader's microcode, big-endian as
    // the title holds it, for tools/xenos_shader.py and translate-shader.
    const char* ShaderDumpDirectory()
    {
        static const char* dir = diag::Text("MW2_DUMP_SHADERS");
        return dir;
    }

    // An IM_LOAD or IM_LOAD_IMMEDIATE: `type` 0 is the vertex shader, 1 the pixel.
    void LoadShader(uint32_t type, std::vector<uint32_t>&& code)
    {
        if (code.empty()) return;
        type &= 1;
        const uint64_t hash = vk::renderer::ShaderHash(code.data(), code.size());
        g.shaderHash[type] = hash;
        if constexpr (!diag::kOn) { g.shader[type] = std::move(code); return; }
        if (g.shadersSeen.insert(hash).second && ShaderDumpDirectory())
        {
            char path[512];
            std::snprintf(path, sizeof path, "%s/%s_%016llx.ucode", ShaderDumpDirectory(),
                          type ? "pixel" : "vertex", (unsigned long long)hash);
            if (std::FILE* f = std::fopen(path, "wb"))
            {
                for (uint32_t v : code)
                {
                    const uint32_t be = __builtin_bswap32(v);
                    std::fwrite(&be, 4, 1, f);
                }
                std::fclose(f);
            }
        }
        g.shader[type] = std::move(code);
    }

    // MW2_TRACE_DRAWS=<n> describes n draw packets in full, after
    // MW2_TRACE_DRAWS_AFTER=<presents>: the opening burst is not representative.
    void TraceDraw(const gpu::DrawInitiator& draw, bool indexed, uint32_t dmaBase,
                   uint32_t dmaSize)
    {
        static const uint64_t limit = diag::Number("MW2_TRACE_DRAWS");
        static const uint64_t after = diag::Number("MW2_TRACE_DRAWS_AFTER");
        static uint64_t traced = 0;
        if (traced >= limit || gpu::FrameCount() < after) return;
        traced++;
        const char* name = gpu::PrimitiveName(draw.PrimitiveType());
        LOGK("draw: %-22s %5u indices, %s, surface %08X colour %08X depth %08X,"
             " program %08X, mode %08X",
             name ? name : "unknown primitive", draw.IndexCount(), indexed ? "indexed" : "auto",
             g.registers[gpu::RB_SURFACE_INFO], g.registers[gpu::RB_COLOR_INFO],
             g.registers[gpu::RB_DEPTH_INFO], g.registers[gpu::SQ_PROGRAM_CNTL],
             g.registers[gpu::RB_MODECONTROL]);
        if (indexed)
        {
            const uint32_t count = dmaSize & 0x3FFFFF;   // indices, not bytes
            LOGK("      indices from %08X, %u of them, %u-bit (%u bytes)",
                 dmaBase, count, draw.Index32() ? 32 : 16, count * (draw.Index32() ? 4 : 2));
        }
    }

    void ExecuteDraw(Source& s, uint32_t count)
    {
        if (count < 1) return;
        g.idleSinceDraw = false;
        const gpu::DrawInitiator draw{ s.Next() };
        WriteRegister(gpu::VGT_DRAW_INITIATOR, draw.value);

        // An auto-indexed draw has the shader compute its own indices.
        uint32_t dmaBase = 0, dmaSize = 0;
        const bool indexed = draw.SourceSelect() == 0;
        if (indexed && count >= 3)
        {
            dmaBase = s.Next();
            dmaSize = s.Next();
        }

        const uint32_t primitive = draw.PrimitiveType();
        const gpu::EdramMode mode = gpu::EdramMode(g.registers[gpu::RB_MODECONTROL] & 0x7);
        CensusDraw(g.registers, primitive, draw.IndexCount(), indexed, mode);
        if (imagepool::CopiesWaiting())
            imagepool::AtDraw(g.registers[gpu::kConstantBaseAlu], g.shaderHash[0]);
        if (DumpingTextures()) DumpBoundTextures(g.registers);

        if (Rendering())
        {
            if (mode == gpu::EdramMode::Copy)
                vk::renderer::Resolve(g.registers);
            else
            {
                vk::renderer::DrawCall call;
                call.primitive = primitive;
                call.indexCount = draw.IndexCount();
                call.indexed = indexed;
                call.index32 = draw.Index32();
                // Physical, as every address the GPU is handed is.
                call.indexAddress = indexed ? kernel::FromPhysical(dmaBase) : 0;
                call.vertexCode = g.shader[0].data();
                call.vertexWords = g.shader[0].size();
                call.vertexHash = g.shaderHash[0];
                call.pixelCode = g.shader[1].data();
                call.pixelWords = g.shader[1].size();
                call.pixelHash = g.shaderHash[1];
                vk::renderer::Draw(g.registers, call);
            }
        }
        TraceDraw(draw, indexed, dmaBase, dmaSize);
    }

    void ExecuteIndirect(uint32_t physicalAddress, uint32_t sizeDwords, int depth)
    {
        if (depth > 4 || !sizeDwords) return;
        // Every buffer the title issues is 32-byte aligned and a few thousand dwords
        // long. A pair of dwords that only reads like an address and a length almost
        // never satisfies both, and running one sends the parse into unrelated memory.
        if ((physicalAddress & 0x1F) || sizeDwords > (16u << 10))
        {
            g.implausibleBuffers++;
            return;
        }
        const uint32_t va = kernel::FromPhysical(physicalAddress);
        if (!va) return;

        Source ib{ va, 0, 0, sizeDwords };
        Execute(ib, depth + 1);
        g.buffers++;
        if (ib.lostStep) g.buffersLostStep++;
    }

    // WAIT_REG_MEM: the command processor stalls until a register or a dword of
    // memory matches. D3D's flip handshake is built on it -- wait for the
    // scratch write-back of the handler it names, raise the interrupt, wait for
    // the handler to clear the request. Waited for as Xenia waits, but not for
    // ever.
    void WaitRegMem(uint32_t info, uint32_t address, uint32_t reference, uint32_t mask)
    {
        constexpr uint32_t kCoherStatusHost = 0x0A31;
        const bool memory = (info & 0x10) != 0;
        const volatile uint32_t* word = nullptr;
        if (memory)
        {
            const uint32_t va = kernel::FromPhysical(address & ~3u);
            if (!va) return;
            word = reinterpret_cast<const volatile uint32_t*>(GuestPtr<uint8_t>(va));
        }
        else if (!g.registers.InRange(address)) return;
        const auto current = [&]() -> uint32_t {
            if (!memory)
            {
                // A coherency request is complete as soon as it is made: nothing
                // caches guest memory ahead of the GPU.
                if (address == kCoherStatusHost)
                    g.registers.Write(address, g.registers[address] & ~0x80000000u);
                return g.registers[address];
            }
            // The guest's bytes as a host dword, then the swap the address' low
            // two bits ask for, as Xenia's GpuSwap does.
            const uint32_t raw = *word;
            switch (address & 3)
            {
            case 1:  return ((raw & 0x00FF00FFu) << 8) | ((raw >> 8) & 0x00FF00FFu);
            case 2:  return __builtin_bswap32(raw);
            case 3:  return (raw << 16) | (raw >> 16);
            default: return raw;
            }
        };
        const auto matches = [&](uint32_t value) {
            value &= mask;
            switch (info & 7)
            {
            case 1:  return value <  reference;
            case 2:  return value <= reference;
            case 3:  return value == reference;
            case 4:  return value != reference;
            case 5:  return value >= reference;
            case 6:  return value >  reference;
            case 7:  return true;
            default: return false;
            }
        };
        g.regMemWaits++;
        if (matches(current())) return;
        g.regMemStalls++;

        const auto began = std::chrono::steady_clock::now();
        const auto waited = [&] { return std::chrono::steady_clock::now() - began; };
        bool matched = false;
        while (Running())
        {
            DeliverOcclusionQueries();
            std::this_thread::sleep_for(std::chrono::microseconds(50));
            if (matches(current())) { matched = true; break; }
            if (waited() > std::chrono::milliseconds(500)) break;
        }
        const auto micros = std::chrono::duration_cast<std::chrono::microseconds>(waited()).count();
        g.regMemWaitMicros += uint64_t(micros);
        if (matched) return;
        g.regMemTimeouts++;
        static uint32_t told = 0;
        if (told++ < 8)
            LOGW("gpu: gave up after 500 ms waiting for %s %08X & %08X to compare"
                 " (function %u) with %08X; it holds %08X",
                 memory ? "memory" : "register", address, mask, info & 7, reference, current());
    }

    // A type-3 packet. `count` is its payload in dwords.
    void ExecuteType3(Source& s, uint32_t header, uint32_t count, int depth)
    {
        const uint32_t opcode = (header >> 8) & 0x7F;
        g.opcodeCount[opcode]++;

        if (!OpcodeName(opcode))
        {
            if (g.unknownOpcodes++ < 32)
                LOGW("pm4: unknown type-3 opcode 0x%02X, %u dwords (header %08X) at %08X (depth %d)",
                     opcode, count, header, s.AddressOf(s.index - 1), depth);
            s.Skip(count);
            return;
        }

        // A predicated packet (bit 0) runs only when the bin select and the bin
        // mask share a bit, and a predicated swap never does -- as Xenia has it.
        if (header & 1)
        {
            if (!(g.binSelect & g.binMask) || opcode == PM4_XE_SWAP)
            {
                g.predicatedSkipped++;
                s.Skip(count);
                return;
            }
            g.predicatedRun++;
        }

        // What a handler consumed is measured rather than declared: one that read
        // past its own packet would shift everything after it.
        const uint32_t before = s.remaining;
        switch (opcode)
        {
        case PM4_INDIRECT_BUFFER:
        case PM4_INDIRECT_BUFFER_PFD:
        {
            if (count < 2) break;
            const uint32_t address = s.Next();
            const uint32_t size    = s.Next() & 0xFFFFF;
            ExecuteIndirect(address, size, depth);
            break;
        }

        case PM4_MEM_WRITE:
        {
            // { address, value... } -- the address' low bits are flags.
            const uint32_t address = s.Next();
            for (uint32_t i = 1; i < count; i++)
                WritePhysical(address + (i - 1) * 4, s.Next());
            break;
        }

        case PM4_EVENT_WRITE_SHD:
        {
            // { initiator, address, value }. Bit 31 of the initiator asks for the
            // GPU's clock instead of the value, which is the timebase's, as
            // Xenia writes it; MW2 has not been seen to ask.
            if (count < 3) break;
            const uint32_t initiator = s.Next();
            const uint32_t address   = s.Next();
            const uint32_t value     = s.Next();
            // An end-of-pipe event: its write lands once the draws before it
            // have run -- which is how D3D's fence, the arena's progress
            // report, tells the title they are done.
            vk::renderer::BeforeCompletion();
            if (ArenaProgress(address, value)) break;
            WritePhysical(address, (initiator >> 31) ? uint32_t(PPC_QueryTimebase()) : value);
            break;
        }

        case PM4_EVENT_WRITE_CFL:
        {
            // { initiator, address, value }, end of pipe as EVENT_WRITE_SHD.
            if (count < 3) break;
            vk::renderer::BeforeCompletion();
            s.Next();
            const uint32_t address = s.Next();
            WritePhysical(address, s.Next());
            break;
        }

        case PM4_EVENT_WRITE_ZPD:
            // Unlike the other event writes this one carries only the event
            // initiator: the record's address is a register.
            if (count < 1) break;
            s.Next();
            SampleCountEvent(g.registers[gpu::RB_SAMPLE_COUNT_ADDR]);
            break;

        case PM4_XE_SWAP:
            // The swap packet VdSwap writes into the present segment: the end of
            // a frame as the command processor meets it.
            // Its dwords: a signature, the front buffer, its width and height.
            if (count >= 2)
            {
                s.Next();
                const uint32_t frontBuffer = s.Next();
                if (Rendering()) vk::renderer::Swap(frontBuffer);
            }
            g.swapsParsed++;
            pacing::Note(pacing::kSwap);
            NoteFrameCost();
            CensusSwap();
            if (imagepool::CopiesWaiting()) imagepool::AtFrameEnd(g.swapsParsed);
            break;

        case PM4_SET_BIN_MASK_LO:
        case PM4_SET_BIN_MASK_HI:
        case PM4_SET_BIN_SELECT_LO:
        case PM4_SET_BIN_SELECT_HI:
        {
            // Half of the 64-bit bin mask or select that predicated packets are
            // tested against.
            if (count < 1) break;
            const uint64_t value = s.Next();
            uint64_t& target = (opcode == PM4_SET_BIN_MASK_LO || opcode == PM4_SET_BIN_MASK_HI)
                             ? g.binMask : g.binSelect;
            if (opcode == PM4_SET_BIN_MASK_LO || opcode == PM4_SET_BIN_SELECT_LO)
                target = (target & 0xFFFFFFFF00000000ull) | value;
            else
                target = (target & 0xFFFFFFFFull) | (value << 32);
            break;
        }

        case PM4_SET_BIN_MASK:
        case PM4_SET_BIN_SELECT:
        {
            // { high, low }
            if (count < 2) break;
            const uint64_t high = s.Next();
            const uint64_t low  = s.Next();
            (opcode == PM4_SET_BIN_MASK ? g.binMask : g.binSelect) = (high << 32) | low;
            break;
        }

        case PM4_IM_LOAD_IMMEDIATE:
        {
            // { type, start<<16 | size, microcode... }
            if (count < 2) break;
            const uint32_t type      = s.Next();
            const uint32_t startSize = s.Next();
            std::vector<uint32_t> code;
            code.reserve(count - 2);
            for (uint32_t i = 2; i < count; i++) code.push_back(s.Next());
            // The packet states its length twice, and a real one agrees with itself.
            if ((startSize & 0xFFFF) != count - 2) { g.shaderLoadsRefused++; break; }
            LoadShader(type, std::move(code));
            break;
        }

        case PM4_IM_LOAD:
        {
            // { address|type, start<<16 | size }: the microcode is in memory; the
            // address' low two bits select vertex or pixel.
            if (count < 2) break;
            const uint32_t addressType = s.Next();
            const uint32_t startSize   = s.Next();
            const uint32_t va = kernel::FromPhysical(addressType & ~3u);
            const uint32_t sizeDwords = startSize & 0xFFFF;
            if (!va || !sizeDwords || sizeDwords > (64u << 10)) break;
            std::vector<uint32_t> code(sizeDwords);
            for (uint32_t i = 0; i < sizeDwords; i++) code[i] = *GuestPtr<be32>(va + i * 4);
            static const bool traced = diag::Flag("MW2_TRACE_SHADER_LOADS");
            static std::unordered_set<uint32_t> told;
            if (traced && told.size() < 2000 && told.insert(va).second)
            {
                LOGI("shader load: %s %u dwords at %08X, %016llX",
                     (addressType & 3u) ? "pixel" : "vertex", sizeDwords, va,
                     (unsigned long long)vk::renderer::ShaderHash(code.data(), code.size()));
            }
            LoadShader(addressType & 3u, std::move(code));
            break;
        }

        case PM4_WAIT_FOR_IDLE:
            // The command processor stops until the GPU has finished everything
            // before. Nothing here runs ahead of the parse to wait for.
            g.idleSinceDraw = true;
            break;

        case PM4_INTERRUPT:
            // { cpu mask }: a command-processor interrupt, once per processor named.
            if (count < 1) break;
            if (g.idleSinceDraw) vk::renderer::BeforeCompletion();
            RaiseCommandProcessorInterrupt(s.Next());
            break;

        case PM4_SET_CONSTANT:
        {
            // { offset and type, values... }. The type names a constant window; the
            // offset is an index within it.
            if (count < 1) break;
            const uint32_t offsetType = s.Next();
            const uint32_t index = offsetType & 0x7FF;
            const uint32_t kind  = (offsetType >> 16) & 0xFF;
            if (kind >= 5) break;
            for (uint32_t i = 1; i < count; i++)
                WriteRegister(kConstantWindows[kind] + index + (i - 1), s.Next());
            break;
        }

        case PM4_LOAD_ALU_CONSTANT:
        {
            // { physical address, offset and type, size in dwords }: the same five
            // windows SET_CONSTANT names, filled from memory rather than from the
            // stream, as big-endian dwords.
            if (count < 3) break;
            const uint32_t address    = s.Next() & 0x3FFFFFFF;
            const uint32_t offsetType = s.Next();
            const uint32_t sizeDwords = s.Next() & 0xFFF;
            const uint32_t index = offsetType & 0x7FF;
            const uint32_t kind  = (offsetType >> 16) & 0xFF;
            const uint32_t va = kernel::FromPhysical(address);
            if (kind >= 5 || !va || !sizeDwords) break;
            for (uint32_t i = 0; i < sizeDwords; i++)
                WriteRegister(kConstantWindows[kind] + index + i, *GuestPtr<be32>(va + i * 4));
            break;
        }

        case PM4_SET_CONSTANT2:
        {
            // The offset is already an absolute register.
            if (count < 1) break;
            const uint32_t index = s.Next() & 0xFFFF;
            for (uint32_t i = 1; i < count; i++) WriteRegister(index + (i - 1), s.Next());
            break;
        }

        case PM4_DRAW_INDX:
            // { viz query token, draw initiator, [dma base, dma size] }
            if (count < 2) break;
            s.Next();
            ExecuteDraw(s, count - 1);
            break;

        case PM4_DRAW_INDX_2:
            // The same without the viz query token: where MW2's draws come from.
            ExecuteDraw(s, count);
            break;

        case PM4_REG_TO_MEM:
        {
            // { register, address }: copy one register to memory.
            if (count < 2) break;
            const uint32_t reg = s.Next() & 0xFFFF;
            WritePhysical(s.Next(), g.registers[reg]);
            break;
        }

        case PM4_WAIT_REG_MEM:
        {
            // { info, address, reference, mask, poll interval }
            if (count < 5) break;
            const uint32_t info      = s.Next();
            const uint32_t address   = s.Next();
            const uint32_t reference = s.Next();
            const uint32_t mask      = s.Next();
            s.Next();
            WaitRegMem(info, address, reference, mask);
            break;
        }

        case PM4_COND_WRITE:
        {
            // { mode, poll address, reference, mask, write address, value }.
            // Nothing here can fail a poll, so the write is taken.
            if (count < 6) break;
            const uint32_t mode = s.Next();
            s.Skip(3);
            const uint32_t writeAddress = s.Next();
            const uint32_t value        = s.Next();
            if (!(mode & 0x100))    // memory, not register
                WritePhysical(writeAddress, value);
            break;
        }

        default:
            break;
        }
        const uint32_t used = before - s.remaining;
        if (used < count) s.Skip(count - used);
    }

    void Execute(Source& s, int depth)
    {
        while (s.remaining)
        {
            if (++g.batchWork > kBatchWorkLimit)
            {
                if (depth == 0) g.batchesAbandoned++;
                return;
            }
            const uint32_t header = s.Next();
            // A zero dword is filler, not a type-0 packet: reading it as one
            // swallows the dword after it.
            if (header == 0) { g.padding++; continue; }

            const uint32_t type = header >> 30;
            const uint32_t payload = (type == 1) ? 2
                                   : (type == 2) ? 0
                                   : ((header >> 16) & 0x3FFF) + 1;
            if (payload > s.remaining)
            {
                s.lostStep = true;
                static uint32_t shown = 0;
                if (shown++ < 8)
                    LOGW("pm4: a packet at %08X (header %08X) runs past the end of its buffer;"
                         " the rest of the buffer is not read", s.AddressOf(s.index - 1), header);
                return;
            }
            g.typeCount[type]++;
            g.packets++;

            switch (type)
            {
            case 0:
            {
                // A run of registers from a base index, or the same register
                // `count` times when ONE_REG_WRITE is set -- how a FIFO register
                // is fed.
                const uint32_t base = header & 0x7FFF;
                const bool one = (header & 0x8000) != 0;
                for (uint32_t i = 0; i < payload; i++)
                    WriteRegister(one ? base : base + i, s.Next());
                break;
            }
            case 1:
            {
                // Two register indices packed into the header.
                const uint32_t first  = header & 0x7FF;
                const uint32_t second = (header >> 11) & 0x7FF;
                WriteRegister(first, s.Next());
                WriteRegister(second, s.Next());
                break;
            }
            case 2:
                break;
            case 3:
                ExecuteType3(s, header, payload, depth);
                break;
            }
        }
    }
}

void gpu::detail::DeliverOcclusionQueries()
{
    vk::renderer::CollectOcclusionQueries(WriteEndRecord);
}

void gpu::detail::ExecuteRing(uint32_t base, uint32_t readIndex, uint32_t mask, uint32_t dwords)
{
    g.batchWork = 0;
    Source s{ base, readIndex, mask, dwords };
    Execute(s, 0);
}

uint32_t gpu::detail::RegisterOrAperture(uint32_t index)
{
    if (const uint32_t v = g.registers[index]) return v;
    return *GuestPtr<be32>(kRegisterAperture + index * 4);
}

bool gpu::detail::Rendering()
{
    static const bool on = !diag::Text("MW2_RENDER") || diag::Flag("MW2_RENDER");
    return on;
}

void gpu::detail::WritePhysical(uint32_t physicalAddress, uint32_t value)
{
    const uint32_t va = kernel::FromPhysical(physicalAddress & ~3u);
    if (!va) return;
    // The title reads this as soon as it lands. Without a wait for idle, the
    // command processor writes as it meets the packet, ahead of the draws
    // before it, and the title can conclude nothing about them from it.
    if (g.idleSinceDraw) vk::renderer::BeforeCompletion();
    if constexpr (diag::kOn)
        if (const Watch& w = Watched(); va >= w.lo && va < w.hi)
            LOGK("watch: command processor writes %08X = %08X (physical %08X, was %08X)",
             va, value, physicalAddress, uint32_t(*GuestPtr<be32>(va)));
    *GuestPtr<be32>(va) = value;
}

bool gpu::DisplayColourTable(uint32_t out[256])
{
    // Only a ramp the title finished writing. Before the first one is complete
    // the frame is presented untouched.
    if (!g.displayLutReady.load(std::memory_order_acquire)) return false;
    std::lock_guard<std::mutex> guard(g.displayLutLock);
    std::memcpy(out, g.displayLut, sizeof g.displayLut);
    return true;
}

void gpu::detail::ReportCommandProcessor()
{
    if constexpr (!diag::kOn) return;
    LOGI("gpu: %llu packets; %llu of %llu indirect buffers lost step, %llu refused as"
         " implausible, %llu ring batches abandoned; %llu padding dwords, %llu unknown opcodes",
         (unsigned long long)g.packets.load(), (unsigned long long)g.buffersLostStep.load(),
         (unsigned long long)g.buffers.load(), (unsigned long long)g.implausibleBuffers.load(),
         (unsigned long long)g.batchesAbandoned.load(), (unsigned long long)g.padding.load(),
         (unsigned long long)g.unknownOpcodes);
    LOGI("gpu: %zu distinct shaders loaded, %llu loads refused as inconsistent",
         g.shadersSeen.size(), (unsigned long long)g.shaderLoadsRefused.load());
    LOGI("gpu: predicated packets: %llu run, %llu skipped", (unsigned long long)g.predicatedRun.load(),
         (unsigned long long)g.predicatedSkipped.load());
    if (g.registerWritesOutOfRange)
        LOGI("gpu: %llu register writes out of range",
             (unsigned long long)g.registerWritesOutOfRange.load());
    if (g.regMemWaits)
        LOGI("gpu: %llu WAIT_REG_MEM packets, %llu found unsatisfied (%.1f ms waited in all),"
             " %llu given up on after 500 ms",
             (unsigned long long)g.regMemWaits.load(), (unsigned long long)g.regMemStalls.load(),
             double(g.regMemWaitMicros.load()) / 1000.0, (unsigned long long)g.regMemTimeouts.load());
    LOGI("gpu: %llu swap packets", (unsigned long long)g.swapsParsed);
    const auto bins = [](const uint64_t* n) {
        char line[160];
        std::snprintf(line, sizeof line,
                      "<8 ms %llu, 8-12 %llu, 12-16.7 %llu, 16.7-20 %llu, 20-33 %llu, 33-50 %llu,"
                      " 50+ %llu", (unsigned long long)n[0], (unsigned long long)n[1],
                      (unsigned long long)n[2], (unsigned long long)n[3], (unsigned long long)n[4],
                      (unsigned long long)n[5], (unsigned long long)n[6]);
        return std::string(line);
    };
    LOGI("gpu: frames by the consumer's CPU time, swap to swap: %s", bins(g.frameCpu).c_str());
    LOGI("gpu: frames by wall time, swap to swap: %s", bins(g.frameWall).c_str());
    for (uint32_t t = 0; t < 4; t++)
        if (g.typeCount[t]) LOGI("  type %u: %llu", t, (unsigned long long)g.typeCount[t].load());
    for (uint32_t op = 0; op < 128; op++)
        if (const uint64_t n = g.opcodeCount[op].load())
        {
            const char* name = OpcodeName(op);
            LOGI("  0x%02X %-22s %llu", op, name ? name : "(unknown)", (unsigned long long)n);
        }
}
