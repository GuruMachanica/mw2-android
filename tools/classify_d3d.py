#!/usr/bin/env python3
"""Classify each D3D9 entry point by what it actually touches.

The census says how often the engine calls something and with what shape of
arguments. This says what the callee does with them: which device fields it
reads and writes, whether it appends to the command buffer, which PM4 opcodes
it builds, whether it reaches a GPU register or a Vd* import. Together those
narrow most entry points to one plausible D3D9 method.

Usage: classify_d3d.py [address]
"""
import struct, sys, os, runpy

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
region = runpy.run_path(os.path.join(ROOT, "tools/d3d_region.py"), run_name="not_main")
SIZE, entries, members, IMPORTS = region["SIZE"], region["entries"], region["members"], region["IMPORTS"]
callees = region["callees"]
img = region["img"]
BASE = 0x82000000
def w(a): return struct.unpack_from(">I", img, a - BASE)[0]

CMDBUF = {13520: "cmdbuf.base", 13524: "cmdbuf.cursor", 13528: "cmdbuf.end"}
STATE_BLOCK = 10548          # the packed render-state shadow
DIRTY_MASK = 16              # the 64-bit "what changed" mask at device+16

LOADS  = {32: "lwz", 34: "lbz", 40: "lhz", 42: "lha", 58: "ld"}
STORES = {36: "stw", 38: "stb", 44: "sth", 62: "std"}

PM4_NAMES = {
    0x10: "NOP", 0x21: "REG_RMW", 0x22: "DRAW_INDX", 0x26: "WAIT_FOR_IDLE",
    0x27: "IM_LOAD", 0x2B: "IM_LOAD_IMMEDIATE", 0x2D: "SET_CONSTANT",
    0x36: "DRAW_INDX_2", 0x3B: "INVALIDATE_STATE", 0x3C: "WAIT_REG_MEM",
    0x3D: "MEM_WRITE", 0x3E: "REG_TO_MEM", 0x3F: "INDIRECT_BUFFER",
    0x45: "COND_WRITE", 0x46: "EVENT_WRITE", 0x54: "INTERRUPT",
    0x58: "EVENT_WRITE_SHD", 0x60: "SET_BIN_MASK_LO", 0x62: "SET_BIN_SELECT_LO",
}

def analyse(f, size, follow=True):
    """What one function touches, optionally including its private callees."""
    out = {"deviceLoads": set(), "deviceStores": set(), "cmdbuf": set(),
           "pm4": set(), "registers": set(), "imports": set(),
           "args": set(), "dirtyMask": False, "atomic": False}
    if not size: size = 0x80

    # r3 is the device by convention; track plain copies of it.
    deviceRegs = {3}
    written = set()
    for a in range(f, f + size, 4):
        try: x = w(a)
        except Exception: break
        op, rD, rA = x >> 26, (x >> 21) & 31, (x >> 16) & 31
        d = x & 0xFFFF
        signed = d - 0x10000 if d & 0x8000 else d

        # Which incoming argument registers are read before being written.
        for r in (rD if op in STORES else None, rA):
            if r is not None and 3 <= r <= 10 and r not in written:
                out["args"].add(r)

        if op == 31:
            sub = (x >> 1) & 0x3FF
            if sub == 444 and rD != rA:              # mr rA, rS  (or rD,rS,rS)
                rS = (x >> 21) & 31
                if rS in deviceRegs: deviceRegs.add(rA)
                else: deviceRegs.discard(rA)
                written.add(rA)
            if sub in (20, 150, 30):                  # lwarx / stwcx. / ldarx
                out["atomic"] = True
            continue

        if op in LOADS or op in STORES:
            if rA in deviceRegs:
                (out["deviceLoads"] if op in LOADS else out["deviceStores"]).add(signed)
                if signed in CMDBUF: out["cmdbuf"].add(CMDBUF[signed])
                if signed == DIRTY_MASK and op in STORES: out["dirtyMask"] = True
            if op in LOADS: written.add(rD)
            continue

        if op == 15:                                   # lis
            if d == 0x7FC8: out["registers"].add("aperture")
            written.add(rD)
        elif op == 14:                                 # addi
            if rA in deviceRegs: deviceRegs.add(rD)
            else: deviceRegs.discard(rD)
            written.add(rD)
        elif op in (24, 25, 26, 27, 28, 29):           # ori/oris/xori/andi
            if (d >> 8) in PM4_NAMES and (d & 0xFF) == 0: out["pm4"].add(PM4_NAMES[d >> 8])
            written.add(rA)
        elif op == 18 and (x & 1):                     # bl
            t = (a + (signed if False else ((x & 0x03FFFFFC) - 0x04000000 if (x & 0x02000000) else (x & 0x03FFFFFC)))) & 0xFFFFFFFF
            if t in IMPORTS: out["imports"].add(IMPORTS[t])
            elif follow and t in members and t != f:
                inner = analyse(t, SIZE.get(t, 0), follow=False)
                for k in ("deviceLoads", "deviceStores", "cmdbuf", "pm4", "registers", "imports"):
                    out[k] |= inner[k]
                out["dirtyMask"] |= inner["dirtyMask"]
    return out

def verdict(a, info):
    size = SIZE.get(a, 0)
    # The device structure is ~24 KB, so a function that only ever touches small
    # offsets is working on some other object handed to it in r3 -- a resource, a
    # query -- and its "device" offsets should not be read as device fields.
    touched = info["deviceLoads"] | info["deviceStores"]
    info["onDevice"] = any(o > 4096 for o in touched)
    if touched and not info["onDevice"]: return "operates on an object, not the device"
    if any(n.startswith("DRAW") for n in info["pm4"]): return "draw"
    if info["imports"]: return "kernel/display (" + ",".join(sorted(info["imports"])) + ")"
    if info["registers"]: return "GPU register access"
    if info["cmdbuf"]: return "command buffer append"
    if info["dirtyMask"] and size <= 128: return "render state setter"
    if info["dirtyMask"]: return "state setter (compound)"
    if info["deviceStores"] and not info["deviceLoads"]: return "device field write"
    if info["deviceLoads"] and not info["deviceStores"]: return "device field read"
    if info["atomic"]: return "synchronisation"
    return "unclassified"

if __name__ == "__main__":
    targets = [int(sys.argv[1], 16)] if len(sys.argv) > 1 else sorted(entries)
    for a in targets:
        info = analyse(a, SIZE.get(a, 0))
        print(f"sub_{a:08X}  size {SIZE.get(a,0):5}  args r3..r{max(info['args']) if info['args'] else 3}  "
              f"{verdict(a, info)}")
        if info["deviceStores"]:
            print("    writes device+" + ", +".join(str(x) for x in sorted(info["deviceStores"])[:12]))
        if info["deviceLoads"]:
            print("    reads  device+" + ", +".join(str(x) for x in sorted(info["deviceLoads"])[:12]))
        if info["pm4"]:      print("    packets " + ", ".join(sorted(info["pm4"])))
        if info["imports"]:  print("    imports " + ", ".join(sorted(info["imports"])))
