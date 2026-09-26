#!/usr/bin/env python3
"""Find code that materialises an address in a given range via lis/addi."""
import struct, sys, bisect
import title
img=title.image(); BASE=title.BASE
def w(a): return struct.unpack_from(">I",img,a-BASE)[0]
TVA,TSZ=title.text(img)

FUNCS=sorted(title.functions(img).items()); FS=[f[0] for f in FUNCS]
def owner(a):
    i=bisect.bisect_right(FS,a)-1
    if i>=0 and FUNCS[i][0]<=a<FUNCS[i][0]+FUNCS[i][1]: return FUNCS[i][0]
    return None

def xrefs(lo, hi):
    """-> {value: [(site, ownerFunc)]}"""
    out={}
    for a in range(TVA, TVA+TSZ-8, 4):
        x=w(a)
        if (x>>26)!=15: continue                       # lis rT, imm
        rt=(x>>21)&31
        himm=(x&0xFFFF)<<16
        for j in range(1,10):
            y=w(a+4*j)
            op=y>>26
            if op==14 and ((y>>16)&31)==rt:            # addi rD, rT, imm
                d=y&0xFFFF
                if d&0x8000: d-=0x10000
                v=(himm+d)&0xFFFFFFFF
                if lo<=v<hi: out.setdefault(v,[]).append((a, owner(a)))
                break
            if op in (32,36,40,44,37,45,34,38) and ((y>>16)&31)==rt:   # lwz/stw/lhz/sth/lbz/stb rD, d(rT)
                d=y&0xFFFF
                if d&0x8000: d-=0x10000
                v=(himm+d)&0xFFFFFFFF
                if lo<=v<hi: out.setdefault(v,[]).append((a, owner(a)))
                break
            if op==15 and ((y>>21)&31)==rt: break      # rT reloaded
        # also lis followed later by lwarx/stwcx via addi handled above
    return out

if __name__=="__main__":
    lo=int(sys.argv[1],16); hi=int(sys.argv[2],16)
    r=xrefs(lo,hi)
    for v in sorted(r):
        print(f"0x{v:08X}:")
        for site,own in r[v]:
            print(f"    site 0x{site:08X}  in function {('sub_%08X'%own) if own else '(leaf/unknown)'}")
