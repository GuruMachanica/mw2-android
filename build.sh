#!/bin/bash
# End-to-end MW2 (Xbox 360) -> native x86-64 recompilation.
#   Prereqs: cmake ninja-build clang-18 lld-18   (apt)
#   Input:   the retail ISO; everything else is derived.
#   TITLE=sp (default) builds default.xex, the campaign and special ops, into
#   build/; TITLE=mp builds default_mp.xex, the multiplayer, into build-mp/.
#   The two share the runtime and nothing else: each has its own recompiled
#   tree (ppc/, ppc_mp/), switch tables and build directory.
#   RELEASE_TAG=<tag> is the release the build is published as (v0.3.0): the
#   launcher looks for a newer one than it. Without it the launcher does not.
#   RELEASE=1 builds without diagnostics (runtime/diagnostics.h) into
#   build-release/ or build-mp-release/.
#   ONLINE=none|lan|steam picks the online service (runtime/online/); none, the
#   default, keeps system link on this machine, and steam is lan when Steam is
#   not running.
#   WINDOWS=1 cross-compiles for Windows with llvm-mingw (LLVM_MINGW names its
#   folder; cmake/mingw-w64.cmake) into a -win directory: build-win/, ...
#   BUILD_DIR=<dir> builds there instead. REGENERATE=0 keeps the recompiled
#   tree already there, for a second build of the same title (another ONLINE).
#   The game is built from title update 6: the disc's executables go in
#   mw2/tu0/, the update's files in mw2/update/, and the executables the
#   update makes of the disc's in mw2/. TU=<the update's package, or a folder
#   with its files> is needed until mw2/update/ has them.
#   VERSION=tu0 builds the disc's own executables instead, everything of theirs
#   named for it: mw2/tu0/, ppc_tu0/, ppc_mp_tu0/, config/*.tu0.toml, build*-tu0/.
#   Without the ISO, mw2/tu0/default.xex and mw2/tu0/default_mp.xex are enough
#   to build; the game data is only extracted when the ISO is there.
#   CMAKE_EXTRA is passed to the configure step (a compiler launcher, for
#   instance).
set -e
ROOT=$(cd "$(dirname "$0")" && pwd)
cd "$ROOT"
ISO=${ISO:-"/home/paul/Téléchargements/Call of Duty - Modern Warfare 2 (USA, Europe).iso"}

TITLE=${TITLE:-sp}
case "$TITLE" in
    sp) XEX=default.xex;    PE=default.pe;    TOML=MW2.toml;   TABLES=config/mw2_switch_tables.toml;   PPC=ppc;    BUILD=build ;;
    mp) XEX=default_mp.xex; PE=default_mp.pe; TOML=MW2MP.toml; TABLES=config/mw2mp_switch_tables.toml; PPC=ppc_mp; BUILD=build-mp ;;
    *)  echo "TITLE must be sp or mp, not '$TITLE'"; exit 1 ;;
esac
export MW2_TITLE=$TITLE
VERSION=${VERSION:-tu6}
DISC=mw2/tu0        # the disc's executables, which the update patches
UPDATE=mw2/update   # the update's files
MW2=mw2
case "$VERSION" in
    tu6) ;;
    tu0) MW2=$DISC; TOML=${TOML/.toml/.$VERSION.toml}; TABLES=${TABLES/.toml/.$VERSION.toml}; PPC=${PPC}_$VERSION ;;
    *)   echo "VERSION must be tu6 or tu0, not '$VERSION'"; exit 1 ;;
esac
export MW2_VERSION=$VERSION
DIAGNOSTICS=ON
PORTABLE=OFF
if [ -n "$RELEASE" ] && [ "$RELEASE" != 0 ]; then BUILD=$BUILD-release; DIAGNOSTICS=OFF; PORTABLE=ON; fi
TOOLCHAIN="-DCMAKE_C_COMPILER=clang-18 -DCMAKE_CXX_COMPILER=clang++-18"
EXE=mw2
if [ -n "$WINDOWS" ] && [ "$WINDOWS" != 0 ]; then
    [ -d "$LLVM_MINGW" ] || { echo "WINDOWS=1 needs LLVM_MINGW=<llvm-mingw folder>"; exit 1; }
    BUILD=${BUILD/build/build-win}
    TOOLCHAIN="-DCMAKE_TOOLCHAIN_FILE=$ROOT/cmake/mingw-w64.cmake -DLLVM_MINGW=$LLVM_MINGW"
    EXE=mw2.exe
