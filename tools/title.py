#!/usr/bin/env python3
"""Which of the disc's two executables the tools work on.

MW2_TITLE=sp (the default) is default.xex, the campaign and special ops;
MW2_TITLE=mp is default_mp.xex, the multiplayer. Everything derived from one
of them -- the flat image, the recompiled C++, the switch tables, the build
directory -- lives beside the other's under its own name, so both builds can
exist at once.

The image's section table is read here rather than hard-coded, because the two
executables lay their sections out differently.
"""
import os, struct

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BASE = 0x82000000

TITLES = {
    "sp": dict(xex="mw2/default.xex", image="mw2/default.pe", ppc="ppc",
               toml="config/MW2.toml", tables="config/mw2_switch_tables.toml", build="build"),
    "mp": dict(xex="mw2/default_mp.xex", image="mw2/default_mp.pe", ppc="ppc_mp",
               toml="config/MW2MP.toml", tables="config/mw2mp_switch_tables.toml", build="build-mp"),
}

NAME = os.environ.get("MW2_TITLE", "sp")
if NAME not in TITLES:
    raise SystemExit(f"MW2_TITLE={NAME!r}: expected one of {', '.join(TITLES)}")
_t = TITLES[NAME]

XEX = os.path.join(ROOT, _t["xex"])
IMAGE = os.path.join(ROOT, _t["image"])
PPC = os.path.join(ROOT, _t["ppc"])
TOML = os.path.join(ROOT, _t["toml"])
TABLES = os.path.join(ROOT, _t["tables"])
BUILD = os.path.join(ROOT, _t["build"])


def ppc(name):
    """A file in the title's recompiled-output directory."""
    return os.path.join(PPC, name)


def image():
    return open(IMAGE, "rb").read()


def sections(img):
    """{name: (guest address, size)} from the PE section table. The image is
    flat, so a section's file offset equals its address minus BASE."""
    pe = struct.unpack_from("<I", img, 0x3C)[0]
    count = struct.unpack_from("<H", img, pe + 6)[0]
    optional = struct.unpack_from("<H", img, pe + 20)[0]
    out = {}
    for i in range(count):
        o = pe + 24 + optional + i * 40
        name = img[o:o + 8].rstrip(b"\0").decode()
        size, rva = struct.unpack_from("<II", img, o + 8)
        out[name] = (BASE + rva, size)
    return out


def text(img):
    """(guest address, size) of the code section."""
    return sections(img)[".text"]


def functions(img):
    """{start: size} for every function .pdata describes. Leaf functions have
    no entry; the callers are the way to find those."""
    va, size = sections(img)[".pdata"]
    pd = img[va - BASE:va - BASE + size]
    out = {}
    for i in range(len(pd) // 8):
        a, d = struct.unpack_from(">II", pd, i * 8)
        if a == 0:
            break
        out[a] = ((d >> 8) & 0x3FFFFF) * 4
    return out


if __name__ == "__main__":
    img = image()
    t, f = text(img), functions(img)
    print(f"title {NAME}: {IMAGE}")
    print(f"  code {t[0]:08X} +{t[1]:X}, {len(f)} functions in .pdata, recompiled output in {PPC}")
