#pragma once
// The renderer's state and the functions its parts share. Internal to the
// renderer_*.cpp files; everyone else goes through renderer.h.
//
//   renderer.cpp              the state, start-up and shutdown
//   renderer_draw.cpp         a draw: targets, state, bindings, the command
//   renderer_targets.cpp      EDRAM surfaces as images, passes, framebuffers, clears
//   renderer_resolve.cpp      resolves: to a texture, or the frame to the window
//   renderer_frame.cpp        command buffers, submission, frame slots, queries
//   renderer_arena.cpp        what a draw reads copied into the frame arena
//   renderer_pipelines.cpp    shaders, pipelines and the shader cache
//   renderer_libraries.cpp    shaders compiled at load as pipeline libraries, and linking
//   renderer_diagnostics.cpp  the switches that look at a frame, and the report
#include "renderer.h"
#include "../../diagnostics.h"
#include "bindings.h"
#include "texture_cache.h"
#include "pipeline.h"
#include "recorder.h"
#include "shader_translator.h"
#include "util.h"
#include "../registers.h"
#include "../texture.h"
#include "../../env.h"
#include "../../stutters.h"
#include "../../words_hash.h"

#include <chrono>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include <vulkan/vulkan.h>

namespace vk::renderer::detail
{
    // Per frame, reset at the resolve. A frame that runs out goes black from
    // the point it ran out, which reads as a shading bug.
    constexpr uint32_t kArenaWanted = 512u << 20;
    constexpr uint32_t kArenaLeast  = 32u << 20;

    // Split, because the total only says a frame ran out of room, not on what.
    enum ArenaKind { kArenaConstants, kArenaVertices, kArenaIndices, kArenaKinds };
    constexpr const char* kArenaNames[kArenaKinds] = { "constants", "vertex data", "indices" };
    // Four rather than two: the window shows every frame, a blank each, and
    // each image is kept intact until the window has copied it out. Four let
    // the renderer run up to three frames ahead of the screen before it waits.
    constexpr uint32_t kPresentImages = 4;
    // How many submissions the GPU may be holding while the CPU records the
    // next; a frame is about six. Each needs its own share of the arena, and a
    // heavy MP submission copies 87 MB into it: at six slots the shares
    // overflowed and draws were dropped, at three they never do.
    constexpr uint32_t kFrameSlots = 3;
    // Command buffers made for a slot at the start, and again each time a
    // submission needs more segments than it has: a frame has about twenty.
    constexpr uint32_t kSegmentBuffers = 32;
    static_assert(kFrameSlots <= vk::textures::kUploadSlots, "a slot's uploads need a slot too");
    // The title's own occlusion queries. One of the title's brackets takes as
    // many of these as it covers render passes, because a Vulkan query has to
    // begin and end inside one of those, and their counts are summed. The pool
    // is a ring, so brackets whose counts are not in yet keep theirs.
    constexpr uint32_t kMaxGuestQueries = 64;
    constexpr uint32_t kGuestQueryRing = 4 * kMaxGuestQueries;

    // A tile of EDRAM is one surface however the title declares it, so the key
    // holds the host format: 8_8_8_8 and its gamma twin are one image, which is
    // what a title relies on when it resolves a pass it drew under the other name.
    struct TargetKey
    {
        uint32_t baseTile = 0, pitch = 0, format = 0, samples = 0;
        bool depth = false;
        auto operator<=>(const TargetKey&) const = default;
    };

    // Everything about a pipeline: the two shaders, the formats of the targets
    // they draw into (dynamic rendering: there is no render pass object), and
    // the fixed-function register bits they are drawn with.
    struct PipelineKey
    {
        uint64_t vertexShader = 0, pixelShader = 0;
        uint32_t colourFormat = 0, depthFormat = 0;
        uint32_t topology = 0;
        uint32_t blendControl = 0;
        uint32_t colourMask = 0;
        uint32_t samples = 1;   // the render pass's, so the rasteriser matches it
        uint32_t depthControl = 0; // for legacy mode where depth/stencil is static
        uint32_t modeCntl = 0;     // for legacy mode where cull/frontface is static
        auto operator<=>(const PipelineKey&) const = default;
    };

