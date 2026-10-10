#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822A3CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,-7040
	ctx.r7.s64 = ctx.r9.s64 + -7040;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addis r11,r7,9
	ctx.r11.s64 = ctx.r7.s64 + 589824;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// lwzx r3,r5,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3CF8) {
	__imp__sub_822A3CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r6,r7,27
	ctx.r6.u64 = ctx.r7.u32 & 0x1F;
	// subfc r5,r9,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r9.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3D28) {
	__imp__sub_822A3D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3D54) {
	__imp__sub_822A3D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r3,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3D58) {
	__imp__sub_822A3D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// addi r11,r9,14744
	ctx.r11.s64 = ctx.r9.s64 + 14744;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r11,r6,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3D80) {
	__imp__sub_822A3D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,22
	ctx.r9.s64 = ctx.r11.s64 + 22;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3DB8) {
	__imp__sub_822A3DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,25,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x60;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3DD0) {
	__imp__sub_822A3DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3DF4) {
	__imp__sub_822A3DF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// clrlwi r3,r7,27
	ctx.r3.u64 = ctx.r7.u32 & 0x1F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3DF8) {
	__imp__sub_822A3DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r3,r8,27
	ctx.r3.u64 = ctx.r8.u32 & 0x1F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A3E18) {
	__imp__sub_822A3E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A3E34) {
	__imp__sub_822A3E34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822A3E40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822a2df0
	ctx.lr = 0x822A3E4C;
	sub_822A2DF0(ctx, base);
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r10,-7040
	ctx.r30.s64 = ctx.r10.s64 + -7040;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// add r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// addi r28,r7,14744
	ctx.r28.s64 = ctx.r7.s64 + 14744;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r29,r6,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r28,2
	ctx.r5.s64 = ctx.r28.s64 + 2;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,119
	ctx.r27.s64 = 119;
	// sth r31,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r31.u16);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// sth r31,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r31.u16);
	// sthx r8,r29,r5
	PPC_STORE_U16(ctx.r29.u32 + ctx.r5.u32, ctx.r8.u16);
	// bl 0x822a2df0
	ctx.lr = 0x822A3E98;
	sub_822A2DF0(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r4,r29,r28
	PPC_STORE_U16(ctx.r29.u32 + ctx.r28.u32, ctx.r4.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// sth r31,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r31.u16);
	// sth r31,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r31.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A3E38) {
	__imp__sub_822A3E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3EC0) {
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
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r10,14744
	ctx.r8.s64 = ctx.r10.s64 + 14744;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822a1490
	ctx.lr = 0x822A3EF0;
	sub_822A1490(ctx, base);
	// mulli r11,r3,101
	ctx.r11.s64 = ctx.r3.s64 * 101;
	// lis r7,20971
	ctx.r7.s64 = 1374355456;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r6,r7,60923
	ctx.r6.u64 = ctx.r7.u64 | 60923;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mulhwu r4,r11,r6
	ctx.r4.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r10,r5,51199
	ctx.r10.u64 = ctx.r5.u64 | 51199;
	// rlwinm r9,r4,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r7,r31,31
	ctx.r7.u64 = ctx.r31.u32 & 0x1;
	// ori r6,r8,51201
	ctx.r6.u64 = ctx.r8.u64 | 51201;
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r31,r7,r6
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A3F3C;
	sub_822A2B20(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 589824;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lhzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a3f88
	if (ctx.cr6.eq) goto loc_822A3F88;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
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
loc_822A3F88:
	// li r3,-1
	ctx.r3.s64 = -1;
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

PPC_WEAK_FUNC(sub_822A3EC0) {
	__imp__sub_822A3EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A3FA0) {
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
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r10,14744
	ctx.r11.s64 = ctx.r10.s64 + 14744;
	// addis r8,r3,-128
	ctx.r8.s64 = ctx.r3.s64 + -8388608;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r4,r8,8
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFFFF;
	// lis r5,20971
	ctx.r5.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// lhzx r10,r6,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r3,r5,60923
	ctx.r3.u64 = ctx.r5.u64 | 60923;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mulhwu r8,r11,r3
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r3.u32)) >> 32;
	// lis r5,0
	ctx.r5.s64 = 0;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// ori r10,r5,51201
	ctx.r10.u64 = ctx.r5.u64 | 51201;
	// ori r7,r9,51199
	ctx.r7.u64 = ctx.r9.u64 | 51199;
	// rlwinm r6,r8,18,14,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3FFFF;
	// mullw r31,r3,r10
	ctx.r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A401C;
	sub_822A2B20(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 589824;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// lhzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a4058
	if (!ctx.cr6.eq) goto loc_822A4058;
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
loc_822A4058:
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_822A3FA0) {
	__imp__sub_822A3FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4080) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a40f8
	if (!ctx.cr6.eq) goto loc_822A40F8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,254
	ctx.r11.s64 = 16646144;
	// addis r9,r4,126
	ctx.r9.s64 = ctx.r4.s64 + 8257536;
	// ori r10,r11,28671
	ctx.r10.u64 = ctx.r11.u64 | 28671;
	// addi r9,r9,28672
	ctx.r9.s64 = ctx.r9.s64 + 28672;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822a40c8
	if (ctx.cr6.gt) goto loc_822A40C8;
	// bl 0x822a3598
	ctx.lr = 0x822A40C4;
	sub_822A3598(ctx, base);
	// b 0x822a4164
	goto loc_822A4164;
loc_822A40C8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,23912
	ctx.r3.s64 = ctx.r11.s64 + 23912;
	// bl 0x822e84f0
	ctx.lr = 0x822A40D4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A40D8;
	sub_822AD350(ctx, base);
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-7040
	ctx.r11.s64 = ctx.r9.s64 + -7040;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// sthx r8,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u16);
	// b 0x822a4160
	goto loc_822A4160;
loc_822A40F8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822a4124
	if (!ctx.cr6.eq) goto loc_822A4124;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a3628
	ctx.lr = 0x822A4110;
	sub_822A3628(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2468
	ctx.lr = 0x822A411C;
	sub_822A2468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822a4164
	goto loc_822A4164;
loc_822A4124:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,23884
	ctx.r3.s64 = ctx.r7.s64 + 23884;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A4140;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A4144;
	sub_822AD350(ctx, base);
	// lis r6,-31896
	ctx.r6.s64 = -2090336256;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r6,-7040
	ctx.r11.s64 = ctx.r6.s64 + -7040;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// sthx r5,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u16);
loc_822A4160:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822A4164:
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

PPC_WEAK_FUNC(sub_822A4080) {
	__imp__sub_822A4080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A417C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A417C) {
	__imp__sub_822A417C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4180) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a4220
	if (!ctx.cr6.eq) goto loc_822A4220;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,254
	ctx.r11.s64 = 16646144;
	// addis r9,r4,126
	ctx.r9.s64 = ctx.r4.s64 + 8257536;
	// ori r10,r11,28671
	ctx.r10.u64 = ctx.r11.u64 | 28671;
	// addi r9,r9,28672
	ctx.r9.s64 = ctx.r9.s64 + 28672;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822a4214
	if (ctx.cr6.gt) goto loc_822A4214;
	// addis r11,r4,-128
	ctx.r11.s64 = ctx.r4.s64 + -8388608;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// clrlwi r4,r11,8
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFFFF;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// rlwinm r10,r7,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// ori r8,r5,51201
	ctx.r8.u64 = ctx.r5.u64 | 51201;
	// mullw r7,r10,r6
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addis r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A4204;
	sub_822A2B20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822A4214:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,23912
	ctx.r3.s64 = ctx.r11.s64 + 23912;
	// b 0x822a429c
	goto loc_822A429C;
loc_822A4220:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822a4284
	if (!ctx.cr6.eq) goto loc_822A4284;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r8,r10,60923
	ctx.r8.u64 = ctx.r10.u64 | 60923;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mulhwu r6,r11,r8
	ctx.r6.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// ori r7,r9,51199
	ctx.r7.u64 = ctx.r9.u64 | 51199;
	// rlwinm r5,r6,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// mullw r7,r5,r7
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addis r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A4274;
	sub_822A2B20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822A4284:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,23884
	ctx.r3.s64 = ctx.r7.s64 + 23884;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_822A429C:
	// bl 0x822e84f0
	ctx.lr = 0x822A42A0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x822A42AC;
	sub_822AD4E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A4180) {
	__imp__sub_822A4180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A42C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r7,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822a4300
	if (!ctx.cr6.lt) goto loc_822A4300;
	// li r10,2
	ctx.r10.s64 = 2;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// ld r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822A4300:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,36864
	ctx.r8.u64 = ctx.r9.u64 | 36864;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x822a4328
	if (!ctx.cr6.lt) goto loc_822A4328;
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// ld r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_822A4328:
	// li r10,6
	ctx.r10.s64 = 6;
	// addis r9,r11,-128
	ctx.r9.s64 = ctx.r11.s64 + -8388608;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// ld r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A42C0) {
	__imp__sub_822A42C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4340) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a3ac0
	ctx.lr = 0x822A4358;
	sub_822A3AC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a43a4
	if (ctx.cr6.eq) goto loc_822A43A4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// lis r8,-31896
	ctx.r8.s64 = -2090336256;
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addis r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 65536;
	// addi r6,r8,-7040
	ctx.r6.s64 = ctx.r8.s64 + -7040;
	// addi r11,r11,-28670
	ctx.r11.s64 = ctx.r11.s64 + -28670;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r4,r4,r6
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// bl 0x822a42c0
	ctx.lr = 0x822A4394;
	sub_822A42C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822ad100
	ctx.lr = 0x822A43A4;
	sub_822AD100(ctx, base);
loc_822A43A4:
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

PPC_WEAK_FUNC(sub_822A4340) {
	__imp__sub_822A4340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A43B8) {
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
	// bl 0x822a4180
	ctx.lr = 0x822A43D4;
	sub_822A4180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a43f0
	if (!ctx.cr6.eq) goto loc_822A43F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,23940
	ctx.r4.s64 = ctx.r11.s64 + 23940;
	// bl 0x822ad4e0
	ctx.lr = 0x822A43F0;
	sub_822AD4E0(ctx, base);
loc_822A43F0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addis r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 65536;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// add r7,r3,r30
	ctx.r7.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r10,r5,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a4448
	if (ctx.cr6.eq) goto loc_822A4448;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x822a42c0
	ctx.lr = 0x822A4438;
	sub_822A42C0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bl 0x822ad100
	ctx.lr = 0x822A4448;
	sub_822AD100(ctx, base);
loc_822A4448:
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

PPC_WEAK_FUNC(sub_822A43B8) {
	__imp__sub_822A43B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4460) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r7,r9,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// sth r7,-14(r1)
	PPC_STORE_U16(ctx.r1.u32 + -14, ctx.r7.u16);
	// sth r8,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r8.u16);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A4460) {
	__imp__sub_822A4460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4490) {
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
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x822a4510
	if (!ctx.cr6.eq) goto loc_822A4510;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r9,23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 23, ctx.xer);
	// bne cr6,0x822a4510
	if (!ctx.cr6.eq) goto loc_822A4510;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822a4680
	ctx.lr = 0x822A44D4;
	sub_822A4680(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fdivs f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f11.f64));
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
loc_822A4510:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
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

PPC_WEAK_FUNC(sub_822A4490) {
	__imp__sub_822A4490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A452C) {
	__imp__sub_822A452C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4530) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x822a4490
	ctx.lr = 0x822A454C;
	sub_822A4490(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A4530) {
	__imp__sub_822A4530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822A4570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addis r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 65536;
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// lis r8,20971
	ctx.r8.s64 = 1374355456;
	// mulli r10,r4,101
	ctx.r10.s64 = ctx.r4.s64 * 101;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// ori r7,r8,60923
	ctx.r7.u64 = ctx.r8.u64 | 60923;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r6,0
	ctx.r6.s64 = 0;
	// mulhwu r5,r10,r7
	ctx.r5.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// ori r9,r6,51199
	ctx.r9.u64 = ctx.r6.u64 | 51199;
	// rlwinm r8,r5,18,14,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0x3FFFF;
	// lis r3,0
	ctx.r3.s64 = 0;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// ori r29,r3,51201
	ctx.r29.u64 = ctx.r3.u64 | 51201;
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// subf r11,r5,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// ori r30,r6,36866
	ctx.r30.u64 = ctx.r6.u64 | 36866;
	// mullw r31,r7,r29
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x822a2b20
	ctx.lr = 0x822A45D0;
	sub_822A2B20(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 589824;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lhzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a4604
	if (!ctx.cr6.eq) goto loc_822A4604;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822A4604:
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addis r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 589824;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r10,36
	ctx.r7.s64 = ctx.r10.s64 + 36;
	// addi r6,r11,30
	ctx.r6.s64 = ctx.r11.s64 + 30;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,12168(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lhzx r10,r3,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r6.u32);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a4674
	if (ctx.cr6.eq) goto loc_822A4674;
loc_822A4644:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fadds f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// addi r8,r11,14
	ctx.r8.s64 = ctx.r11.s64 + 14;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a4674
	if (ctx.cr6.eq) goto loc_822A4674;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a4644
	if (!ctx.cr6.eq) goto loc_822A4644;
loc_822A4674:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A4568) {
	__imp__sub_822A4568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A467C) {
	__imp__sub_822A467C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822A4688;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r31,30
	ctx.r8.s64 = ctx.r31.s64 + 30;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// ori r5,r9,51201
	ctx.r5.u64 = ctx.r9.u64 | 51201;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lhzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// lfs f30,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// addis r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 65536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r29,-28670
	ctx.r29.s64 = ctx.r29.s64 + -28670;
	// beq cr6,0x822a471c
	if (ctx.cr6.eq) goto loc_822A471C;
loc_822A46D4:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r30,r11,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r3,r10,27
	ctx.r3.u64 = ctx.r10.u32 & 0x1F;
	// bl 0x822a4490
	ctx.lr = 0x822A46F0;
	sub_822A4490(ctx, base);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// addi r9,r31,14
	ctx.r9.s64 = ctx.r31.s64 + 14;
	// lhzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fadds f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// beq cr6,0x822a471c
	if (ctx.cr6.eq) goto loc_822A471C;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a46d4
	if (!ctx.cr6.eq) goto loc_822A46D4;
loc_822A471C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A4680) {
	__imp__sub_822A4680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822A4738;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rotlwi r11,r30,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,11
	ctx.r29.s64 = ctx.r11.s64 + 11;
	// bl 0x822a4680
	ctx.lr = 0x822A4764;
	sub_822A4680(ctx, base);
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822a4568
	ctx.lr = 0x822A4770;
	sub_822A4568(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lhz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822a47e0
	if (ctx.cr6.eq) goto loc_822A47E0;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// addi r27,r11,-7040
	ctx.r27.s64 = ctx.r11.s64 + -7040;
loc_822A4788:
	// lwzu r4,-4(r29)
	ea = -4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lbzu r3,-1(r29)
	ea = -1 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x822a47a8
	if (ctx.cr6.eq) goto loc_822A47A8;
	// bl 0x822a4490
	ctx.lr = 0x822A47A0;
	sub_822A4490(ctx, base);
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// b 0x822a47d8
	goto loc_822A47D8;
loc_822A47A8:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r27,24
	ctx.r10.s64 = ctx.r27.s64 + 24;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r31,r9,24,8,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a4680
	ctx.lr = 0x822A47C0;
	sub_822A4680(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// bl 0x822a4568
	ctx.lr = 0x822A47CC;
	sub_822A4568(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_822A47D8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822a4788
	if (!ctx.cr6.eq) goto loc_822A4788;
loc_822A47E0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A4730) {
	__imp__sub_822A4730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A47F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822A47F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,-6904(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6904);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a4864
	if (ctx.cr6.eq) goto loc_822A4864;
loc_822A4818:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822A481C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a481c
	if (!ctx.cr6.eq) goto loc_822A481C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bl 0x822e8058
	ctx.lr = 0x822A4848;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a4870
	if (ctx.cr6.eq) goto loc_822A4870;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a4818
	if (!ctx.cr6.eq) goto loc_822A4818;
loc_822A4864:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A4870:
	// lhzux r3,r31,r30
	ea = ctx.r31.u32 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A47F0) {
	__imp__sub_822A47F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822A4890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x82177148
	ctx.lr = 0x822A48A4;
	sub_82177148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x82172b20
	ctx.lr = 0x822A48B4;
	sub_82172B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822a48d8
	if (ctx.cr6.eq) goto loc_822A48D8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,23960
	ctx.r3.s64 = ctx.r11.s64 + 23960;
	// bl 0x822e84f0
	ctx.lr = 0x822A48CC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822A48D8;
	sub_822830E8(ctx, base);
loc_822A48D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821741c8
	ctx.lr = 0x822A48E0;
	sub_821741C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822db2b8
	ctx.lr = 0x822A48E8;
	sub_822DB2B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82177030
	ctx.lr = 0x822A48FC;
	sub_82177030(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A4888) {
	__imp__sub_822A4888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4908) {
	PPC_FUNC_PROLOGUE();
	// b 0x822a4888
	sub_822A4888(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A4908) {
	__imp__sub_822A4908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A490C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A490C) {
	__imp__sub_822A490C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x822A4918;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x822a4888
	ctx.lr = 0x822A4924;
	sub_822A4888(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24064
	ctx.r3.s64 = ctx.r11.s64 + 24064;
	// bl 0x822e5ed0
	ctx.lr = 0x822A4934;
	sub_822E5ED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x822A493C;
	sub_822A2818(ctx, base);
	// addi r27,r3,-1
	ctx.r27.s64 = ctx.r3.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e6d10
	ctx.lr = 0x822A4948;
	sub_822E6D10(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a4b74
	if (ctx.cr6.eq) goto loc_822A4B74;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r22,r11,24036
	ctx.r22.s64 = ctx.r11.s64 + 24036;
	// addi r21,r10,24008
	ctx.r21.s64 = ctx.r10.s64 + 24008;
	// addi r26,r9,32640
	ctx.r26.s64 = ctx.r9.s64 + 32640;
	// addi r25,r8,32632
	ctx.r25.s64 = ctx.r8.s64 + 32632;
	// addi r24,r7,32604
	ctx.r24.s64 = ctx.r7.s64 + 32604;
	// addi r23,r6,32624
	ctx.r23.s64 = ctx.r6.s64 + 32624;
loc_822A498C:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822A4994:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822a49b8
	if (ctx.cr6.eq) goto loc_822A49B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822a4994
	if (ctx.cr6.eq) goto loc_822A4994;
loc_822A49B8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822a49c8
	if (!ctx.cr6.eq) goto loc_822A49C8;
	// li r28,5
	ctx.r28.s64 = 5;
	// b 0x822a4a78
	goto loc_822A4A78;
loc_822A49C8:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822A49D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822a49f4
	if (ctx.cr6.eq) goto loc_822A49F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822a49d0
	if (ctx.cr6.eq) goto loc_822A49D0;
loc_822A49F4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822a4a04
	if (!ctx.cr6.eq) goto loc_822A4A04;
	// li r28,6
	ctx.r28.s64 = 6;
	// b 0x822a4a78
	goto loc_822A4A78;
loc_822A4A04:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822A4A0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822a4a30
	if (ctx.cr6.eq) goto loc_822A4A30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822a4a0c
	if (ctx.cr6.eq) goto loc_822A4A0C;
loc_822A4A30:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822a4a40
	if (!ctx.cr6.eq) goto loc_822A4A40;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x822a4a78
	goto loc_822A4A78;
loc_822A4A40:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822A4A48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822a4a6c
	if (ctx.cr6.eq) goto loc_822A4A6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822a4a48
	if (ctx.cr6.eq) goto loc_822A4A48;
loc_822A4A6C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822a4b84
	if (!ctx.cr6.eq) goto loc_822A4B84;
	// li r28,4
	ctx.r28.s64 = 4;
loc_822A4A78:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e6d10
	ctx.lr = 0x822A4A80;
	sub_822E6D10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a4aa8
	if (!ctx.cr6.eq) goto loc_822A4AA8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822A4A9C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822A4AA8;
	sub_822830E8(ctx, base);
loc_822A4AA8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822A4AAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a4aac
	if (!ctx.cr6.eq) goto loc_822A4AAC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// addic. r31,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r31.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822a4aec
	if (ctx.cr0.lt) goto loc_822A4AEC;
loc_822A4AD4:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x822A4AE0;
	sub_823DFA20(ctx, base);
	// stbx r3,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u8);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x822a4ad4
	if (!ctx.cr0.lt) goto loc_822A4AD4;
loc_822A4AEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229d020
	ctx.lr = 0x822A4AF4;
	sub_8229D020(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a47f0
	ctx.lr = 0x822A4B04;
	sub_822A47F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a4b20
	if (ctx.cr6.eq) goto loc_822A4B20;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822A4B20;
	sub_822830E8(ctx, base);
loc_822A4B20:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a2850
	ctx.lr = 0x822A4B28;
	sub_822A2850(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x822a2818
	ctx.lr = 0x822A4B30;
	sub_822A2818(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
loc_822A4B3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822a4b3c
	if (!ctx.cr6.eq) goto loc_822A4B3C;
	// sthux r31,r27,r29
	ea = ctx.r27.u32 + ctx.r29.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r27.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbu r28,2(r27)
	ea = 2 + ctx.r27.u32;
	PPC_STORE_U8(ea, ctx.r28.u8);
	ctx.r27.u32 = ea;
	// stbu r20,1(r27)
	ea = 1 + ctx.r27.u32;
	PPC_STORE_U8(ea, ctx.r20.u8);
	ctx.r27.u32 = ea;
	// bl 0x822e6d10
	ctx.lr = 0x822A4B64;
	sub_822E6D10(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a498c
	if (!ctx.cr6.eq) goto loc_822A498C;
loc_822A4B74:
	// bl 0x822e5fb0
	ctx.lr = 0x822A4B78;
	sub_822E5FB0(ctx, base);
	// bl 0x822db348
	ctx.lr = 0x822A4B7C;
	sub_822DB348(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_822A4B84:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r3,r11,23980
	ctx.r3.s64 = ctx.r11.s64 + 23980;
	// bl 0x822e84f0
	ctx.lr = 0x822A4B94;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822A4BA0;
	sub_822830E8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A4910) {
	__imp__sub_822A4910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4BA8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822a2818
	ctx.lr = 0x822A4BCC;
	sub_822A2818(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r9,24092
	ctx.r6.s64 = ctx.r9.s64 + 24092;
	// stw r3,-6904(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6904, ctx.r3.u32);
	// addi r4,r8,24080
	ctx.r4.s64 = ctx.r8.s64 + 24080;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823df2b0
	ctx.lr = 0x822A4BFC;
	sub_823DF2B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a4910
	ctx.lr = 0x822A4C04;
	sub_822A4910(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_822A4BA8) {
	__imp__sub_822A4BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A4C1C) {
	__imp__sub_822A4C1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4C20) {
	PPC_FUNC_PROLOGUE();
	// b 0x822a4ba8
	sub_822A4BA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A4C20) {
	__imp__sub_822A4C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A4C24) {
	__imp__sub_822A4C24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4C28) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a4cac
	if (!ctx.cr6.eq) goto loc_822A4CAC;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// bl 0x822a2f58
	ctx.lr = 0x822A4C58;
	sub_822A2F58(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822a2df0
	ctx.lr = 0x822A4C68;
	sub_822A2DF0(ctx, base);
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,119
	ctx.r8.s64 = 119;
	// lis r3,0
	ctx.r3.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// bl 0x822a37a8
	ctx.lr = 0x822A4CAC;
	sub_822A37A8(ctx, base);
loc_822A4CAC:
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

PPC_WEAK_FUNC(sub_822A4C28) {
	__imp__sub_822A4C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822A4CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-6904
	ctx.r10.s64 = ctx.r10.s64 + -6904;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a4d64
	if (!ctx.cr6.eq) goto loc_822A4D64;
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r9,-7040
	ctx.r30.s64 = ctx.r9.s64 + -7040;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r30,30
	ctx.r6.s64 = ctx.r30.s64 + 30;
	// sthx r7,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// lhzx r11,r8,r6
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a4d64
	if (ctx.cr6.eq) goto loc_822A4D64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addis r29,r7,1
	ctx.r29.s64 = ctx.r7.s64 + 65536;
	// addi r29,r29,-28670
	ctx.r29.s64 = ctx.r29.s64 + -28670;
loc_822A4D24:
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x822a4d48
	if (!ctx.cr6.eq) goto loc_822A4D48;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a4cc0
	ctx.lr = 0x822A4D48;
	sub_822A4CC0(ctx, base);
loc_822A4D48:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a4d64
	if (ctx.cr6.eq) goto loc_822A4D64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// b 0x822a4d24
	goto loc_822A4D24;
loc_822A4D64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A4CC0) {
	__imp__sub_822A4CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A4D6C) {
	__imp__sub_822A4D6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,-7040
	ctx.r9.s64 = ctx.r10.s64 + -7040;
	// addis r10,r9,9
	ctx.r10.s64 = ctx.r9.s64 + 589824;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822a4cc0
	sub_822A4CC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A4D70) {
	__imp__sub_822A4D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4DB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A4DB4) {
	__imp__sub_822A4DB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r7,r10,12184
	ctx.r7.s64 = ctx.r10.s64 + 12184;
	// ori r6,r8,56
	ctx.r6.u64 = ctx.r8.u64 | 56;
	// lwz r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r10,92(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A4DB8) {
	__imp__sub_822A4DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A4DF4) {
	__imp__sub_822A4DF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,14744
	ctx.r9.s64 = ctx.r11.s64 + 14744;
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_822A4E0C:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822a4e38
	if (ctx.cr6.eq) goto loc_822A4E38;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r7,r9,76
	ctx.r7.s64 = ctx.r9.s64 + 76;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822a4e0c
	if (ctx.cr6.lt) goto loc_822A4E0C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822A4E38:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A4DF8) {
	__imp__sub_822A4DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4E40) {
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
	// bl 0x822a2df0
	ctx.lr = 0x822A4E50;
	sub_822A2DF0(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r11,-7040
	ctx.r10.s64 = ctx.r11.s64 + -7040;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,119
	ctx.r10.s64 = 119;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A4E40) {
	__imp__sub_822A4E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A4E8C) {
	__imp__sub_822A4E8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A4E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822A4E98;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// li r11,23211
	ctx.r11.s64 = 23211;
	// addi r22,r10,-7040
	ctx.r22.s64 = ctx.r10.s64 + -7040;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r22,40
	ctx.r10.s64 = ctx.r22.s64 + 40;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822A4EC0:
	// lwz r11,-16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rlwinm r8,r11,0,25,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a4ee0
	if (ctx.cr6.eq) goto loc_822A4EE0;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x822a4ee0
	if (!ctx.cr6.eq) goto loc_822A4EE0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_822A4EE0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r11,0,25,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a4f00
	if (ctx.cr6.eq) goto loc_822A4F00;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x822a4f00
	if (!ctx.cr6.eq) goto loc_822A4F00;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_822A4F00:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r8,r11,0,25,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a4f20
	if (ctx.cr6.eq) goto loc_822A4F20;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x822a4f20
	if (!ctx.cr6.eq) goto loc_822A4F20;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_822A4F20:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r8,r11,0,25,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a4f40
	if (ctx.cr6.eq) goto loc_822A4F40;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x822a4f40
	if (!ctx.cr6.eq) goto loc_822A4F40;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_822A4F40:
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r8,r11,0,25,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a4f60
	if (ctx.cr6.eq) goto loc_822A4F60;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x822a4f60
	if (!ctx.cr6.eq) goto loc_822A4F60;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_822A4F60:
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// rlwinm r8,r11,0,25,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a4f80
	if (ctx.cr6.eq) goto loc_822A4F80;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x822a4f80
	if (!ctx.cr6.eq) goto loc_822A4F80;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_822A4F80:
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// bdnz 0x822a4ec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A4EC0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822a5364
	if (ctx.cr6.eq) goto loc_822A5364;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mulli r3,r9,140
	ctx.r3.s64 = ctx.r9.s64 * 140;
	// addi r4,r11,24264
	ctx.r4.s64 = ctx.r11.s64 + 24264;
	// bl 0x822dabf0
	ctx.lr = 0x822A4FA0;
	sub_822DABF0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a4fb8
	if (!ctx.cr6.eq) goto loc_822A4FB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,24220
	ctx.r4.s64 = ctx.r11.s64 + 24220;
	// b 0x822a535c
	goto loc_822A535C;
loc_822A4FB8:
	// lis r27,2
	ctx.r27.s64 = 131072;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r28,r22,24
	ctx.r28.s64 = ctx.r22.s64 + 24;
	// ori r27,r27,8194
	ctx.r27.u64 = ctx.r27.u64 | 8194;
loc_822A4FCC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a50ac
	if (ctx.cr6.eq) goto loc_822A50AC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x822a50ac
	if (!ctx.cr6.eq) goto loc_822A50AC;
	// lwz r3,-4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// addi r10,r3,11
	ctx.r10.s64 = ctx.r3.s64 + 11;
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822a5048
	if (ctx.cr6.eq) goto loc_822A5048;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822A5018:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lwzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r6,7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 7, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x822a5044
	if (!ctx.cr6.eq) goto loc_822A5044;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
loc_822A5044:
	// bdnz 0x822a5018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A5018;
loc_822A5048:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// bl 0x822a4730
	ctx.lr = 0x822A5064;
	sub_822A4730(ctx, base);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// rotlwi r8,r30,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stfs f1,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822a50ac
	if (!ctx.cr6.gt) goto loc_822A50AC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_822A5094:
	// lwzu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822a5094
	if (ctx.cr6.lt) goto loc_822A5094;
loc_822A50AC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bne 0x822a4fcc
	if (!ctx.cr0.eq) goto loc_822A4FCC;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r5,140
	ctx.r5.s64 = 140;
	// addi r6,r11,10392
	ctx.r6.s64 = ctx.r11.s64 + 10392;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823def18
	ctx.lr = 0x822A50D0;
	sub_823DEF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r23,r11,22576
	ctx.r23.s64 = ctx.r11.s64 + 22576;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82280900
	ctx.lr = 0x822A50E4;
	sub_82280900(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lfs f29,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// ble cr6,0x822a5230
	if (!ctx.cr6.gt) goto loc_822A5230;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r27,r11,23044
	ctx.r27.s64 = ctx.r11.s64 + 23044;
	// addi r26,r10,24176
	ctx.r26.s64 = ctx.r10.s64 + 24176;
loc_822A5110:
	// mulli r11,r28,140
	ctx.r11.s64 = ctx.r28.s64 * 140;
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// add r29,r11,r24
	ctx.r29.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// addi r7,r29,136
	ctx.r7.s64 = ctx.r29.s64 + 136;
	// subf r3,r24,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_822A5130:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lfs f12,-4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r3,r3,-140
	ctx.r3.s64 = ctx.r3.s64 + -140;
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// addi r7,r7,140
	ctx.r7.s64 = ctx.r7.s64 + 140;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x822a51ac
	if (!ctx.cr6.lt) goto loc_822A51AC;
	// lwz r6,128(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// addi r4,r7,-136
	ctx.r4.s64 = ctx.r7.s64 + -136;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822a519c
	if (!ctx.cr6.gt) goto loc_822A519C;
	// lwz r31,-8(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822A5174:
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x822a519c
	if (!ctx.cr6.lt) goto loc_822A519C;
	// lwzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822a5378
	if (!ctx.cr6.eq) goto loc_822A5378;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822a5174
	if (ctx.cr6.lt) goto loc_822A5174;
loc_822A519C:
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
loc_822A51A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a5130
	if (ctx.cr6.eq) goto loc_822A5130;
loc_822A51AC:
	// fctiwz f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r3,23
	ctx.r3.s64 = 23;
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x82280900
	ctx.lr = 0x822A51D8;
	sub_82280900(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8229e260
	ctx.lr = 0x822A51E8;
	sub_8229E260(ctx, base);
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822a5228
	if (!ctx.cr6.gt) goto loc_822A5228;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822A51FC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x822A5208;
	sub_82280900(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,23
	ctx.r3.s64 = 23;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8229e260
	ctx.lr = 0x822A5218;
	sub_8229E260(ctx, base);
	// lwz r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a51fc
	if (ctx.cr6.lt) goto loc_822A51FC;
loc_822A5228:
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x822a5110
	if (ctx.cr6.lt) goto loc_822A5110;
loc_822A5230:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822dabb0
	ctx.lr = 0x822A5238;
	sub_822DABB0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x822A5244;
	sub_82280900(ctx, base);
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fctiwz f13,f30
	ctx.f13.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,24144
	ctx.r4.s64 = ctx.r11.s64 + 24144;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82280900
	ctx.lr = 0x822A526C;
	sub_82280900(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r10,-27364
	ctx.r4.s64 = ctx.r10.s64 + -27364;
	// bl 0x82280900
	ctx.lr = 0x822A527C;
	sub_82280900(ctx, base);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,14744
	ctx.r11.s64 = ctx.r9.s64 + 14744;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r25,6
	ctx.r25.s64 = 6;
	// ori r27,r10,51201
	ctx.r27.u64 = ctx.r10.u64 | 51201;
	// ori r28,r9,36866
	ctx.r28.u64 = ctx.r9.u64 | 36866;
	// addi r24,r11,24100
	ctx.r24.s64 = ctx.r11.s64 + 24100;
loc_822A52A4:
	// lhz r11,-6(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + -6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a534c
	if (ctx.cr6.eq) goto loc_822A534C;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// addi r9,r22,30
	ctx.r9.s64 = ctx.r22.s64 + 30;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// li r29,0
	ctx.r29.s64 = 0;
	// mullw r7,r8,r27
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// add r30,r7,r28
	ctx.r30.u64 = ctx.r7.u64 + ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a532c
	if (ctx.cr6.eq) goto loc_822A532C;
loc_822A52D8:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r22,8
	ctx.r10.s64 = ctx.r22.s64 + 8;
	// rlwinm r31,r11,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r8,r9,27
	ctx.r8.u64 = ctx.r9.u32 & 0x1F;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x822a5308
	if (!ctx.cr6.eq) goto loc_822A5308;
	// addi r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 4;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x822a4680
	ctx.lr = 0x822A5304;
	sub_822A4680(ctx, base);
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
loc_822A5308:
	// addi r11,r22,14
	ctx.r11.s64 = ctx.r22.s64 + 14;
	// lhzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a532c
	if (ctx.cr6.eq) goto loc_822A532C;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r10,r22
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a52d8
	if (!ctx.cr6.eq) goto loc_822A52D8;
loc_822A532C:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82280900
	ctx.lr = 0x822A534C;
	sub_82280900(ctx, base);
loc_822A534C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// bne 0x822a52a4
	if (!ctx.cr0.eq) goto loc_822A52A4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_822A535C:
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x822A5364;
	sub_82280900(ctx, base);
loc_822A5364:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822A5378:
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// b 0x822a51a4
	goto loc_822A51A4;
}

PPC_WEAK_FUNC(sub_822A4E90) {
	__imp__sub_822A4E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A5380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x822A5388;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// ori r22,r9,36866
	ctx.r22.u64 = ctx.r9.u64 | 36866;
	// mullw r7,r11,r8
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r31,r7,r22
	ctx.r31.u64 = ctx.r7.u64 + ctx.r22.u64;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r6,r31,r5
	ctx.r6.u64 = ctx.r31.u64 + ctx.r5.u64;
	// addi r30,r11,-7040
	ctx.r30.s64 = ctx.r11.s64 + -7040;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lhzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r9,r30
	ctx.r28.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r23,r4,0,25,26
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x60;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x822a5474
	if (!ctx.cr6.eq) goto loc_822A5474;
	// lhz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lhz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822a5430
	if (ctx.cr6.eq) goto loc_822A5430;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r7,r11,0,25,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822a5430
	if (!ctx.cr6.eq) goto loc_822A5430;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// sthx r10,r6,r30
	PPC_STORE_U16(ctx.r6.u32 + ctx.r30.u32, ctx.r10.u16);
	// sth r27,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r27.u16);
	// sth r9,12(r28)
	PPC_STORE_U16(ctx.r28.u32 + 12, ctx.r9.u16);
	// lhz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// sth r4,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r4.u16);
	// b 0x822a5434
	goto loc_822A5434;
loc_822A5430:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822A5434:
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r9,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 2;
	// li r6,64
	ctx.r6.s64 = 64;
	// lhzx r10,r4,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r30.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r8,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u16);
	// sthx r5,r3,r9
	PPC_STORE_U16(ctx.r3.u32 + ctx.r9.u32, ctx.r5.u16);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// b 0x822a5728
	goto loc_822A5728;
loc_822A5474:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r23,64
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 64, ctx.xer);
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// bne cr6,0x822a55a8
	if (!ctx.cr6.eq) goto loc_822A55A8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a5540
	if (!ctx.cr6.eq) goto loc_822A5540;
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// lhz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r7,r30,2
	ctx.r7.s64 = ctx.r30.s64 + 2;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwinm r6,r4,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r26,r30,14
	ctx.r26.s64 = ctx.r30.s64 + 14;
	// addi r25,r30,2
	ctx.r25.s64 = ctx.r30.s64 + 2;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// li r24,1
	ctx.r24.s64 = 1;
	// li r19,64
	ctx.r19.s64 = 64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lhzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r3,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u16);
	// sthx r23,r6,r7
	PPC_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r23.u16);
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// lhz r7,2(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r27,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r27.u16);
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// lhzx r10,r4,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r30.u32);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r5,r10,r26
	PPC_STORE_U16(ctx.r10.u32 + ctx.r26.u32, ctx.r5.u16);
	// lhz r10,14(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r5,r8,r25
	PPC_STORE_U16(ctx.r8.u32 + ctx.r25.u32, ctx.r5.u16);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwimi r7,r24,5,25,26
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r24.u32, 5) & 0x60) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFF9F);
	// stw r7,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r7.u32);
	// stw r19,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r19.u32);
	// b 0x822a572c
	goto loc_822A572C;
loc_822A5540:
	// rlwinm r26,r31,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// lhzx r27,r26,r29
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r29.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822a555c
	if (!ctx.cr6.eq) goto loc_822A555C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2c10
	ctx.lr = 0x822A555C;
	sub_822A2C10(ctx, base);
loc_822A555C:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 2;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// lhzx r11,r8,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r30.u32);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r10,r26,r29
	PPC_STORE_U16(ctx.r26.u32 + ctx.r29.u32, ctx.r10.u16);
	// sthx r7,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u16);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lhz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// sth r7,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// sth r27,12(r28)
	PPC_STORE_U16(ctx.r28.u32 + 12, ctx.r27.u16);
	// b 0x822a572c
	goto loc_822A572C;
loc_822A55A8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a5604
	if (!ctx.cr6.eq) goto loc_822A5604;
	// lhz r26,12(r29)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r7,r30,2
	ctx.r7.s64 = ctx.r30.s64 + 2;
	// add r6,r26,r31
	ctx.r6.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r3,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u16);
	// sthx r5,r4,r7
	PPC_STORE_U16(ctx.r4.u32 + ctx.r7.u32, ctx.r5.u16);
	// b 0x822a5658
	goto loc_822A5658;
loc_822A5604:
	// rlwinm r25,r31,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 4;
	// lhzx r26,r25,r24
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r24.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x822a5620
	if (!ctx.cr6.eq) goto loc_822A5620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2c10
	ctx.lr = 0x822A5620;
	sub_822A2C10(ctx, base);
loc_822A5620:
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 2;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r3,r5,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r10,r25,r24
	PPC_STORE_U16(ctx.r25.u32 + ctx.r24.u32, ctx.r10.u16);
	// sthx r7,r3,r9
	PPC_STORE_U16(ctx.r3.u32 + ctx.r9.u32, ctx.r7.u16);
loc_822A5658:
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a5680
	if (ctx.cr6.eq) goto loc_822A5680;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r30,14
	ctx.r9.s64 = ctx.r30.s64 + 14;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r10,r7,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r30.u32);
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r26,r4,r9
	PPC_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r26.u16);
loc_822A5680:
	// lhz r10,14(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a569c
	if (ctx.cr6.eq) goto loc_822A569C;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 2;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r26,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r26.u16);
loc_822A569C:
	// cmpwi cr6,r23,32
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 32, ctx.xer);
	// bne cr6,0x822a5704
	if (!ctx.cr6.eq) goto loc_822A5704;
	// lhz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r10,r7,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r30.u32);
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x822a56fc
	if (ctx.cr6.eq) goto loc_822A56FC;
loc_822A56D0:
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r10,r7,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r30.u32);
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x822a56d0
	if (!ctx.cr6.eq) goto loc_822A56D0;
loc_822A56FC:
	// sth r26,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r26.u16);
	// b 0x822a5708
	goto loc_822A5708;
loc_822A5704:
	// sth r26,12(r28)
	PPC_STORE_U16(ctx.r28.u32 + 12, ctx.r26.u16);
loc_822A5708:
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// li r9,64
	ctx.r9.s64 = 64;
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// sth r10,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r10.u16);
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r4,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r4.u16);
	// sth r7,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r7.u16);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_822A5728:
	// sth r27,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r27.u16);
loc_822A572C:
	// lbz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// rlwinm r9,r20,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xFFFFFF00;
	// subf r8,r22,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r22.s64;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addic r5,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lis r6,-31862
	ctx.r6.s64 = -2088108032;
	// subfe r4,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r6,-6904
	ctx.r11.s64 = ctx.r6.s64 + -6904;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// rlwinm r9,r21,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// clrlwi r7,r3,27
	ctx.r7.u64 = ctx.r3.u32 & 0x1F;
	// cmplwi cr6,r7,23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 23, ctx.xer);
	// bne cr6,0x822a57a4
	if (!ctx.cr6.eq) goto loc_822A57A4;
	// lhz r11,6(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r9)
	PPC_STORE_U16(ctx.r9.u32 + 6, ctx.r11.u16);
	// bl 0x822a3740
	ctx.lr = 0x822A5794;
	sub_822A3740(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x82293dc0
	ctx.lr = 0x822A57A4;
	sub_82293DC0(ctx, base);
loc_822A57A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A5380) {
	__imp__sub_822A5380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A57B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822A57B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a5380
	ctx.lr = 0x822A57C4;
	sub_822A5380(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addis r29,r8,1
	ctx.r29.s64 = ctx.r8.s64 + 65536;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// addi r29,r29,-28670
	ctx.r29.s64 = ctx.r29.s64 + -28670;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r29,r3
	ctx.r7.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r25,r11,r31
	ctx.r25.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r11,14(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// beq cr6,0x822a586c
	if (ctx.cr6.eq) goto loc_822A586C;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r8,20971
	ctx.r8.s64 = 1374355456;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r8,60923
	ctx.r6.u64 = ctx.r8.u64 | 60923;
	// ori r5,r7,51199
	ctx.r5.u64 = ctx.r7.u64 | 51199;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r4,r4,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulhwu r10,r11,r6
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r9,r10,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFFF;
	// mullw r8,r9,r5
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a2b20
	ctx.lr = 0x822A5858;
	sub_822A2B20(ctx, base);
	// add r6,r3,r29
	ctx.r6.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r7,r31,2
	ctx.r7.s64 = ctx.r31.s64 + 2;
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r28,r4,r7
	PPC_STORE_U16(ctx.r4.u32 + ctx.r7.u32, ctx.r28.u16);
	// b 0x822a5880
	goto loc_822A5880;
loc_822A586C:
	// lhz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 12);
	// addi r10,r31,18
	ctx.r10.s64 = ctx.r31.s64 + 18;
	// li r3,0
	ctx.r3.s64 = 0;
	// rotlwi r8,r11,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// sthx r26,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r26.u16);
loc_822A5880:
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// sth r26,14(r27)
	PPC_STORE_U16(ctx.r27.u32 + 14, ctx.r26.u16);
	// addi r10,r31,14
	ctx.r10.s64 = ctx.r31.s64 + 14;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// sth r7,2(r25)
	PPC_STORE_U16(ctx.r25.u32 + 2, ctx.r7.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sthx r6,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A57B0) {
	__imp__sub_822A57B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A58AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A58AC) {
	__imp__sub_822A58AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A58B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822A58B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a5380
	ctx.lr = 0x822A58C4;
	sub_822A5380(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// ori r7,r9,51201
	ctx.r7.u64 = ctx.r9.u64 | 51201;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lhz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// addis r29,r6,1
	ctx.r29.s64 = ctx.r6.s64 + 65536;
	// rotlwi r11,r5,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 4);
	// addi r29,r29,-28670
	ctx.r29.s64 = ctx.r29.s64 + -28670;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// add r4,r29,r3
	ctx.r4.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r26,r11,r31
	ctx.r26.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// beq cr6,0x822a5970
	if (ctx.cr6.eq) goto loc_822A5970;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lis r9,20971
	ctx.r9.s64 = 1374355456;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r8,r9,60923
	ctx.r8.u64 = ctx.r9.u64 | 60923;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r6,r7,51199
	ctx.r6.u64 = ctx.r7.u64 | 51199;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// sth r28,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r28.u16);
	// rlwinm r4,r5,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulhwu r10,r11,r8
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r9,r10,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFFF;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a2b20
	ctx.lr = 0x822A596C;
	sub_822A2B20(ctx, base);
	// b 0x822a5978
	goto loc_822A5978;
loc_822A5970:
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r25,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, ctx.r25.u16);
loc_822A5978:
	// add r11,r25,r29
	ctx.r11.u64 = ctx.r25.u64 + ctx.r29.u64;
	// sth r25,2(r27)
	PPC_STORE_U16(ctx.r27.u32 + 2, ctx.r25.u16);
	// addi r10,r31,14
	ctx.r10.s64 = ctx.r31.s64 + 14;
	// sth r3,2(r26)
	PPC_STORE_U16(ctx.r26.u32 + 2, ctx.r3.u16);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sthx r6,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A58B0) {
	__imp__sub_822A58B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A59A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x822a57b0
	sub_822A57B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A59A0) {
	__imp__sub_822A59A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A59D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x822a58b0
	sub_822A58B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A59D0) {
	__imp__sub_822A59D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A5A00) {
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
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r8,r10,60923
	ctx.r8.u64 = ctx.r10.u64 | 60923;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulhwu r6,r11,r8
	ctx.r6.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r7,r9,51199
	ctx.r7.u64 = ctx.r9.u64 | 51199;
	// rlwinm r5,r6,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FFFF;
	// ori r8,r3,51201
	ctx.r8.u64 = ctx.r3.u64 | 51201;
	// clrlwi r9,r31,31
	ctx.r9.u64 = ctx.r31.u32 & 0x1;
	// mullw r10,r5,r7
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addis r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A5A5C;
	sub_822A2B20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a5a6c
	if (!ctx.cr6.eq) goto loc_822A5A6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a57b0
	ctx.lr = 0x822A5A6C;
	sub_822A57B0(ctx, base);
loc_822A5A6C:
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

PPC_WEAK_FUNC(sub_822A5A00) {
	__imp__sub_822A5A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A5A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822A5A88;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addis r30,r8,1
	ctx.r30.s64 = ctx.r8.s64 + 65536;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// addi r30,r30,-28670
	ctx.r30.s64 = ctx.r30.s64 + -28670;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r30,r3
	ctx.r7.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r4,r5,27
	ctx.r4.u64 = ctx.r5.u32 & 0x1F;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r4,23
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 23, ctx.xer);
	// add r28,r10,r31
	ctx.r28.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bne cr6,0x822a5b14
	if (!ctx.cr6.eq) goto loc_822A5B14;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r3,r7,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// bl 0x822a3740
	ctx.lr = 0x822A5B04;
	sub_822A3740(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// bl 0x82293dd0
	ctx.lr = 0x822A5B14;
	sub_82293DD0(ctx, base);
loc_822A5B14:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x822a5c04
	if (!ctx.cr6.eq) goto loc_822A5C04;
	// lhz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// add r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 + ctx.r30.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x822a5c50
	if (ctx.cr6.eq) goto loc_822A5C50;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// rlwimi r7,r6,6,25,26
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0x60) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFF9F);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lhz r6,2(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r7,14(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// beq cr6,0x822a5b84
	if (ctx.cr6.eq) goto loc_822A5B84;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r27,r4,r5
	PPC_STORE_U16(ctx.r4.u32 + ctx.r5.u32, ctx.r27.u16);
loc_822A5B84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a5ba8
	if (ctx.cr6.eq) goto loc_822A5BA8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r31,14
	ctx.r9.s64 = ctx.r31.s64 + 14;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r5,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r31.u32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r27,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u16);
loc_822A5BA8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822a5bc0
	if (ctx.cr6.eq) goto loc_822A5BC0;
	// add r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 + ctx.r30.u64;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r8,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u16);
loc_822A5BC0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822a5be4
	if (ctx.cr6.eq) goto loc_822A5BE4;
	// add r11,r6,r30
	ctx.r11.u64 = ctx.r6.u64 + ctx.r30.u64;
	// addi r9,r31,14
	ctx.r9.s64 = ctx.r31.s64 + 14;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r7,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r31.u32);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r8,r4,r9
	PPC_STORE_U16(ctx.r4.u32 + ctx.r9.u32, ctx.r8.u16);
loc_822A5BE4:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r8,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r8.u16);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x822a5c50
	goto loc_822A5C50;
loc_822A5C04:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_822A5C0C:
	// lhz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bne cr6,0x822a5c0c
	if (!ctx.cr6.eq) goto loc_822A5C0C;
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// lhz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r9,r7,r10
	PPC_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u16);
loc_822A5C50:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// sth r27,12(r28)
	PPC_STORE_U16(ctx.r28.u32 + 12, ctx.r27.u16);
	// ori r9,r11,96
	ctx.r9.u64 = ctx.r11.u64 | 96;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A5A80) {
	__imp__sub_822A5A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A5C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822A5C70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// ori r28,r9,36866
	ctx.r28.u64 = ctx.r9.u64 | 36866;
	// mullw r7,r11,r8
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r31,r7,r28
	ctx.r31.u64 = ctx.r7.u64 + ctx.r28.u64;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r6,r31,r4
	ctx.r6.u64 = ctx.r31.u64 + ctx.r4.u64;
	// addi r30,r11,-7040
	ctx.r30.s64 = ctx.r11.s64 + -7040;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r5,27
	ctx.r11.u64 = ctx.r5.u32 & 0x1F;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x822a5d14
	if (!ctx.cr6.lt) goto loc_822A5D14;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a5cd0
	if (!ctx.cr6.eq) goto loc_822A5CD0;
	// bl 0x822a90e8
	ctx.lr = 0x822A5CCC;
	sub_822A90E8(ctx, base);
	// b 0x822a5d14
	goto loc_822A5D14;
loc_822A5CD0:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a5ce0
	if (ctx.cr6.gt) goto loc_822A5CE0;
	// bl 0x822a2468
	ctx.lr = 0x822A5CDC;
	sub_822A2468(ctx, base);
	// b 0x822a5d14
	goto loc_822A5D14;
loc_822A5CE0:
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a5d14
	if (!ctx.cr6.eq) goto loc_822A5D14;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a5d0c
	if (ctx.cr6.eq) goto loc_822A5D0C;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a5d14
	goto loc_822A5D14;
loc_822A5D0C:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A5D14;
	sub_8229E118(ctx, base);
loc_822A5D14:
	// subf r10,r28,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r28.s64;
	// lhz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lis r9,-31862
	ctx.r9.s64 = -2088108032;
	// lhz r8,14(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// addic r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r11,r9,-6904
	ctx.r11.s64 = ctx.r9.s64 + -6904;
	// subfe r5,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 + ctx.r31.u64;
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// lhz r9,2(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a5d7c
	if (ctx.cr6.eq) goto loc_822A5D7C;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r10,r30,14
	ctx.r10.s64 = ctx.r30.s64 + 14;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r5,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r30.u32);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r8,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u16);
	// b 0x822a5d94
	goto loc_822A5D94;
loc_822A5D7C:
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r30,30
	ctx.r4.s64 = ctx.r30.s64 + 30;
	// lhzx r3,r5,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r30.u32);
	// sthx r3,r10,r4
	PPC_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r3.u16);
loc_822A5D94:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a5db0
	if (ctx.cr6.eq) goto loc_822A5DB0;
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r9,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u16);
	// b 0x822a5dd4
	goto loc_822A5DD4;
loc_822A5DB0:
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r30,18
	ctx.r5.s64 = ctx.r30.s64 + 18;
	// lhzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhzx r3,r8,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r30.u32);
	// rotlwi r11,r4,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 4);
	// sthx r3,r11,r5
	PPC_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u16);
loc_822A5DD4:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 2;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// lhzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sth r5,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r5.u16);
	// sth r9,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// add r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r7,r3,r8
	PPC_STORE_U16(ctx.r3.u32 + ctx.r8.u32, ctx.r7.u16);
	// sthx r7,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A5C68) {
	__imp__sub_822A5C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A5E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A5E14) {
	__imp__sub_822A5E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A5E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822A5E20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r11,-7040
	ctx.r30.s64 = ctx.r11.s64 + -7040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,14(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a5f08
	if (ctx.cr6.eq) goto loc_822A5F08;
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addis r31,r6,1
	ctx.r31.s64 = ctx.r6.s64 + 65536;
	// lis r5,20971
	ctx.r5.s64 = 1374355456;
	// addi r31,r31,-28670
	ctx.r31.s64 = ctx.r31.s64 + -28670;
	// ori r10,r5,60923
	ctx.r10.u64 = ctx.r5.u64 | 60923;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r4,r5,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mulhwu r10,r11,r10
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r9,r10,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFFF;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a2b20
	ctx.lr = 0x822A5EA8;
	sub_822A2B20(ctx, base);
loc_822A5EA8:
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r28,r10,r30
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x822a5a80
	ctx.lr = 0x822A5EBC;
	sub_822A5A80(ctx, base);
	// add r9,r28,r31
	ctx.r9.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r8,r30,14
	ctx.r8.s64 = ctx.r30.s64 + 14;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a5ea8
	if (!ctx.cr6.eq) goto loc_822A5EA8;
	// lhz r28,14(r27)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r27.u32 + 14);
loc_822A5ED8:
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r10,r30,14
	ctx.r10.s64 = ctx.r30.s64 + 14;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r27,r9,r10
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// add r8,r27,r31
	ctx.r8.u64 = ctx.r27.u64 + ctx.r31.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r28,r7,r30
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r30.u32);
	// bl 0x822a5c68
	ctx.lr = 0x822A5F00;
	sub_822A5C68(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822a5ed8
	if (!ctx.cr6.eq) goto loc_822A5ED8;
loc_822A5F08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A5E18) {
	__imp__sub_822A5E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A5F10) {
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
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// bl 0x822a5e18
	ctx.lr = 0x822A5F44;
	sub_822A5E18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a32e0
	ctx.lr = 0x822A5F4C;
	sub_822A32E0(ctx, base);
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

PPC_WEAK_FUNC(sub_822A5F10) {
	__imp__sub_822A5F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A5F60) {
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
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r8,24,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// bl 0x822a2468
	ctx.lr = 0x822A5F94;
	sub_822A2468(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r6,r7,4,27,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 4) & 0x1F) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
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

PPC_WEAK_FUNC(sub_822A5F60) {
	__imp__sub_822A5F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A5FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x822A5FC0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// bl 0x822a2df0
	ctx.lr = 0x822A5FD0;
	sub_822A2DF0(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// clrlwi r23,r3,16
	ctx.r23.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// rlwinm r10,r23,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// li r9,112
	ctx.r9.s64 = 112;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r25,1
	ctx.r25.s64 = 65536;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// lis r8,0
	ctx.r8.s64 = 0;
	// sth r30,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r30.u16);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// ori r27,r10,60923
	ctx.r27.u64 = ctx.r10.u64 | 60923;
	// addi r19,r11,-6904
	ctx.r19.s64 = ctx.r11.s64 + -6904;
	// ori r28,r9,51199
	ctx.r28.u64 = ctx.r9.u64 | 51199;
	// ori r21,r8,51201
	ctx.r21.u64 = ctx.r8.u64 | 51201;
	// ori r22,r7,36866
	ctx.r22.u64 = ctx.r7.u64 | 36866;
	// lwz r24,24(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
loc_822A602C:
	// add r4,r20,r25
	ctx.r4.u64 = ctx.r20.u64 + ctx.r25.u64;
	// clrlwi r10,r24,31
	ctx.r10.u64 = ctx.r24.u32 & 0x1;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mullw r30,r10,r21
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32);
	// mulhwu r9,r11,r27
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r27.u32)) >> 32;
	// rlwinm r8,r9,18,14,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// add r3,r30,r22
	ctx.r3.u64 = ctx.r30.u64 + ctx.r22.u64;
	// mullw r7,r8,r28
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a2b20
	ctx.lr = 0x822A605C;
	sub_822A2B20(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// add r6,r3,r30
	ctx.r6.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r4,r5
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a6174
	if (ctx.cr6.eq) goto loc_822A6174;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// addi r7,r31,30
	ctx.r7.s64 = ctx.r31.s64 + 30;
	// lwzx r26,r9,r8
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r6,r26,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r5,r26,31
	ctx.r5.u64 = ctx.r26.u32 & 0x1;
	// mullw r29,r5,r21
	ctx.r29.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r21.s32);
	// lhzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// add r30,r29,r22
	ctx.r30.u64 = ctx.r29.u64 + ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a6174
	if (ctx.cr6.eq) goto loc_822A6174;
loc_822A60AC:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// rlwinm r24,r11,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r9,r24,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// rlwinm r18,r9,24,16,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// add r4,r18,r25
	ctx.r4.u64 = ctx.r18.u64 + ctx.r25.u64;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mulhwu r8,r11,r27
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r27.u32)) >> 32;
	// rlwinm r7,r8,18,14,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3FFFF;
	// mullw r6,r7,r28
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r28.s32);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a2b20
	ctx.lr = 0x822A60E8;
	sub_822A2B20(ctx, base);
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r18,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r4,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
	// addi r7,r31,24
	ctx.r7.s64 = ctx.r31.s64 + 24;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r18,r4,24,16,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// lwzx r17,r5,r9
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// rlwinm r11,r17,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// bl 0x822a1ee8
	ctx.lr = 0x822A613C;
	sub_822A1EE8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822ac2c0
	ctx.lr = 0x822A614C;
	sub_822AC2C0(ctx, base);
	// addi r7,r31,14
	ctx.r7.s64 = ctx.r31.s64 + 14;
	// lhzx r11,r24,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a6170
	if (ctx.cr6.eq) goto loc_822A6170;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a60ac
	if (!ctx.cr6.eq) goto loc_822A60AC;
loc_822A6170:
	// lwz r24,24(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
loc_822A6174:
	// rlwinm r11,r20,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r9,19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 19, ctx.xer);
	// bne cr6,0x822a6198
	if (!ctx.cr6.eq) goto loc_822A6198;
	// rlwinm r20,r11,24,8,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x822a602c
	if (!ctx.cr6.eq) goto loc_822A602C;
loc_822A6198:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A5FB8) {
	__imp__sub_822A5FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A61A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A61A4) {
	__imp__sub_822A61A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A61A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822A61B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r29,r11,-7040
	ctx.r29.s64 = ctx.r11.s64 + -7040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x822a6238
	if (!ctx.cr6.lt) goto loc_822A6238;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a61f4
	if (!ctx.cr6.eq) goto loc_822A61F4;
	// bl 0x822a90e8
	ctx.lr = 0x822A61F0;
	sub_822A90E8(ctx, base);
	// b 0x822a6238
	goto loc_822A6238;
loc_822A61F4:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a6204
	if (ctx.cr6.gt) goto loc_822A6204;
	// bl 0x822a2468
	ctx.lr = 0x822A6200;
	sub_822A2468(ctx, base);
	// b 0x822a6238
	goto loc_822A6238;
loc_822A6204:
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a6238
	if (!ctx.cr6.eq) goto loc_822A6238;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a6230
	if (ctx.cr6.eq) goto loc_822A6230;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a6238
	goto loc_822A6238;
loc_822A6230:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A6238;
	sub_8229E118(ctx, base);
loc_822A6238:
	// lhz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// addis r5,r31,-1
	ctx.r5.s64 = ctx.r31.s64 + -65536;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// addi r5,r5,28670
	ctx.r5.s64 = ctx.r5.s64 + 28670;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r4,r6,r31
	ctx.r4.u64 = ctx.r6.u64 + ctx.r31.u64;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// addic r3,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lis r9,-31862
	ctx.r9.s64 = -2088108032;
	// sth r8,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r8.u16);
	// addi r28,r29,2
	ctx.r28.s64 = ctx.r29.s64 + 2;
	// subfe r5,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r8,r9,-6904
	ctx.r8.s64 = ctx.r9.s64 + -6904;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,56
	ctx.r8.s64 = ctx.r8.s64 + 56;
	// sthx r7,r4,r28
	PPC_STORE_U16(ctx.r4.u32 + ctx.r28.u32, ctx.r7.u16);
	// addi r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 2;
	// lhzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// add r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// stwx r4,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r4.u32);
	// sthx r6,r5,r3
	PPC_STORE_U16(ctx.r5.u32 + ctx.r3.u32, ctx.r6.u16);
	// sthx r6,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A61A8) {
	__imp__sub_822A61A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A62B0) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r4,-128
	ctx.r10.s64 = ctx.r4.s64 + -8388608;
	// clrlwi r4,r10,8
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFFFF;
	// b 0x822a5a00
	sub_822A5A00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A62B0) {
	__imp__sub_822A62B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A62BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A62BC) {
	__imp__sub_822A62BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A62C0) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r4,-128
	ctx.r11.s64 = ctx.r4.s64 + -8388608;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// clrlwi r4,r11,8
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFFFF;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x822a57b0
	sub_822A57B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A62C0) {
	__imp__sub_822A62C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A62F8) {
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
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bgt cr6,0x822a6344
	if (ctx.cr6.gt) goto loc_822A6344;
	// bl 0x822a5a00
	ctx.lr = 0x822A6330;
	sub_822A5A00(ctx, base);
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
loc_822A6344:
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x822a63b0
	if (!ctx.cr6.eq) goto loc_822A63B0;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r8,r3,51201
	ctx.r8.u64 = ctx.r3.u64 | 51201;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addis r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A6394;
	sub_822A2B20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a63d4
	if (!ctx.cr6.eq) goto loc_822A63D4;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// stw r31,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r31.u32);
	// stw r4,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r4.u32);
	// b 0x822a63d0
	goto loc_822A63D0;
loc_822A63B0:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,24288
	ctx.r3.s64 = ctx.r7.s64 + 24288;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A63CC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A63D0;
	sub_822AD350(ctx, base);
loc_822A63D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822A63D4:
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

PPC_WEAK_FUNC(sub_822A62F8) {
	__imp__sub_822A62F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A63E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x822A63F0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r20,r3,4,0,27
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// add r11,r20,r11
	ctx.r11.u64 = ctx.r20.u64 + ctx.r11.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x822a6660
	if (ctx.cr6.gt) goto loc_822A6660;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r29,r9,51201
	ctx.r29.u64 = ctx.r9.u64 | 51201;
	// ori r30,r8,36866
	ctx.r30.u64 = ctx.r8.u64 | 36866;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822a655c
	if (ctx.cr6.eq) goto loc_822A655C;
	// bdz 0x822a655c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822A655C;
	// bdz 0x822a655c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822A655C;
	// bdz 0x822a655c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822A655C;
	// bdz 0x822a655c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822A655C;
	// bdz 0x822a655c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822A655C;
	// bdnz 0x822a65e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A65E0;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,25,7,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFE;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r9,14744
	ctx.r7.s64 = ctx.r9.s64 + 14744;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r31,30
	ctx.r5.s64 = ctx.r31.s64 + 30;
	// lhzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// rotlwi r3,r4,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 4);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// add r24,r10,r30
	ctx.r24.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a655c
	if (ctx.cr6.eq) goto loc_822A655C;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// lis r9,20971
	ctx.r9.s64 = 1374355456;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// lis r22,128
	ctx.r22.s64 = 8388608;
	// ori r26,r9,60923
	ctx.r26.u64 = ctx.r9.u64 | 60923;
	// ori r27,r8,51199
	ctx.r27.u64 = ctx.r8.u64 | 51199;
	// addi r23,r10,-6904
	ctx.r23.s64 = ctx.r10.s64 + -6904;
loc_822A64B8:
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lhz r8,4(r23)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r23.u32 + 4);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// rlwinm r25,r11,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r25,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// rlwinm r6,r7,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// subf r4,r22,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r22.s64;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x822a6538
	if (ctx.cr6.gt) goto loc_822A6538;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// mulhwu r9,r11,r26
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r26.u32)) >> 32;
	// rlwinm r8,r9,18,14,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// mullw r17,r10,r29
	ctx.r17.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// mullw r7,r8,r27
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// add r3,r17,r30
	ctx.r3.u64 = ctx.r17.u64 + ctx.r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a2b20
	ctx.lr = 0x822A6508;
	sub_822A2B20(ctx, base);
	// add r6,r3,r17
	ctx.r6.u64 = ctx.r3.u64 + ctx.r17.u64;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lhzx r11,r5,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a6538
	if (!ctx.cr6.eq) goto loc_822A6538;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x822a6530
	if (ctx.cr6.eq) goto loc_822A6530;
	// stw r4,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r4.u32);
