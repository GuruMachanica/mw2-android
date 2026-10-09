#!/usr/bin/env python3
"""Make launcher/playerdata_layout.h: where the multiplayer keeps what the
launcher's profile screen edits in a player's stats file (mpdata).

    tools/playerdata_layout.py <game program> <image> <game folder> [<keep.json>]
    tools/playerdata_layout.py <kept.json>

The layout is the title's own, mp/playerdata.def, and the challenges' tiers and
the ranks are its tables (mp/allChallengesTable.csv, mp/rankTable.csv). All
three are in signed fastfiles, so they are read where the title has them
loaded: this starts a multiplayer build (a window opens for 40 seconds), reads
its memory through /proc/<pid>/mem (Linux, and the game must be this script's
child) and ends it. Run it from a folder whose saves/ may be written to.
"""
import json, os, struct, subprocess, sys, time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def read(program, image, game):
    env = dict(os.environ, MW2_WATCHDOG="90", MW2_LOG_FILE=os.devnull)
    child = subprocess.Popen(["systemd-run", "--user", "--scope", "--quiet", "-p", "MemoryMax=5G", "-p", "MemorySwapMax=0",
                              program, image, game], env=env)
    time.sleep(40)
    pid = int(subprocess.check_output(["pgrep", "-n", "-x", os.path.basename(program)]).split()[0])
    maps = []
    for line in open(f"/proc/{pid}/maps"):
        span, perms = line.split()[:2]
        a, b = (int(x, 16) for x in span.split("-"))
        if "r" in perms: maps.append((a, b))
    mem = open(f"/proc/{pid}/mem", "rb", buffering=0)

    def host_read(address, size):
        try:
            mem.seek(address); return mem.read(size)
        except OSError:
            return b""

    base = next(a for a, _ in maps if host_read(a + 0x82000000, 2) == b"MZ")
    print(f"pid {pid}, guest base {base:#x}")
    regions = [(a - base, b - base) for a, b in maps if base <= a and b <= base + (1 << 32)]

    def read(address, size): return host_read(base + address, size)
    def u32(address): return struct.unpack(">I", read(address, 4))[0]
    def u16(address): return struct.unpack(">H", read(address, 2))[0]
    def text(address):
        data = read(address, 256)
        return data[:data.index(b"\0")].decode("latin-1")

    def find(needle, align=4):
        hits = []
        for a, b in regions:
            data = b"".join(read(c, min(1 << 26, b - c)) for c in range(a, b, 1 << 26))
            at = data.find(needle)
            while at >= 0:
                if (a + at) % align == 0: hits.append(a + at)
                at = data.find(needle, at + 1)
        return hits

    # StructuredDataDef: version, checksum, enums, structs, indexed arrays, enumed arrays, root type, size.
    defs = find(struct.pack(">II", 155, 0x7BA0F06F))
    print("defs at", [hex(x) for x in defs])
    def kind(address): return [u32(address), u32(address + 4)]
    result = None
    for d in defs:
        enum_count, enums, struct_count, structs, indexed_count, indexed, enumed_count, enumed = (u32(d + 8 + 4 * i) for i in range(8))
        if not (0 < enum_count < 200 and 0 < struct_count < 200): continue
        result = dict(version=155, checksum=0x7BA0F06F, root=kind(d + 40), size=u32(d + 48), enums=[], structs=[], indexed=[], enumed=[])
        for i in range(enum_count):
            e = enums + 12 * i
            count, reserved, entries = u32(e), u32(e + 4), u32(e + 8)
            result["enums"].append(dict(reserved=reserved, entries=[[text(u32(entries + 8 * k)), u16(entries + 8 * k + 4)] for k in range(count)]))
        for i in range(struct_count):
            s = structs + 16 * i
            count, properties = u32(s), u32(s + 4)
            result["structs"].append(dict(size=u32(s + 8), bit_offset=u32(s + 12),
                properties=[dict(name=text(u32(properties + 16 * k)), type=kind(properties + 16 * k + 4), offset=u32(properties + 16 * k + 12)) for k in range(count)]))
        for i in range(indexed_count):
            a = indexed + 16 * i
            result["indexed"].append(dict(count=u32(a), type=kind(a + 4), element_size=u32(a + 12)))
        for i in range(enumed_count):
            a = enumed + 16 * i
            result["enumed"].append(dict(enum=u32(a), type=kind(a + 4), element_size=u32(a + 12)))
        break

    # StringTable: name, columns, rows, cells of (string, hash). Found by its
    # shape, since nothing aligns a fastfile's structures.
    tables = {}
    for name, columns, rows in (("mp/allchallengestable.csv", 24, 480), ("mp/unlocktable.csv", 13, 1918)):
        for at in find(struct.pack(">II", columns, rows), 1):
            try:
                if text(u32(at - 4)).lower() != name: continue
                cells = u32(at + 8)
                tables[name] = [[text(u32(cells + 8 * (r * columns + c))) if u32(cells + 8 * (r * columns + c)) else "" for c in range(columns)] for r in range(rows)]
                break
            except Exception as e:
                print("  ", hex(at), e)
        print(name, len(tables.get(name, [])), "rows")

    # The rank table's size is not known beforehand: go by its name.
    for at in find(b"mp/ranktable.csv\0", 1):
        for pointer in find(struct.pack(">I", at), 1):
            columns, rows, cells = u32(pointer + 4), u32(pointer + 8), u32(pointer + 12)
            print("  rank table candidate", hex(pointer), columns, rows, hex(cells))
            if 0 < columns < 64 and 0 < rows < 512 and cells:
                tables["mp/ranktable.csv"] = [[text(u32(cells + 8 * (r * columns + c))) if u32(cells + 8 * (r * columns + c)) else "" for c in range(columns)] for r in range(rows)]

    subprocess.run(["pkill", "-x", os.path.basename(program)])
    child.wait()
    return dict(playerdata=result, tables=tables)