    struct Target
    {
        VkImage image = VK_NULL_HANDLE;
        VkDeviceMemory memory = VK_NULL_HANDLE;
        VkImageView view = VK_NULL_HANDLE;
        VkFormat format = VK_FORMAT_UNDEFINED;
        uint32_t guestFormat = 0;   // for the report
        uint32_t width = 0, height = 0;
        bool depth = false;
        // The console's 2x and 4x surfaces are drawn with that many samples
        // here. A multisampled image can be neither blitted, copied nor
        // sampled, so every read of one -- a resolve, the present, a dump --
        // goes through a single-sampled twin the same size, made on first use
        // and filled by the read's own resolve.
        VkSampleCountFlagBits samples = VK_SAMPLE_COUNT_1_BIT;
        VkImage singleImage = VK_NULL_HANDLE;
        VkDeviceMemory singleMemory = VK_NULL_HANDLE;
        VkImageView singleView = VK_NULL_HANDLE;
        bool singleReady = false;   // holds a resolve of some rectangle
        // A surface nothing presents looks exactly like a surface nothing draws into.
        uint64_t draws = 0, presented = 0;
        // Colour draws this frame; a multisampled target with any is the world pass.
        uint64_t colourDrawsThisFrame = 0;
        // How many presented frames drew colour into this target at all. A
        // surface the title fills every frame and one it fills every third
        // are the same total and a different picture.
        uint64_t framesWithColour = 0;
        // The draw count at which an EDRAM clear last emptied this, so the
        // second rectangle of a clear pair does not clear it again.
        uint64_t clearedAtDraw = UINT64_MAX;
        // The frame that clear happened in, for the pass trace.
        uint64_t depthClearedIn = UINT64_MAX;
    };

    struct Shader
    {
        shader::Translation translation;
        VkShaderModule module = VK_NULL_HANDLE;
        // The shader compiled on its own, as a pipeline library for its stage
        // (renderer_libraries.cpp); null on a device without them.
        VkPipeline library = VK_NULL_HANDLE;
        shader::Type type = shader::Type::Vertex;
        std::vector<uint32_t> code;     // kept so the shader cache can be written
    };

    // What a pipeline's output stage is built from: the blend, the write mask,
    // and the targets' formats and sample count.
    struct OutputKey
    {
        uint32_t blendControl = 0, colourMask = 0;
        uint32_t colourFormat = 0, depthFormat = 0, samples = 1;
        auto operator<=>(const OutputKey&) const = default;
    };

    struct RenderPassKey
    {
        VkFormat colourFormat = VK_FORMAT_UNDEFINED;
        VkFormat depthFormat = VK_FORMAT_UNDEFINED;
        VkSampleCountFlagBits samples = VK_SAMPLE_COUNT_1_BIT;
        auto operator<=>(const RenderPassKey&) const = default;
    };

    struct FramebufferKey
    {
        VkRenderPass pass = VK_NULL_HANDLE;
        VkImageView colourView = VK_NULL_HANDLE;
        VkImageView depthView = VK_NULL_HANDLE;
        uint32_t width = 0;
        uint32_t height = 0;
        auto operator<=>(const FramebufferKey&) const = default;
    };

    // A pipeline a previous run needed, with the formats its render pass was
    // built from, so it can be rebuilt before the title asks for it.
    struct Recorded
    {
        uint64_t vertexShader = 0, pixelShader = 0;
        uint32_t colourFormat = 0, depthFormat = 0;
        uint32_t topology = 0, depthControl = 0, blendControl = 0;
        uint32_t colourMask = 0, modeCntl = 0;
        uint32_t samples = 1;
    };

    // A resolve that is not the frame is the title handing itself a texture:
    // the pixels never go through guest memory here, the destination address
    // names one of these images and a fetch of that address binds it.
    struct Resolved
    {
        VkImage image = VK_NULL_HANDLE;
        VkDeviceMemory memory = VK_NULL_HANDLE;
        VkImageView view = VK_NULL_HANDLE;
        // The same image seen as sRGB, for a fetch constant that asks the
        // sampler to linearise. A title that keeps a surface gamma-encoded
        // -- MW2 draws the world into 8_8_8_8_GAMMA -- reads it back through
        // a fetch whose component signs say `gamma`, and the hardware undoes
        // the encode on the way into the shader. Without this the post chain
        // encodes once per hop and the quarter-resolution buffers come out
        // gamma-encoded twice, which is a white band along the bottom of the
        // screen wherever the near depth of field blends them in.
        VkImageView gammaView = VK_NULL_HANDLE;
        VkFormat format = VK_FORMAT_UNDEFINED;
        uint32_t width = 0, height = 0;
        // A depth resolve is sampled through a depth-only view; the title reads
        // the scene's depth as an ordinary texture.
        bool depth = false;
        // The surface the last colour resolve copied out of.
        TargetKey from{};
        // The frame the last resolve landed in this image. The first resolve
        // of a frame may discard what was there; a later one -- the second
        // shadow cascade -- must keep it.
        uint64_t writtenFrame = UINT64_MAX;
    };

