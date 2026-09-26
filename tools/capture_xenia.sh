#!/bin/bash
# Play the game in Xenia, and press F12 (or Print Screen) to capture a frame.
#
# The reference half of a comparison: a capture of what Xenia draws at the
# moment our own renderer gets wrong, taken the same way capture_by_hand.sh
# takes ours.
#
# The Xenia AppImage cannot be captured as it is. It is a launcher around a
# compressed filesystem, and RenderDoc attaches to the launcher, not to Xenia.
# So the filesystem is unpacked once, into $XENIA_DIR, and the Xenia binary
# inside it is launched under renderdoccmd directly. Xenia itself only notices
# that RenderDoc is already loaded; the capture key belongs to RenderDoc.
#
# usage: tools/capture_xenia.sh [iso] [output-directory]
#   F12 or Print Screen captures; RenderDoc's overlay in the corner of the
#   window says so. Close the window to finish.
set -u
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
ISO="${1:-/home/paul/Téléchargements/Call of Duty - Modern Warfare 2 (USA, Europe).iso}"
OUT="${2:-$ROOT/captures}"
RD="${RENDERDOC:-/home/paul/git/renderdoc_1.46}"
APPIMAGE="${XENIA_APPIMAGE:-/home/paul/Téléchargements/xenia_canary_linux.AppImage}"
XENIA_DIR="${XENIA_DIR:-$HOME/xenia-rd/xenia}"
XENIA="$XENIA_DIR/usr/bin/xenia_canary"

if [ ! -x "$RD/bin/renderdoccmd" ]; then
    echo "renderdoccmd not found under $RD -- set RENDERDOC=<renderdoc install>" >&2
    exit 1
fi
if [ ! -f "$ISO" ]; then
    echo "no ISO at $ISO -- pass its path as the first argument" >&2
    exit 1
fi

# Unpack the AppImage the first time. Its squashfs starts where the ELF runtime
# in front of it ends: the section header table is the last thing in that ELF.
if [ ! -x "$XENIA" ]; then
    if [ ! -f "$APPIMAGE" ]; then
        echo "no Xenia at $XENIA and no AppImage at $APPIMAGE -- set XENIA_APPIMAGE" >&2
        exit 1
    fi
    OFFSET=$(python3 - "$APPIMAGE" <<'PY'
import struct, sys
with open(sys.argv[1], 'rb') as f:
    h = f.read(64)
shoff = struct.unpack_from('<Q', h, 0x28)[0]
shentsize, shnum = struct.unpack_from('<HH', h, 0x3A)
print(shoff + shentsize * shnum)
PY
)
    echo "unpacking $APPIMAGE (squashfs at $OFFSET) into $XENIA_DIR"
    mkdir -p "$(dirname "$XENIA_DIR")"
    rm -rf "$XENIA_DIR"
    if ! unsquashfs -q -o "$OFFSET" -d "$XENIA_DIR" "$APPIMAGE" >/dev/null; then
        echo "unsquashfs failed" >&2
        exit 1
    fi
fi

mkdir -p "$OUT"
# Only RenderDoc's own libraries go on the path. The Xenia binary finds the ones
# the AppImage bundled by itself -- its RUNPATH is $ORIGIN/../lib -- and putting
# them on LD_LIBRARY_PATH as well would hand them to renderdoccmd too.
export LD_LIBRARY_PATH="$RD/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}"

echo "=============================================================="
echo " xenia:    $XENIA"
echo " iso:      $ISO"
echo " captures: $OUT/xenia_*.rdc"
echo " Keep Xenia on its Vulkan backend. Press F12 or Print Screen"
echo " when the frame you want is on screen; RenderDoc's overlay in"
echo " the corner shows it is attached. Close the window to finish."
echo "=============================================================="
"$RD/bin/renderdoccmd" capture -w -d "$XENIA_DIR" -c "$OUT/xenia" "$XENIA" "$ISO"
echo
echo "--- captures written -------------------------------------------"
ls -la "$OUT"/xenia*.rdc 2>/dev/null || echo "  none. If there was no RenderDoc overlay in the window, RenderDoc"
echo "  did not attach -- send the output above."
