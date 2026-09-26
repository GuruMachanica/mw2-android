#pragma once
#include <cstddef>
#include <cstdint>

// MW2's streamed-image pool and the copies it has the GPU make (image_move.cpp).
namespace imagepool
{
    // For the command processor, at every draw while CopiesWaiting(): the draw's
    // c0.x (the memory-export stream constant) and vertex shader. When they name
    // a copy the pool asked for, the copy is made now -- the point in the stream
    // where the console's GPU makes it.
    bool CopiesWaiting();
    void AtDraw(uint32_t streamConstant, uint64_t vertexShader);
    // At each swap packet the parse meets; `parsedFrames` counts them. A copy
    // whose frame the parse has left behind without meeting its draw is made
    // anyway, so the pool's blocks never go uncopied.
    void AtFrameEnd(uint64_t parsedFrames);

    // Every copy in the last `frames` frames with either end on this physical
    // range, oldest first, for the log line of a texture that reached the
    // screen empty.
    void DescribeMovesAround(uint32_t physicalAddress, uint32_t size, uint64_t frames,
                             char* out, size_t bytes);

    void Report();
}
