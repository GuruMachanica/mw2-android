#pragma once
// Shared between the files that make up the command processor, and nothing else:
//
//   command_processor.cpp  executes the PM4 stream: registers, packets, draws
//   gpu.cpp                its threads, the interrupts it raises, the public API
//   arena.cpp              D3D9's command-buffer arena and its progress reports
//   census.cpp             what the stream holds, counted, and the dumps
//   d3d_hooks.cpp          the hooks on the title's D3D9
#include <cstdint>
#include "registers.h"
#include "../diagnostics.h"

namespace gpu::detail
{
    // Registers are plain memory in this address space; the CPU writes some
    // straight through the aperture rather than through the command stream.
    constexpr uint32_t kRegisterAperture = 0x7FC80000u;
    constexpr uint32_t kCpRbWptr         = kRegisterAperture + 0x714u;
    constexpr uint32_t kScratchUmsk      = 0x01DC;
    constexpr uint32_t kScratchAddr      = 0x01DD;
    constexpr uint32_t kScratchReg0      = 0x0578;

    // ---- command_processor.cpp
    // Executes `dwords` of the ring starting at `readIndex`.
    void ExecuteRing(uint32_t base, uint32_t readIndex, uint32_t mask, uint32_t dwords);
    // A register the command stream may never have written: then the value the
    // CPU put in the aperture.
    uint32_t RegisterOrAperture(uint32_t index);
    // False under MW2_RENDER=0: the stream is executed and counted, nothing drawn.
    bool Rendering();
    void WritePhysical(uint32_t physicalAddress, uint32_t value);
    void ReportCommandProcessor();
    // Writes the records of the occlusion queries the GPU has finished counting.
    void DeliverOcclusionQueries();

    // ---- gpu.cpp
    bool Running();
    // PM4_INTERRUPT: runs the title's graphics interrupt callback for the
    // processors in `cpuMask`, which is how D3D's flip handshake reaches it.
    void RaiseCommandProcessorInterrupt(uint32_t cpuMask);
    // Seconds since the GPU started, for the per-second tables and traces.
    double Seconds();
    // The ring's read and write indices, and what the read-pointer write-back holds.
    void RingPosition(uint32_t& read, uint32_t& written, uint32_t& writeBack);

    struct BatchStatus
    {
        bool inBatch;
        uint32_t available;
        uint32_t readIndex;
        uint32_t wptr;
        uint64_t elapsedMs;
    };
    BatchStatus CurrentBatchStatus();

    struct OpcodeStatus
    {
        uint32_t opcode;
        const char* name;
        uint32_t depth;
        uint64_t batchWork;
        uint64_t lastVertexHash;
        uint64_t lastPixelHash;
    };
    OpcodeStatus CurrentOpcodeStatus();

    const char* CurrentDrawStage();
    void SetCurrentDrawStage(const char* stage);

    // ---- arena.cpp
    // An EVENT_WRITE_SHD aimed at the arena's progress block: true when it was
    // one, applied or not.
    bool ArenaProgress(uint32_t address, uint32_t value);

    // ---- census.cpp (diagnostics only)
#if MW2_DIAGNOSTICS
    void CensusDraw(const RegisterFile& r, uint32_t primitive, uint32_t indexCount,
                    bool indexed, EdramMode mode);
    // At each swap packet the parse meets.
    void CensusSwap();
    // At each present the title makes.
    void CensusPresent();
    // MW2_DUMP_TEXTURES: every distinct texture shape bound, once.
    bool DumpingTextures();
    void DumpBoundTextures(const RegisterFile& r);
    void ReportCensus();
#else
    inline void CensusDraw(const RegisterFile&, uint32_t, uint32_t, bool, EdramMode) {}
    inline void CensusSwap() {}
    inline void CensusPresent() {}
    inline bool DumpingTextures() { return false; }
    inline void DumpBoundTextures(const RegisterFile&) {}
    inline void ReportCensus() {}
#endif

    // ---- d3d_hooks.cpp
    // Recordings D3D9 could not have walked to the end of.
    void ReportD3DHooks();
}
