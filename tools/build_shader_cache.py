#!/usr/bin/env python3
"""
Extracts all shader programs across the campaign fastfiles and builds a bundled
offline shader manifest (shader_cache.bin) for instant native startup on Android.
"""
import glob
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from extract_shaders import zone, containers, program_for, SEARCH_LIMIT, MAGIC

CACHE_MAGIC = 0x32574D53    # 'SMW2'
CACHE_VERSION = 3

def fnv1a(words):
    h = 1469598103934665603
    for w in words:
        h ^= (w & 0xFFFFFFFF)
        h = (h * 1099511628211) & 0xFFFFFFFFFFFFFFFF
    return h

def main():
    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    out_dir = os.path.join(root, "android", "app", "src", "main", "assets")
    os.makedirs(out_dir, exist_ok=True)
    out_path = os.path.join(out_dir, "shader_cache.bin")

    shaders = {}  # hash -> (is_pixel, [words])
    pipelines = b""

    # Key fastfiles for Campaign (common, UI, and mission fastfiles)
    fastfiles = sorted(glob.glob(os.path.join(root, "mw2", "game", "*.ff")))
    print(f"Scanning {len(fastfiles)} fastfiles for campaign shaders...")

    for path in fastfiles:
        name = os.path.basename(path)
        raw = zone(path)
        if not raw:
            continue
        conts = containers(raw)
        if not conts:
            continue
        recovered = 0
        for k, (pos, tag, size, length) in enumerate(conts):
            nxt = conts[k + 1][0] if k + 1 < len(conts) else len(raw)
            code = program_for(raw, pos + size, length, min(nxt, pos + size + SEARCH_LIMIT))
            if not code:
                continue
            is_pixel = 1 if MAGIC[tag] == "pixel" else 0
            # Convert guest big-endian dwords to host native words
            words = list(struct.unpack(f">{len(code)//4}I", code))
            shash = fnv1a(words)
            if shash not in shaders:
                shaders[shash] = (is_pixel, words)
                recovered += 1
        print(f"  {name:24} -> {recovered:4} new shaders (total unique: {len(shaders)})")

    print(f"\nWriting bundled shader cache with {len(shaders)} unique shaders to {out_path}...")
    with open(out_path, "wb") as f:
        # Header: magic, version, shader_count, pipeline_count
        f.write(struct.pack("<4I", CACHE_MAGIC, CACHE_VERSION, len(shaders), 0))
        for shash, (is_pixel, words) in shaders.items():
            f.write(struct.pack("<Q", shash))
            f.write(struct.pack("<2I", is_pixel, len(words)))
            f.write(struct.pack(f"<{len(words)}I", *words))

    size_mb = os.path.getsize(out_path) / (1024 * 1024)
    print(f"Done! {out_path} created successfully ({size_mb:.2f} MB, {len(shaders)} shaders)")

if __name__ == "__main__":
    main()