    // One image per guest address was a race as soon as the frames were let
    // to overlap: the composite of frame N samples the image while frame
    // N+1's resolve is already blitting into it, which showed as blue
    // speckle along every high-contrast edge. A copy per frame slot, chosen
    // once a frame -- not once a resolve, because the title resolves each
    // shadow cascade separately into the same destination and the second
    // must not land in a different image from the first.
    struct ResolveRing
    {
        Resolved copies[kFrameSlots];
        uint32_t newest = 0;        // the copy the last resolve wrote
        uint64_t frame = UINT64_MAX;  // and the frame it wrote it in
    };

    // The surface each resolve destination is the start of, as
    // RB_COPY_DEST_PITCH describes it. A resolve whose address falls inside
    // one of these is writing part of that surface, not a surface of its own.
    struct ResolveSurface { uint32_t bytes = 0, rowBytes = 0; uint64_t frame = 0; };

    struct State
    {
        VkDevice device = VK_NULL_HANDLE;
        VkPhysicalDevice physical = VK_NULL_HANDLE;
        VkQueue queue = VK_NULL_HANDLE;
        VkPhysicalDeviceMemoryProperties memory{};
        uint32_t uniformAlignment = 256;
        VkFormat depthFormat = VK_FORMAT_UNDEFINED;
        // Whether the console's multisampled surfaces are drawn multisampled
        // (MW2_NO_MSAA=1 turns it off), and the counts the device offers for
        // colour, depth and stencil alike.
        bool msaa = false;
        VkSampleCountFlags sampleCounts = VK_SAMPLE_COUNT_1_BIT;
        // MW2_SCALE: how many times wider and taller than the title's every
        // EDRAM surface and resolve copy is. The title is not told: a Target's
        // and a Resolved's sizes, and every rectangle worked out from the
        // registers, stay the title's, and are multiplied where they are
        // handed to Vulkan (Scaled).
        uint32_t scale = 1;

        // The console's command processor runs while the title builds the next
        // frame. A slot owns the command buffer it records into, the fence that
        // says when the GPU has finished with it, and its own window of the
        // arena -- so nothing a submitted slot is still reading gets
        // overwritten underneath it.
        struct Slot
        {
            VkCommandPool commands = VK_NULL_HANDLE;
            // One a segment of the submission (vk::textures::EndSegment),
            // made as submissions need more; the first is the frame's start.
            std::vector<VkCommandBuffer> buffers;
            VkFence fence = VK_NULL_HANDLE;
            uint32_t arenaBase = 0;
            bool inFlight = false;
            uint64_t serial = 0;   // which submission it holds
            // The recorder's queue just past that submission: until the
            // recorder gets there the fence has not been handed to the queue,
            // and still says what it said about the one before.
            uint64_t queuedAt = 0;
        };
        Slot slots[kFrameSlots];
        uint32_t slot = kFrameSlots - 1;   // BeginFrame moves on before it records
        // The current segment's command buffer. Commands go into it through
        // Record, never directly: the recorder thread owns it (recorder.h).
        VkCommandBuffer command = VK_NULL_HANDLE;
        // The submission so far, in the order the queue runs it: each ended
        // segment's uploads (when it had any) and then its draws.
        std::vector<VkCommandBuffer> ended;
        uint32_t segment = 0;          // the current one's index into its slot's buffers
        bool segmentDraws = false;     // a draw has been recorded into it
        uint64_t segments = 0, completions = 0;
        // Separate from the frame's, for work that cannot go inside one: the first
        // transition of a render target out of UNDEFINED, and the dumps.
        VkCommandPool setupCommands = VK_NULL_HANDLE;
        VkCommandBuffer setup = VK_NULL_HANDLE;
        VkFence setupFence = VK_NULL_HANDLE;