loc_822A6530:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
loc_822A6538:
	// addi r11,r31,14
	ctx.r11.s64 = ctx.r31.s64 + 14;
	// lhzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a655c
	if (ctx.cr6.eq) goto loc_822A655C;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a64b8
	if (!ctx.cr6.eq) goto loc_822A64B8;
loc_822A655C:
	// addi r11,r31,30
	ctx.r11.s64 = ctx.r31.s64 + 30;
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lhzx r11,r20,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// beq cr6,0x822a6660
	if (ctx.cr6.eq) goto loc_822A6660;
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + ctx.r18.u64;
loc_822A6580:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x822a65a0
	if (ctx.cr6.eq) goto loc_822A65A0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r4,r5,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
loc_822A65A0:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r31,14
	ctx.r8.s64 = ctx.r31.s64 + 14;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a6660
	if (ctx.cr6.eq) goto loc_822A6660;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a6580
	if (!ctx.cr6.eq) goto loc_822A6580;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_822A65E0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,30
	ctx.r11.s64 = ctx.r31.s64 + 30;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// clrlwi r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lhzx r11,r20,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + ctx.r11.u32);
	// addis r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 65536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r10,-28670
	ctx.r10.s64 = ctx.r10.s64 + -28670;
	// beq cr6,0x822a6660
	if (ctx.cr6.eq) goto loc_822A6660;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
