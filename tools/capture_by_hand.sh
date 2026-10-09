#!/bin/bash
# Play the game with a window, and press F10 to capture the frames on screen.
#
# The defects worth catching -- flashing, geometry that appears for an instant,
# particles that streak -- do not sit still for a capture taken at a time chosen
# in advance. This puts the trigger under a person's finger instead.
#
# RenderDoc has to be in the process before the Vulkan instance exists, so the
# game is launched under renderdoccmd; F10 then asks the copy already injected
# for the next four frames that draw the world.
#
# usage: tools/capture_by_hand.sh [map] [output-directory]
#   TITLE=sp (the default) plays the campaign, TITLE=mp the multiplayer -- which
#   also needs a network link reported, or it will not start a match.
#   Arrows = d-pad, Z = A, X = B, Enter = START. F10 captures four frames; F11
#   captures every frame until F11 again. Close the window to end the run,
#   which writes the reports.
set -u
TITLE="${TITLE:-sp}"
case "$TITLE" in
    sp) BUILD=build;    MAP_DEFAULT=trainer ;;
    mp) BUILD=build-mp; MAP_DEFAULT=mp_afghan; export MW2_NET_LINK=1 ;;
    *)  echo "TITLE must be sp or mp, not '$TITLE'" >&2; exit 1 ;;
esac
MAP="${1:-$MAP_DEFAULT}"
OUT="${2:-$PWD/captures}"
RD="${RENDERDOC:-/home/paul/git/renderdoc_1.46}"
ROOT="$(cd "$(dirname "$0")/.." && pwd)"

if [ ! -x "$RD/bin/renderdoccmd" ]; then
    echo "renderdoccmd not found under $RD -- set RENDERDOC=<renderdoc install>" >&2
    exit 1
fi

mkdir -p "$OUT"
export MW2_CONSOLE="1:map $MAP"
export MW2_RENDERDOC_OUT="$OUT/by_hand"
export LD_LIBRARY_PATH="$RD/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}"

echo "=============================================================="
echo " title:    $TITLE ($BUILD/mw2)"
echo " map:      $MAP"
echo " captures: $OUT"
echo " Press F10 when you see the defect, or F11 to start and stop"
echo " capturing every frame (for flicker). Close the window to finish."
echo " Watch this terminal: every F10 prints a line, and so does a"
echo " capture that could not be taken."
echo "=============================================================="
# The run's log goes to the terminal and to run.log beside the captures: the
# lines that explain a capture (resolves that moved, sizes that did not match)
# print during the run and at its end, and the terminal scrolls them away.
"$RD/bin/renderdoccmd" capture -w -d "$ROOT" -c "$MW2_RENDERDOC_OUT" "$ROOT/$BUILD/mw2" 2>&1 \
    | tee "$OUT/run.log"
echo
echo "log: $OUT/run.log"
echo "--- captures written -------------------------------------------"
ls -la "$OUT"/*.rdc 2>/dev/null || echo "  none. If F10 printed nothing at all, the key never reached the"
echo "  game -- click the game window first so it has focus."