        // One host-visible buffer holding everything a draw reads that is not
        // a texture: constant snapshots, vertex data, index buffers.
        VkBuffer arena = VK_NULL_HANDLE;
        VkDeviceMemory arenaMemory = VK_NULL_HANDLE;
        uint8_t* arenaMapped = nullptr;
        uint32_t arenaBytes = 0;       // what the device actually gave us
        // Where the shadow of guest physical memory starts in the same buffer,
        // just past the arena; 0 when there is none.
        uint32_t shadowBase = 0;
        uint64_t completedSerial = 0;   // see NoteCompleted
        uint64_t streamWriteSegments = 0;   // see BeforeStreamWrite
        struct DrawRecord* drawRecord = nullptr;   // the draw being recorded, in a flash hunt
        // The frame rate in play: world frames from the start of play to the
        // last, which leaves the loading screen and the menus out of it. Play
        // starts with the first run of kPlayStreak world frames in a row: a
        // lone world frame on the loading screen started it four seconds of
        // team menu early, and read 54 a second for a game drawing 59.
        static constexpr uint64_t kPlayStreak = 30;
        uint64_t worldFrames = 0, worldStreak = 0;
        std::chrono::steady_clock::time_point firstWorldAt, lastWorldAt, streakFrom;
        uint32_t arenaSlotBytes = 0;   // one slot's share of it
        uint32_t arenaBase = 0;        // where the current slot's share starts
        uint32_t arenaUsed = 0;        // and how much of that share is spent

        // What is already in the arena this frame, so a draw that reads the same
        // thing as the last one does not copy it again. Dropped at the reset.
        struct Cached
        {
            uint64_t stamp = 0, base = 0; uint32_t at = 0; bool valid = false;
            // For a constant window: how many of the 256 the copy actually
            // holds, so a draw needing more than the cached copy covers is not
            // handed it.
            uint32_t count = 0;
        };
        Cached constantWindows[2];        // one per stage
        Cached fetchBlock, booleans, loops;
        uint32_t fetchSubs[3]{};          // what fetchBlock was assembled for

        // The title's own occlusion queries. A bracket can outlive a command
        // buffer, so its queries are reset when the title opens it.
        VkQueryPool guestQueries = VK_NULL_HANDLE;
        uint32_t guestQueryFirst = 0;   // the bracket in progress's first query
        uint32_t guestQueryCount = 0;   // and how many of them it has used
        uint32_t guestQueryNext = 0;    // where the next bracket starts in the ring
        // Brackets submitted whose counts the GPU has not produced yet.
        struct PendingQuery
        {
            uint32_t first = 0, count = 0, tag = 0;
            uint32_t slot = 0;
            uint64_t serial = 0;
            bool read = false;          // counted already, waiting to be handed over
            uint64_t samples = 0;
        };
        std::vector<PendingQuery> pendingQueries;
        uint64_t submissionSerial = 0;
        bool guestCounting = false;     // between the title's two events
        bool guestQueryOpen = false;    // one is open in the current render pass

        VkDescriptorPool descriptors = VK_NULL_HANDLE;
        VkDescriptorSet constantSet = VK_NULL_HANDLE;   // set 0, five dynamic blocks
        VkDescriptorSet memorySet = VK_NULL_HANDLE;     // set 2, the arena as dwords

        std::map<TargetKey, Target> targets;
        std::unordered_map<PipelineKey, VkPipeline, WordsHash> pipelines;
        std::map<uint64_t, Shader> shaders;
        // The state-only libraries: the input assembly for each topology, and
        // the output stage for each OutputKey.
        std::map<uint32_t, VkPipeline> inputLibraries;
        std::map<OutputKey, VkPipeline> outputLibraries;
        // Fast-linked pipelines an optimised one has replaced; the GPU may
        // still be drawing with them, so they go at shutdown.
        std::vector<VkPipeline> replacedPipelines;
        uint64_t shadersBuiltAtDraw = 0, pipelinesLinked = 0, pipelinesOptimised = 0;
        std::vector<Recorded> recorded;   // for the shader cache

        // What the command buffer was last told, so a draw that asks for the same
        // thing does not say it again. All of this survives a render pass boundary -- only
        // an incompatible pipeline layout would invalidate the sets, and there
        // is one layout -- so it is reset per command buffer, in BeginFrame.
        struct Bound
        {
            VkPipeline pipeline = VK_NULL_HANDLE;
            VkDescriptorSet textureSet = VK_NULL_HANDLE;
            uint32_t dynamic[bindings::kConstantBlocks]{};
            bool dynamicValid = false;
            VkViewport viewport{};
            VkRect2D scissor{};
            bool viewportValid = false, scissorValid = false;
            float depthBias[2]{};   // constant, slope
            bool depthBiasValid = false;
            uint32_t stencil[2]{};  // RB_STENCILREFMASK for front and back faces
            bool stencilValid = false;
            uint32_t modeCntl = 0;       // PA_SU_SC_MODE_CNTL: culling and winding
            bool facesValid = false;
            uint32_t depthControl = 0;   // RB_DEPTHCONTROL: the depth and stencil tests
            bool depthTestsValid = false;
            uint32_t push[4]{};
            bool pushValid = false;
            float ndc[4]{};          // window -> clip, for a pre-transformed vertex
            bool ndcValid = false;
            uint32_t scaled = 0;     // the slots bound to a resolve's copy
            bool scaledValid = false;
            VkBuffer indexBuffer = VK_NULL_HANDLE;
            uint32_t indexOffset = 0;
            int indexType = -1;
        };
        Bound bound;

