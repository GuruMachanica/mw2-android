#!/usr/bin/env python3
"""Find the other executable's copy of a function.

The campaign and the multiplayer are one engine built twice, so a function the
runtime hooks in default.xex exists in default_mp.xex at another address, with
the same instructions except for what the linker filled in: branch
displacements and the halves of absolute addresses. Masking those out of the
first N words gives a signature that finds the twin.

    tools/find_in_title.py 820C3390 8227CF18 ...   # campaign -> multiplayer
    tools/find_in_title.py --table                 # every T_ entry in runtime/title.h
    tools/find_in_title.py --reverse ADDR ...      # multiplayer -> campaign

A match is reported with both functions' .pdata sizes; a unique match of equal
size is the same function, a unique match of another size is worth reading
before trusting, and several matches mean the first words are a common
prologue -- try more words with --words.
"""
import os, re, struct, sys, collections

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))
import title

BASE = title.BASE
# opcodes whose low 16 bits the linker fills: lis/addi/addis, loads and stores
# with a displacement, D-form arithmetic and logic
IMMEDIATE = {7, 8, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29,
             32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
             48, 49, 50, 51, 52, 53, 54, 55, 58, 62}


def mask(w):
    op = w >> 26
    if op in (16, 18):          # b, bc: keep the opcode and the AA/LK bits
        return w & 0xFC000003
    if op in IMMEDIATE:
        return w & 0xFFFF0000
    return w


class Image:
    def __init__(self, path):
        self.img = open(path, "rb").read()
        self.sizes = title.functions(self.img)
        self.words = [mask(struct.unpack_from(">I", self.img, i)[0])
                      for i in range(0, len(self.img) - 3, 4)]
        self.first = collections.defaultdict(list)
        for i, w in enumerate(self.words):
            self.first[w].append(i)

    def signature(self, address, n):
        i = (address - BASE) // 4
        return self.words[i:i + n]

    def find(self, sig):
        if not sig:
            return []
        n = len(sig)
        return [BASE + 4 * i for i in self.first.get(sig[0], []) if self.words[i:i + n] == sig]


def main():
    args = sys.argv[1:]
    words = 24
    reverse = False
    addresses = []
    table = False
    while args:
        a = args.pop(0)
        if a == "--words": words = int(args.pop(0))
        elif a == "--reverse": reverse = True
        elif a == "--table": table = True
        else: addresses.append(int(a, 16))
    src, dst = ("mp", "sp") if reverse else ("sp", "mp")
    if table:
        text = open(os.path.join(ROOT, "runtime/title.h")).read()
        mp, sp = re.search(r"#ifdef MW2_TITLE_MP(.*?)#else(.*?)#endif", text, re.S).groups()
        block = mp if reverse else sp
        addresses = [(n, int(a, 16)) for n, a in re.findall(r"#define (T_\w+)\s+([0-9A-F]{8})\b", block)]
    else:
        addresses = [(f"{a:08X}", a) for a in addresses]
    a = Image(os.path.join(ROOT, title.TITLES[src]["image"]))
    b = Image(os.path.join(ROOT, title.TITLES[dst]["image"]))
    for name, address in addresses:
        size = a.sizes.get(address)
        n = words if size is None else max(4, min(words, size // 4))
        hits = b.find(a.signature(address, n))
        found = ", ".join(f"{h:08X} ({b.sizes.get(h, '-')} bytes)" for h in hits) or "no match"
        note = ""
        if len(hits) == 1 and size is not None and b.sizes.get(hits[0]) not in (None, size):
            note = "   size differs"
        elif len(hits) > 1:
            note = "   ambiguous: try --words"
        print(f"{name:28} {src} {address:08X} ({size or '-'} bytes) -> {dst} {found}{note}")


if __name__ == "__main__":
    main()
