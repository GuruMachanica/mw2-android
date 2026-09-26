#!/usr/bin/env python3
"""Disassemble Xenos shader microcode.

Works on raw microcode with known boundaries: the .ucode files the runtime
captures from the command stream (MW2_DUMP_SHADERS), and the ones
extract_shaders.py recovers from the fastfiles.

It does not work on a fastfile container, which holds the constant table and the
debug record but not the program. The microcode is a separate raw blob lying
past the container; extract_shaders.py explains where and why.

Control flow decoding is verified against captured shaders: instructions come in
pairs packed three dwords at a time, an exec\'s address is an instruction index,
and instructions are three dwords each, so instruction N starts at dword 3N.
Every captured shader decodes to a clean alloc/exec sequence ending in exec_end
with its exec addresses landing exactly on the instruction stream.

Usage:
    xenos_shader.py <file.ucode> [--instructions]
    xenos_shader.py --survey <dir>
"""
import struct, sys, os, glob, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from xenos_isa import Alu, Fetch, decode, VECTOR_OPCODES, SCALAR_OPCODES, FETCH_OPCODES

# ---- control flow -----------------------------------------------------------
CF_OPCODES = {
    0:  "nop",              1:  "exec",             2:  "exec_end",
    3:  "cond_exec",        4:  "cond_exec_end",    5:  "cond_exec_pred",
    6:  "cond_exec_pred_end", 7: "loop_start",      8:  "loop_end",
    9:  "cond_call",        10: "return",           11: "cond_jmp",
    12: "alloc",            13: "cond_exec_pred_clean",
    14: "cond_exec_pred_clean_end", 15: "mark_vs_fetch_done",
}
END_OPCODES = {2, 4, 6, 14}
# The alloc kind sits in bits 8..10 of the second dword. Captured shaders only
# ever use 2 and 4, so the rest is recorded as the raw value rather than guessed.
FETCH_DIMENSION_NAMES = {0: "1d", 1: "2d", 2: "3d", 3: "cube"}
ALLOC_KINDS = {0: "none", 1: "position", 2: "interpolators or colours", 3: "memory export"}

class ControlFlow:
    """One 48-bit control flow instruction, held as Xenia holds it."""
    __slots__ = ("dword0", "dword1")
    def __init__(self, d0, d1):
        self.dword0, self.dword1 = d0, d1 & 0xFFFF
    @property
    def opcode(self): return (self.dword1 >> 12) & 0xF
    @property
    def name(self): return CF_OPCODES[self.opcode]
    # exec-family fields
    @property
    def address(self): return self.dword0 & 0xFFF
    @property
    def count(self): return (self.dword0 >> 12) & 0x7
    @property
    def is_sequence(self): return bool(self.dword1 & 0x8)   # serialised fetch/alu order
    # Two bits per instruction in the block: bit 0 says fetch rather than ALU,
    # bit 1 says serialise. Nothing in an instruction itself distinguishes the
    # two encodings, so this word is the only way to decode a program at all.
    @property
    def sequence(self): return (self.dword0 >> 16) & 0xFFF
    def is_fetch(self, n): return bool(self.sequence & (1 << (2 * n)))
    def __repr__(self):
        if self.opcode in (1, 2, 3, 4, 5, 6, 13, 14):
            return f"{self.name} addr={self.address} count={self.count}"
        if self.opcode == 12:
            kind = (self.dword1 >> 9) & 0x3
            return f"alloc {ALLOC_KINDS.get(kind, f'kind {kind}')} size={self.dword0 & 0x7}"
        if self.opcode == 11:
            return f"cond_jmp addr={self.address}"
        return self.name

def unpack_pair(d0, d1, d2):
    """Two control flow instructions live in three dwords."""
    return (ControlFlow(d0, d1 & 0xFFFF),
            ControlFlow(((d1 >> 16) | (d2 << 16)) & 0xFFFFFFFF, d2 >> 16))

def decode_control_flow(words, limit=256):
    """Decode until the terminating exec, or fail."""
    flow = []
    i = 0
    while i + 3 <= len(words) and len(flow) < limit:
        a, b = unpack_pair(words[i], words[i + 1], words[i + 2])
        i += 3
        for cf in (a, b):
            flow.append(cf)
            if cf.opcode in END_OPCODES:
                return flow, True
    return flow, False

