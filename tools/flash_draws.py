#!/usr/bin/env python3
"""After tools/flash_hunt.sh: what differed, draw by draw, in the frame that flashed.

    tools/flash_draws.py <mark dir> <frame>

<frame> is the picture's renderer number (the N in rN_t...png) or its position
in the mark, 1 to 40, as the pictures sort.

A flash is A-B-A: the frames around it agree, and the flash frame does not. So
each draw of the flash frame is lined up with the two world frames on each side
of it -- two, because the title updates some things every other frame -- and
what is reported is what all four agree on and the flash frame does not:

  missing     drawn before and after, not in the flash frame
  skipped     the renderer refused it in the flash frame, with its reason
  texture     another texture in a slot, or another version of the same one
              (re-read from guest memory), or another resolve
  constants   vertex (vc) or pixel (pc) float constants
  vertices    the vertex data read (vd), the indices (ix)
  state       depth (dc), blend (bl), colour mask (cm), mode (mc), colour
              control and alpha test (cc), the vertex count (n)
  shader      the pixel shader of a draw that writes no colour: with none of
              its own it runs whichever the stream loaded last, and one that
              discards leaves holes in the depth the next pass tests against

It also lists the textures re-staged before the flash frame's submit: every draw
of that frame sampled their new contents, including the ones recorded before
the change.

A moving camera changes the vertex constants of everything every frame, so they
cannot agree around the flash and are not reported: A-B-A needs all four to agree.
"""
import os
import re
import sys
from collections import Counter

LINE = re.compile(r'^(\d+) (.*)$')
FIELDS = ('ps', 'vc', 'pc', 'vd', 'ix', 'dc', 'bl', 'cm', 'mc', 'cc', 'n')
KINDS = {'ps': 'shader', 'vc': 'constants', 'pc': 'constants', 'fc': 'constants', 'vd': 'vertices',
         'ix': 'vertices', 'dc': 'state', 'bl': 'state', 'cm': 'state', 'mc': 'state',
         'cc': 'state', 'n': 'state'}


def load(path):
    frame = {'draws': [], 'late': [], 'world': False}
    with open(path) as f:
        head = f.readline().split()
        frame['number'] = int(head[1])
        frame['world'] = head[3] == '1'
        late = f.readline().split()[1:]
        frame['late'] = late
        for line in f:
            m = LINE.match(line.rstrip('\n'))
            if not m:
                continue
            body = m.group(2)
            skipped = None
            if ' SKIPPED="' in body:
                body, _, why = body.partition(' SKIPPED="')
                skipped = why.rstrip('"')
            d = {'skipped': skipped, 'tex': {}}
            for token in body.split():
                key, _, value = token.partition('=')
                if key.startswith('t') and key[1:].isdigit():
                    kind, address, fmt, size, ident, version = value.split(':')
                    # A resolve's id names this frame's copy; its address is what matters.
                    d['tex'][int(key[1:])] = (kind, address, fmt, size,
                                              '' if kind == 'R' else version, ident)
                else:
                    d[key] = value
            # A draw is the same draw when it is the same mesh through the same
            # shaders into the same target.
            # A draw writing no colour (a depth prepass, a shadow caster) often
            # has no pixel shader of its own and runs whichever was loaded
            # last, which changes with the stream; that is reported as a
            # difference ('shader'), not taken for another draw.
            # The alpha compare means nothing while the alpha test is off, and
            # the stream leaves it at whatever the last draw wanted.
            cc = int(d.get('cc', '0'), 16)
            if not cc & 0x8:
                d['cc'] = f'{cc & ~0x7:08x}'
            ps = d['ps'] if d.get('cm') != '00000000' else '-'
            d['key'] = (d['vs'], ps, d['tgt'], d['prim'], d.get('va'), d.get('ia'))
            frame['draws'].append(d)
    return frame


def texture_view(d):
    # Everything but the id: a re-staged image keeps its id and moves its version.
    return {slot: t[:5] for slot, t in d['tex'].items()}


def match(a, b):
    """Index pairs of draws a[i] <-> b[j] of the same mesh, shaders, target and
    primitive: the k-th such draw in one frame with the k-th in the other. Not
    by position in the frame: the shadow casters are re-sorted every frame, and
    lining the frames up in order took every one that moved for missing."""
    seen = {}
    for j, d in enumerate(b['draws']):
        seen.setdefault(d['key'], []).append(j)
    taken = {}
    pairs = {}
    for i, d in enumerate(a['draws']):
        k = taken.get(d['key'], 0)
        others = seen.get(d['key'], [])
        if k < len(others):
            pairs[i] = others[k]
        taken[d['key']] = k + 1
    return pairs


def name(d):
    return (f"vs {d['vs'][-8:]} ps {d['ps'][-8:]} into {d['tgt']} prim {d['prim']} n={d['n']}"
            f" mesh {d.get('va')}/{d.get('ia')}")


