#!/usr/bin/env python3
"""The Xenos shader instruction set: ALU and fetch decoding.

`xenos_shader.py` decodes control flow -- which is enough to find a program and
prove it is one. This decodes the instructions the control flow points at, which
is what a translator has to consume.

An exec's address is an instruction index and every instruction is three dwords,
so instruction N occupies dwords 3N..3N+2. Whether those three dwords are an ALU
instruction or a fetch instruction is not encoded in them: it comes from the
control flow. Each exec-family control flow instruction carries a serialisation
word that says, two bits per instruction, whether the next one is a fetch and
whether it is preceded by a sync. That word is the only way to tell them apart,
so decoding instructions without it is guesswork.

Field layouts follow Xenia's `src/xenia/gpu/ucode.h` (BSD-3), which is the
reference for this hardware. The bitfields there are little-endian bitfields
over three dwords; here they are written out as explicit shifts so the encoding
is legible rather than implied by struct packing.
"""
import struct

# ---- opcode tables ----------------------------------------------------------
VECTOR_OPCODES = {
    0: "add", 1: "mul", 2: "max", 3: "min", 4: "seq", 5: "sgt", 6: "sge",
    7: "sne", 8: "frc", 9: "trunc", 10: "floor", 11: "mad", 12: "cndeq",
    13: "cndge", 14: "cndgt", 15: "dp4", 16: "dp3", 17: "dp2add", 18: "cube",
    19: "max4", 20: "setp_eq_push", 21: "setp_ne_push", 22: "setp_gt_push",
    23: "setp_ge_push", 24: "kill_eq", 25: "kill_gt", 26: "kill_ge",
    27: "kill_ne", 28: "dst", 29: "maxa",
}

SCALAR_OPCODES = {
    0: "adds", 1: "adds_prev", 2: "muls", 3: "muls_prev", 4: "muls_prev2",
    5: "maxs", 6: "mins", 7: "seqs", 8: "sgts", 9: "sges", 10: "snes",
    11: "frcs", 12: "truncs", 13: "floors", 14: "exp", 15: "logc", 16: "log",
    17: "rcpc", 18: "rcpf", 19: "rcp", 20: "rsqc", 21: "rsqf", 22: "rsq",
    23: "maxas", 24: "maxasf", 25: "subs", 26: "subs_prev", 27: "setp_eq",
    28: "setp_ne", 29: "setp_gt", 30: "setp_ge", 31: "setp_inv",
    32: "setp_pop", 33: "setp_clr", 34: "setp_rstr", 35: "kills_eq",
    36: "kills_gt", 37: "kills_ge", 38: "kills_ne", 39: "kills_one",
    40: "sqrt", 42: "mulsc0", 43: "mulsc1", 44: "addsc0", 45: "addsc1",
    46: "subsc0", 47: "subsc1", 48: "sin", 49: "cos", 50: "retain_prev",
}

FETCH_OPCODES = {
    0: "vfetch", 1: "tfetch", 16: "get_border_colour_frac",
    17: "get_computed_lod", 18: "get_gradients", 19: "get_weights",
    24: "set_lod", 25: "set_gradients_h", 26: "set_gradients_v",
}

# How many register operands each operation reads, so the disassembly does not
# print operands the hardware never looks at. From Xenia's opcode info tables.
VECTOR_OPERANDS = {
    0: 2, 1: 2, 2: 2, 3: 2, 4: 2, 5: 2, 6: 2, 7: 2, 8: 1, 9: 1, 10: 1, 11: 3,
    12: 3, 13: 3, 14: 3, 15: 2, 16: 2, 17: 3, 18: 2, 19: 1, 20: 2, 21: 2,
    22: 2, 23: 2, 24: 2, 25: 2, 26: 2, 27: 2, 28: 2, 29: 2,
}
# 0 means the operation reads nothing (setp_clr, retain_prev); 2 means it takes
# a constant alongside src3 (the mulsc/addsc/subsc family).
SCALAR_OPERANDS = {n: 1 for n in SCALAR_OPCODES}
SCALAR_OPERANDS.update({33: 0, 50: 0, 42: 2, 43: 2, 44: 2, 45: 2, 46: 2, 47: 2})

# Only the ones a real program can name; the rest are reported numerically.
FETCH_DIMENSIONS = {0: "1d", 1: "2d", 2: "3d", 3: "cube"}

SWIZZLE = "xyzw"


def _bits(value, lo, count):
    return (value >> lo) & ((1 << count) - 1)


def _signed(value, count):
    return value - (1 << count) if value & (1 << (count - 1)) else value


