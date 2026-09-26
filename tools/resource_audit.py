#!/usr/bin/env python3
"""Does the engine reach inside D3D9's objects, or only pass them around?

This decides how deep a replacement backend has to go. If the engine only ever
hands an opaque pointer back to the library, a hook can keep its own object in a
side table and never care what the guest struct looks like. If the engine reads
or writes fields of it, the struct layout is part of the contract and the
original code has to keep building it.

For every engine call site into an entry point that takes an object rather than
the device, this finds which register held that argument, then looks for the
engine dereferencing the same pointer in the same function.
"""
import struct, os, runpy, bisect, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
region = runpy.run_path(os.path.join(ROOT, "tools/d3d_region.py"), run_name="not_main")
classify = runpy.run_path(os.path.join(ROOT, "tools/classify_d3d.py"), run_name="not_main")
SIZE, entries, members = region["SIZE"], region["entries"], region["members"]
FUNCS = region["FUNCS"]
FS = [f for f, _ in FUNCS]
img = region["img"]
BASE = 0x82000000
def w(a): return struct.unpack_from(">I", img, a - BASE)[0]

def owner(a):
    i = bisect.bisect_right(FS, a) - 1
    return FUNCS[i][0] if i >= 0 and FUNCS[i][0] <= a < FUNCS[i][0] + FUNCS[i][1] else None

LOADS  = {32, 34, 40, 42, 58}
STORES = {36, 38, 44, 62}

def trace_argument(caller, size, callSite):
    """Walk back from the call to find where r3 came from, then forward to see
    whether the caller dereferences the same value itself."""
    # Which register was moved into r3, and where that register came from.
    source = None
    for a in range(callSite - 4, max(caller, callSite - 0x100), -4):
        x = w(a)
        if (x >> 26) == 31 and ((x >> 1) & 0x3FF) == 444 and ((x >> 16) & 31) == 3:
            source = (x >> 21) & 31          # mr r3, rS
            break
        if (x >> 26) == 32 and ((x >> 21) & 31) == 3:
            return ("loaded from memory", None)   # r3 = [something], engine holds a pointer to it
        if (x >> 26) == 14 and ((x >> 21) & 31) == 3:
            return ("computed with addi", None)
    if source is None:
        return ("unknown", None)

    offsets = set()
    for a in range(caller, caller + size, 4):
        x = w(a)
        op, rA = x >> 26, (x >> 16) & 31
        if op in LOADS or op in STORES:
            if rA == source:
                d = x & 0xFFFF
                offsets.add(d - 0x10000 if d & 0x8000 else d)
    return ("dereferenced" if offsets else "opaque", sorted(offsets))

objectTaking = []
for a in sorted(entries):
    info = classify["analyse"](a, SIZE.get(a, 0))
    classify["verdict"](a, info)
    if info.get("onDevice") is False and (info["deviceLoads"] or info["deviceStores"]):
        objectTaking.append(a)

print(f"{len(objectTaking)} entry points take an object rather than the device\n")
opaque = derefd = 0
for a in objectTaking:
    engineSites = [(s, owner(s)) for s in
                   [site for c in entries[a] for site in [c]] ] if False else []
    sites = []
    for c in entries[a]:
        if c in members: continue
        sites.append(c)
    if not sites: continue
    print(f"sub_{a:08X}  size {SIZE.get(a,0)}")
    for c in sites:
        # find the call instruction inside the caller
        size = SIZE.get(c, 0) or 0x200
        for p in range(c, c + size, 4):
            x = w(p)
            if (x >> 26) == 18 and (x & 1) and not (x & 2):
                d = x & 0x03FFFFFC
                if d & 0x02000000: d -= 0x04000000
                if ((p + d) & 0xFFFFFFFF) != a: continue
                verdict, offs = trace_argument(c, size, p)
                if verdict == "dereferenced": derefd += 1
                elif verdict == "opaque": opaque += 1
                extra = ("  fields " + ", ".join(f"+{o}" for o in offs[:8])) if offs else ""
                print(f"    sub_{c:08X} passes it {verdict}{extra}")
    print()

print(f"summary: {opaque} call sites pass the object opaquely, "
      f"{derefd} also dereference it in the same function")
