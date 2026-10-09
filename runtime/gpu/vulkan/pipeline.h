#pragma once
#include <cstdint>
#include <cstddef>
#include <mutex>

// The Vulkan device the runtime draws on, the pipeline layout every translated
// shader is built against, and the pipeline cache. The translator emits a fixed
// interface (bindings.h), so one layout serves every shader and no reflection
// is needed at bind time. Pipeline *state* is absent: it is decided by the
// register file and the render target, in the renderer.
namespace vk::pipeline
{
    // Brings up a headless device of its own when `device` is null, which is what
    // the offline tools use to put a translated shader in front of a real driver.
    // A borrowed device comes with its instance, which RenderDoc needs to name
    // the device a capture is of; it stays the lender's to destroy.
    bool Initialise(void* device = nullptr, void* physical = nullptr,
                    void* queue = nullptr, uint32_t queueFamily = 0,
                    void* instance = nullptr);
    void Shutdown();
    bool Ready();

    // Creates the device the runtime draws on, with the features and extensions
    // the renderer depends on, plus the caller's own (the swapchain, for the
    // window). Both the presenter's device and the headless one come from here.
    // Opaque handles: a VkPhysicalDevice in, a VkDevice and its VkQueue out.
    // `features` is a pNext chain of feature structures the caller's
    // extensions need, or null.
    bool CreateDevice(void* physical, uint32_t queueFamily,
                      const char* const* extraExtensions, uint32_t extraCount,
                      void** device, void** queue, void* features = nullptr);
    // Whether the physical device (a VkPhysicalDevice) offers a device extension.
    bool DeviceHasExtension(void* physical, const char* name);

    const char* DeviceName();
    // Opaque, so this header stays free of the Vulkan headers: a VkInstance,
    // VkDevice, VkPhysicalDevice and VkQueue, and the queue's family index.
    void*    Instance();
    void*    Device();
    void*    PhysicalDevice();
    void*    Queue();
    uint32_t QueueFamily();
    // Whether an occlusion query may be asked for an exact sample count rather
    // than only "some passed".
    bool     PreciseOcclusionQueries();
    // The most a sampler may filter anisotropically; 1 when the device cannot.
    float    MaxAnisotropy();
    // Whether a sampler may filter a cube's faces apart, as Direct3D 9 does.
    bool     NonSeamlessCubes();
    // Whether shaders can be compiled on their own as pipeline libraries and
    // linked quickly (VK_EXT_graphics_pipeline_library with fast linking).
    bool     PipelineLibraries();

    // The device has one queue, and the window thread and the GPU thread both
    // submit to it; Vulkan requires a queue to be externally synchronised.
    std::mutex& QueueMutex();

    // A VkResult that is not VK_SUCCESS. VK_ERROR_DEVICE_LOST also ends the run,
    // once, saying so: after the driver resets the GPU nothing submitted again
    // will finish, and a window left waiting on it stops answering its close
    // button. `where` names what was being waited for or submitted.
    bool Failed(int vkResult, const char* where);
    // What ending the run means is the runtime's business, not this file's --
    // the offline tools link it too. Without a handler a lost device is only
    // reported.
    void OnDeviceLost(void (*handler)(const char* why));

    // Opaque: VkDescriptorSetLayout, VkPipelineLayout, VkPipelineCache.
    void* SetLayout(uint32_t set);
    void* Layout();
    void* Cache();
    void  SaveCache();

    // Creates and destroys a shader module: a stronger check than spirv-val,
    // because it is the compiler that will actually run the shader.
    bool CreateModule(const uint32_t* spirv, size_t words, const char** error);
}
