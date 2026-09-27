# What the Android build of the runtime needs on top of the common one.
# Included from the top-level CMakeLists.txt when ANDROID is set, which the
# NDK's toolchain file does; the Gradle build in android/ points its
# externalNativeBuild at that same CMakeLists.txt, so this is the only place
# the phone build differs.

if(NOT CMAKE_ANDROID_ARCH_ABI STREQUAL "arm64-v8a")
    message(FATAL_ERROR
        "This port is arm64-v8a only. A 32-bit build cannot hold the guest's"
        " 4 GiB address space, which the recompiled code reaches with a flat"
        " 32-bit offset from one base pointer (runtime/guest_memory.cpp).")
endif()

target_compile_definitions(mw2 PRIVATE MW2_ANDROID=1)

# 16 KB pages. Android 15 devices ship with them, and a library linked for 4 KB
# will not load at all there. Nothing in the runtime assumes a page size --
# everything asks sysconf -- so this is purely the linker's alignment.
target_link_options(mw2 PRIVATE -Wl,-z,max-page-size=16384 -Wl,-z,common-page-size=16384)

# The Vulkan entry points are pointers filled in while the process runs, from
# whichever driver was opened, rather than symbols resolved against the
# platform's libvulkan.so at load time. Only the files that call Vulkan see
# the header, and they see it before anything else (runtime/gpu/vulkan/loader.h).
file(GLOB MW2_VULKAN_SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/runtime/gpu/vulkan/*.cpp")
set_source_files_properties(${MW2_VULKAN_SOURCES} PROPERTIES
    COMPILE_OPTIONS "-include;${CMAKE_SOURCE_DIR}/runtime/gpu/vulkan/loader.h")
target_compile_definitions(mw2 PRIVATE MW2_VULKAN_DYNAMIC=1)

# aaudio  the low-latency audio sink (runtime/android/audio.cpp)
# android ANativeWindow and the asset manager (runtime/android/window.cpp)
# log     __android_log_write, where the runtime's log goes (runtime/log.h)
target_link_libraries(mw2 PRIVATE aaudio android log dl)

# Symbols keep their default visibility. The crash handler resolves addresses
# through dladdr (runtime/platform.cpp), and the recompiled functions are
# named sub_XXXXXXXX: hidden, a guest stack trace would be a list of
# addresses. The symbol table costs a few hundred kilobytes and pays for
# itself the first time a player sends a log.

# ---- the player's own Vulkan driver ---------------------------------------
# libadrenotools loads a Turnip build the player imported, on a device that
# has not been rooted, by giving the driver the linker namespace it expects.
# It is not vendored here (android/fetch_deps.sh clones it); without it the
# app still runs on the system's driver and says so.
set(MW2_ADRENOTOOLS_DIR "${CMAKE_SOURCE_DIR}/third_party/libadrenotools")
if(EXISTS "${MW2_ADRENOTOOLS_DIR}/CMakeLists.txt")
    # Not EXCLUDE_FROM_ALL: its hook libraries have to be in the apk, and a
    # target excluded from the default build is not something the Android
    # plugin reliably packages. They are small.
    add_subdirectory("${MW2_ADRENOTOOLS_DIR}" adrenotools)
    target_link_libraries(mw2 PRIVATE adrenotools)
    target_compile_definitions(mw2 PRIVATE MW2_HAVE_ADRENOTOOLS=1)
    # Its two hook libraries are dlopened by the driver at run time, so they
    # have to be in the apk beside libmw2.so. Building them as part of this
    # build is what puts them there: the Gradle plugin packages every shared
    # library this CMake project produces.
    # main_hook and hook_impl are the loader itself; file_redirect_hook is
    # what ADRENOTOOLS_DRIVER_FILE_REDIRECT needs (runtime/android/driver.cpp),
    # and a driver that asks for it and cannot find it does not load.
    foreach(hook main_hook hook_impl file_redirect_hook)
        if(TARGET ${hook})
            add_dependencies(mw2 ${hook})
        endif()
    endforeach()
    message(STATUS "Custom Vulkan drivers: libadrenotools")
else()
    message(STATUS "Custom Vulkan drivers: off (run android/fetch_deps.sh to enable)")
endif()

# ---- code generation ------------------------------------------------------
# The recompiled translation units are enormous -- tens of thousands of
# functions -- and the phone's copy has to be small as well as quick.
if(CMAKE_BUILD_TYPE STREQUAL "Release" OR CMAKE_BUILD_TYPE STREQUAL "RelWithDebInfo")
    # No frame pointer on the guest's own functions would make a crash report
    # useless, and the unwinder is what every backtrace here goes through.
    target_compile_options(ppc_recomp PRIVATE -fno-omit-frame-pointer)
    target_compile_options(mw2 PRIVATE -fno-omit-frame-pointer)
endif()

# The library is tens of megabytes of recompiled code and the debug info is
# several times that. It is stripped out of the apk and kept beside the build
# (android/app/build), which is what a crash report is read against.
if(CMAKE_BUILD_TYPE STREQUAL "Release")
    target_link_options(mw2 PRIVATE -Wl,--build-id=sha1)
endif()
