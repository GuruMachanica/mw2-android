#!/usr/bin/env python3
"""List or extract an Xbox 360 content package, the container a title update
comes in.

    tools/stfs.py <package>            # what it is and what it holds
    tools/stfs.py <package> <folder>   # and write the files there

Reads the read-only kind (LIVE and PIRS), which keeps one hash table per group
of 170 blocks; a console-signed CON package keeps two and is refused.
"""
import os, struct, sys

BLOCK = 0x1000
PER_TABLE = 0xAA            # data blocks one hash table covers
PER_LEVEL1 = 0x70E4         # and one second-level table


class Package:
    def __init__(self, path):
        self.d = d = open(path, "rb").read()
        self.magic = d[:4].decode("latin-1")
        if self.magic not in ("LIVE", "PIRS"):
            raise SystemExit(f"{path}: a {self.magic!r} package, not LIVE or PIRS")
        header_size, self.content_type = struct.unpack_from(">II", d, 0x340)
        if ((header_size + 0xFFF) & 0xF000) >> 12 != 0xB:
            raise SystemExit(f"{path}: two hash tables per group, which this does not read")
        self.version, self.base_version, self.title_id = struct.unpack_from(">III", d, 0x358)
        self.name = d[0x411:0x511].decode("utf-16-be", "ignore").split("\0")[0]
        table_blocks = struct.unpack_from("<H", d, 0x37C)[0]
        table = b"".join(self.block(b) for b in self.chain(int.from_bytes(d[0x37E:0x381], "little"), table_blocks))
        self.entries = []
        for i in range(0, len(table), 0x40):
            e = table[i:i + 0x40]
            if e[0] == 0:
                break
            flags = e[0x28]
            self.entries.append(dict(
                name=e[:flags & 0x3F].decode("latin-1"), folder=bool(flags & 0x80), consecutive=bool(flags & 0x40),
                blocks=int.from_bytes(e[0x29:0x2C], "little"), start=int.from_bytes(e[0x2F:0x32], "little"),
                parent=struct.unpack_from(">h", e, 0x32)[0], size=struct.unpack_from(">I", e, 0x34)[0]))

    def offset(self, block):
        """Where a data block is in the file: the hash tables sit between them."""
        tables = 0
        if block >= PER_TABLE:
            tables += block // PER_TABLE + 1
        if block >= PER_LEVEL1:
            tables += block // PER_LEVEL1 + 1
        return 0xC000 + (block + tables) * BLOCK

    def block(self, block):
        o = self.offset(block)
        return self.d[o:o + BLOCK]

    def next(self, block):
        """The block after this one in its file: its entry in the hash table,
        which is the block before its group's first."""
        table = self.offset(block - block % PER_TABLE) - BLOCK
        entry = table + (block % PER_TABLE) * 0x18
        return int.from_bytes(self.d[entry + 0x15:entry + 0x18], "big")

    def chain(self, start, count):
        block = start
        for _ in range(count):
            yield block
            block = self.next(block)

    def path(self, entry):
        parent = entry["parent"]
        return entry["name"] if parent < 0 else os.path.join(self.path(self.entries[parent]), entry["name"])

    def read(self, entry):
        return b"".join(self.block(b) for b in self.chain(entry["start"], entry["blocks"]))[:entry["size"]]


if __name__ == "__main__":
    if len(sys.argv) not in (2, 3):
        raise SystemExit(__doc__)
    package = Package(sys.argv[1])
    print(f"{package.magic} type {package.content_type:#x} title {package.title_id:08X} "
          f"version {package.version:#x} base {package.base_version:#x}: {package.name}")
    for entry in package.entries:
        path = package.path(entry)
        print(f"  {'d' if entry['folder'] else '-'} {entry['size']:10d}  {path}")
        if len(sys.argv) == 3 and not entry["folder"]:
            out = os.path.join(sys.argv[2], path)
            os.makedirs(os.path.dirname(out) or ".", exist_ok=True)
            with open(out, "wb") as f:
                f.write(package.read(entry))
