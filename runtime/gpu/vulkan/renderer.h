#pragma once
#include <cstdint>
#include <cstddef>

namespace gpu { struct RegisterFile; }

// The draw path: register file in, Vulkan out.
//
// A PM4 draw packet says only "go": everything it draws with is whatever the
// register file holds at that moment, so this takes the register file plus the
// handful of things the packet carries, and issues the draw.
//
// It builds an image per EDRAM surface rather than an emulation of EDRAM
// (docs/rendering.md): a resolve copies a surface out to an image a later fetch
// binds, clears it if the resolve asks, and the title's own clear idiom is
// answered with clears of the images it names.
namespace vk::renderer
{
    bool Initialise();
    void Shutdown();
    bool Ready();

    // The name a shader goes by here: FNV-1a over its microcode dwords, as the
    // command stream loads them.
    inline uint64_t ShaderHash(const uint32_t* code, size_t words)
    {
        uint64_t hash = 1469598103934665603ull;
        for (size_t i = 0; i < words; i++) { hash ^= code[i]; hash *= 1099511628211ull; }
        return hash;
    }

    // The title made a shader object over this microcode while loading a
    // level (shader_preload.cpp): it is translated and compiled on a worker
    // thread now, so its first draw finds it ready. Any thread; returns at once.
    void PrepareShader(bool pixel, const uint32_t* code, size_t words);

    // What the draw packet carries that the register file does not.
    struct DrawCall
    {
        uint32_t primitive = 0;
        uint32_t indexCount = 0;
        bool indexed = false;
        bool index32 = false;
        uint32_t indexAddress = 0;         // guest virtual, already resolved

        // A hash of each, so a shader is translated and compiled once.
        const uint32_t* vertexCode = nullptr;
        size_t vertexWords = 0;
        uint64_t vertexHash = 0;
        const uint32_t* pixelCode = nullptr;
        size_t pixelWords = 0;
        uint64_t pixelHash = 0;
    };

    void Draw(const gpu::RegisterFile& registers, const DrawCall& call);

    // A draw issued in copy mode: copy the colour or depth target where the
    // copy registers say it goes.
    void Resolve(const gpu::RegisterFile& registers);

    // The swap packet: the frame is what was resolved to this front buffer.
    void Swap(uint32_t frontBuffer);

    // The title's own occlusion query, bracketed by two EVENT_WRITE_ZPD events.
    // Everything drawn between the two is counted. The count is ready when the
    // GPU has got there, as on the console, where the title polls the record
    // the GPU writes: EndOcclusionQuery answers at once only when there is
    // nothing to count; otherwise the bracket goes out with the frame's
    // submission, and CollectOcclusionQueries hands the count, with `tag`, to
    // `deliver` once the GPU has finished.
    void BeginOcclusionQuery();
    bool EndOcclusionQuery(uint32_t tag, uint64_t& samples);
    void CollectOcclusionQueries(void (*deliver)(uint32_t tag, uint64_t samples));

    // F7, or Y on the pad during a flash hunt: somebody saw a flash. Logged at
    // once; the frames kept before it are written at the next present
    // (MW2_FLASH_FRAMES, MW2_FLASH_DIR). `how` names the key.
    void FlashSeen(const char* how);

    // The last submission the GPU has finished, for what keeps copies the GPU
    // reads (gpu/memory_watch.h).
    uint64_t CompletedSubmission();

    // The command stream is about to write [physical, physical + size) -- the
    // image pool's copy, at its draw. A texture a draw of the submission being
    // recorded already samples must not be re-read after the write, because
    // the refresh before a submit stages for every draw in it: those draws
    // would sample memory written after them. So such a submission goes now.
    void BeforeStreamWrite(uint32_t physical, uint32_t size);

    // The command processor is about to tell the title that the work before
    // this point has finished -- an end-of-pipe event's write, D3D's fence
    // among them, or anything it writes once it has waited for the GPU to go
    // idle. Once told, the title may free what those draws read and put
    // something else there; the console's GPU had read it by then. So every
    // read of guest memory owed to the draws so far is made now
    // (vk::textures::EndSegment), and nothing read later reaches them.
    void BeforeCompletion();

    void Report();
}
