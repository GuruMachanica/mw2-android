#!/usr/bin/env python3
"""Delimit MW2's statically linked D3D9 and list the calls the engine makes into it.

The library has no symbols, so it is identified by what only it does: touch the
command-buffer cursor in the device, build PM4 packets, call the Vd* kernel
imports, or reach the memory-mapped GPU registers. Those seeds are then grown
over private helpers -- functions every one of whose callers is already a member
-- which pulls in the library's internals without dragging in shared CRT code.

Usage: d3d_region.py [--entries | --members | --toml]
"""
import struct, bisect, sys, re, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import title

ROOT = title.ROOT
img = title.image()
BASE = title.BASE
TVA, TSZ = title.text(img)
def w(a): return struct.unpack_from(">I", img, a - BASE)[0]

# ---- functions, from .pdata -------------------------------------------------
FUNCS = sorted(title.functions(img).items())
FS = [f[0] for f in FUNCS]
SIZE = dict(FUNCS)
def owner(a):
    i = bisect.bisect_right(FS, a) - 1
    return FUNCS[i][0] if i >= 0 and FUNCS[i][0] <= a < FUNCS[i][0] + FUNCS[i][1] else None

# ---- call graph -------------------------------------------------------------
callers, callees = {}, {}
for a in range(TVA, TVA + TSZ, 4):
    x = w(a)
    if (x >> 26) != 18 or not (x & 1) or (x & 2): continue
    d = x & 0x03FFFFFC
    if d & 0x02000000: d -= 0x04000000
    t, c = (a + d) & 0xFFFFFFFF, owner(a)
    if c is None: continue
    callers.setdefault(t, set()).add(c)
    callees.setdefault(c, set()).add(t)

# ---- import stubs, by name --------------------------------------------------
mapping = title.ppc("ppc_func_mapping.cpp")
IMPORTS = {}
if os.path.exists(mapping):
    for m in re.finditer(r'\{ (0x[0-9A-F]+), __imp__(\w+) \}', open(mapping).read()):
        IMPORTS[int(m.group(1), 16)] = m.group(2)

# ---- seeds ------------------------------------------------------------------
CMDBUF_OFFSETS = {13520, 13524, 13528}          # command buffer base/cursor/end
PM4_OPCODES = {0x22, 0x36, 0x3F, 0x2D, 0x2B, 0x27, 0x46, 0x58, 0x3B}
APERTURE = 0x7FC8

seeds = set()
for a in range(TVA, TVA + TSZ, 4):
    x, f = w(a), owner(a)
    if f is None: continue
    op, d = x >> 26, x & 0xFFFF
    if op in (32, 36) and d in CMDBUF_OFFSETS: seeds.add(f)          # lwz/stw cursor
    elif op == 15 and d == APERTURE: seeds.add(f)                    # lis rX, 0x7FC8
    elif op in (14, 15, 24, 25) and (d >> 8) in PM4_OPCODES and (d & 0xFF) == 0:
        seeds.add(f)                                                 # a PM4 opcode literal
for stub, name in IMPORTS.items():
    if name.startswith("Vd"):
        seeds |= callers.get(stub, set())

# ---- span ------------------------------------------------------------------
# MSVC lays a static library out contiguously, so the seeds bracket the whole of
# it -- including the leaf state setters, which touch neither the command buffer
# nor a GPU register and so seed nothing themselves. Seeds landing far outside
# the main cluster are reported rather than silently widening the span.
# Seeds cluster tightly inside the library and thin out into stray false
# positives elsewhere -- an engine function whose immediate happens to look like
# a PM4 opcode. Split on the gaps and keep the densest run.
GAP = 0x8000
ordered = sorted(seeds)
clusters, run = [], [ordered[0]]
for f in ordered[1:]:
    if f - run[-1] > GAP: clusters.append(run); run = []
    run.append(f)
clusters.append(run)
best = max(clusters, key=len)
LO = best[0]
HI = best[-1] + SIZE.get(best[-1], 0)
OUTLIERS = sorted(f for f in seeds if not (LO <= f < HI))

# .pdata omits leaf functions, and the library's render-state setters are all
# leaves -- exactly the calls the engine makes most. Take every branch target in
# the span as a function start too, and size the ones .pdata does not cover from
# the gap to the next start.
STARTS = sorted({f for f, _ in FUNCS} | {t for t in callers if t not in IMPORTS and TVA <= t < TVA + TSZ})
for i, f in enumerate(STARTS):
    if f not in SIZE:
        SIZE[f] = (STARTS[i + 1] - f) if i + 1 < len(STARTS) else 0
members = {f for f in STARTS if LO <= f < HI}

entries = {}
for t, cs in callers.items():
    if t not in members: continue
    outside = sorted(c for c in cs if c not in members)
    if outside: entries[t] = outside

if __name__ == "__main__":
    mode = sys.argv[1] if len(sys.argv) > 1 else "--summary"
    if mode == "--members":
        for f in sorted(members): print(f"0x{f:08X} {SIZE.get(f,0)}")
    elif mode == "--entries":
        for f in sorted(entries): print(f"0x{f:08X} {SIZE.get(f,0)} {len(entries[f])}")
    else:
        code = sum(SIZE.get(f, 0) for f in members)
        print(f"D3D9 library: {LO:08X}..{HI:08X}, {len(members)} functions, {code} bytes")
        print(f"seeds: {len(seeds)} inside, {len(OUTLIERS)} outside the span " +
              (" ".join(f"0x{f:08X}" for f in OUTLIERS) if OUTLIERS else ""))
        print(f"entry points called from outside: {len(entries)}")
        print(f"distinct engine call sites into it: {sum(len(v) for v in entries.values())}")
        buckets = {"<=64B": 0, "<=256B": 0, "<=1KB": 0, ">1KB": 0}
        for f in entries:
            s = SIZE.get(f, 0)
            buckets["<=64B" if s <= 64 else "<=256B" if s <= 256 else "<=1KB" if s <= 1024 else ">1KB"] += 1
        for k, v in buckets.items(): print(f"  {k:8} {v}")
