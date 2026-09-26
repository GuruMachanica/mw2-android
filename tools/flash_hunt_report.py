#!/usr/bin/env python3
"""After tools/flash_hunt.sh: each F7, the texture lines just before it, and the
kept frames turned into PNGs.

    tools/flash_hunt_report.py diagnosis/hunt/<run>
"""
import os
import re
import sys

LOOKBACK = 3.0  # seconds before an F7 that a flash can have happened

STAMPED = re.compile(r'^\s*(\d+\.\d+) (.*)$')
PRESSED = re.compile(r'FLASH MARK (\d+): (?:F7|pad Y) pressed')
WRITING = re.compile(r'FLASH MARK (\d+): writing (\d+) frames, renderer (\d+)\.\.(\d+), '
                     r'texture (\d+)\.\.(\d+)')
TEXTURE = re.compile(r'still empty at submit, (\S+ fmt \d+ at [0-9A-F]{8})')
FRAME = re.compile(r'frame (\d+)')


def main(run):
    marks, writes, empties = {}, {}, []
    with open(os.path.join(run, 'full.log'), errors='replace') as log:
        for line in log:
            m = STAMPED.match(line)
            if not m:
                continue
            t, text = float(m.group(1)), m.group(2)
            if p := PRESSED.search(text):
                marks[int(p.group(1))] = t
            elif w := WRITING.search(text):
                writes[int(w.group(1))] = tuple(int(x) for x in w.groups()[2:])
            elif e := TEXTURE.search(text):
                f = FRAME.search(text[e.end():])
                empties.append((t, int(f.group(1)) if f else None, e.group(1)))

    print(f'{len(marks)} F7 press(es); {len(empties)} texture(s) reached the screen empty')
    for n in sorted(marks):
        t = marks[n]
        print(f'\nmark {n} at {t:.3f} s', end='')
        if n in writes:
            r0, r1, t0, t1 = writes[n]
            print(f'  (frames kept: renderer {r0}..{r1}, texture {t0}..{t1}, in mark_{n:02d}/)')
        else:
            print()
        near = [e for e in empties if t - LOOKBACK <= e[0] <= t + 0.2]
        if not near:
            print(f'  no texture reached the screen empty in the {LOOKBACK:.0f} s before it'
                  ' -- this flash is something else')
        for et, frame, what in near:
            print(f'  {et:9.3f} s ({t - et:4.2f} s before F7)  texture frame {frame}: {what}')

    convert(run)


def convert(run):
    try:
        from PIL import Image
    except ImportError:
        return
    count = 0
    for root, _, files in os.walk(run):
        for name in files:
            if name.endswith('.pnm'):
                path = os.path.join(root, name)
                try:
                    Image.open(path).save(path[:-4] + '.png')
                    os.remove(path)
                    count += 1
                except OSError:
                    pass
    if count:
        print(f'\n{count} kept frame(s) saved as PNG')
        print('the draws of a frame that flashed, against the frames around it:'
              ' tools/flash_draws.py <mark dir> <frame>')


if __name__ == '__main__':
    main(sys.argv[1] if len(sys.argv) > 1 else '.')
