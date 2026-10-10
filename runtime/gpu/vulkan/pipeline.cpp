#include "pipeline.h"
#include "bindings.h"
#include "../../env.h"
#include "../../log.h"
#include "../../report.h"

#ifndef MW2_HAVE_VULKAN
// No loader, so nothing here can be built. The callers all tolerate a device
// that never comes up, because that is what a machine with no GPU gives them.
bool vk::pipeline::Initialise(void*, void*, void*, uint32_t, void*) { return false; }
void vk::pipeline::Shutdown() {}
void vk::pipeline::SaveCache() {}
bool vk::pipeline::Ready() { return false; }
const char* vk::pipeline::DeviceName() { return "none"; }
void*    vk::pipeline::Instance() { return nullptr; }
void*    vk::pipeline::Device() { return nullptr; }
void*    vk::pipeline::PhysicalDevice() { return nullptr; }
void*    vk::pipeline::Queue() { return nullptr; }
uint32_t vk::pipeline::QueueFamily() { return 0; }
bool     vk::pipeline::PreciseOcclusionQueries() { return false; }
float    vk::pipeline::MaxAnisotropy() { return 1.0f; }
bool     vk::pipeline::NonSeamlessCubes() { return false; }
bool     vk::pipeline::PipelineLibraries() { return false; }
bool     vk::pipeline::HasDynamicRendering() { return false; }
bool     vk::pipeline::HasExtendedDynamicState() { return false; }
bool     vk::pipeline::LegacyMode() { return false; }
bool     vk::pipeline::TextureCompressionBC() { return false; }
std::mutex& vk::pipeline::QueueMutex() { static std::mutex m; return m; }
void*    vk::pipeline::SetLayout(uint32_t) { return nullptr; }
void*    vk::pipeline::Layout() { return nullptr; }
void*    vk::pipeline::Cache() { return nullptr; }
bool vk::pipeline::CreateModule(const uint32_t*, size_t, const char** error)
{
    if (error) *error = "built without Vulkan";
    return false;
}
bool vk::pipeline::DeviceHasExtension(void*, const char*) { return false; }
bool vk::pipeline::CreateDevice(void*, uint32_t, const char* const*, uint32_t, void**, void**, void*)
{
    return false;
}
bool vk::pipeline::Failed(int vkResult, const char*) { return vkResult != 0; }
void vk::pipeline::OnDeviceLost(void (*)(const char*)) {}
#else

#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#ifdef MW2_ANDROID
#include "../../android/android.h"
#endif
#include "../../env.h"

#include <vulkan/vulkan.h>
#include "loader.h"

#if defined(MW2_VULKAN_DYNAMIC)
namespace { bool OpenVulkan() { std::string error; return vk::loader::Open(error); } }
#else
namespace { bool OpenVulkan() { return true; } }
#endif

namespace
{
    namespace bindings = vk::bindings;
    constexpr uint32_t kTextureSlots = bindings::kTextureSlots;

    struct State
    {
        // Owned only when this file brought the device up itself; when the presenter
        // supplies one, teardown leaves it alone.
        bool ownsDevice = false;
        VkInstance instance = VK_NULL_HANDLE;
        VkPhysicalDevice physical = VK_NULL_HANDLE;
        VkDevice device = VK_NULL_HANDLE;
        VkQueue queue = VK_NULL_HANDLE;
        uint32_t family = 0;
        bool preciseQueries = false;
        float maxAnisotropy = 1.0f;
        bool nonSeamlessCubes = false;
        bool pipelineLibraries = false, fastLinking = false;
        bool hasDynamicRendering = false;
        bool hasExtendedDynamicState = false;
        bool legacyMode = false;
        bool textureCompressionBC = false;
        std::string name = "none";

        VkDescriptorSetLayout sets[3]{};
        VkPipelineLayout layout = VK_NULL_HANDLE;
        VkPipelineCache cache = VK_NULL_HANDLE;
        std::string lastError;
    };
    State g;

