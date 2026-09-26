#!/usr/bin/env python3
"""Call graph over the flat guest image, using .pdata for function bounds."""
import struct, bisect, sys, json
import title
img=title.image(); BASE=title.BASE
TVA,TSZ=title.text(img)
def w(a): return struct.unpack_from(">I",img,a-BASE)[0]

FUNCS=sorted(title.functions(img).items()); FS=[f[0] for f in FUNCS]
def owner(a):
    i=bisect.bisect_right(FS,a)-1
    if i>=0 and FUNCS[i][0]<=a<FUNCS[i][0]+FUNCS[i][1]: return FUNCS[i][0]
    return None

# import thunks: XEX import stubs are 4-instruction sequences that the loader
# patches; in the decrypted image they appear as li r3/blr or jump stubs.
callers={}   # callee -> set(caller)
callees={}   # caller -> set(callee)
sites=[]
for a in range(TVA, TVA+TSZ, 4):
    x=w(a)
    if (x>>26)!=18:  continue
    if not (x&1):    continue          # need LK (bl)
    if x&2:          continue          # absolute
    d=x&0x03FFFFFC
    if d&0x02000000: d-=0x04000000
    t=(a+d)&0xFFFFFFFF
    c=owner(a)
    if c is None: continue
    callers.setdefault(t,set()).add(c)
    callees.setdefault(c,set()).add(t)
    sites.append((a,c,t))

if __name__=="__main__":
    cmd=sys.argv[1]
    if cmd=="callers":
        t=int(sys.argv[2],16)
        for c in sorted(callers.get(t,())): print(f"0x{c:08X}")
    elif cmd=="callees":
        c=int(sys.argv[2],16)
        for t in sorted(callees.get(c,())): print(f"0x{t:08X}  ({len(callers.get(t,()))} callers)")
    elif cmd=="cross":
        # functions in [lo,hi) called from outside [lo,hi)
        lo=int(sys.argv[2],16); hi=int(sys.argv[3],16)
        rows=[]
        for t,cs in callers.items():
            if lo<=t<hi:
                out=[c for c in cs if not (lo<=c<hi)]
                if out: rows.append((len(out),t,sorted(out)))
        rows.sort(reverse=True)
        print(f"{len(rows)} entry points into [{lo:08X},{hi:08X}) from outside")
        for n,t,out in rows: print(f"0x{t:08X}  {n} external callers")
    elif cmd=="funcs":
        lo=int(sys.argv[2],16); hi=int(sys.argv[3],16)
        for a,s in FUNCS:
            if lo<=a<hi: print(f"0x{a:08X}  size 0x{s:X}  {len(callers.get(a,()))} callers")
