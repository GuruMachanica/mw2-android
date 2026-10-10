#!/usr/bin/env bash
# The one dependency the Android build has that is not fetched by CMake:
# libadrenotools, which is what lets a driver the player imported be loaded
# on a phone that has not been rooted.
#
# It is not vendored here -- it is somebody else's code, under its own
# licence, and it carries submodules. Without it the app still builds and
# still runs; it simply uses the driver the phone shipped with, and says so
# on the driver screen.
set -euo pipefail

REPOSITORY_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
TARGET="${REPOSITORY_ROOT}/third_party/libadrenotools"
REMOTE="${ADRENOTOOLS_REMOTE:-https://github.com/bylaws/libadrenotools.git}"
REVISION="${ADRENOTOOLS_REVISION:-c6f1d2df63e792e3be6cb3bc95ee6bb9a2503d21}"

if [ -d "${TARGET}/.git" ]; then
    echo "libadrenotools is already there; updating it."
    git -C "${TARGET}" fetch --depth 1 origin "${REVISION}"
    git -C "${TARGET}" checkout --force FETCH_HEAD
else
    echo "Cloning libadrenotools into ${TARGET}"
    git clone --depth 1 --branch "${REVISION}" "${REMOTE}" "${TARGET}" 2>/dev/null ||
        git clone --depth 1 "${REMOTE}" "${TARGET}"
fi

# Its own dependency: the linker shim it loads the driver through.
git -C "${TARGET}" submodule update --init --recursive --depth 1

echo
echo "Done. The next Gradle build will find it (cmake/android.cmake) and the"
echo "app's driver screen will be able to load an imported driver."
