#!/usr/bin/env python3
"""Print string literals referenced by code in a guest address range."""
import struct, sys, re
import title
img=title.image(); BASE=title.BASE
def w(a): return struct.unpack_from(">I",img,a-BASE)[0]
lo=int(sys.argv[1],16); hi=int(sys.argv[2],16)

def readstr(a, maxlen=200):
    off=a-BASE
    if off<0 or off>=len(img): return None
    end=img.find(b"\0", off, off+maxlen)
    if end<0: return None
    s=img[off:end]
    if len(s)<3: return None
    if not all(32<=c<127 or c in (9,10,13) for c in s): return None
    return s.decode('latin-1')

seen={}
for a in range(lo, hi, 4):
    x=w(a)
    if (x>>26)!=15: continue
    rt=(x>>21)&31; himm=(x&0xFFFF)<<16
    for j in range(1,10):
        y=w(a+4*j); op=y>>26
        if op==14 and ((y>>16)&31)==rt:
            d=y&0xFFFF
            if d&0x8000: d-=0x10000
            v=(himm+d)&0xFFFFFFFF
            s=readstr(v)
            if s: seen.setdefault(s, a)
            break
        if op==15 and ((y>>21)&31)==rt: break
for s,a in sorted(seen.items(), key=lambda kv: kv[1]):
    print(f"0x{a:08X}  {s!r}")