def emit(data):
    d, tables = data["playerdata"], data["tables"]
    root = {p["name"]: p for p in d["structs"][d["root"][1]]["properties"]}
    def entries(prop):
        return d["enums"][d["enumed"][root[prop]["type"][1]]["enum"]]["entries"]
    def indices(prop):
        return ", ".join(str(i) for i in sorted(index for name, index in entries(prop) if name))
    challenge = dict(entries("challengeState"))
    rows = []
    for row in tables["mp/allchallengestable.csv"]:
        targets = [int(row[c]) for c in range(6, 24, 2) if row[c]]
        if targets and row[0] in challenge:
            rows.append((challenge[row[0]], len(targets), targets[-1]))
    ranks = [(int(r[2]), int(r[7])) for r in tables["mp/ranktable.csv"] if r[0].isdigit()]
    out = f"""// Generated by tools/playerdata_layout.py from the running multiplayer -- do not edit.
// Offsets are into the stats buffer, which a file holds after its checksum.
#pragma once
#include <cstdint>

namespace playerdata
{{
    constexpr uint32_t kVersion = {d["version"]}, kFormat = {d["checksum"]:#010x};  // the buffer's first two words
    constexpr uint32_t kSize = {d["size"]};

    constexpr uint32_t kExperience = {root["experience"]["offset"]}, kPrestige = {root["prestige"]["offset"]};  // 32 bits each
    constexpr uint32_t kChallengeState = {root["challengeState"]["offset"]};       // a byte per challenge
    constexpr uint32_t kChallengeProgress = {root["challengeProgress"]["offset"]};    // 32 bits per challenge
    // One bit per entry, the lowest bit of a byte first.
    constexpr uint32_t kTitleUnlocked = {root["titleUnlocked"]["offset"]}, kIconUnlocked = {root["iconUnlocked"]["offset"]};
    constexpr uint32_t kKillstreakUnlocked = {root["killstreakUnlocked"]["offset"]};

    // A challenge done: its state is one past its last tier, its progress
    // that tier's target.
    struct Challenge {{ uint16_t index; uint8_t tiers; uint32_t target; }};
    constexpr Challenge kChallenges[] = {{
{chr(10).join("        " + " ".join(f"{{ {i}, {n}, {t} }}," for i, n, t in rows[k:k + 6]) for k in range(0, len(rows), 6))}
    }};
    constexpr uint16_t kTitles[] = {{ {indices("titleUnlocked")} }};
    constexpr uint16_t kIcons[] = {{ {indices("iconUnlocked")} }};
    constexpr uint16_t kKillstreaks[] = {{ {indices("killstreakUnlocked")} }};

    // The experience each rank starts at, and where the last one ends.
    constexpr uint32_t kRankExperience[] = {{ {", ".join(str(a) for a, _ in ranks)} }};
    constexpr uint32_t kMaxExperience = {ranks[-1][1]};
    constexpr int kMaxPrestige = 10;
}}
"""
    open(os.path.join(ROOT, "launcher", "playerdata_layout.h"), "w").write(out)
    print(f"wrote launcher/playerdata_layout.h: {len(rows)} challenges, {len(ranks)} ranks")


if __name__ == "__main__":
    if len(sys.argv) == 2:
        data = json.load(open(sys.argv[1]))
    elif len(sys.argv) in (4, 5):
        data = read(*sys.argv[1:4])
        if len(sys.argv) == 5: json.dump(data, open(sys.argv[4], "w"))
    else:
        raise SystemExit(__doc__)
    emit(data)
