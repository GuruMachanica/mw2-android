#!/bin/bash
# rd_thumbs.sh [capture-dir-or-files...] [-o out-dir]
#
# Pulls the frame out of every RenderDoc capture as a PNG, without replaying
# anything: RenderDoc stores a full-size (1280x720) picture of the frame in the
# .rdc when it writes it, and `renderdoccmd thumb` reads it back in a fraction
# of a second. A stream of F11 captures is a hundred files; this is how the one
# where the shadows flicker is found without opening them one by one.
#
# The picture is what the window showed while the capture ran, and the window
# runs a frame behind the renderer: the picture in capture N is the frame
# rendered in capture N-1 (capture N presents the image N-1 rendered into). So
# when capture 97's picture is the bad one, the draws that made it are in 96.
#
# usage: tools/rd_thumbs.sh                     # every .rdc under ./captures
#        tools/rd_thumbs.sh diagnosis           # every .rdc under a folder
#        tools/rd_thumbs.sh a.rdc b.rdc -o pngs # given files, chosen output
# Output defaults to <folder>/png/<capture>.png. A PNG newer than its capture
# is kept. Also writes contact.jpg (python3 + PIL): every frame in capture
# order, numbered and labelled, so a flicker shows as one tile unlike its
# neighbours.
set -u
RD="${RENDERDOC:-/home/paul/git/renderdoc_1.46}"
ROOT="$(cd "$(dirname "$0")/.." && pwd)"

OUT=""
INPUTS=()
while [ $# -gt 0 ]; do
    case "$1" in
        -o) OUT="$2"; shift 2 ;;
        *)  INPUTS+=("$1"); shift ;;
    esac
done
[ ${#INPUTS[@]} -eq 0 ] && INPUTS=("$ROOT/captures")

if [ ! -x "$RD/bin/renderdoccmd" ]; then
    echo "renderdoccmd not found under $RD -- set RENDERDOC=<renderdoc install>" >&2
    exit 1
fi

FILES=()
for i in "${INPUTS[@]}"; do
    if [ -d "$i" ]; then
        [ -z "$OUT" ] && OUT="$i/png"
        while IFS= read -r f; do FILES+=("$f"); done < <(find "$i" -maxdepth 1 -name '*.rdc')
    elif [ -f "$i" ]; then
        [ -z "$OUT" ] && OUT="$(dirname "$i")/png"
        FILES+=("$i")
    else
        echo "no such file or folder: $i" >&2
    fi
done
[ ${#FILES[@]} -eq 0 ] && { echo "no .rdc files found" >&2; exit 1; }

# Capture order, not name order: by_hand_capture_10 sorts before _2 by name.
# RenderDoc numbers the files it writes in order, and F12's by_hand_frameN is
# the frame count, so a version sort on the name is the order they were taken.
mapfile -t FILES < <(printf '%s\n' "${FILES[@]}" | sort -V)

mkdir -p "$OUT"
made=0; kept=0; failed=0
PNGS=()
for f in "${FILES[@]}"; do
    png="$OUT/$(basename "${f%.rdc}").png"
    PNGS+=("$png")
    if [ "$png" -nt "$f" ]; then kept=$((kept + 1)); continue; fi
    if LD_LIBRARY_PATH="$RD/lib" "$RD/bin/renderdoccmd" thumb -o "$png" "$f" >/dev/null 2>&1 \
        && [ -s "$png" ]; then
        made=$((made + 1))
    else
        echo "  no picture in $f" >&2
        rm -f "$png"
        failed=$((failed + 1))
    fi
done
echo "$made written, $kept already there, $failed without a picture -> $OUT"

have=()
for p in "${PNGS[@]}"; do [ -s "$p" ] && have+=("$p"); done
if [ ${#have[@]} -gt 1 ]; then
    python3 - "$OUT/contact.jpg" "${have[@]}" <<'PY' || echo "no contact sheet (needs python3 with PIL)" >&2
import os, sys
from PIL import Image, ImageDraw
out, files = sys.argv[1], sys.argv[2:]
W, H, PAD, LABEL, COLS = 426, 240, 4, 18, 5
rows = (len(files) + COLS - 1) // COLS
sheet = Image.new("RGB", (COLS * (W + PAD) + PAD, rows * (H + LABEL + PAD) + PAD), (24, 24, 24))
draw = ImageDraw.Draw(sheet)
for i, f in enumerate(files):
    x = PAD + (i % COLS) * (W + PAD)
    y = PAD + (i // COLS) * (H + LABEL + PAD)
    sheet.paste(Image.open(f).convert("RGB").resize((W, H), Image.LANCZOS), (x, y + LABEL))
    draw.text((x + 2, y + 3), "%d  %s" % (i + 1, os.path.splitext(os.path.basename(f))[0]),
              fill=(230, 230, 230))
sheet.save(out, quality=90)
print("contact sheet: %s (%d frames)" % (out, len(files)))
PY
fi
