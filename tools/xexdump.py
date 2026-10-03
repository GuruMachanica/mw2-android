#!/usr/bin/env python3
"""Decrypt + decompress (basic, or none) an XEX2 into its raw PE image, and dump PE sections."""
import struct, sys, subprocess, os

RETAIL_KEY = "20B185A59D28FDC340583FBB0896BF91"
ZERO_IV = "00"*16

def aes_cbc_dec(key_hex, data):
    return subprocess.run(
        ["openssl","enc","-aes-128-cbc","-d","-K",key_hex,"-iv",ZERO_IV,"-nopad"],
        input=data, capture_output=True, check=True).stdout

def load(path):
    d = open(path,"rb").read()
    u32 = lambda o: struct.unpack_from(">I",d,o)[0]
    u16 = lambda o: struct.unpack_from(">H",d,o)[0]
    assert d[:4]==b"XEX2"
    header_size = u32(8); sec_off = u32(0x10); nopt = u32(0x14)
    hdrs = {}
    for i in range(nopt):
        k,v = struct.unpack_from(">II",d,0x18+i*8); hdrs[k]=v
    enc_key = d[sec_off+336:sec_off+352]
    ff = hdrs[0x000003FF]
    ffsize=u32(ff); enc=u16(ff+4); comp=u16(ff+6)
    src = d[header_size:]
    if enc == 1:
        session = aes_cbc_dec(RETAIL_KEY, enc_key)
        # pad src to 16-byte multiple for openssl
        pad = (-len(src)) % 16
        src = aes_cbc_dec(session.hex(), src + bytes(pad))[:len(src)+pad]
        print(f"# session key = {session.hex()}", file=sys.stderr)
    if comp == 0:       # stored as it is: what applying a title update writes
        return bytes(src), hdrs, d
    assert comp == 1, f"unsupported compression {comp}"
    n = (ffsize - 8)//8
    out = bytearray(); p = 0
    for i in range(n):
        ds, zs = struct.unpack_from(">II", d, ff+8+i*8)
        out += src[p:p+ds]; p += ds
        out += bytes(zs)
    return bytes(out), hdrs, d

if __name__ == "__main__":
    img, hdrs, raw = load(sys.argv[1])
    out = sys.argv[2]
    open(out,"wb").write(img)
    print(f"# image {len(img)} bytes -> {out}", file=sys.stderr)
    assert img[:2]==b"MZ", f"not a PE after decrypt: {img[:8].hex()}"
    e_lfanew = struct.unpack_from("<I", img, 0x3C)[0]
    assert img[e_lfanew:e_lfanew+4]==b"PE\0\0"
    fh = e_lfanew+4
    machine, nsec, ts, psym, nsym, opt_sz, chars = struct.unpack_from("<HHIIIHH", img, fh)
    oh = fh+20
    base = struct.unpack_from("<I", img, oh+28)[0]
    ep   = struct.unpack_from("<I", img, oh+16)[0]
    print(f"machine=0x{machine:04X} sections={nsec} image_base=0x{base:08X} entry_rva=0x{ep:08X} -> 0x{base+ep:08X}")
    sh = oh+opt_sz
    for i in range(nsec):
        p = sh+i*40
        nm = img[p:p+8].rstrip(b"\0").decode('latin-1')
        vsz, va, rsz, ra = struct.unpack_from("<IIII", img, p+8)
        ch, = struct.unpack_from("<I", img, p+36)
        print(f"  {nm:<9} va=0x{base+va:08X} vsize=0x{vsz:08X} rawoff=0x{ra:08X} rawsize=0x{rsz:08X} chars=0x{ch:08X}")