loc_822A660C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x822a662c
	if (ctx.cr6.eq) goto loc_822A662C;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r4,r5,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
loc_822A662C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r31,14
	ctx.r8.s64 = ctx.r31.s64 + 14;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a6660
	if (ctx.cr6.eq) goto loc_822A6660;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a660c
	if (!ctx.cr6.eq) goto loc_822A660C;
loc_822A6660:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A63E8) {
	__imp__sub_822A63E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A666C) {
	__imp__sub_822A666C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6670) {
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
	// addis r11,r4,-128
	ctx.r11.s64 = ctx.r4.s64 + -8388608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r4,r11,8
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFFFF;
	// bl 0x822a5a00
	ctx.lr = 0x822A6690;
	sub_822A5A00(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r31,31
	ctx.r9.u64 = ctx.r31.u32 & 0x1;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// lis r7,-31896
	ctx.r7.s64 = -2090336256;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r6,r7,-7040
	ctx.r6.s64 = ctx.r7.s64 + -7040;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r6,9
	ctx.r11.s64 = ctx.r6.s64 + 589824;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822A6670) {
	__imp__sub_822A6670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A66D0) {
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
	// addis r11,r4,-128
	ctx.r11.s64 = ctx.r4.s64 + -8388608;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// clrlwi r4,r11,8
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFFFF;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a57b0
	ctx.lr = 0x822A671C;
	sub_822A57B0(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r31,31
	ctx.r8.u64 = ctx.r31.u32 & 0x1;
	// ori r7,r9,51201
	ctx.r7.u64 = ctx.r9.u64 | 51201;
	// lis r6,-31896
	ctx.r6.s64 = -2090336256;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r5,r6,-7040
	ctx.r5.s64 = ctx.r6.s64 + -7040;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r5,9
	ctx.r11.s64 = ctx.r5.s64 + 589824;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822A66D0) {
	__imp__sub_822A66D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A675C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A675C) {
	__imp__sub_822A675C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6760) {
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
	// bl 0x822a5a00
	ctx.lr = 0x822A6778;
	sub_822A5A00(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// lis r8,-31896
	ctx.r8.s64 = -2090336256;
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r6,r8,-7040
	ctx.r6.s64 = ctx.r8.s64 + -7040;
	// add r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 + ctx.r7.u64;
	// addis r11,r6,9
	ctx.r11.s64 = ctx.r6.s64 + 589824;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822A6760) {
	__imp__sub_822A6760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A67B8) {
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
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mullw r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a57b0
	ctx.lr = 0x822A6800;
	sub_822A57B0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// lis r8,-31896
	ctx.r8.s64 = -2090336256;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r8,-7040
	ctx.r7.s64 = ctx.r8.s64 + -7040;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r7,9
	ctx.r11.s64 = ctx.r7.s64 + 589824;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r5,r4
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
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

PPC_WEAK_FUNC(sub_822A67B8) {
	__imp__sub_822A67B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6840) {
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
	// addis r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a5a00
	ctx.lr = 0x822A685C;
	sub_822A5A00(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// lis r8,-31896
	ctx.r8.s64 = -2090336256;
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r6,r8,-7040
	ctx.r6.s64 = ctx.r8.s64 + -7040;
	// add r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 + ctx.r7.u64;
	// addis r11,r6,9
	ctx.r11.s64 = ctx.r6.s64 + 589824;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_822A6840) {
	__imp__sub_822A6840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A689C) {
	__imp__sub_822A689C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A68A0) {
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
	// addis r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 65536;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mullw r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a57b0
	ctx.lr = 0x822A68EC;
	sub_822A57B0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// lis r8,-31896
	ctx.r8.s64 = -2090336256;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r8,-7040
	ctx.r7.s64 = ctx.r8.s64 + -7040;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r7,9
	ctx.r11.s64 = ctx.r7.s64 + 589824;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r5,r4
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
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

PPC_WEAK_FUNC(sub_822A68A0) {
	__imp__sub_822A68A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A692C) {
	__imp__sub_822A692C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6930) {
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
	// addis r11,r4,-128
	ctx.r11.s64 = ctx.r4.s64 + -8388608;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// clrlwi r4,r11,8
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFFFF;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a58b0
	ctx.lr = 0x822A697C;
	sub_822A58B0(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r31,31
	ctx.r8.u64 = ctx.r31.u32 & 0x1;
	// ori r7,r9,51201
	ctx.r7.u64 = ctx.r9.u64 | 51201;
	// lis r6,-31896
	ctx.r6.s64 = -2090336256;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r5,r6,-7040
	ctx.r5.s64 = ctx.r6.s64 + -7040;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r5,9
	ctx.r11.s64 = ctx.r5.s64 + 589824;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822A6930) {
	__imp__sub_822A6930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A69BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A69BC) {
	__imp__sub_822A69BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A69C0) {
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
	// addis r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 65536;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mullw r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a58b0
	ctx.lr = 0x822A6A0C;
	sub_822A58B0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// lis r8,-31896
	ctx.r8.s64 = -2090336256;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r8,-7040
	ctx.r7.s64 = ctx.r8.s64 + -7040;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r7,9
	ctx.r11.s64 = ctx.r7.s64 + 589824;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r5,r4
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
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

PPC_WEAK_FUNC(sub_822A69C0) {
	__imp__sub_822A69C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A6A4C) {
	__imp__sub_822A6A4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6A50) {
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
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r9,r3,51201
	ctx.r9.u64 = ctx.r3.u64 | 51201;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// mullw r8,r5,r6
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mullw r30,r10,r9
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A6AB0;
	sub_822A2B20(ctx, base);
	// lis r7,-31896
	ctx.r7.s64 = -2090336256;
	// add r5,r30,r3
	ctx.r5.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r6,r7,-7040
	ctx.r6.s64 = ctx.r7.s64 + -7040;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r11,r6,9
	ctx.r11.s64 = ctx.r6.s64 + 589824;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lhzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822a5a80
	ctx.lr = 0x822A6AD4;
	sub_822A5A80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a5c68
	ctx.lr = 0x822A6AE0;
	sub_822A5C68(ctx, base);
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

PPC_WEAK_FUNC(sub_822A6A50) {
	__imp__sub_822A6A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6AF8) {
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
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,30
	ctx.r7.s64 = ctx.r11.s64 + 30;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// ori r5,r8,51201
	ctx.r5.u64 = ctx.r8.u64 | 51201;
	// addis r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 589824;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lhzx r30,r9,r7
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// lis r8,20971
	ctx.r8.s64 = 1374355456;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// ori r6,r8,60923
	ctx.r6.u64 = ctx.r8.u64 | 60923;
	// ori r10,r7,51199
	ctx.r10.u64 = ctx.r7.u64 | 51199;
	// rlwinm r4,r5,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulhwu r9,r11,r6
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r8,r9,18,14,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a2b20
	ctx.lr = 0x822A6B84;
	sub_822A2B20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a5a80
	ctx.lr = 0x822A6B8C;
	sub_822A5A80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a5c68
	ctx.lr = 0x822A6B98;
	sub_822A5C68(ctx, base);
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

PPC_WEAK_FUNC(sub_822A6AF8) {
	__imp__sub_822A6AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6BB0) {
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
	// addis r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 65536;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r9,r3,51201
	ctx.r9.u64 = ctx.r3.u64 | 51201;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// mullw r8,r5,r6
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mullw r30,r10,r9
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A6C14;
	sub_822A2B20(ctx, base);
	// lis r7,-31896
	ctx.r7.s64 = -2090336256;
	// add r5,r30,r3
	ctx.r5.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r6,r7,-7040
	ctx.r6.s64 = ctx.r7.s64 + -7040;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r11,r6,9
	ctx.r11.s64 = ctx.r6.s64 + 589824;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lhzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822a5a80
	ctx.lr = 0x822A6C38;
	sub_822A5A80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a5c68
	ctx.lr = 0x822A6C44;
	sub_822A5C68(ctx, base);
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

PPC_WEAK_FUNC(sub_822A6BB0) {
	__imp__sub_822A6BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A6C5C) {
	__imp__sub_822A6C5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6C60) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r4,-128
	ctx.r10.s64 = ctx.r4.s64 + -8388608;
	// clrlwi r4,r10,8
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFFFF;
	// b 0x822a6a50
	sub_822A6A50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A6C60) {
	__imp__sub_822A6C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A6C6C) {
	__imp__sub_822A6C6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6C70) {
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
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r9,r3,51201
	ctx.r9.u64 = ctx.r3.u64 | 51201;
	// ori r6,r8,51199
	ctx.r6.u64 = ctx.r8.u64 | 51199;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// mullw r8,r5,r6
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mullw r30,r10,r9
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A6CD0;
	sub_822A2B20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a6d08
	if (ctx.cr6.eq) goto loc_822A6D08;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r9,r11,-7040
	ctx.r9.s64 = ctx.r11.s64 + -7040;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r11,r9,9
	ctx.r11.s64 = ctx.r9.s64 + 589824;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// lhzx r30,r8,r7
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x822a5a80
	ctx.lr = 0x822A6CFC;
	sub_822A5A80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a5c68
	ctx.lr = 0x822A6D08;
	sub_822A5C68(ctx, base);
loc_822A6D08:
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

PPC_WEAK_FUNC(sub_822A6C70) {
	__imp__sub_822A6C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x822A6D28;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r11,-7040
	ctx.r30.s64 = ctx.r11.s64 + -7040;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r9,r30,30
	ctx.r9.s64 = ctx.r30.s64 + 30;
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a6ecc
	if (ctx.cr6.eq) goto loc_822A6ECC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r8,r3,31
	ctx.r8.u64 = ctx.r3.u32 & 0x1;
	// ori r9,r10,51201
	ctx.r9.u64 = ctx.r10.u64 | 51201;
	// lis r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// ori r10,r7,36866
	ctx.r10.u64 = ctx.r7.u64 | 36866;
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r4,r6,r9
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r23,r5,r10
	ctx.r23.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r26,r4,r10
	ctx.r26.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r24,r10,60923
	ctx.r24.u64 = ctx.r10.u64 | 60923;
	// ori r25,r9,51199
	ctx.r25.u64 = ctx.r9.u64 | 51199;
	// li r21,119
	ctx.r21.s64 = 119;
	// li r22,0
	ctx.r22.s64 = 0;
loc_822A6D8C:
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r4,r10,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r29,r10,27
	ctx.r29.u64 = ctx.r10.u32 & 0x1F;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mulhwu r9,r11,r24
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r24.u32)) >> 32;
	// rlwinm r8,r9,18,14,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// mullw r7,r8,r25
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r25.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a58b0
	ctx.lr = 0x822A6DC8;
	sub_822A58B0(ctx, base);
	// add r6,r3,r26
	ctx.r6.u64 = ctx.r3.u64 + ctx.r26.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// or r3,r4,r29
	ctx.r3.u64 = ctx.r4.u64 | ctx.r29.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x822a6e48
	if (ctx.cr6.eq) goto loc_822A6E48;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bge cr6,0x822a6eb0
	if (!ctx.cr6.lt) goto loc_822A6EB0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a6e1c
	if (!ctx.cr6.eq) goto loc_822A6E1C;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x822a6ea0
	goto loc_822A6EA0;
loc_822A6E1C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a6e2c
	if (ctx.cr6.gt) goto loc_822A6E2C;
	// bl 0x822a1ee8
	ctx.lr = 0x822A6E28;
	sub_822A1EE8(ctx, base);
	// b 0x822a6eb0
	goto loc_822A6EB0;
loc_822A6E2C:
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a6eb0
	if (!ctx.cr6.eq) goto loc_822A6EB0;
	// lhz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + -4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-4(r3)
	PPC_STORE_U16(ctx.r3.u32 + -4, ctx.r11.u16);
	// b 0x822a6eb0
	goto loc_822A6EB0;
loc_822A6E48:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r7,23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 23, ctx.xer);
	// bne cr6,0x822a6e94
	if (!ctx.cr6.eq) goto loc_822A6E94;
	// bl 0x822a2df0
	ctx.lr = 0x822A6E68;
	sub_822A2DF0(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// sth r22,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r22.u16);
	// sth r22,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r22.u16);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x822a6d20
	ctx.lr = 0x822A6E90;
	sub_822A6D20(ctx, base);
	// b 0x822a6eb0
	goto loc_822A6EB0;
loc_822A6E94:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_822A6EA0:
	// addi r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 + 20;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
loc_822A6EB0:
	// lhz r11,14(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a6ecc
	if (ctx.cr6.eq) goto loc_822A6ECC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// b 0x822a6d8c
	goto loc_822A6D8C;
loc_822A6ECC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A6D20) {
	__imp__sub_822A6D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A6ED4) {
	__imp__sub_822A6ED4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6ED8) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// lis r8,-31896
	ctx.r8.s64 = -2090336256;
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r8,-7040
	ctx.r7.s64 = ctx.r8.s64 + -7040;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addis r11,r7,9
	ctx.r11.s64 = ctx.r7.s64 + 589824;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhzx r30,r5,r11
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// bl 0x822a5a80
	ctx.lr = 0x822A6F28;
	sub_822A5A80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a5c68
	ctx.lr = 0x822A6F34;
	sub_822A5C68(ctx, base);
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

PPC_WEAK_FUNC(sub_822A6ED8) {
	__imp__sub_822A6ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A6F4C) {
	__imp__sub_822A6F4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A6F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822A6F58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lis r6,20971
	ctx.r6.s64 = 1374355456;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// ori r5,r6,60923
	ctx.r5.u64 = ctx.r6.u64 | 60923;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addis r7,r4,-128
	ctx.r7.s64 = ctx.r4.s64 + -8388608;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r8,r9,14744
	ctx.r8.s64 = ctx.r9.s64 + 14744;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// rlwinm r30,r3,24,8,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r4,r7,8
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFFFF;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r3,r9,51199
	ctx.r3.u64 = ctx.r9.u64 | 51199;
	// ori r27,r7,51201
	ctx.r27.u64 = ctx.r7.u64 | 51201;
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// mulhwu r8,r11,r5
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r7,r8,18,14,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3FFFF;
	// mullw r29,r9,r27
	ctx.r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// mullw r6,r7,r3
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A6FEC;
	sub_822A2B20(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// rlwinm r3,r5,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r3,r4
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a7038
	if (ctx.cr6.eq) goto loc_822A7038;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r4,6(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822ad5b8
	ctx.lr = 0x822A702C;
	sub_822AD5B8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822a7078
	if (!ctx.cr6.eq) goto loc_822A7078;
loc_822A7038:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a67b8
	ctx.lr = 0x822A7044;
	sub_822A67B8(ctx, base);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mullw r8,r10,r27
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// or r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_822A7078:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A6F50) {
	__imp__sub_822A6F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7080) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a708c
	if (ctx.cr6.eq) goto loc_822A708C;
	// b 0x822a37a8
	sub_822A37A8(ctx, base);
	return;
loc_822A708C:
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// lwz r4,80(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r3,76(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// b 0x822a6f50
	sub_822A6F50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A7080) {
	__imp__sub_822A7080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A70A0) {
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
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x822a714c
	if (!ctx.cr6.lt) goto loc_822A714C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a7110
	if (!ctx.cr6.eq) goto loc_822A7110;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822A7110:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a7134
	if (ctx.cr6.gt) goto loc_822A7134;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822a1ee8
	ctx.lr = 0x822A7120;
	sub_822A1EE8(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822A7134:
	// lbz r11,-1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a714c
	if (!ctx.cr6.eq) goto loc_822A714C;
	// lhz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + -4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-4(r9)
	PPC_STORE_U16(ctx.r9.u32 + -4, ctx.r11.u16);
loc_822A714C:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822A70A0) {
	__imp__sub_822A70A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7160) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r10,r10,51201
	ctx.r10.u64 = ctx.r10.u64 | 51201;
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addis r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 65536;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// b 0x822a70a0
	sub_822A70A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A7160) {
	__imp__sub_822A7160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A717C) {
	__imp__sub_822A717C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7180) {
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
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x822a71b4
	if (!ctx.cr6.eq) goto loc_822A71B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x822a71e4
	goto loc_822A71E4;
loc_822A71B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82293dd0
	ctx.lr = 0x822A71BC;
	sub_82293DD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,24312
	ctx.r3.s64 = ctx.r7.s64 + 24312;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A71E0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A71E4;
	sub_822AD350(ctx, base);
loc_822A71E4:
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

PPC_WEAK_FUNC(sub_822A7180) {
	__imp__sub_822A7180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A71FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A71FC) {
	__imp__sub_822A71FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7200) {
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
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bne cr6,0x822a7238
	if (!ctx.cr6.eq) goto loc_822A7238;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x822a729c
	goto loc_822A729C;
loc_822A7238:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bne cr6,0x822a726c
	if (!ctx.cr6.eq) goto loc_822A726C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822a7264
	if (!ctx.cr6.eq) goto loc_822A7264;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A7264:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x822a729c
	goto loc_822A729C;
loc_822A726C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82293dd0
	ctx.lr = 0x822A7274;
	sub_82293DD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,24340
	ctx.r3.s64 = ctx.r7.s64 + 24340;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A7298;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A729C;
	sub_822AD350(ctx, base);
loc_822A729C:
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

PPC_WEAK_FUNC(sub_822A7200) {
	__imp__sub_822A7200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A72B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A72B4) {
	__imp__sub_822A72B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A72B8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822a72f8
	if (ctx.cr6.eq) goto loc_822A72F8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a7300
	if (!ctx.cr6.eq) goto loc_822A7300;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x822a2128
	ctx.lr = 0x822A72F4;
	sub_822A2128(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_822A72F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822a73c4
	goto loc_822A73C4;
loc_822A7300:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822a7324
	if (!ctx.cr6.eq) goto loc_822A7324;
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x822a20b8
	ctx.lr = 0x822A7318;
	sub_822A20B8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822a73c4
	goto loc_822A73C4;
loc_822A7324:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822a7384
	if (!ctx.cr6.eq) goto loc_822A7384;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2190
	ctx.lr = 0x822A7340;
	sub_822A2190(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lbz r10,-1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a737c
	if (!ctx.cr6.eq) goto loc_822A737C;
	// lhz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -4);
	// addi r3,r30,-4
	ctx.r3.s64 = ctx.r30.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a7374
	if (ctx.cr6.eq) goto loc_822A7374;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822a73c4
	goto loc_822A73C4;
loc_822A7374:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A737C;
	sub_8229E118(ctx, base);
loc_822A737C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822a73c4
	goto loc_822A73C4;
loc_822A7384:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,24364
	ctx.r3.s64 = ctx.r7.s64 + 24364;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A73A0;
	sub_822E84F0(ctx, base);
	// lis r6,-31862
	ctx.r6.s64 = -2088108032;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r6,-6904
	ctx.r5.s64 = ctx.r6.s64 + -6904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// bl 0x82293dd0
	ctx.lr = 0x822A73B8;
	sub_82293DD0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
loc_822A73C4:
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

PPC_WEAK_FUNC(sub_822A72B8) {
	__imp__sub_822A72B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A73DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A73DC) {
	__imp__sub_822A73DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A73E0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bgt cr6,0x822a74a8
	if (ctx.cr6.gt) goto loc_822A74A8;
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,29728
	ctx.r12.s64 = ctx.r12.s64 + 29728;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_822A747C;
	case 1:
		goto loc_822A7454;
	case 2:
		goto loc_822A753C;
	case 3:
		goto loc_822A7454;
	case 4:
		goto loc_822A7454;
	case 5:
		goto loc_822A7454;
	case 6:
		goto loc_822A74A8;
	case 7:
		goto loc_822A74A8;
	case 8:
		goto loc_822A74A8;
	case 9:
		goto loc_822A74A8;
	case 10:
		goto loc_822A74A8;
	case 11:
		goto loc_822A74A8;
	case 12:
		goto loc_822A7460;
	default:
		return;
	}
	// lwz r17,29820(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29820);
	// lwz r17,29780(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29780);
	// lwz r17,30012(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30012);
	// lwz r17,29780(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29780);
	// lwz r17,29780(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29780);
	// lwz r17,29780(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29780);
	// lwz r17,29864(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29864);
	// lwz r17,29864(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29864);
	// lwz r17,29864(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29864);
	// lwz r17,29864(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29864);
	// lwz r17,29864(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29864);
	// lwz r17,29864(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29864);
	// lwz r17,29792(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29792);
loc_822A7454:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a72b8
	ctx.lr = 0x822A745C;
	sub_822A72B8(ctx, base);
	// b 0x822a7544
	goto loc_822A7544;
loc_822A7460:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// bl 0x82293548
	ctx.lr = 0x822A7470;
	sub_82293548(ctx, base);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822f4200
	ctx.lr = 0x822A7478;
	sub_822F4200(ctx, base);
	// b 0x822a74b8
	goto loc_822A74B8;
loc_822A747C:
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// addi r6,r9,14816
	ctx.r6.s64 = ctx.r9.s64 + 14816;
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r4,r5,2,25,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7C;
	// lwzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// b 0x822a74b8
	goto loc_822A74B8;
loc_822A74A8:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_822A74B8:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a1d20
	ctx.lr = 0x822A74C4;
	sub_822A1D20(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x822a7538
	if (!ctx.cr6.lt) goto loc_822A7538;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a74f0
	if (!ctx.cr6.eq) goto loc_822A74F0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822A74EC;
	sub_822A90E8(ctx, base);
	// b 0x822a7538
	goto loc_822A7538;
loc_822A74F0:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a7504
	if (ctx.cr6.gt) goto loc_822A7504;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x822a2468
	ctx.lr = 0x822A7500;
	sub_822A2468(ctx, base);
	// b 0x822a7538
	goto loc_822A7538;
loc_822A7504:
	// lbz r11,-1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a7538
	if (!ctx.cr6.eq) goto loc_822A7538;
	// lhz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// addi r3,r10,-4
	ctx.r3.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a7530
	if (ctx.cr6.eq) goto loc_822A7530;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a7538
	goto loc_822A7538;
loc_822A7530:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A7538;
	sub_8229E118(ctx, base);
loc_822A7538:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_822A753C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822A7544:
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

PPC_WEAK_FUNC(sub_822A73E0) {
	__imp__sub_822A73E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A755C) {
	__imp__sub_822A755C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822A7568;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_822A7580:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x822a75e4
	if (!ctx.cr6.lt) goto loc_822A75E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a75a4
	if (!ctx.cr6.eq) goto loc_822A75A4;
	// bl 0x822a90e8
	ctx.lr = 0x822A75A0;
	sub_822A90E8(ctx, base);
	// b 0x822a75e4
	goto loc_822A75E4;
loc_822A75A4:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a75b4
	if (ctx.cr6.gt) goto loc_822A75B4;
	// bl 0x822a2468
	ctx.lr = 0x822A75B0;
	sub_822A2468(ctx, base);
	// b 0x822a75e4
	goto loc_822A75E4;
loc_822A75B4:
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a75e4
	if (!ctx.cr6.eq) goto loc_822A75E4;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a75dc
	if (ctx.cr6.eq) goto loc_822A75DC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a75e4
	goto loc_822A75E4;
loc_822A75DC:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A75E4;
	sub_8229E118(ctx, base);
loc_822A75E4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// bge 0x822a7580
	if (!ctx.cr0.lt) goto loc_822A7580;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A7560) {
	__imp__sub_822A7560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7600) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
loc_822A7624:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bne cr6,0x822a763c
	if (!ctx.cr6.eq) goto loc_822A763C;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x822a7660
	goto loc_822A7660;
loc_822A763C:
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bne cr6,0x822a76c4
	if (!ctx.cr6.eq) goto loc_822A76C4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_822A7660:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bge 0x822a7624
	if (!ctx.cr0.lt) goto loc_822A7624;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8229e0e8
	ctx.lr = 0x822A7684;
	sub_8229E0E8(ctx, base);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r9.u32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_822A76AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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
loc_822A76C4:
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// addi r9,r10,-6904
	ctx.r9.s64 = ctx.r10.s64 + -6904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// bl 0x822a7560
	ctx.lr = 0x822A76DC;
	sub_822A7560(ctx, base);
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,14816
	ctx.r6.s64 = ctx.r8.s64 + 14816;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,21416
	ctx.r3.s64 = ctx.r5.s64 + 21416;
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A76F8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A76FC;
	sub_822AD350(ctx, base);
	// b 0x822a76ac
	goto loc_822A76AC;
}

PPC_WEAK_FUNC(sub_822A7600) {
	__imp__sub_822A7600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7700) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a777c
	if (!ctx.cr6.eq) goto loc_822A777C;
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r9,-7040
	ctx.r9.s64 = ctx.r9.s64 + -7040;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r9,24
	ctx.r7.s64 = ctx.r9.s64 + 24;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// clrlwi r31,r6,27
	ctx.r31.u64 = ctx.r6.u32 & 0x1F;
	// cmpwi cr6,r31,23
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 23, ctx.xer);
	// bge cr6,0x822a777c
	if (!ctx.cr6.lt) goto loc_822A777C;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// bl 0x822a37a8
	ctx.lr = 0x822A7764;
	sub_822A37A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_822A777C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x822a77e0
	if (!ctx.cr6.lt) goto loc_822A77E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a779c
	if (!ctx.cr6.eq) goto loc_822A779C;
	// bl 0x822a90e8
	ctx.lr = 0x822A7798;
	sub_822A90E8(ctx, base);
	// b 0x822a77e0
	goto loc_822A77E0;
loc_822A779C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a77ac
	if (ctx.cr6.gt) goto loc_822A77AC;
	// bl 0x822a2468
	ctx.lr = 0x822A77A8;
	sub_822A2468(ctx, base);
	// b 0x822a77e0
	goto loc_822A77E0;
loc_822A77AC:
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a77e0
	if (!ctx.cr6.eq) goto loc_822A77E0;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a77d8
	if (ctx.cr6.eq) goto loc_822A77D8;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a77e0
	goto loc_822A77E0;
loc_822A77D8:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A77E0;
	sub_8229E118(ctx, base);
loc_822A77E0:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14816
	ctx.r9.s64 = ctx.r11.s64 + 14816;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,23856
	ctx.r3.s64 = ctx.r8.s64 + 23856;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A77FC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A7800;
	sub_822AD350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

PPC_WEAK_FUNC(sub_822A7700) {
	__imp__sub_822A7700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822A7820;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a78a8
	if (!ctx.cr6.eq) goto loc_822A78A8;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x822a73e0
	ctx.lr = 0x822A7850;
	sub_822A73E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a73e0
	ctx.lr = 0x822A7858;
	sub_822A73E0(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,14816
	ctx.r9.s64 = ctx.r11.s64 + 14816;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r27,r8,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x822a13a0
	ctx.lr = 0x822A7878;
	sub_822A13A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x822A7884;
	sub_822A13A0(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r7,24392
	ctx.r3.s64 = ctx.r7.s64 + 24392;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822A78A0;
	sub_822E84F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x822a78ac
	goto loc_822A78AC;
loc_822A78A8:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_822A78AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x822a7918
	if (!ctx.cr6.lt) goto loc_822A7918;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a78d8
	if (!ctx.cr6.eq) goto loc_822A78D8;
	// bl 0x822a90e8
	ctx.lr = 0x822A78D4;
	sub_822A90E8(ctx, base);
	// b 0x822a7918
	goto loc_822A7918;
loc_822A78D8:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a78e8
	if (ctx.cr6.gt) goto loc_822A78E8;
	// bl 0x822a2468
	ctx.lr = 0x822A78E4;
	sub_822A2468(ctx, base);
	// b 0x822a7918
	goto loc_822A7918;
loc_822A78E8:
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a7918
	if (!ctx.cr6.eq) goto loc_822A7918;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a7910
	if (ctx.cr6.eq) goto loc_822A7910;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a7918
	goto loc_822A7918;
loc_822A7910:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A7918;
	sub_8229E118(ctx, base);
loc_822A7918:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x822a79b0
	if (!ctx.cr6.lt) goto loc_822A79B0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a7950
	if (!ctx.cr6.eq) goto loc_822A7950;
	// bl 0x822a90e8
	ctx.lr = 0x822A793C;
	sub_822A90E8(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ad350
	ctx.lr = 0x822A7948;
	sub_822AD350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822A7950:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a7970
	if (ctx.cr6.gt) goto loc_822A7970;
	// bl 0x822a2468
	ctx.lr = 0x822A795C;
	sub_822A2468(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ad350
	ctx.lr = 0x822A7968;
	sub_822AD350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822A7970:
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a79b0
	if (!ctx.cr6.eq) goto loc_822A79B0;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a79a8
	if (ctx.cr6.eq) goto loc_822A79A8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// bl 0x822ad350
	ctx.lr = 0x822A79A0;
	sub_822AD350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822A79A8:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A79B0;
	sub_8229E118(ctx, base);
loc_822A79B0:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ad350
	ctx.lr = 0x822A79BC;
	sub_822AD350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A7818) {
	__imp__sub_822A7818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A79C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A79C4) {
	__imp__sub_822A79C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A79C8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x822a7c14
	if (ctx.cr6.eq) goto loc_822A7C14;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x822a7a28
	if (!ctx.cr6.eq) goto loc_822A7A28;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a7b34
	if (!ctx.cr6.eq) goto loc_822A7B34;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// b 0x822a7c14
	goto loc_822A7C14;
loc_822A7A28:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x822a7a60
	if (!ctx.cr6.eq) goto loc_822A7A60;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822a7b34
	if (!ctx.cr6.eq) goto loc_822A7B34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x822a7c14
	goto loc_822A7C14;
loc_822A7A60:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x822a7b34
	if (!ctx.cr6.eq) goto loc_822A7B34;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822a7ab0
	if (!ctx.cr6.eq) goto loc_822A7AB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8229e0e8
	ctx.lr = 0x822A7A7C;
	sub_8229E0E8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// b 0x822a7c14
	goto loc_822A7C14;
loc_822A7AB0:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a7b34
	if (!ctx.cr6.eq) goto loc_822A7B34;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8229e0e8
	ctx.lr = 0x822A7AC4;
	sub_8229E0E8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// b 0x822a7c14
	goto loc_822A7C14;
loc_822A7B34:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822a7c08
	if (!ctx.cr6.eq) goto loc_822A7C08;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x822a7b84
	if (!ctx.cr6.eq) goto loc_822A7B84;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8229e0e8
	ctx.lr = 0x822A7B50;
	sub_8229E0E8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x822a7c14
	goto loc_822A7C14;
loc_822A7B84:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x822a7c08
	if (!ctx.cr6.eq) goto loc_822A7C08;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8229e0e8
	ctx.lr = 0x822A7B98;
	sub_8229E0E8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x822a7c14
	goto loc_822A7C14;
loc_822A7C08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7818
	ctx.lr = 0x822A7C14;
	sub_822A7818(ctx, base);
loc_822A7C14:
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

PPC_WEAK_FUNC(sub_822A79C8) {
	__imp__sub_822A79C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A7C2C) {
	__imp__sub_822A7C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7C30) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822a7df8
	if (ctx.cr6.eq) goto loc_822A7DF8;
	// bge cr6,0x822a7d28
	if (!ctx.cr6.lt) goto loc_822A7D28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822a7c80
	if (ctx.cr6.eq) goto loc_822A7C80;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822a7cb0
	if (ctx.cr6.eq) goto loc_822A7CB0;
loc_822A7C70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7818
	ctx.lr = 0x822A7C7C;
	sub_822A7818(ctx, base);
	// b 0x822a7df8
	goto loc_822A7DF8;
loc_822A7C80:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x822a7cf8
	if (ctx.cr6.eq) goto loc_822A7CF8;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x822a7ce0
	if (ctx.cr6.eq) goto loc_822A7CE0;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x822a7c70
	if (!ctx.cr6.eq) goto loc_822A7C70;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x822a2128
	ctx.lr = 0x822A7CA8;
	sub_822A2128(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x822a7df8
	goto loc_822A7DF8;
loc_822A7CB0:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x822a7c70
	if (!ctx.cr6.eq) goto loc_822A7C70;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x822a7df8
	goto loc_822A7DF8;
loc_822A7CE0:
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x822a20b8
	ctx.lr = 0x822A7CF0;
	sub_822A20B8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x822a7df8
	goto loc_822A7DF8;
loc_822A7CF8:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2190
	ctx.lr = 0x822A7D0C;
	sub_822A2190(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lbz r10,-1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a7df8
	if (!ctx.cr6.eq) goto loc_822A7DF8;
	// lhz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// b 0x822a7dd8
	goto loc_822A7DD8;
loc_822A7D28:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x822a7d64
	if (ctx.cr6.eq) goto loc_822A7D64;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x822a7c70
	if (!ctx.cr6.eq) goto loc_822A7C70;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a7c70
	if (!ctx.cr6.eq) goto loc_822A7C70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x822a7df8
	goto loc_822A7DF8;
loc_822A7D64:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822a7dac
	if (ctx.cr6.eq) goto loc_822A7DAC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822a7d94
	if (ctx.cr6.eq) goto loc_822A7D94;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a7c70
	if (!ctx.cr6.eq) goto loc_822A7C70;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x822a2128
	ctx.lr = 0x822A7D8C;
	sub_822A2128(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x822a7df8
	goto loc_822A7DF8;
loc_822A7D94:
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x822a20b8
	ctx.lr = 0x822A7DA4;
	sub_822A20B8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x822a7df8
	goto loc_822A7DF8;
loc_822A7DAC:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2190
	ctx.lr = 0x822A7DC0;
	sub_822A2190(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lbz r10,-1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a7df8
	if (!ctx.cr6.eq) goto loc_822A7DF8;
	// lhz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -4);
	// addi r3,r30,-4
	ctx.r3.s64 = ctx.r30.s64 + -4;
loc_822A7DD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a7df0
	if (ctx.cr6.eq) goto loc_822A7DF0;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a7df8
	goto loc_822A7DF8;
loc_822A7DF0:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A7DF8;
	sub_8229E118(ctx, base);
loc_822A7DF8:
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

PPC_WEAK_FUNC(sub_822A7C30) {
	__imp__sub_822A7C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a7e3c
	if (!ctx.cr6.eq) goto loc_822A7E3C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a7e3c
	if (!ctx.cr6.eq) goto loc_822A7E3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_822A7E3C:
	// b 0x822a7818
	sub_822A7818(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A7E10) {
	__imp__sub_822A7E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a7e6c
	if (!ctx.cr6.eq) goto loc_822A7E6C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a7e6c
	if (!ctx.cr6.eq) goto loc_822A7E6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_822A7E6C:
	// b 0x822a7818
	sub_822A7818(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A7E40) {
	__imp__sub_822A7E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a7e9c
	if (!ctx.cr6.eq) goto loc_822A7E9C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a7e9c
	if (!ctx.cr6.eq) goto loc_822A7E9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_822A7E9C:
	// b 0x822a7818
	sub_822A7818(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A7E70) {
	__imp__sub_822A7E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7EA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822a79c8
	ctx.lr = 0x822A7EC0;
	sub_822A79C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822a7f08
	if (ctx.cr6.eq) goto loc_822A7F08;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822a7ee4
	if (ctx.cr6.eq) goto loc_822A7EE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7818
	ctx.lr = 0x822A7EE0;
	sub_822A7818(ctx, base);
	// b 0x822a7f2c
	goto loc_822A7F2C;
loc_822A7EE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// b 0x822a7f2c
	goto loc_822A7F2C;
loc_822A7F08:
	// li r11,6
	ctx.r11.s64 = 6;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822a7f28
	if (ctx.cr6.lt) goto loc_822A7F28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A7F28:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822A7F2C:
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

PPC_WEAK_FUNC(sub_822A7EA0) {
	__imp__sub_822A7EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A7F44) {
	__imp__sub_822A7F44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7F48) {
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
	// bl 0x822a7ea0
	ctx.lr = 0x822A7F60;
	sub_822A7EA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822A7F48) {
	__imp__sub_822A7F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A7F84) {
	__imp__sub_822A7F84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A7F88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822a79c8
	ctx.lr = 0x822A7FA8;
	sub_822A79C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822a7ff0
	if (ctx.cr6.eq) goto loc_822A7FF0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822a7fcc
	if (ctx.cr6.eq) goto loc_822A7FCC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7818
	ctx.lr = 0x822A7FC8;
	sub_822A7818(ctx, base);
	// b 0x822a8014
	goto loc_822A8014;
loc_822A7FCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// b 0x822a8014
	goto loc_822A8014;
loc_822A7FF0:
	// li r11,6
	ctx.r11.s64 = 6;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x822a8010
	if (ctx.cr6.gt) goto loc_822A8010;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A8010:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822A8014:
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

PPC_WEAK_FUNC(sub_822A7F88) {
	__imp__sub_822A7F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A802C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A802C) {
	__imp__sub_822A802C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8030) {
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
	// bl 0x822a7f88
	ctx.lr = 0x822A8048;
	sub_822A7F88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822A8030) {
	__imp__sub_822A8030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A806C) {
	__imp__sub_822A806C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8070) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a809c
	if (!ctx.cr6.eq) goto loc_822A809C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a809c
	if (!ctx.cr6.eq) goto loc_822A809C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_822A809C:
	// b 0x822a7818
	sub_822A7818(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A8070) {
	__imp__sub_822A8070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A80A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a80cc
	if (!ctx.cr6.eq) goto loc_822A80CC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a80cc
	if (!ctx.cr6.eq) goto loc_822A80CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// sraw r9,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r9.s64 = ctx.r11.s32 >> temp.u32;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_822A80CC:
	// b 0x822a7818
	sub_822A7818(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A80A0) {
	__imp__sub_822A80A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A80D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822A80D8;
	__savegprlr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8320(r1)
	ea = -8320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822a7c30
	ctx.lr = 0x822A80F0;
	sub_822A7C30(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x822a8318
	if (ctx.cr6.gt) goto loc_822A8318;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a8148
	if (ctx.cr6.eq) goto loc_822A8148;
	// bdz 0x822a8318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822A8318;
	// bdz 0x822a8234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822A8234;
	// bdz 0x822a8130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822A8130;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822A8130:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822A8148:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x822A8150;
	sub_822A13A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x822A815C;
	sub_822A13A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a1430
	ctx.lr = 0x822A8168;
	sub_822A1430(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a1430
	ctx.lr = 0x822A8174;
	sub_822A1430(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r5,8192
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8192, ctx.xer);
	// ble cr6,0x822a81c0
	if (!ctx.cr6.gt) goto loc_822A81C0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a2468
	ctx.lr = 0x822A818C;
	sub_822A2468(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2468
	ctx.lr = 0x822A8194;
	sub_822A2468(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r3,r10,24448
	ctx.r3.s64 = ctx.r10.s64 + 24448;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822A81B4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A81B8;
	sub_822AD350(ctx, base);
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822A81C0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
loc_822A81CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822a81cc
	if (!ctx.cr6.eq) goto loc_822A81CC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
loc_822A81F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x822a81f0
	if (!ctx.cr6.eq) goto loc_822A81F0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a19a8
	ctx.lr = 0x822A8214;
	sub_822A19A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a2468
	ctx.lr = 0x822A8220;
	sub_822A2468(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2468
	ctx.lr = 0x822A8228;
	sub_822A2468(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822A8234:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8229e0e8
	ctx.lr = 0x822A8240;
	sub_8229E0E8(ctx, base);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// stw r11,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,8(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a82d0
	if (!ctx.cr6.eq) goto loc_822A82D0;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a82c8
	if (ctx.cr6.eq) goto loc_822A82C8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a82d0
	goto loc_822A82D0;
loc_822A82C8:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A82D0;
	sub_8229E118(ctx, base);
loc_822A82D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a830c
	if (!ctx.cr6.eq) goto loc_822A830C;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a8304
	if (ctx.cr6.eq) goto loc_822A8304;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822A8304:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A830C;
	sub_8229E118(ctx, base);
loc_822A830C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822A8318:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7818
	ctx.lr = 0x822A8324;
	sub_822A7818(ctx, base);
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A80D0) {
	__imp__sub_822A80D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A832C) {
	__imp__sub_822A832C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822A8338;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822a79c8
	ctx.lr = 0x822A8348;
	sub_822A79C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822a83a8
	if (ctx.cr6.eq) goto loc_822A83A8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822a8390
	if (ctx.cr6.eq) goto loc_822A8390;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822a8378
	if (ctx.cr6.eq) goto loc_822A8378;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7818
	ctx.lr = 0x822A8370;
	sub_822A7818(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A8378:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A8390:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A83A8:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8229e0e8
	ctx.lr = 0x822A83B4;
	sub_8229E0E8(ctx, base);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// stw r11,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,8(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a8444
	if (!ctx.cr6.eq) goto loc_822A8444;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a843c
	if (ctx.cr6.eq) goto loc_822A843C;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a8444
	goto loc_822A8444;
loc_822A843C:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A8444;
	sub_8229E118(ctx, base);
loc_822A8444:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a8480
	if (!ctx.cr6.eq) goto loc_822A8480;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a8478
	if (ctx.cr6.eq) goto loc_822A8478;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A8478:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A8480;
	sub_8229E118(ctx, base);
loc_822A8480:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A8330) {
	__imp__sub_822A8330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A848C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A848C) {
	__imp__sub_822A848C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822A8498;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822a79c8
	ctx.lr = 0x822A84A8;
	sub_822A79C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822a8508
	if (ctx.cr6.eq) goto loc_822A8508;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822a84f0
	if (ctx.cr6.eq) goto loc_822A84F0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822a84d8
	if (ctx.cr6.eq) goto loc_822A84D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7818
	ctx.lr = 0x822A84D0;
	sub_822A7818(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A84D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A84F0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A8508:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8229e0e8
	ctx.lr = 0x822A8514;
	sub_8229E0E8(ctx, base);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// stw r11,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,8(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a85a4
	if (!ctx.cr6.eq) goto loc_822A85A4;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a859c
	if (ctx.cr6.eq) goto loc_822A859C;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a85a4
	goto loc_822A85A4;
loc_822A859C:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A85A4;
	sub_8229E118(ctx, base);
loc_822A85A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a85e0
	if (!ctx.cr6.eq) goto loc_822A85E0;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a85d8
	if (ctx.cr6.eq) goto loc_822A85D8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A85D8:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A85E0;
	sub_8229E118(ctx, base);
loc_822A85E0:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A8490) {
	__imp__sub_822A8490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A85EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A85EC) {
	__imp__sub_822A85EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A85F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822A85F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822a79c8
	ctx.lr = 0x822A8608;
	sub_822A79C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822a86e8
	if (ctx.cr6.eq) goto loc_822A86E8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822a86a8
	if (ctx.cr6.eq) goto loc_822A86A8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822a8638
	if (ctx.cr6.eq) goto loc_822A8638;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7818
	ctx.lr = 0x822A8630;
	sub_822A7818(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A8638:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a8688
	if (ctx.cr6.eq) goto loc_822A8688;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A8688:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,31232
	ctx.r3.s64 = ctx.r10.s64 + 31232;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x822ad350
	ctx.lr = 0x822A86A0;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A86A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x822a86d0
	if (ctx.cr6.eq) goto loc_822A86D0;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A86D0:
	// stfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,31232
	ctx.r3.s64 = ctx.r11.s64 + 31232;
	// bl 0x822ad350
	ctx.lr = 0x822A86E0;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A86E8:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8229e0e8
	ctx.lr = 0x822A86F4;
	sub_8229E0E8(ctx, base);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822a87f4
	if (ctx.cr6.eq) goto loc_822A87F4;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x822a87f4
	if (ctx.cr6.eq) goto loc_822A87F4;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x822a87f4
	if (ctx.cr6.eq) goto loc_822A87F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f10,4(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f9,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// stfs f7,8(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822a87ac
	if (!ctx.cr6.eq) goto loc_822A87AC;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a87a4
	if (ctx.cr6.eq) goto loc_822A87A4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a87ac
	goto loc_822A87AC;
loc_822A87A4:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A87AC;
	sub_8229E118(ctx, base);
loc_822A87AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a87e8
	if (!ctx.cr6.eq) goto loc_822A87E8;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a87e0
	if (ctx.cr6.eq) goto loc_822A87E0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A87E0:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A87E8;
	sub_8229E118(ctx, base);
loc_822A87E8:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A87F4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a883c
	if (!ctx.cr6.eq) goto loc_822A883C;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a8834
	if (ctx.cr6.eq) goto loc_822A8834;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a883c
	goto loc_822A883C;
loc_822A8834:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A883C;
	sub_8229E118(ctx, base);
loc_822A883C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a8870
	if (!ctx.cr6.eq) goto loc_822A8870;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a8868
	if (ctx.cr6.eq) goto loc_822A8868;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a8870
	goto loc_822A8870;
loc_822A8868:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A8870;
	sub_8229E118(ctx, base);
loc_822A8870:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,31232
	ctx.r3.s64 = ctx.r11.s64 + 31232;
	// bl 0x822ad350
	ctx.lr = 0x822A8880;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A85F0) {
	__imp__sub_822A85F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a88d8
	if (!ctx.cr6.eq) goto loc_822A88D8;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a88d8
	if (!ctx.cr6.eq) goto loc_822A88D8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a88c4
	if (ctx.cr6.eq) goto loc_822A88C4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// divw r9,r10,r11
	ctx.r9.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
loc_822A88C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r10,31232
	ctx.r3.s64 = ctx.r10.s64 + 31232;
	// b 0x822ad350
	sub_822AD350(ctx, base);
	return;
loc_822A88D8:
	// b 0x822a7818
	sub_822A7818(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A8888) {
	__imp__sub_822A8888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A88DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A88DC) {
	__imp__sub_822A88DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A88E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822A88E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r29,r11,-6904
	ctx.r29.s64 = ctx.r11.s64 + -6904;
	// lbz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a89e4
	if (ctx.cr6.eq) goto loc_822A89E4;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r10,14744
	ctx.r11.s64 = ctx.r10.s64 + 14744;
	// addis r8,r3,-128
	ctx.r8.s64 = ctx.r3.s64 + -8388608;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r4,r8,8
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFFFF;
	// lis r5,20971
	ctx.r5.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// lhzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// ori r3,r5,60923
	ctx.r3.u64 = ctx.r5.u64 | 60923;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mulhwu r9,r11,r3
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r3.u32)) >> 32;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r8,r10,51199
	ctx.r8.u64 = ctx.r10.u64 | 51199;
	// ori r3,r6,51201
	ctx.r3.u64 = ctx.r6.u64 | 51201;
	// rlwinm r7,r9,18,14,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r5,r31,31
	ctx.r5.u64 = ctx.r31.u32 & 0x1;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// mullw r30,r5,r3
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A896C;
	sub_822A2B20(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 589824;
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// lhzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a89e4
	if (ctx.cr6.eq) goto loc_822A89E4;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwz r30,48(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addis r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 589824;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r9,36
	ctx.r5.s64 = ctx.r9.s64 + 36;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// li r28,21
	ctx.r28.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r6,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r9,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r28,0,27,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x1F) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lhzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sthx r7,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u16);
	// sth r30,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r30.u16);
	// bl 0x822a6a50
	ctx.lr = 0x822A89E4;
	sub_822A6A50(ctx, base);
loc_822A89E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A88E0) {
	__imp__sub_822A88E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A89EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A89EC) {
	__imp__sub_822A89EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A89F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822A89F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r10,r10,-6904
	ctx.r10.s64 = ctx.r10.s64 + -6904;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// addi r29,r10,98
	ctx.r29.s64 = ctx.r10.s64 + 98;
loc_822A8A18:
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a8a5c
	if (!ctx.cr6.eq) goto loc_822A8A5C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a8a5c
	if (ctx.cr6.eq) goto loc_822A8A5C;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x822a8a5c
	if (!ctx.cr6.eq) goto loc_822A8A5C;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// bl 0x822a5e18
	ctx.lr = 0x822A8A54;
	sub_822A5E18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a32e0
	ctx.lr = 0x822A8A5C;
	sub_822A32E0(ctx, base);
loc_822A8A5C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r30,36864
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 36864, ctx.xer);
	// blt cr6,0x822a8a18
	if (ctx.cr6.lt) goto loc_822A8A18;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A89F0) {
	__imp__sub_822A89F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822A8A80;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r10,14744
	ctx.r8.s64 = ctx.r10.s64 + 14744;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lhzx r26,r9,r8
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x8229d020
	ctx.lr = 0x822A8AAC;
	sub_8229D020(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// clrlwi r6,r26,31
	ctx.r6.u64 = ctx.r26.u32 & 0x1;
	// ori r5,r7,51201
	ctx.r5.u64 = ctx.r7.u64 | 51201;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r30,-28670
	ctx.r30.s64 = ctx.r30.s64 + -28670;
	// bl 0x822a66d0
	ctx.lr = 0x822A8AD0;
	sub_822A66D0(ctx, base);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r9,-7040
	ctx.r31.s64 = ctx.r9.s64 + -7040;
	// li r28,3
	ctx.r28.s64 = 3;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r27,r27,16
	ctx.r27.u64 = ctx.r27.u32 & 0xFFFF;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// rlwimi r8,r28,1,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r28.u32, 1) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bl 0x822a1d20
	ctx.lr = 0x822A8B0C;
	sub_822A1D20(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822a67b8
	ctx.lr = 0x822A8B1C;
	sub_822A67B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a2468
	ctx.lr = 0x822A8B28;
	sub_822A2468(ctx, base);
	// add r7,r30,r29
	ctx.r7.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// rlwimi r6,r28,1,27,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r28.u32, 1) & 0x1F) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A8A78) {
	__imp__sub_822A8A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A8B4C) {
	__imp__sub_822A8B4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822A8B58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r10,14744
	ctx.r11.s64 = ctx.r10.s64 + 14744;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// addis r6,r3,-128
	ctx.r6.s64 = ctx.r3.s64 + -8388608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r4,r6,8
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFFFF;
	// lhzx r30,r8,r7
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a5a00
	ctx.lr = 0x822A8B90;
	sub_822A5A00(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r30,31
	ctx.r4.u64 = ctx.r30.u32 & 0x1;
	// ori r11,r5,51201
	ctx.r11.u64 = ctx.r5.u64 | 51201;
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r9,r10,-7040
	ctx.r9.s64 = ctx.r10.s64 + -7040;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r10,r9,9
	ctx.r10.s64 = ctx.r9.s64 + 589824;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// addis r10,r9,9
	ctx.r10.s64 = ctx.r9.s64 + 589824;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lhzx r9,r6,r7
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r3,r4,27
	ctx.r3.u64 = ctx.r4.u32 & 0x1F;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a8bec
	if (ctx.cr6.eq) goto loc_822A8BEC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822A8BEC:
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a30e0
	ctx.lr = 0x822A8BF8;
	sub_822A30E0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A8B50) {
	__imp__sub_822A8B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x822A8C18;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r28,r3,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// lhzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x822ad190
	ctx.lr = 0x822A8C38;
	sub_822AD190(ctx, base);
	// lis r10,-31859
	ctx.r10.s64 = -2087911424;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-3336
	ctx.r8.s64 = ctx.r10.s64 + -3336;
	// ori r10,r9,51201
	ctx.r10.u64 = ctx.r9.u64 | 51201;
	// addi r7,r31,30
	ctx.r7.s64 = ctx.r31.s64 + 30;
	// clrlwi r6,r29,31
	ctx.r6.u64 = ctx.r29.u32 & 0x1;
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lhzx r11,r28,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r7.u32);
	// addis r21,r5,1
	ctx.r21.s64 = ctx.r5.s64 + 65536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r21,r21,-28670
	ctx.r21.s64 = ctx.r21.s64 + -28670;
	// lwz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x822a8d50
	if (ctx.cr6.eq) goto loc_822A8D50;
	// clrlwi r9,r27,31
	ctx.r9.u64 = ctx.r27.u32 & 0x1;
	// lis r20,128
	ctx.r20.s64 = 8388608;
	// mullw r23,r9,r10
	ctx.r23.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,20971
	ctx.r9.s64 = 1374355456;
	// lis r8,0
	ctx.r8.s64 = 0;
	// subf r28,r20,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r20.s64;
	// lis r22,1
	ctx.r22.s64 = 65536;
	// ori r19,r10,36864
	ctx.r19.u64 = ctx.r10.u64 | 36864;
	// ori r24,r9,60923
	ctx.r24.u64 = ctx.r9.u64 | 60923;
	// ori r25,r8,51199
	ctx.r25.u64 = ctx.r8.u64 | 51199;
loc_822A8C9C:
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// rlwinm r26,r11,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r26,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// rlwinm r11,r9,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x822a8d58
	if (!ctx.cr6.lt) goto loc_822A8D58;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// li r29,2
	ctx.r29.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1ee8
	ctx.lr = 0x822A8CC8;
	sub_822A1EE8(ctx, base);
loc_822A8CC8:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r4,r28,8
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFFFF;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mulhwu r10,r11,r24
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r24.u32)) >> 32;
	// rlwinm r9,r10,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFFF;
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a57b0
	ctx.lr = 0x822A8CF4;
	sub_822A57B0(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// add r7,r23,r3
	ctx.r7.u64 = ctx.r23.u64 + ctx.r3.u64;
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addi r4,r31,14
	ctx.r4.s64 = ctx.r31.s64 + 14;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lhzx r11,r5,r6
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r6.u32);
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// or r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 | ctx.r29.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lhzx r11,r26,r4
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a8d50
	if (ctx.cr6.eq) goto loc_822A8D50;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a8c9c
	if (!ctx.cr6.eq) goto loc_822A8C9C;
loc_822A8D50:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_822A8D58:
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x822a8d6c
	if (!ctx.cr6.lt) goto loc_822A8D6C;
	// li r29,1
	ctx.r29.s64 = 1;
	// subf r30,r22,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r22.s64;
	// b 0x822a8cc8
	goto loc_822A8CC8;
loc_822A8D6C:
	// li r29,6
	ctx.r29.s64 = 6;
	// subf r30,r20,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r20.s64;
	// b 0x822a8cc8
	goto loc_822A8CC8;
}

PPC_WEAK_FUNC(sub_822A8C10) {
	__imp__sub_822A8C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822A8D80;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r9,-7040
	ctx.r30.s64 = ctx.r9.s64 + -7040;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r30,30
	ctx.r9.s64 = ctx.r30.s64 + 30;
	// ori r11,r11,51201
	ctx.r11.u64 = ctx.r11.u64 | 51201;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r6,0
	ctx.r6.s64 = 0;
	// clrlwi r5,r3,31
	ctx.r5.u64 = ctx.r3.u32 & 0x1;
	// mullw r4,r8,r11
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// ori r10,r6,36866
	ctx.r10.u64 = ctx.r6.u64 | 36866;
	// mullw r3,r5,r7
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// add r29,r4,r10
	ctx.r29.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r24,r3,r10
	ctx.r24.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a8ed4
	if (ctx.cr6.eq) goto loc_822A8ED4;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r25,r10,60923
	ctx.r25.u64 = ctx.r10.u64 | 60923;
	// ori r26,r9,51199
	ctx.r26.u64 = ctx.r9.u64 | 51199;
loc_822A8DE0:
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r28,r11,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r28,r30
	ctx.r31.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r10,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mulhwu r9,r11,r25
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r25.u32)) >> 32;
	// rlwinm r8,r9,18,14,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3FFFF;
	// mullw r7,r8,r26
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r26.s32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a2b20
	ctx.lr = 0x822A8E18;
	sub_822A2B20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a8e28
	if (!ctx.cr6.eq) goto loc_822A8E28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a57b0
	ctx.lr = 0x822A8E28;
	sub_822A57B0(ctx, base);
loc_822A8E28:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lhzx r11,r8,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bge cr6,0x822a8eb0
	if (!ctx.cr6.lt) goto loc_822A8EB0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a8e88
	if (!ctx.cr6.eq) goto loc_822A8E88;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 + 20;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// b 0x822a8eb0
	goto loc_822A8EB0;
loc_822A8E88:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bgt cr6,0x822a8e98
	if (ctx.cr6.gt) goto loc_822A8E98;
	// bl 0x822a1ee8
	ctx.lr = 0x822A8E94;
	sub_822A1EE8(ctx, base);
	// b 0x822a8eb0
	goto loc_822A8EB0;
loc_822A8E98:
	// lbz r11,-1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a8eb0
	if (!ctx.cr6.eq) goto loc_822A8EB0;
	// lhz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + -4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,-4(r3)
	PPC_STORE_U16(ctx.r3.u32 + -4, ctx.r11.u16);
loc_822A8EB0:
	// addi r11,r30,14
	ctx.r11.s64 = ctx.r30.s64 + 14;
	// lhzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a8ed4
	if (ctx.cr6.eq) goto loc_822A8ED4;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a8de0
	if (!ctx.cr6.eq) goto loc_822A8DE0;
loc_822A8ED4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A8D78) {
	__imp__sub_822A8D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A8EDC) {
	__imp__sub_822A8EDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822A8EE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822a3fa0
	ctx.lr = 0x822A8EFC;
	sub_822A3FA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a8f3c
	if (ctx.cr6.eq) goto loc_822A8F3C;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// addi r9,r11,30
	ctx.r9.s64 = ctx.r11.s64 + 30;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a8f3c
	if (ctx.cr6.eq) goto loc_822A8F3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a8b50
	ctx.lr = 0x822A8F30;
	sub_822A8B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8d78
	ctx.lr = 0x822A8F3C;
	sub_822A8D78(ctx, base);
loc_822A8F3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A8EE0) {
	__imp__sub_822A8EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A8F44) {
	__imp__sub_822A8F44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8F48) {
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
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a8f80
	if (ctx.cr6.eq) goto loc_822A8F80;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// bl 0x822a61a8
	ctx.lr = 0x822A8F78;
	sub_822A61A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_822A8F80:
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

PPC_WEAK_FUNC(sub_822A8F48) {
	__imp__sub_822A8F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A8F94) {
	__imp__sub_822A8F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A8F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822A8FA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a1e50
	ctx.lr = 0x822A8FB4;
	sub_822A1E50(ctx, base);
	// mulli r11,r3,101
	ctx.r11.s64 = ctx.r3.s64 * 101;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// ori r4,r8,51201
	ctx.r4.u64 = ctx.r8.u64 | 51201;
	// lis r6,0
	ctx.r6.s64 = 0;
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r3,r7,18,14,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// mullw r29,r5,r4
	ctx.r29.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// ori r10,r6,51199
	ctx.r10.u64 = ctx.r6.u64 | 51199;
	// addis r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 65536;
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r28,r28,-28670
	ctx.r28.s64 = ctx.r28.s64 + -28670;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2b20
	ctx.lr = 0x822A9008;
	sub_822A2B20(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r27,r11,-7040
	ctx.r27.s64 = ctx.r11.s64 + -7040;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r11,r27,9
	ctx.r11.s64 = ctx.r27.s64 + 589824;
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// lhzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822a9040
	if (ctx.cr6.eq) goto loc_822A9040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2468
	ctx.lr = 0x822A9034;
	sub_822A2468(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822A9040:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a5a00
	ctx.lr = 0x822A904C;
	sub_822A5A00(ctx, base);
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addis r11,r27,9
	ctx.r11.s64 = ctx.r27.s64 + 589824;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822a2468
	ctx.lr = 0x822A9068;
	sub_822A2468(ctx, base);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a37a8
	ctx.lr = 0x822A9088;
	sub_822A37A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A8F98) {
	__imp__sub_822A8F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A9094) {
	__imp__sub_822A9094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9098) {
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
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a90d0
	if (ctx.cr6.eq) goto loc_822A90D0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// bl 0x822a61a8
	ctx.lr = 0x822A90C8;
	sub_822A61A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_822A90D0:
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

PPC_WEAK_FUNC(sub_822A9098) {
	__imp__sub_822A9098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A90E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A90E4) {
	__imp__sub_822A90E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A90E8) {
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
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r11,-7040
	ctx.r30.s64 = ctx.r11.s64 + -7040;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a9190
	if (ctx.cr6.eq) goto loc_822A9190;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a91dc
	if (!ctx.cr6.eq) goto loc_822A91DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 22, ctx.xer);
	// bne cr6,0x822a91dc
	if (!ctx.cr6.eq) goto loc_822A91DC;
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a91dc
	if (!ctx.cr6.eq) goto loc_822A91DC;
	// li r10,21
	ctx.r10.s64 = 21;
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// rlwimi r11,r10,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// addi r10,r7,14744
	ctx.r10.s64 = ctx.r7.s64 + 14744;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,25,7,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFE;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addis r5,r8,-128
	ctx.r5.s64 = ctx.r8.s64 + -8388608;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r4,r5,8
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFFFF;
	// lhzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// bl 0x822a6a50
	ctx.lr = 0x822A918C;
	sub_822A6A50(ctx, base);
	// b 0x822a91dc
	goto loc_822A91DC;
loc_822A9190:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a91a0
	if (ctx.cr6.eq) goto loc_822A91A0;
	// bl 0x822a5f10
	ctx.lr = 0x822A91A0;
	sub_822A5F10(ctx, base);
loc_822A91A0:
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r9,4,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x10;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// rotlwi r7,r9,4
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// addi r6,r30,18
	ctx.r6.s64 = ctx.r30.s64 + 18;
	// addi r5,r30,18
	ctx.r5.s64 = ctx.r30.s64 + 18;
	// clrlwi r4,r9,31
	ctx.r4.u64 = ctx.r9.u32 & 0x1;
	// lhzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r8,r3,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 4);
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// sthx r4,r7,r6
	PPC_STORE_U16(ctx.r7.u32 + ctx.r6.u32, ctx.r4.u16);
	// sthx r9,r8,r5
	PPC_STORE_U16(ctx.r8.u32 + ctx.r5.u32, ctx.r9.u16);
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
loc_822A91DC:
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

PPC_WEAK_FUNC(sub_822A90E8) {
	__imp__sub_822A90E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A91F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A91F4) {
	__imp__sub_822A91F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A91F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822A9200;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r9,r10,60923
	ctx.r9.u64 = ctx.r10.u64 | 60923;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulhwu r7,r11,r9
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// ori r5,r8,51199
	ctx.r5.u64 = ctx.r8.u64 | 51199;
	// rlwinm r3,r7,18,14,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// ori r29,r6,51201
	ctx.r29.u64 = ctx.r6.u64 | 51201;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// mullw r9,r3,r5
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// mullw r8,r10,r29
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addis r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A9254;
	sub_822A2B20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a926c
	if (ctx.cr6.eq) goto loc_822A926C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6a50
	ctx.lr = 0x822A9264;
	sub_822A6A50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822A926C:
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r28,r10,-7040
	ctx.r28.s64 = ctx.r10.s64 + -7040;
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 22, ctx.xer);
	// bne cr6,0x822a92f0
	if (!ctx.cr6.eq) goto loc_822A92F0;
	// rlwinm r31,r11,24,8,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r11,25,7,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFE;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r8,r10,14744
	ctx.r8.s64 = ctx.r10.s64 + 14744;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r30,r7,r8
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3598
	ctx.lr = 0x822A92B4;
	sub_822A3598(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a92f0
	if (ctx.cr6.eq) goto loc_822A92F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// addis r11,r28,9
	ctx.r11.s64 = ctx.r28.s64 + 589824;
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// lhz r4,6(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 6);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r26,8
	ctx.r6.s64 = ctx.r26.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x822ad5b8
	ctx.lr = 0x822A92F0;
	sub_822AD5B8(ctx, base);
loc_822A92F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A91F8) {
	__imp__sub_822A91F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A92F8) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r4,-128
	ctx.r10.s64 = ctx.r4.s64 + -8388608;
	// clrlwi r4,r10,8
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFFFF;
	// b 0x822a6c70
	sub_822A6C70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A92F8) {
	__imp__sub_822A92F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A9304) {
	__imp__sub_822A9304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822A9310;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// addis r8,r4,-128
	ctx.r8.s64 = ctx.r4.s64 + -8388608;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// clrlwi r4,r8,8
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFFFF;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lis r6,20971
	ctx.r6.s64 = 1374355456;
	// addi r7,r9,14744
	ctx.r7.s64 = ctx.r9.s64 + 14744;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// ori r3,r6,60923
	ctx.r3.u64 = ctx.r6.u64 | 60923;
	// ori r6,r9,51199
	ctx.r6.u64 = ctx.r9.u64 | 51199;
	// rlwinm r30,r5,24,8,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r10,51201
	ctx.r9.u64 = ctx.r10.u64 | 51201;
	// lhzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// mulhwu r7,r11,r3
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r3.u32)) >> 32;
	// rlwinm r5,r7,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// mullw r29,r8,r9
	ctx.r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822A9398;
	sub_822A2B20(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a943c
	if (ctx.cr6.eq) goto loc_822A943C;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r4,6(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822ad650
	ctx.lr = 0x822A93D4;
	sub_822AD650(ctx, base);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// bne cr6,0x822a9448
	if (!ctx.cr6.eq) goto loc_822A9448;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r9,23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 23, ctx.xer);
	// bne cr6,0x822a9448
	if (!ctx.cr6.eq) goto loc_822A9448;
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a9444
	if (ctx.cr6.eq) goto loc_822A9444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822A941C;
	sub_822A90E8(ctx, base);
	// bl 0x822a3148
	ctx.lr = 0x822A9420;
	sub_822A3148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x822a6d20
	ctx.lr = 0x822A9430;
	sub_822A6D20(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A943C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_822A9444:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_822A9448:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A9308) {
	__imp__sub_822A9308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9450) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822a945c
	if (ctx.cr6.eq) goto loc_822A945C;
	// b 0x822a70a0
	sub_822A70A0(ctx, base);
	return;
loc_822A945C:
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// lwz r4,80(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r3,76(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// b 0x822a9308
	sub_822A9308(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A9450) {
	__imp__sub_822A9450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9470) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a94e4
	if (!ctx.cr6.eq) goto loc_822A94E4;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r7,23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 23, ctx.xer);
	// bne cr6,0x822a94d4
	if (!ctx.cr6.eq) goto loc_822A94D4;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a90e8
	ctx.lr = 0x822A94D0;
	sub_822A90E8(ctx, base);
	// b 0x822a9564
	goto loc_822A9564;
loc_822A94D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a90e8
	ctx.lr = 0x822A94E0;
	sub_822A90E8(ctx, base);
	// b 0x822a9564
	goto loc_822A9564;
loc_822A94E4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822a952c
	if (!ctx.cr6.eq) goto loc_822A952C;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822A9500;
	sub_822A13A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822A9504:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a9504
	if (!ctx.cr6.eq) goto loc_822A9504;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a2468
	ctx.lr = 0x822A9528;
	sub_822A2468(ctx, base);
	// b 0x822a9564
	goto loc_822A9564;
loc_822A952C:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,24508
	ctx.r3.s64 = ctx.r7.s64 + 24508;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A9548;
	sub_822E84F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82293dd0
	ctx.lr = 0x822A9554;
	sub_82293DD0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// bl 0x822ad350
	ctx.lr = 0x822A9564;
	sub_822AD350(ctx, base);
loc_822A9564:
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

PPC_WEAK_FUNC(sub_822A9470) {
	__imp__sub_822A9470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A957C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A957C) {
	__imp__sub_822A957C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9580) {
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
	// bl 0x822a7200
	ctx.lr = 0x822A9598;
	sub_822A7200(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a95b4
	if (!ctx.cr6.eq) goto loc_822A95B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_822A95B4:
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

PPC_WEAK_FUNC(sub_822A9580) {
	__imp__sub_822A9580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A95C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822A95D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822a79c8
	ctx.lr = 0x822A95E0;
	sub_822A79C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x822a9860
	if (ctx.cr6.gt) goto loc_822A9860;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27132
	ctx.r12.s64 = ctx.r12.s64 + -27132;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822A963C;
	case 1:
		goto loc_822A97B4;
	case 2:
		goto loc_822A96B8;
	case 3:
		goto loc_822A96B8;
	case 4:
		goto loc_822A96EC;
	case 5:
		goto loc_822A967C;
	case 6:
		goto loc_822A965C;
	case 7:
		goto loc_822A9860;
	case 8:
		goto loc_822A9860;
	case 9:
		goto loc_822A9838;
	case 10:
		goto loc_822A9654;
	case 11:
		goto loc_822A9654;
	case 12:
		goto loc_822A9860;
	case 13:
		goto loc_822A9654;
	default:
		return;
	}
	// lwz r17,-27076(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27076);
	// lwz r17,-26700(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26700);
	// lwz r17,-26952(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26952);
	// lwz r17,-26952(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26952);
	// lwz r17,-26900(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26900);
	// lwz r17,-27012(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27012);
	// lwz r17,-27044(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27044);
	// lwz r17,-26528(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26528);
	// lwz r17,-26528(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26528);
	// lwz r17,-26568(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26568);
	// lwz r17,-27052(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27052);
	// lwz r17,-27052(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27052);
	// lwz r17,-26528(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26528);
	// lwz r17,-27052(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27052);
loc_822A963C:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A9654:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822A965C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A967C:
	// li r11,6
	ctx.r11.s64 = 6;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f0,25020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25020);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x822a96ac
	if (ctx.cr6.lt) goto loc_822A96AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A96AC:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A96B8:
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r29,r8,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x822a2468
	ctx.lr = 0x822A96D8;
	sub_822A2468(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2468
	ctx.lr = 0x822A96E0;
	sub_822A2468(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A96EC:
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x822a9730
	if (!ctx.cr6.eq) goto loc_822A9730;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x822a9730
	if (!ctx.cr6.eq) goto loc_822A9730;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x822a9734
	if (ctx.cr6.eq) goto loc_822A9734;
loc_822A9730:
	// li r28,0
	ctx.r28.s64 = 0;
loc_822A9734:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r29,r9,65535
	ctx.r29.u64 = ctx.r9.u64 | 65535;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a976c
	if (!ctx.cr6.eq) goto loc_822A976C;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a9764
	if (ctx.cr6.eq) goto loc_822A9764;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a976c
	goto loc_822A976C;
loc_822A9764:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A976C;
	sub_8229E118(ctx, base);
loc_822A976C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a97a8
	if (!ctx.cr6.eq) goto loc_822A97A8;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a97a0
	if (ctx.cr6.eq) goto loc_822A97A0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A97A0:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A97A8;
	sub_8229E118(ctx, base);
loc_822A97A8:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A97B4:
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r7,23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 23, ctx.xer);
	// beq cr6,0x822a97f4
	if (ctx.cr6.eq) goto loc_822A97F4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r6,r7,27
	ctx.r6.u64 = ctx.r7.u32 & 0x1F;
	// cmplwi cr6,r6,23
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 23, ctx.xer);
	// bne cr6,0x822a9808
	if (!ctx.cr6.eq) goto loc_822A9808;
loc_822A97F4:
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a9860
	if (ctx.cr6.eq) goto loc_822A9860;
loc_822A9808:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r29,r8,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x822a90e8
	ctx.lr = 0x822A9824;
	sub_822A90E8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a90e8
	ctx.lr = 0x822A982C;
	sub_822A90E8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A9838:
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822A9860:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7818
	ctx.lr = 0x822A986C;
	sub_822A7818(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A95C8) {
	__imp__sub_822A95C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A9874) {
	__imp__sub_822A9874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9878) {
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
	// bl 0x822a95c8
	ctx.lr = 0x822A9890;
	sub_822A95C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822A9878) {
	__imp__sub_822A9878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A98B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A98B4) {
	__imp__sub_822A98B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A98B8) {
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
	// addi r11,r3,-114
	ctx.r11.s64 = ctx.r3.s64 + -114;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x822a9bcc
	if (ctx.cr6.gt) goto loc_822A9BCC;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26380
	ctx.r12.s64 = ctx.r12.s64 + -26380;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822A9934;
	case 1:
		goto loc_822A998C;
	case 2:
		goto loc_822A99C8;
	case 3:
		goto loc_822A9A04;
	case 4:
		goto loc_822A9A20;
	case 5:
		goto loc_822A9A4C;
	case 6:
		goto loc_822A9A68;
	case 7:
		goto loc_822A9A84;
	case 8:
		goto loc_822A9AB0;
	case 9:
		goto loc_822A9ADC;
	case 10:
		goto loc_822A9B18;
	case 11:
		goto loc_822A9B54;
	case 12:
		goto loc_822A9B70;
	case 13:
		goto loc_822A9B8C;
	case 14:
		goto loc_822A9BA8;
	case 15:
		goto loc_822A9BC4;
	default:
		return;
	}
	// lwz r17,-26316(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26316);
	// lwz r17,-26228(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26228);
	// lwz r17,-26168(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26168);
	// lwz r17,-26108(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26108);
	// lwz r17,-26080(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26080);
	// lwz r17,-26036(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26036);
	// lwz r17,-26008(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26008);
	// lwz r17,-25980(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25980);
	// lwz r17,-25936(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25936);
	// lwz r17,-25892(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25892);
	// lwz r17,-25832(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25832);
	// lwz r17,-25772(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25772);
	// lwz r17,-25744(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25744);
	// lwz r17,-25716(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25716);
	// lwz r17,-25688(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25688);
	// lwz r17,-25660(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25660);
loc_822A9934:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a9970
	if (!ctx.cr6.eq) goto loc_822A9970;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a9970
	if (!ctx.cr6.eq) goto loc_822A9970;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_822A9970:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7818
	ctx.lr = 0x822A9978;
	sub_822A7818(ctx, base);
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
loc_822A998C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a9970
	if (!ctx.cr6.eq) goto loc_822A9970;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a9970
	if (!ctx.cr6.eq) goto loc_822A9970;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_822A99C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a9970
	if (!ctx.cr6.eq) goto loc_822A9970;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a9970
	if (!ctx.cr6.eq) goto loc_822A9970;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_822A9A04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a95c8
	ctx.lr = 0x822A9A0C;
	sub_822A95C8(ctx, base);
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
loc_822A9A20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a95c8
	ctx.lr = 0x822A9A28;
	sub_822A95C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_822A9A4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7ea0
	ctx.lr = 0x822A9A54;
	sub_822A7EA0(ctx, base);
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
loc_822A9A68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7f88
	ctx.lr = 0x822A9A70;
	sub_822A7F88(ctx, base);
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
loc_822A9A84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7f88
	ctx.lr = 0x822A9A8C;
	sub_822A7F88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_822A9AB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a7ea0
	ctx.lr = 0x822A9AB8;
	sub_822A7EA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_822A9ADC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a9970
	if (!ctx.cr6.eq) goto loc_822A9970;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a9970
	if (!ctx.cr6.eq) goto loc_822A9970;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_822A9B18:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a9970
	if (!ctx.cr6.eq) goto loc_822A9970;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a9970
	if (!ctx.cr6.eq) goto loc_822A9970;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// sraw r9,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r9.s64 = ctx.r11.s32 >> temp.u32;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
loc_822A9B54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a80d0
	ctx.lr = 0x822A9B5C;
	sub_822A80D0(ctx, base);
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
loc_822A9B70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8330
	ctx.lr = 0x822A9B78;
	sub_822A8330(ctx, base);
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
loc_822A9B8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8490
	ctx.lr = 0x822A9B94;
	sub_822A8490(ctx, base);
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
loc_822A9BA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a85f0
	ctx.lr = 0x822A9BB0;
	sub_822A85F0(ctx, base);
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
loc_822A9BC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a8888
	ctx.lr = 0x822A9BCC;
	sub_822A8888(ctx, base);
loc_822A9BCC:
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

PPC_WEAK_FUNC(sub_822A98B8) {
	__imp__sub_822A98B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822A9BE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r29,r11,-6904
	ctx.r29.s64 = ctx.r11.s64 + -6904;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a9c58
	if (ctx.cr6.eq) goto loc_822A9C58;
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r10,-7040
	ctx.r28.s64 = ctx.r10.s64 + -7040;
loc_822A9C0C:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r28,16
	ctx.r9.s64 = ctx.r28.s64 + 16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// sth r27,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r27.u16);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// bl 0x822ac490
	ctx.lr = 0x822A9C30;
	sub_822AC490(ctx, base);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a9c44
	if (ctx.cr6.eq) goto loc_822A9C44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a5e18
	ctx.lr = 0x822A9C44;
	sub_822A5E18(ctx, base);
loc_822A9C44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822A9C4C;
	sub_822A90E8(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a9c0c
	if (!ctx.cr6.eq) goto loc_822A9C0C;
loc_822A9C58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A9BE0) {
	__imp__sub_822A9BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822A9C68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// lbz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a9cc4
	if (ctx.cr6.eq) goto loc_822A9CC4;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r29,r10,14744
	ctx.r29.s64 = ctx.r10.s64 + 14744;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r29,2
	ctx.r30.s64 = ctx.r29.s64 + 2;
	// li r28,0
	ctx.r28.s64 = 0;
	// lhzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a9cb0
	if (ctx.cr6.eq) goto loc_822A9CB0;
	// bl 0x822a90e8
	ctx.lr = 0x822A9CAC;
	sub_822A90E8(ctx, base);
	// sthx r28,r31,r30
	PPC_STORE_U16(ctx.r31.u32 + ctx.r30.u32, ctx.r28.u16);
loc_822A9CB0:
	// lhzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a9cc4
	if (ctx.cr6.eq) goto loc_822A9CC4;
	// bl 0x822a90e8
	ctx.lr = 0x822A9CC0;
	sub_822A90E8(ctx, base);
	// sthx r28,r31,r29
	PPC_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u16);
loc_822A9CC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A9C60) {
	__imp__sub_822A9C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822A9CCC) {
	__imp__sub_822A9CCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9CD0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822a9ea4
	if (ctx.cr6.eq) goto loc_822A9EA4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822a9de4
	if (ctx.cr6.eq) goto loc_822A9DE4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822a9d40
	if (ctx.cr6.eq) goto loc_822A9D40;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-6904
	ctx.r9.s64 = ctx.r10.s64 + -6904;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r6,r8,14816
	ctx.r6.s64 = ctx.r8.s64 + 14816;
	// addi r3,r7,24680
	ctx.r3.s64 = ctx.r7.s64 + 24680;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A9D38;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A9D3C;
	sub_822AD350(ctx, base);
	// b 0x822a9f38
	goto loc_822A9F38;
loc_822A9D40:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a9dc0
	if (!ctx.cr6.eq) goto loc_822A9DC0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bge cr6,0x822a9dac
	if (!ctx.cr6.lt) goto loc_822A9DAC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822a9f38
	if (!ctx.cr6.eq) goto loc_822A9F38;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lhz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a9da0
	if (ctx.cr6.eq) goto loc_822A9DA0;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// b 0x822a9f38
	goto loc_822A9F38;
loc_822A9DA0:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8229e118
	ctx.lr = 0x822A9DA8;
	sub_8229E118(ctx, base);
	// b 0x822a9f38
	goto loc_822A9F38;
loc_822A9DAC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24648
	ctx.r3.s64 = ctx.r11.s64 + 24648;
	// bl 0x822e84f0
	ctx.lr = 0x822A9DB8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A9DBC;
	sub_822AD350(ctx, base);
	// b 0x822a9f38
	goto loc_822A9F38;
loc_822A9DC0:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,24620
	ctx.r3.s64 = ctx.r7.s64 + 24620;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A9DDC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A9DE0;
	sub_822AD350(ctx, base);
	// b 0x822a9f38
	goto loc_822A9F38;
loc_822A9DE4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822a9e80
	if (!ctx.cr6.eq) goto loc_822A9E80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822a9e6c
	if (ctx.cr6.lt) goto loc_822A9E6C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x822A9E04;
	sub_822A13A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822A9E08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a9e08
	if (!ctx.cr6.eq) goto loc_822A9E08;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822a9e6c
	if (!ctx.cr6.lt) goto loc_822A9E6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// lbzx r9,r4,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x822a19a8
	ctx.lr = 0x822A9E5C;
	sub_822A19A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2468
	ctx.lr = 0x822A9E68;
	sub_822A2468(ctx, base);
	// b 0x822a9f38
	goto loc_822A9F38;
loc_822A9E6C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24588
	ctx.r3.s64 = ctx.r11.s64 + 24588;
	// bl 0x822e84f0
	ctx.lr = 0x822A9E78;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A9E7C;
	sub_822AD350(ctx, base);
	// b 0x822a9f38
	goto loc_822A9F38;
loc_822A9E80:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,24560
	ctx.r3.s64 = ctx.r7.s64 + 24560;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A9E9C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A9EA0;
	sub_822AD350(ctx, base);
	// b 0x822a9f38
	goto loc_822A9F38;
loc_822A9EA4:
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x822a9f00
	if (ctx.cr6.eq) goto loc_822A9F00;
	// lis r9,-31862
	ctx.r9.s64 = -2088108032;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,-6904
	ctx.r8.s64 = ctx.r9.s64 + -6904;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r7,14816
	ctx.r5.s64 = ctx.r7.s64 + 14816;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// addi r3,r4,24540
	ctx.r3.s64 = ctx.r4.s64 + 24540;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822A9EF8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822A9EFC;
	sub_822AD350(ctx, base);
	// b 0x822a9f38
	goto loc_822A9F38;
loc_822A9F00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a4080
	ctx.lr = 0x822A9F08;
	sub_822A4080(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addis r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 65536;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a70a0
	ctx.lr = 0x822A9F2C;
	sub_822A70A0(ctx, base);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a90e8
	ctx.lr = 0x822A9F38;
	sub_822A90E8(ctx, base);
loc_822A9F38:
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

PPC_WEAK_FUNC(sub_822A9CD0) {
	__imp__sub_822A9CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822A9F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822A9F58;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r23,r11,-6904
	ctx.r23.s64 = ctx.r11.s64 + -6904;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// bne cr6,0x822aa0dc
	if (!ctx.cr6.eq) goto loc_822AA0DC;
	// lwz r28,76(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lis r6,20971
	ctx.r6.s64 = 1374355456;
	// lwz r27,80(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 80);
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r5,r6,60923
	ctx.r5.u64 = ctx.r6.u64 | 60923;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,14744
	ctx.r8.s64 = ctx.r9.s64 + 14744;
	// addis r7,r27,-128
	ctx.r7.s64 = ctx.r27.s64 + -8388608;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// clrlwi r4,r7,8
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFFFF;
	// rlwinm r30,r3,24,8,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// ori r3,r10,51199
	ctx.r3.u64 = ctx.r10.u64 | 51199;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ori r25,r10,36866
	ctx.r25.u64 = ctx.r10.u64 | 36866;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r4,101
	ctx.r9.s64 = ctx.r4.s64 * 101;
	// lhzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mulhwu r8,r11,r5
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// ori r24,r7,51201
	ctx.r24.u64 = ctx.r7.u64 | 51201;
	// rlwinm r7,r8,18,14,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// mullw r6,r7,r3
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// mullw r29,r9,r24
	ctx.r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a2b20
	ctx.lr = 0x822A9FFC;
	sub_822A2B20(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// add r5,r3,r29
	ctx.r5.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// rlwinm r3,r5,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r3,r4
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aa0b4
	if (ctx.cr6.eq) goto loc_822AA0B4;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r4,6(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 6);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822ad650
	ctx.lr = 0x822AA038;
	sub_822AD650(ctx, base);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// beq cr6,0x822aa0ac
	if (ctx.cr6.eq) goto loc_822AA0AC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822aa094
	if (!ctx.cr6.eq) goto loc_822AA094;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822aa094
	if (!ctx.cr6.eq) goto loc_822AA094;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82293dd0
	ctx.lr = 0x822AA074;
	sub_82293DD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// addi r3,r10,24824
	ctx.r3.s64 = ctx.r10.s64 + 24824;
	// bl 0x822ad350
	ctx.lr = 0x822AA088;
	sub_822AD350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822AA094:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82293dd0
	ctx.lr = 0x822AA09C;
	sub_82293DD0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x822aa13c
	goto loc_822AA13C;
loc_822AA0AC:
	// lwz r27,80(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 80);
	// lwz r28,76(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
loc_822AA0B4:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r30,r10,r25
	ctx.r30.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bl 0x822a67b8
	ctx.lr = 0x822AA0CC;
	sub_822A67B8(ctx, base);
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x822aa0f8
	goto loc_822AA0F8;
loc_822AA0DC:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822aa138
	if (!ctx.cr6.eq) goto loc_822AA138;
loc_822AA0F8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x822a2df0
	ctx.lr = 0x822AA108;
	sub_822A2DF0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,119
	ctx.r8.s64 = 119;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822AA138:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_822AA13C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822aa1b8
	if (ctx.cr6.eq) goto loc_822AA1B8;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r10.u32);
	// beq cr6,0x822aa1a0
	if (ctx.cr6.eq) goto loc_822AA1A0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822aa188
	if (ctx.cr6.eq) goto loc_822AA188;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,24540
	ctx.r3.s64 = ctx.r7.s64 + 24540;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AA178;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822AA17C;
	sub_822AD350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822AA188:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24772
	ctx.r3.s64 = ctx.r11.s64 + 24772;
	// bl 0x822ad350
	ctx.lr = 0x822AA194;
	sub_822AD350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822AA1A0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24720
	ctx.r3.s64 = ctx.r11.s64 + 24720;
	// bl 0x822ad350
	ctx.lr = 0x822AA1AC;
	sub_822AD350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822AA1B8:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x822aa208
	if (ctx.cr6.eq) goto loc_822AA208;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// stw r10,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r10.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,14816
	ctx.r7.s64 = ctx.r9.s64 + 14816;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,24540
	ctx.r3.s64 = ctx.r6.s64 + 24540;
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AA1F8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822AA1FC;
	sub_822AD350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822AA208:
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aa238
	if (ctx.cr6.eq) goto loc_822AA238;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822AA220;
	sub_822A90E8(ctx, base);
	// bl 0x822a3148
	ctx.lr = 0x822AA224;
	sub_822A3148(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a6d20
	ctx.lr = 0x822AA234;
	sub_822A6D20(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_822AA238:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822A9F50) {
	__imp__sub_822A9F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AA244) {
	__imp__sub_822AA244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822AA250;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lis r26,128
	ctx.r26.s64 = 8388608;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r27,r11,-6904
	ctx.r27.s64 = ctx.r11.s64 + -6904;
	// bne cr6,0x822aa3ac
	if (!ctx.cr6.eq) goto loc_822AA3AC;
	// lis r9,-31896
	ctx.r9.s64 = -2090336256;
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// addi r31,r9,-7040
	ctx.r31.s64 = ctx.r9.s64 + -7040;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lis r5,20971
	ctx.r5.s64 = 1374355456;
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r8,14744
	ctx.r6.s64 = ctx.r8.s64 + 14744;
	// ori r8,r5,60923
	ctx.r8.u64 = ctx.r5.u64 | 60923;
	// subf r7,r26,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r26.s64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// clrlwi r4,r7,8
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFFFF;
	// lis r7,0
	ctx.r7.s64 = 0;
	// rlwinm r30,r3,24,8,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// ori r3,r7,51199
	ctx.r3.u64 = ctx.r7.u64 | 51199;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r7,r10,51201
	ctx.r7.u64 = ctx.r10.u64 | 51201;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mulli r9,r4,101
	ctx.r9.s64 = ctx.r4.s64 * 101;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r6,r10,31
	ctx.r6.u64 = ctx.r10.u32 & 0x1;
	// mulhwu r5,r11,r8
	ctx.r5.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r10,r5,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0x3FFFF;
	// mullw r29,r6,r7
	ctx.r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r10,r3
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a2b20
	ctx.lr = 0x822AA2F8;
	sub_822A2B20(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// add r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aa3a4
	if (ctx.cr6.eq) goto loc_822AA3A4;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r4,6(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822ad650
	ctx.lr = 0x822AA334;
	sub_822AD650(ctx, base);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// beq cr6,0x822aa3a4
	if (ctx.cr6.eq) goto loc_822AA3A4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822aa38c
	if (!ctx.cr6.eq) goto loc_822AA38C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822aa38c
	if (!ctx.cr6.eq) goto loc_822AA38C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82293dd0
	ctx.lr = 0x822AA370;
	sub_82293DD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// addi r3,r10,24824
	ctx.r3.s64 = ctx.r10.s64 + 24824;
	// bl 0x822ad350
	ctx.lr = 0x822AA384;
	sub_822AD350(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822AA38C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82293dd0
	ctx.lr = 0x822AA394;
	sub_82293DD0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x822aa3cc
	goto loc_822AA3CC;
loc_822AA3A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822aa3d4
	goto loc_822AA3D4;
loc_822AA3AC:
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
loc_822AA3CC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822aa404
	if (ctx.cr6.eq) goto loc_822AA404;
loc_822AA3D4:
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// stw r10,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,14816
	ctx.r7.s64 = ctx.r9.s64 + 14816;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,24540
	ctx.r3.s64 = ctx.r6.s64 + 24540;
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AA3F8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822AA3FC;
	sub_822AD350(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822AA404:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bne cr6,0x822aa3d4
	if (!ctx.cr6.eq) goto loc_822AA3D4;
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aa450
	if (ctx.cr6.eq) goto loc_822AA450;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822AA438;
	sub_822A90E8(ctx, base);
	// bl 0x822a3148
	ctx.lr = 0x822AA43C;
	sub_822A3148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a6d20
	ctx.lr = 0x822AA44C;
	sub_822A6D20(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_822AA450:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822aa4a8
	if (!ctx.cr6.eq) goto loc_822AA4A8;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r11,254
	ctx.r11.s64 = 16646144;
	// addis r9,r4,126
	ctx.r9.s64 = ctx.r4.s64 + 8257536;
	// ori r10,r11,28671
	ctx.r10.u64 = ctx.r11.u64 | 28671;
	// addi r9,r9,28672
	ctx.r9.s64 = ctx.r9.s64 + 28672;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822aa490
	if (ctx.cr6.gt) goto loc_822AA490;
	// subf r11,r26,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r26.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,8
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFFFF;
	// bl 0x822a6c70
	ctx.lr = 0x822AA488;
	sub_822A6C70(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822AA490:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,23912
	ctx.r3.s64 = ctx.r11.s64 + 23912;
	// bl 0x822e84f0
	ctx.lr = 0x822AA49C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822AA4A0;
	sub_822AD350(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822AA4A8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822aa4cc
	if (!ctx.cr6.eq) goto loc_822AA4CC;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x822a2468
	ctx.lr = 0x822AA4B8;
	sub_822A2468(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x822a6c70
	ctx.lr = 0x822AA4C4;
	sub_822A6C70(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822AA4CC:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,14816
	ctx.r8.s64 = ctx.r10.s64 + 14816;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,23884
	ctx.r3.s64 = ctx.r7.s64 + 23884;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822AA4E8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822AA4EC;
	sub_822AD350(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AA248) {
	__imp__sub_822AA248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AA4F4) {
	__imp__sub_822AA4F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA4F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x822a90e8
	sub_822A90E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AA4F8) {
	__imp__sub_822AA4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AA4FC) {
	__imp__sub_822AA4FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA500) {
	PPC_FUNC_PROLOGUE();
	// b 0x822a90e8
	sub_822A90E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AA500) {
	__imp__sub_822AA500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AA504) {
	__imp__sub_822AA504(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA508) {
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
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822aa53c
	if (ctx.cr6.eq) goto loc_822AA53C;
	// bl 0x822a5e18
	ctx.lr = 0x822AA53C;
	sub_822A5E18(ctx, base);
loc_822AA53C:
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// bl 0x822a90e8
	ctx.lr = 0x822AA544;
	sub_822A90E8(ctx, base);
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

PPC_WEAK_FUNC(sub_822AA508) {
	__imp__sub_822AA508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822AA560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r30,r3,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aa588
	if (ctx.cr6.eq) goto loc_822AA588;
	// bl 0x822a5e18
	ctx.lr = 0x822AA588;
	sub_822A5E18(ctx, base);
loc_822AA588:
	// lhz r3,6(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// bl 0x822a90e8
	ctx.lr = 0x822AA590;
	sub_822A90E8(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r8,r31,22
	ctx.r8.s64 = ctx.r31.s64 + 22;
	// addi r7,r11,-6904
	ctx.r7.s64 = ctx.r11.s64 + -6904;
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r11,r30,r8
	PPC_STORE_U16(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u16);
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sthx r5,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AA558) {
	__imp__sub_822AA558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA5C0) {
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
	// lis r10,-31896
	ctx.r10.s64 = -2090336256;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,-7040
	ctx.r10.s64 = ctx.r10.s64 + -7040;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// bl 0x822a90e8
	ctx.lr = 0x822AA5EC;
	sub_822A90E8(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwimi r8,r9,3,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 3) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_822AA5C0) {
	__imp__sub_822AA5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822AA618;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r8,r10,60923
	ctx.r8.u64 = ctx.r10.u64 | 60923;
	// lis r9,0
	ctx.r9.s64 = 0;
	// clrlwi r5,r3,31
	ctx.r5.u64 = ctx.r3.u32 & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulhwu r6,r11,r8
	ctx.r6.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// ori r3,r9,51201
	ctx.r3.u64 = ctx.r9.u64 | 51201;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mullw r29,r5,r3
	ctx.r29.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// rlwinm r10,r6,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FFFF;
	// ori r9,r7,51199
	ctx.r9.u64 = ctx.r7.u64 | 51199;
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r30,r30,-28670
	ctx.r30.s64 = ctx.r30.s64 + -28670;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2b20
	ctx.lr = 0x822AA66C;
	sub_822A2B20(ctx, base);
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// add r7,r3,r29
	ctx.r7.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r11,r11,-7040
	ctx.r11.s64 = ctx.r11.s64 + -7040;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 589824;
	// addi r5,r10,32
	ctx.r5.s64 = ctx.r10.s64 + 32;
	// lhzx r10,r6,r5
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822aa6a4
	if (ctx.cr6.eq) goto loc_822AA6A4;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a70a0
	ctx.lr = 0x822AA69C;
	sub_822A70A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822AA6A4:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r7,22
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 22, ctx.xer);
	// beq cr6,0x822aa6d0
	if (ctx.cr6.eq) goto loc_822AA6D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822AA6D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a9308
	ctx.lr = 0x822AA6D8;
	sub_822A9308(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AA610) {
	__imp__sub_822AA610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x822AA6E8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31896
	ctx.r11.s64 = -2090336256;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r11,-7040
	ctx.r31.s64 = ctx.r11.s64 + -7040;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// add r17,r10,r11
	ctx.r17.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,14(r17)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r17.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aa714
	if (ctx.cr6.eq) goto loc_822AA714;
	// bl 0x822a5e18
	ctx.lr = 0x822AA714;
	sub_822A5E18(ctx, base);
loc_822AA714:
	// lhz r3,6(r17)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r17.u32 + 6);
	// bl 0x822a90e8
	ctx.lr = 0x822AA71C;
	sub_822A90E8(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r21,1
	ctx.r21.s64 = 65536;
	// addi r19,r11,-6904
	ctx.r19.s64 = ctx.r11.s64 + -6904;
	// add r4,r18,r21
	ctx.r4.u64 = ctx.r18.u64 + ctx.r21.u64;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// ori r26,r10,60923
	ctx.r26.u64 = ctx.r10.u64 | 60923;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r27,r9,51199
	ctx.r27.u64 = ctx.r9.u64 | 51199;
	// ori r28,r8,51201
	ctx.r28.u64 = ctx.r8.u64 | 51201;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r22,24(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// ori r29,r7,36866
	ctx.r29.u64 = ctx.r7.u64 | 36866;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// clrlwi r6,r22,31
	ctx.r6.u64 = ctx.r22.u32 & 0x1;
	// mulhwu r5,r11,r26
	ctx.r5.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r26.u32)) >> 32;
	// rlwinm r3,r5,18,14,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0x3FFFF;
	// mullw r30,r6,r28
	ctx.r30.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// mullw r10,r3,r27
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r27.s32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a2b20
	ctx.lr = 0x822AA77C;
	sub_822A2B20(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r20,3
	ctx.r20.s64 = 3;
	// lhzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aa888
	if (ctx.cr6.eq) goto loc_822AA888;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r23,r31,30
	ctx.r23.s64 = ctx.r31.s64 + 30;
	// lwzx r29,r9,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r24,r29,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r6,r29,31
	ctx.r6.u64 = ctx.r29.u32 & 0x1;
	// mullw r28,r6,r28
	ctx.r28.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// lhzx r11,r24,r23
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + ctx.r23.u32);
	// add r25,r28,r7
	ctx.r25.u64 = ctx.r28.u64 + ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aa87c
	if (ctx.cr6.eq) goto loc_822AA87C;
loc_822AA7D4:
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r22,r8,24,16,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// add r4,r22,r21
	ctx.r4.u64 = ctx.r22.u64 + ctx.r21.u64;
	// mulli r11,r4,101
	ctx.r11.s64 = ctx.r4.s64 * 101;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mulhwu r7,r11,r26
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r26.u32)) >> 32;
	// rlwinm r6,r7,18,14,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x3FFFF;
	// mullw r5,r6,r27
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r27.s32);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a2b20
	ctx.lr = 0x822AA810;
	sub_822A2B20(ctx, base);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lhzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x822ab480
	ctx.lr = 0x822AA840;
	sub_822AB480(ctx, base);
	// rlwinm r11,r22,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,6(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// bl 0x822a90e8
	ctx.lr = 0x822AA854;
	sub_822A90E8(ctx, base);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwimi r6,r20,3,27,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r20.u32, 3) & 0x1F) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// bl 0x822a6bb0
	ctx.lr = 0x822AA86C;
	sub_822A6BB0(ctx, base);
	// lhzx r11,r24,r23
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822aa7d4
	if (!ctx.cr6.eq) goto loc_822AA7D4;
	// lwz r22,24(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
loc_822AA87C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a6bb0
	ctx.lr = 0x822AA888;
	sub_822A6BB0(ctx, base);
loc_822AA888:
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// rlwimi r11,r20,3,27,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 3) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AA6E0) {
	__imp__sub_822AA6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AA89C) {
	__imp__sub_822AA89C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r10,-31860
	ctx.r10.s64 = -2087976960;
	// addi r8,r11,-6904
	ctx.r8.s64 = ctx.r11.s64 + -6904;
	// addi r7,r10,9592
	ctx.r7.s64 = ctx.r10.s64 + 9592;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822AA8A0) {
	__imp__sub_822AA8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AA8CC) {
	__imp__sub_822AA8CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822AA8D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31859
	ctx.r8.s64 = -2087911424;
	// lis r7,-31860
	ctx.r7.s64 = -2087976960;
	// addi r31,r8,-3336
	ctx.r31.s64 = ctx.r8.s64 + -3336;
	// addi r30,r7,9592
	ctx.r30.s64 = ctx.r7.s64 + 9592;
	// addi r11,r31,17176
	ctx.r11.s64 = ctx.r31.s64 + 17176;
	// addi r10,r31,800
	ctx.r10.s64 = ctx.r31.s64 + 800;
	// lis r6,-31862
	ctx.r6.s64 = -2088108032;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// addi r29,r6,-6904
	ctx.r29.s64 = ctx.r6.s64 + -6904;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,-3336(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3336, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stb r9,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r9.u8);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// stb r10,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r10.u8);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x822a2f58
	ctx.lr = 0x822AA950;
	sub_822A2F58(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r3.u32);
	// stw r9,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r9.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r10,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// addi r6,r5,24880
	ctx.r6.s64 = ctx.r5.s64 + 24880;
	// stw r10,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r10.u32);
	// addi r3,r4,24860
	ctx.r3.s64 = ctx.r4.s64 + 24860;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r9.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x822e15d0
	ctx.lr = 0x822AA9A8;
	sub_822E15D0(ctx, base);
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// stw r3,17816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17816, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AA8D0) {
	__imp__sub_822AA8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AA9B8) {
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
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822aa9f0
	if (ctx.cr6.eq) goto loc_822AA9F0;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// bl 0x822a61a8
	ctx.lr = 0x822AA9E8;
	sub_822A61A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_822AA9F0:
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

PPC_WEAK_FUNC(sub_822AA9B8) {
	__imp__sub_822AA9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AAA04) {
	__imp__sub_822AAA04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAA08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6904
	ctx.r9.s64 = ctx.r10.s64 + -6904;
	// stb r11,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822AAA08) {
	__imp__sub_822AAA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AAA1C) {
	__imp__sub_822AAA1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAA20) {
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
	// bl 0x822a2a60
	ctx.lr = 0x822AAA30;
	sub_822A2A60(ctx, base);
	// bl 0x822aa8d0
	ctx.lr = 0x822AAA34;
	sub_822AA8D0(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r8,r11,12184
	ctx.r8.s64 = ctx.r11.s64 + 12184;
	// ori r7,r10,44
	ctx.r7.u64 = ctx.r10.u64 | 44;
	// lis r6,-31918
	ctx.r6.s64 = -2091778048;
	// lis r4,-31862
	ctx.r4.s64 = -2088108032;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r6,11128
	ctx.r5.s64 = ctx.r6.s64 + 11128;
	// addi r3,r4,-6904
	ctx.r3.s64 = ctx.r4.s64 + -6904;
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,11128(r6)
	PPC_STORE_U32(ctx.r6.u32 + 11128, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// stb r10,1048(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1048, ctx.r10.u8);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822AAA20) {
	__imp__sub_822AAA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AAA9C) {
	__imp__sub_822AAA9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// lis r9,-31859
	ctx.r9.s64 = -2087911424;
	// subfe r11,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r8,r10,-6904
	ctx.r8.s64 = ctx.r10.s64 + -6904;
	// addic r7,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// addi r6,r9,-3336
	ctx.r6.s64 = ctx.r9.s64 + -3336;
	// subfe r10,r7,r5
	temp.u8 = (~ctx.r7.u32 + ctx.r5.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r11.u8);
	// stb r10,21(r6)
	PPC_STORE_U8(ctx.r6.u32 + 21, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822AAAA0) {
	__imp__sub_822AAAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AAACC) {
	__imp__sub_822AAACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAAD0) {
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
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aab20
	if (ctx.cr6.eq) goto loc_822AAB20;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822aab1c
	if (ctx.cr6.eq) goto loc_822AAB1C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// bl 0x822a61a8
	ctx.lr = 0x822AAB14;
	sub_822A61A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_822AAB1C:
	// bl 0x822a9098
	ctx.lr = 0x822AAB20;
	sub_822A9098(ctx, base);
loc_822AAB20:
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

PPC_WEAK_FUNC(sub_822AAAD0) {
	__imp__sub_822AAAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AAB34) {
	__imp__sub_822AAB34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// addi r10,r11,9592
	ctx.r10.s64 = ctx.r11.s64 + 9592;
	// stw r3,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822AAB38) {
	__imp__sub_822AAB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// lbz r11,7(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822aabb8
	if (!ctx.cr6.eq) goto loc_822AABB8;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r8,r11,12184
	ctx.r8.s64 = ctx.r11.s64 + 12184;
	// ori r7,r10,44
	ctx.r7.u64 = ctx.r10.u64 | 44;
	// lbzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822aabb8
	if (!ctx.cr6.eq) goto loc_822AABB8;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822aab98
	if (!ctx.cr6.eq) goto loc_822AAB98;
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aabcc
	if (ctx.cr6.eq) goto loc_822AABCC;
loc_822AAB98:
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// lis r10,-31860
	ctx.r10.s64 = -2087976960;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r10,r10,17840
	ctx.r10.s64 = ctx.r10.s64 + 17840;
	// lwz r11,17812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17812);
	// mulli r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 * 1344;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823e08c0
	sub_823E08C0(ctx, base);
	return;
loc_822AABB8:
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r10,r11,-3336
	ctx.r10.s64 = ctx.r11.s64 + -3336;
	// lbz r8,22(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822AABCC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r11,-29844
	ctx.r3.s64 = ctx.r11.s64 + -29844;
	// b 0x8230d720
	sub_8230D720(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AAB48) {
	__imp__sub_822AAB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AABDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822AABDC) {
	__imp__sub_822AABDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AABE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822AABE0) {
	__imp__sub_822AABE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AABE8) {
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
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aac38
	if (ctx.cr6.eq) goto loc_822AAC38;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822AAC10:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822a34b8
	ctx.lr = 0x822AAC1C;
	sub_822A34B8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x822aac10
	if (!ctx.cr0.eq) goto loc_822AAC10;
loc_822AAC38:
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

PPC_WEAK_FUNC(sub_822AABE8) {
	__imp__sub_822AABE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AAC4C) {
	__imp__sub_822AAC4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAC50) {
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
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r3,0
	ctx.r3.s64 = 0;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x822a3910
	ctx.lr = 0x822AAC78;
	sub_822A3910(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// bl 0x822a3bb0
	ctx.lr = 0x822AAC88;
	sub_822A3BB0(ctx, base);
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

PPC_WEAK_FUNC(sub_822AAC50) {
	__imp__sub_822AAC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AAC9C) {
	__imp__sub_822AAC9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AACA0) {
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
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r3,0
	ctx.r3.s64 = 0;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// ori r3,r3,36866
	ctx.r3.u64 = ctx.r3.u64 | 36866;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x822a3910
	ctx.lr = 0x822AACC8;
	sub_822A3910(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
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

PPC_WEAK_FUNC(sub_822AACA0) {
	__imp__sub_822AACA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AACE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x822aad1c
	if (!ctx.cr6.gt) goto loc_822AAD1C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r10,-31859
	ctx.r10.s64 = -2087911424;
	// addi r8,r10,15008
	ctx.r8.s64 = ctx.r10.s64 + 15008;
	// lwz r3,-24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822aad1c
	if (ctx.cr6.eq) goto loc_822AAD1C;
	// lwz r11,-20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_822AAD1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822AACE0) {
	__imp__sub_822AACE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AAD24) {
	__imp__sub_822AAD24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AAD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822AAD30;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r26,r11,-3336
	ctx.r26.s64 = ctx.r11.s64 + -3336;
	// stw r25,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r25.u32);
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// addi r27,r11,9592
	ctx.r27.s64 = ctx.r11.s64 + 9592;
	// addi r29,r10,-6904
	ctx.r29.s64 = ctx.r10.s64 + -6904;
loc_822AAD74:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// bne cr6,0x822aae40
	if (!ctx.cr6.eq) goto loc_822AAE40;
	// addi r11,r5,-85
	ctx.r11.s64 = ctx.r5.s64 + -85;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x822aae40
	if (ctx.cr6.gt) goto loc_822AAE40;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-21084
	ctx.r12.s64 = ctx.r12.s64 + -21084;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822AADE4;
	case 1:
		goto loc_822AADE4;
	case 2:
		goto loc_822AAE28;
	case 3:
		goto loc_822AADD8;
	case 4:
		goto loc_822AAE1C;
	case 5:
		goto loc_822AADE4;
	case 6:
		goto loc_822AADE4;
	case 7:
		goto loc_822AAE28;
	case 8:
		goto loc_822AAE28;
	case 9:
		goto loc_822AADD8;
	case 10:
		goto loc_822AADD8;
	case 11:
		goto loc_822AAE1C;
	case 12:
		goto loc_822AAE1C;
	default:
		return;
	}
	// lwz r17,-21020(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21020);
	// lwz r17,-21020(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21020);
	// lwz r17,-20952(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20952);
	// lwz r17,-21032(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21032);
	// lwz r17,-20964(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20964);
	// lwz r17,-21020(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21020);
	// lwz r17,-21020(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21020);
	// lwz r17,-20952(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20952);
	// lwz r17,-20952(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20952);
	// lwz r17,-21032(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21032);
	// lwz r17,-21032(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21032);
	// lwz r17,-20964(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20964);
	// lwz r17,-20964(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20964);
loc_822AADD8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822aae40
	if (!ctx.cr6.eq) goto loc_822AAE40;
loc_822AADE4:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x822aae40
	if (!ctx.cr6.lt) goto loc_822AAE40;
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822AAE1C:
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822aae40
	if (!ctx.cr6.eq) goto loc_822AAE40;
loc_822AAE28:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822aae40
	if (!ctx.cr6.eq) goto loc_822AAE40;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x822ab21c
	if (ctx.cr6.lt) goto loc_822AB21C;
loc_822AAE40:
	// cmplwi cr6,r5,138
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 138, ctx.xer);
	// bgt cr6,0x822ab1e8
	if (ctx.cr6.gt) goto loc_822AB1E8;
	// lis r12,-32213
	ctx.r12.s64 = -2111111168;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-20896
	ctx.r12.s64 = ctx.r12.s64 + -20896;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_822AB22C;
	case 1:
		goto loc_822AB22C;
	case 2:
		goto loc_822AB1E8;
	case 3:
		goto loc_822AB1E8;
	case 4:
		goto loc_822AB1C4;
	case 5:
		goto loc_822AB1C4;
	case 6:
		goto loc_822AB144;
	case 7:
		goto loc_822AB144;
	case 8:
		goto loc_822AB180;
	case 9:
		goto loc_822AB144;
	case 10:
		goto loc_822AB144;
	case 11:
		goto loc_822AB1CC;
	case 12:
		goto loc_822AB144;
	case 13:
		goto loc_822AB144;
	case 14:
		goto loc_822AB1DC;
	case 15:
		goto loc_822AB1E8;
	case 16:
		goto loc_822AB1E8;
	case 17:
		goto loc_822AB1E8;
	case 18:
		goto loc_822AB1E8;
	case 19:
		goto loc_822AB1E8;
	case 20:
		goto loc_822AB1E8;
	case 21:
		goto loc_822AB1E8;
	case 22:
		goto loc_822AB180;
	case 23:
		goto loc_822AB1E8;
	case 24:
		goto loc_822AB180;
	case 25:
		goto loc_822AB144;
	case 26:
		goto loc_822AB1C4;
	case 27:
		goto loc_822AB1E8;
	case 28:
		goto loc_822AB1E8;
	case 29:
		goto loc_822AB1E8;
	case 30:
		goto loc_822AB1E8;
	case 31:
		goto loc_822AB1E8;
	case 32:
		goto loc_822AB1E8;
	case 33:
		goto loc_822AB1C4;
	case 34:
		goto loc_822AB1C4;
	case 35:
		goto loc_822AB1E8;
	case 36:
		goto loc_822AB1E8;
	case 37:
		goto loc_822AB144;
	case 38:
		goto loc_822AB1C4;
	case 39:
		goto loc_822AB1E8;
	case 40:
		goto loc_822AB1E8;
	case 41:
		goto loc_822AB1E8;
	case 42:
		goto loc_822AB1E8;
	case 43:
		goto loc_822AB144;
	case 44:
		goto loc_822AB144;
	case 45:
		goto loc_822AB144;
	case 46:
		goto loc_822AB144;
	case 47:
		goto loc_822AB144;
	case 48:
		goto loc_822AB144;
	case 49:
		goto loc_822AB144;
	case 50:
		goto loc_822AB144;
	case 51:
		goto loc_822AB144;
	case 52:
		goto loc_822AB144;
	case 53:
		goto loc_822AB1E8;
	case 54:
		goto loc_822AB1C4;
	case 55:
		goto loc_822AB1C4;
	case 56:
		goto loc_822AB1E8;
	case 57:
		goto loc_822AB1E8;
	case 58:
		goto loc_822AB1E8;
	case 59:
		goto loc_822AB1E8;
	case 60:
		goto loc_822AB1C4;
	case 61:
		goto loc_822AB144;
	case 62:
		goto loc_822AB1E8;
	case 63:
		goto loc_822AB144;
	case 64:
		goto loc_822AB144;
	case 65:
		goto loc_822AB1E8;
	case 66:
		goto loc_822AB144;
	case 67:
		goto loc_822AB1C4;
	case 68:
		goto loc_822AB144;
	case 69:
		goto loc_822AB144;
	case 70:
		goto loc_822AB144;
	case 71:
		goto loc_822AB144;
	case 72:
		goto loc_822AB144;
	case 73:
		goto loc_822AB144;
	case 74:
		goto loc_822AB160;
	case 75:
		goto loc_822AB144;
	case 76:
		goto loc_822AB144;
	case 77:
		goto loc_822AB144;
	case 78:
		goto loc_822AB144;
	case 79:
		goto loc_822AB144;
	case 80:
		goto loc_822AB144;
	case 81:
		goto loc_822AB160;
	case 82:
		goto loc_822AB1E8;
	case 83:
		goto loc_822AB1E8;
	case 84:
		goto loc_822AB1E8;
	case 85:
		goto loc_822AB180;
	case 86:
		goto loc_822AB180;
	case 87:
		goto loc_822AB1E8;
	case 88:
		goto loc_822AB180;
	case 89:
		goto loc_822AB1E8;
	case 90:
		goto loc_822AB1A4;
	case 91:
		goto loc_822AB1A4;
	case 92:
		goto loc_822AB1C4;
	case 93:
		goto loc_822AB1C4;
	case 94:
		goto loc_822AB1A4;
	case 95:
		goto loc_822AB1A4;
	case 96:
		goto loc_822AB1C4;
	case 97:
		goto loc_822AB1C4;
	case 98:
		goto loc_822AB1C4;
	case 99:
		goto loc_822AB1C4;
	case 100:
		goto loc_822AB1E8;
	case 101:
		goto loc_822AB1E8;
	case 102:
		goto loc_822AB1C4;
	case 103:
		goto loc_822AB1E8;
	case 104:
		goto loc_822AB1E8;
	case 105:
		goto loc_822AB1E8;
	case 106:
		goto loc_822AB08C;
	case 107:
		goto loc_822AB0E4;
	case 108:
		goto loc_822AB08C;
	case 109:
		goto loc_822AB0E4;
	case 110:
		goto loc_822AB27C;
	case 111:
		goto loc_822AB2AC;
	case 112:
		goto loc_822AB1E8;
	case 113:
		goto loc_822AB1E8;
	case 114:
		goto loc_822AB1E8;
	case 115:
		goto loc_822AB1E8;
	case 116:
		goto loc_822AB1E8;
	case 117:
		goto loc_822AB1E8;
	case 118:
		goto loc_822AB1E8;
	case 119:
		goto loc_822AB1E8;
	case 120:
		goto loc_822AB1E8;
	case 121:
		goto loc_822AB1E8;
	case 122:
		goto loc_822AB1E8;
	case 123:
		goto loc_822AB1E8;
	case 124:
		goto loc_822AB1E8;
	case 125:
		goto loc_822AB1E8;
	case 126:
		goto loc_822AB1E8;
	case 127:
		goto loc_822AB1E8;
	case 128:
		goto loc_822AB1E8;
	case 129:
		goto loc_822AB1E8;
	case 130:
		goto loc_822AB1E8;
	case 131:
		goto loc_822AB13C;
	case 132:
		goto loc_822AB1E8;
	case 133:
		goto loc_822AB1E8;
	case 134:
		goto loc_822AB1E8;
	case 135:
		goto loc_822AB1E8;
	case 136:
		goto loc_822AB1E8;
	case 137:
		goto loc_822AB2D0;
	case 138:
		goto loc_822AB3D0;
	default:
		return;
	}
	// lwz r17,-19924(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19924);
	// lwz r17,-19924(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19924);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20096(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20096);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20020(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20020);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20004(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20004);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20096(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20096);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20096(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20096);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20128(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20128);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20156(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20156);
	// lwz r17,-20128(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20128);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20096(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20096);
	// lwz r17,-20096(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20096);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20096(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20096);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20060(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20060);
	// lwz r17,-20060(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20060);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-20060(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20060);
	// lwz r17,-20060(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20060);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20028(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20028);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20340(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20340);
	// lwz r17,-20252(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20252);
	// lwz r17,-20340(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20340);
	// lwz r17,-20252(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20252);
	// lwz r17,-19844(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19844);
	// lwz r17,-19796(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19796);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-20164(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20164);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19992(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19992);
	// lwz r17,-19760(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19760);
	// lwz r17,-19504(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19504);
loc_822AB08C:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// xor r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r31.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhzux r30,r31,r7
	ea = ctx.r31.u32 + ctx.r7.u32;
	ctx.r30.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bl 0x822a3458
	ctx.lr = 0x822AB0B8;
	sub_822A3458(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a7200
	ctx.lr = 0x822AB0C0;
	sub_822A7200(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ab1e8
	if (!ctx.cr6.eq) goto loc_822AB1E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ab210
	if (!ctx.cr6.eq) goto loc_822AB210;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822AB0E4:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// xor r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r31.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhzux r30,r31,r7
	ea = ctx.r31.u32 + ctx.r7.u32;
	ctx.r30.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822a3458
	ctx.lr = 0x822AB110;
	sub_822A3458(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a7200
	ctx.lr = 0x822AB118;
	sub_822A7200(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ab1e8
	if (!ctx.cr6.eq) goto loc_822AB1E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ab210
	if (ctx.cr6.eq) goto loc_822AB210;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822AB13C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x822ab1e8
	goto loc_822AB1E8;
loc_822AB144:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x822ab1e8
	goto loc_822AB1E8;
loc_822AB160:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x822ab1e8
	goto loc_822AB1E8;
loc_822AB180:
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x822ab1e8
	goto loc_822AB1E8;
loc_822AB1A4:
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_822AB1C4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x822ab1e8
	goto loc_822AB1E8;
loc_822AB1CC:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x822ab1e8
	goto loc_822AB1E8;
loc_822AB1DC:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_822AB1E8:
	// stw r25,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r25.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r25.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// cmpwi cr6,r5,62
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 62, ctx.xer);
	// beq cr6,0x822aad74
	if (ctx.cr6.eq) goto loc_822AAD74;
loc_822AB210:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822AB214:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822AB21C:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822AB22C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822ab26c
	if (!ctx.cr6.gt) goto loc_822AB26C;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lis r10,-31859
	ctx.r10.s64 = -2087911424;
	// addi r9,r10,15008
	ctx.r9.s64 = ctx.r10.s64 + 15008;
	// lwz r10,-24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822ab26c
	if (ctx.cr6.eq) goto loc_822AB26C;
	// lwz r11,-20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822AB26C:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822AB27C:
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822AB2AC:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// lhzux r7,r31,r8
	ea = ctx.r31.u32 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// subf r11,r7,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r7.s64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822AB2D0:
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r9,r11,0,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// xor r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// srawi r9,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// lhzux r30,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	ctx.r30.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// rlwinm r31,r7,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x822ab35c
	if (ctx.cr6.eq) goto loc_822AB35C;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x822ab34c
	if (!ctx.cr6.eq) goto loc_822AB34C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822a3518
	ctx.lr = 0x822AB330;
	sub_822A3518(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ab34c
	if (ctx.cr6.eq) goto loc_822AB34C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822a3538
	ctx.lr = 0x822AB344;
	sub_822A3538(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x822ab360
	goto loc_822AB360;
loc_822AB34C:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822AB35C:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_822AB360:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822ab210
	if (ctx.cr6.eq) goto loc_822AB210;
loc_822AB368:
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// rlwinm r10,r11,0,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r4,r11,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subfic r11,r4,-4
	ctx.xer.ca = ctx.r4.u32 <= 4294967292;
	ctx.r11.s64 = -4 - ctx.r4.s64;
	// rlwinm r3,r11,0,27,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cntlzw r7,r3
	ctx.r7.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x822ab214
	if (ctx.cr6.eq) goto loc_822AB214;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822ab368
	if (!ctx.cr0.eq) goto loc_822AB368;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ab210
	if (!ctx.cr6.eq) goto loc_822AB210;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822AB3D0:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// lhzux r7,r31,r8
	ea = ctx.r31.u32 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// addi r6,r31,5
	ctx.r6.s64 = ctx.r31.s64 + 5;
	// rotlwi r11,r7,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// rlwinm r10,r6,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AAD28) {
	__imp__sub_822AAD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AB3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AB3FC) {
	__imp__sub_822AB3FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AB400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822AB408;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x822a5f60
	ctx.lr = 0x822AB428;
	sub_822A5F60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822a6bb0
	ctx.lr = 0x822AB434;
	sub_822A6BB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822AB43C;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ab474
	if (!ctx.cr6.eq) goto loc_822AB474;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6a50
	ctx.lr = 0x822AB450;
	sub_822A6A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822AB458;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ab474
	if (!ctx.cr6.eq) goto loc_822AB474;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x822a6bb0
	ctx.lr = 0x822AB474;
	sub_822A6BB0(ctx, base);
loc_822AB474:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AB400) {
	__imp__sub_822AB400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AB47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AB47C) {
	__imp__sub_822AB47C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AB480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822AB488;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x822a36b0
	ctx.lr = 0x822AB4A8;
	sub_822A36B0(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822AB4B8;
	sub_822A3CF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a2cb0
	ctx.lr = 0x822AB4C4;
	sub_822A2CB0(ctx, base);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a3628
	ctx.lr = 0x822AB4D4;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822AB4E0;
	sub_822A3CF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a5f60
	ctx.lr = 0x822AB4EC;
	sub_822A5F60(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822a6bb0
	ctx.lr = 0x822AB4F8;
	sub_822A6BB0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822AB500;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ab530
	if (!ctx.cr6.eq) goto loc_822AB530;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6a50
	ctx.lr = 0x822AB514;
	sub_822A6A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822AB51C;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ab530
	if (!ctx.cr6.eq) goto loc_822AB530;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x822a6bb0
	ctx.lr = 0x822AB530;
	sub_822A6BB0(ctx, base);
loc_822AB530:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AB480) {
	__imp__sub_822AB480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AB538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822AB540;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r28,r11,17820
	ctx.r28.s64 = ctx.r11.s64 + 17820;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r25,12(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r11,r11,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// srawi r29,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 3;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r31,r27,11
	ctx.r31.s64 = ctx.r27.s64 + 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e0e8
	ctx.lr = 0x822AB574;
	sub_8229E0E8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r31.u16);
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// sth r29,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r29.u16);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// addi r6,r10,-6904
	ctx.r6.s64 = ctx.r10.s64 + -6904;
	// lis r10,-31859
	ctx.r10.s64 = -2087911424;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r10,-3336
	ctx.r31.s64 = ctx.r10.s64 + -3336;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// add r10,r27,r3
	ctx.r10.u64 = ctx.r27.u64 + ctx.r3.u64;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// addi r27,r10,11
	ctx.r27.s64 = ctx.r10.s64 + 11;
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822ab640
	if (ctx.cr6.eq) goto loc_822AB640;
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
loc_822AB5D4:
	// lwz r11,-8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8);
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x822ab628
	if (!ctx.cr6.eq) goto loc_822AB628;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwzu r10,-24(r11)
	ea = -24 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a2d58
	ctx.lr = 0x822AB620;
	sub_822A2D58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x822ab630
	goto loc_822AB630;
loc_822AB628:
	// lwz r11,-12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -12);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_822AB630:
	// lwzu r11,-8(r25)
	ea = -8 + ctx.r25.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stbu r11,-1(r27)
	ea = -1 + ctx.r27.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r27.u32 = ea;
	// bne 0x822ab5d4
	if (!ctx.cr0.eq) goto loc_822AB5D4;
loc_822AB640:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x822a32c0
	ctx.lr = 0x822AB660;
	sub_822A32C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AB538) {
	__imp__sub_822AB538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AB670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822AB678;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// li r29,0
	ctx.r29.s64 = 0;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addis r28,r8,1
	ctx.r28.s64 = ctx.r8.s64 + 65536;
	// addi r28,r28,-28670
	ctx.r28.s64 = ctx.r28.s64 + -28670;
	// bl 0x822a3ac0
	ctx.lr = 0x822AB69C;
	sub_822A3AC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab6e8
	if (ctx.cr6.eq) goto loc_822AB6E8;
	// lis r30,-31859
	ctx.r30.s64 = -2087911424;
loc_822AB6AC:
	// lwz r11,-3336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,-3336(r30)
	PPC_STORE_U32(ctx.r30.u32 + -3336, ctx.r11.u32);
	// bl 0x822a2b08
	ctx.lr = 0x822AB6C4;
	sub_822A2B08(ctx, base);
	// lwz r11,-3336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3336);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3b58
	ctx.lr = 0x822AB6DC;
	sub_822A3B58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ab6ac
	if (!ctx.cr6.eq) goto loc_822AB6AC;
loc_822AB6E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AB670) {
	__imp__sub_822AB670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AB6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AB6F4) {
	__imp__sub_822AB6F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AB6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822AB700;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lhz r28,8(r5)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// rotlwi r11,r31,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r29,r11,11
	ctx.r29.s64 = ctx.r11.s64 + 11;
	// beq cr6,0x822ab780
	if (ctx.cr6.eq) goto loc_822AB780;
loc_822AB730:
	// lwzu r26,-4(r29)
	ea = -4 + ctx.r29.u32;
	ctx.r26.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lbzu r3,-1(r29)
	ea = -1 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x822ab750
	if (ctx.cr6.eq) goto loc_822AB750;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822a34b8
	ctx.lr = 0x822AB74C;
	sub_822A34B8(ctx, base);
	// b 0x822ab778
	goto loc_822AB778;
loc_822AB750:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2d58
	ctx.lr = 0x822AB758;
	sub_822A2D58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822aa6e0
	ctx.lr = 0x822AB764;
	sub_822AA6E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822AB76C;
	sub_822A90E8(ctx, base);
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x822ab7a4
	if (ctx.cr6.eq) goto loc_822AB7A4;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_822AB778:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822ab730
	if (!ctx.cr6.eq) goto loc_822AB730;
loc_822AB780:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822aa6e0
	ctx.lr = 0x822AB788;
	sub_822AA6E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822AB790;
	sub_822A90E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,6(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// bl 0x8229e118
	ctx.lr = 0x822AB79C;
	sub_8229E118(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822AB7A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r29,r10,-6904
	ctx.r29.s64 = ctx.r10.s64 + -6904;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x822a2cd0
	ctx.lr = 0x822AB7C0;
	sub_822A2CD0(ctx, base);
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// sth r27,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r27.u16);
	// sth r9,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r9.u16);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x822a6760
	ctx.lr = 0x822AB7E8;
	sub_822A6760(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c58
	ctx.lr = 0x822AB7F8;
	sub_822A3C58(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a68a0
	ctx.lr = 0x822AB804;
	sub_822A68A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3898
	ctx.lr = 0x822AB814;
	sub_822A3898(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AB6F8) {
	__imp__sub_822AB6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AB81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AB81C) {
	__imp__sub_822AB81C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AB820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822AB828;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lhz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r28,8(r4)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r26,r11,-6904
	ctx.r26.s64 = ctx.r11.s64 + -6904;
	// rotlwi r11,r31,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r11,11
	ctx.r30.s64 = ctx.r11.s64 + 11;
	// beq cr6,0x822ab8b8
	if (ctx.cr6.eq) goto loc_822AB8B8;
loc_822AB860:
	// lwzu r4,-4(r30)
	ea = -4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lbzu r3,-1(r30)
	ea = -1 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x822ab87c
	if (ctx.cr6.eq) goto loc_822AB87C;
	// bl 0x822a34b8
	ctx.lr = 0x822AB878;
	sub_822A34B8(ctx, base);
	// b 0x822ab8b0
	goto loc_822AB8B0;
loc_822AB87C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// bl 0x822a36b0
	ctx.lr = 0x822AB888;
	sub_822A36B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ab8f4
	if (!ctx.cr6.eq) goto loc_822AB8F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2d58
	ctx.lr = 0x822AB898;
	sub_822A2D58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822aa6e0
	ctx.lr = 0x822AB8A4;
	sub_822AA6E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822AB8AC;
	sub_822A90E8(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_822AB8B0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822ab860
	if (!ctx.cr6.eq) goto loc_822AB860;
loc_822AB8B8:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ab8d0
	if (ctx.cr6.eq) goto loc_822AB8D0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,32(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// bl 0x822a6bb0
	ctx.lr = 0x822AB8D0;
	sub_822A6BB0(ctx, base);
loc_822AB8D0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822aa6e0
	ctx.lr = 0x822AB8D8;
	sub_822AA6E0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822AB8E0;
	sub_822A90E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,6(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// bl 0x8229e118
	ctx.lr = 0x822AB8EC;
	sub_8229E118(ctx, base);
loc_822AB8EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822AB8F4:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// sth r28,8(r29)
	PPC_STORE_U16(ctx.r29.u32 + 8, ctx.r28.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r11,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r11.u16);
	// bl 0x822aa558
	ctx.lr = 0x822AB908;
	sub_822AA558(ctx, base);
	// clrlwi r8,r24,24
	ctx.r8.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ab8ec
	if (!ctx.cr6.eq) goto loc_822AB8EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a2c58
	ctx.lr = 0x822AB920;
	sub_822A2C58(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,32(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// bl 0x822a68a0
	ctx.lr = 0x822AB938;
	sub_822A68A0(ctx, base);
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822a3898
	ctx.lr = 0x822AB94C;
	sub_822A3898(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AB820) {
	__imp__sub_822AB820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AB954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AB954) {
	__imp__sub_822AB954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AB958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822AB960;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,-3336
	ctx.r29.s64 = ctx.r11.s64 + -3336;
	// addi r10,r29,36
	ctx.r10.s64 = ctx.r29.s64 + 36;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x822ab9d4
	if (ctx.cr6.eq) goto loc_822AB9D4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_822AB9A0:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r28,r28,-24
	ctx.r28.s64 = ctx.r28.s64 + -24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab9bc
	if (ctx.cr6.eq) goto loc_822AB9BC;
	// bl 0x822a2d78
	ctx.lr = 0x822AB9B4;
	sub_822A2D78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ab9c0
	if (!ctx.cr6.eq) goto loc_822AB9C0;
loc_822AB9BC:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_822AB9C0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x822ab9a0
	if (!ctx.cr6.eq) goto loc_822AB9A0;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822aba04
	if (ctx.cr6.lt) goto loc_822ABA04;
loc_822AB9D4:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r29,56
	ctx.r9.s64 = ctx.r29.s64 + 56;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,15008
	ctx.r11.s64 = ctx.r11.s64 + 15008;
loc_822AB9FC:
	// stwu r11,-24(r10)
	ea = -24 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822ab9fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AB9FC;
loc_822ABA04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AB958) {
	__imp__sub_822AB958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ABA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ABA0C) {
	__imp__sub_822ABA0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ABA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822ABA18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822a2d38
	ctx.lr = 0x822ABA2C;
	sub_822A2D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2d10
	ctx.lr = 0x822ABA38;
	sub_822A2D10(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x822a3628
	ctx.lr = 0x822ABA4C;
	sub_822A3628(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822ABA5C;
	sub_822A3CF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x822a36b0
	ctx.lr = 0x822ABA68;
	sub_822A36B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822ABA74;
	sub_822A38E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a6bb0
	ctx.lr = 0x822ABA88;
	sub_822A6BB0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822ABA90;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822abab0
	if (!ctx.cr6.eq) goto loc_822ABAB0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822abab0
	if (ctx.cr6.eq) goto loc_822ABAB0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x822a6a50
	ctx.lr = 0x822ABAB0;
	sub_822A6A50(ctx, base);
loc_822ABAB0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ab6f8
	ctx.lr = 0x822ABAC0;
	sub_822AB6F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ABA10) {
	__imp__sub_822ABA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ABAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822ABAD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822a32a8
	ctx.lr = 0x822ABADC;
	sub_822A32A8(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a36b0
	ctx.lr = 0x822ABAF4;
	sub_822A36B0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822ABB04;
	sub_822A3CF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822a36b0
	ctx.lr = 0x822ABB10;
	sub_822A36B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822ABB1C;
	sub_822A38E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822ab480
	ctx.lr = 0x822ABB28;
	sub_822AB480(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a6bb0
	ctx.lr = 0x822ABB34;
	sub_822A6BB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822ABB3C;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822abb50
	if (!ctx.cr6.eq) goto loc_822ABB50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a6bb0
	ctx.lr = 0x822ABB50;
	sub_822A6BB0(ctx, base);
loc_822ABB50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ABAC8) {
	__imp__sub_822ABAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ABB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822ABB60;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822a2cb0
	ctx.lr = 0x822ABB74;
	sub_822A2CB0(ctx, base);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822abc64
	if (ctx.cr6.eq) goto loc_822ABC64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a32a8
	ctx.lr = 0x822ABB88;
	sub_822A32A8(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x822a36b0
	ctx.lr = 0x822ABBA0;
	sub_822A36B0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822ABBB0;
	sub_822A3CF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x822a36b0
	ctx.lr = 0x822ABBBC;
	sub_822A36B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822ABBC8;
	sub_822A38E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822a36b0
	ctx.lr = 0x822ABBDC;
	sub_822A36B0(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822ABBEC;
	sub_822A3CF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x822a3628
	ctx.lr = 0x822ABBF8;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822ABC04;
	sub_822A3CF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x822a36b0
	ctx.lr = 0x822ABC10;
	sub_822A36B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822ABC1C;
	sub_822A38E0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822ab400
	ctx.lr = 0x822ABC3C;
	sub_822AB400(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a6bb0
	ctx.lr = 0x822ABC48;
	sub_822A6BB0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822ABC50;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822abc9c
	if (!ctx.cr6.eq) goto loc_822ABC9C;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x822abc98
	goto loc_822ABC98;
loc_822ABC64:
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x822a36b0
	ctx.lr = 0x822ABC78;
	sub_822A36B0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822ABC88;
	sub_822A38E0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_822ABC98:
	// bl 0x822a6bb0
	ctx.lr = 0x822ABC9C;
	sub_822A6BB0(ctx, base);
loc_822ABC9C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ab6f8
	ctx.lr = 0x822ABCAC;
	sub_822AB6F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ABB58) {
	__imp__sub_822ABB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ABCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ABCB4) {
	__imp__sub_822ABCB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ABCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822ABCC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a2cb0
	ctx.lr = 0x822ABCCC;
	sub_822A2CB0(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822abd5c
	if (ctx.cr6.eq) goto loc_822ABD5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a32a8
	ctx.lr = 0x822ABCE0;
	sub_822A32A8(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r29,r11,-6904
	ctx.r29.s64 = ctx.r11.s64 + -6904;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x822a36b0
	ctx.lr = 0x822ABCF4;
	sub_822A36B0(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822ABD04;
	sub_822A3CF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822a36b0
	ctx.lr = 0x822ABD10;
	sub_822A36B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822ABD1C;
	sub_822A38E0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822a36b0
	ctx.lr = 0x822ABD2C;
	sub_822A36B0(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822ABD3C;
	sub_822A3CF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a3628
	ctx.lr = 0x822ABD48;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822ABD54;
	sub_822A3CF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822ABD5C:
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ABCB8) {
	__imp__sub_822ABCB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ABD70) {
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
	// bl 0x822a3e18
	ctx.lr = 0x822ABD8C;
	sub_822A3E18(ctx, base);
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// beq cr6,0x822abd9c
	if (ctx.cr6.eq) goto loc_822ABD9C;
loc_822ABD94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822abde8
	goto loc_822ABDE8;
loc_822ABD9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2da8
	ctx.lr = 0x822ABDA4;
	sub_822A2DA8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822abd94
	if (!ctx.cr6.eq) goto loc_822ABD94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822abcb8
	ctx.lr = 0x822ABDB4;
	sub_822ABCB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a36b0
	ctx.lr = 0x822ABDC0;
	sub_822A36B0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addis r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 65536;
	// addi r3,r3,-28670
	ctx.r3.s64 = ctx.r3.s64 + -28670;
	// bl 0x822a3df8
	ctx.lr = 0x822ABDE0;
	sub_822A3DF8(ctx, base);
	// cntlzw r7,r3
	ctx.r7.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_822ABDE8:
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

PPC_WEAK_FUNC(sub_822ABD70) {
	__imp__sub_822ABD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ABE00) {
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
	// bl 0x822a2da8
	ctx.lr = 0x822ABE1C;
	sub_822A2DA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a3e18
	ctx.lr = 0x822ABE24;
	sub_822A3E18(ctx, base);
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x822abe4c
	if (ctx.cr6.eq) goto loc_822ABE4C;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x822abe44
	if (ctx.cr6.eq) goto loc_822ABE44;
	// bl 0x822aba10
	ctx.lr = 0x822ABE40;
	sub_822ABA10(ctx, base);
	// b 0x822abe54
	goto loc_822ABE54;
loc_822ABE44:
	// bl 0x822abb58
	ctx.lr = 0x822ABE48;
	sub_822ABB58(ctx, base);
	// b 0x822abe54
	goto loc_822ABE54;
loc_822ABE4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ab958
	ctx.lr = 0x822ABE54;
	sub_822AB958(ctx, base);
loc_822ABE54:
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

PPC_WEAK_FUNC(sub_822ABE00) {
	__imp__sub_822ABE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ABE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ABE6C) {
	__imp__sub_822ABE6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ABE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x822ABE78;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// addi r28,r11,-6904
	ctx.r28.s64 = ctx.r11.s64 + -6904;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x822a36b0
	ctx.lr = 0x822ABE9C;
	sub_822A36B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac2b4
	if (ctx.cr6.eq) goto loc_822AC2B4;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x822a3cf8
	ctx.lr = 0x822ABEB0;
	sub_822A3CF8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x822a3628
	ctx.lr = 0x822ABEBC;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac2b4
	if (ctx.cr6.eq) goto loc_822AC2B4;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822ABED0;
	sub_822A3CF8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x822a32c0
	ctx.lr = 0x822ABED8;
	sub_822A32C0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r19,31
	ctx.r10.u64 = ctx.r19.u32 & 0x1;
	// ori r9,r11,51201
	ctx.r9.u64 = ctx.r11.u64 | 51201;
	// li r11,1
	ctx.r11.s64 = 1;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stb r11,7(r28)
	PPC_STORE_U8(ctx.r28.u32 + 7, ctx.r11.u8);
	// addis r21,r8,1
	ctx.r21.s64 = ctx.r8.s64 + 65536;
	// lis r11,-31860
	ctx.r11.s64 = -2087976960;
	// addi r21,r21,-28670
	ctx.r21.s64 = ctx.r21.s64 + -28670;
	// li r16,12
	ctx.r16.s64 = 12;
	// addi r20,r11,9592
	ctx.r20.s64 = ctx.r11.s64 + 9592;
loc_822ABF04:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822a3ac0
	ctx.lr = 0x822ABF0C;
	sub_822A3AC0(ctx, base);
loc_822ABF0C:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac2a4
	if (ctx.cr6.eq) goto loc_822AC2A4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822a2b08
	ctx.lr = 0x822ABF24;
	sub_822A2B08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a2ae0
	ctx.lr = 0x822ABF34;
	sub_822A2AE0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x822a32a8
	ctx.lr = 0x822ABF3C;
	sub_822A32A8(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822a36b0
	ctx.lr = 0x822ABF50;
	sub_822A36B0(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822ABF60;
	sub_822A3CF8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822a3df8
	ctx.lr = 0x822ABF70;
	sub_822A3DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822ac088
	if (ctx.cr6.eq) goto loc_822AC088;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822ABF84;
	sub_822A38E0(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,132
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 132, ctx.xer);
	// bne cr6,0x822ac0e4
	if (!ctx.cr6.eq) goto loc_822AC0E4;
	// lbz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// subf r11,r29,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r29.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r11,11
	ctx.r31.s64 = ctx.r11.s64 + 11;
loc_822ABFBC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822ac0dc
	if (ctx.cr6.eq) goto loc_822AC0DC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x822ac034
	if (ctx.cr6.eq) goto loc_822AC034;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// beq cr6,0x822ac0dc
	if (ctx.cr6.eq) goto loc_822AC0DC;
	// lwzu r4,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x822a3458
	ctx.lr = 0x822ABFF4;
	sub_822A3458(ctx, base);
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822a3458
	ctx.lr = 0x822AC008;
	sub_822A3458(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822a95c8
	ctx.lr = 0x822AC014;
	sub_822A95C8(ctx, base);
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822ac044
	if (!ctx.cr6.eq) goto loc_822AC044;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ac034
	if (ctx.cr6.eq) goto loc_822AC034;
	// addi r27,r27,-8
	ctx.r27.s64 = ctx.r27.s64 + -8;
	// b 0x822abfbc
	goto loc_822ABFBC;
loc_822AC034:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822a3b58
	ctx.lr = 0x822AC040;
	sub_822A3B58(ctx, base);
	// b 0x822abf0c
	goto loc_822ABF0C;
loc_822AC044:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,16(r20)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// subf r11,r29,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r29.s64;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// bl 0x8229e628
	ctx.lr = 0x822AC060;
	sub_8229E628(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r10,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r10.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r9,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r9.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822a3b58
	ctx.lr = 0x822AC084;
	sub_822A3B58(ctx, base);
	// b 0x822abf0c
	goto loc_822ABF0C;
loc_822AC088:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822ab400
	ctx.lr = 0x822AC0A0;
	sub_822AB400(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822aa5c0
	ctx.lr = 0x822AC0A8;
	sub_822AA5C0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a6bb0
	ctx.lr = 0x822AC0B4;
	sub_822A6BB0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822AC0BC;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ac0d0
	if (!ctx.cr6.eq) goto loc_822AC0D0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x822a6bb0
	ctx.lr = 0x822AC0D0;
	sub_822A6BB0(ctx, base);
loc_822AC0D0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822abe00
	ctx.lr = 0x822AC0D8;
	sub_822ABE00(ctx, base);
	// b 0x822abf04
	goto loc_822ABF04;
loc_822AC0DC:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x822ac0f4
	goto loc_822AC0F4;
loc_822AC0E4:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_822AC0F4:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x822a6760
	ctx.lr = 0x822AC108;
	sub_822A6760(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c58
	ctx.lr = 0x822AC118;
	sub_822A3C58(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822a68a0
	ctx.lr = 0x822AC124;
	sub_822A68A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x822a3898
	ctx.lr = 0x822AC138;
	sub_822A3898(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822AC144;
	sub_822A38E0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a5f60
	ctx.lr = 0x822AC150;
	sub_822A5F60(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822a6bb0
	ctx.lr = 0x822AC15C;
	sub_822A6BB0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822AC164;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ac194
	if (!ctx.cr6.eq) goto loc_822AC194;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822a6a50
	ctx.lr = 0x822AC178;
	sub_822A6A50(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822AC180;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ac194
	if (!ctx.cr6.eq) goto loc_822AC194;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x822a6bb0
	ctx.lr = 0x822AC194;
	sub_822A6BB0(ctx, base);
loc_822AC194:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a6bb0
	ctx.lr = 0x822AC1A0;
	sub_822A6BB0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822a3a58
	ctx.lr = 0x822AC1A8;
	sub_822A3A58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ac1bc
	if (!ctx.cr6.eq) goto loc_822AC1BC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x822a6bb0
	ctx.lr = 0x822AC1BC;
	sub_822A6BB0(ctx, base);
loc_822AC1BC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x822a2cd0
	ctx.lr = 0x822AC1C8;
	sub_822A2CD0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822abf04
	if (!ctx.cr6.eq) goto loc_822ABF04;
	// lhz r25,4(r30)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_822AC1E0:
	// addi r27,r27,-8
	ctx.r27.s64 = ctx.r27.s64 + -8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x822ac1e0
	if (!ctx.cr6.eq) goto loc_822AC1E0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r3,6(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r24,r25,r10
	ctx.r24.u64 = ctx.r25.u64 + ctx.r10.u64;
	// addi r26,r11,11
	ctx.r26.s64 = ctx.r11.s64 + 11;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8229e130
	ctx.lr = 0x822AC214;
	sub_8229E130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ac264
	if (!ctx.cr6.eq) goto loc_822AC264;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8229e0e8
	ctx.lr = 0x822AC228;
	sub_8229E0E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r30,11
	ctx.r4.s64 = ctx.r30.s64 + 11;
	// addi r3,r3,11
	ctx.r3.s64 = ctx.r3.s64 + 11;
	// sth r26,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r26.u16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// sth r9,8(r29)
	PPC_STORE_U16(ctx.r29.u32 + 8, ctx.r9.u16);
	// bl 0x823de1f0
	ctx.lr = 0x822AC250;
	sub_823DE1F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,6(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// bl 0x8229e118
	ctx.lr = 0x822AC25C;
	sub_8229E118(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
loc_822AC264:
	// add r11,r24,r30
	ctx.r11.u64 = ctx.r24.u64 + ctx.r30.u64;
	// sth r31,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r31.u16);
	// subf r30,r25,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r25.s64;
	// addi r31,r11,11
	ctx.r31.s64 = ctx.r11.s64 + 11;
loc_822AC274:
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x822a3458
	ctx.lr = 0x822AC284;
	sub_822A3458(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stwu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r31.u32 = ea;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822ac274
	if (!ctx.cr0.eq) goto loc_822AC274;
	// b 0x822abf04
	goto loc_822ABF04;
loc_822AC2A4:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822AC2AC;
	sub_822A90E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,7(r28)
	PPC_STORE_U8(ctx.r28.u32 + 7, ctx.r11.u8);
loc_822AC2B4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ABE70) {
	__imp__sub_822ABE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AC2BC) {
	__imp__sub_822AC2BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822AC2C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bl 0x822a32c0
	ctx.lr = 0x822AC2E0;
	sub_822A32C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a31e8
	ctx.lr = 0x822AC2E8;
	sub_822A31E8(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r27,r11,-6904
	ctx.r27.s64 = ctx.r11.s64 + -6904;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// bl 0x822a6840
	ctx.lr = 0x822AC300;
	sub_822A6840(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c58
	ctx.lr = 0x822AC310;
	sub_822A3C58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x822a6760
	ctx.lr = 0x822AC31C;
	sub_822A6760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a3c58
	ctx.lr = 0x822AC328;
	sub_822A3C58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822a6840
	ctx.lr = 0x822AC330;
	sub_822A6840(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822AC338;
	sub_822A90E8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// bl 0x822a6840
	ctx.lr = 0x822AC350;
	sub_822A6840(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c58
	ctx.lr = 0x822AC360;
	sub_822A3C58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a68a0
	ctx.lr = 0x822AC36C;
	sub_822A68A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822a3898
	ctx.lr = 0x822AC37C;
	sub_822A3898(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2c58
	ctx.lr = 0x822AC388;
	sub_822A2C58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AC2C0) {
	__imp__sub_822AC2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822AC398;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822aabe8
	ctx.lr = 0x822AC3AC;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r27,r30,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r30,r9,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r9.s64;
	// beq cr6,0x822ac3fc
	if (ctx.cr6.eq) goto loc_822AC3FC;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r26,4(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822abe70
	ctx.lr = 0x822AC3F4;
	sub_822ABE70(ctx, base);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822AC3FC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822ac424
	if (ctx.cr6.eq) goto loc_822AC424;
loc_822AC404:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822a34b8
	ctx.lr = 0x822AC410;
	sub_822A34B8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822ac404
	if (!ctx.cr6.eq) goto loc_822AC404;
loc_822AC424:
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AC390) {
	__imp__sub_822AC390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC430) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x822a3fa0
	ctx.lr = 0x822AC450;
	sub_822A3FA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ac390
	ctx.lr = 0x822AC45C;
	sub_822AC390(ctx, base);
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

PPC_WEAK_FUNC(sub_822AC430) {
	__imp__sub_822AC430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AC474) {
	__imp__sub_822AC474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,-6904
	ctx.r10.s64 = ctx.r11.s64 + -6904;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// b 0x822ac390
	sub_822AC390(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AC478) {
	__imp__sub_822AC478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822AC498;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r28,r11,-6904
	ctx.r28.s64 = ctx.r11.s64 + -6904;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac5f0
	if (ctx.cr6.eq) goto loc_822AC5F0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822a36b0
	ctx.lr = 0x822AC4BC;
	sub_822A36B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac5f0
	if (ctx.cr6.eq) goto loc_822AC5F0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r26,r11,51201
	ctx.r26.u64 = ctx.r11.u64 | 51201;
	// ori r27,r10,36866
	ctx.r27.u64 = ctx.r10.u64 | 36866;
loc_822AC4D8:
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x822a3cf8
	ctx.lr = 0x822AC4E0;
	sub_822A3CF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822AC4E8;
	sub_822A3A70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac5f0
	if (ctx.cr6.eq) goto loc_822AC5F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822AC4FC;
	sub_822A3CF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822AC504;
	sub_822A3A70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac5f0
	if (ctx.cr6.eq) goto loc_822AC5F0;
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r24,r10,r27
	ctx.r24.u64 = ctx.r10.u64 + ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a2ae0
	ctx.lr = 0x822AC528;
	sub_822A2AE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a3df8
	ctx.lr = 0x822AC538;
	sub_822A3DF8(ctx, base);
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// bne cr6,0x822ac570
	if (!ctx.cr6.eq) goto loc_822AC570;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822AC54C;
	sub_822A38E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822abac8
	ctx.lr = 0x822AC55C;
	sub_822ABAC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ab820
	ctx.lr = 0x822AC56C;
	sub_822AB820(ctx, base);
	// b 0x822ac5d8
	goto loc_822AC5D8;
loc_822AC570:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a32c0
	ctx.lr = 0x822AC578;
	sub_822A32C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822abac8
	ctx.lr = 0x822AC580;
	sub_822ABAC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a32a8
	ctx.lr = 0x822AC588;
	sub_822A32A8(ctx, base);
	// bl 0x822a2da8
	ctx.lr = 0x822AC58C;
	sub_822A2DA8(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a36b0
	ctx.lr = 0x822AC5A0;
	sub_822A36B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac5c8
	if (ctx.cr6.eq) goto loc_822AC5C8;
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// bl 0x822a38e0
	ctx.lr = 0x822AC5B4;
	sub_822A38E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822ab820
	ctx.lr = 0x822AC5C8;
	sub_822AB820(ctx, base);
loc_822AC5C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa5c0
	ctx.lr = 0x822AC5D0;
	sub_822AA5C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a32e0
	ctx.lr = 0x822AC5D8;
	sub_822A32E0(ctx, base);
loc_822AC5D8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x822a36b0
	ctx.lr = 0x822AC5E4;
	sub_822A36B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ac4d8
	if (!ctx.cr6.eq) goto loc_822AC4D8;
loc_822AC5F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AC490) {
	__imp__sub_822AC490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822AC600;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r9,r10,51201
	ctx.r9.u64 = ctx.r10.u64 | 51201;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addis r29,r8,1
	ctx.r29.s64 = ctx.r8.s64 + 65536;
	// addi r29,r29,-28670
	ctx.r29.s64 = ctx.r29.s64 + -28670;
	// bl 0x822a32c0
	ctx.lr = 0x822AC624;
	sub_822A32C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822AC62C;
	sub_822A3A70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac6b8
	if (ctx.cr6.eq) goto loc_822AC6B8;
loc_822AC638:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a3df8
	ctx.lr = 0x822AC644;
	sub_822A3DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822ac65c
	if (!ctx.cr6.eq) goto loc_822AC65C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a6c60
	ctx.lr = 0x822AC658;
	sub_822A6C60(ctx, base);
	// b 0x822ac6a4
	goto loc_822AC6A4;
loc_822AC65C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a2ae0
	ctx.lr = 0x822AC668;
	sub_822A2AE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822AC678;
	sub_822A38E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a6bb0
	ctx.lr = 0x822AC68C;
	sub_822A6BB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2d10
	ctx.lr = 0x822AC694;
	sub_822A2D10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ab6f8
	ctx.lr = 0x822AC6A4;
	sub_822AB6F8(ctx, base);
loc_822AC6A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822AC6AC;
	sub_822A3A70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ac638
	if (!ctx.cr6.eq) goto loc_822AC638;
loc_822AC6B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822AC6C0;
	sub_822A90E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AC5F8) {
	__imp__sub_822AC5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC6C8) {
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
	// bl 0x822aabe8
	ctx.lr = 0x822AC6DC;
	sub_822AABE8(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822ac704
	if (!ctx.cr6.eq) goto loc_822AC704;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,24924
	ctx.r3.s64 = ctx.r11.s64 + 24924;
	// bl 0x8230d720
	ctx.lr = 0x822AC700;
	sub_8230D720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_822AC704:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822AC6C8) {
	__imp__sub_822AC6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AC72C) {
	__imp__sub_822AC72C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC730) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x822a90e8
	sub_822A90E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AC730) {
	__imp__sub_822AC730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822AC740;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x822dd778
	ctx.lr = 0x822AC760;
	sub_822DD778(ctx, base);
	// bl 0x822a9be0
	ctx.lr = 0x822AC764;
	sub_822A9BE0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac8b4
	if (ctx.cr6.eq) goto loc_822AC8B4;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r10,r11,-3336
	ctx.r10.s64 = ctx.r11.s64 + -3336;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,8(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x822a3a70
	ctx.lr = 0x822AC788;
	sub_822A3A70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac7d4
	if (ctx.cr6.eq) goto loc_822AC7D4;
loc_822AC794:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a3cf8
	ctx.lr = 0x822AC7A0;
	sub_822A3CF8(ctx, base);
	// bl 0x822ac5f8
	ctx.lr = 0x822AC7A4;
	sub_822AC5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a3b78
	ctx.lr = 0x822AC7B0;
	sub_822A3B78(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a6a50
	ctx.lr = 0x822AC7C0;
	sub_822A6A50(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a3a70
	ctx.lr = 0x822AC7C8;
	sub_822A3A70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ac794
	if (!ctx.cr6.eq) goto loc_822AC794;
loc_822AC7D4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a3a70
	ctx.lr = 0x822AC7DC;
	sub_822A3A70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac834
	if (ctx.cr6.eq) goto loc_822AC834;
loc_822AC7E8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a3cf8
	ctx.lr = 0x822AC7F0;
	sub_822A3CF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a3a70
	ctx.lr = 0x822AC7F8;
	sub_822A3A70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a38e0
	ctx.lr = 0x822AC804;
	sub_822A38E0(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a32c0
	ctx.lr = 0x822AC810;
	sub_822A32C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ac490
	ctx.lr = 0x822AC818;
	sub_822AC490(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a90e8
	ctx.lr = 0x822AC820;
	sub_822A90E8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a3a70
	ctx.lr = 0x822AC828;
	sub_822A3A70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ac7e8
	if (!ctx.cr6.eq) goto loc_822AC7E8;
loc_822AC834:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x822a5f10
	ctx.lr = 0x822AC83C;
	sub_822A5F10(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x822a32e0
	ctx.lr = 0x822AC844;
	sub_822A32E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x822a5f10
	ctx.lr = 0x822AC854;
	sub_822A5F10(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x822a32e0
	ctx.lr = 0x822AC85C;
	sub_822A32E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x822a32e0
	ctx.lr = 0x822AC86C;
	sub_822A32E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x822a32e0
	ctx.lr = 0x822AC87C;
	sub_822A32E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x822a32e0
	ctx.lr = 0x822AC88C;
	sub_822A32E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x822a32e0
	ctx.lr = 0x822AC89C;
	sub_822A32E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// beq cr6,0x822ac8b4
	if (ctx.cr6.eq) goto loc_822AC8B4;
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// bl 0x822aaa20
	ctx.lr = 0x822AC8B4;
	sub_822AAA20(ctx, base);
loc_822AC8B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AC738) {
	__imp__sub_822AC738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AC8BC) {
	__imp__sub_822AC8BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ac8e4
	if (ctx.cr6.eq) goto loc_822AC8E4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822AC8E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822AC8C0) {
	__imp__sub_822AC8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AC8EC) {
	__imp__sub_822AC8EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822AC8F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// ori r9,r10,51201
	ctx.r9.u64 = ctx.r10.u64 | 51201;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mullw r8,r11,r9
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addis r28,r8,1
	ctx.r28.s64 = ctx.r8.s64 + 65536;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r28,-28670
	ctx.r28.s64 = ctx.r28.s64 + -28670;
	// bl 0x822a3a70
	ctx.lr = 0x822AC930;
	sub_822A3A70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ac988
	if (ctx.cr6.eq) goto loc_822AC988;
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
loc_822AC940:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3df8
	ctx.lr = 0x822AC94C;
	sub_822A3DF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822ac994
	if (!ctx.cr6.eq) goto loc_822AC994;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x822ac994
	if (!ctx.cr6.lt) goto loc_822AC994;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822AC968;
	sub_822A3CF8(ctx, base);
	// stwu r3,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r27.u32 = ea;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x822a3a88
	ctx.lr = 0x822AC97C;
	sub_822A3A88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ac940
	if (!ctx.cr6.eq) goto loc_822AC940;
loc_822AC988:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822AC994:
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3df8
	ctx.lr = 0x822AC9A4;
	sub_822A3DF8(ctx, base);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AC8F0) {
	__imp__sub_822AC8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822AC9B4) {
	__imp__sub_822AC9B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822AC9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822AC9C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// addi r11,r10,12184
	ctx.r11.s64 = ctx.r10.s64 + 12184;
	// lis r8,-31859
	ctx.r8.s64 = -2087911424;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// addi r29,r8,-3336
	ctx.r29.s64 = ctx.r8.s64 + -3336;
	// lhz r11,126(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 126);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lhzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// bl 0x822aa610
	ctx.lr = 0x822AC9F8;
	sub_822AA610(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// bne cr6,0x822aca40
	if (!ctx.cr6.eq) goto loc_822ACA40;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x822a34b8
	ctx.lr = 0x822ACA34;
	sub_822A34B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822ACA40:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822a34b8
	ctx.lr = 0x822ACA48;
	sub_822A34B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822AC9B8) {
	__imp__sub_822AC9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ACA54) {
	__imp__sub_822ACA54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822ACA60;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// ori r8,r10,51201
	ctx.r8.u64 = ctx.r10.u64 | 51201;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addis r27,r7,1
	ctx.r27.s64 = ctx.r7.s64 + 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r27,r27,-28670
	ctx.r27.s64 = ctx.r27.s64 + -28670;
	// bl 0x822a3a70
	ctx.lr = 0x822ACAA0;
	sub_822A3A70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822acb20
	if (ctx.cr6.eq) goto loc_822ACB20;
loc_822ACAAC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a3df8
	ctx.lr = 0x822ACAB8;
	sub_822A3DF8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822acb2c
	if (!ctx.cr6.eq) goto loc_822ACB2C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x822acb2c
	if (!ctx.cr6.lt) goto loc_822ACB2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a3cf8
	ctx.lr = 0x822ACAD8;
	sub_822A3CF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822a3e18
	ctx.lr = 0x822ACAE0;
	sub_822A3E18(ctx, base);
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// beq cr6,0x822acb08
	if (ctx.cr6.eq) goto loc_822ACB08;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x822acb30
	if (!ctx.cr6.eq) goto loc_822ACB30;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_822ACB08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a3a88
	ctx.lr = 0x822ACB14;
	sub_822A3A88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822acaac
	if (!ctx.cr6.eq) goto loc_822ACAAC;
loc_822ACB20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822ACB2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_822ACB30:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a3df8
	ctx.lr = 0x822ACB40;
	sub_822A3DF8(ctx, base);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822ACA58) {
	__imp__sub_822ACA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14816
	ctx.r9.s64 = ctx.r11.s64 + 14816;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822ACB50) {
	__imp__sub_822ACB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822ACB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822ACB64) {
	__imp__sub_822ACB64(ctx, base);
}

