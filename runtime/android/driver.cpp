// Which Vulkan the process talks to.
//
// Android's own libvulkan.so is a loader in front of the vendor driver, and
// an application cannot tell it to use another one: the ICD list lives in
// /vendor. On Adreno hardware the vendor driver is usually the reason a
// recompiled Xbox 360 title runs badly -- or not at all -- and Mesa's Turnip
// is the reason it runs. Players import it as a zip, and this file is what
// loads it.
//
// Three ways in, tried in order:
//
//   1. libadrenotools. It makes the *platform* loader open the imported
//      driver, so Android's own WSI -- surfaces, swapchains, the buffer queue
//      -- still sits above it. This is the path that works everywhere, and
//      the one the build fetches (android/fetch_deps.sh).
//   2. The driver on its own, as a plain ICD: dlopen and ask for
//      vk_icdGetInstanceProcAddr. Some Turnip builds carry their own Android
//      WSI and work like this; those that leave WSI to the platform loader
//      will fail to present, and the run falls back.
//   3. The system's libvulkan.so, which is what a build with no imported
//      driver uses.
//
// A chosen driver that does not load is never silent: the app says so on the
// driver screen, and the run carries on with the system's.
#ifdef MW2_ANDROID

#include "android.h"
#include "../log.h"

#include <dlfcn.h>

#include <cstring>
#include <mutex>
#include <string>

#if MW2_HAVE_ADRENOTOOLS
#include <adrenotools/driver.h>
#endif

namespace
{
    std::mutex g_lock;
    std::string g_directory;      // where the zip was unpacked, or empty
    std::string g_libraryName;    // "libvulkan_freedreno.so", from meta.json
    std::string g_description = "not opened yet";
    bool g_customFailed = false;
    void* g_handle = nullptr;
    void* g_getInstanceProcAddr = nullptr;

    // The Android Vulkan HAL, as hardware/hwvulkan.h declares it. Declared
    // here rather than included: the NDK does not ship those headers, and all
    // that is needed of them is the layout of two structures that have not
    // changed since Android 7.
    struct hw_module_methods_t;
    struct hw_device_t;

    struct hw_module_t
    {
        uint32_t tag;
        uint16_t module_api_version;
        uint16_t hal_api_version;
        const char* id;
        const char* name;
        const char* author;
        hw_module_methods_t* methods;
        void* dso;
        uint64_t reserved[32 - 7];
    };

    struct hw_module_methods_t
    {
        int (*open)(const hw_module_t* module, const char* id, hw_device_t** device);
    };

    struct hw_device_t
    {
        uint32_t tag;
        uint32_t version;
        hw_module_t* module;
        uint64_t reserved[12];
        int (*close)(hw_device_t* device);
    };

    struct hwvulkan_device_t
    {
        hw_device_t common;
        void* EnumerateInstanceExtensionProperties;
        void* CreateInstance;
        void* GetInstanceProcAddr;
    };

    // Every entry point a Vulkan implementation may offer the caller, in the
    // order they are worth trying. vk_icdGetInstanceProcAddr is the ICD
    // interface; vkGetInstanceProcAddr is what a loader exports.
    void* EntryPoint(void* handle, std::string& how)
    {
        if (!handle) return nullptr;

        if (void* icd = dlsym(handle, "vk_icdGetInstanceProcAddr"))
        {
            // Telling the driver which ICD interface version the "loader"
            // speaks is optional, and drivers that have it behave better for
            // having been asked.
            using Negotiate = int (*)(uint32_t*);
            if (auto negotiate = reinterpret_cast<Negotiate>(dlsym(handle, "vk_icdNegotiateLoaderICDInterfaceVersion")))
            {
                uint32_t version = 5;
                negotiate(&version);
                LOGI("driver: ICD interface version %u", version);
            }
            how = "vk_icdGetInstanceProcAddr";
            return icd;
        }
        if (void* plain = dlsym(handle, "vkGetInstanceProcAddr"))
        {
            how = "vkGetInstanceProcAddr";
            return plain;
        }
        // The Android Vulkan HAL: a hw_module_t under the symbol HMI, opened
        // to get at its GetInstanceProcAddr.
        if (void* hmi = dlsym(handle, "HMI"))
        {
            auto* module = static_cast<hw_module_t*>(hmi);
            hw_device_t* device = nullptr;
            if (module->methods && module->methods->open &&
                module->methods->open(module, "vk0", &device) == 0 && device)
            {
                auto* vulkan = reinterpret_cast<hwvulkan_device_t*>(device);
                if (vulkan->GetInstanceProcAddr)
                {
                    how = "the Android Vulkan HAL";
                    return vulkan->GetInstanceProcAddr;
                }
            }
        }
        return nullptr;
    }

    std::string JoinPath(const std::string& directory, const std::string& name)
    {
        if (directory.empty()) return name;
        if (directory.back() == '/') return directory + name;
        return directory + "/" + name;
    }