        bool recording = false;
        // The rendering instance open in the command buffer, by its two
        // attachments; null when none is.
        VkImageView currentColour = VK_NULL_HANDLE, currentDepth = VK_NULL_HANDLE;
        // The open pass's size and sample count. Values, not the target: a
        // target that grows is replaced, and a pointer to it would dangle.
        uint32_t currentWidth = 0, currentHeight = 0, currentSamples = 1;

        // So a frame is not overwritten while it is on screen.
        VkImage present[kPresentImages]{};
        // The finished frame copied out for the dumps, the flicker finder and
        // the flash recorder.
        VkBuffer readBack = VK_NULL_HANDLE;
        VkDeviceMemory readBackMemory = VK_NULL_HANDLE;
        const uint8_t* readBackMapped = nullptr;
        VkDeviceMemory presentMemory[kPresentImages]{};
        uint32_t presentIndex = 0;
        // The frame each image last held, which the window must have taken
        // before the image is drawn over.
        uint64_t presentSerial[kPresentImages]{};
        // The present images' size: the title's frame times the scale.
        uint32_t presentWidth = 1280, presentHeight = 720;

        std::unordered_map<uint32_t, ResolveRing> resolvedTo;
        std::map<uint32_t, ResolveSurface> resolveSurfaces;
        std::map<RenderPassKey, VkRenderPass> legacyRenderPasses;
        std::map<FramebufferKey, VkFramebuffer> legacyFramebuffers;

        uint64_t frames = 0, draws = 0, drawsRecorded = 0;

        // ---- counted for the report only; kept through Shutdown ----
        uint64_t resolves = 0, submits = 0;
        // What a first run pays that a later one does not.
        uint64_t translateMicroseconds = 0, compileMicroseconds = 0;
        uint64_t prewarmMicroseconds = 0;
        uint32_t prewarmed = 0, prewarmWanted = 0;
        uint64_t arenaOverflows = 0;
        uint64_t arenaWritten[kArenaKinds]{}, arenaReused[kArenaKinds]{};
        uint32_t arenaPeak = 0;
        uint64_t vertsTraced = 0, vertsMatched = 0;
        uint64_t passFrames = 0;
        std::vector<std::string> targetSummary;   // the report outlives the images
        uint64_t depthResolves = 0, resolveImagesMade = 0;
        // Where a frame's wall clock goes, in nanoseconds. MW2_TIME_RENDER=1.
        uint64_t drawNanoseconds = 0, submitNanoseconds = 0, fenceNanoseconds = 0,
                 resolveNanoseconds = 0, textureNanoseconds = 0;
        // Draw broken down, because "in Draw" does not say which part of it.
        uint64_t constantsNanoseconds = 0, pipelineNanoseconds = 0,
                 recordNanoseconds = 0, setupNanoseconds = 0, indexNanoseconds = 0,
                 stateNanoseconds = 0;
        size_t pipelineCount = 0, shaderCount = 0;
        // By reason. Every reason is a string literal, so its address is its key.
        std::unordered_map<const char*, uint64_t> skipped;
    };
    extern State g;

