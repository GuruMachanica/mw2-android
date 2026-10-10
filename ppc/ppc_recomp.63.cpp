#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8228B2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8228B2C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,14404
	ctx.r10.s64 = ctx.r11.s64 + 14404;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// bl 0x8228b248
	ctx.lr = 0x8228B2E8;
	sub_8228B248(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lwz r8,0(r13)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r9,-16304
	ctx.r31.s64 = ctx.r9.s64 + -16304;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r6,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
	// bl 0x822e85b0
	ctx.lr = 0x8228B30C;
	sub_822E85B0(ctx, base);
	// addi r5,r31,308
	ctx.r5.s64 = ctx.r31.s64 + 308;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r29,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8228B320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B2C0) {
	__imp__sub_8228B2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B32C) {
	__imp__sub_8228B32C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-16108
	ctx.r30.s64 = ctx.r11.s64 + -16108;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r9,r30,112
	ctx.r9.s64 = ctx.r30.s64 + 112;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// add r8,r31,r30
	ctx.r8.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r5,r10,-19776
	ctx.r5.s64 = ctx.r10.s64 + -19776;
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fca8
	ctx.lr = 0x8228B378;
	sub_8236FCA8(ctx, base);
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// addi r6,r7,14404
	ctx.r6.s64 = ctx.r7.s64 + 14404;
	// stwx r3,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r4,r31,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x8228b248
	ctx.lr = 0x8228B394;
	sub_8228B248(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B330) {
	__imp__sub_8228B330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B3AC) {
	__imp__sub_8228B3AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31919
	ctx.r31.s64 = -2091843584;
	// addi r30,r31,-16360
	ctx.r30.s64 = ctx.r31.s64 + -16360;
	// lwz r3,296(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// bl 0x8236fa98
	ctx.lr = 0x8228B3D4;
	sub_8236FA98(ctx, base);
	// lwz r3,360(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// bl 0x8236fa98
	ctx.lr = 0x8228B3DC;
	sub_8236FA98(ctx, base);
	// lwz r3,-16360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16360);
	// bl 0x8236fa58
	ctx.lr = 0x8228B3E4;
	sub_8236FA58(ctx, base);
	// lwz r3,352(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// bl 0x8236fa98
	ctx.lr = 0x8228B3EC;
	sub_8236FA98(ctx, base);
	// lwz r3,404(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// bl 0x8236fa58
	ctx.lr = 0x8228B3F4;
	sub_8236FA58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B3B0) {
	__imp__sub_8228B3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B414) {
	__imp__sub_8228B414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,-16340(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16340);
	// b 0x8236fb70
	sub_8236FB70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B418) {
	__imp__sub_8228B418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228B44C;
	sub_8236FAD0(ctx, base);
	// lis r31,-31919
	ctx.r31.s64 = -2091843584;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r31,-16348
	ctx.r10.s64 = ctx.r31.s64 + -16348;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// bl 0x8236fad0
	ctx.lr = 0x8228B470;
	sub_8236FAD0(ctx, base);
	// stw r3,-16348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16348, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B428) {
	__imp__sub_8228B428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r4,2
	ctx.r31.s64 = ctx.r4.s64 + 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8228b330
	ctx.lr = 0x8228B4AC;
	sub_8228B330(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-16060
	ctx.r9.s64 = ctx.r11.s64 + -16060;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228b4dc
	if (ctx.cr6.eq) goto loc_8228B4DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,17792
	ctx.r9.s64 = ctx.r11.s64 + 17792;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8236b890
	ctx.lr = 0x8228B4D8;
	sub_8236B890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8228B4DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B488) {
	__imp__sub_8228B488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B4F4) {
	__imp__sub_8228B4F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-16060
	ctx.r9.s64 = ctx.r11.s64 + -16060;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x8236b838
	sub_8236B838(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B4F8) {
	__imp__sub_8228B4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B50C) {
	__imp__sub_8228B50C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-16060
	ctx.r9.s64 = ctx.r11.s64 + -16060;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x8236fcb8
	sub_8236FCB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B510) {
	__imp__sub_8228B510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B524) {
	__imp__sub_8228B524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-16312
	ctx.r7.s64 = ctx.r11.s64 + -16312;
loc_8228B534:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228b534
	if (!ctx.cr0.eq) goto loc_8228B534;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwsync 
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B528) {
	__imp__sub_8228B528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8228B560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31919
	ctx.r30.s64 = -2091843584;
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r29,r30,-16012
	ctx.r29.s64 = ctx.r30.s64 + -16012;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -108);
	// bl 0x8236fb70
	ctx.lr = 0x8228B57C;
	sub_8236FB70(ctx, base);
	// lwz r3,-312(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -312);
	// bl 0x8236fa98
	ctx.lr = 0x8228B584;
	sub_8236FA98(ctx, base);
	// lwz r3,-304(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -304);
	// bl 0x8236fa58
	ctx.lr = 0x8228B58C;
	sub_8236FA58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-16012(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16012);
	// bl 0x8236fb70
	ctx.lr = 0x8228B598;
	sub_8236FB70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B558) {
	__imp__sub_8228B558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r10,-16312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16312);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B5A0) {
	__imp__sub_8228B5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B5B4) {
	__imp__sub_8228B5B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// li r11,1
	ctx.r11.s64 = 1;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// lwz r8,-16144(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16144);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// subfc r6,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r8.s64;
	// adde r3,r7,r9
	temp.u8 = (ctx.r7.u32 + ctx.r9.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B5B8) {
	__imp__sub_8228B5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r11,-16320
	ctx.r10.s64 = ctx.r11.s64 + -16320;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B5D8) {
	__imp__sub_8228B5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31919
	ctx.r31.s64 = -2091843584;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-16064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16064);
	// bl 0x8236fb70
	ctx.lr = 0x8228B608;
	sub_8236FB70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228b628
	if (!ctx.cr6.eq) goto loc_8228B628;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822ec4e8
	ctx.lr = 0x8228B618;
	sub_822EC4E8(ctx, base);
	// lwz r3,-16064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16064);
	// bl 0x8236fa98
	ctx.lr = 0x8228B620;
	sub_8236FA98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822ec500
	ctx.lr = 0x8228B628;
	sub_822EC500(ctx, base);
loc_8228B628:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B5E8) {
	__imp__sub_8228B5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B63C) {
	__imp__sub_8228B63C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-16000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16000);
	// bl 0x8236fb70
	ctx.lr = 0x8228B65C;
	sub_8236FB70(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B640) {
	__imp__sub_8228B640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B674) {
	__imp__sub_8228B674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16064(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16064);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B678) {
	__imp__sub_8228B678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B684) {
	__imp__sub_8228B684(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16000);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B688) {
	__imp__sub_8228B688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B694) {
	__imp__sub_8228B694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822ec4e8
	ctx.lr = 0x8228B6B8;
	sub_822EC4E8(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r31,r11,-16000
	ctx.r31.s64 = ctx.r11.s64 + -16000;
	// lwz r3,-64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// bl 0x8236fb70
	ctx.lr = 0x8228B6CC;
	sub_8236FB70(ctx, base);
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x8228b710
	if (ctx.cr6.eq) goto loc_8228B710;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8228B6E4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236fa58
	ctx.lr = 0x8228B6EC;
	sub_8236FA58(ctx, base);
loc_8228B6EC:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822ec500
	ctx.lr = 0x8228B6F4;
	sub_822EC500(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8228B710:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8228b6e4
	if (ctx.cr6.eq) goto loc_8228B6E4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236fa98
	ctx.lr = 0x8228B720;
	sub_8236FA98(ctx, base);
	// b 0x8228b6ec
	goto loc_8228B6EC;
}

PPC_WEAK_FUNC(sub_8228B698) {
	__imp__sub_8228B698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B724) {
	__imp__sub_8228B724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8236fa48
	ctx.lr = 0x8228B738;
	sub_8236FA48(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r11,-16108
	ctx.r10.s64 = ctx.r11.s64 + -16108;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B728) {
	__imp__sub_8228B728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8228b784
	if (!ctx.cr6.eq) goto loc_8228B784;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8228b7e0
	goto loc_8228B7E0;
loc_8228B784:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,14160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14160);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82310110
	ctx.lr = 0x8228B7B4;
	sub_82310110(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r9,-16308(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16308);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8228b7e0
	if (ctx.cr6.eq) goto loc_8228B7E0;
	// lwz r9,-16308(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16308);
	// subf. r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x8228b7e0
	if (!ctx.cr0.lt) goto loc_8228B7E0;
	// lwz r9,-16308(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16308);
	// subf. r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x8228b7e4
	if (!ctx.cr0.gt) goto loc_8228B7E4;
loc_8228B7E0:
	// stw r10,-16308(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16308, ctx.r10.u32);
loc_8228B7E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B760) {
	__imp__sub_8228B760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r30,r11,-16308
	ctx.r30.s64 = ctx.r11.s64 + -16308;
	// lwz r31,-16308(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16308);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8228b880
	if (ctx.cr6.eq) goto loc_8228B880;
	// bl 0x82310110
	ctx.lr = 0x8228B824;
	sub_82310110(ctx, base);
	// subf. r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8228b888
	if (ctx.cr0.lt) goto loc_8228B888;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// lfs f0,-30900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30900);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14160(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14160);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
loc_8228B850:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x8228b878
	if (!ctx.cr6.eq) goto loc_8228B878;
	// stwcx. r6,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228b850
	if (!ctx.cr0.eq) goto loc_8228B850;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8228b88c
	goto loc_8228B88C;
loc_8228B878:
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8228B880:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8228b88c
	goto loc_8228B88C;
loc_8228B888:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228B88C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B7F8) {
	__imp__sub_8228B7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B8A4) {
	__imp__sub_8228B8A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16360);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B8A8) {
	__imp__sub_8228B8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B8B4) {
	__imp__sub_8228B8B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16360);
	// b 0x8236fa98
	sub_8236FA98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B8B8) {
	__imp__sub_8228B8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B8C4) {
	__imp__sub_8228B8C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-16360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16360);
	// bl 0x8236fb70
	ctx.lr = 0x8228B8E4;
	sub_8236FB70(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B8C8) {
	__imp__sub_8228B8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B8FC) {
	__imp__sub_8228B8FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-16008(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16008);
	// bl 0x8236fb70
	ctx.lr = 0x8228B91C;
	sub_8236FB70(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B900) {
	__imp__sub_8228B900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B934) {
	__imp__sub_8228B934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16008(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16008);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B938) {
	__imp__sub_8228B938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B944) {
	__imp__sub_8228B944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-15956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15956);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B948) {
	__imp__sub_8228B948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B954) {
	__imp__sub_8228B954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-15956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15956);
	// b 0x8236fa98
	sub_8236FA98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B958) {
	__imp__sub_8228B958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B964) {
	__imp__sub_8228B964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,-15956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15956);
	// b 0x8236fb70
	sub_8236FB70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B968) {
	__imp__sub_8228B968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16356(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16356);
	// b 0x8236fa98
	sub_8236FA98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B978) {
	__imp__sub_8228B978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B984) {
	__imp__sub_8228B984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822ec4e8
	ctx.lr = 0x8228B9A0;
	sub_822EC4E8(ctx, base);
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,-16112
	ctx.r31.s64 = ctx.r10.s64 + -16112;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x8228B9B8;
	sub_822EC500(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228b9cc
	if (ctx.cr6.eq) goto loc_8228B9CC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8236fb70
	ctx.lr = 0x8228B9CC;
	sub_8236FB70(ctx, base);
loc_8228B9CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236fa58
	ctx.lr = 0x8228B9D4;
	sub_8236FA58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B988) {
	__imp__sub_8228B988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,-16356(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16356);
	// b 0x8236fb70
	sub_8236FB70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B9E8) {
	__imp__sub_8228B9E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-16112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16112);
	// bl 0x8236fb70
	ctx.lr = 0x8228BA14;
	sub_8236FB70(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B9F8) {
	__imp__sub_8228B9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BA2C) {
	__imp__sub_8228BA2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31919
	ctx.r31.s64 = -2091843584;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-16112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16112);
	// bl 0x8236fb70
	ctx.lr = 0x8228BA54;
	sub_8236FB70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ba88
	if (ctx.cr6.eq) goto loc_8228BA88;
	// bl 0x823ad840
	ctx.lr = 0x8228BA60;
	sub_823AD840(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228ba70
	if (ctx.cr6.eq) goto loc_8228BA70;
	// bl 0x823ad808
	ctx.lr = 0x8228BA70;
	sub_823AD808(ctx, base);
loc_8228BA70:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,-16112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16112);
	// bl 0x8236fb70
	ctx.lr = 0x8228BA7C;
	sub_8236FB70(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8228ba88
	if (ctx.cr6.eq) goto loc_8228BA88;
	// bl 0x823aee78
	ctx.lr = 0x8228BA88;
	sub_823AEE78(ctx, base);
loc_8228BA88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BA30) {
	__imp__sub_8228BA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-16112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16112);
	// bl 0x8236fb70
	ctx.lr = 0x8228BABC;
	sub_8236FB70(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BAA0) {
	__imp__sub_8228BAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BAD4) {
	__imp__sub_8228BAD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16112);
	// b 0x8236fa98
	sub_8236FA98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228BAD8) {
	__imp__sub_8228BAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BAE4) {
	__imp__sub_8228BAE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16356(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16356);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228BAE8) {
	__imp__sub_8228BAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BAF4) {
	__imp__sub_8228BAF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822ec4e8
	ctx.lr = 0x8228BB10;
	sub_822EC4E8(ctx, base);
	// lis r31,-31919
	ctx.r31.s64 = -2091843584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,-16004
	ctx.r10.s64 = ctx.r31.s64 + -16004;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x8228BB28;
	sub_822EC500(ctx, base);
	// lwz r3,-16004(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16004);
	// bl 0x8236fa58
	ctx.lr = 0x8228BB30;
	sub_8236FA58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BAF8) {
	__imp__sub_8228BAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BB44) {
	__imp__sub_8228BB44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-16004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16004);
	// bl 0x8236fb70
	ctx.lr = 0x8228BB64;
	sub_8236FB70(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BB48) {
	__imp__sub_8228BB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BB7C) {
	__imp__sub_8228BB7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16004(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16004);
	// b 0x8236fa98
	sub_8236FA98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228BB80) {
	__imp__sub_8228BB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BB8C) {
	__imp__sub_8228BB8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-16324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16324);
	// bl 0x8236fb70
	ctx.lr = 0x8228BBAC;
	sub_8236FB70(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r3,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BB90) {
	__imp__sub_8228BB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BBC4) {
	__imp__sub_8228BBC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-16324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16324);
	// bl 0x8236fb70
	ctx.lr = 0x8228BBE4;
	sub_8236FB70(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BBC8) {
	__imp__sub_8228BBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BBFC) {
	__imp__sub_8228BBFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31919
	ctx.r31.s64 = -2091843584;
	// addi r11,r31,-16012
	ctx.r11.s64 = ctx.r31.s64 + -16012;
	// lwz r3,-108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	// bl 0x8236fa98
	ctx.lr = 0x8228BC20;
	sub_8236FA98(ctx, base);
	// lwz r3,-16012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16012);
	// bl 0x8236fa58
	ctx.lr = 0x8228BC28;
	sub_8236FA58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BC00) {
	__imp__sub_8228BC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BC3C) {
	__imp__sub_8228BC3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16120);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228BC40) {
	__imp__sub_8228BC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BC4C) {
	__imp__sub_8228BC4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8236fa48
	ctx.lr = 0x8228BC60;
	sub_8236FA48(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r11,-16108
	ctx.r10.s64 = ctx.r11.s64 + -16108;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BC50) {
	__imp__sub_8228BC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8236fa48
	ctx.lr = 0x8228BC98;
	sub_8236FA48(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r11,-16108
	ctx.r10.s64 = ctx.r11.s64 + -16108;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BC88) {
	__imp__sub_8228BC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8236fa48
	ctx.lr = 0x8228BCD0;
	sub_8236FA48(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r11,-16108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16108);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BCC0) {
	__imp__sub_8228BCC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BCF4) {
	__imp__sub_8228BCF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BCF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r4,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BCF8) {
	__imp__sub_8228BCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BD10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BD10) {
	__imp__sub_8228BD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-16320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16320);
	// bl 0x8236fb70
	ctx.lr = 0x8228BD44;
	sub_8236FB70(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BD28) {
	__imp__sub_8228BD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BD5C) {
	__imp__sub_8228BD5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16320);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228BD60) {
	__imp__sub_8228BD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BD6C) {
	__imp__sub_8228BD6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16320);
	// b 0x8236fa98
	sub_8236FA98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228BD70) {
	__imp__sub_8228BD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BD7C) {
	__imp__sub_8228BD7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16320);
	// bl 0x8236fa58
	ctx.lr = 0x8228BD98;
	sub_8236FA58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236b768
	ctx.lr = 0x8228BDA0;
	sub_8236B768(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BD80) {
	__imp__sub_8228BD80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8236b940
	ctx.lr = 0x8228BDC0;
	sub_8236B940(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8228bdd4
	if (!ctx.cr6.eq) goto loc_8228BDD4;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-16140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16140, ctx.r10.u32);
loc_8228BDD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BDB0) {
	__imp__sub_8228BDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BDE4) {
	__imp__sub_8228BDE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8236b940
	ctx.lr = 0x8228BDF8;
	sub_8236B940(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8228be20
	if (!ctx.cr6.eq) goto loc_8228BE20;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-16320
	ctx.r9.s64 = ctx.r11.s64 + -16320;
	// lwz r3,-16320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16320);
	// stw r10,180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 180, ctx.r10.u32);
	// bl 0x8236fa58
	ctx.lr = 0x8228BE18;
	sub_8236FA58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236b768
	ctx.lr = 0x8228BE20;
	sub_8236B768(ctx, base);
loc_8228BE20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BDE8) {
	__imp__sub_8228BDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r10,-16140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8236b768
	sub_8236B768(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228BE30) {
	__imp__sub_8228BE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BE48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BE48) {
	__imp__sub_8228BE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BE4C) {
	__imp__sub_8228BE4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-16320
	ctx.r10.s64 = ctx.r11.s64 + -16320;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8236fb70
	ctx.lr = 0x8228BE70;
	sub_8236FB70(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BE50) {
	__imp__sub_8228BE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,-16124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16124);
	// b 0x8236fb70
	sub_8236FB70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228BE88) {
	__imp__sub_8228BE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16124);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228BE98) {
	__imp__sub_8228BE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BEA4) {
	__imp__sub_8228BEA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16124);
	// b 0x8236fa98
	sub_8236FA98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228BEA8) {
	__imp__sub_8228BEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BEB4) {
	__imp__sub_8228BEB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228BEC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x822ec4e8
	ctx.lr = 0x8228BECC;
	sub_822EC4E8(ctx, base);
	// bl 0x82390b00
	ctx.lr = 0x8228BED0;
	sub_82390B00(ctx, base);
	// bl 0x823ad840
	ctx.lr = 0x8228BED4;
	sub_823AD840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8228bee0
	if (!ctx.cr6.eq) goto loc_8228BEE0;
	// bl 0x823aee78
	ctx.lr = 0x8228BEE0;
	sub_823AEE78(ctx, base);
loc_8228BEE0:
	// bl 0x8238d648
	ctx.lr = 0x8228BEE4;
	sub_8238D648(ctx, base);
	// bl 0x8236fa48
	ctx.lr = 0x8228BEE8;
	sub_8236FA48(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-16108
	ctx.r30.s64 = ctx.r11.s64 + -16108;
loc_8228BEFC:
	// cmplwi cr6,r29,9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 9, ctx.xer);
	// beq cr6,0x8228bf2c
	if (ctx.cr6.eq) goto loc_8228BF2C;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228bf2c
	if (ctx.cr6.eq) goto loc_8228BF2C;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228bf2c
	if (ctx.cr6.eq) goto loc_8228BF2C;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8228bf2c
	if (ctx.cr6.eq) goto loc_8228BF2C;
	// bl 0x8236b838
	ctx.lr = 0x8228BF2C;
	sub_8236B838(ctx, base);
loc_8228BF2C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,40
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 40, ctx.xer);
	// blt cr6,0x8228befc
	if (ctx.cr6.lt) goto loc_8228BEFC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228BEB8) {
	__imp__sub_8228BEB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BF44) {
	__imp__sub_8228BF44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r3,-16324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16324);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228BF48) {
	__imp__sub_8228BF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228BF54) {
	__imp__sub_8228BF54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228BF84;
	sub_8236FAD0(ctx, base);
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-16060
	ctx.r31.s64 = ctx.r10.s64 + -16060;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,-284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -284, ctx.r11.u32);
	// bl 0x8228b330
	ctx.lr = 0x8228BFA0;
	sub_8228B330(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228bfc0
	if (ctx.cr6.eq) goto loc_8228BFC0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8236b890
	ctx.lr = 0x8228BFB4;
	sub_8236B890(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8236fcb8
	ctx.lr = 0x8228BFBC;
	sub_8236FCB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8228BFC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BF58) {
	__imp__sub_8228BF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228BFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8236fa48
	ctx.lr = 0x8228BFEC;
	sub_8236FA48(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r31,r11,-16304
	ctx.r31.s64 = ctx.r11.s64 + -16304;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228c048
	if (ctx.cr6.eq) goto loc_8228C048;
	// bl 0x8236fa48
	ctx.lr = 0x8228C004;
	sub_8236FA48(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8228c048
	if (ctx.cr6.eq) goto loc_8228C048;
	// bl 0x8236fa48
	ctx.lr = 0x8228C014;
	sub_8236FA48(ctx, base);
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// addi r9,r31,144
	ctx.r9.s64 = ctx.r31.s64 + 144;
	// li r3,9
	ctx.r3.s64 = 9;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x822e85b0
	ctx.lr = 0x8228C030;
	sub_822E85B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8228C048:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228BFD8) {
	__imp__sub_8228BFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228C068;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r31,r11,-16320
	ctx.r31.s64 = ctx.r11.s64 + -16320;
loc_8228C07C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8228C080:
	// addi r29,r31,-16
	ctx.r29.s64 = ctx.r31.s64 + -16;
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228c0b8
	if (!ctx.cr6.eq) goto loc_8228C0B8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// blt cr6,0x8228c080
	if (ctx.cr6.lt) goto loc_8228C080;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// bl 0x8236fb70
	ctx.lr = 0x8228C0A8;
	sub_8236FB70(ctx, base);
	// lwz r3,-24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// bl 0x8236fa98
	ctx.lr = 0x8228C0B0;
	sub_8236FA98(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8228c07c
	goto loc_8228C07C;
loc_8228C0B8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8228c0d0
	if (ctx.cr6.eq) goto loc_8228C0D0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236fa58
	ctx.lr = 0x8228C0C8;
	sub_8236FA58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236b768
	ctx.lr = 0x8228C0D0;
	sub_8236B768(ctx, base);
loc_8228C0D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r11,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228C060) {
	__imp__sub_8228C060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228C0E4) {
	__imp__sub_8228C0E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r31,r11,-16344
	ctx.r31.s64 = ctx.r11.s64 + -16344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x823de090
	ctx.lr = 0x8228C110;
	sub_823DE090(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236fa58
	ctx.lr = 0x8228C118;
	sub_8236FA58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236fb70
	ctx.lr = 0x8228C124;
	sub_8236FB70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228c148
	if (!ctx.cr6.eq) goto loc_8228C148;
loc_8228C12C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8236b768
	ctx.lr = 0x8228C134;
	sub_8236B768(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236fb70
	ctx.lr = 0x8228C140;
	sub_8236FB70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228c12c
	if (ctx.cr6.eq) goto loc_8228C12C;
loc_8228C148:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C0E8) {
	__imp__sub_8228C0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228C15C) {
	__imp__sub_8228C15C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C160) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r9,-16344
	ctx.r11.s64 = ctx.r9.s64 + -16344;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lwz r3,-16344(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16344);
	// stbx r8,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228C160) {
	__imp__sub_8228C160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8236fa48
	ctx.lr = 0x8228C190;
	sub_8236FA48(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r11,-16108
	ctx.r10.s64 = ctx.r11.s64 + -16108;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C180) {
	__imp__sub_8228C180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8228b330
	ctx.lr = 0x8228C1D0;
	sub_8228B330(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r31,r11,-16060
	ctx.r31.s64 = ctx.r11.s64 + -16060;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228c1f8
	if (!ctx.cr6.eq) goto loc_8228C1F8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8228C1F8:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b890
	ctx.lr = 0x8228C200;
	sub_8236B890(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8236fcb8
	ctx.lr = 0x8228C208;
	sub_8236FCB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C1B8) {
	__imp__sub_8228C1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r31,r11,-16352
	ctx.r31.s64 = ctx.r11.s64 + -16352;
	// addi r6,r31,332
	ctx.r6.s64 = ctx.r31.s64 + 332;
loc_8228C244:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228c244
	if (!ctx.cr0.eq) goto loc_8228C244;
	// lwz r5,-16352(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16352);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8228c2dc
	if (ctx.cr6.eq) goto loc_8228C2DC;
	// addi r11,r31,220
	ctx.r11.s64 = ctx.r31.s64 + 220;
loc_8228C274:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228c274
	if (!ctx.cr0.eq) goto loc_8228C274;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8228c2bc
	if (ctx.cr6.eq) goto loc_8228C2BC;
loc_8228C29C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8236fa98
	ctx.lr = 0x8228C2A4;
	sub_8236FA98(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8236fb70
	ctx.lr = 0x8228C2B0;
	sub_8236FB70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8228c29c
	if (!ctx.cr6.eq) goto loc_8228C29C;
loc_8228C2BC:
	// addi r11,r31,220
	ctx.r11.s64 = ctx.r31.s64 + 220;
loc_8228C2C0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228c2c0
	if (!ctx.cr0.eq) goto loc_8228C2C0;
loc_8228C2DC:
	// lwsync 
	// bl 0x8236fa48
	ctx.lr = 0x8228C2E4;
	sub_8236FA48(ctx, base);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C220) {
	__imp__sub_8228C220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8228C308;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,-16352
	ctx.r31.s64 = ctx.r11.s64 + -16352;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r7,r31,332
	ctx.r7.s64 = ctx.r31.s64 + 332;
loc_8228C320:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228c320
	if (!ctx.cr0.eq) goto loc_8228C320;
	// lwz r6,-16352(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16352);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8228c420
	if (ctx.cr6.eq) goto loc_8228C420;
	// addi r11,r31,220
	ctx.r11.s64 = ctx.r31.s64 + 220;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8228C354:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228c354
	if (!ctx.cr0.eq) goto loc_8228C354;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8228c400
	if (ctx.cr6.eq) goto loc_8228C400;
loc_8228C37C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8236fa98
	ctx.lr = 0x8228C384;
	sub_8236FA98(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8228c3f0
	if (ctx.cr6.eq) goto loc_8228C3F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8236fb78
	ctx.lr = 0x8228C39C;
	sub_8236FB78(ctx, base);
	// cmplwi cr6,r3,192
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 192, ctx.xer);
	// bne cr6,0x8228c3f4
	if (!ctx.cr6.eq) goto loc_8228C3F4;
	// addi r8,r31,332
	ctx.r8.s64 = ctx.r31.s64 + 332;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
loc_8228C3B0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8228c3d4
	if (!ctx.cr6.eq) goto loc_8228C3D4;
	// stwcx. r30,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228c3b0
	if (!ctx.cr0.eq) goto loc_8228C3B0;
	// b 0x8228c3dc
	goto loc_8228C3DC;
loc_8228C3D4:
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8228C3DC:
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8228c43c
	if (ctx.cr6.eq) goto loc_8228C43C;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8228c3f4
	goto loc_8228C3F4;
loc_8228C3F0:
	// bl 0x8236fb70
	ctx.lr = 0x8228C3F4;
	sub_8236FB70(ctx, base);
loc_8228C3F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8228c37c
	if (!ctx.cr6.eq) goto loc_8228C37C;
loc_8228C400:
	// addi r11,r31,220
	ctx.r11.s64 = ctx.r31.s64 + 220;
loc_8228C404:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228c404
	if (!ctx.cr0.eq) goto loc_8228C404;
loc_8228C420:
	// lwsync 
	// bl 0x8236fa48
	ctx.lr = 0x8228C428;
	sub_8236FA48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8228C43C:
	// addi r11,r31,220
	ctx.r11.s64 = ctx.r31.s64 + 220;
loc_8228C440:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228c440
	if (!ctx.cr0.eq) goto loc_8228C440;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228C300) {
	__imp__sub_8228C300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-16132
	ctx.r11.s64 = ctx.r11.s64 + -16132;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwsync 
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lwz r10,-16352(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16352);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,-16352(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16352, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,-216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -216);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228C468) {
	__imp__sub_8228C468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C4A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C4A0) {
	__imp__sub_8228C4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228C4A4) {
	__imp__sub_8228C4A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8236fa48
	ctx.lr = 0x8228C4B8;
	sub_8236FA48(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r11,-16116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16116);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C4A8) {
	__imp__sub_8228C4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228C4DC) {
	__imp__sub_8228C4DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31919
	ctx.r31.s64 = -2091843584;
	// lwz r11,-16128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228c514
	if (ctx.cr6.eq) goto loc_8228C514;
loc_8228C500:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8236b768
	ctx.lr = 0x8228C508;
	sub_8236B768(ctx, base);
	// lwz r11,-16128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8228c500
	if (!ctx.cr6.eq) goto loc_8228C500;
loc_8228C514:
	// lwsync 
	// bl 0x82310110
	ctx.lr = 0x8228C51C;
	sub_82310110(ctx, base);
	// lis r31,-31919
	ctx.r31.s64 = -2091843584;
	// lwz r11,-16136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16136);
	// subf r3,r3,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// bge cr6,0x8228c550
	if (!ctx.cr6.lt) goto loc_8228C550;
loc_8228C534:
	// bl 0x8236b768
	ctx.lr = 0x8228C538;
	sub_8236B768(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8228C53C;
	sub_82310110(ctx, base);
	// lwz r11,-16136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16136);
	// subf r3,r3,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// blt cr6,0x8228c534
	if (ctx.cr6.lt) goto loc_8228C534;
loc_8228C550:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C4E0) {
	__imp__sub_8228C4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228C564) {
	__imp__sub_8228C564(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8228C570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-16128
	ctx.r31.s64 = ctx.r11.s64 + -16128;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8228C588:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8228c5ac
	if (!ctx.cr6.eq) goto loc_8228C5AC;
	// stwcx. r30,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228c588
	if (!ctx.cr0.eq) goto loc_8228C588;
	// b 0x8228c5b4
	goto loc_8228C5B4;
loc_8228C5AC:
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8228C5B4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8228c604
	if (ctx.cr6.eq) goto loc_8228C604;
loc_8228C5C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8236b768
	ctx.lr = 0x8228C5C8;
	sub_8236B768(ctx, base);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8228C5CC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8228c5f0
	if (!ctx.cr6.eq) goto loc_8228C5F0;
	// stwcx. r30,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228c5cc
	if (!ctx.cr0.eq) goto loc_8228C5CC;
	// b 0x8228c5f8
	goto loc_8228C5F8;
loc_8228C5F0:
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8228C5F8:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8228c5c0
	if (!ctx.cr6.eq) goto loc_8228C5C0;
loc_8228C604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228C568) {
	__imp__sub_8228C568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228C60C) {
	__imp__sub_8228C60C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82310110
	ctx.lr = 0x8228C628;
	sub_82310110(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r9,r11,-16128
	ctx.r9.s64 = ctx.r11.s64 + -16128;
	// stw r10,-8(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8, ctx.r10.u32);
	// lwsync 
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,-16128(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16128, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C610) {
	__imp__sub_8228C610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228C684;
	sub_8236FAD0(ctx, base);
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-16060
	ctx.r31.s64 = ctx.r10.s64 + -16060;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8236fad0
	ctx.lr = 0x8228C6A8;
	sub_8236FAD0(ctx, base);
	// stw r3,-264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -264, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228C6C0;
	sub_8236FAD0(ctx, base);
	// stw r3,-60(r31)
	PPC_STORE_U32(ctx.r31.u32 + -60, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228C6D8;
	sub_8236FAD0(ctx, base);
	// stw r3,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228C6F0;
	sub_8236FAD0(ctx, base);
	// stw r3,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8228b330
	ctx.lr = 0x8228C700;
	sub_8228B330(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228c720
	if (ctx.cr6.eq) goto loc_8228C720;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8236b890
	ctx.lr = 0x8228C714;
	sub_8236B890(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8236fcb8
	ctx.lr = 0x8228C71C;
	sub_8236FCB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8228C720:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C658) {
	__imp__sub_8228C658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228C764;
	sub_8236FAD0(ctx, base);
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-16360
	ctx.r31.s64 = ctx.r10.s64 + -16360;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x8236fad0
	ctx.lr = 0x8228C788;
	sub_8236FAD0(ctx, base);
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228C7A0;
	sub_8236FAD0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228C7B8;
	sub_8236FAD0(ctx, base);
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228C7D0;
	sub_8236FAD0(ctx, base);
	// stw r3,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8228b330
	ctx.lr = 0x8228C7E0;
	sub_8228B330(ctx, base);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228c800
	if (ctx.cr6.eq) goto loc_8228C800;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8236b890
	ctx.lr = 0x8228C7F4;
	sub_8236B890(ctx, base);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// bl 0x8236fcb8
	ctx.lr = 0x8228C7FC;
	sub_8236FCB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8228C800:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C738) {
	__imp__sub_8228C738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228C844;
	sub_8236FAD0(ctx, base);
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-16060
	ctx.r31.s64 = ctx.r10.s64 + -16060;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -296, ctx.r11.u32);
	// bl 0x8236fad0
	ctx.lr = 0x8228C868;
	sub_8236FAD0(ctx, base);
	// stw r3,-52(r31)
	PPC_STORE_U32(ctx.r31.u32 + -52, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228C880;
	sub_8236FAD0(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228C898;
	sub_8236FAD0(ctx, base);
	// stw r3,-280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -280, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8228b330
	ctx.lr = 0x8228C8A8;
	sub_8228B330(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228c8c8
	if (ctx.cr6.eq) goto loc_8228C8C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8236b890
	ctx.lr = 0x8228C8BC;
	sub_8236B890(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8236fcb8
	ctx.lr = 0x8228C8C4;
	sub_8236FCB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8228C8C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C818) {
	__imp__sub_8228C818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwsync 
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r31,r11,-16320
	ctx.r31.s64 = ctx.r11.s64 + -16320;
	// lwz r3,-16320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16320);
	// bl 0x8236fa58
	ctx.lr = 0x8228C904;
	sub_8236FA58(ctx, base);
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
loc_8228C908:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228c908
	if (!ctx.cr0.eq) goto loc_8228C908;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C8E0) {
	__imp__sub_8228C8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31919
	ctx.r31.s64 = -2091843584;
	// addi r11,r31,-16320
	ctx.r11.s64 = ctx.r31.s64 + -16320;
	// addi r8,r11,176
	ctx.r8.s64 = ctx.r11.s64 + 176;
loc_8228C964:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228c964
	if (!ctx.cr0.eq) goto loc_8228C964;
	// lwsync 
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8236fa58
	ctx.lr = 0x8228C990;
	sub_8236FA58(ctx, base);
	// lwz r3,-16320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16320);
	// bl 0x8236fa58
	ctx.lr = 0x8228C998;
	sub_8236FA58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C948) {
	__imp__sub_8228C948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228C9AC) {
	__imp__sub_8228C9AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228C9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de020
	ctx.lr = 0x8228C9C8;
	__savefpr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f9,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,-2280
	ctx.r9.s64 = ctx.r11.s64 + -2280;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r10,-2264
	ctx.r8.s64 = ctx.r10.s64 + -2264;
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-2280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2280);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmuls f7,f0,f1
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,-2264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f13,f1
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f5,f0,f1
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f0,f1
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r7,-2232
	ctx.r5.s64 = ctx.r7.s64 + -2232;
	// fmuls f3,f13,f1
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f1
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f1
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f13,-2232(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -2232);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f0,f1
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f31,7324(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7324);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f13,f1
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f0,f1
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f9,f31,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f12.f64));
	// lfs f26,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f0,f8,f31,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f13,f26,f31,f10
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r7,300
	ctx.r7.s64 = 300;
	// stfs f29,124(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f28,128(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f27,132(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820eaf18
	ctx.lr = 0x8228CACC;
	sub_820EAF18(ctx, base);
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// li r7,300
	ctx.r7.s64 = 300;
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f31,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f12.f64));
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f31,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fmadds f4,f6,f31,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820eaf18
	ctx.lr = 0x8228CB14;
	sub_820EAF18(ctx, base);
	// lfs f3,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// li r7,300
	ctx.r7.s64 = 300;
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f31,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f3.f64));
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f13,f31,f2
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f2.f64));
	// fmadds f9,f11,f31,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f1.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820eaf18
	ctx.lr = 0x8228CB5C;
	sub_820EAF18(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de06c
	ctx.lr = 0x8228CB68;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228C9B0) {
	__imp__sub_8228C9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228CB7C) {
	__imp__sub_8228CB7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CB80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228CB80) {
	__imp__sub_8228CB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228CB84) {
	__imp__sub_8228CB84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CB88) {
	PPC_FUNC_PROLOGUE();
	// li r5,2624
	ctx.r5.s64 = 2624;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228CB88) {
	__imp__sub_8228CB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228CB94) {
	__imp__sub_8228CB94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8228CBA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-15888
	ctx.r29.s64 = ctx.r11.s64 + -15888;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8228CBB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228cbdc
	if (!ctx.cr6.gt) goto loc_8228CBDC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2624
	ctx.r30.s64 = ctx.r30.s64 + 2624;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x8228cbb4
	if (ctx.cr6.lt) goto loc_8228CBB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8228CBDC:
	// li r5,2624
	ctx.r5.s64 = 2624;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de090
	ctx.lr = 0x8228CBEC;
	sub_823DE090(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822914a8
	ctx.lr = 0x8228CBF8;
	sub_822914A8(ctx, base);
	// mulli r11,r31,2624
	ctx.r11.s64 = ctx.r31.s64 * 2624;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228CB98) {
	__imp__sub_8228CB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228CC14) {
	__imp__sub_8228CC14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-15888
	ctx.r11.s64 = ctx.r11.s64 + -15888;
loc_8228CC24:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8228cc3c
	if (!ctx.cr6.gt) goto loc_8228CC3C;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8228cc54
	if (ctx.cr6.eq) goto loc_8228CC54;
loc_8228CC3C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2624
	ctx.r11.s64 = ctx.r11.s64 + 2624;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x8228cc24
	if (ctx.cr6.lt) goto loc_8228CC24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8228CC54:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228CC18) {
	__imp__sub_8228CC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228CC64) {
	__imp__sub_8228CC64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8228e9b0
	ctx.lr = 0x8228CC7C;
	sub_8228E9B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822914a8
	ctx.lr = 0x8228CC88;
	sub_822914A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228CC68) {
	__imp__sub_8228CC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228CCA4) {
	__imp__sub_8228CCA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CCA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31918
	ctx.r9.s64 = -2091778048;
	// addi r11,r9,2560
	ctx.r11.s64 = ctx.r9.s64 + 2560;
	// mulli r10,r10,3928
	ctx.r10.s64 = ctx.r10.s64 * 3928;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228CCA8) {
	__imp__sub_8228CCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CCC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82284650
	sub_82284650(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228CCC0) {
	__imp__sub_8228CCC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CCDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228CCDC) {
	__imp__sub_8228CCDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CCE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x820ecbb0
	sub_820ECBB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228CCE0) {
	__imp__sub_8228CCE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CCFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228CCFC) {
	__imp__sub_8228CCFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8228cd3c
	if (ctx.cr6.lt) goto loc_8228CD3C;
	// bl 0x8228e9c8
	ctx.lr = 0x8228CD24;
	sub_8228E9C8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8228CD3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228CD00) {
	__imp__sub_8228CD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8228e9b0
	ctx.lr = 0x8228CD68;
	sub_8228E9B0(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8228cd90
	if (ctx.cr6.lt) goto loc_8228CD90;
	// bl 0x8228e9c8
	ctx.lr = 0x8228CD78;
	sub_8228E9C8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8228CD90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228CD50) {
	__imp__sub_8228CD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228CDA4) {
	__imp__sub_8228CDA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mulli r10,r3,3928
	ctx.r10.s64 = ctx.r3.s64 * 3928;
	// addi r11,r11,2560
	ctx.r11.s64 = ctx.r11.s64 + 2560;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228CDA8) {
	__imp__sub_8228CDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8228CDD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mulli r10,r3,3928
	ctx.r10.s64 = ctx.r3.s64 * 3928;
	// addi r11,r11,2560
	ctx.r11.s64 = ctx.r11.s64 + 2560;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r9,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8228ce08
	if (!ctx.cr6.eq) goto loc_8228CE08;
loc_8228CDFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8228CE08:
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228cf38
	if (!ctx.cr6.eq) goto loc_8228CF38;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r23,r27,8
	ctx.r23.s64 = ctx.r27.s64 + 8;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228cea0
	if (!ctx.cr6.gt) goto loc_8228CEA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r25,r11,13236
	ctx.r25.s64 = ctx.r11.s64 + 13236;
loc_8228CE3C:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r31,r28,40
	ctx.r31.s64 = ctx.r28.s64 + 40;
loc_8228CE48:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8058
	ctx.lr = 0x8228CE54;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228ce74
	if (ctx.cr6.eq) goto loc_8228CE74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1810
	ctx.lr = 0x8228CE64;
	sub_822A1810(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228cdfc
	if (ctx.cr6.eq) goto loc_8228CDFC;
	// b 0x8228ce78
	goto loc_8228CE78;
loc_8228CE74:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_8228CE78:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x8228ce48
	if (ctx.cr6.lt) goto loc_8228CE48;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228ce3c
	if (ctx.cr6.lt) goto loc_8228CE3C;
loc_8228CEA0:
	// lwz r11,1128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1128);
	// addi r31,r27,1132
	ctx.r31.s64 = ctx.r27.s64 + 1132;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228cf30
	if (!ctx.cr6.gt) goto loc_8228CF30;
loc_8228CEB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1810
	ctx.lr = 0x8228CEBC;
	sub_822A1810(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228cdfc
	if (ctx.cr6.eq) goto loc_8228CDFC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228cf1c
	if (!ctx.cr6.eq) goto loc_8228CF1C;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8228cf10
	if (!ctx.cr6.gt) goto loc_8228CF10;
	// addi r10,r23,44
	ctx.r10.s64 = ctx.r23.s64 + 44;
loc_8228CEE8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8228cf0c
	if (ctx.cr6.eq) goto loc_8228CF0C;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8228cee8
	if (ctx.cr6.lt) goto loc_8228CEE8;
	// b 0x8228cf10
	goto loc_8228CF10;
loc_8228CF0C:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8228CF10:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8228cdfc
	if (ctx.cr6.eq) goto loc_8228CDFC;
loc_8228CF1C:
	// lwz r11,1128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1128);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228ceb4
	if (ctx.cr6.lt) goto loc_8228CEB4;
loc_8228CF30:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1, ctx.r11.u8);
loc_8228CF38:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228CDC8) {
	__imp__sub_8228CDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228CF44) {
	__imp__sub_8228CF44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228CF48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,-15888
	ctx.r10.s64 = ctx.r10.s64 + -15888;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,2660
	ctx.r10.s64 = ctx.r10.s64 + 2660;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8228CF60:
	// lwz r11,-2660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228cf98
	if (!ctx.cr6.gt) goto loc_8228CF98;
	// lwz r11,-2624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2624);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8228cf84
	if (ctx.cr6.lt) goto loc_8228CF84;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8228cf88
	if (!ctx.cr6.gt) goto loc_8228CF88;
loc_8228CF84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228CF88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228cf98
	if (ctx.cr6.eq) goto loc_8228CF98;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8228CF98:
	// lwz r11,-36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228cfd0
	if (!ctx.cr6.gt) goto loc_8228CFD0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8228cfbc
	if (ctx.cr6.lt) goto loc_8228CFBC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8228cfc0
	if (!ctx.cr6.gt) goto loc_8228CFC0;
loc_8228CFBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228CFC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228cfd0
	if (ctx.cr6.eq) goto loc_8228CFD0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8228CFD0:
	// lwz r11,2588(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228d008
	if (!ctx.cr6.gt) goto loc_8228D008;
	// lwz r11,2624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2624);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8228cff4
	if (ctx.cr6.lt) goto loc_8228CFF4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8228cff8
	if (!ctx.cr6.gt) goto loc_8228CFF8;
loc_8228CFF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228CFF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228d008
	if (ctx.cr6.eq) goto loc_8228D008;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8228D008:
	// lwz r11,5212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228d040
	if (!ctx.cr6.gt) goto loc_8228D040;
	// lwz r11,5248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5248);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8228d02c
	if (ctx.cr6.lt) goto loc_8228D02C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8228d030
	if (!ctx.cr6.gt) goto loc_8228D030;
loc_8228D02C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228D030:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228d040
	if (ctx.cr6.eq) goto loc_8228D040;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8228D040:
	// addi r10,r10,10496
	ctx.r10.s64 = ctx.r10.s64 + 10496;
	// bdnz 0x8228cf60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228CF60;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228CF48) {
	__imp__sub_8228CF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228D04C) {
	__imp__sub_8228D04C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8228D058;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x8228cdc8
	ctx.lr = 0x8228D07C;
	sub_8228CDC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228d094
	if (!ctx.cr6.eq) goto loc_8228D094;
loc_8228D088:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8228D094:
	// bl 0x8228cf48
	ctx.lr = 0x8228D098;
	sub_8228CF48(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r11,-15924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15924);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8228d088
	if (!ctx.cr6.lt) goto loc_8228D088;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228d0cc
	if (ctx.cr6.eq) goto loc_8228D0CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8228cc18
	ctx.lr = 0x8228D0C0;
	sub_8228CC18(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8228d0dc
	if (!ctx.cr6.eq) goto loc_8228D0DC;
loc_8228D0CC:
	// bl 0x8228cb98
	ctx.lr = 0x8228D0D0;
	sub_8228CB98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228d088
	if (ctx.cr6.eq) goto loc_8228D088;
loc_8228D0DC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8228e9b0
	ctx.lr = 0x8228D0E4;
	sub_8228E9B0(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228d0fc
	if (ctx.cr6.eq) goto loc_8228D0FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822914a8
	ctx.lr = 0x8228D0FC;
	sub_822914A8(ctx, base);
loc_8228D0FC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8228d168
	if (!ctx.cr6.eq) goto loc_8228D168;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// addi r11,r11,2560
	ctx.r11.s64 = ctx.r11.s64 + 2560;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,7776
	ctx.r8.s64 = ctx.r11.s64 + 7776;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8228d140
	if (!ctx.cr6.lt) goto loc_8228D140;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r11.u32);
	// b 0x8228d15c
	goto loc_8228D15C;
loc_8228D140:
	// stw r28,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r28.u32);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2612, temp.u32);
	// lfs f13,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,2616(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2616, temp.u32);
	// lfs f12,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,2620(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2620, temp.u32);
loc_8228D15C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822914a8
	ctx.lr = 0x8228D168;
	sub_822914A8(ctx, base);
loc_8228D168:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228D050) {
	__imp__sub_8228D050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228D174) {
	__imp__sub_8228D174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8228D180;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8228cdc8
	ctx.lr = 0x8228D19C;
	sub_8228CDC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228d1b4
	if (!ctx.cr6.eq) goto loc_8228D1B4;
loc_8228D1A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8228D1B4:
	// bl 0x8228cb98
	ctx.lr = 0x8228D1B8;
	sub_8228CB98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228d1a8
	if (ctx.cr6.eq) goto loc_8228D1A8;
	// bl 0x8228e9b0
	ctx.lr = 0x8228D1C8;
	sub_8228E9B0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// bl 0x822914a8
	ctx.lr = 0x8228D1E8;
	sub_822914A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228D178) {
	__imp__sub_8228D178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228D1F4) {
	__imp__sub_8228D1F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8228e9b0
	ctx.lr = 0x8228D210;
	sub_8228E9B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8228d254
	if (!ctx.cr6.eq) goto loc_8228D254;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822914a8
	ctx.lr = 0x8228D224;
	sub_822914A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228e9b0
	ctx.lr = 0x8228D22C;
	sub_8228E9B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822914a8
	ctx.lr = 0x8228D238;
	sub_822914A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8228D254:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228D1F8) {
	__imp__sub_8228D1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8228e9b0
	ctx.lr = 0x8228D280;
	sub_8228E9B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228d2a4
	if (!ctx.cr6.gt) goto loc_8228D2A4;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228d2a4
	if (!ctx.cr6.gt) goto loc_8228D2A4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8228d2a8
	if (!ctx.cr6.eq) goto loc_8228D2A8;
loc_8228D2A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228D2A8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228D270) {
	__imp__sub_8228D270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228D2BC) {
	__imp__sub_8228D2BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de028
	ctx.lr = 0x8228D2D0;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r11,19304
	ctx.r6.s64 = ctx.r11.s64 + 19304;
	// addi r3,r10,19288
	ctx.r3.s64 = ctx.r10.s64 + 19288;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8228D2F0;
	sub_822E15D0(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r8,r8,19236
	ctx.r8.s64 = ctx.r8.s64 + 19236;
	// stw r3,-15896(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15896, ctx.r3.u32);
	// addi r3,r7,19272
	ctx.r3.s64 = ctx.r7.s64 + 19272;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x8228D320;
	sub_822E1618(ctx, base);
	// lis r6,-31918
	ctx.r6.s64 = -2091778048;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r8,r5,19200
	ctx.r8.s64 = ctx.r5.s64 + 19200;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,2544(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2544, ctx.r3.u32);
	// addi r3,r4,19188
	ctx.r3.s64 = ctx.r4.s64 + 19188;
	// li r6,100
	ctx.r6.s64 = 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x822e1618
	ctx.lr = 0x8228D34C;
	sub_822E1618(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r8,r10,19144
	ctx.r8.s64 = ctx.r10.s64 + 19144;
	// stw r3,-15912(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15912, ctx.r3.u32);
	// addi r3,r9,19124
	ctx.r3.s64 = ctx.r9.s64 + 19124;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4500
	ctx.r4.s64 = 4500;
	// bl 0x822e1618
	ctx.lr = 0x8228D37C;
	sub_822E1618(ctx, base);
	// lis r7,-31918
	ctx.r7.s64 = -2091778048;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r8,r6,19080
	ctx.r8.s64 = ctx.r6.s64 + 19080;
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r3,2548(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2548, ctx.r3.u32);
	// addi r3,r5,19056
	ctx.r3.s64 = ctx.r5.s64 + 19056;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822e1618
	ctx.lr = 0x8228D3A8;
	sub_822E1618(ctx, base);
	// lis r4,-31919
	ctx.r4.s64 = -2091843584;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stw r3,-15924(r4)
	PPC_STORE_U32(ctx.r4.u32 + -15924, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r7,19024
	ctx.r3.s64 = ctx.r7.s64 + 19024;
	// lfs f29,19052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19052);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r8,18988
	ctx.r8.s64 = ctx.r8.s64 + 18988;
	// li r7,68
	ctx.r7.s64 = 68;
	// lfs f1,19048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19048);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x8228D3E8;
	sub_822E1660(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r6,-31918
	ctx.r6.s64 = -2091778048;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r5,18936
	ctx.r8.s64 = ctx.r5.s64 + 18936;
	// lfs f30,5488(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5488);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,2552(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2552, ctx.r3.u32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r3,r10,18912
	ctx.r3.s64 = ctx.r10.s64 + 18912;
	// lfs f28,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f28.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x8228D424;
	sub_822E1660(ctx, base);
	// lis r9,-31918
	ctx.r9.s64 = -2091778048;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r8,r6,18860
	ctx.r8.s64 = ctx.r6.s64 + 18860;
	// stw r3,2556(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2556, ctx.r3.u32);
	// addi r3,r5,18828
	ctx.r3.s64 = ctx.r5.s64 + 18828;
	// lfs f1,17968(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17968);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8228D454;
	sub_822E1660(ctx, base);
	// lis r4,-31919
	ctx.r4.s64 = -2091843584;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r8,r11,18772
	ctx.r8.s64 = ctx.r11.s64 + 18772;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-15916(r4)
	PPC_STORE_U32(ctx.r4.u32 + -15916, ctx.r3.u32);
	// addi r3,r10,18740
	ctx.r3.s64 = ctx.r10.s64 + 18740;
	// bl 0x822e1660
	ctx.lr = 0x8228D480;
	sub_822E1660(ctx, base);
	// lis r9,-31918
	ctx.r9.s64 = -2091778048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r3,10416(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10416, ctx.r3.u32);
	// addi r8,r5,18704
	ctx.r8.s64 = ctx.r5.s64 + 18704;
	// lfs f29,20560(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20560);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r4,18680
	ctx.r3.s64 = ctx.r4.s64 + 18680;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,8664(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8664);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x8228D4B8;
	sub_822E1660(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r3,-15948(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15948, ctx.r3.u32);
	// addi r3,r7,18656
	ctx.r3.s64 = ctx.r7.s64 + 18656;
	// addi r8,r9,18608
	ctx.r8.s64 = ctx.r9.s64 + 18608;
	// lfs f1,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8228D4E8;
	sub_822E1660(ctx, base);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r8,r5,18544
	ctx.r8.s64 = ctx.r5.s64 + 18544;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-15900(r6)
	PPC_STORE_U32(ctx.r6.u32 + -15900, ctx.r3.u32);
	// addi r3,r4,18520
	ctx.r3.s64 = ctx.r4.s64 + 18520;
	// li r6,6000
	ctx.r6.s64 = 6000;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x822e1618
	ctx.lr = 0x8228D514;
	sub_822E1618(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r10,18464
	ctx.r8.s64 = ctx.r10.s64 + 18464;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-15920(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15920, ctx.r3.u32);
	// addi r3,r9,18440
	ctx.r3.s64 = ctx.r9.s64 + 18440;
	// li r6,6000
	ctx.r6.s64 = 6000;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// bl 0x822e1618
	ctx.lr = 0x8228D540;
	sub_822E1618(ctx, base);
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r3,-15944(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15944, ctx.r3.u32);
	// lfs f3,26980(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26980);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r5,18396
	ctx.r8.s64 = ctx.r5.s64 + 18396;
	// lfs f29,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r4,18372
	ctx.r3.s64 = ctx.r4.s64 + 18372;
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x8228D578;
	sub_822E1660(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r3,-15904(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15904, ctx.r3.u32);
	// addi r3,r7,18348
	ctx.r3.s64 = ctx.r7.s64 + 18348;
	// lfs f29,5876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5876);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r9,18288
	ctx.r8.s64 = ctx.r9.s64 + 18288;
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x8228D5AC;
	sub_822E1660(ctx, base);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r3,-15940(r6)
	PPC_STORE_U32(ctx.r6.u32 + -15940, ctx.r3.u32);
	// addi r8,r11,18192
	ctx.r8.s64 = ctx.r11.s64 + 18192;
	// addi r3,r10,18160
	ctx.r3.s64 = ctx.r10.s64 + 18160;
	// lfs f2,6020(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6020);
	ctx.f2.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,14260(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8228D5E0;
	sub_822E1660(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r6,r8,18120
	ctx.r6.s64 = ctx.r8.s64 + 18120;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-15952(r9)
	PPC_STORE_U32(ctx.r9.u32 + -15952, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r7,18100
	ctx.r3.s64 = ctx.r7.s64 + 18100;
	// bl 0x822e15d0
	ctx.lr = 0x8228D604;
	sub_822E15D0(ctx, base);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r8,r4,18024
	ctx.r8.s64 = ctx.r4.s64 + 18024;
	// stw r3,-15928(r6)
	PPC_STORE_U32(ctx.r6.u32 + -15928, ctx.r3.u32);
	// addi r3,r11,17996
	ctx.r3.s64 = ctx.r11.s64 + 17996;
	// lfs f29,13960(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 13960);
	ctx.f29.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x8228D638;
	sub_822E1660(ctx, base);
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r8,r9,17928
	ctx.r8.s64 = ctx.r9.s64 + 17928;
	// stw r3,-15892(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15892, ctx.r3.u32);
	// addi r3,r7,17972
	ctx.r3.s64 = ctx.r7.s64 + 17972;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822e1618
	ctx.lr = 0x8228D664;
	sub_822E1618(ctx, base);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r5,17832
	ctx.r8.s64 = ctx.r5.s64 + 17832;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-15936(r6)
	PPC_STORE_U32(ctx.r6.u32 + -15936, ctx.r3.u32);
	// addi r3,r4,17804
	ctx.r3.s64 = ctx.r4.s64 + 17804;
	// bl 0x822e1660
	ctx.lr = 0x8228D690;
	sub_822E1660(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// stw r3,-15932(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15932, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de074
	ctx.lr = 0x8228D6A4;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228D2C0) {
	__imp__sub_8228D2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8228d2c0
	ctx.lr = 0x8228D6C0;
	sub_8228D2C0(ctx, base);
	// bl 0x8228e8b0
	ctx.lr = 0x8228D6C4;
	sub_8228E8B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8228D6CC;
	sub_82141340(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,19340
	ctx.r5.s64 = ctx.r11.s64 + 19340;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227ebd8
	ctx.lr = 0x8228D6E0;
	sub_8227EBD8(ctx, base);
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,10420(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10420, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228D6B0) {
	__imp__sub_8228D6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228D6FC) {
	__imp__sub_8228D6FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31919
	ctx.r31.s64 = -2091843584;
	// lbz r11,-15908(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -15908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228d764
	if (!ctx.cr6.eq) goto loc_8228D764;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r3,r11,-15888
	ctx.r3.s64 = ctx.r11.s64 + -15888;
	// ori r5,r5,18432
	ctx.r5.u64 = ctx.r5.u64 | 18432;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8228D738;
	sub_823DE090(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-31918
	ctx.r9.s64 = -2091778048;
	// addi r11,r9,2560
	ctx.r11.s64 = ctx.r9.s64 + 2560;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-3928
	ctx.r11.s64 = ctx.r11.s64 + -3928;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8228D750:
	// stb r10,3929(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3929, ctx.r10.u8);
	// stbu r10,3928(r11)
	ea = 3928 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8228d750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228D750;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-15908(r31)
	PPC_STORE_U8(ctx.r31.u32 + -15908, ctx.r11.u8);
loc_8228D764:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228D700) {
	__imp__sub_8228D700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D778) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-15908(r10)
	PPC_STORE_U8(ctx.r10.u32 + -15908, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228D778) {
	__imp__sub_8228D778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r30,r11,-15888
	ctx.r30.s64 = ctx.r11.s64 + -15888;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8228D7A8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8228d7c0
	if (ctx.cr6.lt) goto loc_8228D7C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822914a8
	ctx.lr = 0x8228D7C0;
	sub_822914A8(ctx, base);
loc_8228D7C0:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,2624
	ctx.r31.s64 = ctx.r31.s64 + 2624;
	// addi r11,r11,18432
	ctx.r11.s64 = ctx.r11.s64 + 18432;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228d7a8
	if (ctx.cr6.lt) goto loc_8228D7A8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228D788) {
	__imp__sub_8228D788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228D7EC) {
	__imp__sub_8228D7EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x8228d898
	if (ctx.cr6.lt) goto loc_8228D898;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8228d83c
	if (!ctx.cr6.gt) goto loc_8228D83C;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8228d844
	goto loc_8228D844;
loc_8228D83C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_8228D844:
	// bl 0x823deaf8
	ctx.lr = 0x8228D848;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228d898
	if (ctx.cr6.lt) goto loc_8228D898;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8228d898
	if (!ctx.cr6.lt) goto loc_8228D898;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mulli r31,r3,3928
	ctx.r31.s64 = ctx.r3.s64 * 3928;
	// addi r30,r11,2560
	ctx.r30.s64 = ctx.r11.s64 + 2560;
	// li r5,3928
	ctx.r5.s64 = 3928;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x823de090
	ctx.lr = 0x8228D874;
	sub_823DE090(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r10,r30,3848
	ctx.r10.s64 = ctx.r30.s64 + 3848;
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_8228D88C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8228d88c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228D88C;
	// bl 0x8228d788
	ctx.lr = 0x8228D898;
	sub_8228D788(ctx, base);
loc_8228D898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228D7F0) {
	__imp__sub_8228D7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8228D8B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r8,r11,68
	ctx.r8.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8228d914
	if (!ctx.cr6.lt) goto loc_8228D914;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,19440
	ctx.r4.s64 = ctx.r11.s64 + 19440;
	// bl 0x82280900
	ctx.lr = 0x8228D8F4;
	sub_82280900(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8228D914:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8228d934
	if (!ctx.cr6.lt) goto loc_8228D934;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r27,r9,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x8228d93c
	goto loc_8228D93C;
loc_8228D934:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r27,r11,-28736
	ctx.r27.s64 = ctx.r11.s64 + -28736;
loc_8228D93C:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x8228d950
	if (!ctx.cr6.eq) goto loc_8228D950;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_8228D950:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,14528
	ctx.r28.s64 = ctx.r11.s64 + 14528;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8228D960:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x8228D96C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228d9a4
	if (ctx.cr6.eq) goto loc_8228D9A4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8228d960
	if (ctx.cr6.lt) goto loc_8228D960;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,19408
	ctx.r4.s64 = ctx.r11.s64 + 19408;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8228D998;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8228D9A4:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// beq cr6,0x8228d9f0
	if (ctx.cr6.eq) goto loc_8228D9F0;
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,4(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f9,8(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_8228D9F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228D8B0) {
	__imp__sub_8228D8B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228D9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228D9FC) {
	__imp__sub_8228D9FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228DA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228DA08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8228da50
	if (!ctx.cr6.gt) goto loc_8228DA50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,19508
	ctx.r4.s64 = ctx.r11.s64 + 19508;
	// bl 0x82280900
	ctx.lr = 0x8228DA44;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8228DA50:
	// bge cr6,0x8228da68
	if (!ctx.cr6.lt) goto loc_8228DA68;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r29,r8,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x8228da70
	goto loc_8228DA70;
loc_8228DA68:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r11,-28736
	ctx.r29.s64 = ctx.r11.s64 + -28736;
loc_8228DA70:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,14592
	ctx.r31.s64 = ctx.r11.s64 + 14592;
loc_8228DA7C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8228DA84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8228da84
	if (!ctx.cr6.eq) goto loc_8228DA84;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822e7ee0
	ctx.lr = 0x8228DAA8;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228dae0
	if (ctx.cr6.eq) goto loc_8228DAE0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x8228da7c
	if (ctx.cr6.lt) goto loc_8228DA7C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,19472
	ctx.r4.s64 = ctx.r11.s64 + 19472;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8228DAD4;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8228DAE0:
	// stw r30,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228DA00) {
	__imp__sub_8228DA00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228DAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8228DAF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// blt cr6,0x8228ddf8
	if (ctx.cr6.lt) goto loc_8228DDF8;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r23,r9,-28736
	ctx.r23.s64 = ctx.r9.s64 + -28736;
	// ble cr6,0x8228db3c
	if (!ctx.cr6.gt) goto loc_8228DB3C;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8228db40
	goto loc_8228DB40;
loc_8228DB3C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8228DB40:
	// bl 0x823deaf8
	ctx.lr = 0x8228DB44;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228ddf8
	if (ctx.cr6.lt) goto loc_8228DDF8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8228ddf8
	if (!ctx.cr6.lt) goto loc_8228DDF8;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mulli r10,r3,3928
	ctx.r10.s64 = ctx.r3.s64 * 3928;
	// addi r11,r11,2560
	ctx.r11.s64 = ctx.r11.s64 + 2560;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// blt cr6,0x8228db8c
	if (ctx.cr6.lt) goto loc_8228DB8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r11,19636
	ctx.r4.s64 = ctx.r11.s64 + 19636;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8228DB84;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8228DB8C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r30,8
	ctx.r30.s64 = 8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// addi r28,r25,40
	ctx.r28.s64 = ctx.r25.s64 + 40;
loc_8228DBB4:
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r29,2
	ctx.r9.s64 = ctx.r29.s64 + 2;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8228dbe4
	if (!ctx.cr6.lt) goto loc_8228DBE4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// b 0x8228dbe8
	goto loc_8228DBE8;
loc_8228DBE4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_8228DBE8:
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8228DBF4;
	sub_822E7E98(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x8228dbb4
	if (ctx.cr6.lt) goto loc_8228DBB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x8228dc34
	if (!ctx.cr6.gt) goto loc_8228DC34;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x8228dc38
	goto loc_8228DC38;
loc_8228DC34:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8228DC38:
	// bl 0x823dec00
	ctx.lr = 0x8228DC3C;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,48(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 48, temp.u32);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// ble cr6,0x8228dc6c
	if (!ctx.cr6.gt) goto loc_8228DC6C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x8228dc70
	goto loc_8228DC70;
loc_8228DC6C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8228DC70:
	// bl 0x823dec00
	ctx.lr = 0x8228DC74;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,56(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 56, temp.u32);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// ble cr6,0x8228dca4
	if (!ctx.cr6.gt) goto loc_8228DCA4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// b 0x8228dca8
	goto loc_8228DCA8;
loc_8228DCA4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8228DCA8:
	// bl 0x823dec00
	ctx.lr = 0x8228DCAC;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,60(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 60, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// ble cr6,0x8228dcdc
	if (!ctx.cr6.gt) goto loc_8228DCDC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,28(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x8228dce0
	goto loc_8228DCE0;
loc_8228DCDC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8228DCE0:
	// bl 0x823dec00
	ctx.lr = 0x8228DCE4;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,64(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 64, temp.u32);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// ble cr6,0x8228dd14
	if (!ctx.cr6.gt) goto loc_8228DD14;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// b 0x8228dd18
	goto loc_8228DD18;
loc_8228DD14:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8228DD18:
	// bl 0x823deaf8
	ctx.lr = 0x8228DD1C;
	sub_823DEAF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8228dd34
	if (!ctx.cr6.eq) goto loc_8228DD34;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,68(r25)
	PPC_STORE_U32(ctx.r25.u32 + 68, ctx.r11.u32);
	// b 0x8228dd5c
	goto loc_8228DD5C;
loc_8228DD34:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228dd58
	if (ctx.cr6.lt) goto loc_8228DD58;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,19580
	ctx.r4.s64 = ctx.r11.s64 + 19580;
	// bl 0x82280900
	ctx.lr = 0x8228DD50;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8228DD58:
	// stw r5,68(r25)
	PPC_STORE_U32(ctx.r25.u32 + 68, ctx.r5.u32);
loc_8228DD5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// ble cr6,0x8228dd84
	if (!ctx.cr6.gt) goto loc_8228DD84;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,36(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// b 0x8228dd88
	goto loc_8228DD88;
loc_8228DD84:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8228DD88:
	// bl 0x823deaf8
	ctx.lr = 0x8228DD8C;
	sub_823DEAF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r3,10
	ctx.r3.s64 = 10;
	// stb r9,52(r25)
	PPC_STORE_U8(ctx.r25.u32 + 52, ctx.r9.u8);
	// bl 0x8228da00
	ctx.lr = 0x8228DDA8;
	sub_8228DA00(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8228ddf8
	if (ctx.cr6.eq) goto loc_8228DDF8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82290170
	ctx.lr = 0x8228DDC0;
	sub_82290170(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228dde8
	if (!ctx.cr6.eq) goto loc_8228DDE8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,19544
	ctx.r4.s64 = ctx.r11.s64 + 19544;
	// bl 0x82280900
	ctx.lr = 0x8228DDE0;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8228DDE8:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// bl 0x8228d788
	ctx.lr = 0x8228DDF8;
	sub_8228D788(ctx, base);
loc_8228DDF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228DAF0) {
	__imp__sub_8228DAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228DE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228DE08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8228de50
	if (!ctx.cr6.gt) goto loc_8228DE50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,19712
	ctx.r4.s64 = ctx.r11.s64 + 19712;
	// bl 0x82280900
	ctx.lr = 0x8228DE44;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8228DE50:
	// bge cr6,0x8228de68
	if (!ctx.cr6.lt) goto loc_8228DE68;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r29,r8,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x8228de70
	goto loc_8228DE70;
loc_8228DE68:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r11,-28736
	ctx.r29.s64 = ctx.r11.s64 + -28736;
loc_8228DE70:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,14616
	ctx.r31.s64 = ctx.r11.s64 + 14616;
loc_8228DE7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x8228DE88;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228dec0
	if (ctx.cr6.eq) goto loc_8228DEC0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x8228de7c
	if (ctx.cr6.lt) goto loc_8228DE7C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,19680
	ctx.r4.s64 = ctx.r11.s64 + 19680;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8228DEB4;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8228DEC0:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228DE00) {
	__imp__sub_8228DE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228DED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228DED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8228e01c
	if (ctx.cr6.lt) goto loc_8228E01C;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r28,r9,-28736
	ctx.r28.s64 = ctx.r9.s64 + -28736;
	// ble cr6,0x8228df1c
	if (!ctx.cr6.gt) goto loc_8228DF1C;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8228df20
	goto loc_8228DF20;
loc_8228DF1C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8228DF20:
	// bl 0x823deaf8
	ctx.lr = 0x8228DF24;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228e01c
	if (ctx.cr6.lt) goto loc_8228E01C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8228e01c
	if (!ctx.cr6.lt) goto loc_8228E01C;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mulli r10,r3,3928
	ctx.r10.s64 = ctx.r3.s64 * 3928;
	// addi r11,r11,2560
	ctx.r11.s64 = ctx.r11.s64 + 2560;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,1420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x8228df6c
	if (ctx.cr6.lt) goto loc_8228DF6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r11,19844
	ctx.r4.s64 = ctx.r11.s64 + 19844;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8228DF64;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8228DF6C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 * 84;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r29,r10,1424
	ctx.r29.s64 = ctx.r10.s64 + 1424;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// ble cr6,0x8228dfa0
	if (!ctx.cr6.gt) goto loc_8228DFA0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8228dfa4
	goto loc_8228DFA4;
loc_8228DFA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8228DFA4:
	// bl 0x823deaf8
	ctx.lr = 0x8228DFA8;
	sub_823DEAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8228dfd4
	if (ctx.cr6.lt) goto loc_8228DFD4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,19800
	ctx.r4.s64 = ctx.r11.s64 + 19800;
	// bl 0x82280900
	ctx.lr = 0x8228DFCC;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8228DFD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228dff4
	if (!ctx.cr6.eq) goto loc_8228DFF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,19748
	ctx.r4.s64 = ctx.r11.s64 + 19748;
	// bl 0x82280900
	ctx.lr = 0x8228DFEC;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8228DFF4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8228de00
	ctx.lr = 0x8228E000;
	sub_8228DE00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228e01c
	if (ctx.cr6.eq) goto loc_8228E01C;
	// lwz r11,1420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1420, ctx.r11.u32);
	// bl 0x8228d788
	ctx.lr = 0x8228E01C;
	sub_8228D788(ctx, base);
loc_8228E01C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228DED0) {
	__imp__sub_8228DED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228E024) {
	__imp__sub_8228E024(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8228E030;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r30,r11,-17592
	ctx.r30.s64 = ctx.r11.s64 + -17592;
	// addi r9,r30,68
	ctx.r9.s64 = ctx.r30.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x8228e2cc
	if (ctx.cr6.lt) goto loc_8228E2CC;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r29,r9,-28736
	ctx.r29.s64 = ctx.r9.s64 + -28736;
	// ble cr6,0x8228e078
	if (!ctx.cr6.gt) goto loc_8228E078;
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8228e07c
	goto loc_8228E07C;
loc_8228E078:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8228E07C:
	// bl 0x823deaf8
	ctx.lr = 0x8228E080;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228e2cc
	if (ctx.cr6.lt) goto loc_8228E2CC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8228e2cc
	if (!ctx.cr6.lt) goto loc_8228E2CC;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mulli r10,r3,3928
	ctx.r10.s64 = ctx.r3.s64 * 3928;
	// addi r11,r11,2560
	ctx.r11.s64 = ctx.r11.s64 + 2560;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,1420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// blt cr6,0x8228e0cc
	if (ctx.cr6.lt) goto loc_8228E0CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r11,19844
	ctx.r4.s64 = ctx.r11.s64 + 19844;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8228E0C0;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8228E0CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x8228e0f4
	if (!ctx.cr6.gt) goto loc_8228E0F4;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8228e0f8
	goto loc_8228E0F8;
loc_8228E0F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8228E0F8:
	// bl 0x823deaf8
	ctx.lr = 0x8228E0FC;
	sub_823DEAF8(ctx, base);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228e128
	if (ctx.cr6.lt) goto loc_8228E128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,19940
	ctx.r4.s64 = ctx.r11.s64 + 19940;
	// bl 0x82280900
	ctx.lr = 0x8228E11C;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8228E128:
	// mulli r11,r5,84
	ctx.r11.s64 = ctx.r5.s64 * 84;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,1424
	ctx.r31.s64 = ctx.r11.s64 + 1424;
	// lwz r11,1432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8228e160
	if (ctx.cr6.lt) goto loc_8228E160;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r4,r11,19888
	ctx.r4.s64 = ctx.r11.s64 + 19888;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8228E154;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8228E160:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8228d8b0
	ctx.lr = 0x8228E17C;
	sub_8228D8B0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228e2cc
	if (ctx.cr6.eq) goto loc_8228E2CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x8228e1b0
	if (!ctx.cr6.gt) goto loc_8228E1B0;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x8228e1b4
	goto loc_8228E1B4;
loc_8228E1B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8228E1B4:
	// bl 0x823dec00
	ctx.lr = 0x8228E1B8;
	sub_823DEC00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// addi r9,r11,18
	ctx.r9.s64 = ctx.r11.s64 + 18;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// ble cr6,0x8228e1f4
	if (!ctx.cr6.gt) goto loc_8228E1F4;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x8228e1f8
	goto loc_8228E1F8;
loc_8228E1F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8228E1F8:
	// bl 0x823dec00
	ctx.lr = 0x8228E1FC;
	sub_823DEC00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r8,r30,68
	ctx.r8.s64 = ctx.r30.s64 + 68;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,5524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5524);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfsx f13,r7,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// ble cr6,0x8228e244
	if (!ctx.cr6.gt) goto loc_8228E244;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// b 0x8228e248
	goto loc_8228E248;
loc_8228E244:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8228E248:
	// bl 0x823dec00
	ctx.lr = 0x8228E24C;
	sub_823DEC00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,5816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5816);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9428(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9428);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f11,r7,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsel f7,f9,f0,f10
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fsel f6,f8,f13,f7
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// stfsx f6,r11,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,15
	ctx.r5.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fsubs f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fsel f2,f4,f0,f5
	ctx.f2.f64 = ctx.f4.f64 >= 0.0 ? ctx.f0.f64 : ctx.f5.f64;
	// fsel f1,f3,f13,f2
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f13.f64 : ctx.f2.f64;
	// stfsx f1,r11,r31
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// bl 0x8228d788
	ctx.lr = 0x8228E2CC;
	sub_8228D788(ctx, base);
loc_8228E2CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228E028) {
	__imp__sub_8228E028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8228E2E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r29,r11,-17592
	ctx.r29.s64 = ctx.r11.s64 + -17592;
	// addi r9,r29,68
	ctx.r9.s64 = ctx.r29.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8228e3fc
	if (ctx.cr6.lt) goto loc_8228E3FC;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r24,r9,-28736
	ctx.r24.s64 = ctx.r9.s64 + -28736;
	// ble cr6,0x8228e324
	if (!ctx.cr6.gt) goto loc_8228E324;
	// addi r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8228e328
	goto loc_8228E328;
loc_8228E324:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8228E328:
	// bl 0x823deaf8
	ctx.lr = 0x8228E32C;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228e3fc
	if (ctx.cr6.lt) goto loc_8228E3FC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8228e3fc
	if (!ctx.cr6.lt) goto loc_8228E3FC;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mulli r10,r3,3928
	ctx.r10.s64 = ctx.r3.s64 * 3928;
	// addi r11,r11,2560
	ctx.r11.s64 = ctx.r11.s64 + 2560;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,3776(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3776);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// blt cr6,0x8228e374
	if (ctx.cr6.lt) goto loc_8228E374;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,33
	ctx.r5.s64 = 33;
	// addi r4,r11,20040
	ctx.r4.s64 = ctx.r11.s64 + 20040;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8228E36C;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8228E374:
	// addi r11,r11,1890
	ctx.r11.s64 = ctx.r11.s64 + 1890;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,8
	ctx.r30.s64 = 8;
	// add r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// subfic r26,r25,2
	ctx.xer.ca = ctx.r25.u32 <= 2;
	ctx.r26.s64 = 2 - ctx.r25.s64;
loc_8228E390:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r29,68
	ctx.r10.s64 = ctx.r29.s64 + 68;
	// add r9,r26,r31
	ctx.r9.u64 = ctx.r26.u64 + ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8228e3bc
	if (!ctx.cr6.lt) goto loc_8228E3BC;
	// addi r10,r29,100
	ctx.r10.s64 = ctx.r29.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r3,r9,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// b 0x8228e3c0
	goto loc_8228E3C0;
loc_8228E3BC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8228E3C0:
	// bl 0x823deaf8
	ctx.lr = 0x8228E3C4;
	sub_823DEAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8228e404
	if (ctx.cr6.gt) goto loc_8228E404;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x8228e390
	if (ctx.cr6.lt) goto loc_8228E390;
	// lwz r11,3776(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3776(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3776, ctx.r11.u32);
	// bl 0x8228d788
	ctx.lr = 0x8228E3FC;
	sub_8228D788(ctx, base);
loc_8228E3FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8228E404:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lbzx r5,r27,r25
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r25.u32);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,19996
	ctx.r4.s64 = ctx.r11.s64 + 19996;
	// bl 0x82280900
	ctx.lr = 0x8228E418;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228E2D8) {
	__imp__sub_8228E2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8228E428;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8228e5f8
	if (ctx.cr6.lt) goto loc_8228E5F8;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r27,r9,-28736
	ctx.r27.s64 = ctx.r9.s64 + -28736;
	// ble cr6,0x8228e46c
	if (!ctx.cr6.gt) goto loc_8228E46C;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8228e470
	goto loc_8228E470;
loc_8228E46C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8228E470:
	// bl 0x823deaf8
	ctx.lr = 0x8228E474;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228e5f8
	if (ctx.cr6.lt) goto loc_8228E5F8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8228e5f8
	if (!ctx.cr6.lt) goto loc_8228E5F8;
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// mulli r11,r3,3928
	ctx.r11.s64 = ctx.r3.s64 * 3928;
	// addi r10,r10,2560
	ctx.r10.s64 = ctx.r10.s64 + 2560;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,1128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1128);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x8228e4bc
	if (ctx.cr6.lt) goto loc_8228E4BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,20096
	ctx.r4.s64 = ctx.r11.s64 + 20096;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8228E4B4;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8228E4BC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + ctx.r28.u64;
	// addi r30,r10,1132
	ctx.r30.s64 = ctx.r10.s64 + 1132;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// ble cr6,0x8228e4f0
	if (!ctx.cr6.gt) goto loc_8228E4F0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8228e4f4
	goto loc_8228E4F4;
loc_8228E4F0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8228E4F4:
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8228E500;
	sub_822E7E98(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x8228e570
	if (!ctx.cr6.gt) goto loc_8228E570;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x8228e538
	if (!ctx.cr6.gt) goto loc_8228E538;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x8228e53c
	goto loc_8228E53C;
loc_8228E538:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8228E53C:
	// bl 0x823deaf8
	ctx.lr = 0x8228E540;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,6000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6000, ctx.xer);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// blt cr6,0x8228e558
	if (ctx.cr6.lt) goto loc_8228E558;
	// li r11,6000
	ctx.r11.s64 = 6000;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x8228e580
	goto loc_8228E580;
loc_8228E558:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// bgt cr6,0x8228e568
	if (ctx.cr6.gt) goto loc_8228E568;
	// li r11,100
	ctx.r11.s64 = 100;
loc_8228E568:
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x8228e580
	goto loc_8228E580;
loc_8228E570:
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r11,-15920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15920);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
loc_8228E580:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x8228e5e8
	if (!ctx.cr6.gt) goto loc_8228E5E8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x8228e5c8
	if (!ctx.cr6.gt) goto loc_8228E5C8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x823deaf8
	ctx.lr = 0x8228E5B0;
	sub_823DEAF8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// lwz r11,1128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1128, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8228E5C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823deaf8
	ctx.lr = 0x8228E5D0;
	sub_823DEAF8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// lwz r11,1128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1128, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8228E5E8:
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// lwz r11,1128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1128, ctx.r11.u32);
loc_8228E5F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228E420) {
	__imp__sub_8228E420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8228E608;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8228e770
	if (ctx.cr6.lt) goto loc_8228E770;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r27,r9,-28736
	ctx.r27.s64 = ctx.r9.s64 + -28736;
	// ble cr6,0x8228e64c
	if (!ctx.cr6.gt) goto loc_8228E64C;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8228e650
	goto loc_8228E650;
loc_8228E64C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8228E650:
	// bl 0x823deaf8
	ctx.lr = 0x8228E654;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228e770
	if (ctx.cr6.lt) goto loc_8228E770;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8228e770
	if (!ctx.cr6.lt) goto loc_8228E770;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mulli r10,r3,3928
	ctx.r10.s64 = ctx.r3.s64 * 3928;
	// addi r11,r11,2560
	ctx.r11.s64 = ctx.r11.s64 + 2560;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,1128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1128);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x8228e69c
	if (ctx.cr6.lt) goto loc_8228E69C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,20096
	ctx.r4.s64 = ctx.r11.s64 + 20096;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8228E694;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8228E69C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r9,r30
	ctx.r28.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// ble cr6,0x8228e6cc
	if (!ctx.cr6.gt) goto loc_8228E6CC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r29,8(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8228e6d0
	goto loc_8228E6D0;
loc_8228E6CC:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8228E6D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a1810
	ctx.lr = 0x8228E6D8;
	sub_822A1810(ctx, base);
	// stw r3,1152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1152, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228e700
	if (!ctx.cr6.eq) goto loc_8228E700;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,20200
	ctx.r4.s64 = ctx.r11.s64 + 20200;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8228E6F8;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8228E700:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x8228e728
	if (!ctx.cr6.gt) goto loc_8228E728;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x8228e72c
	goto loc_8228E72C;
loc_8228E728:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8228E72C:
	// bl 0x823deaf8
	ctx.lr = 0x8228E730;
	sub_823DEAF8(ctx, base);
	// stw r3,1156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1156, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8228e75c
	if (ctx.cr6.lt) goto loc_8228E75C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,20148
	ctx.r4.s64 = ctx.r11.s64 + 20148;
	// bl 0x82280900
	ctx.lr = 0x8228E754;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8228E75C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1160, ctx.r11.u32);
	// lwz r11,1128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1128);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,1128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1128, ctx.r10.u32);
loc_8228E770:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228E600) {
	__imp__sub_8228E600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8228E780;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8228e890
	if (ctx.cr6.lt) goto loc_8228E890;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r28,r9,-28736
	ctx.r28.s64 = ctx.r9.s64 + -28736;
	// ble cr6,0x8228e7c4
	if (!ctx.cr6.gt) goto loc_8228E7C4;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8228e7c8
	goto loc_8228E7C8;
loc_8228E7C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8228E7C8:
	// bl 0x823deaf8
	ctx.lr = 0x8228E7CC;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8228e890
	if (ctx.cr6.lt) goto loc_8228E890;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8228e890
	if (!ctx.cr6.lt) goto loc_8228E890;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// lis r7,-31918
	ctx.r7.s64 = -2091778048;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r7,2560
	ctx.r9.s64 = ctx.r7.s64 + 2560;
	// mulli r10,r3,3928
	ctx.r10.s64 = ctx.r3.s64 * 3928;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// add r26,r10,r9
	ctx.r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x8228e814
	if (!ctx.cr6.gt) goto loc_8228E814;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8228e818
	goto loc_8228E818;
loc_8228E814:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8228E818:
	// bl 0x823deaf8
	ctx.lr = 0x8228E81C;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x8228e844
	if (!ctx.cr6.gt) goto loc_8228E844;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r28,12(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
loc_8228E844:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,14448
	ctx.r29.s64 = ctx.r11.s64 + 14448;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8228E854:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x8228E860;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228e898
	if (ctx.cr6.eq) goto loc_8228E898;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,80
	ctx.r11.s64 = ctx.r29.s64 + 80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228e854
	if (ctx.cr6.lt) goto loc_8228E854;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,20248
	ctx.r4.s64 = ctx.r11.s64 + 20248;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8228E890;
	sub_82280900(ctx, base);
loc_8228E890:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8228E898:
	// addi r11,r30,962
	ctx.r11.s64 = ctx.r30.s64 + 962;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228E778) {
	__imp__sub_8228E778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228E8AC) {
	__imp__sub_8228E8AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r11,10564
	ctx.r5.s64 = ctx.r11.s64 + 10564;
	// addi r3,r9,20420
	ctx.r3.s64 = ctx.r9.s64 + 20420;
	// addi r4,r10,-10256
	ctx.r4.s64 = ctx.r10.s64 + -10256;
	// bl 0x8227da10
	ctx.lr = 0x8228E8D8;
	sub_8227DA10(ctx, base);
	// lis r8,-31918
	ctx.r8.s64 = -2091778048;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r5,r8,10544
	ctx.r5.s64 = ctx.r8.s64 + 10544;
	// addi r3,r6,20404
	ctx.r3.s64 = ctx.r6.s64 + 20404;
	// addi r4,r7,-9488
	ctx.r4.s64 = ctx.r7.s64 + -9488;
	// bl 0x8227da10
	ctx.lr = 0x8228E8F4;
	sub_8227DA10(ctx, base);
	// lis r5,-31918
	ctx.r5.s64 = -2091778048;
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r5,r5,10524
	ctx.r5.s64 = ctx.r5.s64 + 10524;
	// addi r3,r3,20380
	ctx.r3.s64 = ctx.r3.s64 + 20380;
	// addi r4,r4,-7136
	ctx.r4.s64 = ctx.r4.s64 + -7136;
	// bl 0x8227da10
	ctx.lr = 0x8228E910;
	sub_8227DA10(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r11,10504
	ctx.r5.s64 = ctx.r11.s64 + 10504;
	// addi r3,r9,20360
	ctx.r3.s64 = ctx.r9.s64 + 20360;
	// addi r4,r10,-6656
	ctx.r4.s64 = ctx.r10.s64 + -6656;
	// bl 0x8227da10
	ctx.lr = 0x8228E92C;
	sub_8227DA10(ctx, base);
	// lis r8,-31918
	ctx.r8.s64 = -2091778048;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r5,r8,10484
	ctx.r5.s64 = ctx.r8.s64 + 10484;
	// addi r3,r6,20344
	ctx.r3.s64 = ctx.r6.s64 + 20344;
	// addi r4,r7,-8496
	ctx.r4.s64 = ctx.r7.s64 + -8496;
	// bl 0x8227da10
	ctx.lr = 0x8228E948;
	sub_8227DA10(ctx, base);
	// lis r5,-31918
	ctx.r5.s64 = -2091778048;
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r5,r5,10464
	ctx.r5.s64 = ctx.r5.s64 + 10464;
	// addi r3,r3,20328
	ctx.r3.s64 = ctx.r3.s64 + 20328;
	// addi r4,r4,-8152
	ctx.r4.s64 = ctx.r4.s64 + -8152;
	// bl 0x8227da10
	ctx.lr = 0x8228E964;
	sub_8227DA10(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r11,10444
	ctx.r5.s64 = ctx.r11.s64 + 10444;
	// addi r3,r9,20308
	ctx.r3.s64 = ctx.r9.s64 + 20308;
	// addi r4,r10,-7464
	ctx.r4.s64 = ctx.r10.s64 + -7464;
	// bl 0x8227da10
	ctx.lr = 0x8228E980;
	sub_8227DA10(ctx, base);
	// lis r8,-31918
	ctx.r8.s64 = -2091778048;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r5,r8,10424
	ctx.r5.s64 = ctx.r8.s64 + 10424;
	// addi r3,r6,20284
	ctx.r3.s64 = ctx.r6.s64 + 20284;
	// addi r4,r7,-6280
	ctx.r4.s64 = ctx.r7.s64 + -6280;
	// bl 0x8227da10
	ctx.lr = 0x8228E99C;
	sub_8227DA10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228E8B0) {
	__imp__sub_8228E8B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228E9AC) {
	__imp__sub_8228E9AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// mulli r10,r3,2624
	ctx.r10.s64 = ctx.r3.s64 * 2624;
	// addi r11,r11,-15888
	ctx.r11.s64 = ctx.r11.s64 + -15888;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-2624
	ctx.r3.s64 = ctx.r11.s64 + -2624;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228E9B0) {
	__imp__sub_8228E9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E9C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,844(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 844);
	// mulli r11,r11,736
	ctx.r11.s64 = ctx.r11.s64 * 736;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,848
	ctx.r3.s64 = ctx.r11.s64 + 848;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228E9C8) {
	__imp__sub_8228E9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228E9DC) {
	__imp__sub_8228E9DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E9E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,844(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 844);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// mulli r11,r10,736
	ctx.r11.s64 = ctx.r10.s64 * 736;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,848
	ctx.r3.s64 = ctx.r11.s64 + 848;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228E9E0) {
	__imp__sub_8228E9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228E9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8228EA00;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de020
	ctx.lr = 0x8228EA08;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228ec74
	if (ctx.cr6.eq) goto loc_8228EC74;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228ec74
	if (ctx.cr6.eq) goto loc_8228EC74;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// mulli r10,r11,2624
	ctx.r10.s64 = ctx.r11.s64 * 2624;
	// addi r11,r9,-15888
	ctx.r11.s64 = ctx.r9.s64 + -15888;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r11,-2624
	ctx.r28.s64 = ctx.r11.s64 + -2624;
	// lwz r8,-2588(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2588);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x8228ec74
	if (ctx.cr6.lt) goto loc_8228EC74;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822f19e8
	ctx.lr = 0x8228EA54;
	sub_822F19E8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ec74
	if (ctx.cr6.eq) goto loc_8228EC74;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r9,844(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 844);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lwz r7,88(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r6,r11,-15680
	ctx.r6.s64 = ctx.r11.s64 + -15680;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addis r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 131072;
	// ori r4,r5,61924
	ctx.r4.u64 = ctx.r5.u64 | 61924;
	// lwz r11,-19420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19420);
	// addi r10,r10,2168
	ctx.r10.s64 = ctx.r10.s64 + 2168;
	// mulli r9,r9,736
	ctx.r9.s64 = ctx.r9.s64 * 736;
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// addi r9,r28,92
	ctx.r9.s64 = ctx.r28.s64 + 92;
	// lfs f30,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r10,848
	ctx.r30.s64 = ctx.r10.s64 + 848;
	// lfs f29,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f28,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f27,5488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5488);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,12168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12168);
	ctx.f26.f64 = double(temp.f32);
	// ble cr6,0x8228eb98
	if (!ctx.cr6.gt) goto loc_8228EB98;
	// addi r27,r9,4
	ctx.r27.s64 = ctx.r9.s64 + 4;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
loc_8228EAD8:
	// lbz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822f1e50
	ctx.lr = 0x8228EAEC;
	sub_822F1E50(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228eb7c
	if (ctx.cr6.eq) goto loc_8228EB7C;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f12,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f10,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f8,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f8,f8
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// lfs f6,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f1,f1,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f4.f64));
	// fmadds f13,f6,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f0.f64));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f0,f3,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x8228eb74
	if (ctx.cr6.eq) goto loc_8228EB74;
	// fdivs f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 / ctx.f0.f64));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// b 0x8228eb7c
	goto loc_8228EB7C;
loc_8228EB74:
	// stfs f26,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f27,28(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_8228EB7C:
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228ead8
	if (ctx.cr6.lt) goto loc_8228EAD8;
loc_8228EB98:
	// lwz r10,540(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 540);
	// addi r11,r28,544
	ctx.r11.s64 = ctx.r28.s64 + 544;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8228ec74
	if (!ctx.cr6.gt) goto loc_8228EC74;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
loc_8228EBB4:
	// lbz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822f1e50
	ctx.lr = 0x8228EBC8;
	sub_822F1E50(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228ec58
	if (ctx.cr6.eq) goto loc_8228EC58;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f12,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f10,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f8,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// lfs f6,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmadds f2,f8,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f3,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x8228ec50
	if (ctx.cr6.eq) goto loc_8228EC50;
	// fdivs f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 / ctx.f0.f64));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// b 0x8228ec58
	goto loc_8228EC58;
loc_8228EC50:
	// stfs f26,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f27,28(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_8228EC58:
	// lwz r11,540(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 540);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228ebb4
	if (ctx.cr6.lt) goto loc_8228EBB4;
loc_8228EC74:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de06c
	ctx.lr = 0x8228EC80;
	__restfpr_26(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228E9F8) {
	__imp__sub_8228E9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228EC84) {
	__imp__sub_8228EC84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228EC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f11,f10,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f4,f8,f9,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fnmsubs f3,f7,f6,f4
	ctx.f3.f64 = double(float(-(ctx.f7.f64 * ctx.f6.f64 - ctx.f4.f64)));
	// stfs f3,0(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f7,f2,f1,f8
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fmadds f6,f13,f9,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fnmsubs f5,f12,f11,f6
	ctx.f5.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f6.f64)));
	// stfs f5,4(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f10,f4,f9,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f8,f3,f2,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fnmsubs f7,f1,f13,f8
	ctx.f7.f64 = double(float(-(ctx.f1.f64 * ctx.f13.f64 - ctx.f8.f64)));
	// stfs f7,8(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmsubs f12,f0,f9,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f13.f64));
	// fnmsubs f11,f6,f5,f12
	ctx.f11.f64 = double(float(-(ctx.f6.f64 * ctx.f5.f64 - ctx.f12.f64)));
	// fnmsubs f10,f4,f3,f11
	ctx.f10.f64 = double(float(-(ctx.f4.f64 * ctx.f3.f64 - ctx.f11.f64)));
	// stfs f10,12(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228EC88) {
	__imp__sub_8228EC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228ED44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228ED44) {
	__imp__sub_8228ED44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228ED48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8228ec88
	ctx.lr = 0x8228EDC4;
	sub_8228EC88(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8228ec88
	ctx.lr = 0x8228EDD4;
	sub_8228EC88(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228ED48) {
	__imp__sub_8228ED48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228EE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfd f9,24288(r10)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24288);
	// fadds f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fadds f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x8228ee90
	if (!ctx.cr6.gt) goto loc_8228EE90;
	// fsqrts f12,f10
	ctx.f12.f64 = double(float(sqrt(ctx.f10.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fdivs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fmuls f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmuls f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// stfs f2,4(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f1,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fmuls f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f7,12(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
loc_8228EE90:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8228ef10
	if (!ctx.cr6.gt) goto loc_8228EF10;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x8228ef10
	if (!ctx.cr6.gt) goto loc_8228EF10;
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,5880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f4,0(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f2,f0,f5
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f3,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmuls f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f6,f2
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// stfs f5,12(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
loc_8228EF10:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,5880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f10.f64 = double(temp.f32);
	// ble cr6,0x8228ef88
	if (!ctx.cr6.gt) goto loc_8228EF88;
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fdivs f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// fmuls f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f5,12(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
loc_8228EF88:
	// fadds f9,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f11,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fdivs f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// fmuls f0,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f5,12(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228EE00) {
	__imp__sub_8228EE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228EFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228EFEC) {
	__imp__sub_8228EFEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228EFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822d4668
	ctx.lr = 0x8228F018;
	sub_822D4668(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x823de720
	ctx.lr = 0x8228F020;
	sub_823DE720(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,24288(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24288);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8228f070
	if (!ctx.cr6.gt) goto loc_8228F070;
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x8228f084
	goto loc_8228F084;
loc_8228F070:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8228F084:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228EFF0) {
	__imp__sub_8228EFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228f0b8
	if (ctx.cr6.eq) goto loc_8228F0B8;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r4,r11,14632
	ctx.r4.s64 = ctx.r11.s64 + 14632;
	// b 0x8228ec88
	sub_8228EC88(ctx, base);
	return;
loc_8228F0B8:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228F0A0) {
	__imp__sub_8228F0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228F0DC) {
	__imp__sub_8228F0DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8228F0E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822f2388
	ctx.lr = 0x8228F100;
	sub_822F2388(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// bl 0x821023f0
	ctx.lr = 0x8228F11C;
	sub_821023F0(ctx, base);
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f23e0
	ctx.lr = 0x8228F12C;
	sub_822F23E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82102540
	ctx.lr = 0x8228F134;
	sub_82102540(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228F0E0) {
	__imp__sub_8228F0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F140) {
	PPC_FUNC_PROLOGUE();
	// b 0x822f0278
	sub_822F0278(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228F140) {
	__imp__sub_8228F140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228F144) {
	__imp__sub_8228F144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8228F150;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x822f0278
	ctx.lr = 0x8228F16C;
	sub_822F0278(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d4c28
	ctx.lr = 0x8228F17C;
	sub_822D4C28(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228F148) {
	__imp__sub_8228F148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228F1C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x822f0278
	ctx.lr = 0x8228F1E0;
	sub_822F0278(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8228ee00
	ctx.lr = 0x8228F1EC;
	sub_8228EE00(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228ec88
	ctx.lr = 0x8228F1FC;
	sub_8228EC88(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d4c28
	ctx.lr = 0x8228F20C;
	sub_822D4C28(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228F1B8) {
	__imp__sub_8228F1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x822da650
	ctx.lr = 0x8228F268;
	sub_822DA650(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d7ac8
	ctx.lr = 0x8228F274;
	sub_822D7AC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228F248) {
	__imp__sub_8228F248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f2,f11,f7
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f1,f13,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f8,f6,f10
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fadds f7,f5,f4
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f6,f5,f3
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fadds f5,f4,f3
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fsubs f3,f1,f9
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// stfs f3,8(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fadds f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f4,20(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// fadds f13,f8,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f10,f2,f8
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// stfs f10,12(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fadds f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f9,24(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// fsubs f8,f0,f7
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// stfs f7,16(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fsubs f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f6,28(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// fsubs f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f5,32(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,36(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f3,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,40(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,44(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228F288) {
	__imp__sub_8228F288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228F344) {
	__imp__sub_8228F344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8228F350;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,92
	ctx.r31.s64 = ctx.r3.s64 + 92;
	// bl 0x8228cca8
	ctx.lr = 0x8228F364;
	sub_8228CCA8(ctx, base);
	// lwz r10,88(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8228f480
	if (!ctx.cr6.gt) goto loc_8228F480;
	// addi r27,r11,52
	ctx.r27.s64 = ctx.r11.s64 + 52;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r26,r11,14632
	ctx.r26.s64 = ctx.r11.s64 + 14632;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// lfs f11,14632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14632);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
loc_8228F39C:
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228f408
	if (ctx.cr6.eq) goto loc_8228F408;
	// lfs f10,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f2,f9,f0,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmsubs f1,f0,f4,f6
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 - ctx.f6.f64));
	// fmadds f8,f10,f0,f5
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f6,f9,f12,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f5,f11,f4,f2
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fnmsubs f3,f10,f12,f1
	ctx.f3.f64 = double(float(-(ctx.f10.f64 * ctx.f12.f64 - ctx.f1.f64)));
	// fmadds f2,f12,f4,f8
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f8.f64));
	// fmadds f1,f13,f4,f6
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fnmsubs f8,f7,f12,f5
	ctx.f8.f64 = double(float(-(ctx.f7.f64 * ctx.f12.f64 - ctx.f5.f64)));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fnmsubs f7,f7,f13,f3
	ctx.f7.f64 = double(float(-(ctx.f7.f64 * ctx.f13.f64 - ctx.f3.f64)));
	// fnmsubs f6,f9,f13,f2
	ctx.f6.f64 = double(float(-(ctx.f9.f64 * ctx.f13.f64 - ctx.f2.f64)));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fnmsubs f5,f10,f11,f1
	ctx.f5.f64 = double(float(-(ctx.f10.f64 * ctx.f11.f64 - ctx.f1.f64)));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x8228f424
	goto loc_8228F424;
loc_8228F408:
	// lfs f10,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8228F424:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stfs f7,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228f460
	if (ctx.cr6.eq) goto loc_8228F460;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6a38
	ctx.lr = 0x8228F440;
	sub_822D6A38(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82258c48
	ctx.lr = 0x8228F450;
	sub_82258C48(ctx, base);
	// lfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
loc_8228F460:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r27,r27,80
	ctx.r27.s64 = ctx.r27.s64 + 80;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228f39c
	if (ctx.cr6.lt) goto loc_8228F39C;
loc_8228F480:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228F348) {
	__imp__sub_8228F348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8228F490;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8228cca8
	ctx.lr = 0x8228F49C;
	sub_8228CCA8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8228ccc0
	ctx.lr = 0x8228F4A8;
	sub_8228CCC0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228f4c0
	if (!ctx.cr6.eq) goto loc_8228F4C0;
loc_8228F4B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8228F4C0:
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8228f548
	if (!ctx.cr6.gt) goto loc_8228F548;
	// addi r31,r11,44
	ctx.r31.s64 = ctx.r11.s64 + 44;
loc_8228F4DC:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x822efc98
	ctx.lr = 0x8228F4F0;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228f4b4
	if (ctx.cr6.eq) goto loc_8228F4B4;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8228f4b4
	if (ctx.cr6.eq) goto loc_8228F4B4;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228f528
	if (ctx.cr6.eq) goto loc_8228F528;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822efc98
	ctx.lr = 0x8228F520;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228f4b4
	if (ctx.cr6.eq) goto loc_8228F4B4;
loc_8228F528:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8228f4b4
	if (ctx.cr6.eq) goto loc_8228F4B4;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228f4dc
	if (ctx.cr6.lt) goto loc_8228F4DC;
loc_8228F548:
	// lwz r10,540(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// addi r11,r26,1132
	ctx.r11.s64 = ctx.r26.s64 + 1132;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8228f59c
	if (!ctx.cr6.gt) goto loc_8228F59C;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
loc_8228F560:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822efc98
	ctx.lr = 0x8228F574;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228f4b4
	if (ctx.cr6.eq) goto loc_8228F4B4;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8228f4b4
	if (ctx.cr6.eq) goto loc_8228F4B4;
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228f560
	if (ctx.cr6.lt) goto loc_8228F560;
loc_8228F59C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228F488) {
	__imp__sub_8228F488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8228F5B0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x8228cca8
	ctx.lr = 0x8228F5CC;
	sub_8228CCA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8228ccc0
	ctx.lr = 0x8228F5D4;
	sub_8228CCC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228f640
	if (ctx.cr6.eq) goto loc_8228F640;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// stb r25,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r25.u8);
	// addi r26,r30,5
	ctx.r26.s64 = ctx.r30.s64 + 5;
	// stb r25,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r25.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x822efc98
	ctx.lr = 0x8228F600;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228f640
	if (ctx.cr6.eq) goto loc_8228F640;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8228f640
	if (ctx.cr6.eq) goto loc_8228F640;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8228f650
	if (ctx.cr6.eq) goto loc_8228F650;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822efc98
	ctx.lr = 0x8228F62C;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228f640
	if (ctx.cr6.eq) goto loc_8228F640;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8228f654
	if (!ctx.cr6.eq) goto loc_8228F654;
loc_8228F640:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8228F650:
	// stb r25,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r25.u8);
loc_8228F654:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8228cce0
	ctx.lr = 0x8228F65C;
	sub_8228CCE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x822da650
	ctx.lr = 0x8228F66C;
	sub_822DA650(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822d7ac8
	ctx.lr = 0x8228F678;
	sub_822D7AC8(ctx, base);
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lbz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8228f1b8
	ctx.lr = 0x8228F698;
	sub_8228F1B8(ctx, base);
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228f6bc
	if (ctx.cr6.eq) goto loc_8228F6BC;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,14632
	ctx.r4.s64 = ctx.r11.s64 + 14632;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8228ec88
	ctx.lr = 0x8228F6B8;
	sub_8228EC88(ctx, base);
	// b 0x8228f6dc
	goto loc_8228F6DC;
loc_8228F6BC:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_8228F6DC:
	// lbz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8228f700
	if (ctx.cr6.eq) goto loc_8228F700;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8228f148
	ctx.lr = 0x8228F6FC;
	sub_8228F148(ctx, base);
	// b 0x8228f718
	goto loc_8228F718;
loc_8228F700:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8228F718:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r8,20404
	ctx.r6.s64 = ctx.r8.s64 + 20404;
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822da9b0
	ctx.lr = 0x8228F76C;
	sub_822DA9B0(ctx, base);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r5,-5928
	ctx.r6.s64 = ctx.r5.s64 + -5928;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82258b48
	ctx.lr = 0x8228F788;
	sub_82258B48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// bne cr6,0x8228f7b4
	if (!ctx.cr6.eq) goto loc_8228F7B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,20472
	ctx.r4.s64 = ctx.r11.s64 + 20472;
	// bl 0x82280c30
	ctx.lr = 0x8228F7A4;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8228F7B4:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r30,20
	ctx.r8.s64 = ctx.r30.s64 + 20;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f0,4(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// stfs f12,0(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// stfs f13,8(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// stfs f3,12(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f31,24(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stfs f31,28(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,20(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8228f8b0
	if (ctx.cr6.eq) goto loc_8228F8B0;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x8228f880
	if (ctx.cr6.eq) goto loc_8228F880;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x8228f850
	if (ctx.cr6.eq) goto loc_8228F850;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,20436
	ctx.r4.s64 = ctx.r11.s64 + 20436;
	// bl 0x82280c30
	ctx.lr = 0x8228F840;
	sub_82280C30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8228F850:
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82259290
	ctx.lr = 0x8228F870;
	sub_82259290(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8228F880:
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82259120
	ctx.lr = 0x8228F8A0;
	sub_82259120(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8228F8B0:
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82258da8
	ctx.lr = 0x8228F8E8;
	sub_82258DA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228F5A8) {
	__imp__sub_8228F5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228F8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8228F900;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r27,r11,92
	ctx.r27.s64 = ctx.r11.s64 + 92;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8228f93c
	if (ctx.cr6.eq) goto loc_8228F93C;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r26,r11,92
	ctx.r26.s64 = ctx.r11.s64 + 92;
	// b 0x8228f940
	goto loc_8228F940;
loc_8228F93C:
	// li r26,0
	ctx.r26.s64 = 0;
loc_8228F940:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8228f958
	if (!ctx.cr6.eq) goto loc_8228F958;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8228F958:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x822555d8
	ctx.lr = 0x8228F964;
	sub_822555D8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d7ac8
	ctx.lr = 0x8228F970;
	sub_822D7AC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x8228f9c0
	if (!ctx.cr6.eq) goto loc_8228F9C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lfs f0,20512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20512);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17872(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17872);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_8228F9C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228fa00
	if (!ctx.cr6.gt) goto loc_8228FA00;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
loc_8228F9D8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d4c28
	ctx.lr = 0x8228F9E8;
	sub_822D4C28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228f9d8
	if (ctx.cr6.lt) goto loc_8228F9D8;
loc_8228FA00:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f11,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,7932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x8228fa9c
	if (ctx.cr6.eq) goto loc_8228FA9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8228facc
	if (!ctx.cr6.eq) goto loc_8228FACC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82259ae0
	ctx.lr = 0x8228FA54;
	sub_82259AE0(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r8,r11,-5928
	ctx.r8.s64 = ctx.r11.s64 + -5928;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x82259bc0
	ctx.lr = 0x8228FA88;
	sub_82259BC0(ctx, base);
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8228FA9C:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f4,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f3,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82259998
	ctx.lr = 0x8228FAC0;
	sub_82259998(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
loc_8228FACC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228F8F8) {
	__imp__sub_8228F8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228FADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228FADC) {
	__imp__sub_8228FADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228FAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228FAE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8228cca8
	ctx.lr = 0x8228FAF4;
	sub_8228CCA8(ctx, base);
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228fb40
	if (!ctx.cr6.gt) goto loc_8228FB40;
	// addi r29,r3,1424
	ctx.r29.s64 = ctx.r3.s64 + 1424;
	// addi r30,r31,620
	ctx.r30.s64 = ctx.r31.s64 + 620;
loc_8228FB0C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228f8f8
	ctx.lr = 0x8228FB1C;
	sub_8228F8F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228fb4c
	if (ctx.cr6.eq) goto loc_8228FB4C;
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228fb0c
	if (ctx.cr6.lt) goto loc_8228FB0C;
loc_8228FB40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8228FB4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228FAE0) {
	__imp__sub_8228FAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228FB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// addi r9,r3,92
	ctx.r9.s64 = ctx.r3.s64 + 92;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_8228FB78:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8228fb8c
	if (!ctx.cr6.eq) goto loc_8228FB8C;
	// stfs f0,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// b 0x8228fbd0
	goto loc_8228FBD0;
loc_8228FB8C:
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// stfs f2,16(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
loc_8228FBD0:
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8228fb78
	if (ctx.cr6.lt) goto loc_8228FB78;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228FB58) {
	__imp__sub_8228FB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228FBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228FBEC) {
	__imp__sub_8228FBEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228FBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8228FBF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8228cca8
	ctx.lr = 0x8228FC04;
	sub_8228CCA8(ctx, base);
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228fc5c
	if (!ctx.cr6.gt) goto loc_8228FC5C;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// addi r30,r28,92
	ctx.r30.s64 = ctx.r28.s64 + 92;
loc_8228FC20:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8228f5a8
	ctx.lr = 0x8228FC34;
	sub_8228F5A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228fc74
	if (ctx.cr6.eq) goto loc_8228FC74;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228fc20
	if (ctx.cr6.lt) goto loc_8228FC20;
loc_8228FC5C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8228fb58
	ctx.lr = 0x8228FC68;
	sub_8228FB58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8228FC74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228FBF0) {
	__imp__sub_8228FBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228FC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8228FC88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 616);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228fce0
	if (!ctx.cr6.gt) goto loc_8228FCE0;
	// addi r31,r3,624
	ctx.r31.s64 = ctx.r3.s64 + 624;
loc_8228FCA4:
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8228fcb8
	if (ctx.cr6.eq) goto loc_8228FCB8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82259d20
	ctx.lr = 0x8228FCB8;
	sub_82259D20(ctx, base);
loc_8228FCB8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8228fccc
	if (ctx.cr6.eq) goto loc_8228FCCC;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82259d20
	ctx.lr = 0x8228FCCC;
	sub_82259D20(ctx, base);
loc_8228FCCC:
	// lwz r11,616(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 616);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228fca4
	if (ctx.cr6.lt) goto loc_8228FCA4;
loc_8228FCE0:
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,620
	ctx.r3.s64 = ctx.r29.s64 + 620;
	// bl 0x823de090
	ctx.lr = 0x8228FCF0;
	sub_823DE090(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228FC80) {
	__imp__sub_8228FC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228FCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228FD00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228fd48
	if (!ctx.cr6.gt) goto loc_8228FD48;
	// addi r31,r3,68
	ctx.r31.s64 = ctx.r3.s64 + 68;
loc_8228FD20:
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8228fd34
	if (ctx.cr6.eq) goto loc_8228FD34;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82259630
	ctx.lr = 0x8228FD34;
	sub_82259630(ctx, base);
loc_8228FD34:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r28,32(r31)
	ea = 32 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228fd20
	if (ctx.cr6.lt) goto loc_8228FD20;
loc_8228FD48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228FCF8) {
	__imp__sub_8228FCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228FD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8228FD58;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de00c
	ctx.lr = 0x8228FD60;
	__savefpr_21(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8228cca8
	ctx.lr = 0x8228FD6C;
	sub_8228CCA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8228ccc0
	ctx.lr = 0x8228FD78;
	sub_8228CCC0(ctx, base);
	// lwz r10,1128(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1128);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r28,544
	ctx.r11.s64 = ctx.r28.s64 + 544;
	// addi r31,r28,2320
	ctx.r31.s64 = ctx.r28.s64 + 2320;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8228ff98
	if (!ctx.cr6.gt) goto loc_8228FF98;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_8228FDA0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbzu r4,8(r29)
	ea = 8 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// bl 0x822f0278
	ctx.lr = 0x8228FDB4;
	sub_822F0278(ctx, base);
	// addi r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 3;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x822f0278
	ctx.lr = 0x8228FDCC;
	sub_822F0278(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lfs f12,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f0,f12
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f0,f4
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f6,f6,f2
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f30,f11,f3
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f29,f9,f2
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f28,f0,f3
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f27,f11,f2
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f4,f9,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f25,f10,f12
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f24,f13,f12
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f26,f12,f5
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f23,f1,f6
	ctx.f23.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f3,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// stfs f12,188(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fsubs f0,f28,f29
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f11,f28,f29
	ctx.f11.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fadds f22,f30,f6
	ctx.f22.f64 = double(float(ctx.f30.f64 + ctx.f6.f64));
	// fadds f12,f4,f27
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f27.f64));
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmuls f29,f10,f25
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// fmuls f28,f13,f24
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// fmuls f30,f5,f26
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f26.f64));
	// fsubs f6,f27,f4
	ctx.f6.f64 = double(float(ctx.f27.f64 - ctx.f4.f64));
	// stfs f6,196(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fsubs f9,f2,f3
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// stfs f9,216(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fadds f5,f3,f2
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f5,200(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fsubs f3,f31,f1
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// stfs f3,192(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f21,f10,f26
	ctx.f21.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// fmuls f1,f8,f26
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f26.f64));
	// fmuls f2,f13,f26
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fmuls f26,f8,f25
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f25.f64));
	// fmuls f27,f13,f25
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fadds f25,f28,f29
	ctx.f25.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// fadds f28,f28,f30
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fsubs f10,f31,f23
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f23.f64));
	// stfs f10,208(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fsubs f4,f31,f22
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f22.f64));
	// stfs f4,224(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f30,f29,f30
	ctx.f30.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmuls f8,f8,f24
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f24.f64));
	// fmuls f29,f7,f0
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f0,f4,f29
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f29.f64));
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f9,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fsubs f4,f2,f26
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f26.f64));
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f4,f8,f21
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f21.f64));
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f8,f21,f8
	ctx.f8.f64 = double(float(ctx.f21.f64 - ctx.f8.f64));
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fsubs f4,f31,f25
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f25.f64));
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f8,f31,f28
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f4,f27,f1
	ctx.f4.f64 = double(float(ctx.f27.f64 + ctx.f1.f64));
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f2,f26,f2
	ctx.f2.f64 = double(float(ctx.f26.f64 + ctx.f2.f64));
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmadds f11,f0,f11,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fnmadds f10,f13,f5,f7
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * ctx.f5.f64 + ctx.f7.f64)));
	// stfs f10,236(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fsubs f9,f27,f1
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f1.f64));
	// stfs f9,172(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsubs f8,f31,f30
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fnmadds f7,f13,f3,f12
	ctx.f7.f64 = double(float(-(ctx.f13.f64 * ctx.f3.f64 + ctx.f12.f64)));
	// stfs f7,228(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fnmadds f6,f13,f6,f11
	ctx.f6.f64 = double(float(-(ctx.f13.f64 * ctx.f6.f64 + ctx.f11.f64)));
	// stfs f6,232(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// bl 0x822d60b8
	ctx.lr = 0x8228FF60;
	sub_822D60B8(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822d9618
	ctx.lr = 0x8228FF6C;
	sub_822D9618(ctx, base);
	// lfs f5,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f4.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lfs f3,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f3.f64 = double(temp.f32);
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r9,1128(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1128);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8228fda0
	if (ctx.cr6.lt) goto loc_8228FDA0;
loc_8228FF98:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de058
	ctx.lr = 0x8228FFA4;
	__restfpr_21(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228FD50) {
	__imp__sub_8228FD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228FFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8228fbf0
	ctx.lr = 0x8228FFC0;
	sub_8228FBF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228ffec
	if (!ctx.cr6.eq) goto loc_8228FFEC;
	// bl 0x8228fcf8
	ctx.lr = 0x8228FFD4;
	sub_8228FCF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8228FFEC:
	// bl 0x8228fae0
	ctx.lr = 0x8228FFF0;
	sub_8228FAE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82290024
	if (!ctx.cr6.eq) goto loc_82290024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228fcf8
	ctx.lr = 0x82290004;
	sub_8228FCF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228fc80
	ctx.lr = 0x8229000C;
	sub_8228FC80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82290024:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228FFA8) {
	__imp__sub_8228FFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229003C) {
	__imp__sub_8229003C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8228fc80
	ctx.lr = 0x82290058;
	sub_8228FC80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228fcf8
	ctx.lr = 0x82290060;
	sub_8228FCF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82290040) {
	__imp__sub_82290040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82290074) {
	__imp__sub_82290074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82290080;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8228f488
	ctx.lr = 0x8229008C;
	sub_8228F488(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822900a4
	if (!ctx.cr6.eq) goto loc_822900A4;
loc_82290098:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822900A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8228ccc0
	ctx.lr = 0x822900AC;
	sub_8228CCC0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8228cca8
	ctx.lr = 0x822900B8;
	sub_8228CCA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,88(r26)
	PPC_STORE_U32(ctx.r26.u32 + 88, ctx.r11.u32);
	// lwz r10,1128(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1128);
	// stw r10,540(r26)
	PPC_STORE_U32(ctx.r26.u32 + 540, ctx.r10.u32);
	// lwz r9,1420(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1420);
	// stw r9,616(r26)
	PPC_STORE_U32(ctx.r26.u32 + 616, ctx.r9.u32);
	// bl 0x8228fc80
	ctx.lr = 0x822900DC;
	sub_8228FC80(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8228fcf8
	ctx.lr = 0x822900E4;
	sub_8228FCF8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8228ffa8
	ctx.lr = 0x822900EC;
	sub_8228FFA8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82290098
	if (ctx.cr6.eq) goto loc_82290098;
	// lwz r11,1128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1128);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r26,544
	ctx.r31.s64 = ctx.r26.s64 + 544;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229015c
	if (!ctx.cr6.gt) goto loc_8229015C;
	// addi r29,r27,1124
	ctx.r29.s64 = ctx.r27.s64 + 1124;
loc_82290114:
	// stb r25,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822efc98
	ctx.lr = 0x8229012C;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82290098
	if (ctx.cr6.eq) goto loc_82290098;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82290098
	if (ctx.cr6.eq) goto loc_82290098;
	// lwzu r11,32(r29)
	ea = 32 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,1128(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1128);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82290114
	if (ctx.cr6.lt) goto loc_82290114;
loc_8229015C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8228fd50
	ctx.lr = 0x82290164;
	sub_8228FD50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82290078) {
	__imp__sub_82290078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,60(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f0,24288(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24288);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82290170) {
	__imp__sub_82290170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82290194) {
	__imp__sub_82290194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290198) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82290198) {
	__imp__sub_82290198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822901A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de024
	ctx.lr = 0x822901B0;
	__savefpr_27(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f6,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f28,f10,f9
	ctx.f28.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f4,f4,f9
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f27,f3,f2
	ctx.f27.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fsubs f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// lfd f12,24288(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24288);
	// fmuls f13,f7,f7
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f6,f7
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f10,f29,f7
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f7.f64));
	// addi r11,r11,5484
	ctx.r11.s64 = ctx.r11.s64 + 5484;
	// fmuls f9,f4,f4
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmuls f8,f28,f4
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f4.f64));
	// fmadds f1,f5,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f0,f4,f5,f11
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f11.f64));
	// fmadds f11,f28,f5,f10
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f10,f6,f6,f9
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f9,f29,f6,f8
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f1,f3,f3,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f13,f2,f3,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f31,f27,f3,f11
	ctx.f31.f64 = double(float(ctx.f27.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f0,f2,f2,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f11,f27,f2,f9
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f2.f64 + ctx.f9.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmsubs f10,f0,f1,f8
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 - ctx.f8.f64));
	// fmr f30,f10
	ctx.f30.f64 = ctx.f10.f64;
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x8229027c
	if (!ctx.cr6.lt) goto loc_8229027C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// b 0x822902b0
	goto loc_822902B0;
loc_8229027C:
	// fmuls f12,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f8,f31,f13
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmsubs f12,f11,f13,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fmsubs f8,f11,f1,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 - ctx.f8.f64));
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bge cr6,0x822902a0
	if (!ctx.cr6.lt) goto loc_822902A0;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// b 0x822902b0
	goto loc_822902B0;
loc_822902A0:
	// fcmpu cr6,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// ble cr6,0x822902b4
	if (!ctx.cr6.gt) goto loc_822902B4;
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
	// fadds f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
loc_822902B0:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
loc_822902B4:
	// fcmpu cr6,f8,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bge cr6,0x822902c8
	if (!ctx.cr6.lt) goto loc_822902C8;
	// fneg f12,f31
	ctx.f12.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// b 0x822902d8
	goto loc_822902D8;
loc_822902C8:
	// fcmpu cr6,f8,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// ble cr6,0x822902fc
	if (!ctx.cr6.gt) goto loc_822902FC;
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
loc_822902D8:
	// fcmpu cr6,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bge cr6,0x822902e8
	if (!ctx.cr6.lt) goto loc_822902E8;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// b 0x822902fc
	goto loc_822902FC;
loc_822902E8:
	// fcmpu cr6,f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// ble cr6,0x822902f8
	if (!ctx.cr6.gt) goto loc_822902F8;
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
	// b 0x822902fc
	goto loc_822902FC;
loc_822902F8:
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_822902FC:
	// fabs f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5992(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82290318
	if (!ctx.cr6.lt) goto loc_82290318;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// b 0x8229031c
	goto loc_8229031C;
loc_82290318:
	// fdivs f13,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f30.f64));
loc_8229031C:
	// fabs f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82290330
	if (!ctx.cr6.lt) goto loc_82290330;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x82290334
	goto loc_82290334;
loc_82290330:
	// fdivs f0,f8,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f10.f64));
loc_82290334:
	// fmadds f11,f7,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f29.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f12,f5,f13,f28
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f28.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f10,f3,f13,f27
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f27.f64));
	// fnmsubs f8,f6,f0,f11
	ctx.f8.f64 = double(float(-(ctx.f6.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// stfs f8,4(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fnmsubs f9,f4,f0,f12
	ctx.f9.f64 = double(float(-(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fnmsubs f7,f2,f0,f10
	ctx.f7.f64 = double(float(-(ctx.f2.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// stfs f7,8(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de070
	ctx.lr = 0x82290368;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822901A0) {
	__imp__sub_822901A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82290374) {
	__imp__sub_82290374(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822555d8
	ctx.lr = 0x822903A0;
	sub_822555D8(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f0,f10,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f9.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,16(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f0,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f5,20(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82290378) {
	__imp__sub_82290378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822903EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822903EC) {
	__imp__sub_822903EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822903F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822903F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x82290378
	ctx.lr = 0x82290420;
	sub_82290378(ctx, base);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rotlwi r11,r10,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x82290378
	ctx.lr = 0x82290438;
	sub_82290378(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822903F0) {
	__imp__sub_822903F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82290448;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x8228cca8
	ctx.lr = 0x82290470;
	sub_8228CCA8(ctx, base);
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f11,13988(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13988);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f11
	ctx.cr6.compare(ctx.f6.f64, ctx.f11.f64);
	// blt cr6,0x82290568
	if (ctx.cr6.lt) goto loc_82290568;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d4b08
	ctx.lr = 0x822904CC;
	sub_822D4B08(ctx, base);
	// fadds f12,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lbz r7,1(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// rotlwi r9,r7,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f1
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,2
	ctx.r3.s64 = 2;
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f3,f31,f4
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// fmadds f2,f8,f3,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f1,f7,f3,f10
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f10.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f0,f6,f3,f9
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,72(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r5,100(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// bl 0x82254530
	ctx.lr = 0x82290568;
	sub_82254530(ctx, base);
loc_82290568:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82290440) {
	__imp__sub_82290440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82290580;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lis r27,-31919
	ctx.r27.s64 = -2091843584;
	// addi r25,r11,-15888
	ctx.r25.s64 = ctx.r11.s64 + -15888;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82290598:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822905b0
	if (ctx.cr6.lt) goto loc_822905B0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822905b4
	if (!ctx.cr6.gt) goto loc_822905B4;
loc_822905B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822905B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822907b0
	if (ctx.cr6.eq) goto loc_822907B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8228cca8
	ctx.lr = 0x822905C8;
	sub_8228CCA8(ctx, base);
	// lwz r11,3776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3776);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822907b0
	if (!ctx.cr6.gt) goto loc_822907B0;
	// addi r31,r3,3780
	ctx.r31.s64 = ctx.r3.s64 + 3780;
loc_822905E0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 + 92;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x822555d8
	ctx.lr = 0x82290600;
	sub_822555D8(ctx, base);
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f9,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f0,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f6,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r11,r10,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 + 92;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x822555d8
	ctx.lr = 0x82290654;
	sub_822555D8(ctx, base);
	// lfs f4,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r1,264
	ctx.r7.s64 = ctx.r1.s64 + 264;
	// lfs f3,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f4,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f3.f64));
	// lfs f11,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f13,f4,f2
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f9,f11,f4,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x822901a0
	ctx.lr = 0x822906A0;
	sub_822901A0(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsubs f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r9,-15952(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -15952);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f5,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fsubs f4,f2,f10
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// fmadds f7,f6,f0,f13
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// fmadds f11,f1,f0,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f3,f13,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f10,f4,f13,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f4,f2,f8
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// lfs f6,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f5,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f1,56(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f6,f31
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fsubs f3,f12,f7
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fsubs f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmadds f13,f4,f13,f8
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f0,f5,f0,f9
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f11,f2,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fmuls f10,f3,f3
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f8,f12,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f6,f11
	ctx.cr6.compare(ctx.f6.f64, ctx.f11.f64);
	// bgt cr6,0x8229079c
	if (ctx.cr6.gt) goto loc_8229079C;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82290440
	ctx.lr = 0x8229079C;
	sub_82290440(ctx, base);
loc_8229079C:
	// lwz r11,3776(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3776);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822905e0
	if (ctx.cr6.lt) goto loc_822905E0;
loc_822907B0:
	// addis r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 65536;
	// addi r28,r28,2624
	ctx.r28.s64 = ctx.r28.s64 + 2624;
	// addi r11,r11,18432
	ctx.r11.s64 = ctx.r11.s64 + 18432;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82290598
	if (ctx.cr6.lt) goto loc_82290598;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82290578) {
	__imp__sub_82290578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822907D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822907D8;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r27,-31919
	ctx.r27.s64 = -2091843584;
	// lfs f29,6020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6020);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
loc_82290804:
	// lwz r11,616(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 616);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82290850
	if (!ctx.cr6.gt) goto loc_82290850;
	// addi r31,r29,620
	ctx.r31.s64 = ctx.r29.s64 + 620;
loc_82290820:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8229083c
	if (ctx.cr6.eq) goto loc_8229083C;
	// bl 0x822583b8
	ctx.lr = 0x82290830;
	sub_822583B8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8229083c
	if (!ctx.cr6.gt) goto loc_8229083C;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_8229083C:
	// lwz r11,616(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 616);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82290820
	if (ctx.cr6.lt) goto loc_82290820;
loc_82290850:
	// lwz r11,-15936(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -15936);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82290868
	if (!ctx.cr6.lt) goto loc_82290868;
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bgt cr6,0x82290804
	if (ctx.cr6.gt) goto loc_82290804;
loc_82290868:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822907D0) {
	__imp__sub_822907D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229087C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229087C) {
	__imp__sub_8229087C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8228e9c8
	ctx.lr = 0x82290898;
	sub_8228E9C8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82290880) {
	__imp__sub_82290880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822908C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822908C4) {
	__imp__sub_822908C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822908C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822908D0;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290b58
	if (ctx.cr6.eq) goto loc_82290B58;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,12240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// bl 0x8228e9c8
	ctx.lr = 0x82290910;
	sub_8228E9C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8228e9e0
	ctx.lr = 0x8229091C;
	sub_8228E9E0(ctx, base);
	// lwz r9,88(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r25,92
	ctx.r11.s64 = ctx.r25.s64 + 92;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82290b58
	if (!ctx.cr6.gt) goto loc_82290B58;
	// addi r27,r11,-24
	ctx.r27.s64 = ctx.r11.s64 + -24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r29,-4
	ctx.r31.s64 = ctx.r29.s64 + -4;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// lis r24,-31919
	ctx.r24.s64 = -2091843584;
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
loc_8229094C:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,-20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f8,-16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f10,f5,f4,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fmadds f9,f3,f2,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f8,f1,f0,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f30
	ctx.cr6.compare(ctx.f8.f64, ctx.f30.f64);
	// bge cr6,0x822909e4
	if (!ctx.cr6.lt) goto loc_822909E4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f13,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x82290a00
	goto loc_82290A00;
loc_822909E4:
	// stfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82290A00:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfsu f11,32(r31)
	ea = 32 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r31.u32 = ea;
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x822da9b0
	ctx.lr = 0x82290A28;
	sub_822DA9B0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822da9b0
	ctx.lr = 0x82290A30;
	sub_822DA9B0(ctx, base);
	// lfs f7,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f5,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f4,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f11,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// fneg f2,f4
	ctx.f2.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f11,f6
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f7,f6,f10
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmadds f5,f3,f11,f9
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f4,f2,f11,f8
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f1,f2,f0,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmsubs f11,f11,f13,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f7.f64));
	// fmadds f9,f12,f6,f5
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f8,f3,f10,f4
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f7,f13,f10,f1
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fnmsubs f5,f3,f0,f11
	ctx.f5.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// fnmsubs f4,f2,f10,f9
	ctx.f4.f64 = double(float(-(ctx.f2.f64 * ctx.f10.f64 - ctx.f9.f64)));
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fnmsubs f1,f0,f6,f8
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f6.f64 - ctx.f8.f64)));
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fnmsubs f0,f3,f12,f7
	ctx.f0.f64 = double(float(-(ctx.f3.f64 * ctx.f12.f64 - ctx.f7.f64)));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fnmsubs f13,f2,f12,f5
	ctx.f13.f64 = double(float(-(ctx.f2.f64 * ctx.f12.f64 - ctx.f5.f64)));
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822da9b0
	ctx.lr = 0x82290AB4;
	sub_822DA9B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8228eff0
	ctx.lr = 0x82290AC0;
	sub_8228EFF0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8228ed48
	ctx.lr = 0x82290AD0;
	sub_8228ED48(ctx, base);
	// lwz r11,-15904(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -15904);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lwz r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// lfs f3,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f3,f5
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f1,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82255570
	ctx.lr = 0x82290B30;
	sub_82255570(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r3,32(r27)
	ea = 32 + ctx.r27.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// bl 0x82255580
	ctx.lr = 0x82290B3C;
	sub_82255580(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229094c
	if (ctx.cr6.lt) goto loc_8229094C;
loc_82290B58:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822908C8) {
	__imp__sub_822908C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82290B70;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8228cca8
	ctx.lr = 0x82290B7C;
	sub_8228CCA8(ctx, base);
	// addi r11,r31,2612
	ctx.r11.s64 = ctx.r31.s64 + 2612;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,2612(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2612);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lfs f10,2616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2616);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f9,2620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2620);
	ctx.f9.f64 = double(temp.f32);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfs f12,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// lfs f13,20516(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20516);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f11,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f0,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f10,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 + 92;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fdivs f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f5.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ble cr6,0x82290c6c
	if (!ctx.cr6.gt) goto loc_82290C6C;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
loc_82290C24:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82255570
	ctx.lr = 0x82290C30;
	sub_82255570(ctx, base);
	// lwz r11,2608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2608);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,962
	ctx.r11.s64 = ctx.r11.s64 + 962;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82290c54
	if (ctx.cr6.eq) goto loc_82290C54;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
loc_82290C54:
	// bl 0x82255580
	ctx.lr = 0x82290C58;
	sub_82255580(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82290c24
	if (ctx.cr6.lt) goto loc_82290C24;
loc_82290C6C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82290B68) {
	__imp__sub_82290B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82290C74) {
	__imp__sub_82290C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r8,r5,-4
	ctx.r8.s64 = ctx.r5.s64 + -4;
	// addi r10,r9,92
	ctx.r10.s64 = ctx.r9.s64 + 92;
loc_82290C98:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82290cb4
	if (!ctx.cr6.eq) goto loc_82290CB4;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82290ccc
	if (ctx.cr6.eq) goto loc_82290CCC;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82290CB4:
	// lwz r7,88(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82290c98
	if (ctx.cr6.lt) goto loc_82290C98;
	// blr 
	return;
loc_82290CCC:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82290C78) {
	__imp__sub_82290C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82290CD4) {
	__imp__sub_82290CD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82290CE0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,640
	ctx.r10.s64 = 41943040;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r28,r11,-9672
	ctx.r28.s64 = ctx.r11.s64 + -9672;
	// ori r26,r10,58513
	ctx.r26.u64 = ctx.r10.u64 | 58513;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8211e9c0
	ctx.lr = 0x82290D1C;
	sub_8211E9C0(ctx, base);
	// lbz r9,41(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 41);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82290d5c
	if (ctx.cr6.eq) goto loc_82290D5C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211e9c0
	ctx.lr = 0x82290D40;
	sub_8211E9C0(ctx, base);
	// lbz r11,41(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82290d98
	if (ctx.cr6.eq) goto loc_82290D98;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82290D5C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82290d98
	if (ctx.cr6.eq) goto loc_82290D98;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211e9c0
	ctx.lr = 0x82290D88;
	sub_8211E9C0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82290d9c
	if (!ctx.cr6.eq) goto loc_82290D9C;
loc_82290D98:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82290D9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82290CD8) {
	__imp__sub_82290CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82290DB0;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r31,r3,92
	ctx.r31.s64 = ctx.r3.s64 + 92;
	// bl 0x8228cca8
	ctx.lr = 0x82290DC4;
	sub_8228CCA8(ctx, base);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8228e9c8
	ctx.lr = 0x82290DD0;
	sub_8228E9C8(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82290f78
	if (!ctx.cr6.gt) goto loc_82290F78;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r23,r30,52
	ctx.r23.s64 = ctx.r30.s64 + 52;
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// lfs f31,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// addi r21,r11,14632
	ctx.r21.s64 = ctx.r11.s64 + 14632;
loc_82290E04:
	// lwz r11,-4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290f58
	if (ctx.cr6.eq) goto loc_82290F58;
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82290e30
	if (ctx.cr6.eq) goto loc_82290E30;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,-8
	ctx.r3.s64 = ctx.r30.s64 + -8;
	// bl 0x8228ec88
	ctx.lr = 0x82290E2C;
	sub_8228EC88(ctx, base);
	// b 0x82290e50
	goto loc_82290E50;
loc_82290E30:
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82290E50:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6a38
	ctx.lr = 0x82290E5C;
	sub_822D6A38(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f13,-20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f12,-16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82290c78
	ctx.lr = 0x82290E84;
	sub_82290C78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82290f04
	if (!ctx.cr6.gt) goto loc_82290F04;
	// lfs f11,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f7,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f10,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f5,f8,f10,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f4,f7,f10,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ble cr6,0x82290f04
	if (!ctx.cr6.gt) goto loc_82290F04;
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
loc_82290ECC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x82290cd8
	ctx.lr = 0x82290EE8;
	sub_82290CD8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82290f88
	if (ctx.cr6.eq) goto loc_82290F88;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82290ecc
	if (ctx.cr6.lt) goto loc_82290ECC;
loc_82290F04:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// fmadds f11,f12,f13,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f9,-20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f13,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfs f7,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f6,-16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82290cd8
	ctx.lr = 0x82290F4C;
	sub_82290CD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82290f88
	if (ctx.cr6.eq) goto loc_82290F88;
loc_82290F58:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// addi r23,r23,80
	ctx.r23.s64 = ctx.r23.s64 + 80;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82290e04
	if (ctx.cr6.lt) goto loc_82290E04;
loc_82290F78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82290F88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82290DA8) {
	__imp__sub_82290DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290F98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82290F98) {
	__imp__sub_82290F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82290F9C) {
	__imp__sub_82290F9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82290FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82290FA8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8228cca8
	ctx.lr = 0x82290FBC;
	sub_8228CCA8(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,1420(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1420);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,-15944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15944);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// addi r11,r28,1424
	ctx.r11.s64 = ctx.r28.s64 + 1424;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f13,19444(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19444);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6020(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6020);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,620
	ctx.r30.s64 = ctx.r31.s64 + 620;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// fdivs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f31,f5,f13,f12
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f12.f64));
	// ble cr6,0x822910ec
	if (!ctx.cr6.gt) goto loc_822910EC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r11,-5928
	ctx.r27.s64 = ctx.r11.s64 + -5928;
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
loc_8229104C:
	// lwz r11,-76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822910ac
	if (ctx.cr6.eq) goto loc_822910AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822910d4
	if (!ctx.cr6.eq) goto loc_822910D4;
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f12,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x822910d4
	if (ctx.cr6.eq) goto loc_822910D4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r8,r31,-20
	ctx.r8.s64 = ctx.r31.s64 + -20;
	// addi r7,r31,-32
	ctx.r7.s64 = ctx.r31.s64 + -32;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82257d88
	ctx.lr = 0x822910A8;
	sub_82257D88(ctx, base);
	// b 0x822910d4
	goto loc_822910D4;
loc_822910AC:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822910d4
	if (ctx.cr6.eq) goto loc_822910D4;
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f4,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f3,-32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82257ca0
	ctx.lr = 0x822910D4;
	sub_82257CA0(ctx, base);
loc_822910D4:
	// lwz r11,1420(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1420);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229104c
	if (ctx.cr6.lt) goto loc_8229104C;
loc_822910EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82290FA0) {
	__imp__sub_82290FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822910FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822910FC) {
	__imp__sub_822910FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-5928
	ctx.r11.s64 = ctx.r11.s64 + -5928;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82291138
	if (!ctx.cr6.eq) goto loc_82291138;
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82291138
	if (!ctx.cr6.eq) goto loc_82291138;
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82291168
	if (ctx.cr6.eq) goto loc_82291168;
loc_82291138:
	// lfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-15932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15932);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f10
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82291168:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82291100) {
	__imp__sub_82291100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82291178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82291100
	ctx.lr = 0x82291184;
	sub_82291100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229119c
	if (ctx.cr6.eq) goto loc_8229119C;
loc_82291190:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229119C:
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,2548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822911f0
	if (ctx.cr6.gt) goto loc_822911F0;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822911f0
	if (!ctx.cr6.gt) goto loc_822911F0;
	// addi r30,r29,100
	ctx.r30.s64 = ctx.r29.s64 + 100;
loc_822911C8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822578d0
	ctx.lr = 0x822911D0;
	sub_822578D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82291190
	if (ctx.cr6.eq) goto loc_82291190;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822911c8
	if (ctx.cr6.lt) goto loc_822911C8;
loc_822911F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82291170) {
	__imp__sub_82291170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822911FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822911FC) {
	__imp__sub_822911FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8228fc80
	ctx.lr = 0x8229121C;
	sub_8228FC80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228fcf8
	ctx.lr = 0x82291224;
	sub_8228FCF8(ctx, base);
	// li r5,2624
	ctx.r5.s64 = 2624;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823de090
	ctx.lr = 0x82291238;
	sub_823DE090(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82291200) {
	__imp__sub_82291200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82291258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8228cca8
	ctx.lr = 0x82291270;
	sub_8228CCA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwz r9,1128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// stw r9,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r9.u32);
	// lwz r8,1420(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// stw r8,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82291258) {
	__imp__sub_82291258(ctx, base);
}

