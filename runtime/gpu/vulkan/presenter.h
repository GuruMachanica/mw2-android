#pragma once
#include <cstdint>

// The window and Vulkan device. It runs on its own thread -- the guest owns the
// main thread and never gives it back -- and degrades to headless if there is
// no device.
namespace vk
{
    bool Start();
    // Stops the window thread but keeps the device, so what the renderer built on
    // it can be torn down first.
    void StopPresenting();
    void Stop();

    // A frame the renderer has finished: a VkImage in TRANSFER_SRC layout, and
    // `serial` its number. The window shows every one, once, in order, a
    // blank each; the renderer draws into the image again only after
    // WaitUntilTaken(serial) has returned.
    void ShowImage(void* image, uint32_t width, uint32_t height, uint64_t serial);
    // Returns once the window has copied frame `serial` out (or let it go),
    // at once without a window.
    void WaitUntilTaken(uint64_t serial);
    // The guest's blank period in nanoseconds, following the display the
    // window is on; 0 when there is none to follow.
    uint64_t GuestBlankPeriod();

    bool Running();
    uint64_t PresentedFrames();
}