class Alu:
    """One ALU instruction: a vector operation and a scalar operation, co-issued.

    The two halves run together and write separate destinations, except when
    exporting, where both write the same register under complementary masks.
    """

    __slots__ = ("w",)

    def __init__(self, d0, d1, d2):
        self.w = (d0, d1, d2)

    # -- dword 0: destinations, write masks, scalar opcode
    @property
    def vector_dest(self):        return _bits(self.w[0], 0, 6)
    @property
    def vector_dest_relative(self): return bool(_bits(self.w[0], 6, 1))
    @property
    def abs_constants(self):      return bool(_bits(self.w[0], 7, 1))
    @property
    def scalar_dest(self):        return _bits(self.w[0], 8, 6)
    @property
    def scalar_dest_relative(self): return bool(_bits(self.w[0], 14, 1))
    @property
    def is_export(self):          return bool(_bits(self.w[0], 15, 1))
    @property
    def vector_write_mask(self):  return _bits(self.w[0], 16, 4)
    @property
    def scalar_write_mask(self):  return _bits(self.w[0], 20, 4)
    @property
    def vector_clamp(self):       return bool(_bits(self.w[0], 24, 1))
    @property
    def scalar_clamp(self):       return bool(_bits(self.w[0], 25, 1))
    @property
    def scalar_opcode(self):      return _bits(self.w[0], 26, 6)

    # -- dword 1: swizzles, negation, predication, constant addressing
    def src_swizzle(self, i):     return _bits(self.w[1], {3: 0, 2: 8, 1: 16}[i], 8)
    def src_negate(self, i):      return bool(_bits(self.w[1], {3: 24, 2: 25, 1: 26}[i], 1))
    @property
    def predicate_condition(self): return bool(_bits(self.w[1], 27, 1))
    @property
    def is_predicated(self):      return bool(_bits(self.w[1], 28, 1))
    @property
    def const_address_relative(self): return bool(_bits(self.w[1], 29, 1))
    @property
    def const_1_rel_abs(self):    return bool(_bits(self.w[1], 30, 1))
    @property
    def const_0_rel_abs(self):    return bool(_bits(self.w[1], 31, 1))

    # -- dword 2: source registers, vector opcode, source selectors
    def src_reg(self, i):         return _bits(self.w[2], {3: 0, 2: 8, 1: 16}[i], 8)
    @property
    def vector_opcode(self):      return _bits(self.w[2], 24, 5)
    def src_is_temp(self, i):     return bool(_bits(self.w[2], {3: 29, 2: 30, 1: 31}[i], 1))

    # The mulsc/addsc/subsc family take a constant register alongside src3; its
    # index is assembled from bits scattered across the instruction.
    @property
    def scalar_const_reg(self):
        return ((self.scalar_opcode & 1) | (_bits(self.w[2], 29, 1) << 1) |
                (self.src_swizzle(3) & 0x3C))

    # -- derived
    @property
    def vector_name(self):        return VECTOR_OPCODES.get(self.vector_opcode, f"vector_{self.vector_opcode}")
    @property
    def scalar_name(self):        return SCALAR_OPCODES.get(self.scalar_opcode, f"scalar_{self.scalar_opcode}")

    def source(self, i):
        """Render operand i the way the assembler writes it."""
        reg = self.src_reg(i)
        if self.src_is_temp(i):
            text = f"r{reg & 0x3F}"
            if reg & 0x40: text += "[aL]"
            if reg & 0x80: text = f"|{text}|"
        else:
            text = f"c{reg}"
            if self.abs_constants: text = f"|{text}|"
        if self.src_negate(i): text = "-" + text
        # Swizzles are component-relative: each pair is added to its position.
        swizzle = self.src_swizzle(i)
        components = "".join(SWIZZLE[((swizzle >> (2 * c)) + c) & 3] for c in range(4))
        return text + ("" if components == "xyzw" else "." + components)

    def __repr__(self):
        parts = []
        if self.vector_write_mask or self.is_export:
            mask = "".join(SWIZZLE[c] for c in range(4) if self.vector_write_mask & (1 << c))
            dest = f"export{self.vector_dest}" if self.is_export else f"r{self.vector_dest}"
            count = VECTOR_OPERANDS.get(self.vector_opcode, 3)
            operands = ", ".join(self.source(i) for i in range(1, count + 1))
            parts.append(f"{self.vector_name} {dest}.{mask or '_'}, {operands}")
        if self.scalar_write_mask or self.scalar_opcode != 50:
            mask = "".join(SWIZZLE[c] for c in range(4) if self.scalar_write_mask & (1 << c))
            dest = f"export{self.vector_dest}" if self.is_export else f"r{self.scalar_dest}"
            count = SCALAR_OPERANDS.get(self.scalar_opcode, 1)
            operands = "".join(", " + self.source(3) for _ in range(min(count, 1)))
            if count == 2: operands += f", c{self.scalar_const_reg}"
            parts.append(f"{self.scalar_name} {dest}.{mask or '_'}{operands}")
        if self.is_predicated:
            parts.append("(p%s)" % ("" if self.predicate_condition else "!"))
        return " + ".join(parts) if parts else "nop"


