#!/usr/bin/env python3
"""Pull every compiled shader out of the game's fastfiles, as raw microcode.

A fastfile is an 'IWffu100' header followed by one zlib stream. Inside, compiled
shaders appear as Microsoft's Xbox 360 shader containers, tagged 0x102A1100 for
a pixel shader and 0x102A1101 for a vertex shader.

The container itself holds the constant table, the debug record and the shader's
name -- but not the program. D3D9's shader constructor (`sub_820B8B90`) shows
where that is: it copies `container[+0x04]` bytes of container into a new object,
then allocates `container[+0x08]` bytes and memcpys into it from *after* the
container. So the microcode is a separate blob whose length the container states,
lying just past it in the zone.

What sits between them is the rest of the IW4 asset: pointer placeholders and the
shader's name string. Those are variable-length, and the zone is a packed
serialisation stream with alignment only restored at load time -- a program can
start at any byte offset, not just a multiple of four. Rather than model the
asset struct, this searches forward from the container for a blob of exactly the
declared length that decodes as a program.

The search has to be strict in three ways at once, and dropping any one of them
does real damage. The length is known exactly; the decode has to succeed; and
every vertex fetch has to name a real vertex format. Without the last condition
the yield is only 51%, and about a third of what it finds is the *wrong* window
-- a blob that decodes but is not the program. Those windows are what once
produced 70 shaders apparently blocked on "vertex format 0", a format the
hardware does not define. With it, 99% of containers yield a program.

Compare the loose alternative: scanning a zone for anything that decodes as a
program, with no length constraint, finds one false positive every 36 KB of
texture data -- data containing no shaders at all.

Usage: extract_shaders.py <outdir> [fastfile ...]     (default: mw2/game/*.ff)
"""
import zlib, struct, sys, os, glob, hashlib

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from xenos_shader import decode_control_flow, plausible, EXEC_OPCODES
from xenos_isa import Alu, Fetch, VECTOR_OPCODES, SCALAR_OPCODES, FETCH_OPCODES

# Every vertex format the hardware defines. A full vertex fetch always names one
# of these; Xenia treats kUndefined (0) as an unhandled case, so a program whose
# fetches claim it is not a program -- it is a window that happened to pass the
# structural checks. Requiring this costs about half the yield and is worth it:
# a corpus containing wrong blobs produces confidently wrong coverage numbers.
VERTEX_FORMATS = {6, 7, 16, 17, 25, 26, 31, 32, 33, 34, 35, 36, 37, 38, 57}

# The tag tells vertex from pixel; the constant table inside confirms it, and it
# is the opposite way round from what the numbering suggests.
MAGIC = {0x102A1100: "pixel", 0x102A1101: "vertex"}
TAG_PREFIX = b"\x10\x2a\x11"

MAX_REG = 64            # temporaries a real program uses; the field holds 8 bits
MAX_CONTAINER = 0x20000
SEARCH_LIMIT = 0x10000  # how far past a container its program may lie


def zone(path):
    data = open(path, "rb").read()
    start = data.find(b"\x78\xda")
    if start < 0:
        return b""
    try:
        return zlib.decompressobj().decompress(data[start:])
    except zlib.error as e:
        print(f"  {os.path.basename(path)}: {e}", file=sys.stderr)
        return b""


def sane_alu(op):
    """An ALU instruction a real program could contain."""
    if op.vector_opcode not in VECTOR_OPCODES: return False
    if op.scalar_opcode not in SCALAR_OPCODES: return False
    for i in (1, 2, 3):
        if op.src_is_temp(i) and op.src_reg(i) >= MAX_REG: return False
    if not op.is_export and (op.vector_dest >= MAX_REG or op.scalar_dest >= MAX_REG):
        return False
    return True


def sane_fetch(words):
    """A fetch instruction a real program could contain."""
    op = Fetch(*words)
    if op.opcode not in FETCH_OPCODES: return False
    if op.opcode != 0: return True                      # only vfetch has a format
    if (words[1] >> 30) & 1: return True                # a mini fetch carries none
    return ((words[1] >> 16) & 0x3F) in VERTEX_FORMATS


def decodes(code):
    """True if `code` is exactly one well-formed program.

    Control flow alone proves little -- every 4-bit opcode is defined -- so the
    instructions the control flow points at are decoded too, and every opcode,
    register and vertex format in them has to be one a real program could name.
    """
    if len(code) < 12 or len(code) % 4:
        return False
    words = list(struct.unpack_from(f">{len(code)//4}I", code, 0))
    flow, terminated = decode_control_flow(words)
    if not plausible(flow, terminated):
        return False
    for cf in flow:
        if cf.opcode not in EXEC_OPCODES: continue
        for n in range(cf.count):
            index = cf.address + n
            if (index + 1) * 3 > len(words): return False
            d = words[index * 3: index * 3 + 3]
            ok = sane_fetch(d) if cf.is_fetch(n) else sane_alu(Alu(*d))
            if not ok: return False
    return True


def containers(raw):
    """Every plausible container header in a zone, in order."""
    found, off = [], 0
    while True:
        i = raw.find(TAG_PREFIX, off)
        if i < 0:
            return found
        off = i + 1
        if i + 12 > len(raw):
            continue
        tag, size, program = struct.unpack_from(">3I", raw, i)
        if tag not in MAGIC or not (32 <= size <= MAX_CONTAINER) or i + size > len(raw):
            continue
        if not (12 <= program <= MAX_CONTAINER) or program % 4:
            continue
        found.append((i, tag, size, program))


def program_for(raw, start, length, stop):
    """The program of exactly `length` bytes lying between `start` and `stop`."""
    for p in range(start, min(stop, len(raw) - length)):
        code = raw[p:p + length]
        if decodes(code):
            return code
    return None


def main():
    outdir = sys.argv[1] if len(sys.argv) > 1 else "out/shaders"
    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    files = sys.argv[2:] or sorted(glob.glob(os.path.join(root, "mw2/game/*.ff")))
    os.makedirs(outdir, exist_ok=True)

    seen, counts, scanned, recovered = set(), {"vertex": 0, "pixel": 0}, 0, 0
    for path in files:
        raw = zone(path)
        if not raw:
            continue
        spots = containers(raw)
        hits = 0
        for k, (i, tag, size, length) in enumerate(spots):
            # A program lies between its own container and the next one.
            nxt = spots[k + 1][0] if k + 1 < len(spots) else len(raw)
            code = program_for(raw, i + size, length, min(nxt, i + size + SEARCH_LIMIT))
            if code is None:
                continue
            hits += 1
            digest = hashlib.sha1(code).hexdigest()[:16]
            if digest in seen:
                continue
            seen.add(digest)
            counts[MAGIC[tag]] += 1
            open(os.path.join(outdir, f"{MAGIC[tag]}_{digest}.ucode"), "wb").write(code)
        scanned += len(spots)
        recovered += hits
        print(f"{os.path.basename(path):28} {len(raw)//1024:7} KB zone, "
              f"{len(spots):5} containers, {hits:5} programs")

    print(f"\n{recovered} of {scanned} containers yielded a program "
          f"({100 * recovered // max(scanned, 1)}%)")
    print(f"{len(seen)} distinct -> {outdir}  "
          f"({counts['vertex']} vertex, {counts['pixel']} pixel)")


if __name__ == "__main__":
    main()
