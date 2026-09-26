#!/usr/bin/env bash
# Play mp_afghan and press Y on the pad (or F7) whenever something flashes.
#
#     tools/flash_hunt.sh [--magenta] [--no-frames] [--frames N] [--map NAME]
#
# The terminal shows only what can be matched with a flash: each texture drawn
# with nothing in it that reached the screen, and each F7, all with the seconds
# since start. Everything else goes to the full log beside it, for later.
#
# Y on the pad is taken by the hunt and does not reach the game, so it does
# not switch weapon while you play.
#
# A mark also writes the frames before it (40 by default, about two seconds) as
# pictures, so the flash itself can be looked at, not only described.
#
#   --magenta    paint textures drawn from nothing magenta instead of black
#                (MW2_MARK_EMPTY): a magenta flash is one the log explains, a
#                black one or a change of shade is something else
#   --no-frames  keep no frames. Keeping them reads every frame back, which
#                slows the game a little and could change how often it flashes
#   --frames N   how many frames to keep before each F7
#   --map NAME   another map than mp_afghan
#   --no-shadow  turn off the write watch and the shadow of guest memory
#                (MW2_NO_SHADOW): if a flash still happens without them, they
#                are not its cause
#
# Output: diagnosis/hunt/<date-time>/ -- full.log, texture.log (what the
# terminal showed), mark_NN/ (pictures, and every draw of each kept frame),
# report.txt. `tools/flash_draws.py <mark dir> <frame>` then says which draw
# differed in the frame that flashed.
set -u
cd "$(dirname "$0")/.."

frames=40
map=mp_afghan
magenta=
noshadow=
while [ $# -gt 0 ]; do
    case "$1" in
        --magenta)   magenta=1 ;;
        --no-frames) frames=0 ;;
        --frames)    frames="$2"; shift ;;
        --map)       map="$2"; shift ;;
        --no-shadow) noshadow=1 ;;
        *) echo "usage: $0 [--magenta] [--no-frames] [--frames N] [--map NAME] [--no-shadow]" >&2; exit 2 ;;
    esac
    shift
done

if pgrep -x mw2 >/dev/null; then
    echo "mw2 is already running; close it first" >&2
    exit 1
fi
[ -x build-mp/mw2 ] || { echo "build it first: TITLE=mp ./build.sh" >&2; exit 1; }

out="diagnosis/hunt/$(date +%Y%m%d-%H%M%S)"
mkdir -p "$out"
: > "$out/full.log"

echo "log and pictures: $out"
echo "Y on the pad (or F7) = I saw a flash; Y does not switch weapon in a hunt."
echo "F8 = fullscreen.   Close the window to finish."
[ -n "$magenta" ] && echo "empty textures are painted MAGENTA"
[ "$frames" = 0 ] && echo "no frames kept (--no-frames)"
[ -n "$noshadow" ] && echo "no shadow of guest memory (--no-shadow)"
echo

env MW2_WINDOW=1 MW2_NET_LINK=1 MW2_CONSOLE="3:map $map" \
    MW2_LOG_TIME=1 MW2_FLASH_HUNT=1 \
    MW2_FLASH_FRAMES="$frames" MW2_FLASH_DIR="$out" \
    ${magenta:+MW2_MARK_EMPTY=1} \
    ${noshadow:+MW2_NO_SHADOW=1} \
    MW2_LOG_FILE="$out/full.log" \
    ./build-mp/mw2 mw2/default_mp.pe mw2/game &
game=$!

# What a flash can be matched with, as it is written.
tail --pid="$game" -n +1 -F "$out/full.log" 2>/dev/null |
    /usr/bin/grep --line-buffered -E 'still empty at submit|FLASH MARK|\[E\]|exiting' |
    tee "$out/texture.log" &
filter=$!

wait "$game"
status=$?
wait "$filter" 2>/dev/null

# Frames are written off the render thread; give the last ones a moment.
sleep 2
python3 tools/flash_hunt_report.py "$out" | tee "$out/report.txt"
echo
echo "game exited with $status; everything is in $out"
