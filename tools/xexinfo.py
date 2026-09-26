#!/usr/bin/env python3
"""XEX2 header dumper."""
import struct, sys

NAMES = {
0x000002FF:"RESOURCE_INFO",0x000003FF:"FILE_FORMAT_INFO",0x000004FF:"BASE_REFERENCE",
0x000005FF:"DELTA_PATCH_DESCRIPTOR",0x000080FF:"BOUNDING_PATH",0x00008105:"DEVICE_ID",
0x00010001:"ORIGINAL_BASE_ADDRESS",0x00010100:"ENTRY_POINT",0x00010201:"IMAGE_BASE_ADDRESS",
0x000103FF:"IMPORT_LIBRARIES",0x00018002:"CHECKSUM_TIMESTAMP",0x00018102:"ENABLED_FOR_CALLCAP",
0x00018200:"ENABLED_FOR_FASTCAP",0x000183FF:"ORIGINAL_PE_NAME",0x000200FF:"STATIC_LIBRARIES",
0x00020104:"TLS_INFO",0x00020200:"DEFAULT_STACK_SIZE",0x00020301:"DEFAULT_FS_CACHE_SIZE",
0x00020401:"DEFAULT_HEAP_SIZE",0x00028002:"PAGE_HEAP_SIZE_FLAGS",0x00030000:"SYSTEM_FLAGS",
0x00040006:"EXECUTION_INFO",0x00040201:"TITLE_WORKSPACE_SIZE",0x00040310:"GAME_RATINGS",
0x00040404:"LAN_KEY",0x000405FF:"XBOX360_LOGO",0x000406FF:"MULTIDISC_MEDIA_IDS",
0x000407FF:"ALTERNATE_TITLE_IDS",0x00040801:"ADDITIONAL_TITLE_MEM",0x00E10402:"EXPORTS_BY_NAME",
}
ENC = {0:"NONE",1:"NORMAL"}
COMP = {0:"NONE",1:"BASIC(raw blocks)",2:"NORMAL(LZX)",3:"DELTA"}

d = open(sys.argv[1],"rb").read()
u32 = lambda o: struct.unpack_from(">I",d,o)[0]
u16 = lambda o: struct.unpack_from(">H",d,o)[0]

assert d[:4]==b"XEX2"
mflags, pe_off, _res, sec_off, nopt = struct.unpack_from(">IIIII",d,4)
print(f"module_flags     0x{mflags:08X}")
print(f"pe_data_offset   0x{pe_off:08X}  (file size 0x{len(d):X})")
print(f"security_offset  0x{sec_off:08X}")
print(f"opt_headers      {nopt}")
hdrs={}
for i in range(nopt):
    k,v = struct.unpack_from(">II",d,0x18+i*8)
    hdrs[k]=v
    n=NAMES.get(k,"?")
    inline = (k & 0xFF) <= 1
    print(f"  0x{k:08X} {n:<24} {'value' if inline else 'off  '}=0x{v:08X}")

# --- security info ---
si = sec_off
sec_size, img_size = struct.unpack_from(">II",d,si)
print(f"\n[security info] header_size=0x{sec_size:X} image_size=0x{img_size:X} ({img_size/1e6:.1f} MB)")
# XEX2 security info: 0:size 4:image_size 8:rsa_sig(256) 264:unk_size 268:image_flags
# 272:load_address 276:section_digest(20) 296:import_table_count 300:import_digest(20)
# 320:media_id(16) 336:aes_key(16) 352:export_table 356:header_digest(20) 376:region 380:allowed_media
img_flags, load_addr = struct.unpack_from(">II",d,si+268)
imp_count = u32(si+296)
region = u32(si+376); allowed = u32(si+380)
print(f"image_flags=0x{img_flags:08X} load_address=0x{load_addr:08X} import_tables={imp_count} region=0x{region:08X} allowed_media=0x{allowed:08X}")
print(f"media_id={d[si+320:si+336].hex()}")
print(f"aes_key(enc)={d[si+336:si+352].hex()}")
npage = u32(si+384)
print(f"page_descriptors={npage}")

# --- file format ---
if 0x000003FF in hdrs:
    o=hdrs[0x000003FF]
    ffsize=u32(o); enc=u16(o+4); comp=u16(o+6)
    print(f"\n[file format] size=0x{ffsize:X} encryption={enc}({ENC.get(enc,'?')}) compression={comp}({COMP.get(comp,'?')})")
    if comp==1:
        n=(ffsize-8)//8
        tot_d=tot_z=0
        print(f"  basic blocks: {n}")
        for i in range(n):
            ds,zs = struct.unpack_from(">II",d,o+8+i*8)
            tot_d+=ds; tot_z+=zs
            if i<8: print(f"    data=0x{ds:08X} zero=0x{zs:08X}")
        print(f"  total data=0x{tot_d:X} zero=0x{tot_z:X} sum=0x{tot_d+tot_z:X}")
    elif comp==2:
        wsize, blk_size = struct.unpack_from(">II",d,o+8)
        print(f"  LZX window=0x{wsize:X} first_block_size=0x{blk_size:X}")
        print(f"  first_block_hash={d[o+16:o+36].hex()}")

# --- exec info ---
if 0x00040006 in hdrs:
    o=hdrs[0x00040006]
    media_id, ver, base_ver = struct.unpack_from(">III",d,o)
    tid = u32(o+12)
    plat, exec_type, disc_num, disc_count = struct.unpack_from(">BBBB",d,o+16)
    print(f"\n[exec info] title_id=0x{tid:08X} ('{struct.pack('>I',tid)[:2].decode('latin-1')}-{tid&0xFFFF}') version=0x{ver:08X} base_version=0x{base_ver:08X} disc {disc_num}/{disc_count}")

# --- names ---
if 0x000183FF in hdrs:
    o=hdrs[0x000183FF]; sz=u32(o)
    print(f"\n[original pe name] {d[o+4:o+sz].split(bytes(1))[0].decode('latin-1')}")
if 0x000200FF in hdrs:
    o=hdrs[0x000200FF]; sz=u32(o); n=(sz-4)//16
    print(f"[static libraries] {n}")
    for i in range(n):
        p=o+4+i*16
        nm=d[p:p+8].split(bytes(1))[0].decode('latin-1')
        maj,mnr,bld = struct.unpack_from(">HHH",d,p+8)
        qfe,=struct.unpack_from(">H",d,p+14)
        print(f"    {nm:<10} {maj}.{mnr}.{bld}.{qfe>>8}")
if 0x000103FF in hdrs:
    o=hdrs[0x000103FF]; sz=u32(o); strtab_size=u32(o+4); count=u32(o+8)
    print(f"\n[import libraries] size=0x{sz:X} count={count}")
    names=d[o+12:o+12+strtab_size].split(bytes(1))
    print("    " + ", ".join(x.decode('latin-1') for x in names if x))
