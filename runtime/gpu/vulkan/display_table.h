#pragma once
#include <cstdint>

// The display's colour lookup table.
//
// The console's scanout hardware runs the front buffer through a 256-entry
// table of ten bits per channel before it reaches the screen, and the title
// fills that table -- MW2 writes all 256 entries three times in a run, and the
// curve is not the identity. Nothing between the title's last draw and a
// window here applied it, so every frame was shown with the tone curve the
// title intended left out.
//
// Vulkan has no fixed-function equivalent and `vkCmdBlitImage` cannot do a
// lookup, so this is a compute pass over the presented image.
namespace vk::display
{
    // The presented image has to be created with STORAGE usage for this.
    bool Initialise();
    void Shutdown();

    // True once the title has filled the table. Before that there is nothing to
    // apply and the frame goes out as it is.
    bool Ready();

    // Applies the table to `image` in place, in the frame's command buffer
    // (through the recorder, recorder.h). `layout` is the layout the image is
    // in on entry and is restored on exit.
    void Apply(void* image, uint32_t width, uint32_t height, int layout);

    void Report();
}
