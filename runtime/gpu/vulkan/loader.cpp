// Filling in the pointers loader.h declares.
#include "loader.h"

#if defined(MW2_VULKAN_DYNAMIC) && defined(MW2_HAVE_VULKAN)

#include "../../log.h"

#ifdef MW2_ANDROID
#include "../../android/android.h"
#else
#include <dlfcn.h>
#endif

#include <atomic>
#include <cstring>
#include <mutex>

extern "C"
{
    PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr = nullptr;

#define MW2_VK_GLOBAL(name)   PFN_##name name = nullptr;
#define MW2_VK_INSTANCE(name) PFN_##name name = nullptr;
#define MW2_VK_DEVICE(name)   PFN_##name name = nullptr;
#include "vulkan_functions.inc"
#undef MW2_VK_GLOBAL
#undef MW2_VK_INSTANCE
#undef MW2_VK_DEVICE
}

namespace
{
    std::mutex g_lock;
    bool g_opened = false;
    std::string g_description = "not opened";
    uint32_t g_missing = 0;
    VkInstance g_instance = VK_NULL_HANDLE;

    // A name that came back null is counted and named once: a driver without
    // vkCmdBeginRenderingKHR is a driver this renderer cannot use, and
    // "crashed in renderer_draw.cpp" is not the way to find that out.
    template <typename Pointer>
    void Take(Pointer& slot, PFN_vkVoidFunction address, const char* name, bool required)
    {
        slot = reinterpret_cast<Pointer>(address);
        if (slot || !required) return;
        if (g_missing < 12) LOGW("vulkan: this driver has no %s", name);
        g_missing++;
    }
}

bool vk::loader::Opened() { return g_opened; }
const char* vk::loader::Description() { return g_description.c_str(); }
uint32_t vk::loader::Missing() { return g_missing; }

bool vk::loader::Open(std::string& error)
{
    std::lock_guard lock(g_lock);
    if (g_opened) return true;

    void* entry = nullptr;
#ifdef MW2_ANDROID
    entry = android::driver::Open(error);
    g_description = android::driver::Description();
#else
    // A desktop build with dynamic loading asked for: the system's loader.
    for (const char* name : { "libvulkan.so.1", "libvulkan.so" })
    {
        void* library = dlopen(name, RTLD_NOW | RTLD_LOCAL);
        if (!library) continue;
        entry = dlsym(library, "vkGetInstanceProcAddr");
        if (entry) { g_description = name; break; }
        dlclose(library);
    }
    if (!entry) error = "libvulkan could not be loaded";
#endif
    if (!entry) return false;

    vkGetInstanceProcAddr = reinterpret_cast<PFN_vkGetInstanceProcAddr>(entry);

    // What can be had without an instance. vkEnumerateInstanceVersion is
    // Vulkan 1.1 and may be absent on a 1.0 implementation, which is not an
    // error -- the caller treats null as "1.0".
#define MW2_VK_GLOBAL(name) \
    Take(name, vkGetInstanceProcAddr(nullptr, #name), #name, \
         std::strcmp(#name, "vkEnumerateInstanceVersion") != 0);
#define MW2_VK_INSTANCE(name)
#define MW2_VK_DEVICE(name)
#include "vulkan_functions.inc"
#undef MW2_VK_GLOBAL
#undef MW2_VK_INSTANCE
#undef MW2_VK_DEVICE

    if (!vkCreateInstance)
    {
        error = "the Vulkan library has no vkCreateInstance";
        LOGE("vulkan: %s (%s)", error.c_str(), g_description.c_str());
        return false;
    }
    g_opened = true;
    LOGI("vulkan: %s", g_description.c_str());
    return true;
}

void vk::loader::LoadInstance(VkInstance instance)
{
    std::lock_guard lock(g_lock);
    g_instance = instance;
    // Surface and debug entry points belong to extensions that may not be
    // enabled; the renderer checks for them itself.
#define MW2_VK_GLOBAL(name)
#define MW2_VK_INSTANCE(name) \
    Take(name, vkGetInstanceProcAddr(instance, #name), #name, \
         std::strstr(#name, "Surface") == nullptr && std::strstr(#name, "Debug") == nullptr && \
         std::strstr(#name, "Android") == nullptr);
#define MW2_VK_DEVICE(name) \
    Take(name, vkGetInstanceProcAddr(instance, #name), #name, \
         std::strstr(#name, "KHR") == nullptr && std::strstr(#name, "EXT") == nullptr);
#include "vulkan_functions.inc"
#undef MW2_VK_GLOBAL
#undef MW2_VK_INSTANCE
#undef MW2_VK_DEVICE
    LOGI("vulkan: instance entry points loaded%s",
         g_missing ? " (some are missing, see above)" : "");
}

void vk::loader::LoadDevice(VkDevice device)
{
    std::lock_guard lock(g_lock);
    if (!vkGetDeviceProcAddr || !device) return;
    uint32_t taken = 0;
#define MW2_VK_GLOBAL(name)
#define MW2_VK_INSTANCE(name)
#define MW2_VK_DEVICE(name) \
    if (auto address = vkGetDeviceProcAddr(device, #name)) \
    { \
        name = reinterpret_cast<PFN_##name>(address); \
        taken++; \
    }
#include "vulkan_functions.inc"
#undef MW2_VK_GLOBAL
#undef MW2_VK_INSTANCE
#undef MW2_VK_DEVICE
    LOGI("vulkan: %u device entry points taken straight from the driver", taken);
}

// The device is going: its entry points must not be called again, so they go
// back to the instance's, which dispatch on whatever they are handed.
void vk::loader::ForgetDevice()
{
    std::lock_guard lock(g_lock);
    if (!g_instance) return;
#define MW2_VK_GLOBAL(name)
#define MW2_VK_INSTANCE(name)
#define MW2_VK_DEVICE(name) name = reinterpret_cast<PFN_##name>(vkGetInstanceProcAddr(g_instance, #name));
#include "vulkan_functions.inc"
#undef MW2_VK_GLOBAL
#undef MW2_VK_INSTANCE
#undef MW2_VK_DEVICE
}

#endif  // MW2_VULKAN_DYNAMIC && MW2_HAVE_VULKAN