fi
[ "$VERSION" = tu6 ] || BUILD=$BUILD-$VERSION
BUILD=${BUILD_DIR:-$BUILD}

XENON_COMMIT=ddd128bcca99fe8bfbb99bea583c972351fa6ace

echo "==> 1. fetch + patch XenonRecomp"
if [ ! -d XenonRecomp ]; then
    git clone --recursive https://github.com/hedge-dev/XenonRecomp.git
    git -C XenonRecomp checkout -q "$XENON_COMMIT"
    git -C XenonRecomp submodule update --init --recursive
    git -C XenonRecomp apply "$ROOT/patches/xenonrecomp-mw2.patch"
    echo "    applied patches/xenonrecomp-mw2.patch"
else
    echo "    using existing checkout (patches assumed applied)"
fi

echo "==> 2. build XenonRecomp / XenonAnalyse"
cmake -B XenonRecomp/build -S XenonRecomp -G Ninja -DCMAKE_BUILD_TYPE=Release \
      -DCMAKE_C_COMPILER=clang-18 -DCMAKE_CXX_COMPILER=clang++-18 >/dev/null
cmake --build XenonRecomp/build -j"$(nproc)" >/dev/null

echo "==> 3. extract the executables from the ISO (XDVDFS)"
mkdir -p $DISC
if [ ! -f $DISC/default.xex ] || [ ! -f $DISC/default_mp.xex ]; then
    [ -f "$ISO" ] || { echo "no ISO at $ISO, and no $DISC/default.xex + $DISC/default_mp.xex: set ISO=..."; exit 1; }
    python3 tools/xdvdfs.py "$ISO" $DISC default.xex default_mp.xex
fi

# Every fastfile on the disc, ~5.9 GB with the .pak archives beside them. A
# missing one is not a missing level: the title asks for the zone, is told the
# file is not there, reports a dirty disc and then falls over. Extracting the
# ones a particular map needs means knowing them in advance, which nothing does
# -- the multiplayer picks its own map. The Bink movies come too (~1.3 GB): the
# logos, and each level's briefing, which plays while it loads. Files already
# there are left alone.
mkdir -p mw2/game
if [ ! -f "$ISO" ]; then
    echo "    no ISO: building without the game data"
else
python3 - "$ISO" <<'EOF'
import os, sys
sys.path.insert(0, "tools")
from xdvdfs import XDvdFs
fs = XDvdFs(sys.argv[1])
have = set(os.listdir("mw2/game"))
missing = [(n, sec, size) for n, sec, size, attr, isdir in sorted(fs.walk())
           if not isdir and n.endswith((".ff", ".pak", ".bik")) and n not in have]
if missing:
    print("    extracting %d files, %.2f GB" % (len(missing), sum(s for _, _, s in missing) / 1e9))
for n, sec, size in missing:
    fs.extract(sec, size, os.path.join("mw2/game", n))
    print("    %s (%d bytes)" % (n, size))
EOF
fi
echo "    $(ls mw2/game | wc -l) files in mw2/game"

