#pragma once
#include "bindings.h"
#include <cstdint>
#include <cstddef>
#include <vector>

namespace gpu { struct TextureFetch; struct TextureData; }

// Guest textures as Vulkan images: `gpu::ReadTexture`'s linear, host-endian
// buffer staged into a VkImage, with a view and a sampler built from the same
// fetch constant, written into set 1 of the pipeline layout.
//
// The block formats go across untouched, so a readback returns exactly the
// bytes that went in -- which is what makes the round trip a test.
//
// A title that rewrites a texture in place is noticed: the cache is keyed on
// the six dwords of the fetch constant, which do not change when only the bytes
// do, so a bound texture's memory is signed and re-staged if the signature
// moved -- every frame while it is changing, backing off to every sixteenth
// while it is not. The light grid a level rewrites every frame is the reason:
// handed the upload taken during the load, the world renders unlit.
//
// Every level the fetch constant allows is uploaded: the base from its own
// address and the chain from the mip address, each range signed with the other.
namespace vk::textures
{
    // Starts the pipeline's device if it is not already running. Safe to call
    // repeatedly.
    bool Initialise();
    void Shutdown();
    bool Ready();

    // Called by the renderer once per presented frame, between submissions: a
    // cached texture is signed at most once per frame however many draws bind
    // it. This is also where the cache lets go: of images idle for ten seconds
    // whose memory the title has rewritten, of the longest idle past the
    // memory budget -- half the device's own memory, or MW2_TEXTURE_BUDGET_MB
    // -- and of descriptor sets nothing has bound for as long.
    void NewFrame();
    // The count NewFrame keeps, which the texture log lines are numbered by.
    uint64_t FrameNumber();

    // Guest memory under these bytes has just changed (a physical range): any
    // texture read from it is signed again at its next bind, even later in
    // the same frame.
    void MemoryWritten(uint32_t physicalAddress, uint32_t size);

    constexpr uint32_t kSlots = vk::bindings::kTextureSlots;
    constexpr uint64_t kNone = 0;     // "nothing uploaded", never a valid id

    // The texture a fetch constant describes, uploaded the first time it is
    // seen and handed back, re-staged if its memory changed, after that.
    // The id is the image and the sampler the constant asks for: one image
    // serves every sampler state the texture is bound with.
    uint64_t Upload(const gpu::TextureFetch& fetch, const char** error);

    // A render target the title resolved out to memory and samples back. The
    // image belongs to the caller, so the entry only borrows its view; `key`
    // names the copy, so an id survives across frames and the descriptor sets
    // built from it stay valid.
    uint64_t Adopt(uint64_t key, void* view, const gpu::TextureFetch& fetch);

    // The caller is destroying a view it lent to Adopt. Every cached set is
    // dropped, because the replacement view can come back with the very same
    // handle -- Adopt's comparison then sees no change, and the set it hands
    // out still holds the freed image's address.
    void ForgetSets();

    // Already in the guest's block layout, with a default sampler and no caching:
    // the path tools/upload_texture.cpp tests, where there is no fetch constant.
    uint64_t UploadData(const gpu::TextureData& data, uint32_t xenosFormat,
                        const char** error);

    // One combined image sampler per fetch slot, with a 1x1 image standing in for
    // every unbound slot, because the layout declares all thirty-two whatever the
    // shader samples. `kinds`, when given, says what the shaders declare each
    // slot as (see shader::Translation::textureKinds); a texture of another kind
    // is bound as a fallback of the declared one instead.
    void* DescriptorSet(const uint64_t ids[kSlots], const uint8_t* kinds = nullptr);

    bool Readback(uint64_t id, std::vector<uint8_t>& bytes, const char** error);

    // A draw into the world pass bound this texture. Returns the id to bind:
    // normally the one passed in; under MW2_MARK_EMPTY=1 a flat magenta texture
    // when this one was read from a block with nothing in it.
    uint64_t NoteDrawnInWorld(uint64_t id);

    // A submission is made of segments: the draws between two points where
    // the command processor tells the title that the work before has finished
    // (vk::renderer::BeforeCompletion). The console's GPU reads a texture when
    // a draw executes, which is after this runtime's parse reached the draw
    // and before that report -- once told, the title may free the memory and
    // put something else there. So the textures a guest thread may still be
    // writing -- the ones it has rewritten before, and the ones that came up
    // empty -- are read again at the end of each segment that binds them, and
    // re-staged if they changed.
    //
    // Uploads made while a segment is recorded, and its re-reads, go into a
    // command buffer of the segment's own, submitted just ahead of its draws
    // and after the segments before: those draws see the texture as it was at
    // their own segment's end, and no upload waits on a fence.
    //
    // BeginUploads opens slot `slot` once the renderer knows the GPU is done
    // with what that slot last held. EndSegment ends a segment and
    // EndSubmission the last one; each returns the VkCommandBuffer to submit
    // ahead of the segment's draws, or null when nothing was uploaded. Outside
    // a submission, an upload is submitted and waited for on its own.
    constexpr uint32_t kUploadSlots = 4;
    void BeginUploads(uint32_t slot);
    void* EndSegment();
    void* EndSubmission();

    // For the flash hunt's draw list: how many times the image behind `id` has
    // been staged (0 for one this cache does not own, a resolve's), and the
    // ids re-staged at a segment's end since the last call -- textures whose
    // new contents every draw of that segment then sampled, including the
    // ones recorded before the change.
    uint32_t Version(uint64_t id);

    // Whether an image read from [physical, physical + size) has been bound
    // in the segment being recorded.
    bool BoundInThisSegment(uint32_t physical, uint32_t size);
    void TakeLateRestages(std::vector<uint64_t>& ids);

    // What the cache holds and what it is allowed to hold. A phone tells its
    // applications when memory is short (onTrimMemory), and the answer to
    // that is a smaller budget: the next frame evicts down to it, and what
    // was evicted is uploaded again the next time it is drawn. Raising the
    // budget again costs nothing.
    uint64_t LiveBytes();
    uint64_t Budget();
    void SetBudget(uint64_t bytes);

    void Report();
}
