#!/bin/bash
# rd_run.sh <script.py> <out.txt> <capture.rdc> [extra args...]
#
# Runs a RenderDoc analysis script and GUARANTEES no qrenderdoc window is left on
# the desktop. qrenderdoc --python runs the script inside a live Qt application:
# when the script returns the event loop carries on and the window stays. So the
# script is never trusted to exit -- it is run through a shim whose `finally`
# calls os._exit(0), a watchdog shoves any window that maps off-screen, and the
# process is killed on the way out regardless.
set -u
RD=${RD:-$HOME/git/renderdoc_1.46}
SCRIPT=$1; OUT=$2; shift 2

SHIM=$(mktemp /tmp/rd_shim_XXXXXX.py)
cat > "$SHIM" <<PY
import os, sys, traceback
sys.argv = ["$SCRIPT"] + $(python3 -c "import sys,json;print(json.dumps(sys.argv[1:]))" "$@")
_out = open("$OUT", "w", buffering=1)
class _Tee:
    def __init__(s, *f): s.f = f
    def write(s, t):
        for x in s.f:
            try: x.write(t); x.flush()
            except Exception: pass
    def flush(s):
        for x in s.f:
            try: x.flush()
            except Exception: pass
sys.stdout = sys.stderr = _Tee(_out)
try:
    exec(compile(open("$SCRIPT").read(), "$SCRIPT", "exec"), {"__name__": "__main__"})
except Exception:
    traceback.print_exc()
finally:
    try: _out.flush(); _out.close()
    except Exception: pass
    os._exit(0)
PY

# Shove any qrenderdoc window off-screen the instant it maps.
( for _ in $(seq 1 200); do
    for w in $(xdotool search --class qrenderdoc 2>/dev/null); do
        xdotool windowminimize "$w" 2>/dev/null
        xdotool windowmove "$w" -4000 -4000 2>/dev/null
    done
    sleep 0.05
  done ) &
WATCH=$!

LD_LIBRARY_PATH=$RD/lib timeout 300 "$RD/bin/qrenderdoc" --python "$SHIM" >/dev/null 2>&1
RC=$?
kill $WATCH 2>/dev/null
pkill -x qrenderdoc 2>/dev/null
rm -f "$SHIM"
exit $RC
