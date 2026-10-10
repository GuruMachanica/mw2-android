#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_821362DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821362DC) {
	__imp__sub_821362DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821362E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821362E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8235c238
	ctx.lr = 0x82136300;
	sub_8235C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213634c
	if (!ctx.cr6.eq) goto loc_8213634C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c238
	ctx.lr = 0x82136318;
	sub_8235C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213634c
	if (!ctx.cr6.eq) goto loc_8213634C;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r9,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8213634C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821362E0) {
	__imp__sub_821362E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136358) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,144
	ctx.r10.s64 = ctx.r3.s64 + 144;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82136364:
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 & ctx.r5.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82136390
	if (ctx.cr6.eq) goto loc_82136390;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r7,r9,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// and r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 & ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821363a8
	if (!ctx.cr6.eq) goto loc_821363A8;
loc_82136390:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82136364
	if (ctx.cr6.lt) goto loc_82136364;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821363A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82136358) {
	__imp__sub_82136358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821363B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,3
	ctx.r11.s64 = ctx.r5.s64 + 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r7,r9,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821363B0) {
	__imp__sub_821363B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821363D8) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,8816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8816);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82136420
	if (ctx.cr6.eq) goto loc_82136420;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,212(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-648
	ctx.r4.s64 = ctx.r11.s64 + -648;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82136420;
	sub_82280900(ctx, base);
loc_82136420:
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c248
	ctx.lr = 0x8213642C;
	sub_8235C248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235aa48
	ctx.lr = 0x82136438;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82136460
	if (ctx.cr6.eq) goto loc_82136460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c248
	ctx.lr = 0x8213644C;
	sub_8235C248(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// slw r9,r11,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
loc_82136460:
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

PPC_WEAK_FUNC(sub_821363D8) {
	__imp__sub_821363D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82136480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-600
	ctx.r4.s64 = ctx.r11.s64 + -600;
	// li r3,14
	ctx.r3.s64 = 14;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82280c30
	ctx.lr = 0x821364A0;
	sub_82280C30(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,212(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// slw r9,r10,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// andc r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// bl 0x821363d8
	ctx.lr = 0x821364BC;
	sub_821363D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82136478) {
	__imp__sub_82136478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821364C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821364C4) {
	__imp__sub_821364C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821364C8) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82136508
	if (ctx.cr6.lt) goto loc_82136508;
	// bl 0x820d81a8
	ctx.lr = 0x821364F4;
	sub_820D81A8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r3,9780
	ctx.r10.s64 = ctx.r3.s64 * 9780;
	// addi r11,r11,9240
	ctx.r11.s64 = ctx.r11.s64 + 9240;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82136508:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821364C8) {
	__imp__sub_821364C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82136520;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4304(r1)
	ea = -4304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8235aa48
	ctx.lr = 0x82136540;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136568
	if (!ctx.cr6.eq) goto loc_82136568;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-408
	ctx.r4.s64 = ctx.r11.s64 + -408;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82136560;
	sub_82280900(ctx, base);
	// addi r1,r1,4304
	ctx.r1.s64 = ctx.r1.s64 + 4304;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82136568:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82141340
	ctx.lr = 0x82136570;
	sub_82141340(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8230bd68
	ctx.lr = 0x82136578;
	sub_8230BD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821366fc
	if (ctx.cr6.eq) goto loc_821366FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8230c3d0
	ctx.lr = 0x82136590;
	sub_8230C3D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821365c8
	if (!ctx.cr6.lt) goto loc_821365C8;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,8816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8816);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821366fc
	if (ctx.cr6.eq) goto loc_821366FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-488
	ctx.r4.s64 = ctx.r11.s64 + -488;
	// bl 0x82280900
	ctx.lr = 0x821365C0;
	sub_82280900(ctx, base);
	// addi r1,r1,4304
	ctx.r1.s64 = ctx.r1.s64 + 4304;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821365C8:
	// bl 0x82310110
	ctx.lr = 0x821365CC;
	sub_82310110(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c238
	ctx.lr = 0x821365EC;
	sub_8235C238(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821366fc
	if (!ctx.cr6.eq) goto loc_821366FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c050
	ctx.lr = 0x82136604;
	sub_8235C050(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bne cr6,0x82136650
	if (!ctx.cr6.eq) goto loc_82136650;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82136650
	if (!ctx.cr6.eq) goto loc_82136650;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82136650
	if (!ctx.cr6.eq) goto loc_82136650;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x821366fc
	if (ctx.cr6.eq) goto loc_821366FC;
loc_82136650:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213669c
	if (!ctx.cr6.eq) goto loc_8213669C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213669c
	if (!ctx.cr6.eq) goto loc_8213669C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213669c
	if (!ctx.cr6.eq) goto loc_8213669C;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213669c
	if (!ctx.cr6.eq) goto loc_8213669C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82136694;
	sub_82280900(ctx, base);
	// addi r1,r1,4304
	ctx.r1.s64 = ctx.r1.s64 + 4304;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213669C:
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287b40
	ctx.lr = 0x821366AC;
	sub_82287B40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r4,r11,-544
	ctx.r4.s64 = ctx.r11.s64 + -544;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// bl 0x82288048
	ctx.lr = 0x821366C4;
	sub_82288048(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287e08
	ctx.lr = 0x821366D0;
	sub_82287E08(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x821364c8
	ctx.lr = 0x821366E4;
	sub_821364C8(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8228aad0
	ctx.lr = 0x821366FC;
	sub_8228AAD0(ctx, base);
loc_821366FC:
	// addi r1,r1,4304
	ctx.r1.s64 = ctx.r1.s64 + 4304;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82136518) {
	__imp__sub_82136518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82136704) {
	__imp__sub_82136704(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82136710;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8235c1c8
	ctx.lr = 0x8213672C;
	sub_8235C1C8(ctx, base);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r10,-112
	ctx.r4.s64 = ctx.r10.s64 + -112;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// li r3,16
	ctx.r3.s64 = 16;
	// lbz r9,110(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// lbz r10,111(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// lbz r27,109(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// ld r6,120(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 120);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x82280900
	ctx.lr = 0x8213678C;
	sub_82280900(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x823de1f0
	ctx.lr = 0x8213679C;
	sub_823DE1F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823728b8
	ctx.lr = 0x821367A4;
	sub_823728B8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8230f320
	ctx.lr = 0x821367B8;
	sub_8230F320(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82136804
	if (!ctx.cr6.eq) goto loc_82136804;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r9,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r6,-176
	ctx.r4.s64 = ctx.r6.s64 + -176;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// andc r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x82280900
	ctx.lr = 0x821367F8;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82136804:
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bne cr6,0x82136850
	if (!ctx.cr6.eq) goto loc_82136850;
	// lbz r10,101(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82136850
	if (!ctx.cr6.eq) goto loc_82136850;
	// lbz r10,102(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82136850
	if (!ctx.cr6.eq) goto loc_82136850;
	// lbz r10,103(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82136850
	if (!ctx.cr6.eq) goto loc_82136850;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-248
	ctx.r4.s64 = ctx.r11.s64 + -248;
	// bl 0x82280900
	ctx.lr = 0x82136844;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82136850:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x823728d8
	ctx.lr = 0x82136858;
	sub_823728D8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// li r3,16
	ctx.r3.s64 = 16;
	// lbz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// addi r4,r11,-328
	ctx.r4.s64 = ctx.r11.s64 + -328;
	// lbz r6,101(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// lbz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// bl 0x82280900
	ctx.lr = 0x82136878;
	sub_82280900(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8235c068
	ctx.lr = 0x8213688C;
	sub_8235C068(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82136708) {
	__imp__sub_82136708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821368A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82141340
	ctx.lr = 0x821368D0;
	sub_82141340(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8230c3d0
	ctx.lr = 0x821368D8;
	sub_8230C3D0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8230ab98
	ctx.lr = 0x821368E0;
	sub_8230AB98(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821368f8
	if (ctx.cr6.eq) goto loc_821368F8;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,7364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7364);
	// b 0x82136900
	goto loc_82136900;
loc_821368F8:
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,7372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7372);
loc_82136900:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,2912
	ctx.r11.s64 = ctx.r11.s64 + 2912;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82136958
	if (!ctx.cr6.gt) goto loc_82136958;
	// clrlwi r9,r26,24
	ctx.r9.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82136958
	if (ctx.cr6.eq) goto loc_82136958;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,8816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8816);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213694c
	if (ctx.cr6.eq) goto loc_8213694C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213694C;
	sub_82280900(ctx, base);
loc_8213694C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82136958:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235aa48
	ctx.lr = 0x8213696C;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136998
	if (!ctx.cr6.eq) goto loc_82136998;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,216
	ctx.r4.s64 = ctx.r11.s64 + 216;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213698C;
	sub_82280900(ctx, base);
loc_8213698C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82136998:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c050
	ctx.lr = 0x821369A4;
	sub_8235C050(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r6,127
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 127, ctx.xer);
	// lbz r10,99(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r8,98(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// lbz r7,97(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x821369f4
	if (!ctx.cr6.eq) goto loc_821369F4;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821369f4
	if (!ctx.cr6.eq) goto loc_821369F4;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821369f4
	if (!ctx.cr6.eq) goto loc_821369F4;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8213698c
	if (ctx.cr6.eq) goto loc_8213698C;
loc_821369F4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82136a40
	if (!ctx.cr6.eq) goto loc_82136A40;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136a40
	if (!ctx.cr6.eq) goto loc_82136A40;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136a40
	if (!ctx.cr6.eq) goto loc_82136A40;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136a40
	if (!ctx.cr6.eq) goto loc_82136A40;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,172
	ctx.r4.s64 = ctx.r11.s64 + 172;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82136A34;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82136A40:
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,8816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8816);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82136a7c
	if (ctx.cr6.eq) goto loc_82136A7C;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// addi r4,r4,112
	ctx.r4.s64 = ctx.r4.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82136A7C;
	sub_82280900(ctx, base);
loc_82136A7C:
	// li r11,1000
	ctx.r11.s64 = 1000;
	// ld r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r7,20(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rldicr r5,r28,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x8228abf8
	ctx.lr = 0x82136AA8;
	sub_8228ABF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213694c
	if (!ctx.cr6.eq) goto loc_8213694C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82280900
	ctx.lr = 0x82136AC0;
	sub_82280900(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82136708
	ctx.lr = 0x82136AD0;
	sub_82136708(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213694c
	if (ctx.cr6.eq) goto loc_8213694C;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r7,20(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rldicr r5,r28,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8228abf8
	ctx.lr = 0x82136AF8;
	sub_8228ABF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213694c
	if (!ctx.cr6.eq) goto loc_8213694C;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r9,r24
	ctx.r8.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r24.u8 & 0x3F));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r6,-40
	ctx.r4.s64 = ctx.r6.s64 + -40;
	// li r3,14
	ctx.r3.s64 = 14;
	// lwzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// andc r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// bl 0x82280c30
	ctx.lr = 0x82136B34;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82136898) {
	__imp__sub_82136898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136B40) {
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
	// bl 0x82136898
	ctx.lr = 0x82136B50;
	sub_82136898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82136B40) {
	__imp__sub_82136B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82136B6C) {
	__imp__sub_82136B6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136B70) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8235c248
	ctx.lr = 0x82136B90;
	sub_8235C248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235aa48
	ctx.lr = 0x82136B9C;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82136bd8
	if (ctx.cr6.eq) goto loc_82136BD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c248
	ctx.lr = 0x82136BB0;
	sub_8235C248(ctx, base);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r9,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r3.u8 & 0x3F));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82136bdc
	if (ctx.cr6.eq) goto loc_82136BDC;
loc_82136BD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82136BDC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82136B70) {
	__imp__sub_82136B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82136C00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8230c3d0
	ctx.lr = 0x82136C1C;
	sub_8230C3D0(ctx, base);
	// addi r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82136C28:
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235c238
	ctx.lr = 0x82136C48;
	sub_8235C238(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82136c9c
	if (!ctx.cr6.eq) goto loc_82136C9C;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// and r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82136c70
	if (!ctx.cr6.eq) goto loc_82136C70;
	// slw r11,r26,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r31.u8 & 0x3F));
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82136c9c
	if (ctx.cr6.eq) goto loc_82136C9C;
loc_82136C70:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82136c9c
	if (ctx.cr6.eq) goto loc_82136C9C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82136358
	ctx.lr = 0x82136C90;
	sub_82136358(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136d3c
	if (!ctx.cr6.eq) goto loc_82136D3C;
loc_82136C9C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82136c28
	if (ctx.cr6.lt) goto loc_82136C28;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82136CAC:
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235c238
	ctx.lr = 0x82136CCC;
	sub_8235C238(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82136d20
	if (!ctx.cr6.eq) goto loc_82136D20;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// and r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82136cf4
	if (!ctx.cr6.eq) goto loc_82136CF4;
	// slw r11,r26,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r31.u8 & 0x3F));
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82136d20
	if (ctx.cr6.eq) goto loc_82136D20;
loc_82136CF4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82136d20
	if (!ctx.cr6.eq) goto loc_82136D20;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82136358
	ctx.lr = 0x82136D14;
	sub_82136358(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136d3c
	if (!ctx.cr6.eq) goto loc_82136D3C;
loc_82136D20:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82136cac
	if (ctx.cr6.lt) goto loc_82136CAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c248
	ctx.lr = 0x82136D34;
	sub_8235C248(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82136D3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82136BF8) {
	__imp__sub_82136BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82136D50;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8235c248
	ctx.lr = 0x82136D64;
	sub_8235C248(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82136b70
	ctx.lr = 0x82136D74;
	sub_82136B70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82136d8c
	if (ctx.cr6.eq) goto loc_82136D8C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82136D8C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x8230c3d0
	ctx.lr = 0x82136D98;
	sub_8230C3D0(ctx, base);
	// addi r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82136DA4:
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r8,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235c238
	ctx.lr = 0x82136DC4;
	sub_8235C238(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82136e10
	if (!ctx.cr6.eq) goto loc_82136E10;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82136e10
	if (ctx.cr6.eq) goto loc_82136E10;
	// bl 0x82136128
	ctx.lr = 0x82136DE4;
	sub_82136128(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x82136e10
	if (!ctx.cr6.lt) goto loc_82136E10;
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// slw r9,r27,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82136ed4
	if (!ctx.cr6.eq) goto loc_82136ED4;
loc_82136E10:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82136da4
	if (ctx.cr6.lt) goto loc_82136DA4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82136E20:
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r8,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235c238
	ctx.lr = 0x82136E40;
	sub_8235C238(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82136e9c
	if (!ctx.cr6.eq) goto loc_82136E9C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82136e9c
	if (!ctx.cr6.eq) goto loc_82136E9C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 112);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82136e9c
	if (ctx.cr6.eq) goto loc_82136E9C;
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// slw r9,r27,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82136ed4
	if (!ctx.cr6.eq) goto loc_82136ED4;
loc_82136E9C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82136e20
	if (ctx.cr6.lt) goto loc_82136E20;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 112);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82136ecc
	if (!ctx.cr6.eq) goto loc_82136ECC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82136ECC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82136ED4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82136D48) {
	__imp__sub_82136D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82136EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82136EE8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// li r14,0
	ctx.r14.s64 = 0;
	// addi r24,r11,-4
	ctx.r24.s64 = ctx.r11.s64 + -4;
	// li r15,1
	ctx.r15.s64 = 1;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r19,-31835
	ctx.r19.s64 = -2086338560;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r26,r10,-4
	ctx.r26.s64 = ctx.r10.s64 + -4;
	// addi r28,r3,144
	ctx.r28.s64 = ctx.r3.s64 + 144;
	// addi r21,r11,812
	ctx.r21.s64 = ctx.r11.s64 + 812;
loc_82136F40:
	// cmpw cr6,r20,r30
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82136fec
	if (ctx.cr6.eq) goto loc_82136FEC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x821210c8
	ctx.lr = 0x82136F58;
	sub_821210C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82136fec
	if (ctx.cr6.eq) goto loc_82136FEC;
	// lwz r11,8816(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8816);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82136f88
	if (ctx.cr6.eq) goto loc_82136F88;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// ld r6,-24(r28)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r28.u32 + -24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82136F88;
	sub_82280900(ctx, base);
loc_82136F88:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8235c238
	ctx.lr = 0x82136F94;
	sub_8235C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136fcc
	if (!ctx.cr6.eq) goto loc_82136FCC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8235c238
	ctx.lr = 0x82136FAC;
	sub_8235C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136fcc
	if (!ctx.cr6.eq) goto loc_82136FCC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// slw r10,r15,r20
	ctx.r10.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r20.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82136fe4
	if (ctx.cr6.eq) goto loc_82136FE4;
loc_82136FCC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stwu r30,4(r26)
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r26.u32 = ea;
	// or r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 | ctx.r11.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82136fec
	goto loc_82136FEC;
loc_82136FE4:
	// stwu r30,4(r24)
	ea = 4 + ctx.r24.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r24.u32 = ea;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82136FEC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rotlwi r27,r27,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82136f40
	if (ctx.cr6.lt) goto loc_82136F40;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x8213710c
	if (!ctx.cr6.gt) goto loc_8213710C;
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r24,r10,736
	ctx.r24.s64 = ctx.r10.s64 + 736;
	// addi r26,r11,632
	ctx.r26.s64 = ctx.r11.s64 + 632;
loc_82137030:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82136d48
	ctx.lr = 0x82137044;
	sub_82136D48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821370d4
	if (ctx.cr6.lt) goto loc_821370D4;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// lbz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821370d4
	if (ctx.cr6.eq) goto loc_821370D4;
	// lwz r10,8816(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8816);
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821370a8
	if (ctx.cr6.eq) goto loc_821370A8;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r7,120(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 120);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + ctx.r16.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// ld r5,120(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 120);
	// bl 0x82280900
	ctx.lr = 0x821370A8;
	sub_82280900(ctx, base);
loc_821370A8:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821370c4
	if (!ctx.cr6.eq) goto loc_821370C4;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_821370C4:
	// slw r9,r15,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r30.u8 & 0x3F));
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stwx r8,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// b 0x82137100
	goto loc_82137100;
loc_821370D4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821370E4;
	sub_82280900(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r15,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r30.u8 & 0x3F));
	// stwu r30,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r28.u32 = ea;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
loc_82137100:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82137030
	if (!ctx.cr0.eq) goto loc_82137030;
loc_8213710C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8235c238
	ctx.lr = 0x82137118;
	sub_8235C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r17,r11,8
	ctx.r17.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r23,r17
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x821374b4
	if (!ctx.cr6.gt) goto loc_821374B4;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82137240
	if (!ctx.cr6.gt) goto loc_82137240;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r27,r1,88
	ctx.r27.s64 = ctx.r1.s64 + 88;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r21,r10,584
	ctx.r21.s64 = ctx.r10.s64 + 584;
	// addi r24,r11,548
	ctx.r24.s64 = ctx.r11.s64 + 548;
loc_82137168:
	// cmpw cr6,r23,r17
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x82137240
	if (!ctx.cr6.gt) goto loc_82137240;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bge cr6,0x82137240
	if (!ctx.cr6.lt) goto loc_82137240;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82137230
	if (ctx.cr6.eq) goto loc_82137230;
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82137230
	if (!ctx.cr6.eq) goto loc_82137230;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82136d48
	ctx.lr = 0x821371B0;
	sub_82136D48(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82137220
	if (ctx.cr6.lt) goto loc_82137220;
	// cmpw cr6,r3,r20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x82137230
	if (ctx.cr6.eq) goto loc_82137230;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82137230
	if (ctx.cr6.eq) goto loc_82137230;
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82137230
	if (ctx.cr6.eq) goto loc_82137230;
	// lwz r11,8816(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8816);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821371fc
	if (ctx.cr6.eq) goto loc_821371FC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821371FC;
	sub_82280900(ctx, base);
loc_821371FC:
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// slw r9,r15,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r30.u8 & 0x3F));
	// lwzu r11,-4(r26)
	ea = -4 + ctx.r26.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// stwx r8,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r8.u32);
	// stwx r14,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r14.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82137238
	goto loc_82137238;
loc_82137220:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82137230;
	sub_82280900(ctx, base);
loc_82137230:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_82137238:
	// cmpw cr6,r22,r23
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82137168
	if (ctx.cr6.lt) goto loc_82137168;
loc_82137240:
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82137428
	if (!ctx.cr6.gt) goto loc_82137428;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r1,88
	ctx.r25.s64 = ctx.r1.s64 + 88;
	// rldimi r29,r8,32,0
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r29.u64 & 0xFFFFFFFF);
	// addi r19,r9,-27364
	ctx.r19.s64 = ctx.r9.s64 + -27364;
	// addi r20,r10,536
	ctx.r20.s64 = ctx.r10.s64 + 536;
	// addi r21,r11,488
	ctx.r21.s64 = ctx.r11.s64 + 488;
loc_8213728C:
	// cmpw cr6,r23,r17
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x82137420
	if (!ctx.cr6.gt) goto loc_82137420;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bge cr6,0x82137420
	if (!ctx.cr6.lt) goto loc_82137420;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// lis r10,4097
	ctx.r10.s64 = 268500992;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// ori r8,r10,17
	ctx.r8.u64 = ctx.r10.u64 | 17;
	// rldicr r12,r12,16,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 16) & 0xFFFFFFFFFFFFFFFF;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lwzx r5,r30,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// ori r7,r9,256
	ctx.r7.u64 = ctx.r9.u64 | 256;
	// and r4,r5,r12
	ctx.r4.u64 = ctx.r5.u64 & ctx.r12.u64;
	// lis r12,-3823
	ctx.r12.s64 = -250544128;
	// mulld r11,r4,r29
	ctx.r11.s64 = ctx.r4.s64 * ctx.r29.s64;
	// ori r12,r12,4369
	ctx.r12.u64 = ctx.r12.u64 | 4369;
	// rldicl r10,r11,61,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// rldicl r6,r5,48,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u64, 48) & 0xFFFFFFFFFFFF;
	// oris r12,r12,4369
	ctx.r12.u64 = ctx.r12.u64 | 286326784;
	// mulld r3,r6,r29
	ctx.r3.s64 = ctx.r6.s64 * ctx.r29.s64;
	// ori r12,r12,4369
	ctx.r12.u64 = ctx.r12.u64 | 4369;
	// rldicl r11,r3,61,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,-3823
	ctx.r12.s64 = -250544128;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// ori r12,r12,4369
	ctx.r12.u64 = ctx.r12.u64 | 4369;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,4369
	ctx.r12.u64 = ctx.r12.u64 | 286326784;
	// ori r12,r12,4369
	ctx.r12.u64 = ctx.r12.u64 | 4369;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulhdu r10,r11,r8
	ctx.r10.u64 = ((unsigned __int128)ctx.r11.u64 * (unsigned __int128)ctx.r8.u64) >> 64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rldicl r9,r9,63,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rldicl r7,r8,53,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 53) & 0x1FFFFFFFFFFFFF;
	// rldicr r6,r7,12,51
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 12) & 0xFFFFFFFFFFFFF000;
	// subf r4,r7,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// sradi r11,r3,4
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 4;
	// clrlwi r10,r3,28
	ctx.r10.u64 = ctx.r3.u32 & 0xF;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// sradi r9,r3,8
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s64 >> 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bge cr6,0x82137410
	if (!ctx.cr6.lt) goto loc_82137410;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82136bf8
	ctx.lr = 0x82137368;
	sub_82136BF8(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82137410
	if (ctx.cr6.eq) goto loc_82137410;
	// rlwinm r26,r3,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82137410
	if (ctx.cr6.eq) goto loc_82137410;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8816);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821373ec
	if (ctx.cr6.eq) goto loc_821373EC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821373A8;
	sub_82280900(ctx, base);
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
loc_821373B0:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// and r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821373d0
	if (ctx.cr6.eq) goto loc_821373D0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821373D0;
	sub_82280900(ctx, base);
loc_821373D0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rotlwi r27,r27,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x821373b0
	if (ctx.cr6.lt) goto loc_821373B0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821373EC;
	sub_82280900(ctx, base);
loc_821373EC:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// lwzx r9,r26,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// lwzu r11,-4(r22)
	ea = -4 + ctx.r22.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r22.u32 = ea;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r8,r26,r31
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r8.u32);
	// stwx r14,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r14.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x82137418
	goto loc_82137418;
loc_82137410:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_82137418:
	// cmpw cr6,r18,r23
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x8213728c
	if (ctx.cr6.lt) goto loc_8213728C;
loc_82137420:
	// lwz r20,292(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82137428:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8235c238
	ctx.lr = 0x82137434;
	sub_8235C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821374b4
	if (!ctx.cr6.eq) goto loc_821374B4;
	// cmpw cr6,r23,r17
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x821374b4
	if (!ctx.cr6.gt) goto loc_821374B4;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,360
	ctx.r29.s64 = ctx.r11.s64 + 360;
loc_8213745C:
	// lwz r11,8816(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8816);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82137480
	if (ctx.cr6.eq) goto loc_82137480;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,-4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82137480;
	sub_82280900(ctx, base);
loc_82137480:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8235c248
	ctx.lr = 0x82137488;
	sub_8235C248(ctx, base);
	// lwzu r11,-4(r30)
	ea = -4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// cmpw cr6,r23,r17
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r17.s32, ctx.xer);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r7,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
	// stwx r14,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r14.u32);
	// bgt cr6,0x8213745c
	if (ctx.cr6.gt) goto loc_8213745C;
loc_821374B4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82136EE0) {
	__imp__sub_82136EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821374BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821374BC) {
	__imp__sub_821374BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821374C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x821374C8;
	__savegprlr_14(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4416(r1)
	ea = -4416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x8230abe0
	ctx.lr = 0x821374D8;
	sub_8230ABE0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8235c248
	ctx.lr = 0x821374E0;
	sub_8235C248(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82141340
	ctx.lr = 0x821374EC;
	sub_82141340(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8230c3d0
	ctx.lr = 0x821374F4;
	sub_8230C3D0(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82137518
	if (!ctx.cr6.lt) goto loc_82137518;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,968
	ctx.r4.s64 = ctx.r11.s64 + 968;
	// bl 0x82280c30
	ctx.lr = 0x82137510;
	sub_82280C30(ctx, base);
	// addi r1,r1,4416
	ctx.r1.s64 = ctx.r1.s64 + 4416;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_82137518:
	// addi r11,r16,3
	ctx.r11.s64 = ctx.r16.s64 + 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r31,r9,r29
	ctx.r31.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r30,r8,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwzx r5,r30,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// and r7,r31,r5
	ctx.r7.u64 = ctx.r31.u64 & ctx.r5.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82137578
	if (!ctx.cr6.eq) goto loc_82137578;
	// lwz r11,8816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8816);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213756c
	if (ctx.cr6.eq) goto loc_8213756C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// or r6,r31,r5
	ctx.r6.u64 = ctx.r31.u64 | ctx.r5.u64;
	// addi r4,r11,-648
	ctx.r4.s64 = ctx.r11.s64 + -648;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213756C;
	sub_82280900(ctx, base);
loc_8213756C:
	// lwzx r11,r30,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// or r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 | ctx.r31.u64;
	// stwx r10,r30,r25
	PPC_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r10.u32);
loc_82137578:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// std r28,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r28.u64);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r7,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r7.u32);
	// bl 0x82136ee0
	ctx.lr = 0x821375B0;
	sub_82136EE0(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82141340
	ctx.lr = 0x821375B8;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82143250
	ctx.lr = 0x821375C4;
	sub_82143250(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
	// addi r27,r11,2912
	ctx.r27.s64 = ctx.r11.s64 + 2912;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82137834
	if (!ctx.cr6.gt) goto loc_82137834;
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,7352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7352);
loc_821375F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82137618
	if (ctx.cr6.eq) goto loc_82137618;
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8213761c
	if (!ctx.cr6.eq) goto loc_8213761C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x8213761c
	if (ctx.cr6.gt) goto loc_8213761C;
loc_82137618:
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_8213761C:
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// bdnz 0x821375f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821375F4;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x82137834
	if (ctx.cr6.eq) goto loc_82137834;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r22,-32165
	ctx.r22.s64 = -2107965440;
	// addi r18,r4,956
	ctx.r18.s64 = ctx.r4.s64 + 956;
	// addi r26,r5,952
	ctx.r26.s64 = ctx.r5.s64 + 952;
	// addi r17,r6,-27364
	ctx.r17.s64 = ctx.r6.s64 + -27364;
	// addi r21,r7,944
	ctx.r21.s64 = ctx.r7.s64 + 944;
	// addi r24,r8,912
	ctx.r24.s64 = ctx.r8.s64 + 912;
	// addi r20,r9,900
	ctx.r20.s64 = ctx.r9.s64 + 900;
	// addi r19,r10,884
	ctx.r19.s64 = ctx.r10.s64 + 884;
	// addi r23,r11,848
	ctx.r23.s64 = ctx.r11.s64 + 848;
loc_82137678:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8213781c
	if (ctx.cr6.eq) goto loc_8213781C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,8816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8816);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82137724
	if (ctx.cr6.eq) goto loc_82137724;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821376AC;
	sub_82280900(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82137718
	if (ctx.cr6.eq) goto loc_82137718;
	// and r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ctx.r11.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821376d0
	if (!ctx.cr6.eq) goto loc_821376D0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_821376D0:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821376DC;
	sub_82280900(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_821376E4:
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82137708
	if (ctx.cr6.eq) goto loc_82137708;
	// and r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 & ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82137708
	if (ctx.cr6.eq) goto loc_82137708;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82137708;
	sub_82280900(ctx, base);
loc_82137708:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x821376e4
	if (ctx.cr6.lt) goto loc_821376E4;
loc_82137718:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82137724;
	sub_82280900(ctx, base);
loc_82137724:
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287b40
	ctx.lr = 0x82137734;
	sub_82287B40(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82288048
	ctx.lr = 0x82137740;
	sub_82288048(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287e08
	ctx.lr = 0x8213774C;
	sub_82287E08(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287e40
	ctx.lr = 0x82137760;
	sub_82287E40(ctx, base);
	// clrlwi r4,r15,24
	ctx.r4.u64 = ctx.r15.u32 & 0xFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287e08
	ctx.lr = 0x8213776C;
	sub_82287E08(ctx, base);
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821377d4
	if (!ctx.cr6.gt) goto loc_821377D4;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82137780:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821377b0
	if (ctx.cr6.eq) goto loc_821377B0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,7352(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7352);
	// lbz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821377c4
	if (!ctx.cr6.eq) goto loc_821377C4;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x821377c4
	if (ctx.cr6.gt) goto loc_821377C4;
loc_821377B0:
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287e40
	ctx.lr = 0x821377C0;
	sub_82287E40(ctx, base);
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
loc_821377C4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,10
	ctx.r31.s64 = ctx.r31.s64 + 10;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82137780
	if (ctx.cr6.lt) goto loc_82137780;
loc_821377D4:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821364c8
	ctx.lr = 0x821377E0;
	sub_821364C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82136898
	ctx.lr = 0x821377FC;
	sub_82136898(ctx, base);
	// lwz r11,-16412(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -16412);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213781c
	if (ctx.cr6.eq) goto loc_8213781C;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213781C;
	sub_82280900(ctx, base);
loc_8213781C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt cr6,0x82137678
	if (ctx.cr6.lt) goto loc_82137678;
loc_82137834:
	// addi r1,r1,4416
	ctx.r1.s64 = ctx.r1.s64 + 4416;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821374C0) {
	__imp__sub_821374C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213783C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213783C) {
	__imp__sub_8213783C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137840) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822881b0
	ctx.lr = 0x82137860;
	sub_822881B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213789c
	if (ctx.cr6.lt) goto loc_8213789C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8213789c
	if (!ctx.cr6.lt) goto loc_8213789C;
	// bl 0x8230abe0
	ctx.lr = 0x82137878;
	sub_8230ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// slw r9,r10,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r8,212(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bl 0x821363d8
	ctx.lr = 0x82137898;
	sub_821363D8(ctx, base);
	// b 0x821378b0
	goto loc_821378B0;
loc_8213789C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,1032
	ctx.r4.s64 = ctx.r11.s64 + 1032;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821378B0;
	sub_82280900(ctx, base);
loc_821378B0:
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

PPC_WEAK_FUNC(sub_82137840) {
	__imp__sub_82137840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821378C8) {
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
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 112);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82137904
	if (!ctx.cr6.eq) goto loc_82137904;
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
loc_82137904:
	// bl 0x8235c050
	ctx.lr = 0x82137908;
	sub_8235C050(ctx, base);
	// bl 0x823728e8
	ctx.lr = 0x8213790C;
	sub_823728E8(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_821378C8) {
	__imp__sub_821378C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137928) {
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
	// bl 0x823728e8
	ctx.lr = 0x82137938;
	sub_823728E8(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82137928) {
	__imp__sub_82137928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82137954) {
	__imp__sub_82137954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82137960;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// bl 0x8230c3d0
	ctx.lr = 0x82137978;
	sub_8230C3D0(ctx, base);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// li r26,1
	ctx.r26.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r10,r26,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r3.u8 & 0x3F));
	// rlwinm r27,r11,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r27,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821379fc
	if (ctx.cr6.eq) goto loc_821379FC;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 112);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821379c8
	if (!ctx.cr6.eq) goto loc_821379C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821379e4
	goto loc_821379E4;
loc_821379C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c050
	ctx.lr = 0x821379D4;
	sub_8235C050(ctx, base);
	// bl 0x823728e8
	ctx.lr = 0x821379D8;
	sub_823728E8(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_821379E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821379fc
	if (ctx.cr6.eq) goto loc_821379FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821379FC:
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82137A04:
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r8,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r5,112(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 112);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82137a6c
	if (ctx.cr6.eq) goto loc_82137A6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c050
	ctx.lr = 0x82137A40;
	sub_8235C050(ctx, base);
	// bl 0x823728e8
	ctx.lr = 0x82137A44;
	sub_823728E8(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82137a6c
	if (ctx.cr6.eq) goto loc_82137A6C;
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// slw r10,r26,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r30.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82137a84
	if (!ctx.cr6.eq) goto loc_82137A84;
loc_82137A6C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82137a04
	if (ctx.cr6.lt) goto loc_82137A04;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82137A84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82137958) {
	__imp__sub_82137958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82137A98;
	__savegprlr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4272(r1)
	ea = -4272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r4,r11,1096
	ctx.r4.s64 = ctx.r11.s64 + 1096;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82280900
	ctx.lr = 0x82137AC8;
	sub_82280900(ctx, base);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287b40
	ctx.lr = 0x82137AD8;
	sub_82287B40(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r10,1084
	ctx.r3.s64 = ctx.r10.s64 + 1084;
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// bl 0x822e84f0
	ctx.lr = 0x82137AEC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82288048
	ctx.lr = 0x82137AF8;
	sub_82288048(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82288048
	ctx.lr = 0x82137B04;
	sub_82288048(ctx, base);
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// bl 0x82141280
	ctx.lr = 0x82137B0C;
	sub_82141280(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82137B14:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821364c8
	ctx.lr = 0x82137B20;
	sub_821364C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82136898
	ctx.lr = 0x82137B3C;
	sub_82136898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82137b60
	if (!ctx.cr6.eq) goto loc_82137B60;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// blt cr6,0x82137b14
	if (ctx.cr6.lt) goto loc_82137B14;
loc_82137B60:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-16412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16412);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82137b88
	if (ctx.cr6.eq) goto loc_82137B88;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// bl 0x82280900
	ctx.lr = 0x82137B88;
	sub_82280900(ctx, base);
loc_82137B88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4272
	ctx.r1.s64 = ctx.r1.s64 + 4272;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82137A90) {
	__imp__sub_82137A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82137B94) {
	__imp__sub_82137B94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82137BA0;
	__savegprlr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4304(r1)
	ea = -4304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82141280
	ctx.lr = 0x82137BC4;
	sub_82141280(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287b40
	ctx.lr = 0x82137BD8;
	sub_82287B40(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82288048
	ctx.lr = 0x82137BE4;
	sub_82288048(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230c3d0
	ctx.lr = 0x82137BF0;
	sub_8230C3D0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r11,1268
	ctx.r27.s64 = ctx.r11.s64 + 1268;
	// addi r25,r10,1160
	ctx.r25.s64 = ctx.r10.s64 + 1160;
loc_82137C08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82137958
	ctx.lr = 0x82137C14;
	sub_82137958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82137c34
	if (!ctx.cr6.lt) goto loc_82137C34;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82137C30;
	sub_82280900(ctx, base);
	// b 0x82137c44
	goto loc_82137C44;
loc_82137C34:
	// cmpw cr6,r23,r4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82137c44
	if (ctx.cr6.eq) goto loc_82137C44;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82137cd4
	if (!ctx.cr6.eq) goto loc_82137CD4;
loc_82137C44:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82137C54;
	sub_82280900(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821364c8
	ctx.lr = 0x82137C60;
	sub_821364C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82136898
	ctx.lr = 0x82137C7C;
	sub_82136898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82137ca0
	if (!ctx.cr6.eq) goto loc_82137CA0;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// blt cr6,0x82137c08
	if (ctx.cr6.lt) goto loc_82137C08;
loc_82137CA0:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-16412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16412);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82137cc8
	if (ctx.cr6.eq) goto loc_82137CC8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// bl 0x82280900
	ctx.lr = 0x82137CC8;
	sub_82280900(ctx, base);
loc_82137CC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4304
	ctx.r1.s64 = ctx.r1.s64 + 4304;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82137CD4:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82137a90
	ctx.lr = 0x82137CE8;
	sub_82137A90(ctx, base);
	// addi r1,r1,4304
	ctx.r1.s64 = ctx.r1.s64 + 4304;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82137B98) {
	__imp__sub_82137B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfze r8,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r11,29088(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// and r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 & ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82137CF0) {
	__imp__sub_82137CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82137D0C) {
	__imp__sub_82137D0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82137D18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82137d48
	if (ctx.cr6.eq) goto loc_82137D48;
loc_82137D3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82137D48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235aa48
	ctx.lr = 0x82137D54;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82137d3c
	if (ctx.cr6.eq) goto loc_82137D3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141340
	ctx.lr = 0x82137D68;
	sub_82141340(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8230c3d0
	ctx.lr = 0x82137D70;
	sub_8230C3D0(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82137db0
	if (!ctx.cr6.eq) goto loc_82137DB0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82141340
	ctx.lr = 0x82137D88;
	sub_82141340(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82137D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// neg r9,r3
	ctx.r9.s64 = -ctx.r3.s64;
	// andc r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r3.u64;
	// rlwinm r3,r8,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82137DB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235aa78
	ctx.lr = 0x82137DBC;
	sub_8235AA78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141340
	ctx.lr = 0x82137DC8;
	sub_82141340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82143158
	ctx.lr = 0x82137DD8;
	sub_82143158(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82137D10) {
	__imp__sub_82137D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137DE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82137DE0) {
	__imp__sub_82137DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82137DE4) {
	__imp__sub_82137DE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137DE8) {
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
	// bl 0x82310110
	ctx.lr = 0x82137E04;
	sub_82310110(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r31,r11,2912
	ctx.r31.s64 = ctx.r11.s64 + 2912;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x82137e28
	if (!ctx.cr6.lt) goto loc_82137E28;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x82137e48
	if (ctx.cr6.lt) goto loc_82137E48;
loc_82137E28:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82137e40
	if (!ctx.cr6.gt) goto loc_82137E40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821374c0
	ctx.lr = 0x82137E38;
	sub_821374C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82137E40:
	// bl 0x82310110
	ctx.lr = 0x82137E44;
	sub_82310110(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
loc_82137E48:
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

PPC_WEAK_FUNC(sub_82137DE8) {
	__imp__sub_82137DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137E60) {
	PPC_FUNC_PROLOGUE();
	// b 0x821434e8
	sub_821434E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82137E60) {
	__imp__sub_82137E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82137E64) {
	__imp__sub_82137E64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137E68) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x821434c8
	sub_821434C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82137E68) {
	__imp__sub_82137E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137E70) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x821434e8
	sub_821434E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82137E70) {
	__imp__sub_82137E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137E78) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8230b488
	ctx.lr = 0x82137E9C;
	sub_8230B488(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82137eac
	if (!ctx.cr6.eq) goto loc_82137EAC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82137ed4
	goto loc_82137ED4;
loc_82137EAC:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82137ed0
	if (!ctx.cr6.eq) goto loc_82137ED0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142a80
	ctx.lr = 0x82137EC0;
	sub_82142A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82137ed4
	if (ctx.cr6.eq) goto loc_82137ED4;
loc_82137ED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82137ED4:
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

PPC_WEAK_FUNC(sub_82137E78) {
	__imp__sub_82137E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82137EEC) {
	__imp__sub_82137EEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82137EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82141340
	ctx.lr = 0x82137F0C;
	sub_82141340(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8230b488
	ctx.lr = 0x82137F14;
	sub_8230B488(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82137f3c
	if (ctx.cr6.eq) goto loc_82137F3C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82137f48
	if (!ctx.cr6.eq) goto loc_82137F48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142a80
	ctx.lr = 0x82137F30;
	sub_82142A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82137f48
	if (!ctx.cr6.eq) goto loc_82137F48;
loc_82137F3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82137F48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235aa78
	ctx.lr = 0x82137F54;
	sub_8235AA78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143398
	ctx.lr = 0x82137F64;
	sub_82143398(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82137EF0) {
	__imp__sub_82137EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82137F6C) {
	__imp__sub_82137F6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82137F78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82141340
	ctx.lr = 0x82137F8C;
	sub_82141340(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8230b488
	ctx.lr = 0x82137F94;
	sub_8230B488(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82137fbc
	if (ctx.cr6.eq) goto loc_82137FBC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82137fc8
	if (!ctx.cr6.eq) goto loc_82137FC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142a80
	ctx.lr = 0x82137FB0;
	sub_82142A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82137fc8
	if (!ctx.cr6.eq) goto loc_82137FC8;
loc_82137FBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82137FC8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235aa78
	ctx.lr = 0x82137FD4;
	sub_8235AA78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82143470
	ctx.lr = 0x82137FE4;
	sub_82143470(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82137F70) {
	__imp__sub_82137F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82137FEC) {
	__imp__sub_82137FEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82137FF0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82137ef0
	ctx.lr = 0x82138010;
	sub_82137EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8213802c
	if (ctx.cr6.eq) goto loc_8213802C;
	// bl 0x821434e8
	ctx.lr = 0x82138028;
	sub_821434E8(ctx, base);
	// b 0x82138030
	goto loc_82138030;
loc_8213802C:
	// bl 0x821434c8
	ctx.lr = 0x82138030;
	sub_821434C8(ctx, base);
loc_82138030:
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

PPC_WEAK_FUNC(sub_82137FF0) {
	__imp__sub_82137FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82138050;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82138060:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235aa78
	ctx.lr = 0x8213806C;
	sub_8235AA78(ctx, base);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x821380c8
	if (ctx.cr6.eq) goto loc_821380C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82141340
	ctx.lr = 0x8213807C;
	sub_82141340(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8230b488
	ctx.lr = 0x82138084;
	sub_8230B488(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x821380c8
	if (ctx.cr6.eq) goto loc_821380C8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821380ac
	if (!ctx.cr6.eq) goto loc_821380AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82142a80
	ctx.lr = 0x821380A0;
	sub_82142A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821380c8
	if (ctx.cr6.eq) goto loc_821380C8;
loc_821380AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235aa78
	ctx.lr = 0x821380B8;
	sub_8235AA78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143398
	ctx.lr = 0x821380C8;
	sub_82143398(ctx, base);
loc_821380C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82138060
	if (ctx.cr6.lt) goto loc_82138060;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82138048) {
	__imp__sub_82138048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821380DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821380DC) {
	__imp__sub_821380DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821380E0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_821380FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235aa48
	ctx.lr = 0x82138108;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138120
	if (ctx.cr6.eq) goto loc_82138120;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821434e8
	ctx.lr = 0x82138120;
	sub_821434E8(ctx, base);
loc_82138120:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x821380fc
	if (ctx.cr6.lt) goto loc_821380FC;
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

PPC_WEAK_FUNC(sub_821380E0) {
	__imp__sub_821380E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82138144) {
	__imp__sub_82138144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82138150;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8230abe0
	ctx.lr = 0x8213815C;
	sub_8230ABE0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138298
	if (ctx.cr6.eq) goto loc_82138298;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230c3d0
	ctx.lr = 0x82138178;
	sub_8230C3D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821381b0
	if (!ctx.cr6.lt) goto loc_821381B0;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,8816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8816);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82138298
	if (ctx.cr6.eq) goto loc_82138298;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,1320
	ctx.r4.s64 = ctx.r11.s64 + 1320;
	// bl 0x82280900
	ctx.lr = 0x821381A8;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821381B0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c238
	ctx.lr = 0x821381BC;
	sub_8235C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82138298
	if (!ctx.cr6.eq) goto loc_82138298;
	// bl 0x82310110
	ctx.lr = 0x821381CC;
	sub_82310110(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rotlw r25,r11,r28
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r11.u32, ctx.r28.u8 & 0x1F);
	// addi r29,r30,144
	ctx.r29.s64 = ctx.r30.s64 + 144;
	// lis r24,-31936
	ctx.r24.s64 = -2092957696;
loc_821381E4:
	// lbz r10,-32(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + -32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82138288
	if (ctx.cr6.eq) goto loc_82138288;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82138288
	if (ctx.cr6.eq) goto loc_82138288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c050
	ctx.lr = 0x82138204;
	sub_8235C050(ctx, base);
	// bl 0x823728e8
	ctx.lr = 0x82138208;
	sub_823728E8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8213823c
	if (!ctx.cr6.eq) goto loc_8213823C;
	// lwz r11,-11144(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -11144);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213823c
	if (!ctx.cr6.eq) goto loc_8213823C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82141280
	ctx.lr = 0x82138228;
	sub_82141280(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82136708
	ctx.lr = 0x82138238;
	sub_82136708(ctx, base);
	// b 0x82138288
	goto loc_82138288;
loc_8213823C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821378c8
	ctx.lr = 0x82138248;
	sub_821378C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138288
	if (ctx.cr6.eq) goto loc_82138288;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// and r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 & ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82138288
	if (!ctx.cr6.eq) goto loc_82138288;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r26,-15000
	ctx.r10.s64 = ctx.r26.s64 + -15000;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82138288
	if (!ctx.cr6.lt) goto loc_82138288;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82141280
	ctx.lr = 0x8213827C;
	sub_82141280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82136518
	ctx.lr = 0x82138288;
	sub_82136518(ctx, base);
loc_82138288:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x821381e4
	if (ctx.cr6.lt) goto loc_821381E4;
loc_82138298:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82138148) {
	__imp__sub_82138148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821382A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x821382A8;
	__savegprlr_20(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4368(r1)
	ea = -4368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x822881b0
	ctx.lr = 0x821382C0;
	sub_822881B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821385c4
	if (ctx.cr6.lt) goto loc_821385C4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x821385c4
	if (!ctx.cr6.lt) goto loc_821385C4;
	// bl 0x8230abe0
	ctx.lr = 0x821382D8;
	sub_8230ABE0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82288638
	ctx.lr = 0x821382EC;
	sub_82288638(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82141340
	ctx.lr = 0x821382F4;
	sub_82141340(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8230c3d0
	ctx.lr = 0x821382FC;
	sub_8230C3D0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82138320
	if (!ctx.cr6.lt) goto loc_82138320;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,1880
	ctx.r4.s64 = ctx.r11.s64 + 1880;
	// bl 0x82280900
	ctx.lr = 0x82138318;
	sub_82280900(ctx, base);
	// addi r1,r1,4368
	ctx.r1.s64 = ctx.r1.s64 + 4368;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82138320:
	// li r20,1
	ctx.r20.s64 = 1;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r22,r30
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r30.s32, ctx.xer);
	// slw r11,r20,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r22.u8 & 0x3F));
	// andc r21,r6,r11
	ctx.r21.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// bne cr6,0x82138354
	if (!ctx.cr6.eq) goto loc_82138354;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,1800
	ctx.r4.s64 = ctx.r11.s64 + 1800;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213834C;
	sub_82280900(ctx, base);
	// addi r1,r1,4368
	ctx.r1.s64 = ctx.r1.s64 + 4368;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82138354:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822881b0
	ctx.lr = 0x8213835C;
	sub_822881B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821385a8
	if (!ctx.cr6.gt) goto loc_821385A8;
	// cmpwi cr6,r3,40
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 40, ctx.xer);
	// bgt cr6,0x821385a8
	if (ctx.cr6.gt) goto loc_821385A8;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287b40
	ctx.lr = 0x82138380;
	sub_82287B40(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x821383c8
	if (ctx.cr6.eq) goto loc_821383C8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,952
	ctx.r4.s64 = ctx.r11.s64 + 952;
	// bl 0x82288048
	ctx.lr = 0x82138398;
	sub_82288048(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287e08
	ctx.lr = 0x821383A4;
	sub_82287E08(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287e40
	ctx.lr = 0x821383BC;
	sub_82287E40(ctx, base);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287e08
	ctx.lr = 0x821383C8;
	sub_82287E08(ctx, base);
loc_821383C8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rotlw r27,r20,r22
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r20.u32, ctx.r22.u8 & 0x1F);
	// ble cr6,0x821384cc
	if (!ctx.cr6.gt) goto loc_821384CC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r26,-31835
	ctx.r26.s64 = -2086338560;
	// addi r29,r11,1720
	ctx.r29.s64 = ctx.r11.s64 + 1720;
	// addi r28,r10,1664
	ctx.r28.s64 = ctx.r10.s64 + 1664;
loc_821383E8:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,89
	ctx.r4.s64 = ctx.r1.s64 + 89;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82288638
	ctx.lr = 0x821383F8;
	sub_82288638(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82138410
	if (ctx.cr6.eq) goto loc_82138410;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,89
	ctx.r4.s64 = ctx.r1.s64 + 89;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287e40
	ctx.lr = 0x82138410;
	sub_82287E40(ctx, base);
loc_82138410:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82137ef0
	ctx.lr = 0x82138420;
	sub_82137EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213845c
	if (!ctx.cr6.eq) goto loc_8213845C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82138444
	if (ctx.cr6.eq) goto loc_82138444;
	// and r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 & ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213845c
	if (ctx.cr6.eq) goto loc_8213845C;
loc_82138444:
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r1,89
	ctx.r5.s64 = ctx.r1.s64 + 89;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82142f78
	ctx.lr = 0x82138458;
	sub_82142F78(ctx, base);
	// b 0x821384c4
	goto loc_821384C4;
loc_8213845C:
	// lwz r11,8816(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8816);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821384c4
	if (ctx.cr6.eq) goto loc_821384C4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82137ef0
	ctx.lr = 0x8213847C;
	sub_82137EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213849c
	if (ctx.cr6.eq) goto loc_8213849C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82138498;
	sub_82280900(ctx, base);
	// b 0x821384c4
	goto loc_821384C4;
loc_8213849C:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821384c4
	if (ctx.cr6.eq) goto loc_821384C4;
	// and r11,r27,r5
	ctx.r11.u64 = ctx.r27.u64 & ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821384c4
	if (ctx.cr6.eq) goto loc_821384C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821384C4;
	sub_82280900(ctx, base);
loc_821384C4:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821383e8
	if (!ctx.cr0.eq) goto loc_821383E8;
loc_821384CC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x821385d8
	if (ctx.cr6.eq) goto loc_821385D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,1576
	ctx.r28.s64 = ctx.r11.s64 + 1576;
	// addi r29,r10,1472
	ctx.r29.s64 = ctx.r10.s64 + 1472;
loc_821384E8:
	// slw r11,r20,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r31.u8 & 0x3F));
	// and r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 & ctx.r21.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82138594
	if (ctx.cr6.eq) goto loc_82138594;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8235aa48
	ctx.lr = 0x82138504;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82138528
	if (!ctx.cr6.eq) goto loc_82138528;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x82138524;
	sub_82280C30(ctx, base);
	// b 0x82138594
	goto loc_82138594;
loc_82138528:
	// cmpw cr6,r22,r31
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82138544
	if (!ctx.cr6.eq) goto loc_82138544;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x82138540;
	sub_82280C30(ctx, base);
	// b 0x82138594
	goto loc_82138594;
loc_82138544:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82138548:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821364c8
	ctx.lr = 0x82138554;
	sub_821364C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82136898
	ctx.lr = 0x82138570;
	sub_82136898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82138594
	if (!ctx.cr6.eq) goto loc_82138594;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x82138548
	if (ctx.cr6.lt) goto loc_82138548;
loc_82138594:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x821384e8
	if (ctx.cr6.lt) goto loc_821384E8;
	// addi r1,r1,4368
	ctx.r1.s64 = ctx.r1.s64 + 4368;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_821385A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,1400
	ctx.r4.s64 = ctx.r11.s64 + 1400;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821385BC;
	sub_82280900(ctx, base);
	// addi r1,r1,4368
	ctx.r1.s64 = ctx.r1.s64 + 4368;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_821385C4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,1032
	ctx.r4.s64 = ctx.r11.s64 + 1032;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821385D8;
	sub_82280900(ctx, base);
loc_821385D8:
	// addi r1,r1,4368
	ctx.r1.s64 = ctx.r1.s64 + 4368;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821382A0) {
	__imp__sub_821382A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821385E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821385E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subfze r8,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r11,29088(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82138714
	if (ctx.cr6.eq) goto loc_82138714;
	// bl 0x8230abe0
	ctx.lr = 0x82138618;
	sub_8230ABE0(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r11,2912
	ctx.r31.s64 = ctx.r11.s64 + 2912;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82143080
	ctx.lr = 0x82138640;
	sub_82143080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821386c4
	if (!ctx.cr6.gt) goto loc_821386C4;
loc_82138648:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821386a0
	if (ctx.cr6.lt) goto loc_821386A0;
	// bl 0x82310110
	ctx.lr = 0x82138660;
	sub_82310110(ctx, base);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,200
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 200, ctx.xer);
	// bge cr6,0x8213867c
	if (!ctx.cr6.lt) goto loc_8213867C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821386a0
	if (ctx.cr6.lt) goto loc_821386A0;
loc_8213867C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82138694
	if (!ctx.cr6.gt) goto loc_82138694;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821374c0
	ctx.lr = 0x8213868C;
	sub_821374C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82138694:
	// bl 0x82310110
	ctx.lr = 0x82138698;
	sub_82310110(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
loc_821386A0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82143080
	ctx.lr = 0x821386BC;
	sub_82143080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82138648
	if (ctx.cr6.gt) goto loc_82138648;
loc_821386C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82137de8
	ctx.lr = 0x821386CC;
	sub_82137DE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141340
	ctx.lr = 0x821386D4;
	sub_82141340(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8230bd68
	ctx.lr = 0x821386DC;
	sub_8230BD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821386f0
	if (ctx.cr6.eq) goto loc_821386F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82138148
	ctx.lr = 0x821386F0;
	sub_82138148(ctx, base);
loc_821386F0:
	// bl 0x82310110
	ctx.lr = 0x821386F4;
	sub_82310110(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// ble cr6,0x82138714
	if (!ctx.cr6.gt) goto loc_82138714;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82310110
	ctx.lr = 0x82138710;
	sub_82310110(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_82138714:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821385E0) {
	__imp__sub_821385E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213871C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213871C) {
	__imp__sub_8213871C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82138728;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,3032
	ctx.r29.s64 = ctx.r11.s64 + 3032;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82138748:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138790
	if (ctx.cr6.eq) goto loc_82138790;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x82138764;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213878c
	if (ctx.cr6.eq) goto loc_8213878C;
	// addi r31,r31,33
	ctx.r31.s64 = ctx.r31.s64 + 33;
	// addi r11,r29,8448
	ctx.r11.s64 = ctx.r29.s64 + 8448;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82138748
	if (ctx.cr6.lt) goto loc_82138748;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8213878C:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82138790:
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x821387a4
	if (ctx.cr6.lt) goto loc_821387A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821387A4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821387d0
	if (!ctx.cr6.eq) goto loc_821387D0;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,32
	ctx.r5.s64 = 32;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x822e7e98
	ctx.lr = 0x821387C8;
	sub_822E7E98(ctx, base);
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// stbx r27,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u8);
loc_821387D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82138720) {
	__imp__sub_82138720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821387DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821387DC) {
	__imp__sub_821387DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821387E0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,3032
	ctx.r10.s64 = ctx.r10.s64 + 3032;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r9,r10,8448
	ctx.r9.s64 = ctx.r10.s64 + 8448;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r3,27
	ctx.r7.u64 = ctx.r3.u32 & 0x1F;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r8,r10,8480
	ctx.r8.s64 = ctx.r10.s64 + 8480;
	// slw r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// not r3,r5
	ctx.r3.u64 = ~ctx.r5.u64;
	// addi r7,r10,8512
	ctx.r7.s64 = ctx.r10.s64 + 8512;
	// and r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 & ctx.r3.u64;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r9,r10,8544
	ctx.r9.s64 = ctx.r10.s64 + 8544;
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 & ctx.r3.u64;
	// stwx r4,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
	// addi r8,r10,8576
	ctx.r8.s64 = ctx.r10.s64 + 8576;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// and r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 & ctx.r3.u64;
	// stwx r5,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 & ctx.r3.u64;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r9,r10,8608
	ctx.r9.s64 = ctx.r10.s64 + 8608;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 & ctx.r3.u64;
	// stwx r5,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// addi r10,r10,8640
	ctx.r10.s64 = ctx.r10.s64 + 8640;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 & ctx.r3.u64;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 & ctx.r3.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821387E0) {
	__imp__sub_821387E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138890) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821388c8
	if (ctx.cr6.lt) goto loc_821388C8;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bge cr6,0x821388c8
	if (!ctx.cr6.lt) goto loc_821388C8;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r9,3032
	ctx.r11.s64 = ctx.r9.s64 + 3032;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821388c8
	if (ctx.cr6.eq) goto loc_821388C8;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lbzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_821388C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82138890) {
	__imp__sub_82138890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821388D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821388D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,3032
	ctx.r29.s64 = ctx.r11.s64 + 3032;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821388F4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138914
	if (ctx.cr6.eq) goto loc_82138914;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e8058
	ctx.lr = 0x8213890C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82138938
	if (ctx.cr6.eq) goto loc_82138938;
loc_82138914:
	// addi r31,r31,33
	ctx.r31.s64 = ctx.r31.s64 + 33;
	// addi r11,r29,8448
	ctx.r11.s64 = ctx.r29.s64 + 8448;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821388f4
	if (ctx.cr6.lt) goto loc_821388F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82138938:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8213894c
	if (ctx.cr6.lt) goto loc_8213894C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8213894C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821388D0) {
	__imp__sub_821388D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82138988
	if (ctx.cr6.lt) goto loc_82138988;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// bge cr6,0x82138988
	if (!ctx.cr6.lt) goto loc_82138988;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r8,r10,3032
	ctx.r8.s64 = ctx.r10.s64 + 3032;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82138988:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82138958) {
	__imp__sub_82138958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82138998;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,3032
	ctx.r31.s64 = ctx.r11.s64 + 3032;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r27,r31,33
	ctx.r27.s64 = ctx.r31.s64 + 33;
	// addi r25,r10,2360
	ctx.r25.s64 = ctx.r10.s64 + 2360;
	// addi r24,r11,2340
	ctx.r24.s64 = ctx.r11.s64 + 2340;
loc_821389D0:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138a78
	if (ctx.cr6.eq) goto loc_82138A78;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822e80c8
	ctx.lr = 0x821389E8;
	sub_822E80C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82138a78
	if (!ctx.cr6.eq) goto loc_82138A78;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r9,r31,8448
	ctx.r9.s64 = ctx.r31.s64 + 8448;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// and r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 & ctx.r30.u64;
	// beq cr6,0x82138a40
	if (ctx.cr6.eq) goto loc_82138A40;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82138a78
	if (!ctx.cr6.eq) goto loc_82138A78;
	// rlwinm r9,r29,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r31,8448
	ctx.r8.s64 = ctx.r31.s64 + 8448;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 | ctx.r30.u64;
	// b 0x82138a64
	goto loc_82138A64;
loc_82138A40:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82138a78
	if (ctx.cr6.eq) goto loc_82138A78;
	// rlwinm r9,r29,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r31,8448
	ctx.r8.s64 = ctx.r31.s64 + 8448;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r30.u64;
loc_82138A64:
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82138A74;
	sub_82280900(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82138A78:
	// addi r27,r27,33
	ctx.r27.s64 = ctx.r27.s64 + 33;
	// addi r11,r31,8448
	ctx.r11.s64 = ctx.r31.s64 + 8448;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821389d0
	if (ctx.cr6.lt) goto loc_821389D0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82138aa8
	if (!ctx.cr6.eq) goto loc_82138AA8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,2308
	ctx.r4.s64 = ctx.r11.s64 + 2308;
	// bl 0x82280900
	ctx.lr = 0x82138AA8;
	sub_82280900(ctx, base);
loc_82138AA8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82138990) {
	__imp__sub_82138990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r10,3032
	ctx.r9.s64 = ctx.r10.s64 + 3032;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82138b84
	if (ctx.cr6.eq) goto loc_82138B84;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82138b08
	if (!ctx.cr6.eq) goto loc_82138B08;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82138af0
	if (ctx.cr6.eq) goto loc_82138AF0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82138af0
	if (ctx.cr6.eq) goto loc_82138AF0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82138af4
	if (!ctx.cr6.eq) goto loc_82138AF4;
loc_82138AF0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82138AF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82138b84
	if (!ctx.cr6.eq) goto loc_82138B84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82138b10
	goto loc_82138B10;
loc_82138B08:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82138b20
	if (!ctx.cr6.eq) goto loc_82138B20;
loc_82138B10:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82138b20
	if (!ctx.cr6.eq) goto loc_82138B20;
loc_82138B18:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82138B20:
	// srawi r10,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 5;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r6,r4,27
	ctx.r6.u64 = ctx.r4.u32 & 0x1F;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r9,8448
	ctx.r8.s64 = ctx.r9.s64 + 8448;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r10,r11,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r8,r4,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82138b18
	if (!ctx.cr6.eq) goto loc_82138B18;
	// srawi r11,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82138b68
	if (ctx.cr6.eq) goto loc_82138B68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82138b84
	if (!ctx.cr6.eq) goto loc_82138B84;
loc_82138B68:
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r9,8448
	ctx.r10.s64 = ctx.r9.s64 + 8448;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82138B84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82138AB0) {
	__imp__sub_82138AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82138B8C) {
	__imp__sub_82138B8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82138B98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,3032
	ctx.r29.s64 = ctx.r11.s64 + 3032;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r28,r11,-27340
	ctx.r28.s64 = ctx.r11.s64 + -27340;
loc_82138BB4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82138bd8
	if (ctx.cr6.eq) goto loc_82138BD8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138bd8
	if (ctx.cr6.eq) goto loc_82138BD8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82138BD8;
	sub_82280900(ctx, base);
loc_82138BD8:
	// addi r31,r31,33
	ctx.r31.s64 = ctx.r31.s64 + 33;
	// addi r11,r29,8448
	ctx.r11.s64 = ctx.r29.s64 + 8448;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82138bb4
	if (ctx.cr6.lt) goto loc_82138BB4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82138B90) {
	__imp__sub_82138B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82138BF4) {
	__imp__sub_82138BF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82138C00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,-17592
	ctx.r30.s64 = ctx.r11.s64 + -17592;
	// addi r9,r30,68
	ctx.r9.s64 = ctx.r30.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bge cr6,0x82138c74
	if (!ctx.cr6.lt) goto loc_82138C74;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82138c54
	if (!ctx.cr6.gt) goto loc_82138C54;
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,2400
	ctx.r4.s64 = ctx.r11.s64 + 2400;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82280900
	ctx.lr = 0x82138C4C;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82138C54:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,2400
	ctx.r4.s64 = ctx.r11.s64 + 2400;
	// bl 0x82280900
	ctx.lr = 0x82138C6C;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82138C74:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x82138cd8
	if (!ctx.cr6.gt) goto loc_82138CD8;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r26,r10,-28736
	ctx.r26.s64 = ctx.r10.s64 + -28736;
	// b 0x82138c94
	goto loc_82138C94;
loc_82138C90:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82138C94:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82138cb8
	if (!ctx.cr6.lt) goto loc_82138CB8;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r4,r9,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// b 0x82138cbc
	goto loc_82138CBC;
loc_82138CB8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82138CBC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82138990
	ctx.lr = 0x82138CC8;
	sub_82138990(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82138c90
	if (ctx.cr6.lt) goto loc_82138C90;
loc_82138CD8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,2380
	ctx.r4.s64 = ctx.r11.s64 + 2380;
	// bl 0x8227cf18
	ctx.lr = 0x82138CE8;
	sub_8227CF18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82138BF8) {
	__imp__sub_82138BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138CF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82138bf8
	sub_82138BF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82138CF0) {
	__imp__sub_82138CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138CF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82138bf8
	sub_82138BF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82138CF8) {
	__imp__sub_82138CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82138D08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,3032
	ctx.r28.s64 = ctx.r11.s64 + 3032;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r27,r11,-27340
	ctx.r27.s64 = ctx.r11.s64 + -27340;
loc_82138D28:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82138d74
	if (ctx.cr6.eq) goto loc_82138D74;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138d58
	if (ctx.cr6.eq) goto loc_82138D58;
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// addi r10,r28,8448
	ctx.r10.s64 = ctx.r28.s64 + 8448;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// and r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 & ctx.r29.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r11,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82138D58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138d74
	if (ctx.cr6.eq) goto loc_82138D74;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82138D74;
	sub_82280900(ctx, base);
loc_82138D74:
	// addi r31,r31,33
	ctx.r31.s64 = ctx.r31.s64 + 33;
	// addi r11,r28,8448
	ctx.r11.s64 = ctx.r28.s64 + 8448;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82138d28
	if (ctx.cr6.lt) goto loc_82138D28;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82138D00) {
	__imp__sub_82138D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82138D94) {
	__imp__sub_82138D94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82138DA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,2460
	ctx.r4.s64 = ctx.r11.s64 + 2460;
	// bl 0x822d3ad0
	ctx.lr = 0x82138DB4;
	sub_822D3AD0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r27,r11,-29604
	ctx.r27.s64 = ctx.r11.s64 + -29604;
	// addi r30,r10,3032
	ctx.r30.s64 = ctx.r10.s64 + 3032;
loc_82138DCC:
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138e10
	if (ctx.cr6.eq) goto loc_82138E10;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82138df4
	if (!ctx.cr6.eq) goto loc_82138DF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82138e10
	goto loc_82138E10;
loc_82138DF4:
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// addi r10,r30,8448
	ctx.r10.s64 = ctx.r30.s64 + 8448;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// and r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 & ctx.r29.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r11,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82138E10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138e28
	if (ctx.cr6.eq) goto loc_82138E28;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d3ad0
	ctx.lr = 0x82138E28;
	sub_822D3AD0(ctx, base);
loc_82138E28:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x82138dcc
	if (ctx.cr6.lt) goto loc_82138DCC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-27364
	ctx.r4.s64 = ctx.r11.s64 + -27364;
	// bl 0x822d3ad0
	ctx.lr = 0x82138E48;
	sub_822D3AD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82138D98) {
	__imp__sub_82138D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82138E58;
	__savegprlr_24(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82138E68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82138e68
	if (!ctx.cr6.eq) goto loc_82138E68;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-5976
	ctx.r4.s64 = ctx.r10.s64 + -5976;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// rotlwi r25,r9,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x82138990
	ctx.lr = 0x82138EA4;
	sub_82138990(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r24,r11,2496
	ctx.r24.s64 = ctx.r11.s64 + 2496;
loc_82138EB0:
	// lbzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82138ee8
	if (ctx.cr6.eq) goto loc_82138EE8;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// beq cr6,0x82138ee8
	if (ctx.cr6.eq) goto loc_82138EE8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82138ee8
	if (ctx.cr6.eq) goto loc_82138EE8;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82138f40
	if (!ctx.cr6.eq) goto loc_82138F40;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82138f40
	goto loc_82138F40;
loc_82138EE8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138f40
	if (ctx.cr6.eq) goto loc_82138F40;
	// subf r31,r29,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r29.s64;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// ble cr6,0x82138f14
	if (!ctx.cr6.gt) goto loc_82138F14;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82138F14;
	sub_822830E8(ctx, base);
loc_82138F14:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de1f0
	ctx.lr = 0x82138F24;
	sub_823DE1F0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stbx r26,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r26.u8);
	// bl 0x82138990
	ctx.lr = 0x82138F3C;
	sub_82138990(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82138F40:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82138eb0
	if (!ctx.cr6.gt) goto loc_82138EB0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82138E50) {
	__imp__sub_82138E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82138F54) {
	__imp__sub_82138F54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82138F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82138F60;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r29,r11,11824
	ctx.r29.s64 = ctx.r11.s64 + 11824;
	// addi r30,r10,11704
	ctx.r30.s64 = ctx.r10.s64 + 11704;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,4
	ctx.r27.s64 = 4;
	// addi r24,r9,4592
	ctx.r24.s64 = ctx.r9.s64 + 4592;
	// addi r25,r10,11804
	ctx.r25.s64 = ctx.r10.s64 + 11804;
	// addi r26,r11,2184
	ctx.r26.s64 = ctx.r11.s64 + 2184;
loc_82138F98:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823df2b0
	ctx.lr = 0x82138FA8;
	sub_823DF2B0(ctx, base);
	// addi r4,r26,32
	ctx.r4.s64 = ctx.r26.s64 + 32;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823df2b0
	ctx.lr = 0x82138FB8;
	sub_823DF2B0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwzx r4,r28,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e17e0
	ctx.lr = 0x82138FCC;
	sub_822E17E0(ctx, base);
	// stwx r3,r28,r25
	PPC_STORE_U32(ctx.r28.u32 + ctx.r25.u32, ctx.r3.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,25
	ctx.r30.s64 = ctx.r30.s64 + 25;
	// addi r29,r29,91
	ctx.r29.s64 = ctx.r29.s64 + 91;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82138f98
	if (!ctx.cr0.eq) goto loc_82138F98;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r25,-4
	ctx.r30.s64 = ctx.r25.s64 + -4;
loc_82138FF0:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 3;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82138e50
	ctx.lr = 0x82139000;
	sub_82138E50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x82138ff0
	if (ctx.cr6.lt) goto loc_82138FF0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82138F58) {
	__imp__sub_82138F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82139014) {
	__imp__sub_82139014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82139020;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// addi r29,r11,3032
	ctx.r29.s64 = ctx.r11.s64 + 3032;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de090
	ctx.lr = 0x8213903C;
	sub_823DE090(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r31,26
	ctx.r31.s64 = 26;
	// addi r11,r11,4488
	ctx.r11.s64 = ctx.r11.s64 + 4488;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_8213904C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82138720
	ctx.lr = 0x82139058;
	sub_82138720(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8213904c
	if (!ctx.cr0.eq) goto loc_8213904C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r11,824(r29)
	PPC_STORE_U8(ctx.r29.u32 + 824, ctx.r11.u8);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r6,r10,2648
	ctx.r6.s64 = ctx.r10.s64 + 2648;
	// addi r4,r9,-5976
	ctx.r4.s64 = ctx.r9.s64 + -5976;
	// addi r3,r8,2620
	ctx.r3.s64 = ctx.r8.s64 + 2620;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e17e0
	ctx.lr = 0x82139088;
	sub_822E17E0(ctx, base);
	// stw r3,8788(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8788, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82138990
	ctx.lr = 0x821390A0;
	sub_82138990(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r7,2616
	ctx.r4.s64 = ctx.r7.s64 + 2616;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82138990
	ctx.lr = 0x821390B4;
	sub_82138990(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r6,2164
	ctx.r31.s64 = ctx.r6.s64 + 2164;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82138990
	ctx.lr = 0x821390CC;
	sub_82138990(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82138990
	ctx.lr = 0x821390DC;
	sub_82138990(ctx, base);
	// bl 0x82138f58
	ctx.lr = 0x821390E0;
	sub_82138F58(ctx, base);
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,12248
	ctx.r5.s64 = ctx.r5.s64 + 12248;
	// addi r3,r3,2600
	ctx.r3.s64 = ctx.r3.s64 + 2600;
	// addi r4,r4,-29808
	ctx.r4.s64 = ctx.r4.s64 + -29808;
	// bl 0x8227da10
	ctx.lr = 0x821390FC;
	sub_8227DA10(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,12228
	ctx.r5.s64 = ctx.r11.s64 + 12228;
	// addi r3,r9,2584
	ctx.r3.s64 = ctx.r9.s64 + 2584;
	// addi r4,r10,-29456
	ctx.r4.s64 = ctx.r10.s64 + -29456;
	// bl 0x8227da10
	ctx.lr = 0x82139118;
	sub_8227DA10(ctx, base);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,12208
	ctx.r5.s64 = ctx.r8.s64 + 12208;
	// addi r3,r6,2568
	ctx.r3.s64 = ctx.r6.s64 + 2568;
	// addi r4,r7,-29448
	ctx.r4.s64 = ctx.r7.s64 + -29448;
	// bl 0x8227da10
	ctx.lr = 0x82139134;
	sub_8227DA10(ctx, base);
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,12188
	ctx.r5.s64 = ctx.r5.s64 + 12188;
	// addi r3,r3,2544
	ctx.r3.s64 = ctx.r3.s64 + 2544;
	// addi r4,r4,-29440
	ctx.r4.s64 = ctx.r4.s64 + -29440;
	// bl 0x8227da10
	ctx.lr = 0x82139150;
	sub_8227DA10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139018) {
	__imp__sub_82139018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139158) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_8213916C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821387e0
	ctx.lr = 0x82139174;
	sub_821387E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x8213916c
	if (ctx.cr6.lt) goto loc_8213916C;
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

PPC_WEAK_FUNC(sub_82139158) {
	__imp__sub_82139158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82139194) {
	__imp__sub_82139194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821391A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r28,r11,3032
	ctx.r28.s64 = ctx.r11.s64 + 3032;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r28,33
	ctx.r9.s64 = ctx.r28.s64 + 33;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821391C0:
	// lbz r8,-33(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821391d0
	if (ctx.cr6.eq) goto loc_821391D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821391D0:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821391e0
	if (ctx.cr6.eq) goto loc_821391E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821391E0:
	// lbz r8,33(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821391f0
	if (ctx.cr6.eq) goto loc_821391F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821391F0:
	// lbz r8,66(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 66);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82139200
	if (ctx.cr6.eq) goto loc_82139200;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82139200:
	// addi r9,r9,132
	ctx.r9.s64 = ctx.r9.s64 + 132;
	// bdnz 0x821391c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821391C0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8213921C;
	sub_822E40F0(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82139224:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139288
	if (ctx.cr6.eq) goto loc_82139288;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82139234:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82139234
	if (!ctx.cr6.eq) goto loc_82139234;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822e40f0
	ctx.lr = 0x82139264;
	sub_822E40F0(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82139278;
	sub_822E40F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82139288;
	sub_822E40F0(ctx, base);
loc_82139288:
	// addi r31,r31,33
	ctx.r31.s64 = ctx.r31.s64 + 33;
	// addi r11,r28,8448
	ctx.r11.s64 = ctx.r28.s64 + 8448;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82139224
	if (ctx.cr6.lt) goto loc_82139224;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139198) {
	__imp__sub_82139198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821392A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821392A4) {
	__imp__sub_821392A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821392A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821392B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822e4480
	ctx.lr = 0x821392C4;
	sub_822E4480(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// beq cr6,0x821393a4
	if (ctx.cr6.eq) goto loc_821393A4;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r10,3032
	ctx.r27.s64 = ctx.r10.s64 + 3032;
	// addi r25,r11,-5628
	ctx.r25.s64 = ctx.r11.s64 + -5628;
loc_821392E8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e4480
	ctx.lr = 0x821392F8;
	sub_822E4480(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8213930c
	if (ctx.cr6.lt) goto loc_8213930C;
	// cmpwi cr6,r29,256
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 256, ctx.xer);
	// blt cr6,0x82139314
	if (ctx.cr6.lt) goto loc_82139314;
loc_8213930C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8230d720
	ctx.lr = 0x82139314;
	sub_8230D720(ctx, base);
loc_82139314:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e4480
	ctx.lr = 0x82139324;
	sub_822E4480(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82139338
	if (ctx.cr6.eq) goto loc_82139338;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// blt cr6,0x82139340
	if (ctx.cr6.lt) goto loc_82139340;
loc_82139338:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8230d720
	ctx.lr = 0x82139340;
	sub_8230D720(ctx, base);
loc_82139340:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e4480
	ctx.lr = 0x82139350;
	sub_822E4480(ctx, base);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stbx r26,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u8);
	// lbzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8213938c
	if (ctx.cr6.eq) goto loc_8213938C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8058
	ctx.lr = 0x8213937C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213939c
	if (ctx.cr6.eq) goto loc_8213939C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821387e0
	ctx.lr = 0x8213938C;
	sub_821387E0(ctx, base);
loc_8213938C:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8213939C;
	sub_822E7E98(ctx, base);
loc_8213939C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x821392e8
	if (!ctx.cr0.eq) goto loc_821392E8;
loc_821393A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821392A8) {
	__imp__sub_821392A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821393AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821393AC) {
	__imp__sub_821393AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821393B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821393d8
	if (ctx.cr6.eq) goto loc_821393D8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821393dc
	if (!ctx.cr6.eq) goto loc_821393DC;
loc_821393D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821393DC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821393B0) {
	__imp__sub_821393B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821393E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821393E4) {
	__imp__sub_821393E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821393E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r10,r11,12280
	ctx.r10.s64 = ctx.r11.s64 + 12280;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821393E8) {
	__imp__sub_821393E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821393F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821393F8) {
	__imp__sub_821393F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lbz r3,12280(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12280);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82139410) {
	__imp__sub_82139410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213941C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213941C) {
	__imp__sub_8213941C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139420) {
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
	// lis r30,-32154
	ctx.r30.s64 = -2107244544;
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r31,r30,12272
	ctx.r31.s64 = ctx.r30.s64 + 12272;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x823de090
	ctx.lr = 0x8213944C;
	sub_823DE090(ctx, base);
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-360
	ctx.r11.s64 = ctx.r11.s64 + -360;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r6,r10,2888
	ctx.r6.s64 = ctx.r10.s64 + 2888;
	// addi r3,r9,2872
	ctx.r3.s64 = ctx.r9.s64 + 2872;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82139474;
	sub_822E15D0(ctx, base);
	// stw r3,12272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12272, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r3,r7,2852
	ctx.r3.s64 = ctx.r7.s64 + 2852;
	// addi r8,r8,2816
	ctx.r8.s64 = ctx.r8.s64 + 2816;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x822e1618
	ctx.lr = 0x821394A0;
	sub_822E1618(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82139420) {
	__imp__sub_82139420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821394BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821394BC) {
	__imp__sub_821394BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821394C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,12280
	ctx.r9.s64 = ctx.r10.s64 + 12280;
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821394C0) {
	__imp__sub_821394C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821394D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821394D4) {
	__imp__sub_821394D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821394D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821394E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213950c
	if (ctx.cr6.eq) goto loc_8213950C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82139510
	if (!ctx.cr6.eq) goto loc_82139510;
loc_8213950C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82139510:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139558
	if (ctx.cr6.eq) goto loc_82139558;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,2047
	ctx.r31.s64 = 2047;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821201c0
	ctx.lr = 0x82139544;
	sub_821201C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82364b50
	ctx.lr = 0x82139558;
	sub_82364B50(ctx, base);
loc_82139558:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821394D8) {
	__imp__sub_821394D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139560) {
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
	// bl 0x82141b20
	ctx.lr = 0x82139570;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821395ac
	if (ctx.cr6.eq) goto loc_821395AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,2976
	ctx.r4.s64 = ctx.r11.s64 + 2976;
	// bl 0x822c3928
	ctx.lr = 0x8213958C;
	sub_822C3928(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,2944
	ctx.r4.s64 = ctx.r10.s64 + 2944;
	// bl 0x822c3928
	ctx.lr = 0x8213959C;
	sub_822C3928(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r9,2920
	ctx.r4.s64 = ctx.r9.s64 + 2920;
	// bl 0x822c3928
	ctx.lr = 0x821395AC;
	sub_822C3928(ctx, base);
loc_821395AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82139560) {
	__imp__sub_82139560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821395BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821395BC) {
	__imp__sub_821395BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821395C0) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,12280
	ctx.r30.s64 = ctx.r11.s64 + 12280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x821395EC;
	sub_8235AA60(ctx, base);
	// bl 0x8230b018
	ctx.lr = 0x821395F0;
	sub_8230B018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139608
	if (ctx.cr6.eq) goto loc_82139608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x82139604;
	sub_82141340(ctx, base);
	// bl 0x8230fd20
	ctx.lr = 0x82139608;
	sub_8230FD20(ctx, base);
loc_82139608:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8235b930
	ctx.lr = 0x82139614;
	sub_8235B930(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,3004
	ctx.r3.s64 = ctx.r11.s64 + 3004;
	// bl 0x821394d8
	ctx.lr = 0x82139620;
	sub_821394D8(ctx, base);
	// bl 0x82141b20
	ctx.lr = 0x82139624;
	sub_82141B20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82139660
	if (ctx.cr6.eq) goto loc_82139660;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,2976
	ctx.r4.s64 = ctx.r11.s64 + 2976;
	// bl 0x822c3928
	ctx.lr = 0x82139640;
	sub_822C3928(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,2944
	ctx.r4.s64 = ctx.r10.s64 + 2944;
	// bl 0x822c3928
	ctx.lr = 0x82139650;
	sub_822C3928(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r9,2920
	ctx.r4.s64 = ctx.r9.s64 + 2920;
	// bl 0x822c3928
	ctx.lr = 0x82139660;
	sub_822C3928(ctx, base);
loc_82139660:
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

PPC_WEAK_FUNC(sub_821395C0) {
	__imp__sub_821395C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r10,r11,12280
	ctx.r10.s64 = ctx.r11.s64 + 12280;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8235a9b0
	sub_8235A9B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139678) {
	__imp__sub_82139678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// addi r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 + 52;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82139688) {
	__imp__sub_82139688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821396A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// addi r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 + 52;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821396A0) {
	__imp__sub_821396A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821396B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// addi r11,r8,12280
	ctx.r11.s64 = ctx.r8.s64 + 12280;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r8,r11,60
	ctx.r8.s64 = ctx.r11.s64 + 60;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r4,r7,3020
	ctx.r4.s64 = ctx.r7.s64 + 3020;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821396B8) {
	__imp__sub_821396B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821396F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821396F0) {
	__imp__sub_821396F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139708) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// addi r11,r8,12280
	ctx.r11.s64 = ctx.r8.s64 + 12280;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r4,r7,3064
	ctx.r4.s64 = ctx.r7.s64 + 3064;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139708) {
	__imp__sub_82139708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82139740) {
	__imp__sub_82139740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// addi r11,r11,12280
	ctx.r11.s64 = ctx.r11.s64 + 12280;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82139758) {
	__imp__sub_82139758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139770) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213979C;
	sub_8235AA60(ctx, base);
	// bl 0x8230afc8
	ctx.lr = 0x821397A0;
	sub_8230AFC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821397cc
	if (ctx.cr6.lt) goto loc_821397CC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821432c8
	ctx.lr = 0x821397B4;
	sub_821432C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mulli r10,r30,56
	ctx.r10.s64 = ctx.r30.s64 * 56;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// subfe r7,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r7,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
loc_821397CC:
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82139770) {
	__imp__sub_82139770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821397F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821397F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r11,12280
	ctx.r29.s64 = ctx.r11.s64 + 12280;
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r28,120(r10)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r10.u32 + 120);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82143398
	ctx.lr = 0x82139830;
	sub_82143398(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82139848
	if (ctx.cr6.eq) goto loc_82139848;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82139848:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139770
	ctx.lr = 0x82139850;
	sub_82139770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82139860
	if (!ctx.cr6.eq) goto loc_82139860;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82139860:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82143158
	ctx.lr = 0x82139870;
	sub_82143158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821397F0) {
	__imp__sub_821397F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213988C) {
	__imp__sub_8213988C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82139898;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r10,12280
	ctx.r29.s64 = ctx.r10.s64 + 12280;
	// addi r28,r11,2732
	ctx.r28.s64 = ctx.r11.s64 + 2732;
loc_821398B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8235aa48
	ctx.lr = 0x821398BC;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139918
	if (ctx.cr6.eq) goto loc_82139918;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8235c1c8
	ctx.lr = 0x821398D8;
	sub_8235C1C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r4,r9,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8228a280
	ctx.lr = 0x821398FC;
	sub_8228A280(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82139918
	if (!ctx.cr6.eq) goto loc_82139918;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r30,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228a990
	ctx.lr = 0x82139918;
	sub_8228A990(ctx, base);
loc_82139918:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x821398b0
	if (ctx.cr6.lt) goto loc_821398B0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139890) {
	__imp__sub_82139890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213992C) {
	__imp__sub_8213992C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139930) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213996c
	if (ctx.cr6.eq) goto loc_8213996C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82139970
	if (!ctx.cr6.eq) goto loc_82139970;
loc_8213996C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82139970:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139980
	if (ctx.cr6.eq) goto loc_82139980;
	// bl 0x82139890
	ctx.lr = 0x82139980;
	sub_82139890(ctx, base);
loc_82139980:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82139984:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa48
	ctx.lr = 0x82139990;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821399a4
	if (ctx.cr6.eq) goto loc_821399A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821395c0
	ctx.lr = 0x821399A4;
	sub_821395C0(ctx, base);
loc_821399A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82139984
	if (ctx.cr6.lt) goto loc_82139984;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x8235d2e8
	ctx.lr = 0x821399C0;
	sub_8235D2E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_82139930) {
	__imp__sub_82139930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821399E0) {
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
	// bl 0x82139930
	ctx.lr = 0x821399F8;
	sub_82139930(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3108
	ctx.r4.s64 = ctx.r11.s64 + 3108;
	// bl 0x8227cf18
	ctx.lr = 0x82139A08;
	sub_8227CF18(ctx, base);
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

PPC_WEAK_FUNC(sub_821399E0) {
	__imp__sub_821399E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82139A1C) {
	__imp__sub_82139A1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82139A28;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,12280
	ctx.r30.s64 = ctx.r11.s64 + 12280;
loc_82139A44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8235aa48
	ctx.lr = 0x82139A50;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139a8c
	if (ctx.cr6.eq) goto loc_82139A8C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235c1c8
	ctx.lr = 0x82139A6C;
	sub_8235C1C8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8228a208
	ctx.lr = 0x82139A84;
	sub_8228A208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82139aa4
	if (!ctx.cr6.eq) goto loc_82139AA4;
loc_82139A8C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82139a44
	if (ctx.cr6.lt) goto loc_82139A44;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82139AA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139A20) {
	__imp__sub_82139A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139AB0) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,12280
	ctx.r10.s64 = ctx.r11.s64 + 12280;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8235c248
	ctx.lr = 0x82139ADC;
	sub_8235C248(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r4,r9,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82139a20
	ctx.lr = 0x82139AF0;
	sub_82139A20(ctx, base);
	// subf r8,r3,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
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

PPC_WEAK_FUNC(sub_82139AB0) {
	__imp__sub_82139AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82139B14) {
	__imp__sub_82139B14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139B18) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// lbz r11,12280(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82139b58
	if (!ctx.cr6.eq) goto loc_82139B58;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3116
	ctx.r4.s64 = ctx.r11.s64 + 3116;
	// bl 0x82280a68
	ctx.lr = 0x82139B54;
	sub_82280A68(ctx, base);
	// b 0x82139b84
	goto loc_82139B84;
loc_82139B58:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82139a20
	ctx.lr = 0x82139B68;
	sub_82139A20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82139b84
	if (ctx.cr6.lt) goto loc_82139B84;
	// bl 0x82310110
	ctx.lr = 0x82139B78;
	sub_82310110(ctx, base);
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
loc_82139B84:
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

PPC_WEAK_FUNC(sub_82139B18) {
	__imp__sub_82139B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82139B9C) {
	__imp__sub_82139B9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82139BA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82139a20
	ctx.lr = 0x82139BC4;
	sub_82139A20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,25
	ctx.r3.s64 = 25;
	// bge cr6,0x82139be8
	if (!ctx.cr6.lt) goto loc_82139BE8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,3212
	ctx.r4.s64 = ctx.r11.s64 + 3212;
	// bl 0x82280a68
	ctx.lr = 0x82139BE0;
	sub_82280A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82139BE8:
	// lis r29,-32154
	ctx.r29.s64 = -2107244544;
	// mulli r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 * 56;
	// addi r11,r29,12280
	ctx.r11.s64 = ctx.r29.s64 + 12280;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r4,r9,3168
	ctx.r4.s64 = ctx.r9.s64 + 3168;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82280900
	ctx.lr = 0x82139C0C;
	sub_82280900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821395c0
	ctx.lr = 0x82139C14;
	sub_821395C0(ctx, base);
	// lbz r8,12280(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12280);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82139c34
	if (!ctx.cr6.eq) goto loc_82139C34;
	// bl 0x82139930
	ctx.lr = 0x82139C24;
	sub_82139930(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,3108
	ctx.r4.s64 = ctx.r11.s64 + 3108;
	// bl 0x8227cf18
	ctx.lr = 0x82139C34;
	sub_8227CF18(ctx, base);
loc_82139C34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139BA0) {
	__imp__sub_82139BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82139C3C) {
	__imp__sub_82139C3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82139C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// addi r29,r11,12280
	ctx.r29.s64 = ctx.r11.s64 + 12280;
	// lbz r11,12280(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82139c7c
	if (!ctx.cr6.eq) goto loc_82139C7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3352
	ctx.r4.s64 = ctx.r11.s64 + 3352;
	// bl 0x82280a68
	ctx.lr = 0x82139C74;
	sub_82280A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82139C7C:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r31,r11,-22504
	ctx.r31.s64 = ctx.r11.s64 + -22504;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-22504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22504);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82139cb4
	if (ctx.cr6.eq) goto loc_82139CB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3316
	ctx.r4.s64 = ctx.r11.s64 + 3316;
	// bl 0x82280a68
	ctx.lr = 0x82139CAC;
	sub_82280A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82139CB4:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82139a20
	ctx.lr = 0x82139CC4;
	sub_82139A20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82139ce8
	if (!ctx.cr6.lt) goto loc_82139CE8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3264
	ctx.r4.s64 = ctx.r11.s64 + 3264;
	// bl 0x82280a68
	ctx.lr = 0x82139CE0;
	sub_82280A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82139CE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82139d10
	if (!ctx.cr6.gt) goto loc_82139D10;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82139d18
	goto loc_82139D18;
loc_82139D10:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82139D18:
	// bl 0x823deaf8
	ctx.lr = 0x82139D1C;
	sub_823DEAF8(ctx, base);
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// addi r10,r29,52
	ctx.r10.s64 = ctx.r29.s64 + 52;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139C40) {
	__imp__sub_82139C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82139D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// addi r29,r11,12280
	ctx.r29.s64 = ctx.r11.s64 + 12280;
	// lbz r11,12280(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82139d6c
	if (!ctx.cr6.eq) goto loc_82139D6C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3488
	ctx.r4.s64 = ctx.r11.s64 + 3488;
	// bl 0x82280a68
	ctx.lr = 0x82139D64;
	sub_82280A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82139D6C:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r31,r11,-22504
	ctx.r31.s64 = ctx.r11.s64 + -22504;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-22504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22504);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82139da4
	if (ctx.cr6.eq) goto loc_82139DA4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3456
	ctx.r4.s64 = ctx.r11.s64 + 3456;
	// bl 0x82280a68
	ctx.lr = 0x82139D9C;
	sub_82280A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82139DA4:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82139a20
	ctx.lr = 0x82139DB4;
	sub_82139A20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82139dd8
	if (!ctx.cr6.lt) goto loc_82139DD8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3408
	ctx.r4.s64 = ctx.r11.s64 + 3408;
	// bl 0x82280a68
	ctx.lr = 0x82139DD0;
	sub_82280A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82139DD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82139e00
	if (!ctx.cr6.gt) goto loc_82139E00;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82139e08
	goto loc_82139E08;
loc_82139E00:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82139E08:
	// bl 0x823deaf8
	ctx.lr = 0x82139E0C;
	sub_823DEAF8(ctx, base);
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r9,r29,56
	ctx.r9.s64 = ctx.r29.s64 + 56;
	// subfe r8,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139D30) {
	__imp__sub_82139D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82139E30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,2752
	ctx.r30.s64 = ctx.r11.s64 + 2752;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,2752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2752);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82139e84
	if (ctx.cr6.eq) goto loc_82139E84;
loc_82139E60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82139E6C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82139e90
	if (ctx.cr6.eq) goto loc_82139E90;
	// lwzu r11,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82139e60
	if (!ctx.cr6.eq) goto loc_82139E60;
loc_82139E84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82139E90:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r31,r11,12272
	ctx.r31.s64 = ctx.r11.s64 + 12272;
	// lwz r11,12272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12272);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139ebc
	if (ctx.cr6.eq) goto loc_82139EBC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,3568
	ctx.r4.s64 = ctx.r11.s64 + 3568;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x82139EBC;
	sub_82280900(ctx, base);
loc_82139EBC:
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139edc
	if (ctx.cr6.eq) goto loc_82139EDC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82139ee0
	if (!ctx.cr6.eq) goto loc_82139EE0;
loc_82139EDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82139EE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139f18
	if (ctx.cr6.eq) goto loc_82139F18;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82139F18:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,3540
	ctx.r4.s64 = ctx.r11.s64 + 3540;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x82139F2C;
	sub_82280900(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139E28) {
	__imp__sub_82139E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139F38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,12280
	ctx.r9.s64 = ctx.r10.s64 + 12280;
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82139F38) {
	__imp__sub_82139F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82139F4C) {
	__imp__sub_82139F4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,12280
	ctx.r10.s64 = ctx.r11.s64 + 12280;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8235aa48
	sub_8235AA48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139F50) {
	__imp__sub_82139F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82139F64) {
	__imp__sub_82139F64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139F68) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,12280
	ctx.r30.s64 = ctx.r11.s64 + 12280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8235aa48
	ctx.lr = 0x82139F94;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139fb0
	if (ctx.cr6.eq) goto loc_82139FB0;
	// mulli r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 * 56;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82139fb8
	goto loc_82139FB8;
loc_82139FB0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82139FB8:
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

PPC_WEAK_FUNC(sub_82139F68) {
	__imp__sub_82139F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r10,r11,12280
	ctx.r10.s64 = ctx.r11.s64 + 12280;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8235c248
	sub_8235C248(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139FD0) {
	__imp__sub_82139FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,12280
	ctx.r10.s64 = ctx.r11.s64 + 12280;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8235a898
	sub_8235A898(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82139FE0) {
	__imp__sub_82139FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82139FF4) {
	__imp__sub_82139FF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82139FF8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r3,r11,3580
	ctx.r3.s64 = ctx.r11.s64 + 3580;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8213d490
	ctx.lr = 0x8213A028;
	sub_8213D490(ctx, base);
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r8,r9,12280
	ctx.r8.s64 = ctx.r9.s64 + 12280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213A040;
	sub_8235AA60(ctx, base);
	// bl 0x8230afc8
	ctx.lr = 0x8213A044;
	sub_8230AFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213a05c
	if (ctx.cr6.lt) goto loc_8213A05C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8213d7a8
	ctx.lr = 0x8213A058;
	sub_8213D7A8(ctx, base);
	// b 0x8213a068
	goto loc_8213A068;
loc_8213A05C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8213d7c0
	ctx.lr = 0x8213A068;
	sub_8213D7C0(ctx, base);
loc_8213A068:
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

PPC_WEAK_FUNC(sub_82139FF8) {
	__imp__sub_82139FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A080) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,12280
	ctx.r10.s64 = ctx.r11.s64 + 12280;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213A0A0;
	sub_8235AA60(ctx, base);
	// bl 0x8230afc8
	ctx.lr = 0x8213A0A4;
	sub_8230AFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// blt cr6,0x8213a0bc
	if (ctx.cr6.lt) goto loc_8213A0BC;
	// addi r4,r11,3580
	ctx.r4.s64 = ctx.r11.s64 + 3580;
	// bl 0x8213d660
	ctx.lr = 0x8213A0B8;
	sub_8213D660(ctx, base);
	// b 0x8213a0c4
	goto loc_8213A0C4;
loc_8213A0BC:
	// addi r3,r11,3580
	ctx.r3.s64 = ctx.r11.s64 + 3580;
	// bl 0x8213d678
	ctx.lr = 0x8213A0C4;
	sub_8213D678(ctx, base);
loc_8213A0C4:
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213A080) {
	__imp__sub_8213A080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213A0DC) {
	__imp__sub_8213A0DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A0E0) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,12280
	ctx.r10.s64 = ctx.r11.s64 + 12280;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213A100;
	sub_8235AA60(ctx, base);
	// bl 0x8230afc8
	ctx.lr = 0x8213A104;
	sub_8230AFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// blt cr6,0x8213a11c
	if (ctx.cr6.lt) goto loc_8213A11C;
	// addi r4,r11,3608
	ctx.r4.s64 = ctx.r11.s64 + 3608;
	// bl 0x8213d660
	ctx.lr = 0x8213A118;
	sub_8213D660(ctx, base);
	// b 0x8213a124
	goto loc_8213A124;
loc_8213A11C:
	// addi r3,r11,3608
	ctx.r3.s64 = ctx.r11.s64 + 3608;
	// bl 0x8213d678
	ctx.lr = 0x8213A124;
	sub_8213D678(ctx, base);
loc_8213A124:
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213A0E0) {
	__imp__sub_8213A0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213A13C) {
	__imp__sub_8213A13C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A140) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r3,r11,3608
	ctx.r3.s64 = ctx.r11.s64 + 3608;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8213d490
	ctx.lr = 0x8213A170;
	sub_8213D490(ctx, base);
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r8,r9,12280
	ctx.r8.s64 = ctx.r9.s64 + 12280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213A188;
	sub_8235AA60(ctx, base);
	// bl 0x8230afc8
	ctx.lr = 0x8213A18C;
	sub_8230AFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213a1a4
	if (ctx.cr6.lt) goto loc_8213A1A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8213d7a8
	ctx.lr = 0x8213A1A0;
	sub_8213D7A8(ctx, base);
	// b 0x8213a1b0
	goto loc_8213A1B0;
loc_8213A1A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8213d7c0
	ctx.lr = 0x8213A1B0;
	sub_8213D7C0(ctx, base);
loc_8213A1B0:
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

PPC_WEAK_FUNC(sub_8213A140) {
	__imp__sub_8213A140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,3628
	ctx.r4.s64 = ctx.r11.s64 + 3628;
	// b 0x822c3908
	sub_822C3908(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213A1C8) {
	__imp__sub_8213A1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213A1D4) {
	__imp__sub_8213A1D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,3628
	ctx.r4.s64 = ctx.r11.s64 + 3628;
	// b 0x822c3928
	sub_822C3928(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213A1D8) {
	__imp__sub_8213A1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213A1E4) {
	__imp__sub_8213A1E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A1E8) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213a220
	if (ctx.cr6.eq) goto loc_8213A220;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8213a224
	if (!ctx.cr6.eq) goto loc_8213A224;
loc_8213A220:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8213A224:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213a248
	if (!ctx.cr6.eq) goto loc_8213A248;
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
loc_8213A248:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213a260
	if (ctx.cr6.eq) goto loc_8213A260;
	// bl 0x8235c248
	ctx.lr = 0x8213A258;
	sub_8235C248(ctx, base);
	// subfic r4,r3,1
	ctx.xer.ca = ctx.r3.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r3.s64;
	// b 0x8213a268
	goto loc_8213A268;
loc_8213A260:
	// bl 0x8235c248
	ctx.lr = 0x8213A264;
	sub_8235C248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8213A268:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213A270;
	sub_8235AA60(ctx, base);
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

PPC_WEAK_FUNC(sub_8213A1E8) {
	__imp__sub_8213A1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213A284) {
	__imp__sub_8213A284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A288) {
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
	// bl 0x82139930
	ctx.lr = 0x8213A298;
	sub_82139930(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8235d1e8
	ctx.lr = 0x8213A2A0;
	sub_8235D1E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213A288) {
	__imp__sub_8213A288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8213A2B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213a358
	if (!ctx.cr6.eq) goto loc_8213A358;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bl 0x82310110
	ctx.lr = 0x8213A2DC;
	sub_82310110(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
loc_8213A2E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa48
	ctx.lr = 0x8213A2F4;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213a304
	if (ctx.cr6.eq) goto loc_8213A304;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_8213A304:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa48
	ctx.lr = 0x8213A310;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213a344
	if (ctx.cr6.eq) goto loc_8213A344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213A328;
	sub_8235AA60(ctx, base);
	// bl 0x8230b018
	ctx.lr = 0x8213A32C;
	sub_8230B018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213a344
	if (ctx.cr6.eq) goto loc_8213A344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141340
	ctx.lr = 0x8213A340;
	sub_82141340(ctx, base);
	// bl 0x8230fe30
	ctx.lr = 0x8213A344;
	sub_8230FE30(ctx, base);
loc_8213A344:
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213a2e8
	if (ctx.cr6.lt) goto loc_8213A2E8;
loc_8213A358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213A2B0) {
	__imp__sub_8213A2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8213A368;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82141340
	ctx.lr = 0x8213A38C;
	sub_82141340(ctx, base);
	// lwz r6,264(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235c250
	ctx.lr = 0x8213A3C0;
	sub_8235C250(ctx, base);
	// mulli r30,r26,56
	ctx.r30.s64 = ctx.r26.s64 * 56;
	// bl 0x82310110
	ctx.lr = 0x8213A3C8;
	sub_82310110(ctx, base);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8213A3E4;
	sub_822E7E98(ctx, base);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stwx r9,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213A3FC;
	sub_8235AA60(ctx, base);
	// bl 0x8230b018
	ctx.lr = 0x8213A400;
	sub_8230B018(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8213a41c
	if (ctx.cr6.eq) goto loc_8213A41C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8230fe30
	ctx.lr = 0x8213A414;
	sub_8230FE30(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8213A41C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,3652
	ctx.r3.s64 = ctx.r11.s64 + 3652;
	// bl 0x821394d8
	ctx.lr = 0x8213A428;
	sub_821394D8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213A360) {
	__imp__sub_8213A360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A430) {
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
	// bl 0x82139930
	ctx.lr = 0x8213A44C;
	sub_82139930(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8235d1e8
	ctx.lr = 0x8213A454;
	sub_8235D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x8213A45C;
	sub_82141340(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x8236b1d0
	ctx.lr = 0x8213A46C;
	sub_8236B1D0(ctx, base);
	// lis r31,-32154
	ctx.r31.s64 = -2107244544;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r30,r31,12280
	ctx.r30.s64 = ctx.r31.s64 + 12280;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1571
	ctx.r4.s64 = 1571;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8235c7e8
	ctx.lr = 0x8213A488;
	sub_8235C7E8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8235c6a8
	ctx.lr = 0x8213A490;
	sub_8235C6A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,12280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12280, ctx.r11.u8);
	// bl 0x82310110
	ctx.lr = 0x8213A49C;
	sub_82310110(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bl 0x8213a2b0
	ctx.lr = 0x8213A4A4;
	sub_8213A2B0(ctx, base);
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

PPC_WEAK_FUNC(sub_8213A430) {
	__imp__sub_8213A430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213A4BC) {
	__imp__sub_8213A4BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8213A4C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82141340
	ctx.lr = 0x8213A4DC;
	sub_82141340(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82139930
	ctx.lr = 0x8213A4E4;
	sub_82139930(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8235d1e8
	ctx.lr = 0x8213A4EC;
	sub_8235D1E8(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,12280
	ctx.r31.s64 = ctx.r10.s64 + 12280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r11,12280(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12280, ctx.r11.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1570
	ctx.r5.s64 = 1570;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8235d488
	ctx.lr = 0x8213A51C;
	sub_8235D488(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213a53c
	if (!ctx.cr6.eq) goto loc_8213A53C;
loc_8213A528:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235d2e8
	ctx.lr = 0x8213A530;
	sub_8235D2E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8213A53C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230f3b8
	ctx.lr = 0x8213A54C;
	sub_8230F3B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213a528
	if (ctx.cr6.eq) goto loc_8213A528;
	// bl 0x82310110
	ctx.lr = 0x8213A55C;
	sub_82310110(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x8213a2b0
	ctx.lr = 0x8213A564;
	sub_8213A2B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213A4C0) {
	__imp__sub_8213A4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8213A578;
	__savegprlr_14(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// std r5,1320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1320, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,12280
	ctx.r29.s64 = ctx.r11.s64 + 12280;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8235c248
	ctx.lr = 0x8213A59C;
	sub_8235C248(ctx, base);
	// lwz r22,1320(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1320);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rldicr r4,r22,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82139a20
	ctx.lr = 0x8213A5B0;
	sub_82139A20(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x8213a920
	if (!ctx.cr6.eq) goto loc_8213A920;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r6,r11,2744
	ctx.r6.s64 = ctx.r11.s64 + 2744;
	// rldicr r5,r22,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228a990
	ctx.lr = 0x8213A5D0;
	sub_8228A990(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8213a604
	if (!ctx.cr6.eq) goto loc_8213A604;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3756
	ctx.r4.s64 = ctx.r11.s64 + 3756;
	// bl 0x82280900
	ctx.lr = 0x8213A5EC;
	sub_82280900(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,3736
	ctx.r4.s64 = ctx.r10.s64 + 3736;
	// bl 0x822830e8
	ctx.lr = 0x8213A5FC;
	sub_822830E8(ctx, base);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_8213A604:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82288498
	ctx.lr = 0x8213A614;
	sub_82288498(ctx, base);
	// lis r31,-31831
	ctx.r31.s64 = -2086076416;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,-31536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31536);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822e8068
	ctx.lr = 0x8213A628;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213a63c
	if (ctx.cr6.eq) goto loc_8213A63C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-31536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31536);
	// bl 0x822e1fa8
	ctx.lr = 0x8213A63C;
	sub_822E1FA8(ctx, base);
loc_8213A63C:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82288498
	ctx.lr = 0x8213A64C;
	sub_82288498(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r11,3728
	ctx.r31.s64 = ctx.r11.s64 + 3728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0578
	ctx.lr = 0x8213A65C;
	sub_822E0578(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8068
	ctx.lr = 0x8213A664;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213a678
	if (ctx.cr6.eq) goto loc_8213A678;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822e2520
	ctx.lr = 0x8213A678;
	sub_822E2520(ctx, base);
loc_8213A678:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822881b0
	ctx.lr = 0x8213A680;
	sub_822881B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141340
	ctx.lr = 0x8213A68C;
	sub_82141340(ctx, base);
	// bl 0x8230bd88
	ctx.lr = 0x8213A690;
	sub_8230BD88(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8235a898
	ctx.lr = 0x8213A6A0;
	sub_8235A898(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82139770
	ctx.lr = 0x8213A6A8;
	sub_82139770(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8213a8f8
	if (ctx.cr6.eq) goto loc_8213A8F8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r21,r11,3608
	ctx.r21.s64 = ctx.r11.s64 + 3608;
	// addi r20,r10,3580
	ctx.r20.s64 = ctx.r10.s64 + 3580;
	// addi r17,r9,2700
	ctx.r17.s64 = ctx.r9.s64 + 2700;
	// addi r19,r8,2708
	ctx.r19.s64 = ctx.r8.s64 + 2708;
	// addi r16,r7,-10520
	ctx.r16.s64 = ctx.r7.s64 + -10520;
	// addi r15,r6,2716
	ctx.r15.s64 = ctx.r6.s64 + 2716;
	// addi r25,r5,3720
	ctx.r25.s64 = ctx.r5.s64 + 3720;
	// addi r18,r4,2724
	ctx.r18.s64 = ctx.r4.s64 + 2724;
loc_8213A6F4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822881b0
	ctx.lr = 0x8213A6FC;
	sub_822881B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820f1718
	ctx.lr = 0x8213A708;
	sub_820F1718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82288498
	ctx.lr = 0x8213A71C;
	sub_82288498(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82288288
	ctx.lr = 0x8213A724;
	sub_82288288(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// addi r10,r29,52
	ctx.r10.s64 = ctx.r29.s64 + 52;
	// bne cr6,0x8213a8bc
	if (!ctx.cr6.eq) goto loc_8213A8BC;
	// mulli r11,r27,56
	ctx.r11.s64 = ctx.r27.s64 * 56;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8213a764
	if (ctx.cr6.eq) goto loc_8213A764;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8213A750;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// rldicr r5,r22,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228a990
	ctx.lr = 0x8213A764;
	sub_8228A990(ctx, base);
loc_8213A764:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213A770;
	sub_8235AA60(ctx, base);
	// bl 0x8230afc8
	ctx.lr = 0x8213A774;
	sub_8230AFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213a788
	if (ctx.cr6.lt) goto loc_8213A788;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8213d660
	ctx.lr = 0x8213A784;
	sub_8213D660(ctx, base);
	// b 0x8213a790
	goto loc_8213A790;
loc_8213A788:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8213d678
	ctx.lr = 0x8213A790;
	sub_8213D678(ctx, base);
loc_8213A790:
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822e8068
	ctx.lr = 0x8213A7A0;
	sub_822E8068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213a7fc
	if (ctx.cr6.eq) goto loc_8213A7FC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213A7B4;
	sub_8235AA60(ctx, base);
	// bl 0x8230afc8
	ctx.lr = 0x8213A7B8;
	sub_8230AFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213a7cc
	if (ctx.cr6.lt) goto loc_8213A7CC;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8213d660
	ctx.lr = 0x8213A7C8;
	sub_8213D660(ctx, base);
	// b 0x8213a7d4
	goto loc_8213A7D4;
loc_8213A7CC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8213d678
	ctx.lr = 0x8213A7D4;
	sub_8213D678(ctx, base);
loc_8213A7D4:
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822e84f0
	ctx.lr = 0x8213A7E8;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// rldicr r5,r22,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228a990
	ctx.lr = 0x8213A7FC;
	sub_8228A990(ctx, base);
loc_8213A7FC:
	// cmpw cr6,r28,r14
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r14.s32, ctx.xer);
	// beq cr6,0x8213a828
	if (ctx.cr6.eq) goto loc_8213A828;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8213A814;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// rldicr r5,r22,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228a990
	ctx.lr = 0x8213A828;
	sub_8228A990(ctx, base);
loc_8213A828:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213A834;
	sub_8235AA60(ctx, base);
	// bl 0x8230afc8
	ctx.lr = 0x8213A838;
	sub_8230AFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213a84c
	if (ctx.cr6.lt) goto loc_8213A84C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8213d660
	ctx.lr = 0x8213A848;
	sub_8213D660(ctx, base);
	// b 0x8213a854
	goto loc_8213A854;
loc_8213A84C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8213d678
	ctx.lr = 0x8213A854;
	sub_8213D678(ctx, base);
loc_8213A854:
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8213a8e4
	if (ctx.cr6.eq) goto loc_8213A8E4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213A870;
	sub_8235AA60(ctx, base);
	// bl 0x8230afc8
	ctx.lr = 0x8213A874;
	sub_8230AFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213a888
	if (ctx.cr6.lt) goto loc_8213A888;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8213d660
	ctx.lr = 0x8213A884;
	sub_8213D660(ctx, base);
	// b 0x8213a890
	goto loc_8213A890;
loc_8213A888:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8213d678
	ctx.lr = 0x8213A890;
	sub_8213D678(ctx, base);
loc_8213A890:
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822e84f0
	ctx.lr = 0x8213A8A4;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// rldicr r5,r22,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228a990
	ctx.lr = 0x8213A8B8;
	sub_8228A990(ctx, base);
	// b 0x8213a8e4
	goto loc_8213A8E4;
loc_8213A8BC:
	// mulli r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 * 56;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r9,r29,56
	ctx.r9.s64 = ctx.r29.s64 + 56;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
	// bl 0x82139ff8
	ctx.lr = 0x8213A8D8;
	sub_82139FF8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a140
	ctx.lr = 0x8213A8E4;
	sub_8213A140(ctx, base);
loc_8213A8E4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822881b0
	ctx.lr = 0x8213A8EC;
	sub_822881B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8213a6f4
	if (!ctx.cr6.eq) goto loc_8213A6F4;
loc_8213A8F8:
	// bl 0x82310110
	ctx.lr = 0x8213A8FC;
	sub_82310110(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8235c248
	ctx.lr = 0x8213A90C;
	sub_8235C248(ctx, base);
	// mulli r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 * 56;
	// addi r10,r29,48
	ctx.r10.s64 = ctx.r29.s64 + 48;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_8213A920:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3668
	ctx.r4.s64 = ctx.r11.s64 + 3668;
	// bl 0x82280900
	ctx.lr = 0x8213A930;
	sub_82280900(ctx, base);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213A570) {
	__imp__sub_8213A570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213A938) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lbz r10,12280(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12280);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8213a980
	if (!ctx.cr6.eq) goto loc_8213A980;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3888
	ctx.r4.s64 = ctx.r11.s64 + 3888;
	// bl 0x82280a68
	ctx.lr = 0x8213A96C;
	sub_82280A68(ctx, base);
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
loc_8213A980:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r31,r11,-22504
	ctx.r31.s64 = ctx.r11.s64 + -22504;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-22504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22504);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8213a9c4
	if (ctx.cr6.eq) goto loc_8213A9C4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3856
	ctx.r4.s64 = ctx.r11.s64 + 3856;
	// bl 0x82280a68
	ctx.lr = 0x8213A9B0;
	sub_82280A68(ctx, base);
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
loc_8213A9C4:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82139a20
	ctx.lr = 0x8213A9D4;
	sub_82139A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8213aa00
	if (!ctx.cr6.lt) goto loc_8213AA00;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3808
	ctx.r4.s64 = ctx.r11.s64 + 3808;
	// bl 0x82280a68
	ctx.lr = 0x8213A9EC;
	sub_82280A68(ctx, base);
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
loc_8213AA00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8213aa28
	if (!ctx.cr6.gt) goto loc_8213AA28;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8213aa30
	goto loc_8213AA30;
loc_8213AA28:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
loc_8213AA30:
	// bl 0x82139ff8
	ctx.lr = 0x8213AA34;
	sub_82139FF8(ctx, base);
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

PPC_WEAK_FUNC(sub_8213A938) {
	__imp__sub_8213A938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213AA48) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// lbz r10,12280(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12280);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8213aa84
	if (!ctx.cr6.eq) goto loc_8213AA84;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,4020
	ctx.r4.s64 = ctx.r11.s64 + 4020;
	// bl 0x82280a68
	ctx.lr = 0x8213AA80;
	sub_82280A68(ctx, base);
	// b 0x8213ab28
	goto loc_8213AB28;
loc_8213AA84:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r31,r11,-22504
	ctx.r31.s64 = ctx.r11.s64 + -22504;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-22504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22504);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8213aab8
	if (ctx.cr6.eq) goto loc_8213AAB8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3988
	ctx.r4.s64 = ctx.r11.s64 + 3988;
	// bl 0x82280a68
	ctx.lr = 0x8213AAB4;
	sub_82280A68(ctx, base);
	// b 0x8213ab28
	goto loc_8213AB28;
loc_8213AAB8:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82139a20
	ctx.lr = 0x8213AAC8;
	sub_82139A20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8213aae8
	if (!ctx.cr6.lt) goto loc_8213AAE8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,3940
	ctx.r4.s64 = ctx.r11.s64 + 3940;
	// bl 0x82280a68
	ctx.lr = 0x8213AAE4;
	sub_82280A68(ctx, base);
	// b 0x8213ab28
	goto loc_8213AB28;
loc_8213AAE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8213ab10
	if (!ctx.cr6.gt) goto loc_8213AB10;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8213ab18
	goto loc_8213AB18;
loc_8213AB10:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_8213AB18:
	// bl 0x823deaf8
	ctx.lr = 0x8213AB1C;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a140
	ctx.lr = 0x8213AB28;
	sub_8213A140(ctx, base);
loc_8213AB28:
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

PPC_WEAK_FUNC(sub_8213AA48) {
	__imp__sub_8213AA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213AB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8213AB48;
	__savegprlr_26(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82310110
	ctx.lr = 0x8213AB50;
	sub_82310110(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82287b40
	ctx.lr = 0x8213AB64;
	sub_82287B40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2748
	ctx.r4.s64 = ctx.r11.s64 + 2748;
	// bl 0x82288048
	ctx.lr = 0x8213AB74;
	sub_82288048(ctx, base);
	// lis r10,-31831
	ctx.r10.s64 = -2086076416;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,-31536(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31536);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82288048
	ctx.lr = 0x8213AB88;
	sub_82288048(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,3728
	ctx.r3.s64 = ctx.r9.s64 + 3728;
	// bl 0x822e0578
	ctx.lr = 0x8213AB94;
	sub_822E0578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82288048
	ctx.lr = 0x8213ABA0;
	sub_82288048(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// addi r28,r11,3608
	ctx.r28.s64 = ctx.r11.s64 + 3608;
	// addi r27,r10,3580
	ctx.r27.s64 = ctx.r10.s64 + 3580;
loc_8213ABC0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa48
	ctx.lr = 0x8213ABCC;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213acb8
	if (ctx.cr6.eq) goto loc_8213ACB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82287e08
	ctx.lr = 0x8213ABE4;
	sub_82287E08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x82287e08
	ctx.lr = 0x8213ABF0;
	sub_82287E08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213ABFC;
	sub_8235AA60(ctx, base);
	// bl 0x8230afc8
	ctx.lr = 0x8213AC00;
	sub_8230AFC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213ac24
	if (ctx.cr6.lt) goto loc_8213AC24;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821432c8
	ctx.lr = 0x8213AC14;
	sub_821432C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_8213AC24:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213ac3c
	if (ctx.cr6.eq) goto loc_8213AC3C;
	// bl 0x82287cd0
	ctx.lr = 0x8213AC38;
	sub_82287CD0(ctx, base);
	// b 0x8213ac40
	goto loc_8213AC40;
loc_8213AC3C:
	// bl 0x82287c60
	ctx.lr = 0x8213AC40;
	sub_82287C60(ctx, base);
loc_8213AC40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213AC4C;
	sub_8235AA60(ctx, base);
	// bl 0x8230afc8
	ctx.lr = 0x8213AC50;
	sub_8230AFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213ac64
	if (ctx.cr6.lt) goto loc_8213AC64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213d660
	ctx.lr = 0x8213AC60;
	sub_8213D660(ctx, base);
	// b 0x8213ac6c
	goto loc_8213AC6C;
loc_8213AC64:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8213d678
	ctx.lr = 0x8213AC6C;
	sub_8213D678(ctx, base);
loc_8213AC6C:
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82288048
	ctx.lr = 0x8213AC7C;
	sub_82288048(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213AC88;
	sub_8235AA60(ctx, base);
	// bl 0x8230afc8
	ctx.lr = 0x8213AC8C;
	sub_8230AFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213aca0
	if (ctx.cr6.lt) goto loc_8213ACA0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8213d660
	ctx.lr = 0x8213AC9C;
	sub_8213D660(ctx, base);
	// b 0x8213aca8
	goto loc_8213ACA8;
loc_8213ACA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213d678
	ctx.lr = 0x8213ACA8;
	sub_8213D678(ctx, base);
loc_8213ACA8:
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82287ed0
	ctx.lr = 0x8213ACB8;
	sub_82287ED0(ctx, base);
loc_8213ACB8:
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// addi r11,r31,168
	ctx.r11.s64 = ctx.r31.s64 + 168;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213abc0
	if (ctx.cr6.lt) goto loc_8213ABC0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82287e08
	ctx.lr = 0x8213ACD8;
	sub_82287E08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// addi r28,r11,4072
	ctx.r28.s64 = ctx.r11.s64 + 4072;
loc_8213ACE8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa48
	ctx.lr = 0x8213ACF4;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ad88
	if (ctx.cr6.eq) goto loc_8213AD88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8235aa60
	ctx.lr = 0x8213AD0C;
	sub_8235AA60(ctx, base);
	// bl 0x8230b018
	ctx.lr = 0x8213AD10;
	sub_8230B018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213ad88
	if (!ctx.cr6.eq) goto loc_8213AD88;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,1000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1000, ctx.xer);
	// ble cr6,0x8213ad88
	if (!ctx.cr6.gt) goto loc_8213AD88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235c1c8
	ctx.lr = 0x8213AD3C;
	sub_8235C1C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8228aad0
	ctx.lr = 0x8213AD5C;
	sub_8228AAD0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8213ad84
	if (!ctx.cr6.eq) goto loc_8213AD84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r29,-32
	ctx.r5.s64 = ctx.r29.s64 + -32;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x8213AD78;
	sub_82280900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821395c0
	ctx.lr = 0x8213AD80;
	sub_821395C0(ctx, base);
	// b 0x8213ad88
	goto loc_8213AD88;
loc_8213AD84:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
loc_8213AD88:
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// addi r11,r31,156
	ctx.r11.s64 = ctx.r31.s64 + 156;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213ace8
	if (ctx.cr6.lt) goto loc_8213ACE8;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213AB40) {
	__imp__sub_8213AB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213ADA4) {
	__imp__sub_8213ADA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213ADA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8213ADB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82310110
	ctx.lr = 0x8213ADB8;
	sub_82310110(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,12276
	ctx.r31.s64 = ctx.r11.s64 + 12276;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r10,4148
	ctx.r27.s64 = ctx.r10.s64 + 4148;
	// addi r26,r11,3108
	ctx.r26.s64 = ctx.r11.s64 + 3108;
loc_8213ADE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8235aa48
	ctx.lr = 0x8213ADEC;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ae80
	if (ctx.cr6.eq) goto loc_8213AE80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8235aa60
	ctx.lr = 0x8213AE04;
	sub_8235AA60(ctx, base);
	// bl 0x8230b018
	ctx.lr = 0x8213AE08;
	sub_8230B018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213ae80
	if (!ctx.cr6.eq) goto loc_8213AE80;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213ae3c
	if (!ctx.cr6.eq) goto loc_8213AE3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// subf r9,r10,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r10.s64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r7,r8,1000
	ctx.r7.s64 = ctx.r8.s64 * 1000;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8213ae80
	if (!ctx.cr6.gt) goto loc_8213AE80;
loc_8213AE3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x8213AE5C;
	sub_82280900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821395c0
	ctx.lr = 0x8213AE64;
	sub_821395C0(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213ae80
	if (!ctx.cr6.eq) goto loc_8213AE80;
	// bl 0x82139930
	ctx.lr = 0x8213AE74;
	sub_82139930(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x8213AE80;
	sub_8227CF18(ctx, base);
loc_8213AE80:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213ade0
	if (ctx.cr6.lt) goto loc_8213ADE0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213af00
	if (ctx.cr6.eq) goto loc_8213AF00;
	// bl 0x8235a8d8
	ctx.lr = 0x8213AEAC;
	sub_8235A8D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213af00
	if (!ctx.cr6.eq) goto loc_8213AF00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r8,r9,1000
	ctx.r8.s64 = ctx.r9.s64 * 1000;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8213af00
	if (!ctx.cr6.gt) goto loc_8213AF00;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,4128
	ctx.r3.s64 = ctx.r11.s64 + 4128;
	// bl 0x822c4080
	ctx.lr = 0x8213AEDC;
	sub_822C4080(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r8,r9,1000
	ctx.r8.s64 = ctx.r9.s64 * 1000;
	// divw r4,r8,r10
	ctx.r4.s32 = ctx.r8.s32 / ctx.r10.s32;
	// bl 0x822c5380
	ctx.lr = 0x8213AEF4;
	sub_822C5380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8230ab38
	ctx.lr = 0x8213AF00;
	sub_8230AB38(ctx, base);
loc_8213AF00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213ADA8) {
	__imp__sub_8213ADA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213AF08) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r31,r11,12280
	ctx.r31.s64 = ctx.r11.s64 + 12280;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213af40
	if (ctx.cr6.eq) goto loc_8213AF40;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8213af44
	if (!ctx.cr6.eq) goto loc_8213AF44;
loc_8213AF40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8213AF44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213af64
	if (ctx.cr6.eq) goto loc_8213AF64;
	// bl 0x8213ada8
	ctx.lr = 0x8213AF54;
	sub_8213ADA8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213af64
	if (ctx.cr6.eq) goto loc_8213AF64;
	// bl 0x8213ab40
	ctx.lr = 0x8213AF64;
	sub_8213AB40(ctx, base);
loc_8213AF64:
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

PPC_WEAK_FUNC(sub_8213AF08) {
	__imp__sub_8213AF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213AF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213AF78) {
	__imp__sub_8213AF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213AF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213AF8C) {
	__imp__sub_8213AF8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213AF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r9,r11,20416
	ctx.r9.s64 = ctx.r11.s64 + 20416;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213AF90) {
	__imp__sub_8213AF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213AFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213AFA4) {
	__imp__sub_8213AFA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213AFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213AFA8) {
	__imp__sub_8213AFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213AFC0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8213afe8
	if (!ctx.cr6.eq) goto loc_8213AFE8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8213AFE8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,6288
	ctx.r3.s64 = ctx.r11.s64 + 6288;
	// bl 0x822e84f0
	ctx.lr = 0x8213AFF4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8213B000;
	sub_82280B08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213AFC0) {
	__imp__sub_8213AFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213B014) {
	__imp__sub_8213B014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// li r5,2496
	ctx.r5.s64 = 2496;
	// addi r9,r11,-15432
	ctx.r9.s64 = ctx.r11.s64 + -15432;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x822dd768
	sub_822DD768(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213B018) {
	__imp__sub_8213B018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mulli r9,r3,2496
	ctx.r9.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r8,r11,-15432
	ctx.r8.s64 = ctx.r11.s64 + -15432;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8213b118
	if (ctx.cr6.eq) goto loc_8213B118;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8213b118
	if (!ctx.cr6.eq) goto loc_8213B118;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,28(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r5,36(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// subf r7,r8,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r8.s64;
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// srawi r3,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 31;
	// xor r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// subf r3,r3,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r3.s64;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bge cr6,0x8213b098
	if (!ctx.cr6.lt) goto loc_8213B098;
	// stw r8,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r8.u32);
loc_8213B098:
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r7,r8,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r8.s64;
	// srawi r3,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 31;
	// xor r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// subf r3,r3,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r3.s64;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bge cr6,0x8213b0b8
	if (!ctx.cr6.lt) goto loc_8213B0B8;
	// stw r8,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
loc_8213B0B8:
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r7,r8,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r8.s64;
	// srawi r3,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 31;
	// xor r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// subf r3,r3,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r3.s64;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bge cr6,0x8213b0d8
	if (!ctx.cr6.lt) goto loc_8213B0D8;
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
loc_8213B0D8:
	// addi r7,r11,2496
	ctx.r7.s64 = ctx.r11.s64 + 2496;
loc_8213B0DC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8213b0fc
	if (!ctx.cr0.eq) goto loc_8213B0FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8213b0dc
	if (!ctx.cr6.eq) goto loc_8213B0DC;
loc_8213B0FC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8213b10c
	if (ctx.cr6.eq) goto loc_8213B10C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8213B10C:
	// stw r6,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r6.u32);
	// stw r5,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r5.u32);
	// stw r4,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r4.u32);
loc_8213B118:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213B038) {
	__imp__sub_8213B038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213b138
	if (!ctx.cr6.eq) goto loc_8213B138;
loc_8213B130:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8213B138:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8213b130
	if (!ctx.cr6.gt) goto loc_8213B130;
loc_8213B144:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8213b130
	if (!ctx.cr6.lt) goto loc_8213B130;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213b180
	if (ctx.cr6.eq) goto loc_8213B180;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8213b144
	if (ctx.cr6.lt) goto loc_8213B144;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8213B180:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8213b130
	if (!ctx.cr6.lt) goto loc_8213B130;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213B120) {
	__imp__sub_8213B120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B1B8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e7e98
	ctx.lr = 0x8213B1E4;
	sub_822E7E98(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8213B1EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8213b1ec
	if (!ctx.cr6.eq) goto loc_8213B1EC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_8213B1B8) {
	__imp__sub_8213B1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213B23C) {
	__imp__sub_8213B23C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B240) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8213b254
	if (!ctx.cr6.gt) goto loc_8213B254;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8213B254:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213B240) {
	__imp__sub_8213B240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213B25C) {
	__imp__sub_8213B25C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8213b270
	if (!ctx.cr6.lt) goto loc_8213B270;
loc_8213B268:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8213B270:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8213b268
	if (!ctx.cr6.gt) goto loc_8213B268;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r10,512
	ctx.r10.s64 = 512;
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
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213B260) {
	__imp__sub_8213B260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8213b2b0
	if (ctx.cr6.eq) goto loc_8213B2B0;
loc_8213B2A4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// blr 
	return;
loc_8213B2B0:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8213b2d0
	if (!ctx.cr6.lt) goto loc_8213B2D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8213b2fc
	goto loc_8213B2FC;
loc_8213B2D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8213b2e0
	if (ctx.cr6.gt) goto loc_8213B2E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8213b2fc
	goto loc_8213B2FC;
loc_8213B2E0:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r10,512
	ctx.r10.s64 = 512;
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r7,r10,r11
	ctx.r7.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
loc_8213B2FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213b2a4
	if (ctx.cr6.eq) goto loc_8213B2A4;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213B298) {
	__imp__sub_8213B298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B310) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// li r5,400
	ctx.r5.s64 = 400;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x822dd778
	ctx.lr = 0x8213B340;
	sub_822DD778(ctx, base);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x822dd778
	ctx.lr = 0x8213B350;
	sub_822DD778(ctx, base);
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1584
	ctx.r3.s64 = ctx.r31.s64 + 1584;
	// bl 0x822dd778
	ctx.lr = 0x8213B360;
	sub_822DD778(ctx, base);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1984
	ctx.r3.s64 = ctx.r31.s64 + 1984;
	// bl 0x822dd778
	ctx.lr = 0x8213B370;
	sub_822DD778(ctx, base);
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

PPC_WEAK_FUNC(sub_8213B310) {
	__imp__sub_8213B310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213B384) {
	__imp__sub_8213B384(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8213B390;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r24,0
	ctx.r24.s64 = 0;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8213b4a4
	if (!ctx.cr6.gt) goto loc_8213B4A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// addi r25,r11,6356
	ctx.r25.s64 = ctx.r11.s64 + 6356;
loc_8213B3CC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213b490
	if (ctx.cr6.eq) goto loc_8213B490;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stb r11,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r11.u8);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x8213b478
	if (ctx.cr6.gt) goto loc_8213B478;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8213b408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B408;
	// bdzf 4*cr6+eq,0x8213b418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B418;
	// bdzf 4*cr6+eq,0x8213b428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B428;
	// bdzf 4*cr6+eq,0x8213b438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B438;
	// bne cr6,0x8213b448
	if (!ctx.cr6.eq) goto loc_8213B448;
loc_8213B408:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// b 0x8213b490
	goto loc_8213B490;
loc_8213B418:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// b 0x8213b490
	goto loc_8213B490;
loc_8213B428:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8213b490
	goto loc_8213B490;
loc_8213B438:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x8213b490
	goto loc_8213B490;
loc_8213B448:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lhz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// add r3,r10,r26
	ctx.r3.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8213B474;
	sub_822E7E98(ctx, base);
	// b 0x8213b490
	goto loc_8213B490;
loc_8213B478:
	// stb r24,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r24.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82280b08
	ctx.lr = 0x8213B490;
	sub_82280B08(ctx, base);
loc_8213B490:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8213b3cc
	if (ctx.cr6.lt) goto loc_8213B3CC;
loc_8213B4A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213B388) {
	__imp__sub_8213B388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213B4AC) {
	__imp__sub_8213B4AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8213B4B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// mulli r11,r3,2496
	ctx.r11.s64 = ctx.r3.s64 * 2496;
	// addi r10,r10,20416
	ctx.r10.s64 = ctx.r10.s64 + 20416;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8213b5e4
	if (!ctx.cr6.gt) goto loc_8213B5E4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// addi r30,r6,4
	ctx.r30.s64 = ctx.r6.s64 + 4;
	// addi r23,r10,6512
	ctx.r23.s64 = ctx.r10.s64 + 6512;
	// addi r24,r11,6400
	ctx.r24.s64 = ctx.r11.s64 + 6400;
loc_8213B4FC:
	// lbz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + -4);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8213b524
	if (ctx.cr6.eq) goto loc_8213B524;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280b08
	ctx.lr = 0x8213B520;
	sub_82280B08(ctx, base);
	// b 0x8213b5d0
	goto loc_8213B5D0;
loc_8213B524:
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bgt cr6,0x8213b5bc
	if (ctx.cr6.gt) goto loc_8213B5BC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8213b5d0
	if (ctx.cr6.eq) goto loc_8213B5D0;
	// bdz 0x8213b550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8213B550;
	// bdz 0x8213b550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8213B550;
	// bdz 0x8213b568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8213B568;
	// bdz 0x8213b580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8213B580;
	// bdz 0x8213b580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8213B580;
	// b 0x8213b598
	goto loc_8213B598;
loc_8213B550:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213B564;
	sub_822DD768(ctx, base);
	// b 0x8213b5d0
	goto loc_8213B5D0;
loc_8213B568:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213B57C;
	sub_822DD768(ctx, base);
	// b 0x8213b5d0
	goto loc_8213B5D0;
loc_8213B580:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213B594;
	sub_822DD768(ctx, base);
	// b 0x8213b5d0
	goto loc_8213B5D0;
loc_8213B598:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8213B5B8;
	sub_822E7E98(ctx, base);
	// b 0x8213b5d0
	goto loc_8213B5D0;
loc_8213B5BC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280b08
	ctx.lr = 0x8213B5D0;
	sub_82280B08(ctx, base);
loc_8213B5D0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8213b4fc
	if (ctx.cr6.lt) goto loc_8213B4FC;
loc_8213B5E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213B4B0) {
	__imp__sub_8213B4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213B5EC) {
	__imp__sub_8213B5EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8213B5F8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r28,r11,12416
	ctx.r28.s64 = ctx.r11.s64 + 12416;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r28,20488
	ctx.r11.s64 = ctx.r28.s64 + 20488;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8213b644
	if (!ctx.cr6.eq) goto loc_8213B644;
loc_8213B630:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x8213B638;
	sub_8228B0D8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8213b630
	if (ctx.cr6.eq) goto loc_8213B630;
loc_8213B644:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,23112
	ctx.r10.s64 = ctx.r28.s64 + 23112;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r31,r29,r10
	ctx.r31.u64 = ctx.r29.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b468
	ctx.lr = 0x8213B668;
	sub_8236B468(ctx, base);
	// lis r10,25576
	ctx.r10.s64 = 1676148736;
	// mulli r26,r30,2000
	ctx.r26.s64 = ctx.r30.s64 * 2000;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// add r3,r26,r28
	ctx.r3.u64 = ctx.r26.u64 + ctx.r28.u64;
	// ori r9,r10,16383
	ctx.r9.u64 = ctx.r10.u64 | 16383;
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r11,r28,23112
	ctx.r11.s64 = ctx.r28.s64 + 23112;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8213B6A4;
	sub_823DE1F0(ctx, base);
	// addi r11,r28,1000
	ctx.r11.s64 = ctx.r28.s64 + 1000;
	// lis r8,25576
	ctx.r8.s64 = 1676148736;
	// stw r23,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r23.u32);
	// add r3,r26,r11
	ctx.r3.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// ori r7,r8,16382
	ctx.r7.u64 = ctx.r8.u64 | 16382;
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// stw r3,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r3.u32);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// stw r7,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r7.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8213B6D4;
	sub_823DE1F0(ctx, base);
	// stw r21,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r21.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r6,6580
	ctx.r4.s64 = ctx.r6.s64 + 6580;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8213B6EC;
	sub_82280900(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236b468
	ctx.lr = 0x8213B6FC;
	sub_8236B468(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82372b48
	ctx.lr = 0x8213B710;
	sub_82372B48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8213b748
	if (ctx.cr6.eq) goto loc_8213B748;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213b748
	if (ctx.cr6.eq) goto loc_8213B748;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,6560
	ctx.r5.s64 = ctx.r11.s64 + 6560;
	// addi r3,r10,6288
	ctx.r3.s64 = ctx.r10.s64 + 6288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8213B73C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8213B748;
	sub_82280B08(ctx, base);
loc_8213B748:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213B5F0) {
	__imp__sub_8213B5F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B750) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8213B764;
	sub_82141340(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,6620
	ctx.r5.s64 = ctx.r11.s64 + 6620;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227ebd8
	ctx.lr = 0x8213B778;
	sub_8227EBD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213B750) {
	__imp__sub_8213B750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B788) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -348);
	// bl 0x822e1f18
	ctx.lr = 0x8213B7A4;
	sub_822E1F18(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-344(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -344);
	// bl 0x822e1f18
	ctx.lr = 0x8213B7B4;
	sub_822E1F18(ctx, base);
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-372(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -372);
	// bl 0x822e1f18
	ctx.lr = 0x8213B7C4;
	sub_822E1F18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213B788) {
	__imp__sub_8213B788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213B7D4) {
	__imp__sub_8213B7D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8213B7E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8213b824
	if (!ctx.cr6.gt) goto loc_8213B824;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_8213B800:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x8213B80C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213b844
	if (ctx.cr6.eq) goto loc_8213B844;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8213b800
	if (ctx.cr6.lt) goto loc_8213B800;
loc_8213B824:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,6640
	ctx.r3.s64 = ctx.r11.s64 + 6640;
	// bl 0x822e84f0
	ctx.lr = 0x8213B834;
	sub_822E84F0(ctx, base);
	// bl 0x823617c0
	ctx.lr = 0x8213B838;
	sub_823617C0(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8213B844:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213B7D8) {
	__imp__sub_8213B7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213B854) {
	__imp__sub_8213B854(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8213B860;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,4608
	ctx.r30.s64 = ctx.r11.s64 + 4608;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8213B878:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x8213B884;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213b8c0
	if (ctx.cr6.eq) goto loc_8213B8C0;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213b878
	if (ctx.cr6.lt) goto loc_8213B878;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,6640
	ctx.r3.s64 = ctx.r11.s64 + 6640;
	// bl 0x822e84f0
	ctx.lr = 0x8213B8B0;
	sub_822E84F0(ctx, base);
	// bl 0x823617c0
	ctx.lr = 0x8213B8B4;
	sub_823617C0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213B8C0:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213B858) {
	__imp__sub_8213B858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8213B8D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,4648
	ctx.r30.s64 = ctx.r11.s64 + 4648;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8213B8F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x8213B8FC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213b938
	if (ctx.cr6.eq) goto loc_8213B938;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213b8f0
	if (ctx.cr6.lt) goto loc_8213B8F0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,6640
	ctx.r3.s64 = ctx.r11.s64 + 6640;
	// bl 0x822e84f0
	ctx.lr = 0x8213B928;
	sub_822E84F0(ctx, base);
	// bl 0x823617c0
	ctx.lr = 0x8213B92C;
	sub_823617C0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213B938:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213B8D0) {
	__imp__sub_8213B8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8213B950;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213b974
	if (ctx.cr6.eq) goto loc_8213B974;
	// bl 0x82141280
	ctx.lr = 0x8213B96C;
	sub_82141280(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8213b978
	goto loc_8213B978;
loc_8213B974:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8213B978:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r29,r31,2496
	ctx.r29.s64 = ctx.r31.s64 * 2496;
	// addi r30,r11,20416
	ctx.r30.s64 = ctx.r11.s64 + 20416;
	// addi r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 + 68;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8213b858
	ctx.lr = 0x8213B990;
	sub_8213B858(ctx, base);
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8213b8d0
	ctx.lr = 0x8213B9A0;
	sub_8213B8D0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r10,6656
	ctx.r27.s64 = ctx.r10.s64 + 6656;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8213B9B8;
	sub_822E84F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227ebd8
	ctx.lr = 0x8213B9C8;
	sub_8227EBD8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8213B9D4;
	sub_822E84F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227ebd8
	ctx.lr = 0x8213B9E4;
	sub_8227EBD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213B948) {
	__imp__sub_8213B948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213B9EC) {
	__imp__sub_8213B9EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213B9F0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,6668
	ctx.r3.s64 = ctx.r11.s64 + 6668;
	// bl 0x822e84f0
	ctx.lr = 0x8213BA14;
	sub_822E84F0(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-27340
	ctx.r4.s64 = ctx.r10.s64 + -27340;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8213BA28;
	sub_82280900(ctx, base);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4688(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213ba44
	if (ctx.cr6.eq) goto loc_8213BA44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x8213BA44;
	sub_82141280(ctx, base);
loc_8213BA44:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-3360
	ctx.r5.s64 = ctx.r11.s64 + -3360;
	// bl 0x8227ebd8
	ctx.lr = 0x8213BA54;
	sub_8227EBD8(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r11,r10,20416
	ctx.r11.s64 = ctx.r10.s64 + 20416;
	// mulli r10,r31,2496
	ctx.r10.s64 = ctx.r31.s64 * 2496;
	// lwz r3,28812(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28812);
	// addi r11,r11,1167
	ctx.r11.s64 = ctx.r11.s64 + 1167;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822e1fa8
	ctx.lr = 0x8213BA74;
	sub_822E1FA8(ctx, base);
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

PPC_WEAK_FUNC(sub_8213B9F0) {
	__imp__sub_8213B9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8213BA90;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82310170
	ctx.lr = 0x8213BA98;
	sub_82310170(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r11,20416
	ctx.r27.s64 = ctx.r11.s64 + 20416;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r27,12600
	ctx.r11.s64 = ctx.r27.s64 + 12600;
	// addi r31,r27,40
	ctx.r31.s64 = ctx.r27.s64 + 40;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// li r25,1000
	ctx.r25.s64 = 1000;
	// lis r26,-31823
	ctx.r26.s64 = -2085552128;
	// lis r24,-32153
	ctx.r24.s64 = -2107179008;
	// lis r23,-32191
	ctx.r23.s64 = -2109669376;
loc_8213BAC4:
	// lwz r11,4688(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213bae4
	if (ctx.cr6.eq) goto loc_8213BAE4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82141198
	ctx.lr = 0x8213BAD8;
	sub_82141198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213baf0
	if (!ctx.cr6.eq) goto loc_8213BAF0;
loc_8213BAE4:
	// lwz r11,-16768(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16768);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8213bb48
	if (!ctx.cr6.eq) goto loc_8213BB48;
loc_8213BAF0:
	// lwz r11,-31520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31520);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// divwu r10,r9,r25
	ctx.r10.u32 = ctx.r9.u32 / ctx.r25.u32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8213bb3c
	if (ctx.cr6.eq) goto loc_8213BB3C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8213bb2c
	if (ctx.cr6.eq) goto loc_8213BB2C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8213bb48
	if (!ctx.cr6.eq) goto loc_8213BB48;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// b 0x8213bb48
	goto loc_8213BB48;
loc_8213BB2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8213bb48
	goto loc_8213BB48;
loc_8213BB3C:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
loc_8213BB48:
	// addi r31,r31,2496
	ctx.r31.s64 = ctx.r31.s64 + 2496;
	// stwu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// addi r11,r27,10024
	ctx.r11.s64 = ctx.r27.s64 + 10024;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213bac4
	if (ctx.cr6.lt) goto loc_8213BAC4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213BA88) {
	__imp__sub_8213BA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8213BB70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mulli r9,r3,2496
	ctx.r9.s64 = ctx.r3.s64 * 2496;
	// addi r30,r11,-32520
	ctx.r30.s64 = ctx.r11.s64 + -32520;
	// lwz r11,-31520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31520);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r30,-12600
	ctx.r10.s64 = ctx.r30.s64 + -12600;
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// mulli r29,r6,100
	ctx.r29.s64 = ctx.r6.s64 * 100;
	// bne cr6,0x8213bbcc
	if (!ctx.cr6.eq) goto loc_8213BBCC;
	// bl 0x82310170
	ctx.lr = 0x8213BBAC;
	sub_82310170(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,10
	ctx.r10.s64 = 10;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divwu r11,r8,r10
	ctx.r11.u32 = ctx.r8.u32 / ctx.r10.u32;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8213BBCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213BB68) {
	__imp__sub_8213BB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8213BBE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mulli r9,r3,2496
	ctx.r9.s64 = ctx.r3.s64 * 2496;
	// addi r30,r11,-32520
	ctx.r30.s64 = ctx.r11.s64 + -32520;
	// lwz r11,-31520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31520);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r30,-12600
	ctx.r10.s64 = ctx.r30.s64 + -12600;
	// addi r7,r10,40
	ctx.r7.s64 = ctx.r10.s64 + 40;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// mulli r29,r6,100
	ctx.r29.s64 = ctx.r6.s64 * 100;
	// bne cr6,0x8213bc3c
	if (!ctx.cr6.eq) goto loc_8213BC3C;
	// bl 0x82310170
	ctx.lr = 0x8213BC1C;
	sub_82310170(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,10
	ctx.r10.s64 = 10;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divwu r11,r8,r10
	ctx.r11.u32 = ctx.r8.u32 / ctx.r10.u32;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8213BC3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213BBD8) {
	__imp__sub_8213BBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8213BC50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mulli r9,r3,2496
	ctx.r9.s64 = ctx.r3.s64 * 2496;
	// addi r30,r11,-32520
	ctx.r30.s64 = ctx.r11.s64 + -32520;
	// lwz r11,-31520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31520);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r30,-12600
	ctx.r10.s64 = ctx.r30.s64 + -12600;
	// addi r7,r10,36
	ctx.r7.s64 = ctx.r10.s64 + 36;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// mulli r29,r6,100
	ctx.r29.s64 = ctx.r6.s64 * 100;
	// bne cr6,0x8213bcac
	if (!ctx.cr6.eq) goto loc_8213BCAC;
	// bl 0x82310170
	ctx.lr = 0x8213BC8C;
	sub_82310170(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,10
	ctx.r10.s64 = 10;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divwu r11,r8,r10
	ctx.r11.u32 = ctx.r8.u32 / ctx.r10.u32;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8213BCAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213BC48) {
	__imp__sub_8213BC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BCB8) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213bcf8
	if (ctx.cr6.eq) goto loc_8213BCF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,6784
	ctx.r4.s64 = ctx.r11.s64 + 6784;
	// bl 0x822830e8
	ctx.lr = 0x8213BCF4;
	sub_822830E8(ctx, base);
	// b 0x8213bd24
	goto loc_8213BD24;
loc_8213BCF8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,6720
	ctx.r4.s64 = ctx.r11.s64 + 6720;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213BD10;
	sub_82280900(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// mulli r9,r31,2496
	ctx.r9.s64 = ctx.r31.s64 * 2496;
	// addi r11,r10,20416
	ctx.r11.s64 = ctx.r10.s64 + 20416;
	// addi r8,r11,1044
	ctx.r8.s64 = ctx.r11.s64 + 1044;
	// stwx r30,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r30.u32);
loc_8213BD24:
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

PPC_WEAK_FUNC(sub_8213BCB8) {
	__imp__sub_8213BCB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213BD3C) {
	__imp__sub_8213BD3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BD40) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,6880
	ctx.r4.s64 = ctx.r9.s64 + 6880;
	// li r3,14
	ctx.r3.s64 = 14;
	// lwz r5,1044(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	// bl 0x82280900
	ctx.lr = 0x8213BD78;
	sub_82280900(ctx, base);
	// lwz r3,1044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	// bl 0x82336c58
	ctx.lr = 0x8213BD80;
	sub_82336C58(ctx, base);
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

PPC_WEAK_FUNC(sub_8213BD40) {
	__imp__sub_8213BD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213BD94) {
	__imp__sub_8213BD94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8213BDA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r4,2496
	ctx.r10.s64 = ctx.r4.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x82287ed0
	ctx.lr = 0x8213BDC0;
	sub_82287ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82287ed0
	ctx.lr = 0x8213BDCC;
	sub_82287ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x82287ed0
	ctx.lr = 0x8213BDD8;
	sub_82287ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1048(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	// bl 0x82287ed0
	ctx.lr = 0x8213BDE4;
	sub_82287ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,1166(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1166);
	// bl 0x82287e08
	ctx.lr = 0x8213BDF0;
	sub_82287E08(ctx, base);
	// addi r28,r30,1060
	ctx.r28.s64 = ctx.r30.s64 + 1060;
	// li r29,25
	ctx.r29.s64 = 25;
loc_8213BDF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// bl 0x82287ed0
	ctx.lr = 0x8213BE04;
	sub_82287ED0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8213bdf8
	if (!ctx.cr0.eq) goto loc_8213BDF8;
	// addi r4,r30,1487
	ctx.r4.s64 = ctx.r30.s64 + 1487;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288048
	ctx.lr = 0x8213BE18;
	sub_82288048(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213BD98) {
	__imp__sub_8213BD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8213BE28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,30400
	ctx.r31.s64 = ctx.r11.s64 + 30400;
	// li r5,2496
	ctx.r5.s64 = 2496;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd778
	ctx.lr = 0x8213BE48;
	sub_822DD778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82288288
	ctx.lr = 0x8213BE50;
	sub_82288288(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82288288
	ctx.lr = 0x8213BE60;
	sub_82288288(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x82288288
	ctx.lr = 0x8213BE70;
	sub_82288288(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82288288
	ctx.lr = 0x8213BE80;
	sub_82288288(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r11.u32);
	// bl 0x822881b0
	ctx.lr = 0x8213BE90;
	sub_822881B0(ctx, base);
	// addi r29,r31,1064
	ctx.r29.s64 = ctx.r31.s64 + 1064;
	// stb r3,1166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1166, ctx.r3.u8);
loc_8213BE98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82288288
	ctx.lr = 0x8213BEA0;
	sub_82288288(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r31,1164
	ctx.r11.s64 = ctx.r31.s64 + 1164;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213be98
	if (ctx.cr6.lt) goto loc_8213BE98;
	// li r5,63
	ctx.r5.s64 = 63;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,1487
	ctx.r4.s64 = ctx.r31.s64 + 1487;
	// bl 0x82288498
	ctx.lr = 0x8213BEC4;
	sub_82288498(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213BE20) {
	__imp__sub_8213BE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213BECC) {
	__imp__sub_8213BECC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r4,r11,30400
	ctx.r4.s64 = ctx.r11.s64 + 30400;
	// addi r3,r10,-32504
	ctx.r3.s64 = ctx.r10.s64 + -32504;
	// li r5,2496
	ctx.r5.s64 = 2496;
	// b 0x822dd768
	sub_822DD768(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213BED0) {
	__imp__sub_8213BED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r11,r11,1167
	ctx.r11.s64 = ctx.r11.s64 + 1167;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e7e98
	sub_822E7E98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213BEE8) {
	__imp__sub_8213BEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213BF04) {
	__imp__sub_8213BF04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8213BF10;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r31,r11,6948
	ctx.r31.s64 = ctx.r11.s64 + 6948;
	// addi r30,r10,4872
	ctx.r30.s64 = ctx.r10.s64 + 4872;
loc_8213BF34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b1e0
	ctx.lr = 0x8213BF3C;
	sub_8236B1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213bfa0
	if (ctx.cr6.eq) goto loc_8213BFA0;
	// bl 0x82310110
	ctx.lr = 0x8213BF48;
	sub_82310110(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82372ae0
	ctx.lr = 0x8213BF6C;
	sub_82372AE0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82310110
	ctx.lr = 0x8213BF74;
	sub_82310110(ctx, base);
	// subf r5,r25,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r25.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213BF84;
	sub_82280900(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8213bfac
	if (ctx.cr6.eq) goto loc_8213BFAC;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x8228b0d8
	ctx.lr = 0x8213BF94;
	sub_8228B0D8(ctx, base);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,12
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 12, ctx.xer);
	// blt cr6,0x8213bf34
	if (ctx.cr6.lt) goto loc_8213BF34;
loc_8213BFA0:
	// li r3,1627
	ctx.r3.s64 = 1627;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8213BFAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213BF08) {
	__imp__sub_8213BF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213BFB8) {
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
	// li r5,2496
	ctx.r5.s64 = 2496;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823de090
	ctx.lr = 0x8213BFDC;
	sub_823DE090(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// lfs f13,12260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12260);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r30.u8);
	// lfs f12,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// stb r30,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r30.u8);
	// lfs f11,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f11.f64 = double(temp.f32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r4,4672(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4672);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x822e7e98
	ctx.lr = 0x8213C03C;
	sub_822E7E98(ctx, base);
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,4668(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4668);
	// bl 0x822e7e98
	ctx.lr = 0x8213C050;
	sub_822E7E98(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stb r30,1164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1164, ctx.r30.u8);
	// lis r30,-32191
	ctx.r30.s64 = -2109669376;
	// stw r5,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r5.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,1423
	ctx.r3.s64 = ctx.r31.s64 + 1423;
	// lwz r4,4664(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4664);
	// bl 0x822e7e98
	ctx.lr = 0x8213C070;
	sub_822E7E98(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,1487
	ctx.r3.s64 = ctx.r31.s64 + 1487;
	// lwz r4,4664(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4664);
	// bl 0x822e7e98
	ctx.lr = 0x8213C080;
	sub_822E7E98(ctx, base);
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

PPC_WEAK_FUNC(sub_8213BFB8) {
	__imp__sub_8213BFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C098) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8213bfb8
	ctx.lr = 0x8213C0B8;
	sub_8213BFB8(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-348(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -348);
	// bl 0x822e1f18
	ctx.lr = 0x8213C0C8;
	sub_822E1F18(ctx, base);
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-344(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -344);
	// bl 0x822e1f18
	ctx.lr = 0x8213C0D8;
	sub_822E1F18(ctx, base);
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-372(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -372);
	// bl 0x822e1f18
	ctx.lr = 0x8213C0E8;
	sub_822E1F18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8213C0F0;
	sub_82141340(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r7,6620
	ctx.r5.s64 = ctx.r7.s64 + 6620;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227ebd8
	ctx.lr = 0x8213C104;
	sub_8227EBD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213C098) {
	__imp__sub_8213C098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213C114) {
	__imp__sub_8213C114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C118) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213c164
	if (ctx.cr6.eq) goto loc_8213C164;
loc_8213C140:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x8213C14C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213c180
	if (ctx.cr6.eq) goto loc_8213C180;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213c140
	if (!ctx.cr6.eq) goto loc_8213C140;
loc_8213C164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213C168:
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
loc_8213C180:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822e0578
	ctx.lr = 0x8213C188;
	sub_822E0578(ctx, base);
	// b 0x8213c168
	goto loc_8213C168;
}

PPC_WEAK_FUNC(sub_8213C118) {
	__imp__sub_8213C118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213C18C) {
	__imp__sub_8213C18C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C190) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,4676
	ctx.r31.s64 = ctx.r11.s64 + 4676;
	// lwz r11,4676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213c1dc
	if (ctx.cr6.eq) goto loc_8213C1DC;
loc_8213C1BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8213c118
	ctx.lr = 0x8213C1C8;
	sub_8213C118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8213c1e0
	if (!ctx.cr6.eq) goto loc_8213C1E0;
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213c1bc
	if (!ctx.cr6.eq) goto loc_8213C1BC;
loc_8213C1DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213C1E0:
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

PPC_WEAK_FUNC(sub_8213C190) {
	__imp__sub_8213C190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// cmpwi cr6,r4,64
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 64, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgt cr6,0x8213c260
	if (ctx.cr6.gt) goto loc_8213C260;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// ble cr6,0x8213c238
	if (!ctx.cr6.gt) goto loc_8213C238;
	// addi r10,r4,-33
	ctx.r10.s64 = ctx.r4.s64 + -33;
	// lwz r9,1060(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_8213C238:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8213c260
	if (!ctx.cr6.gt) goto loc_8213C260;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// lwz r9,1056(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1056);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_8213C260:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213C1F8) {
	__imp__sub_8213C1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// cmpwi cr6,r4,64
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 64, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// ble cr6,0x8213c2a4
	if (!ctx.cr6.gt) goto loc_8213C2A4;
	// addi r10,r4,-33
	ctx.r10.s64 = ctx.r4.s64 + -33;
	// lwz r9,1060(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r6,1060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1060, ctx.r6.u32);
	// blr 
	return;
loc_8213C2A4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// lwz r9,1056(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1056);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r6,1056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1056, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213C268) {
	__imp__sub_8213C268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// addi r9,r11,1164
	ctx.r9.s64 = ctx.r11.s64 + 1164;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213C2C8) {
	__imp__sub_8213C2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// addi r9,r11,1164
	ctx.r9.s64 = ctx.r11.s64 + 1164;
	// stbx r4,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213C2E0) {
	__imp__sub_8213C2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// mulli r11,r3,2496
	ctx.r11.s64 = ctx.r3.s64 * 2496;
	// addi r10,r10,20416
	ctx.r10.s64 = ctx.r10.s64 + 20416;
	// addi r10,r10,1551
	ctx.r10.s64 = ctx.r10.s64 + 1551;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213C2F8) {
	__imp__sub_8213C2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r11,r11,1551
	ctx.r11.s64 = ctx.r11.s64 + 1551;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822e7e98
	sub_822E7E98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213C310) {
	__imp__sub_8213C310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213C32C) {
	__imp__sub_8213C32C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213C330) {
	__imp__sub_8213C330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// stbx r4,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213C348) {
	__imp__sub_8213C348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C360) {
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
	// bge cr6,0x8213c3f4
	if (!ctx.cr6.lt) goto loc_8213C3F4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8213c3c8
	if (!ctx.cr6.gt) goto loc_8213C3C8;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// li r3,15
	ctx.r3.s64 = 15;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x8213C3B4;
	sub_82280B08(ctx, base);
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
loc_8213C3C8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// bl 0x82280b08
	ctx.lr = 0x8213C3E0;
	sub_82280B08(ctx, base);
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
loc_8213C3F4:
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwzx r31,r10,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// ble cr6,0x8213c414
	if (!ctx.cr6.gt) goto loc_8213C414;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8213c41c
	goto loc_8213C41C;
loc_8213C414:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_8213C41C:
	// bl 0x823deaf8
	ctx.lr = 0x8213C420;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213bcb8
	ctx.lr = 0x8213C42C;
	sub_8213BCB8(ctx, base);
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

PPC_WEAK_FUNC(sub_8213C360) {
	__imp__sub_8213C360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C440) {
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
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r4,r6,6880
	ctx.r4.s64 = ctx.r6.s64 + 6880;
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// li r3,14
	ctx.r3.s64 = 14;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,20416
	ctx.r10.s64 = ctx.r8.s64 + 20416;
	// lwzx r6,r5,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mulli r11,r6,2496
	ctx.r11.s64 = ctx.r6.s64 * 2496;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,1044(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	// bl 0x82280900
	ctx.lr = 0x8213C48C;
	sub_82280900(ctx, base);
	// lwz r3,1044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	// bl 0x82336c58
	ctx.lr = 0x8213C494;
	sub_82336C58(ctx, base);
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

PPC_WEAK_FUNC(sub_8213C440) {
	__imp__sub_8213C440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r9,20416
	ctx.r9.s64 = ctx.r9.s64 + 20416;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// lwz r10,-17592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// addi r11,r9,1164
	ctx.r11.s64 = ctx.r9.s64 + 1164;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r10,r6,2496
	ctx.r10.s64 = ctx.r6.s64 * 2496;
	// lbzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stbx r3,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213c4f4
	if (ctx.cr6.eq) goto loc_8213C4F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,7116
	ctx.r5.s64 = ctx.r11.s64 + 7116;
	// b 0x8213c4fc
	goto loc_8213C4FC;
loc_8213C4F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,7112
	ctx.r5.s64 = ctx.r11.s64 + 7112;
loc_8213C4FC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,7068
	ctx.r4.s64 = ctx.r11.s64 + 7068;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213C4A8) {
	__imp__sub_8213C4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213C50C) {
	__imp__sub_8213C50C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8213C518;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r10,r10,20416
	ctx.r10.s64 = ctx.r10.s64 + 20416;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// addi r31,r10,64
	ctx.r31.s64 = ctx.r10.s64 + 64;
	// addi r8,r11,68
	ctx.r8.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mulli r30,r28,2496
	ctx.r30.s64 = ctx.r28.s64 * 2496;
	// lbzx r29,r30,r31
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x8213c598
	if (ctx.cr6.lt) goto loc_8213C598;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8213c570
	if (!ctx.cr6.gt) goto loc_8213C570;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8213c578
	goto loc_8213C578;
loc_8213C570:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_8213C578:
	// bl 0x823deaf8
	ctx.lr = 0x8213C57C;
	sub_823DEAF8(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// subfe r11,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213c5dc
	if (ctx.cr6.eq) goto loc_8213C5DC;
	// b 0x8213c5a4
	goto loc_8213C5A4;
loc_8213C598:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8213C5A4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213c5c0
	if (ctx.cr6.eq) goto loc_8213C5C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,7116
	ctx.r5.s64 = ctx.r11.s64 + 7116;
	// b 0x8213c5c8
	goto loc_8213C5C8;
loc_8213C5C0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,7112
	ctx.r5.s64 = ctx.r11.s64 + 7112;
loc_8213C5C8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r11,7120
	ctx.r4.s64 = ctx.r11.s64 + 7120;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213C5DC;
	sub_82280900(ctx, base);
loc_8213C5DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213C510) {
	__imp__sub_8213C510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213C5E4) {
	__imp__sub_8213C5E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C5E8) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r8,r10,20416
	ctx.r8.s64 = ctx.r10.s64 + 20416;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// addi r7,r11,68
	ctx.r7.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// mulli r7,r31,2496
	ctx.r7.s64 = ctx.r31.s64 * 2496;
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x8213c678
	if (!ctx.cr6.lt) goto loc_8213C678;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8213c65c
	if (!ctx.cr6.gt) goto loc_8213C65C;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// li r3,15
	ctx.r3.s64 = 15;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x8213C658;
	sub_82280B08(ctx, base);
	// b 0x8213c6d8
	goto loc_8213C6D8;
loc_8213C65C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// bl 0x82280b08
	ctx.lr = 0x8213C674;
	sub_82280B08(ctx, base);
	// b 0x8213c6d8
	goto loc_8213C6D8;
loc_8213C678:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8213c690
	if (!ctx.cr6.gt) goto loc_8213C690;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8213c698
	goto loc_8213C698;
loc_8213C690:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_8213C698:
	// bl 0x823dec00
	ctx.lr = 0x8213C69C;
	sub_823DEC00(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8213c6b8
	if (!ctx.cr6.lt) goto loc_8213C6B8;
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_8213C6B8:
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,7168
	ctx.r4.s64 = ctx.r11.s64 + 7168;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213C6D8;
	sub_82280900(ctx, base);
loc_8213C6D8:
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

PPC_WEAK_FUNC(sub_8213C5E8) {
	__imp__sub_8213C5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C6F0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82141340
	ctx.lr = 0x8213C714;
	sub_82141340(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
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

PPC_WEAK_FUNC(sub_8213C6F0) {
	__imp__sub_8213C6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213C74C) {
	__imp__sub_8213C74C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f30,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r6,7348
	ctx.r3.s64 = ctx.r6.s64 + 7348;
	// lfs f3,7544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7544);
	ctx.f3.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f2,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8213C7A4;
	sub_822E1660(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r3,-32636(r5)
	PPC_STORE_U32(ctx.r5.u32 + -32636, ctx.r3.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lfs f31,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r9,7312
	ctx.r3.s64 = ctx.r9.s64 + 7312;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f3,14164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14164);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,7344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7344);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x8213C7DC;
	sub_822E1660(ctx, base);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r3,-32640(r7)
	PPC_STORE_U32(ctx.r7.u32 + -32640, ctx.r3.u32);
	// addi r3,r5,7284
	ctx.r3.s64 = ctx.r5.s64 + 7284;
	// lfs f3,6048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6048);
	ctx.f3.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x822e1660
	ctx.lr = 0x8213C808;
	sub_822E1660(ctx, base);
	// lis r4,-32154
	ctx.r4.s64 = -2107244544;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,12412(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12412, ctx.r3.u32);
	// addi r3,r10,7252
	ctx.r3.s64 = ctx.r10.s64 + 7252;
	// lfs f29,12260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12260);
	ctx.f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x8213C838;
	sub_822E1660(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r3,r7,7220
	ctx.r3.s64 = ctx.r7.s64 + 7220;
	// stw r11,-19704(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19704, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8213C864;
	sub_822E1660(ctx, base);
	// lis r6,-32154
	ctx.r6.s64 = -2107244544;
	// stw r3,12408(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12408, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213C750) {
	__imp__sub_8213C750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213C88C) {
	__imp__sub_8213C88C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C890) {
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
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// addi r10,r9,20416
	ctx.r10.s64 = ctx.r9.s64 + 20416;
	// addi r4,r8,7376
	ctx.r4.s64 = ctx.r8.s64 + 7376;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,14
	ctx.r3.s64 = 14;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,2496
	ctx.r11.s64 = ctx.r5.s64 * 2496;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82280900
	ctx.lr = 0x8213C8D8;
	sub_82280900(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-32636(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32636);
	// bl 0x822e1f88
	ctx.lr = 0x8213C8E8;
	sub_822E1F88(ctx, base);
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-32640(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32640);
	// bl 0x822e1f88
	ctx.lr = 0x8213C8F8;
	sub_822E1F88(ctx, base);
	// lis r3,-32154
	ctx.r3.s64 = -2107244544;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12412);
	// bl 0x822e1f88
	ctx.lr = 0x8213C908;
	sub_822E1F88(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-19704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19704);
	// bl 0x822e1f88
	ctx.lr = 0x8213C918;
	sub_822E1F88(ctx, base);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12408(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12408);
	// bl 0x822e1f88
	ctx.lr = 0x8213C928;
	sub_822E1F88(ctx, base);
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

PPC_WEAK_FUNC(sub_8213C890) {
	__imp__sub_8213C890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213C93C) {
	__imp__sub_8213C93C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// lwz r10,-17592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lwz r11,-32636(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32636);
	// addi r6,r8,20416
	ctx.r6.s64 = ctx.r8.s64 + 20416;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r3,-32154
	ctx.r3.s64 = -2107244544;
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lwz r10,-32640(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -32640);
	// lis r5,-32154
	ctx.r5.s64 = -2107244544;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r4,r4,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwz r9,12412(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12412);
	// mulli r11,r4,2496
	ctx.r11.s64 = ctx.r4.s64 * 2496;
	// lwz r8,-19704(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19704);
	// lwz r7,12408(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12408);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f10,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213C940) {
	__imp__sub_8213C940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213C9BC) {
	__imp__sub_8213C9BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x8213b948
	sub_8213B948(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213C9C0) {
	__imp__sub_8213C9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213C9DC) {
	__imp__sub_8213C9DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213C9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8213C9E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r8,r10,20416
	ctx.r8.s64 = ctx.r10.s64 + 20416;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// addi r7,r11,68
	ctx.r7.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// mulli r7,r30,2496
	ctx.r7.s64 = ctx.r30.s64 * 2496;
	// add r31,r7,r8
	ctx.r31.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x8213ca70
	if (!ctx.cr6.lt) goto loc_8213CA70;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8213ca50
	if (!ctx.cr6.gt) goto loc_8213CA50;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// li r3,15
	ctx.r3.s64 = 15;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x8213CA48;
	sub_82280B08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8213CA50:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// bl 0x82280b08
	ctx.lr = 0x8213CA68;
	sub_82280B08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8213CA70:
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8213caa8
	if (ctx.cr6.eq) goto loc_8213CAA8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8213ca98
	if (!ctx.cr6.gt) goto loc_8213CA98;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8213cacc
	goto loc_8213CACC;
loc_8213CA98:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// b 0x8213cacc
	goto loc_8213CACC;
loc_8213CAA8:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8213cac0
	if (!ctx.cr6.gt) goto loc_8213CAC0;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8213cac8
	goto loc_8213CAC8;
loc_8213CAC0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
loc_8213CAC8:
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
loc_8213CACC:
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x822e7e98
	ctx.lr = 0x8213CAD4;
	sub_822E7E98(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r6,r31,68
	ctx.r6.s64 = ctx.r31.s64 + 68;
	// bne cr6,0x8213cae8
	if (!ctx.cr6.eq) goto loc_8213CAE8;
	// addi r6,r31,100
	ctx.r6.s64 = ctx.r31.s64 + 100;
	// beq cr6,0x8213caf4
	if (ctx.cr6.eq) goto loc_8213CAF4;
loc_8213CAE8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,7504
	ctx.r5.s64 = ctx.r11.s64 + 7504;
	// b 0x8213cafc
	goto loc_8213CAFC;
loc_8213CAF4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,7496
	ctx.r5.s64 = ctx.r11.s64 + 7496;
loc_8213CAFC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,7444
	ctx.r4.s64 = ctx.r11.s64 + 7444;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213CB10;
	sub_82280900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213C9E0) {
	__imp__sub_8213C9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CB18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8213c9e0
	sub_8213C9E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213CB18) {
	__imp__sub_8213CB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CB20) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213c9e0
	sub_8213C9E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213CB20) {
	__imp__sub_8213CB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CB28) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,20416
	ctx.r10.s64 = ctx.r8.s64 + 20416;
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r6,2496
	ctx.r11.s64 = ctx.r6.s64 * 2496;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,65(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stb r3,65(r11)
	PPC_STORE_U8(ctx.r11.u32 + 65, ctx.r3.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213cb74
	if (ctx.cr6.eq) goto loc_8213CB74;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,7116
	ctx.r5.s64 = ctx.r11.s64 + 7116;
	// b 0x8213cb7c
	goto loc_8213CB7C;
loc_8213CB74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,7112
	ctx.r5.s64 = ctx.r11.s64 + 7112;
loc_8213CB7C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,7512
	ctx.r4.s64 = ctx.r11.s64 + 7512;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213CB28) {
	__imp__sub_8213CB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213CB8C) {
	__imp__sub_8213CB8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CB90) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,20416
	ctx.r10.s64 = ctx.r8.s64 + 20416;
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r6,2496
	ctx.r11.s64 = ctx.r6.s64 * 2496;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,67(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 67);
	// lbz r4,65(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stb r10,67(r11)
	PPC_STORE_U8(ctx.r11.u32 + 67, ctx.r10.u8);
	// beq cr6,0x8213cbe0
	if (ctx.cr6.eq) goto loc_8213CBE0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,7116
	ctx.r5.s64 = ctx.r11.s64 + 7116;
	// b 0x8213cbe8
	goto loc_8213CBE8;
loc_8213CBE0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,7112
	ctx.r5.s64 = ctx.r11.s64 + 7112;
loc_8213CBE8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,7564
	ctx.r4.s64 = ctx.r11.s64 + 7564;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213CB90) {
	__imp__sub_8213CB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,20416
	ctx.r10.s64 = ctx.r8.s64 + 20416;
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,2496
	ctx.r11.s64 = ctx.r5.s64 * 2496;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r10,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r10.u8);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r9,7616
	ctx.r4.s64 = ctx.r9.s64 + 7616;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213CBF8) {
	__imp__sub_8213CBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CC44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213CC44) {
	__imp__sub_8213CC44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CC48) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,20416
	ctx.r10.s64 = ctx.r8.s64 + 20416;
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,2496
	ctx.r11.s64 = ctx.r5.s64 * 2496;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,61(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 61);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r10,61(r11)
	PPC_STORE_U8(ctx.r11.u32 + 61, ctx.r10.u8);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r9,7704
	ctx.r4.s64 = ctx.r9.s64 + 7704;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213CC48) {
	__imp__sub_8213CC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CC94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213CC94) {
	__imp__sub_8213CC94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CC98) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,20416
	ctx.r10.s64 = ctx.r8.s64 + 20416;
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,2496
	ctx.r11.s64 = ctx.r5.s64 * 2496;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,62(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 62);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r10,62(r11)
	PPC_STORE_U8(ctx.r11.u32 + 62, ctx.r10.u8);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r9,7776
	ctx.r4.s64 = ctx.r9.s64 + 7776;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213CC98) {
	__imp__sub_8213CC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CCE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213CCE4) {
	__imp__sub_8213CCE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,20416
	ctx.r10.s64 = ctx.r8.s64 + 20416;
	// addi r7,r11,36
	ctx.r7.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,2496
	ctx.r11.s64 = ctx.r5.s64 * 2496;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,63(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 63);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r10,63(r11)
	PPC_STORE_U8(ctx.r11.u32 + 63, ctx.r10.u8);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r9,7848
	ctx.r4.s64 = ctx.r9.s64 + 7848;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213CCE8) {
	__imp__sub_8213CCE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CD34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213CD34) {
	__imp__sub_8213CD34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CD38) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r8,r10,20416
	ctx.r8.s64 = ctx.r10.s64 + 20416;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// addi r7,r11,68
	ctx.r7.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// mulli r7,r30,2496
	ctx.r7.s64 = ctx.r30.s64 * 2496;
	// add r31,r7,r8
	ctx.r31.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x8213cdc8
	if (!ctx.cr6.lt) goto loc_8213CDC8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8213cdac
	if (!ctx.cr6.gt) goto loc_8213CDAC;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// li r3,15
	ctx.r3.s64 = 15;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x8213CDA8;
	sub_82280B08(ctx, base);
	// b 0x8213ce40
	goto loc_8213CE40;
loc_8213CDAC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// bl 0x82280b08
	ctx.lr = 0x8213CDC4;
	sub_82280B08(ctx, base);
	// b 0x8213ce40
	goto loc_8213CE40;
loc_8213CDC8:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8213cde0
	if (!ctx.cr6.gt) goto loc_8213CDE0;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8213cde8
	goto loc_8213CDE8;
loc_8213CDE0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_8213CDE8:
	// bl 0x823dec00
	ctx.lr = 0x8213CDEC;
	sub_823DEC00(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8213ce08
	if (!ctx.cr6.lt) goto loc_8213CE08;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8213CE08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8213ce20
	if (!ctx.cr6.gt) goto loc_8213CE20;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8213CE20:
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,7920
	ctx.r4.s64 = ctx.r11.s64 + 7920;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213CE40;
	sub_82280900(ctx, base);
loc_8213CE40:
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

PPC_WEAK_FUNC(sub_8213CD38) {
	__imp__sub_8213CD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CE58) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r8,r10,20416
	ctx.r8.s64 = ctx.r10.s64 + 20416;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// addi r7,r11,68
	ctx.r7.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// mulli r7,r31,2496
	ctx.r7.s64 = ctx.r31.s64 * 2496;
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x8213cee8
	if (!ctx.cr6.lt) goto loc_8213CEE8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8213cecc
	if (!ctx.cr6.gt) goto loc_8213CECC;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// li r3,15
	ctx.r3.s64 = 15;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x8213CEC8;
	sub_82280B08(ctx, base);
	// b 0x8213cf50
	goto loc_8213CF50;
loc_8213CECC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// bl 0x82280b08
	ctx.lr = 0x8213CEE4;
	sub_82280B08(ctx, base);
	// b 0x8213cf50
	goto loc_8213CF50;
loc_8213CEE8:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8213cf00
	if (!ctx.cr6.gt) goto loc_8213CF00;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8213cf08
	goto loc_8213CF08;
loc_8213CF00:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_8213CF08:
	// bl 0x823dec00
	ctx.lr = 0x8213CF0C;
	sub_823DEC00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r9,7972
	ctx.r4.s64 = ctx.r9.s64 + 7972;
	// lfs f0,7544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7544);
	ctx.f0.f64 = double(temp.f32);
	// li r3,14
	ctx.r3.s64 = 14;
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsel f9,f11,f0,f12
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsel f1,f10,f13,f9
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfs f1,56(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// bl 0x82280900
	ctx.lr = 0x8213CF50;
	sub_82280900(ctx, base);
loc_8213CF50:
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

PPC_WEAK_FUNC(sub_8213CE58) {
	__imp__sub_8213CE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213CF68) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r8,r10,20416
	ctx.r8.s64 = ctx.r10.s64 + 20416;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// addi r7,r11,68
	ctx.r7.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// mulli r7,r31,2496
	ctx.r7.s64 = ctx.r31.s64 * 2496;
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x8213cff8
	if (!ctx.cr6.lt) goto loc_8213CFF8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8213cfdc
	if (!ctx.cr6.gt) goto loc_8213CFDC;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// li r3,15
	ctx.r3.s64 = 15;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x8213CFD8;
	sub_82280B08(ctx, base);
	// b 0x8213d060
	goto loc_8213D060;
loc_8213CFDC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,7036
	ctx.r4.s64 = ctx.r11.s64 + 7036;
	// bl 0x82280b08
	ctx.lr = 0x8213CFF4;
	sub_82280B08(ctx, base);
	// b 0x8213d060
	goto loc_8213D060;
loc_8213CFF8:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8213d010
	if (!ctx.cr6.gt) goto loc_8213D010;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8213d018
	goto loc_8213D018;
loc_8213D010:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_8213D018:
	// bl 0x823dec00
	ctx.lr = 0x8213D01C;
	sub_823DEC00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r9,8020
	ctx.r4.s64 = ctx.r9.s64 + 8020;
	// lfs f0,14164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	ctx.f0.f64 = double(temp.f32);
	// li r3,14
	ctx.r3.s64 = 14;
	// lfs f13,7344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7344);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsel f9,f11,f0,f12
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsel f1,f10,f13,f9
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfs f1,12(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// bl 0x82280900
	ctx.lr = 0x8213D060;
	sub_82280900(ctx, base);
loc_8213D060:
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

PPC_WEAK_FUNC(sub_8213CF68) {
	__imp__sub_8213CF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8213D080;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r8,r10,20416
	ctx.r8.s64 = ctx.r10.s64 + 20416;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// addi r7,r11,68
	ctx.r7.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// mulli r7,r29,2496
	ctx.r7.s64 = ctx.r29.s64 * 2496;
	// add r31,r7,r8
	ctx.r31.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// lbz r30,66(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// blt cr6,0x8213d100
	if (ctx.cr6.lt) goto loc_8213D100;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8213d0d8
	if (!ctx.cr6.gt) goto loc_8213D0D8;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8213d0e0
	goto loc_8213D0E0;
loc_8213D0D8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_8213D0E0:
	// bl 0x823deaf8
	ctx.lr = 0x8213D0E4;
	sub_823DEAF8(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// subfe r11,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213d144
	if (ctx.cr6.eq) goto loc_8213D144;
	// b 0x8213d10c
	goto loc_8213D10C;
loc_8213D100:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8213D10C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213d128
	if (ctx.cr6.eq) goto loc_8213D128;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,7116
	ctx.r5.s64 = ctx.r11.s64 + 7116;
	// b 0x8213d130
	goto loc_8213D130;
loc_8213D128:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,7112
	ctx.r5.s64 = ctx.r11.s64 + 7112;
loc_8213D130:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,8080
	ctx.r4.s64 = ctx.r11.s64 + 8080;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213D144;
	sub_82280900(ctx, base);
loc_8213D144:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213D078) {
	__imp__sub_8213D078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213D14C) {
	__imp__sub_8213D14C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D150) {
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
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-19320
	ctx.r5.s64 = ctx.r11.s64 + -19320;
	// addi r3,r9,8656
	ctx.r3.s64 = ctx.r9.s64 + 8656;
	// addi r4,r10,-15520
	ctx.r4.s64 = ctx.r10.s64 + -15520;
	// bl 0x8227da10
	ctx.lr = 0x8213D178;
	sub_8227DA10(ctx, base);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,-19340
	ctx.r5.s64 = ctx.r8.s64 + -19340;
	// addi r3,r6,8632
	ctx.r3.s64 = ctx.r6.s64 + 8632;
	// addi r4,r7,-15296
	ctx.r4.s64 = ctx.r7.s64 + -15296;
	// bl 0x8227da10
	ctx.lr = 0x8213D194;
	sub_8227DA10(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,-19360
	ctx.r5.s64 = ctx.r5.s64 + -19360;
	// addi r3,r3,8608
	ctx.r3.s64 = ctx.r3.s64 + 8608;
	// addi r4,r4,-15192
	ctx.r4.s64 = ctx.r4.s64 + -15192;
	// bl 0x8227da10
	ctx.lr = 0x8213D1B0;
	sub_8227DA10(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-19380
	ctx.r5.s64 = ctx.r11.s64 + -19380;
	// addi r3,r9,8584
	ctx.r3.s64 = ctx.r9.s64 + 8584;
	// addi r4,r10,-14192
	ctx.r4.s64 = ctx.r10.s64 + -14192;
	// bl 0x8227da10
	ctx.lr = 0x8213D1CC;
	sub_8227DA10(ctx, base);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,-19400
	ctx.r5.s64 = ctx.r8.s64 + -19400;
	// addi r3,r6,8560
	ctx.r3.s64 = ctx.r6.s64 + 8560;
	// addi r4,r7,-14016
	ctx.r4.s64 = ctx.r7.s64 + -14016;
	// bl 0x8227da10
	ctx.lr = 0x8213D1E8;
	sub_8227DA10(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,-19420
	ctx.r5.s64 = ctx.r5.s64 + -19420;
	// addi r3,r3,8532
	ctx.r3.s64 = ctx.r3.s64 + 8532;
	// addi r4,r4,-15088
	ctx.r4.s64 = ctx.r4.s64 + -15088;
	// bl 0x8227da10
	ctx.lr = 0x8213D204;
	sub_8227DA10(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-19440
	ctx.r5.s64 = ctx.r11.s64 + -19440;
	// addi r3,r9,8504
	ctx.r3.s64 = ctx.r9.s64 + 8504;
	// addi r4,r10,-14872
	ctx.r4.s64 = ctx.r10.s64 + -14872;
	// bl 0x8227da10
	ctx.lr = 0x8213D220;
	sub_8227DA10(ctx, base);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,-19460
	ctx.r5.s64 = ctx.r8.s64 + -19460;
	// addi r3,r6,8476
	ctx.r3.s64 = ctx.r6.s64 + 8476;
	// addi r4,r7,-13544
	ctx.r4.s64 = ctx.r7.s64 + -13544;
	// bl 0x8227da10
	ctx.lr = 0x8213D23C;
	sub_8227DA10(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,-19480
	ctx.r5.s64 = ctx.r5.s64 + -19480;
	// addi r3,r3,8452
	ctx.r3.s64 = ctx.r3.s64 + 8452;
	// addi r4,r4,-13536
	ctx.r4.s64 = ctx.r4.s64 + -13536;
	// bl 0x8227da10
	ctx.lr = 0x8213D258;
	sub_8227DA10(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-19500
	ctx.r5.s64 = ctx.r11.s64 + -19500;
	// addi r3,r9,8420
	ctx.r3.s64 = ctx.r9.s64 + 8420;
	// addi r4,r10,-13888
	ctx.r4.s64 = ctx.r10.s64 + -13888;
	// bl 0x8227da10
	ctx.lr = 0x8213D274;
	sub_8227DA10(ctx, base);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,-19520
	ctx.r5.s64 = ctx.r8.s64 + -19520;
	// addi r3,r6,8396
	ctx.r3.s64 = ctx.r6.s64 + 8396;
	// addi r4,r7,-13528
	ctx.r4.s64 = ctx.r7.s64 + -13528;
	// bl 0x8227da10
	ctx.lr = 0x8213D290;
	sub_8227DA10(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// addi r5,r5,-19540
	ctx.r5.s64 = ctx.r5.s64 + -19540;
	// addi r4,r4,-13320
	ctx.r4.s64 = ctx.r4.s64 + -13320;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,8360
	ctx.r3.s64 = ctx.r3.s64 + 8360;
	// bl 0x8227da10
	ctx.lr = 0x8213D2AC;
	sub_8227DA10(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-19560
	ctx.r5.s64 = ctx.r11.s64 + -19560;
	// addi r3,r9,8332
	ctx.r3.s64 = ctx.r9.s64 + 8332;
	// addi r4,r10,-13240
	ctx.r4.s64 = ctx.r10.s64 + -13240;
	// bl 0x8227da10
	ctx.lr = 0x8213D2C8;
	sub_8227DA10(ctx, base);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,-19580
	ctx.r5.s64 = ctx.r8.s64 + -19580;
	// addi r3,r6,8304
	ctx.r3.s64 = ctx.r6.s64 + 8304;
	// addi r4,r7,-13160
	ctx.r4.s64 = ctx.r7.s64 + -13160;
	// bl 0x8227da10
	ctx.lr = 0x8213D2E4;
	sub_8227DA10(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,-19600
	ctx.r5.s64 = ctx.r5.s64 + -19600;
	// addi r3,r3,8276
	ctx.r3.s64 = ctx.r3.s64 + 8276;
	// addi r4,r4,-13080
	ctx.r4.s64 = ctx.r4.s64 + -13080;
	// bl 0x8227da10
	ctx.lr = 0x8213D300;
	sub_8227DA10(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-19620
	ctx.r5.s64 = ctx.r11.s64 + -19620;
	// addi r3,r9,8256
	ctx.r3.s64 = ctx.r9.s64 + 8256;
	// addi r4,r10,-13000
	ctx.r4.s64 = ctx.r10.s64 + -13000;
	// bl 0x8227da10
	ctx.lr = 0x8213D31C;
	sub_8227DA10(ctx, base);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,-19640
	ctx.r5.s64 = ctx.r8.s64 + -19640;
	// addi r3,r6,8236
	ctx.r3.s64 = ctx.r6.s64 + 8236;
	// addi r4,r7,-12712
	ctx.r4.s64 = ctx.r7.s64 + -12712;
	// bl 0x8227da10
	ctx.lr = 0x8213D338;
	sub_8227DA10(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,-19660
	ctx.r5.s64 = ctx.r5.s64 + -19660;
	// addi r3,r3,8212
	ctx.r3.s64 = ctx.r3.s64 + 8212;
	// addi r4,r4,-12440
	ctx.r4.s64 = ctx.r4.s64 + -12440;
	// bl 0x8227da10
	ctx.lr = 0x8213D354;
	sub_8227DA10(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-19680
	ctx.r5.s64 = ctx.r11.s64 + -19680;
	// addi r3,r9,8172
	ctx.r3.s64 = ctx.r9.s64 + 8172;
	// addi r4,r10,-12168
	ctx.r4.s64 = ctx.r10.s64 + -12168;
	// bl 0x8227da10
	ctx.lr = 0x8213D370;
	sub_8227DA10(ctx, base);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,-19700
	ctx.r5.s64 = ctx.r8.s64 + -19700;
	// addi r3,r6,8148
	ctx.r3.s64 = ctx.r6.s64 + 8148;
	// addi r4,r7,-13424
	ctx.r4.s64 = ctx.r7.s64 + -13424;
	// bl 0x8227da10
	ctx.lr = 0x8213D38C;
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

PPC_WEAK_FUNC(sub_8213D150) {
	__imp__sub_8213D150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213D39C) {
	__imp__sub_8213D39C(ctx, base);
}