    const char* Explain(VkResult r)
    {
        switch (r)
        {
        case VK_SUCCESS: return "ok";
        case VK_ERROR_OUT_OF_HOST_MEMORY: return "out of host memory";
        case VK_ERROR_OUT_OF_DEVICE_MEMORY: return "out of device memory";
        case VK_ERROR_INVALID_SHADER_NV: return "driver rejected the shader";
        case VK_ERROR_INITIALIZATION_FAILED: return "initialisation failed";
        case VK_ERROR_EXTENSION_NOT_PRESENT: return "extension not present";
        case VK_ERROR_FEATURE_NOT_PRESENT: return "feature not present";
        case VK_ERROR_INCOMPATIBLE_DRIVER: return "incompatible driver";
        default: return "failed";
        }
    }

}

namespace { std::atomic<void (*)(const char*)> g_deviceLost{ nullptr }; }

void vk::pipeline::OnDeviceLost(void (*handler)(const char*)) { g_deviceLost = handler; }

bool vk::pipeline::Failed(int vkResult, const char* where)
{
    if (vkResult == VK_SUCCESS) return false;
    if (vkResult == VK_ERROR_DEVICE_LOST)
    {
        static std::atomic<bool> reported{ false };
        if (!reported.exchange(true))
        {
            LOGE("vulkan: the device was lost at %s -- the driver reset the GPU under this"
                 " run (after a GPU page fault or a hang; `journalctl -k | grep amdgpu` has"
                 " the fault), and nothing submitted from here on will finish. Ending the run.",
                 where);
            if (auto handler = g_deviceLost.load()) handler("the Vulkan device was lost");
        }
    }
    return true;
}

bool vk::pipeline::DeviceHasExtension(void* physical, const char* name)
{
    uint32_t count = 0;
    VkPhysicalDevice device = static_cast<VkPhysicalDevice>(physical);
    vkEnumerateDeviceExtensionProperties(device, nullptr, &count, nullptr);
    std::vector<VkExtensionProperties> offered(count);
    vkEnumerateDeviceExtensionProperties(device, nullptr, &count, offered.data());
    for (const auto& e : offered)
        if (std::strcmp(e.extensionName, name) == 0) return true;
    return false;
}

