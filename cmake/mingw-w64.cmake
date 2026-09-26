# Cross-compiling for Windows from Linux with llvm-mingw
# (https://github.com/mstorsjo/llvm-mingw): clang for x86_64-w64-mingw32,
# against the UCRT. LLVM_MINGW names the toolchain's folder.
#
#   cmake -B build-win -DCMAKE_TOOLCHAIN_FILE=cmake/mingw-w64.cmake ...
set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_SYSTEM_PROCESSOR x86_64)

if(NOT LLVM_MINGW)
    set(LLVM_MINGW "$ENV{LLVM_MINGW}")
endif()
if(NOT LLVM_MINGW)
    message(FATAL_ERROR "set LLVM_MINGW (or the environment variable) to the llvm-mingw folder")
endif()
# Kept for a reconfigure, and for the checks CMake compiles in projects of its own.
set(LLVM_MINGW "${LLVM_MINGW}" CACHE PATH "The llvm-mingw toolchain")
set(ENV{LLVM_MINGW} "${LLVM_MINGW}")
list(APPEND CMAKE_TRY_COMPILE_PLATFORM_VARIABLES LLVM_MINGW)

set(triple x86_64-w64-mingw32)
set(CMAKE_C_COMPILER   "${LLVM_MINGW}/bin/${triple}-clang")
set(CMAKE_CXX_COMPILER "${LLVM_MINGW}/bin/${triple}-clang++")
set(CMAKE_RC_COMPILER  "${LLVM_MINGW}/bin/${triple}-windres")
set(CMAKE_DLLTOOL      "${LLVM_MINGW}/bin/${triple}-dlltool")
set(CMAKE_AR           "${LLVM_MINGW}/bin/llvm-ar")
set(CMAKE_RANLIB       "${LLVM_MINGW}/bin/llvm-ranlib")

set(CMAKE_FIND_ROOT_PATH "${LLVM_MINGW}/${triple}")
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
