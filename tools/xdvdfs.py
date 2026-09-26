#!/usr/bin/env python3
"""Minimal XDVDFS (Xbox/Xbox360 disc) reader: list + extract."""
import struct, sys, os

SECTOR = 2048
MAGIC = b"MICROSOFT*XBOX*MEDIA"

class XDvdFs:
    def __init__(self, path):
        self.f = open(path, "rb")
        self.base = self._find_base()
        self.f.seek(self.base + 32 * SECTOR)
        vd = self.f.read(SECTOR)
        assert vd[:20] == MAGIC and vd[0x7EC:0x800] == MAGIC, "bad volume descriptor"
        self.root_sector, self.root_size = struct.unpack_from("<II", vd, 0x14)

    def _find_base(self):
        for off in (0x0, 0xFD90000, 0x2080000, 0x18300000, 0x18310000):
            self.f.seek(off + 32 * SECTOR)
            if self.f.read(20) == MAGIC:
                return off
        raise RuntimeError("XDVDFS magic not found at known offsets")

    def _read(self, sector, size):
        self.f.seek(self.base + sector * SECTOR)
        return self.f.read(size)

    def _walk_dir(self, sector, size, prefix=""):
        if size == 0:
            return
        data = self._read(sector, size)
        stack = [0]
        seen = set()
        while stack:
            off = stack.pop()
            if off in seen or off * 4 + 14 > len(data):
                continue
            seen.add(off)
            p = off * 4
            left, right, start, fsize, attr, nlen = struct.unpack_from("<HHIIBB", data, p)
            if left == 0xFFFF:
                continue
            name = data[p + 14 : p + 14 + nlen].decode("latin-1")
            if left:
                stack.append(left)
            if right:
                stack.append(right)
            full = prefix + name
            if attr & 0x10:  # directory
                yield (full + "/", start, fsize, attr, True)
                yield from self._walk_dir(start, fsize, full + "/")
            else:
                yield (full, start, fsize, attr, False)

    def walk(self):
        yield from self._walk_dir(self.root_sector, self.root_size)

    def extract(self, sector, size, dest):
        os.makedirs(os.path.dirname(dest) or ".", exist_ok=True)
        self.f.seek(self.base + sector * SECTOR)
        with open(dest, "wb") as o:
            left = size
            while left:
                chunk = self.f.read(min(1 << 22, left))
                if not chunk:
                    break
                o.write(chunk)
                left -= len(chunk)

if __name__ == "__main__":
    iso = sys.argv[1]
    fs = XDvdFs(iso)
    print(f"# partition base = 0x{fs.base:X}, root sector {fs.root_sector}, size {fs.root_size}", file=sys.stderr)
    entries = sorted(fs.walk())
    if len(sys.argv) == 2:
        total = 0
        for name, sec, size, attr, isdir in entries:
            print(f"{'D' if isdir else 'F'} {size:12d} {sec:9d}  {name}")
            if not isdir:
                total += size
        print(f"# {len(entries)} entries, {total/1e9:.2f} GB of files", file=sys.stderr)
    else:
        outdir = sys.argv[2]
        want = [w.lower() for w in sys.argv[3:]]
        for name, sec, size, attr, isdir in entries:
            if isdir:
                continue
            if want and not any(w in name.lower() for w in want):
                continue
            dest = os.path.join(outdir, name)
            fs.extract(sec, size, dest)
            print(f"extracted {name} -> {dest} ({size} bytes)")
