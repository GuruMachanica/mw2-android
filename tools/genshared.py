#!/usr/bin/env python3
import re,glob
import title
defs=set(); refs=set()
for f in sorted(glob.glob(title.ppc("ppc_recomp.*.cpp")))+[title.ppc("ppc_func_mapping.cpp")]:
    s=open(f).read()
    defs|=set(re.findall(r'(?:PPC_FUNC_IMPL|PPC_WEAK_FUNC)\(([A-Za-z_][A-Za-z0-9_]*)\)',s))
    refs|=set(re.findall(r'\b([A-Za-z_][A-Za-z0-9_]*)\(ctx, base\)',s))
    refs|=set(re.findall(r'\{ 0x[0-9A-F]+, ([A-Za-z_][A-Za-z0-9_]*) \}',s))
refs.discard('PPC_CALL_INDIRECT_FUNC')
allnames=defs|refs
HEADER = """#pragma once

// With MW2_TRACE_INDIRECT the generated code reports the guest address of any
// indirect call whose function-table slot is empty, instead of jumping to null.
#ifdef MW2_TRACE_INDIRECT
extern "C" void MW2ReportBadIndirectCall(unsigned int guestAddress);
#define PPC_CALL_INDIRECT_FUNC(x) \\
    do { \\
        PPCFunc* mw2_target = PPC_LOOKUP_FUNC(base, x); \\
        if (!mw2_target) MW2ReportBadIndirectCall((unsigned int)(x)); \\
        mw2_target(ctx, base); \\
    } while (0)
#endif

#include "ppc_context.h"

extern "C" {
"""
with open(title.ppc("ppc_recomp_shared.h"),"w") as o:
    o.write(HEADER)
    for nm in sorted(allnames): o.write(f"PPC_FUNC({nm});\n")
    o.write("}\n")
imports=sorted(n for n in refs-defs if n.startswith("__imp__"))
# The runtime supplies these; record the list for tools/gen_kernel_stubs.py.
with open(title.ppc("kernel_imports.txt"),"w") as o:
    o.write("\n".join(n[len("__imp__"):] for n in imports) + "\n")
missing=sorted(n for n in refs-defs if not n.startswith("__imp__"))
print(f"defined={len(defs)} referenced={len(refs)} declared={len(allnames)} kernel_imports={len(imports)}")
print(f"referenced-but-undefined non-import symbols: {len(missing)} {missing[:10]}")