if [ "$VERSION" = tu6 ]; then
    echo "==> 3b. apply the title update"
    mkdir -p $UPDATE
    if [ ! -f $UPDATE/default.xexp ] || [ ! -f $UPDATE/default_mp.xexp ]; then
        [ -e "$TU" ] || { echo "no $UPDATE/default.xexp: set TU=<the update's package, or a folder with its files>"; exit 1; }
        if [ -d "$TU" ]; then cp "$TU"/*.xexp "$TU"/*.ff $UPDATE/; else python3 tools/stfs.py "$TU" $UPDATE >/dev/null; fi
    fi
    # XenonRecomp's own patcher, from the command line: XenonAnalyse reads the
    # patched executable before XenonRecomp would make it.
    if [ ! -x XenonRecomp/build/xexpatch ]; then
        clang++-18 -std=c++20 -O1 -IXenonRecomp/XenonUtils -IXenonRecomp/thirdparty/simde tools/xexpatch.cpp \
            XenonRecomp/build/XenonUtils/libXenonUtils.a XenonRecomp/build/thirdparty/disasm/libdisasm.a \
            -o XenonRecomp/build/xexpatch
    fi
    for x in default default_mp; do
        [ -f mw2/$x.xex ] || ./XenonRecomp/build/xexpatch $DISC/$x.xex $UPDATE/$x.xexp mw2/$x.xex
    done
    # The update's fastfiles go with the disc's.
    for f in $UPDATE/*.ff; do [ ! -e "$f" ] || [ -e "mw2/game/$(basename "$f")" ] || cp "$f" mw2/game/; done
    echo "    $(ls mw2/game | wc -l) files in mw2/game"
else
    # The disc's executables get a game folder without the update's fastfiles:
    # the disc's multiplayer would load a patch_mp.ff it found.
    mkdir -p $DISC/game
    for f in mw2/game/*; do
        name=$(basename "$f")
        [ ! -e "$f" ] || [ -e "$UPDATE/$name" ] || [ -e "$DISC/game/$name" ] || ln -s "../../game/$name" "$DISC/game/"
    done
    echo "    $(ls $DISC/game | wc -l) files in $DISC/game"
fi

echo "==> 4. decrypt/decompress XEX -> flat PE memory image (for analysis)"
[ -f $MW2/$PE ] || python3 tools/xexdump.py $MW2/$XEX $MW2/$PE

if [ "${REGENERATE:-1}" = 0 ] && [ -f $PPC/ppc_func_mapping.cpp ]; then
echo "==> 5-7. keeping the recompiled tree in $PPC/"
else
echo "==> 5. detect jump tables"
./XenonRecomp/build/XenonAnalyse/XenonAnalyse $MW2/$XEX $TABLES
echo "    tables: $(grep -c '^\[\[switch\]\]' $TABLES)"

echo "==> 6. recompile PPC -> C++"
rm -rf $PPC && mkdir -p $PPC
( cd config && ../XenonRecomp/build/XenonRecomp/XenonRecomp $TOML ../XenonRecomp/XenonUtils/ppc_context.h ) | tee /tmp/mw2_recomp.log | tail -1
echo "    unrecognized instructions: $(grep -c 'Unrecognized instruction' /tmp/mw2_recomp.log || true)"
echo "    switch-case errors:        $(grep -c 'trying to jump outside function' /tmp/mw2_recomp.log || true)"

echo "==> 7. generate declarations + kernel import stubs (into $PPC/)"
python3 tools/genshared.py
python3 tools/gen_kernel_stubs.py

fi

echo "==> 8. build the runtime + recompiled game"
# A second build directory reuses the sources the first one fetched.
FETCHED=""
if [ "$BUILD" != build ]; then
    [ -d build/_deps/sdl3-src ]       && FETCHED="$FETCHED -DFETCHCONTENT_SOURCE_DIR_SDL3=$ROOT/build/_deps/sdl3-src"
    [ -d build/_deps/ffmpeg_xma-src ] && FETCHED="$FETCHED -DFETCHCONTENT_SOURCE_DIR_FFMPEG_XMA=$ROOT/build/_deps/ffmpeg_xma-src"
    [ -d build/_deps/imgui-src ]      && FETCHED="$FETCHED -DFETCHCONTENT_SOURCE_DIR_IMGUI=$ROOT/build/_deps/imgui-src"
fi
cmake -B $BUILD -G Ninja -DCMAKE_BUILD_TYPE=Release -DMW2_TITLE=$TITLE -DMW2_VERSION=$VERSION -DMW2_DIAGNOSTICS=$DIAGNOSTICS -DMW2_ONLINE=${ONLINE:-none} -DMW2_PORTABLE=$PORTABLE -DMW2_RELEASE_TAG=${RELEASE_TAG:-} $FETCHED $CMAKE_EXTRA \
      $TOOLCHAIN >/dev/null
cmake --build $BUILD -j"$(nproc)"
ls -la $BUILD/$EXE

echo
echo "run it with:  ./$BUILD/$EXE $MW2/$PE $MW2/game"