bool vk::pipeline::CreateDevice(void* physicalDevice, uint32_t family,
                                const char* const* extraExtensions, uint32_t extraCount,
                                void** deviceOut, void** queueOut, void* features)
{
    VkPhysicalDevice physical = static_cast<VkPhysicalDevice>(physicalDevice);
    const float priority = 1.0f;
    VkDeviceQueueCreateInfo queue{ VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO };
    queue.queueFamilyIndex = family;
    queue.queueCount = 1;
    queue.pQueuePriorities = &priority;

    VkPhysicalDeviceFeatures supported{};
    vkGetPhysicalDeviceFeatures(physical, &supported);
    VkPhysicalDeviceFeatures enabled{};
    // Robust buffer access, because the vertex fetch path reads the frame arena
    // at indices the guest's own data computes. One index past the end is,
    // without it, a GPU page fault: the driver retries it until the queue
    // stalls, and enough of them hung the whole machine. With it the read
    // returns zero or something in bounds, and the draw is merely wrong. Xenia
    // asks for the same thing for the same reason.
    enabled.robustBufferAccess = supported.robustBufferAccess;
    if (!supported.robustBufferAccess)
        LOGW("vulkan: the device offers no robust buffer access; an out-of-range vertex"
             " fetch will fault");
    // Compressed BC textures (BC1..BC5) used throughout the title. Strict drivers
    // (Mali, etc.) require this feature to be explicitly enabled before creating BC images.
    enabled.textureCompressionBC = supported.textureCompressionBC;
    g.textureCompressionBC = supported.textureCompressionBC;
    if (!supported.textureCompressionBC)
        LOGW("vulkan: the device does not report textureCompressionBC support");
    // The title's occlusion queries are a sample count it compares against a
    // threshold, and without this a query is only allowed to answer "some".
    enabled.occlusionQueryPrecise = supported.occlusionQueryPrecise;
    g.preciseQueries = supported.occlusionQueryPrecise;
    // The title asks for anisotropic filtering on nearly every world texture
    // (2:1, once 4:1), and a sampler cannot give it unless the device enables it.
    enabled.samplerAnisotropy = supported.samplerAnisotropy;
    if (supported.samplerAnisotropy)
    {
        VkPhysicalDeviceProperties properties{};
        vkGetPhysicalDeviceProperties(physical, &properties);
        g.maxAnisotropy = properties.limits.maxSamplerAnisotropy;
    }

    // The image format list lets a resolve destination carry an sRGB view beside
    // its own without the driver giving up compression; naming it in an image's
    // pNext without enabling it is invalid.
    std::vector<const char*> extensions(extraExtensions, extraExtensions + extraCount);
    if (DeviceHasExtension(physical, VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME))
        extensions.push_back(VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME);

    // Direct3D 9 filters each cube face on its own, clamped at its edges; a
    // Vulkan cube blends across them unless told not to. Xenia asks for the
    // same thing.
    VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT nonSeamless{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT };
    if (DeviceHasExtension(physical, VK_EXT_NON_SEAMLESS_CUBE_MAP_EXTENSION_NAME))
    {
        VkPhysicalDeviceFeatures2 query{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        query.pNext = &nonSeamless;
        vkGetPhysicalDeviceFeatures2(physical, &query);
        query.pNext = nullptr;
        if (nonSeamless.nonSeamlessCubeMap)
            extensions.push_back(VK_EXT_NON_SEAMLESS_CUBE_MAP_EXTENSION_NAME);
    }
    g.nonSeamlessCubes = nonSeamless.nonSeamlessCubeMap;

    // Render passes give way to dynamic rendering, and cull mode, winding and
    // the depth and stencil tests become state set per draw: then a shader
    // compiled on its own, as a pipeline library, fits every target and every
    // draw it is used in, and can be compiled when the title loads it rather
    // than at the first draw -- which is what the console does, where a
    // shader is ready the moment it is loaded.
    VkPhysicalDeviceProperties deviceProperties{};
    vkGetPhysicalDeviceProperties(physical, &deviceProperties);
    const bool core13 = deviceProperties.apiVersion >= VK_API_VERSION_1_3;

    const bool dynamicRenderingExtension =
        DeviceHasExtension(physical, VK_KHR_DYNAMIC_RENDERING_EXTENSION_NAME);
    const bool dynamicStateExtension =
        DeviceHasExtension(physical, VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME);
    const bool pipelineLibrariesExtension =
        DeviceHasExtension(physical, VK_EXT_GRAPHICS_PIPELINE_LIBRARY_EXTENSION_NAME);

    VkPhysicalDeviceDynamicRenderingFeaturesKHR dynamicRendering{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES_KHR };
    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT dynamicState{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT };
    VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT libraries{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT };

    {
        VkPhysicalDeviceFeatures2 query{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        void** tail = &query.pNext;
        if (core13 || dynamicRenderingExtension)
        {
            *tail = &dynamicRendering;
            tail = &dynamicRendering.pNext;
        }
        if (core13 || dynamicStateExtension)
        {
            *tail = &dynamicState;
            tail = &dynamicState.pNext;
        }
        if (pipelineLibrariesExtension)
        {
            *tail = &libraries;
            tail = &libraries.pNext;
        }
        if (query.pNext)
        {
            vkGetPhysicalDeviceFeatures2(physical, &query);
        }
    }

    const bool hasDynamicRendering =
        dynamicRendering.dynamicRendering && (dynamicRenderingExtension || core13);
    const bool hasDynamicState =
        dynamicState.extendedDynamicState && (dynamicStateExtension || core13);

    const bool forceLegacy = env::Flag("MW2_FORCE_LEGACY_RENDERING");
    g.hasDynamicRendering = hasDynamicRendering && !forceLegacy;
    g.hasExtendedDynamicState = hasDynamicState && !forceLegacy;
    g.legacyMode = !hasDynamicRendering || !hasDynamicState || forceLegacy;

    LOGI("vulkan: device reports Vulkan %u.%u.%u; dynamic rendering %s (extension %s),"
         " extended dynamic state %s (extension %s)",
         VK_VERSION_MAJOR(deviceProperties.apiVersion),
         VK_VERSION_MINOR(deviceProperties.apiVersion),
         VK_VERSION_PATCH(deviceProperties.apiVersion),
         dynamicRendering.dynamicRendering ? "yes" : "no",
         dynamicRenderingExtension ? "yes" : "no",
         dynamicState.extendedDynamicState ? "yes" : "no",
         dynamicStateExtension ? "yes" : "no");

    if (g.legacyMode)
    {
        LOGI("vulkan: legacy Vulkan 1.1 fallback active: classic VkRenderPass and static pipeline states%s",
             forceLegacy ? " (forced by MW2_FORCE_LEGACY_RENDERING)" : "");
    }

    if (dynamicRenderingExtension) extensions.push_back(VK_KHR_DYNAMIC_RENDERING_EXTENSION_NAME);
    if (dynamicStateExtension) extensions.push_back(VK_EXT_EXTENDED_DYNAMIC_STATE_EXTENSION_NAME);
    g.pipelineLibraries =
        !g.legacyMode &&
        DeviceHasExtension(physical, VK_KHR_PIPELINE_LIBRARY_EXTENSION_NAME) &&
        DeviceHasExtension(physical, VK_EXT_GRAPHICS_PIPELINE_LIBRARY_EXTENSION_NAME) &&
        libraries.graphicsPipelineLibrary;
    if (g.pipelineLibraries)
    {
        extensions.push_back(VK_KHR_PIPELINE_LIBRARY_EXTENSION_NAME);
        extensions.push_back(VK_EXT_GRAPHICS_PIPELINE_LIBRARY_EXTENSION_NAME);
        VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT linking{
            VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT };
        VkPhysicalDeviceProperties2 properties{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
        properties.pNext = &linking;
        vkGetPhysicalDeviceProperties2(physical, &properties);
        g.fastLinking = linking.graphicsPipelineLibraryFastLinking;
    }
    else libraries.graphicsPipelineLibrary = VK_FALSE;

    void* chain = features;
    if (g.pipelineLibraries)
    {
        libraries.pNext = chain;
        chain = &libraries;
    }
    if (hasDynamicState || dynamicStateExtension || core13)
    {
        dynamicState.pNext = chain;
        chain = &dynamicState;
    }
    if (hasDynamicRendering || dynamicRenderingExtension || core13)
    {
        dynamicRendering.pNext = chain;
        chain = &dynamicRendering;
    }

    VkDeviceCreateInfo info{ VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO };
    info.pNext = chain;
    if (g.nonSeamlessCubes) { nonSeamless.pNext = chain; info.pNext = &nonSeamless; }
    info.queueCreateInfoCount = 1;
    info.pQueueCreateInfos = &queue;
    info.enabledExtensionCount = uint32_t(extensions.size());
    info.ppEnabledExtensionNames = extensions.data();
    info.pEnabledFeatures = &enabled;
    VkDevice device = VK_NULL_HANDLE;
    const VkResult r = vkCreateDevice(physical, &info, nullptr, &device);
    if (r != VK_SUCCESS) { LOGW("vulkan: no device (%s)", Explain(r)); return false; }
#if defined(MW2_VULKAN_DYNAMIC)
    // From here on the device's entry points come from the driver itself
    // rather than through the loader's dispatch (loader.h).
    vk::loader::LoadDevice(device);
#endif
    VkQueue made = VK_NULL_HANDLE;
    vkGetDeviceQueue(device, family, 0, &made);
    *deviceOut = device;
    *queueOut = made;
    return true;
}

namespace
{
    // Enough of a device to compile shaders on. No surface, no swapchain: the
    // point is to reach the driver's compiler, which needs neither.
    bool BringUpHeadless()
    {
        if (!OpenVulkan()) { LOGW("pipeline: no Vulkan library"); return false; }

        VkApplicationInfo app{ VK_STRUCTURE_TYPE_APPLICATION_INFO };
        app.pApplicationName = "mw2recomp";
        // 1.1 for negative viewport heights, which is how the renderer expresses the
        // console's +Y-up clip space; 1.2 for the render pass depth resolve the
        // multisampled surfaces need.
        // The highest the loader will admit to, capped at 1.3. It matters:
        // dynamic rendering and extended dynamic state are core there, and
        // a driver that has them in core rather than as extensions can only
        // be asked for them by an application that says it targets 1.3.
        app.apiVersion = VK_API_VERSION_1_2;
#if defined(MW2_VULKAN_DYNAMIC)
        if (vkEnumerateInstanceVersion)
#endif
        {
            uint32_t available = 0;
            if (vkEnumerateInstanceVersion(&available) == VK_SUCCESS &&
                available >= VK_API_VERSION_1_3)
            {
                app.apiVersion = VK_API_VERSION_1_3;
            }
        }

        VkInstanceCreateInfo info{ VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO };
        info.pApplicationInfo = &app;
        VkResult r = vkCreateInstance(&info, nullptr, &g.instance);
        if (r != VK_SUCCESS) { LOGW("pipeline: no Vulkan instance (%s)", Explain(r)); return false; }
#if defined(MW2_VULKAN_DYNAMIC)
        vk::loader::LoadInstance(g.instance);
#endif

        uint32_t count = 0;
        vkEnumeratePhysicalDevices(g.instance, &count, nullptr);
        if (!count) { LOGW("pipeline: no Vulkan device"); return false; }
        std::vector<VkPhysicalDevice> devices(count);
        vkEnumeratePhysicalDevices(g.instance, &count, devices.data());

        // Prefer real hardware: a software rasteriser accepts SPIR-V a hardware
        // compiler refuses, so validating against one proves less.
        uint32_t chosen = 0;
        for (uint32_t i = 0; i < count; i++)
        {
            VkPhysicalDeviceProperties p{};
            vkGetPhysicalDeviceProperties(devices[i], &p);
            if (p.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU ||
                p.deviceType == VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU) { chosen = i; break; }
        }
        g.physical = devices[chosen];

        uint32_t families = 0;
        vkGetPhysicalDeviceQueueFamilyProperties(g.physical, &families, nullptr);
        std::vector<VkQueueFamilyProperties> props(families);
        vkGetPhysicalDeviceQueueFamilyProperties(g.physical, &families, props.data());
        uint32_t family = UINT32_MAX;
        for (uint32_t i = 0; i < families; i++)
            if (props[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) { family = i; break; }
        if (family == UINT32_MAX) { LOGW("pipeline: no graphics queue"); return false; }

        void* device = nullptr;
        void* queue = nullptr;
        if (!vk::pipeline::CreateDevice(g.physical, family, nullptr, 0, &device, &queue))
            return false;
        g.device = static_cast<VkDevice>(device);
        g.queue = static_cast<VkQueue>(queue);
        g.family = family;
        g.ownsDevice = true;
        return true;
    }

    bool CreateSetLayouts()
    {
        const VkShaderStageFlags both = VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT;

        // The constant blocks, dynamic because every draw takes its own snapshot
        // of the register file into the arena and points at it by offset.
        VkDescriptorSetLayoutBinding constants[bindings::kConstantBlocks]{};
        for (uint32_t i = 0; i < bindings::kConstantBlocks; i++)
        {
            constants[i].binding = i;
            constants[i].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
            constants[i].descriptorCount = 1;
            constants[i].stageFlags = both;
        }

        // The layout declares every texture slot, so every shader -- each
        // declaring only the slots it samples -- is compatible with it.
        VkDescriptorSetLayoutBinding textures[kTextureSlots]{};
        for (uint32_t i = 0; i < kTextureSlots; i++)
        {
            textures[i].binding = i;
            textures[i].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            textures[i].descriptorCount = 1;
            textures[i].stageFlags = both;
        }

        VkDescriptorSetLayoutBinding memory{};
        memory.binding = bindings::kArenaBinding;
        memory.descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER;
        memory.descriptorCount = 1;
        memory.stageFlags = both;

        struct Set { const VkDescriptorSetLayoutBinding* bindings; uint32_t count; };
        Set sets[3];
        sets[bindings::kConstantSet] = { constants, bindings::kConstantBlocks };
        sets[bindings::kTextureSet] = { textures, kTextureSlots };
        sets[bindings::kArenaSet] = { &memory, 1 };
        for (uint32_t i = 0; i < 3; i++)
        {
            VkDescriptorSetLayoutCreateInfo info{ VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO };
            info.bindingCount = sets[i].count;
            info.pBindings = sets[i].bindings;
            VkResult r = vkCreateDescriptorSetLayout(g.device, &info, nullptr, &g.sets[i]);
            if (r != VK_SUCCESS)
            {
                LOGW("pipeline: descriptor set layout %u failed (%s)", i, Explain(r));
                return false;
            }
        }

        // Register state, not shader state, so not part of a pipeline key.
        // A stage has one range, so each runs on to the scaled slots both read.
        constexpr uint32_t kEnd = bindings::kScaledPushOffset + bindings::kScaledPushBytes;
        VkPushConstantRange ranges[2]{};
        ranges[0].stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
        ranges[0].offset = bindings::kPixelPushOffset;
        ranges[0].size = kEnd - bindings::kPixelPushOffset;
        ranges[1].stageFlags = VK_SHADER_STAGE_VERTEX_BIT;
        ranges[1].offset = bindings::kVertexPushOffset;
        ranges[1].size = kEnd - bindings::kVertexPushOffset;

        VkPipelineLayoutCreateInfo info{ VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO };
        info.setLayoutCount = 3;
        info.pSetLayouts = g.sets;
        info.pushConstantRangeCount = 2;
        info.pPushConstantRanges = ranges;
        VkResult r = vkCreatePipelineLayout(g.device, &info, nullptr, &g.layout);
        if (r != VK_SUCCESS) { LOGW("pipeline: layout failed (%s)", Explain(r)); return false; }
        return true;
    }

    // Without it the cache still works, just only within one run.
    const char* CachePath()
    {
        static std::string pathStr;
        if (!pathStr.empty()) return pathStr.c_str();
        if (env::Flag("MW2_NO_PIPELINE_CACHE")) return nullptr;
        if (const char* path = env::Text("MW2_PIPELINE_CACHE"))
        {
            pathStr = path;
            return pathStr.c_str();
        }
#ifdef MW2_ANDROID
        if (!android::GetPaths().cache.empty())
        {
            pathStr = android::GetPaths().cache + "/pipeline.vkcache";
            return pathStr.c_str();
        }
#endif
        return nullptr;
    }

    void CreateCache()
    {
        std::lock_guard lock(vk::pipeline::CacheMutex());
        if (g.name.find("Mali") != std::string::npos && !env::Flag("MW2_FORCE_PIPELINE_CACHE"))
        {
            LOGI("pipeline: Mali driver detected (%s); persistent VkPipelineCache bypassed to prevent known driver deadlocks",
                 g.name.c_str());
            return;
        }

        std::vector<uint8_t> initial;
        if (const char* path = CachePath())
        {
            LOGI("pipeline: using pipeline cache file: %s", path);
            if (std::FILE* f = std::fopen(path, "rb"))
            {
                std::fseek(f, 0, SEEK_END);
                long size = std::ftell(f);
                std::fseek(f, 0, SEEK_SET);
                // Sanity bound: maximum 64 MB pipeline cache
                if (size > 0 && size <= 64 * 1024 * 1024)
                {
                    initial.resize(size_t(size));
                    if (std::fread(initial.data(), 1, initial.size(), f) != initial.size())
                        initial.clear();
                }
                std::fclose(f);
            }
        }
        VkPipelineCacheCreateInfo info{ VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO };
        info.initialDataSize = initial.size();
        info.pInitialData = initial.empty() ? nullptr : initial.data();
        // A cache the driver rejects is not an error: it starts empty instead.
        if (vkCreatePipelineCache(g.device, &info, nullptr, &g.cache) != VK_SUCCESS)
        {
            info.initialDataSize = 0;
            info.pInitialData = nullptr;
            vkCreatePipelineCache(g.device, &info, nullptr, &g.cache);
        }
        else if (!initial.empty())
        {
            LOGI("pipeline: loaded %zu KB of pipeline cache", initial.size() / 1024);
        }
    }

    void SaveCache()
    {
        std::lock_guard lock(vk::pipeline::CacheMutex());
        const char* path = CachePath();
        if (!path || !g.cache) return;
        size_t size = 0;
        if (vkGetPipelineCacheData(g.device, g.cache, &size, nullptr) != VK_SUCCESS || !size) return;
        std::vector<uint8_t> data(size);
        if (vkGetPipelineCacheData(g.device, g.cache, &size, data.data()) != VK_SUCCESS) return;
        std::string tmpPath = std::string(path) + ".tmp";
        if (std::FILE* f = std::fopen(tmpPath.c_str(), "wb"))
        {
            const size_t written = std::fwrite(data.data(), 1, size, f);
            const int closed = std::fclose(f);
            if (written == size && closed == 0 && std::rename(tmpPath.c_str(), path) == 0)
            {
                LOGI("pipeline: wrote %zu KB of pipeline cache to %s", size / 1024, path);
            }
            else
            {
                std::remove(tmpPath.c_str());
                LOGW("pipeline: failed to write pipeline cache to %s", path);
            }
        }
    }

    VkShaderModule MakeModule(const uint32_t* spirv, size_t words, VkResult& result)
    {
        VkShaderModuleCreateInfo info{ VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO };
        info.codeSize = words * 4;
        info.pCode = spirv;
        VkShaderModule module = VK_NULL_HANDLE;
        result = vkCreateShaderModule(g.device, &info, nullptr, &module);
        return module;
    }
}

bool vk::pipeline::Initialise(void* device, void* physical, void* queue, uint32_t queueFamily,
                              void* instance)
{
    if (g.device) return true;

    if (device && physical)
    {
        g.instance = static_cast<VkInstance>(instance);
        g.device = static_cast<VkDevice>(device);
        g.physical = static_cast<VkPhysicalDevice>(physical);
        g.queue = static_cast<VkQueue>(queue);
        g.family = queueFamily;
        g.ownsDevice = false;
    }
    else if (!BringUpHeadless())
    {
        return false;
    }

    VkPhysicalDeviceProperties props{};
    vkGetPhysicalDeviceProperties(g.physical, &props);
    g.name = props.deviceName;
    // A bug report is read against the driver's known faults.
    if (report::On())
    {
        VkPhysicalDeviceDriverProperties driver{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES };
        if (props.apiVersion >= VK_API_VERSION_1_2)
        {
            VkPhysicalDeviceProperties2 more{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 };
            more.pNext = &driver;
            vkGetPhysicalDeviceProperties2(g.physical, &more);
        }
        LOGI("report: graphics %s (%04X:%04X), driver %s %s (%08X), Vulkan %u.%u.%u", props.deviceName,
             props.vendorID, props.deviceID, driver.driverName, driver.driverInfo, props.driverVersion,
             VK_API_VERSION_MAJOR(props.apiVersion), VK_API_VERSION_MINOR(props.apiVersion),
             VK_API_VERSION_PATCH(props.apiVersion));
    }

    if (!CreateSetLayouts()) { Shutdown(); return false; }
    CreateCache();
    LOGI("pipeline: layout ready on %s", g.name.c_str());
    return true;
}

void vk::pipeline::Shutdown()
{
    if (!g.device) return;
    SaveCache();
    if (g.cache) vkDestroyPipelineCache(g.device, g.cache, nullptr);
    if (g.layout) vkDestroyPipelineLayout(g.device, g.layout, nullptr);
    for (VkDescriptorSetLayout& set : g.sets)
        if (set) { vkDestroyDescriptorSetLayout(g.device, set, nullptr); set = VK_NULL_HANDLE; }
    g.cache = VK_NULL_HANDLE;
    g.layout = VK_NULL_HANDLE;
    if (g.ownsDevice)
    {
#if defined(MW2_VULKAN_DYNAMIC)
        vk::loader::ForgetDevice();
#endif
        vkDestroyDevice(g.device, nullptr);
        if (g.instance) vkDestroyInstance(g.instance, nullptr);
        g.instance = VK_NULL_HANDLE;
    }
    g.device = VK_NULL_HANDLE;
    g.physical = VK_NULL_HANDLE;
    g.queue = VK_NULL_HANDLE;
}

bool vk::pipeline::Ready() { return g.device != VK_NULL_HANDLE; }
const char* vk::pipeline::DeviceName() { return g.name.c_str(); }
void*    vk::pipeline::Instance() { return g.instance; }
void*    vk::pipeline::Device() { return g.device; }
void*    vk::pipeline::PhysicalDevice() { return g.physical; }
void*    vk::pipeline::Queue() { return g.queue; }
uint32_t vk::pipeline::QueueFamily() { return g.family; }
bool     vk::pipeline::PreciseOcclusionQueries() { return g.preciseQueries; }
float    vk::pipeline::MaxAnisotropy() { return g.maxAnisotropy; }
bool     vk::pipeline::NonSeamlessCubes() { return g.nonSeamlessCubes; }
// MW2_NO_PIPELINE_LIBRARIES=1 builds whole pipelines at the first draw instead.
bool     vk::pipeline::PipelineLibraries()
{
    static const bool refused = env::Flag("MW2_NO_PIPELINE_LIBRARIES");
    return g.pipelineLibraries && g.fastLinking && !refused;
}
bool     vk::pipeline::HasDynamicRendering() { return g.hasDynamicRendering; }
bool     vk::pipeline::HasExtendedDynamicState() { return g.hasExtendedDynamicState; }
bool     vk::pipeline::LegacyMode() { return g.legacyMode; }
bool     vk::pipeline::TextureCompressionBC() { return g.textureCompressionBC; }
std::mutex& vk::pipeline::QueueMutex() { static std::mutex m; return m; }
std::mutex& vk::pipeline::CacheMutex() { static std::mutex m; return m; }
void*    vk::pipeline::SetLayout(uint32_t set) { return set < 3 ? g.sets[set] : nullptr; }
void*    vk::pipeline::Layout() { return g.layout; }
void*    vk::pipeline::Cache()
{
    static const bool noCache = env::Flag("MW2_NO_PIPELINE_CACHE");
    static const bool isMali = (g.name.find("Mali") != std::string::npos);
    static const bool forceCache = env::Flag("MW2_FORCE_PIPELINE_CACHE");
    if (noCache || (isMali && !forceCache)) return nullptr;
    return g.cache;
}
void     vk::pipeline::SaveCache() { ::SaveCache(); }

bool vk::pipeline::CreateModule(const uint32_t* spirv, size_t words, const char** error)
{
    if (!g.device) { if (error) *error = "no device"; return false; }
    VkResult r;
    VkShaderModule module = MakeModule(spirv, words, r);
    if (r != VK_SUCCESS)
    {
        g.lastError = Explain(r);
        if (error) *error = g.lastError.c_str();
        return false;
    }
    vkDestroyShaderModule(g.device, module, nullptr);
    return true;
}

#endif  // MW2_HAVE_VULKAN