def plausible(flow, terminated):
    """A real shader allocates outputs and ends with an exec_end."""
    if not terminated or len(flow) < 2: return False
    if not any(cf.opcode == 12 for cf in flow): return False        # must alloc something
    # An exec address must point past the control flow it belongs to.
    execs = [cf for cf in flow if cf.opcode in (1, 2, 3, 4, 5, 6, 13, 14)]
    if not execs: return False
    return all(cf.address >= len(flow) // 2 for cf in execs if cf.address)

def find_microcode(blob):
    """Return (offset, words) for the shader program inside a container."""
    best = None
    for offset in range(4, len(blob) - 12, 4):
        count = (len(blob) - offset) // 4
        words = list(struct.unpack_from(f">{count}I", blob, offset))
        flow, terminated = decode_control_flow(words)
        if not plausible(flow, terminated): continue
        # Prefer the earliest offset that decodes; a later one is a suffix of it.
        best = (offset, words, flow)
        break
    return best

EXEC_OPCODES = (1, 2, 3, 4, 5, 6, 13, 14)

def instructions(words, flow):
    """Yield (index, decoded) for every instruction the control flow executes.

    An exec block names a run of instructions and carries, two bits each, which
    of them are fetches. Blocks can overlap, so an instruction is decoded once
    per exec that reaches it; callers that want unique instructions should key
    on the index.
    """
    for cf in flow:
        if cf.opcode not in EXEC_OPCODES: continue
        for n in range(cf.count):
            index = cf.address + n
            op = decode(words, index, cf.is_fetch(n))
            if op is not None:
                yield index, op

# ---- reporting --------------------------------------------------------------
def load(path):
    data = open(path, "rb").read()
    return list(struct.unpack_from(f">{len(data)//4}I", data, 0))

def describe(path, show):
    words = load(path)
    flow, terminated = decode_control_flow(words)
    print(f"{os.path.basename(path)}  {len(words)} dwords")
    if not terminated:
        print("  control flow does not terminate -- not raw microcode")
        return False

    print(f"  {len(flow)} control flow instructions:")
    for n, cf in enumerate(flow):
        print(f"    {n:3}  {cf!r}")

    # An exec address is an instruction index; instructions are three dwords.
    covered = []
    for cf in flow:
        if cf.opcode in (1, 2, 3, 4, 5, 6, 13, 14) and cf.address:
            covered += [cf.address + k for k in range(max(cf.count, 1))]
    if covered:
        first, last = min(covered), max(covered)
        end = (last + 1) * 3
        print(f"  instructions {first}..{last} -> dwords {first*3}..{end-1} "
              f"of {len(words)}" + ("  (fits)" if end <= len(words) else "  (OVERRUNS)"))
    if show:
        print("  instructions:")
        for index, op in instructions(words, flow):
            base = index * 3
            print(f"    {index:3}  {words[base]:08X} {words[base+1]:08X} {words[base+2]:08X}  {op!r}")
    return True

def survey(directory):
    """What of the instruction set do these programs actually use?

    The answer decides how much of a translator has to be written, so it is
    worth measuring rather than assuming the whole ISA is in play.
    """
    files = sorted(glob.glob(os.path.join(directory, "*.ucode")))
    ok = fits = 0
    vector = collections.Counter()
    scalar = collections.Counter()
    fetch = collections.Counter()
    control = collections.Counter()
    features = collections.Counter()
    for p in files:
        words = load(p)
        flow, terminated = decode_control_flow(words)
        if not terminated: continue
        ok += 1
        covered = [cf.address + k for cf in flow
                   if cf.opcode in EXEC_OPCODES and cf.address
                   for k in range(max(cf.count, 1))]
        if covered and (max(covered) + 1) * 3 <= len(words): fits += 1
        for cf in flow:
            control[cf.name] += 1
        seen = {}
        for index, op in instructions(words, flow):
            seen[index] = op
        for op in seen.values():
            if isinstance(op, Fetch):
                fetch[op.name] += 1
                if op.is_texture:
                    features["tfetch " + FETCH_DIMENSION_NAMES.get(op.texture_dimension,
                                                                   str(op.texture_dimension))] += 1
            else:
                if op.vector_write_mask or op.is_export:
                    vector[op.vector_name] += 1
                if op.scalar_write_mask or op.scalar_opcode != 50:
                    scalar[op.scalar_name] += 1
                if op.is_predicated: features["predicated ALU"] += 1
                if op.is_export: features["export"] += 1
                if op.vector_clamp or op.scalar_clamp: features["clamp"] += 1
                if op.const_address_relative: features["aL-relative constant"] += 1
                # On an export, scalar_dest_rel does not mean relative
                # addressing -- it says the components neither half writes take
                # literal zero. Only a non-export destination is really relative.
                if not op.is_export and (op.vector_dest_relative or op.scalar_dest_relative):
                    features["relative destination"] += 1
                if op.is_export and op.scalar_dest_relative:
                    features["export writes literal zero"] += 1

    print(f"{ok} of {len(files)} decode to terminated control flow; "
          f"{fits} have every exec landing inside the program\n")
    for title, counter, total in (("control flow", control, len(CF_OPCODES)),
                                  ("vector ALU", vector, len(VECTOR_OPCODES)),
                                  ("scalar ALU", scalar, len(SCALAR_OPCODES)),
                                  ("fetch", fetch, len(FETCH_OPCODES))):
        print(f"{title}: {len(counter)} of {total} opcodes used")
        for name, n in counter.most_common():
            print(f"    {n:8}  {name}")
        print()
    if features:
        print("features")
        for name, n in features.most_common():
            print(f"    {n:8}  {name}")

if __name__ == "__main__":
    if len(sys.argv) > 2 and sys.argv[1] == "--survey":
        survey(sys.argv[2])
    else:
        describe(sys.argv[1], "--cf" in sys.argv)
