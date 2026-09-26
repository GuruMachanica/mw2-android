#!/usr/bin/env python3
"""Analysis of the decrypted XEX memory image (RVA == file offset)."""
import struct, sys, collections
import title
img = title.image()
BASE=0x82000000
e=struct.unpack_from("<I",img,0x3C)[0]; fh=e+4
nsec=struct.unpack_from("<H",img,fh+2)[0]; opt_sz=struct.unpack_from("<H",img,fh+16)[0]; sh=fh+20+opt_sz
S={}
for i in range(nsec):
    p=sh+i*40; nm=img[p:p+8].rstrip(b"\0").decode(); vsz,va,rsz,ra=struct.unpack_from("<IIII",img,p+8)
    S[nm]=(BASE+va,vsz)
tva,tvsz = S[".text"]
text = img[tva-BASE : tva-BASE+tvsz]
n = len(text)//4
words = struct.unpack(f">{n}I", text[:n*4])
print(f".text 0x{tva:08X}..0x{tva+tvsz:08X}  {n} instructions\n")

PATTERNS = {
 "restgprlr_14": "e9c1ff68", "savegprlr_14": "f9c1ff68",
 "restfpr_14":   "c9ccff70", "savefpr_14":   "d9ccff70",
 "restvmx_14":   "3960fee07dcb60ce", "savevmx_14": "3960fee07dcb61ce",
 "restvmx_64":   "3960fc00100b60cb", "savevmx_64": "3960fc00100b61cb",
}
print("register save/restore functions:")
addrs={}
for nm,ph in PATTERNS.items():
    pat=bytes.fromhex(ph); hits=[]; off=0
    while True:
        j=text.find(pat,off)
        if j<0: break
        hits.append(tva+j); off=j+1
    addrs[nm]=hits
    print(f"  {nm:<14} {', '.join(hex(h).upper().replace('0X','0x') for h in hits) if hits else 'NOT FOUND'}")

BCTR,BCTRL,BLR = 0x4E800420,0x4E800421,0x4E800020
def mtctr(r): return 0x7C0903A6|(r<<21)
MT={mtctr(r):r for r in range(32)}
bctr=[tva+i*4 for i,x in enumerate(words) if x==BCTR]
print(f"\nindirect branches: bctr={len(bctr)} bctrl={sum(1 for x in words if x==BCTRL)} blr={sum(1 for x in words if x==BLR)}")
jt=0; vc=0; none=0; dist=collections.Counter()
jt_addrs=[]
for a in bctr:
    i=(a-tva)//4; found=None
    for k in range(1,33):
        if i-k<0: break
        if words[i-k] in MT: found=MT[words[i-k]]; break
    if found is None: none+=1
    else:
        dist[found]+=1
        if found==0: jt+=1; jt_addrs.append(a)
        else: vc+=1
print(f"  bctr preceded by 'mtctr r0' (classic jump table): {jt}")
print(f"  bctr preceded by 'mtctr rN', N!=0 (vcall/other):  {vc}")
print(f"  bctr with no mtctr within 32 insns:               {none}")
print(f"  mtctr source reg distribution: {dict(dist.most_common())}")

# XenonAnalyse's own trigger: it only fires when insn before bctr is lis-ish pattern
# check the two magic words it looks for: *(data-1) == 0x07008038 (LE) -> BE 0x38800007 ; 0x00000060 -> 0x60000000 (nop)
prev=collections.Counter()
for a in jt_addrs:
    i=(a-tva)//4
    prev[f"{words[i-1]:08X}"]+=1
print(f"\n  instruction immediately before each 'mtctr r0' bctr (top 10):")
for k,v in prev.most_common(10): print(f"    {k}  x{v}")
open("/tmp/jt_addrs.txt","w").write("\n".join(hex(a) for a in jt_addrs))