    // With a trailing slash, which is how libadrenotools wants its paths.
    std::string AsDirectory(const std::string& path)
    {
        if (path.empty() || path.back() == '/') return path;
        return path + "/";
    }
}

void android::driver::Select(const char* directory, const char* libraryName)
{
    std::lock_guard lock(g_lock);
    g_directory = directory ? directory : "";
    g_libraryName = libraryName ? libraryName : "";
    if (g_directory.empty() || g_libraryName.empty())
        LOGI("driver: the system's Vulkan");
    else
        LOGI("driver: %s from %s", g_libraryName.c_str(), g_directory.c_str());
}

const std::string& android::driver::Description() { return g_description; }
bool android::driver::CustomDriverFailed() { return g_customFailed; }

void* android::driver::Open(std::string& error)
{
    std::lock_guard lock(g_lock);
    if (g_getInstanceProcAddr) return g_getInstanceProcAddr;

    const Paths& paths = GetPaths();
    std::string how;

    if (!g_directory.empty() && !g_libraryName.empty())
    {
#if MW2_HAVE_ADRENOTOOLS
        // The imported driver, loaded so that Android's WSI stays above it.
        // The temporary folder is where the loader writes the patched copy of
        // the driver, and the redirect folder is where a driver that wants to
        // write beside itself ends up (Turnip's debug files, a shader dump).
        const std::string temporary = AsDirectory(paths.cache) + "driver_tmp/";
        const std::string redirect = AsDirectory(paths.files) + "driver_files/";
        g_handle = adrenotools_open_libvulkan(
            RTLD_NOW | RTLD_LOCAL,
            ADRENOTOOLS_DRIVER_CUSTOM | ADRENOTOOLS_DRIVER_FILE_REDIRECT,
            temporary.c_str(), paths.nativeLib.c_str(),
            AsDirectory(g_directory).c_str(), g_libraryName.c_str(),
            redirect.c_str(), nullptr);
        if (g_handle)
        {
            g_getInstanceProcAddr = EntryPoint(g_handle, how);
            if (g_getInstanceProcAddr)
            {
                g_description = g_libraryName + " (adrenotools, " + how + ")";
                LOGI("driver: %s", g_description.c_str());
                return g_getInstanceProcAddr;
            }
            dlclose(g_handle);
            g_handle = nullptr;
        }
        LOGW("driver: adrenotools could not load %s (%s)", g_libraryName.c_str(),
             dlerror() ? dlerror() : "no reason given");
#endif
        // Straight dlopen. A driver that carries its own Android WSI works;
        // one that expects the platform loader above it will not present, and
        // the presenter's own checks send the run back to the system driver.
        const std::string path = JoinPath(g_directory, g_libraryName);
        g_handle = dlopen(path.c_str(), RTLD_NOW | RTLD_LOCAL);
        if (g_handle)
        {
            g_getInstanceProcAddr = EntryPoint(g_handle, how);
            if (g_getInstanceProcAddr)
            {
                g_description = g_libraryName + " (" + how + ")";
                LOGI("driver: %s, loaded directly", g_description.c_str());
                return g_getInstanceProcAddr;
            }
            LOGW("driver: %s has no Vulkan entry point", path.c_str());
            dlclose(g_handle);
            g_handle = nullptr;
        }
        else
        {
            const char* why = dlerror();
            LOGW("driver: %s would not load (%s)", path.c_str(), why ? why : "?");
#if !MW2_HAVE_ADRENOTOOLS
            // Worth spelling out, because the message above names a missing
            // system library and reads like the driver's fault. It is not:
            // a Turnip build links against libcutils and the rest of
            // /system/lib64, which an app's own linker namespace cannot see.
            // Giving it a namespace that can is the whole job of
            // libadrenotools, and this build was made without it.
            LOGW("driver: this build has no libadrenotools, so an imported driver can only be"
                 " loaded if it needs nothing from /system -- which a Turnip build does."
                 " Run android/fetch_deps.sh and build again.");
#endif
        }
        g_customFailed = true;
    }

    // The system's loader.
    for (const char* name : { "libvulkan.so", "libvulkan.so.1" })
    {
        g_handle = dlopen(name, RTLD_NOW | RTLD_LOCAL);
        if (!g_handle) continue;
        g_getInstanceProcAddr = EntryPoint(g_handle, how);
        if (g_getInstanceProcAddr)
        {
            g_description = std::string("the system's ") + name;
            LOGI("driver: %s", g_description.c_str());
            return g_getInstanceProcAddr;
        }
        dlclose(g_handle);
        g_handle = nullptr;
    }

    const char* why = dlerror();
    error = std::string("no Vulkan on this device (") + (why ? why : "libvulkan.so is missing") + ")";
    g_description = "none";
    LOGE("driver: %s", error.c_str());
    return nullptr;
}

#endif  // MW2_ANDROID