def main():
    if len(sys.argv) != 3:
        print(__doc__)
        return 2
    mark = sys.argv[1]
    files = sorted(f for f in os.listdir(mark) if f.startswith('draws_r') and f.endswith('.txt'))
    if not files:
        print(f'no draw lists in {mark}: this mark was taken before the draw recorder')
        return 1
    frames = [load(os.path.join(mark, f)) for f in files]
    want = int(sys.argv[2])
    if want <= len(frames) and not any(f['number'] == want for f in frames):
        pictures = sorted(p for p in os.listdir(mark) if p.startswith('r') and p.endswith('.png'))
        want = int(pictures[want - 1][1:7]) if want <= len(pictures) else frames[want - 1]['number']
    at = next((i for i, f in enumerate(frames) if f['number'] == want), None)
    if at is None:
        print(f'frame {want} is not in this mark ({frames[0]["number"]}..{frames[-1]["number"]})')
        return 1
    flash = frames[at]
    if not flash['world']:
        print(f'frame {want} drew no world: its picture shows the world of the last frame that did')
    # Two world frames each side. The title updates some things every other
    # frame -- the sun's shadow cascades -- so the frames either side agree with
    # each other and not with this one, every frame; they agree with the ones
    # two away. A flash differs from all four while all four agree.
    earlier = [f for f in reversed(frames[:at]) if f['world']][:2]
    later = [f for f in frames[at + 1:] if f['world']][:2]
    if len(earlier) < 2 or len(later) < 2:
        print('the flash frame needs two world frames on each side in the mark')
        return 1
    around = earlier + later
    print(f"flash frame {flash['number']} ({len(flash['draws'])} draws) against "
          + ', '.join(f"{f['number']} ({len(f['draws'])})" for f in around))

    to = [match(flash, f) for f in around]          # flash index -> index in each
    found = Counter()
    lines = []

    # Drawn in all four, one fewer time in the flash frame.
    ref = around[0]
    ref_to = [match(ref, f) for f in around[1:]]
    in_flash = set(to[0].values())
    for i, d in enumerate(ref['draws']):
        if i in in_flash or not all(i in m for m in ref_to):
            continue
        found['missing'] += 1
        lines.append(('missing', f"missing: #{i} of {ref['number']}: {name(d)}", d.get('cm') == '00000000'))

    for i, d in enumerate(flash['draws']):
        if not all(i in m for m in to):
            continue
        others = [f['draws'][m[i]] for f, m in zip(around, to)]
        depth = d.get('cm') == '00000000'
        if d['skipped'] and not any(o['skipped'] for o in others):
            found['skipped'] += 1
            lines.append(('skipped', f"skipped: #{i} {name(d)}: {d['skipped']}", depth))
        views = [texture_view(o) for o in others]
        mine = texture_view(d)
        for slot in sorted(set(mine).union(*views)):
            theirs = {repr(v.get(slot)) for v in views}
            if len(theirs) == 1 and mine.get(slot) != views[0].get(slot):
                found['texture'] += 1
                lines.append(('texture', f"texture: #{i} {name(d)} slot {slot}: "
                                         f"{mine.get(slot)} where the others have {views[0].get(slot)}", depth))
        for field in FIELDS:
            theirs = {o.get(field) for o in others}
            if len(theirs) == 1 and d.get(field) != others[0].get(field):
                found[KINDS[field]] += 1
                lines.append((KINDS[field], f"{KINDS[field]}: #{i} {name(d)} {field}: "
                                            f"{d.get(field)} where the others have {others[0].get(field)}", depth))

    if flash['late']:
        users = Counter()
        late = set(flash['late'])
        for i, d in enumerate(flash['draws']):
            for slot, t in d['tex'].items():
                if t[5] in late:
                    users[(t[1], t[2], t[3])] += 1
        print(f"re-staged before this frame's submit: {len(late)} texture(s); "
              f"drawn from by {sum(users.values())} draw(s) of the frame")
        for (address, fmt, size), count in users.most_common(8):
            print(f"  {address} format {fmt} {size}: {count} draw(s)")

    if not lines:
        print('nothing the frames around agree on differs in the flash frame')
        return 0
    # What writes colour is what can be seen; depth-only draws differ from frame
    # to frame by the leftovers of the stream (the pixel shader and alpha state
    # a technique without its own inherits), and come after.
    visible = [(k, t, depth) for k, t, depth in lines if not depth]
    hidden = [(k, t, depth) for k, t, depth in lines if depth]
    for title, part in (('draws that write colour', visible), ('draws that write only depth', hidden)):
        if not part:
            print(f'{title}: nothing differs')
            continue
        count = Counter(k for k, _, _ in part)
        print(f'{title}: ' + ', '.join(f'{k} {v}' for k, v in count.most_common()))
        shown = Counter()
        for kind, text, _ in part:
            shown[kind] += 1
            if shown[kind] <= 12:
                print('  ' + text)
            elif shown[kind] == 13:
                print(f'  ... and more {kind}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