class Fetch:
    """A vertex fetch, a texture fetch, or one of the texture query operations.

    The opcode is the low five bits of the first dword; the rest of the layout
    depends on which it is.
    """

    __slots__ = ("w",)

    def __init__(self, d0, d1, d2):
        self.w = (d0, d1, d2)

    @property
    def opcode(self):        return _bits(self.w[0], 0, 5)
    @property
    def name(self):          return FETCH_OPCODES.get(self.opcode, f"fetch_{self.opcode}")
    @property
    def src_reg(self):       return _bits(self.w[0], 5, 6)
    @property
    def dst_reg(self):       return _bits(self.w[0], 12, 6)
    @property
    def is_vertex(self):     return self.opcode == 0
    @property
    def is_texture(self):    return self.opcode == 1

    # Vertex fetch
    @property
    def vertex_const_index(self):  return _bits(self.w[0], 20, 5)
    @property
    def vertex_const_sel(self):    return _bits(self.w[0], 25, 2)
    @property
    def vertex_src_swizzle(self):  return _bits(self.w[0], 30, 2)
    @property
    def vertex_format(self):       return _bits(self.w[1], 16, 6)
    @property
    def vertex_exp_adjust(self):   return _signed(_bits(self.w[1], 24, 6), 6)
    @property
    def vertex_stride(self):       return _bits(self.w[2], 0, 8)
    @property
    def vertex_offset(self):       return _signed(_bits(self.w[2], 8, 23), 23)
    @property
    def is_mini_fetch(self):       return bool(_bits(self.w[1], 30, 1))

    # Texture fetch
    @property
    def texture_const_index(self): return _bits(self.w[0], 20, 5)
    @property
    def texture_src_swizzle(self): return _bits(self.w[0], 26, 6)
    @property
    def texture_dimension(self):   return _bits(self.w[2], 14, 2)
    @property
    def mag_filter(self):          return _bits(self.w[1], 12, 2)
    @property
    def min_filter(self):          return _bits(self.w[1], 14, 2)
    @property
    def mip_filter(self):          return _bits(self.w[1], 16, 2)
    @property
    def aniso_filter(self):        return _bits(self.w[1], 18, 3)
    @property
    def use_computed_lod(self):    return bool(_bits(self.w[1], 28, 1))
    @property
    def use_register_lod(self):    return bool(_bits(self.w[1], 29, 1))

    @property
    def dst_swizzle(self):         return _bits(self.w[1], 0, 12)
    @property
    def is_predicated(self):       return bool(_bits(self.w[1], 31, 1))

    def destination(self):
        """Four components, three bits each: 0-3 select x/y/z/w, 4 is 0, 5 is 1,
        7 leaves the component alone."""
        out = ""
        for c in range(4):
            sel = (self.dst_swizzle >> (3 * c)) & 0x7
            out += SWIZZLE[sel] if sel < 4 else {4: "0", 5: "1", 7: "_"}.get(sel, "?")
        return out

    def __repr__(self):
        if self.is_vertex:
            return (f"vfetch r{self.dst_reg}.{self.destination()}, r{self.src_reg}."
                    f"{SWIZZLE[self.vertex_src_swizzle]}, vf{self.vertex_const_index}"
                    f" format={self.vertex_format} stride={self.vertex_stride}"
                    f" offset={self.vertex_offset}"
                    + (" mini" if self.is_mini_fetch else ""))
        if self.is_texture:
            dim = FETCH_DIMENSIONS.get(self.texture_dimension, str(self.texture_dimension))
            return (f"tfetch r{self.dst_reg}.{self.destination()}, r{self.src_reg}, "
                    f"tf{self.texture_const_index} {dim}")
        return f"{self.name} r{self.dst_reg}, r{self.src_reg}"


def decode(words, index, is_fetch):
    """Instruction `index` of a program, as an Alu or a Fetch."""
    base = index * 3
    if base + 3 > len(words):
        return None
    d0, d1, d2 = words[base], words[base + 1], words[base + 2]
    return Fetch(d0, d1, d2) if is_fetch else Alu(d0, d1, d2)