    // ---- the flash hunt's draw list (renderer_diagnostics.cpp) ----
    // Every draw of the last frames a flash hunt keeps, so a mark says which
    // draw differed in the frame that flashed: missing, another texture or
    // another version of one, other constants, other vertex data.
    struct DrawRecord
    {
        uint64_t vertexShader = 0, pixelShader = 0;
        uint32_t colourTile = 0, depthTile = 0, pitch = 0, samples = 0;
        uint32_t primitive = 0, count = 0;
        // Which mesh: its first vertex buffer and its index buffer, physical.
        uint32_t vertexAddress = 0, indexAddress = 0;
        uint32_t depthControl = 0, blend = 0, colourMask = 0, modeCntl = 0, colourControl = 0;
        // Fingerprints: the float windows and fetch constants as the register
        // file holds them, a sample of the vertex windows and indices read.
        uint64_t vertexConstants = 0, pixelConstants = 0, fetchConstants = 0;
        uint64_t vertexData = 0, indices = 0;
        uint32_t textureFirst = 0, textureCount = 0;   // into the frame's textures
        const char* skipped = nullptr;                 // why it was not drawn
    };
    struct DrawTexture
    {
        uint32_t slot = 0, address = 0, format = 0, width = 0, height = 0;
        uint64_t id = 0;
        uint32_t version = 0;      // times its image was staged; 0 for a resolve's
        bool resolved = false;     // a resolve's copy rather than guest memory
    };
    // Null when no flash hunt is keeping frames.
    DrawRecord* BeginDrawRecord(const gpu::RegisterFile& r, uint64_t vertexShader,
                                uint64_t pixelShader, uint32_t primitive, uint32_t count,
                                uint32_t indexAddress);
    void NoteVertexBuffer(uint32_t physical);
    void NoteDrawTexture(uint32_t slot, const gpu::TextureFetch& fetch, uint64_t id, bool resolved);
    void NoteVertexWindow(const uint8_t* bytes, size_t size);
    void NoteConstantWindows(const gpu::RegisterFile& r, uint32_t vertexNeeded, uint32_t pixelNeeded);
    void NoteIndices(const uint8_t* bytes, size_t size);
    // The frame whose picture carries this renderer frame number is done.
    void EndFrameDraws(uint64_t frame, bool worldDrawn);

    inline void Skip(const char* why)
    {
        g.skipped[why]++;
        if (g.drawRecord && !g.drawRecord->skipped) g.drawRecord->skipped = why;
    }

    // Where draws read and write an attachment: colour at the output stage,
    // depth and stencil at both tests -- the late one for a shader that can
    // discard. A barrier into or out of an attachment layout names all of it.
    constexpr VkPipelineStageFlags kColourStages = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    constexpr VkAccessFlags kColourAccess =
        VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    constexpr VkPipelineStageFlags kDepthStages =
        VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT | VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT;
    constexpr VkAccessFlags kDepthAccess =
        VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
    // A resolve is sampled by vertex programs as well as pixel ones.
    constexpr VkPipelineStageFlags kShaderStages =
        VK_PIPELINE_STAGE_VERTEX_SHADER_BIT | VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT;

    // The title's pixels as the images' (State::scale).
    inline VkOffset2D Scaled(VkOffset2D at)
    {
        return { at.x * int32_t(g.scale), at.y * int32_t(g.scale) };
    }
    inline VkExtent2D Scaled(VkExtent2D size)
    {
        return { size.width * g.scale, size.height * g.scale };
    }
    inline VkOffset3D Scaled(int32_t x, int32_t y, int32_t z)
    {
        return { x * int32_t(g.scale), y * int32_t(g.scale), z };
    }

    inline uint32_t FindMemory(uint32_t allowed, VkMemoryPropertyFlags want)
    {
        return vk::util::FindMemory(g.memory, allowed, want);
    }
    using vk::util::Barrier;

    // Device commands that come from extensions, looked up once when the
    // renderer starts and only read after that -- the recorder thread calls them.
    struct Dispatch
    {
        PFN_vkCmdBeginRenderingKHR beginRendering = nullptr;
        PFN_vkCmdEndRenderingKHR endRendering = nullptr;
        PFN_vkCmdSetCullModeEXT setCullMode = nullptr;
        PFN_vkCmdSetFrontFaceEXT setFrontFace = nullptr;
        PFN_vkCmdSetDepthTestEnableEXT setDepthTestEnable = nullptr;
        PFN_vkCmdSetDepthWriteEnableEXT setDepthWriteEnable = nullptr;
        PFN_vkCmdSetDepthCompareOpEXT setDepthCompareOp = nullptr;
        PFN_vkCmdSetStencilTestEnableEXT setStencilTestEnable = nullptr;
        PFN_vkCmdSetStencilOpEXT setStencilOp = nullptr;
    };
    inline Dispatch dispatch;

    // A command for the frame's command buffer, made by the recorder thread
    // after the ones before it (recorder.h). `call` takes the command buffer
    // and copies everything else it uses: no pointer to a local, and no `g.`,
    // which is the consumer's and will have moved on by the time it runs.
    template <class Call> inline void Record(Call&& call)
    {
        vk::record::Command(std::forward<Call>(call));
    }

    inline void RecordBarrier(VkImage image, VkImageAspectFlags aspect, VkImageLayout from,
                              VkImageLayout to, VkAccessFlags sourceAccess,
                              VkAccessFlags destinationAccess, VkPipelineStageFlags sourceStage,
                              VkPipelineStageFlags destinationStage)
    {
        Record([=](VkCommandBuffer command) {
            Barrier(command, image, aspect, from, to, sourceAccess, destinationAccess,
                    sourceStage, destinationStage);
        });
    }

