# Vulkan for a Windows build. The loader, vulkan-1.dll, comes with every GPU
# driver, so nothing is shipped: the headers are fetched, and the import
# library is made from them -- every vk* entry point they declare, of which
# the runtime binds only the core and surface ones the loader exports.
include(FetchContent)
FetchContent_Declare(vulkan_headers
    URL https://github.com/KhronosGroup/Vulkan-Headers/archive/refs/tags/v1.3.275.tar.gz
    URL_HASH SHA256=7161da645dbd33fd4ea61eec08e0d77389a640010acbf4afc00234f84df9b314
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE)
FetchContent_MakeAvailable(vulkan_headers)
set(vulkan_include "${vulkan_headers_SOURCE_DIR}/include")

set(vulkan_def "${CMAKE_BINARY_DIR}/vulkan-1.def")
set(vulkan_names "")
foreach(header vulkan_core.h vulkan_win32.h)
    file(STRINGS "${vulkan_include}/vulkan/${header}" lines REGEX "VKAPI_CALL vk[A-Za-z0-9]+\\(")
    foreach(line IN LISTS lines)
        string(REGEX MATCH "VKAPI_CALL (vk[A-Za-z0-9]+)\\(" _ "${line}")
        list(APPEND vulkan_names "${CMAKE_MATCH_1}")
    endforeach()
endforeach()
list(REMOVE_DUPLICATES vulkan_names)
list(JOIN vulkan_names "\n    " vulkan_exports)
file(WRITE "${vulkan_def}" "LIBRARY vulkan-1.dll\nEXPORTS\n    ${vulkan_exports}\n")

set(vulkan_import "${CMAKE_BINARY_DIR}/libvulkan-1.a")
add_custom_command(OUTPUT "${vulkan_import}"
    COMMAND "${CMAKE_DLLTOOL}" -m i386:x86-64 -d "${vulkan_def}" -l "${vulkan_import}"
    DEPENDS "${vulkan_def}" VERBATIM)
add_custom_target(vulkan_import_library DEPENDS "${vulkan_import}")

add_library(Vulkan::Vulkan INTERFACE IMPORTED)
target_include_directories(Vulkan::Vulkan INTERFACE "${vulkan_include}")
target_link_libraries(Vulkan::Vulkan INTERFACE "${vulkan_import}")
set(Vulkan_FOUND TRUE)
set(Vulkan_LIBRARY "${vulkan_import}")