    inline bool Timing()
    {
        if constexpr (!diag::kOn) return false;
        static const bool on = diag::Flag("MW2_TIME_RENDER");
        return on;
    }

    // Accumulates into one of the counters above for as long as it is alive.
    struct Stopwatch
    {
        uint64_t* into;
        std::chrono::steady_clock::time_point began;
        explicit Stopwatch(uint64_t& target)
            : into(Timing() ? &target : nullptr)
        {
            if (into) began = std::chrono::steady_clock::now();
        }
        ~Stopwatch()
        {
            if (!into) return;
            // Nanoseconds: a phase of one draw is a few hundred of them.
            *into += uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(
                                  std::chrono::steady_clock::now() - began).count());
        }
    };

    // ---- renderer_targets.cpp ----
    bool MakeImage(Target& target, VkImageUsageFlags usage, VkImageAspectFlags aspect);
    VkFormat ColourFormatFor(uint32_t format);
    TargetKey DepthKey(uint32_t baseTile, uint32_t format, uint32_t samples);
    VkSampleCountFlagBits HostSamples(uint32_t guestSamples);
    Target* FindTarget(const TargetKey& key);
    Target* EnsureTarget(const TargetKey& key, uint32_t width, uint32_t height,
                         uint32_t guestFormat);
    void DestroyTarget(Target& target);
    // A new target leaves UNDEFINED and is cleared before a pass loads it.
    void ClearNewTarget(Target& target);
    // Opens a rendering instance over the two targets (closing the one open,
    // if it is another), with the barriers a render pass's dependencies were.
    void BeginRendering(const Target& colour, const Target& depth, uint32_t width,
                        uint32_t height);
    // What a copy out of a target reads, in TRANSFER_SRC; a multisampled
    // target is resolved into its single-sampled twin first. Outside any pass.
    VkImage BeginReadingColour(Target& target, VkOffset2D at, uint32_t width, uint32_t height);
    void EndReadingColour(Target& target);
    VkImage BeginReadingDepth(Target& target, VkOffset2D at, uint32_t width, uint32_t height);
    void EndReadingDepth(Target& target);
    void ClearAliasedDepth(uint32_t fromTile);
    void ClearAfterResolve(const gpu::RegisterFile& r, const gpu::CopyControl& control);

    // Traditional render pass and framebuffer fallback for Vulkan 1.1 / Mali
    VkRenderPass GetRenderPass(VkFormat colourFormat, VkFormat depthFormat, VkSampleCountFlagBits samples);
    VkFramebuffer GetFramebuffer(VkRenderPass pass, VkImageView colourView, VkImageView depthView,
                                 uint32_t width, uint32_t height);
    void InvalidateFramebuffers();
    void ClearRenderPassCache();

    // ---- renderer_frame.cpp ----
    bool BeginFrame();
    void OpenGuestQuery();
    void EndPass();
    // See renderer_frame.cpp: the start of each segment's command buffer, and
    // the end of a segment at a point the command processor reports work done.
    void BeginSegmentBuffer();
    void CloseSegment();
    bool Submit(bool wait = false);
    // The last submission the GPU has finished, as of the last time it was
    // asked (NoteCompleted, at the start of every submission's recording).
    uint64_t CompletedSerial();
    void NoteCompleted();
    // Destroying an image the GPU may still use.
    void RetireBeforeDestroy();
    // Until the GPU has finished the submission a slot holds, if it holds one.
    bool WaitForSlot(State::Slot& slot, const char* what);
    void FinishFrame(VkImage present);

    // ---- renderer_arena.cpp ----
    // Every one of the five uniform blocks is a straight copy of a window of the
    // register file: the register file *is* the constant buffer.
    struct ConstantOffsets
    {
        uint32_t vertexFloats, fetch, booleans, loops, pixelFloats;
        bool ok;
    };
    uint32_t Allocate(uint32_t bytes, ArenaKind kind);
    ConstantOffsets WriteConstants(const gpu::RegisterFile& r,
                                   const shader::Translation& program,
                                   const shader::Translation& pixelProgram,
                                   uint32_t lowestVertex, uint32_t highestVertex,
                                   uint32_t rectangles);
    uint32_t WriteIndices(uint32_t address, uint32_t count, bool wide,
                          uint32_t& lowest, uint32_t& highest);

    // ---- renderer_pipelines.cpp ----
    const Shader* ShaderFor(shader::Type type, uint64_t hash, const uint32_t* code, size_t words);
    VkPrimitiveTopology TopologyFor(uint32_t primitive);
    // Every piece of a pipeline's state, filled in for one key. A whole
    // pipeline takes all of it; each library takes the part that is its own.
    // Not copyable: its members point at each other.
    struct PipelineState
    {
        VkPipelineVertexInputStateCreateInfo input{ VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO };
        VkPipelineInputAssemblyStateCreateInfo assembly{ VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO };
        VkPipelineViewportStateCreateInfo viewport{ VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO };
        VkPipelineRasterizationStateCreateInfo raster{ VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO };
        VkPipelineMultisampleStateCreateInfo multisample{ VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO };
        VkPipelineDepthStencilStateCreateInfo depth{ VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO };
        VkPipelineColorBlendAttachmentState attachment{};
        VkPipelineColorBlendStateCreateInfo blending{ VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO };
        VkPipelineDynamicStateCreateInfo dynamic{ VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO };
        VkFormat colourFormat = VK_FORMAT_UNDEFINED;
        VkPipelineRenderingCreateInfoKHR rendering{ VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO_KHR };
        explicit PipelineState(const PipelineKey& key);
        PipelineState(const PipelineState&) = delete;
        PipelineState& operator=(const PipelineState&) = delete;
    };

    // ---- renderer_libraries.cpp ----
    // Translates a shader and compiles it: module and, where the device has
    // them, its stage's pipeline library. Any thread.
    Shader BuildShader(shader::Type type, const uint32_t* code, size_t words);
    // A shader compiled since the title loaded it, moved into `out`; waits for
    // one still compiling. False if it was never handed over.
    bool TakePrepared(uint64_t hash, Shader& out);
    // A pipeline linked from the two shaders' libraries and the state-only
    // ones, with an optimised link asked for in the background.
    VkPipeline LinkPipeline(const PipelineKey& key, const Shader& vertex, const Shader& pixel);
    // Puts the optimised links that have finished in place of the fast ones.
    void TakeOptimisedPipelines();
    // Every finished frame, so the compiling waits while the world is drawn.
    void NoteFrame(bool world);
    void StartPreparing();
    void StopPreparing();
    void ReportPreparing();

    // The depth and stencil tests RB_DEPTHCONTROL asks for, as dynamic state.
    struct DepthTests
    {
        VkBool32 depthTest = VK_FALSE, depthWrite = VK_FALSE, stencilTest = VK_FALSE;
        VkCompareOp depthCompare = VK_COMPARE_OP_ALWAYS;
        VkStencilOpState front{}, back{};
    };
    DepthTests DepthTestsFor(uint32_t depthControl);
    // The culling and winding PA_SU_SC_MODE_CNTL asks for.
    void FacesFor(uint32_t modeCntl, VkCullModeFlags& cull, VkFrontFace& front);
    // `made` says whether this call built it.
    VkPipeline EnsurePipeline(const PipelineKey& key, const Shader& vertex, const Shader& pixel,
                              bool* made = nullptr);
    const char* ShaderCachePath();
    void WriteShaderCache();
    void PrewarmFromCache();

    // ---- renderer_draw.cpp ----
    void ScissorOf(const gpu::RegisterFile& r, VkRect2D& scissor);

    // ---- renderer_diagnostics.cpp ----
    // MW2_ONLY_SHADER=<hex>[,<hex>] keeps only draws whose vertex or pixel shader
    // is named; MW2_SKIP_SHADER drops them. Naming the shader that paints a defect
    // is otherwise a bisection over four hundred of them.
    struct ShaderList
    {
        std::vector<uint64_t> hashes;
        explicit ShaderList(const char* variable);
        bool Names(uint64_t vertexHash, uint64_t pixelHash) const
        {
            for (uint64_t hash : hashes)
                if (hash == vertexHash || hash == pixelHash) return true;
            return false;
        }
    };
    const ShaderList& OnlyShaders();
    const ShaderList& SkipShaders();
    const ShaderList& TracedShaders();
    uint64_t TracePasses();
    bool DiagnoseHere();
    // What reads the finished frame back, decided before it is submitted,
    // because a frame read back has to be waited for.
    struct FrameReadBacks
    {
        bool dump = false, look = false, keep = false;
        bool Any() const { return dump || look || keep; }
    };
    FrameReadBacks PlanReadBacks();
    // Copies the finished frame out, inside its own command buffer.
    void RecordReadBack(VkImage present);
    // The dumps, the flicker finder and the flash recorder, once the frame
    // has been submitted and waited for.
    void ExamineFrame(bool worldDrawn, const FrameReadBacks& plan);
    void SummariseTargets();
}
