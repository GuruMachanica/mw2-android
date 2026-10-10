#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82284708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,-6624
	ctx.r9.s64 = ctx.r11.s64 + -6624;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82284738
	if (ctx.cr6.eq) goto loc_82284738;
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// mulli r10,r11,156
	ctx.r10.s64 = ctx.r11.s64 * 156;
	// addi r11,r9,1560
	ctx.r11.s64 = ctx.r9.s64 + 1560;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82284738:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82284708) {
	__imp__sub_82284708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// srawi r10,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 3;
	// addi r9,r11,-2520
	ctx.r9.s64 = ctx.r11.s64 + -2520;
	// clrlwi r8,r3,29
	ctx.r8.u64 = ctx.r3.u32 & 0x7;
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r3,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82284740) {
	__imp__sub_82284740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228476C) {
	__imp__sub_8228476C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// srawi r10,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 3;
	// addi r11,r11,-2520
	ctx.r11.s64 = ctx.r11.s64 + -2520;
	// clrlwi r9,r3,29
	ctx.r9.u64 = ctx.r3.u32 & 0x7;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82284770) {
	__imp__sub_82284770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284798) {
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
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x822ec4e8
	ctx.lr = 0x822847B0;
	sub_822EC4E8(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r11,r11,-4592
	ctx.r11.s64 = ctx.r11.s64 + -4592;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r31,2048
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2048, ctx.xer);
	// bge cr6,0x822847ec
	if (!ctx.cr6.lt) goto loc_822847EC;
	// addi r10,r11,4104
	ctx.r10.s64 = ctx.r11.s64 + 4104;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_822847D0:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8228482c
	if (ctx.cr6.eq) goto loc_8228482C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r31,2048
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2048, ctx.xer);
	// blt cr6,0x822847d0
	if (ctx.cr6.lt) goto loc_822847D0;
loc_822847EC:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82284814
	if (ctx.cr6.lt) goto loc_82284814;
loc_822847F8:
	// addi r10,r11,4104
	ctx.r10.s64 = ctx.r11.s64 + 4104;
	// lbzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8228486c
	if (ctx.cr6.eq) goto loc_8228486C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822847f8
	if (!ctx.cr6.gt) goto loc_822847F8;
loc_82284814:
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
loc_8228482C:
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r8,r11,4104
	ctx.r8.s64 = ctx.r11.s64 + 4104;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r3,11
	ctx.r3.s64 = 11;
	// lwz r10,-6632(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6632);
	// stbx r7,r8,r31
	PPC_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,-6632(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6632, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x82284854;
	sub_822EC500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_8228486C:
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,11
	ctx.r3.s64 = 11;
	// stbx r8,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u8);
	// lwz r11,-6632(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6632);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-6632(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6632, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x82284890;
	sub_822EC500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82284798) {
	__imp__sub_82284798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822848A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,14148
	ctx.r3.s64 = ctx.r11.s64 + 14148;
	// b 0x82280980
	sub_82280980(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822848A8) {
	__imp__sub_822848A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822848B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822848B4) {
	__imp__sub_822848B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822848B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,14172
	ctx.r4.s64 = ctx.r11.s64 + 14172;
	// b 0x822830e8
	sub_822830E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822848B8) {
	__imp__sub_822848B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822848C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822848D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82284798
	ctx.lr = 0x822848E8;
	sub_82284798(ctx, base);
	// lis r27,-31931
	ctx.r27.s64 = -2092630016;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r27,-6632
	ctx.r11.s64 = ctx.r27.s64 + -6632;
	// lis r6,-31936
	ctx.r6.s64 = -2092957696;
	// addi r8,r11,4368
	ctx.r8.s64 = ctx.r11.s64 + 4368;
	// mulli r10,r3,156
	ctx.r10.s64 = ctx.r3.s64 * 156;
	// sthx r3,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u16);
	// addi r11,r6,1560
	ctx.r11.s64 = ctx.r6.s64 + 1560;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ee958
	ctx.lr = 0x82284924;
	sub_822EE958(ctx, base);
	// lwz r11,-6632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6632);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82284940
	if (!ctx.cr6.eq) goto loc_82284940;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,14172
	ctx.r4.s64 = ctx.r11.s64 + 14172;
	// bl 0x822830e8
	ctx.lr = 0x82284940;
	sub_822830E8(ctx, base);
loc_82284940:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822848C8) {
	__imp__sub_822848C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228494C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228494C) {
	__imp__sub_8228494C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82284958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// addi r29,r11,-2264
	ctx.r29.s64 = ctx.r11.s64 + -2264;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r30,r11,1560
	ctx.r30.s64 = ctx.r11.s64 + 1560;
loc_82284970:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228498c
	if (ctx.cr6.eq) goto loc_8228498C;
	// mulli r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 * 156;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822eed90
	ctx.lr = 0x8228498C;
	sub_822EED90(ctx, base);
loc_8228498C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r29,4104
	ctx.r11.s64 = ctx.r29.s64 + 4104;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82284970
	if (ctx.cr6.lt) goto loc_82284970;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82284950) {
	__imp__sub_82284950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822849A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822849A4) {
	__imp__sub_822849A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822849A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822849B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82284798
	ctx.lr = 0x822849C8;
	sub_82284798(ctx, base);
	// lis r27,-31931
	ctx.r27.s64 = -2092630016;
	// clrlwi r9,r31,29
	ctx.r9.u64 = ctx.r31.u32 & 0x7;
	// addi r11,r27,-6632
	ctx.r11.s64 = ctx.r27.s64 + -6632;
	// li r8,1
	ctx.r8.s64 = 1;
	// srawi r10,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 3;
	// addi r11,r11,4112
	ctx.r11.s64 = ctx.r11.s64 + 4112;
	// lis r7,-31936
	ctx.r7.s64 = -2092957696;
	// slw r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r7,1560
	ctx.r9.s64 = ctx.r7.s64 + 1560;
	// lbzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r31,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r9,-6144
	ctx.r4.s64 = ctx.r9.s64 + -6144;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// mulli r8,r3,156
	ctx.r8.s64 = ctx.r3.s64 * 156;
	// stbx r6,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// sthx r3,r7,r4
	PPC_STORE_U16(ctx.r7.u32 + ctx.r4.u32, ctx.r3.u16);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r7,r5,16
	ctx.r7.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ee958
	ctx.lr = 0x82284A28;
	sub_822EE958(ctx, base);
	// lwz r11,-6632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6632);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82284a44
	if (!ctx.cr6.eq) goto loc_82284A44;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,14172
	ctx.r4.s64 = ctx.r11.s64 + 14172;
	// bl 0x822830e8
	ctx.lr = 0x82284A44;
	sub_822830E8(ctx, base);
loc_82284A44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f2388
	ctx.lr = 0x82284A4C;
	sub_822F2388(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822849A8) {
	__imp__sub_822849A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82284A60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r11,1560
	ctx.r31.s64 = ctx.r11.s64 + 1560;
	// addi r10,r31,-6144
	ctx.r10.s64 = ctx.r31.s64 + -6144;
	// lhzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// bl 0x82284798
	ctx.lr = 0x82284A80;
	sub_82284798(ctx, base);
	// lis r28,-31931
	ctx.r28.s64 = -2092630016;
	// addi r11,r28,-6632
	ctx.r11.s64 = ctx.r28.s64 + -6632;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// mulli r11,r3,156
	ctx.r11.s64 = ctx.r3.s64 * 156;
	// sthx r3,r30,r7
	PPC_STORE_U16(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u16);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r11,r29,156
	ctx.r11.s64 = ctx.r29.s64 * 156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822eea00
	ctx.lr = 0x82284AA8;
	sub_822EEA00(ctx, base);
	// lwz r11,-6632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6632);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82284ac4
	if (!ctx.cr6.eq) goto loc_82284AC4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,14172
	ctx.r4.s64 = ctx.r11.s64 + 14172;
	// bl 0x822830e8
	ctx.lr = 0x82284AC4;
	sub_822830E8(ctx, base);
loc_82284AC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82284A58) {
	__imp__sub_82284A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-2264
	ctx.r10.s64 = ctx.r10.s64 + -2264;
	// addi r8,r10,-4360
	ctx.r8.s64 = ctx.r10.s64 + -4360;
	// lhzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r7,0
	ctx.r7.s64 = 0;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// sthx r7,r11,r8
	PPC_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82284AD0) {
	__imp__sub_82284AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82284AFC) {
	__imp__sub_82284AFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82284B08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r10,-6632
	ctx.r31.s64 = ctx.r10.s64 + -6632;
	// addi r10,r31,4368
	ctx.r10.s64 = ctx.r31.s64 + 4368;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82284b6c
	if (ctx.cr6.eq) goto loc_82284B6C;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,11
	ctx.r3.s64 = 11;
	// sthx r29,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u16);
	// bl 0x822ec4e8
	ctx.lr = 0x82284B3C;
	sub_822EC4E8(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mulli r10,r30,156
	ctx.r10.s64 = ctx.r30.s64 * 156;
	// addi r11,r11,1560
	ctx.r11.s64 = ctx.r11.s64 + 1560;
	// addi r9,r11,-2048
	ctx.r9.s64 = ctx.r11.s64 + -2048;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r29,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r29.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822eea98
	ctx.lr = 0x82284B64;
	sub_822EEA98(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x822ec500
	ctx.lr = 0x82284B6C;
	sub_822EC500(ctx, base);
loc_82284B6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82284B00) {
	__imp__sub_82284B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82284B74) {
	__imp__sub_82284B74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82284B80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r11,1560
	ctx.r31.s64 = ctx.r11.s64 + 1560;
	// addi r8,r31,-6144
	ctx.r8.s64 = ctx.r31.s64 + -6144;
	// lhzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82284c04
	if (ctx.cr6.eq) goto loc_82284C04;
	// lis r28,-31931
	ctx.r28.s64 = -2092630016;
	// srawi r11,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 3;
	// addi r10,r28,-6632
	ctx.r10.s64 = ctx.r28.s64 + -6632;
	// clrlwi r7,r3,29
	ctx.r7.u64 = ctx.r3.u32 & 0x7;
	// addi r10,r10,4112
	ctx.r10.s64 = ctx.r10.s64 + 4112;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// slw r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// li r3,11
	ctx.r3.s64 = 11;
	// sthx r29,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r29.u16);
	// or r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// bl 0x822ec4e8
	ctx.lr = 0x82284BDC;
	sub_822EC4E8(ctx, base);
	// mulli r11,r30,156
	ctx.r11.s64 = ctx.r30.s64 * 156;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r7,r31,-2048
	ctx.r7.s64 = ctx.r31.s64 + -2048;
	// stbx r29,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r29.u8);
	// lwz r11,-6632(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6632);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-6632(r28)
	PPC_STORE_U32(ctx.r28.u32 + -6632, ctx.r11.u32);
	// bl 0x822eea98
	ctx.lr = 0x82284BFC;
	sub_822EEA98(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x822ec500
	ctx.lr = 0x82284C04;
	sub_822EC500(ctx, base);
loc_82284C04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82284B78) {
	__imp__sub_82284B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82284C0C) {
	__imp__sub_82284C0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82284C18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31936
	ctx.r29.s64 = -2092957696;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r30,r29,-4592
	ctx.r30.s64 = ctx.r29.s64 + -4592;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,4104
	ctx.r3.s64 = ctx.r30.s64 + 4104;
	// bl 0x822dd778
	ctx.lr = 0x82284C34;
	sub_822DD778(ctx, base);
	// lis r28,-31931
	ctx.r28.s64 = -2092630016;
	// li r11,2047
	ctx.r11.s64 = 2047;
	// addi r31,r28,1840
	ctx.r31.s64 = ctx.r28.s64 + 1840;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r31,-4360
	ctx.r3.s64 = ctx.r31.s64 + -4360;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,-8472(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8472, ctx.r11.u32);
	// bl 0x822dd778
	ctx.lr = 0x82284C54;
	sub_822DD778(ctx, base);
	// addi r3,r31,-4104
	ctx.r3.s64 = ctx.r31.s64 + -4104;
	// li r5,4104
	ctx.r5.s64 = 4104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822dd778
	ctx.lr = 0x82284C64;
	sub_822DD778(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822dd778
	ctx.lr = 0x82284C74;
	sub_822DD778(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-4592(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4592, ctx.r11.u32);
	// stw r10,1840(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1840, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82284C10) {
	__imp__sub_82284C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82284C8C) {
	__imp__sub_82284C8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// lwz r11,1840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1840);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r11,1840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1840, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82284C90) {
	__imp__sub_82284C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82284CAC) {
	__imp__sub_82284CAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82284CB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// addi r30,r11,-2264
	ctx.r30.s64 = ctx.r11.s64 + -2264;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r29,r11,1560
	ctx.r29.s64 = ctx.r11.s64 + 1560;
loc_82284CD0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82284cf4
	if (ctx.cr6.eq) goto loc_82284CF4;
	// mulli r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 * 156;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82284cf4
	if (ctx.cr6.eq) goto loc_82284CF4;
	// bl 0x822eec48
	ctx.lr = 0x82284CF4;
	sub_822EEC48(ctx, base);
loc_82284CF4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r30,4104
	ctx.r11.s64 = ctx.r30.s64 + 4104;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82284cd0
	if (ctx.cr6.lt) goto loc_82284CD0;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r30,r11,-4584
	ctx.r30.s64 = ctx.r11.s64 + -4584;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82284D10:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// mulli r11,r10,156
	ctx.r11.s64 = ctx.r10.s64 * 156;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82284d38
	if (ctx.cr6.eq) goto loc_82284D38;
	// bl 0x822eec48
	ctx.lr = 0x82284D38;
	sub_822EEC48(ctx, base);
loc_82284D38:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r30,4096
	ctx.r11.s64 = ctx.r30.s64 + 4096;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82284d10
	if (ctx.cr6.lt) goto loc_82284D10;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82284CB0) {
	__imp__sub_82284CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82284D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// addi r30,r11,-2264
	ctx.r30.s64 = ctx.r11.s64 + -2264;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r29,r11,1560
	ctx.r29.s64 = ctx.r11.s64 + 1560;
loc_82284D70:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82284d94
	if (ctx.cr6.eq) goto loc_82284D94;
	// mulli r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 * 156;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82284d94
	if (ctx.cr6.eq) goto loc_82284D94;
	// bl 0x822f0790
	ctx.lr = 0x82284D94;
	sub_822F0790(ctx, base);
loc_82284D94:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r30,4104
	ctx.r11.s64 = ctx.r30.s64 + 4104;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82284d70
	if (ctx.cr6.lt) goto loc_82284D70;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r30,r11,-4584
	ctx.r30.s64 = ctx.r11.s64 + -4584;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82284DB0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// mulli r11,r10,156
	ctx.r11.s64 = ctx.r10.s64 * 156;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82284dd8
	if (ctx.cr6.eq) goto loc_82284DD8;
	// bl 0x822f0790
	ctx.lr = 0x82284DD8;
	sub_822F0790(ctx, base);
loc_82284DD8:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r30,4096
	ctx.r11.s64 = ctx.r30.s64 + 4096;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82284db0
	if (ctx.cr6.lt) goto loc_82284DB0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82284D50) {
	__imp__sub_82284D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82284DF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-17592
	ctx.r29.s64 = ctx.r11.s64 + -17592;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r10,r29,68
	ctx.r10.s64 = ctx.r29.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r9,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82284ef0
	if (!ctx.cr6.lt) goto loc_82284EF0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r10,-28736
	ctx.r25.s64 = ctx.r10.s64 + -28736;
	// addi r24,r11,-6372
	ctx.r24.s64 = ctx.r11.s64 + -6372;
loc_82284E40:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r29,68
	ctx.r10.s64 = ctx.r29.s64 + 68;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82284e68
	if (!ctx.cr6.lt) goto loc_82284E68;
	// addi r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 + 100;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// b 0x82284e6c
	goto loc_82284E6C;
loc_82284E68:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82284E6C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82284E70:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82284e70
	if (!ctx.cr6.eq) goto loc_82284E70;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpwi cr6,r31,4094
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4094, ctx.xer);
	// bge cr6,0x82284ef0
	if (!ctx.cr6.lt) goto loc_82284EF0;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82284eb4
	if (!ctx.cr6.lt) goto loc_82284EB4;
	// addi r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 + 100;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r5,r10,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// b 0x82284eb8
	goto loc_82284EB8;
loc_82284EB4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82284EB8:
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822e8280
	ctx.lr = 0x82284EC4;
	sub_822E8280(ctx, base);
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82284ee0
	if (ctx.cr6.eq) goto loc_82284EE0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822e8280
	ctx.lr = 0x82284EE0;
	sub_822E8280(ctx, base);
loc_82284EE0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82284e40
	if (ctx.cr6.lt) goto loc_82284E40;
loc_82284EF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82284DF0) {
	__imp__sub_82284DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82284EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82284F00;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4208(r1)
	ea = -4208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r29,r10,-28736
	ctx.r29.s64 = ctx.r10.s64 + -28736;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82284f40
	if (!ctx.cr6.gt) goto loc_82284F40;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82284f44
	goto loc_82284F44;
loc_82284F40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82284F44:
	// bl 0x822e0220
	ctx.lr = 0x82284F48;
	sub_822E0220(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82284f5c
	if (!ctx.cr6.eq) goto loc_82284F5C;
	// addi r1,r1,4208
	ctx.r1.s64 = ctx.r1.s64 + 4208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82284F5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82284fec
	if (!ctx.cr6.eq) goto loc_82284FEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822df098
	ctx.lr = 0x82284F7C;
	sub_822DF098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822df088
	ctx.lr = 0x82284F88;
	sub_822DF088(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,14204
	ctx.r4.s64 = ctx.r11.s64 + 14204;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x82280900
	ctx.lr = 0x82284FA4;
	sub_82280900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dfca8
	ctx.lr = 0x82284FAC;
	sub_822DFCA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82284fd4
	if (ctx.cr6.eq) goto loc_82284FD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822df0a8
	ctx.lr = 0x82284FC0;
	sub_822DF0A8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,14188
	ctx.r4.s64 = ctx.r11.s64 + 14188;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82284FD4;
	sub_82280900(ctx, base);
loc_82284FD4:
	// ld r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 60);
	// lbz r3,10(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// bl 0x822df988
	ctx.lr = 0x82284FE0;
	sub_822DF988(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4208
	ctx.r1.s64 = ctx.r1.s64 + 4208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82284FEC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82285004
	if (!ctx.cr6.gt) goto loc_82285004;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82285008
	goto loc_82285008;
loc_82285004:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82285008:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82284df0
	ctx.lr = 0x82285014;
	sub_82284DF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e31d0
	ctx.lr = 0x82285020;
	sub_822E31D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4208
	ctx.r1.s64 = ctx.r1.s64 + 4208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82284EF8) {
	__imp__sub_82284EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228502C) {
	__imp__sub_8228502C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285030) {
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
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x822851ec
	if (ctx.cr6.gt) goto loc_822851EC;
	// lis r12,-32216
	ctx.r12.s64 = -2111307776;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20576
	ctx.r12.s64 = ctx.r12.s64 + 20576;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82285088;
	case 1:
		goto loc_8228513C;
	case 2:
		goto loc_822851D8;
	case 3:
		goto loc_822851D8;
	case 4:
		goto loc_822851D8;
	case 5:
		goto loc_822850B0;
	case 6:
		goto loc_82285200;
	case 7:
		goto loc_822851D8;
	case 8:
		goto loc_822851D8;
	case 9:
		goto loc_822851D8;
	default:
		return;
	}
	// lwz r17,20616(r8)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20616);
	// lwz r17,20796(r8)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20796);
	// lwz r17,20952(r8)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20952);
	// lwz r17,20952(r8)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20952);
	// lwz r17,20952(r8)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20952);
	// lwz r17,20656(r8)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20656);
	// lwz r17,20992(r8)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20992);
	// lwz r17,20952(r8)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20952);
	// lwz r17,20952(r8)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20952);
	// lwz r17,20952(r8)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20952);
loc_82285088:
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x822e19c8
	ctx.lr = 0x8228509C;
	sub_822E19C8(ctx, base);
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
loc_822850B0:
	// lwz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x82285110
	if (ctx.cr6.gt) goto loc_82285110;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82285110
	if (ctx.cr6.lt) goto loc_82285110;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822850f4
	if (ctx.cr6.eq) goto loc_822850F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1a30
	ctx.lr = 0x822850E0;
	sub_822E1A30(ctx, base);
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
loc_822850F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e1a30
	ctx.lr = 0x822850FC;
	sub_822E1A30(ctx, base);
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
loc_82285110:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82285124
	if (!ctx.cr6.eq) goto loc_82285124;
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
loc_82285124:
	// bl 0x822e1a30
	ctx.lr = 0x82285128;
	sub_822E1A30(ctx, base);
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
loc_8228513C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82285190
	if (ctx.cr6.gt) goto loc_82285190;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// blt cr6,0x82285190
	if (ctx.cr6.lt) goto loc_82285190;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x822851c0
	if (ctx.cr6.eq) goto loc_822851C0;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// bl 0x822e1ab8
	ctx.lr = 0x8228517C;
	sub_822E1AB8(ctx, base);
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
loc_82285190:
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822851bc
	if (!ctx.cr6.eq) goto loc_822851BC;
	// lfs f1,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1ab8
	ctx.lr = 0x822851A8;
	sub_822E1AB8(ctx, base);
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
loc_822851BC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_822851C0:
	// bl 0x822e1ab8
	ctx.lr = 0x822851C4;
	sub_822E1AB8(ctx, base);
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
loc_822851D8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14240
	ctx.r4.s64 = ctx.r11.s64 + 14240;
	// bl 0x82280900
	ctx.lr = 0x822851EC;
	sub_82280900(ctx, base);
loc_822851EC:
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
loc_82285200:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82285228
	if (ctx.cr6.eq) goto loc_82285228;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r9,r10,r11
	ctx.r9.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r4,r8,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r8.s64;
	// bl 0x822e1a30
	ctx.lr = 0x82285228;
	sub_822E1A30(ctx, base);
loc_82285228:
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

PPC_WEAK_FUNC(sub_82285030) {
	__imp__sub_82285030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228523C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228523C) {
	__imp__sub_8228523C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82285248;
	__savegprlr_24(ctx, base);
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
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x822852a8
	if (!ctx.cr6.lt) goto loc_822852A8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82285284
	if (!ctx.cr6.gt) goto loc_82285284;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8228528c
	goto loc_8228528C;
loc_82285284:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
loc_8228528C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14340
	ctx.r4.s64 = ctx.r11.s64 + 14340;
	// bl 0x82280900
	ctx.lr = 0x8228529C;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822852A8:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r25,r9,-28736
	ctx.r25.s64 = ctx.r9.s64 + -28736;
	// ble cr6,0x822852c8
	if (!ctx.cr6.gt) goto loc_822852C8;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822852cc
	goto loc_822852CC;
loc_822852C8:
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_822852CC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822e0220
	ctx.lr = 0x822852D4;
	sub_822E0220(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822852fc
	if (!ctx.cr6.eq) goto loc_822852FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r11,14300
	ctx.r4.s64 = ctx.r11.s64 + 14300;
	// bl 0x82280900
	ctx.lr = 0x822852F0;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822852FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82285324
	if (!ctx.cr6.eq) goto loc_82285324;
	// bl 0x82285030
	ctx.lr = 0x8228531C;
	sub_82285030(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82285324:
	// bl 0x822df088
	ctx.lr = 0x82285328;
	sub_822DF088(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x822853e4
	if (!ctx.cr6.gt) goto loc_822853E4;
	// li r28,8
	ctx.r28.s64 = 8;
loc_8228534C:
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82285364
	if (!ctx.cr6.lt) goto loc_82285364;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r30,r9,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// b 0x82285368
	goto loc_82285368;
loc_82285364:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82285368:
	// lbz r11,10(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 10);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x822853ac
	if (!ctx.cr6.eq) goto loc_822853AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822de828
	ctx.lr = 0x82285380;
	sub_822DE828(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82285384:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82285384
	if (!ctx.cr6.eq) goto loc_82285384;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822853ac
	if (ctx.cr6.eq) goto loc_822853AC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822853AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822e8058
	ctx.lr = 0x822853B8;
	sub_822E8058(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x822853fc
	if (ctx.cr6.eq) goto loc_822853FC;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8228534c
	if (ctx.cr6.lt) goto loc_8228534C;
loc_822853E4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x8228544c
	if (!ctx.cr6.gt) goto loc_8228544C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r31,8(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82285450
	goto loc_82285450;
loc_822853FC:
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82285434
	if (!ctx.cr6.lt) goto loc_82285434;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x822e31d0
	ctx.lr = 0x82285428;
	sub_822E31D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82285434:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822e31d0
	ctx.lr = 0x82285440;
	sub_822E31D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8228544C:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82285450:
	// lbz r11,10(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 10);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82285494
	if (!ctx.cr6.eq) goto loc_82285494;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822de828
	ctx.lr = 0x82285468;
	sub_822DE828(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8228546C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8228546c
	if (!ctx.cr6.eq) goto loc_8228546C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82285494
	if (ctx.cr6.eq) goto loc_82285494;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82285494:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822e31d0
	ctx.lr = 0x822854A0;
	sub_822E31D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82285240) {
	__imp__sub_82285240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822854AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822854AC) {
	__imp__sub_822854AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822854B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82285240
	sub_82285240(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822854B0) {
	__imp__sub_822854B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822854B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822854B4) {
	__imp__sub_822854B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822854B8) {
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
	// bl 0x82285240
	ctx.lr = 0x822854CC;
	sub_82285240(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82285534
	if (ctx.cr6.eq) goto loc_82285534;
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
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82285508
	if (!ctx.cr6.gt) goto loc_82285508;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82285510
	goto loc_82285510;
loc_82285508:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
loc_82285510:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0220
	ctx.lr = 0x82285518;
	sub_822E0220(ctx, base);
	// bl 0x822df088
	ctx.lr = 0x8228551C;
	sub_822DF088(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,14388
	ctx.r4.s64 = ctx.r11.s64 + 14388;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82285534;
	sub_82280900(ctx, base);
loc_82285534:
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

PPC_WEAK_FUNC(sub_822854B8) {
	__imp__sub_822854B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285548) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4208(r1)
	ea = -4208 + ctx.r1.u32;
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
	// bge cr6,0x82285594
	if (!ctx.cr6.lt) goto loc_82285594;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14436
	ctx.r4.s64 = ctx.r11.s64 + 14436;
	// bl 0x82280900
	ctx.lr = 0x82285590;
	sub_82280900(ctx, base);
	// b 0x82285658
	goto loc_82285658;
loc_82285594:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r30,r9,-28736
	ctx.r30.s64 = ctx.r9.s64 + -28736;
	// ble cr6,0x822855b4
	if (!ctx.cr6.gt) goto loc_822855B4;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822855b8
	goto loc_822855B8;
loc_822855B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822855B8:
	// bl 0x822de3b0
	ctx.lr = 0x822855BC;
	sub_822DE3B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82285618
	if (!ctx.cr6.eq) goto loc_82285618;
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
	// ble cr6,0x82285600
	if (!ctx.cr6.gt) goto loc_82285600;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14408
	ctx.r4.s64 = ctx.r11.s64 + 14408;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82280900
	ctx.lr = 0x822855FC;
	sub_82280900(ctx, base);
	// b 0x82285658
	goto loc_82285658;
loc_82285600:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,14408
	ctx.r4.s64 = ctx.r11.s64 + 14408;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82285614;
	sub_82280900(ctx, base);
	// b 0x82285658
	goto loc_82285658;
loc_82285618:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82284df0
	ctx.lr = 0x82285624;
	sub_82284DF0(ctx, base);
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
	// ble cr6,0x8228564c
	if (!ctx.cr6.gt) goto loc_8228564C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82285650
	goto loc_82285650;
loc_8228564C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82285650:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e31d0
	ctx.lr = 0x82285658;
	sub_822E31D0(ctx, base);
loc_82285658:
	// addi r1,r1,4208
	ctx.r1.s64 = ctx.r1.s64 + 4208;
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

PPC_WEAK_FUNC(sub_82285548) {
	__imp__sub_82285548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285670) {
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
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x822856e8
	if (ctx.cr6.eq) goto loc_822856E8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822856cc
	if (!ctx.cr6.gt) goto loc_822856CC;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14520
	ctx.r4.s64 = ctx.r11.s64 + 14520;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82280900
	ctx.lr = 0x822856C8;
	sub_82280900(ctx, base);
	// b 0x8228576c
	goto loc_8228576C;
loc_822856CC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14520
	ctx.r4.s64 = ctx.r11.s64 + 14520;
	// bl 0x82280900
	ctx.lr = 0x822856E4;
	sub_82280900(ctx, base);
	// b 0x8228576c
	goto loc_8228576C;
loc_822856E8:
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x822856FC;
	sub_823DEAF8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r30,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822e0220
	ctx.lr = 0x82285710;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82285754
	if (ctx.cr6.eq) goto loc_82285754;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82285734
	if (!ctx.cr6.eq) goto loc_82285734;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82285754
	if (!ctx.cr6.eq) goto loc_82285754;
loc_82285734:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228576c
	if (ctx.cr6.eq) goto loc_8228576C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14484
	ctx.r4.s64 = ctx.r11.s64 + 14484;
	// bl 0x82280900
	ctx.lr = 0x82285750;
	sub_82280900(ctx, base);
	// b 0x8228576c
	goto loc_8228576C;
loc_82285754:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r6,r11,14468
	ctx.r6.s64 = ctx.r11.s64 + 14468;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e15d0
	ctx.lr = 0x8228576C;
	sub_822E15D0(ctx, base);
loc_8228576C:
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

PPC_WEAK_FUNC(sub_82285670) {
	__imp__sub_82285670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82285784) {
	__imp__sub_82285784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82285790;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82285800
	if (ctx.cr6.eq) goto loc_82285800;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822857e0
	if (!ctx.cr6.gt) goto loc_822857E0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14636
	ctx.r4.s64 = ctx.r11.s64 + 14636;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82280900
	ctx.lr = 0x822857D8;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822857E0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14636
	ctx.r4.s64 = ctx.r11.s64 + 14636;
	// bl 0x82280900
	ctx.lr = 0x822857F8;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82285800:
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x82285814;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r10,-28736
	ctx.r29.s64 = ctx.r10.s64 + -28736;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// ble cr6,0x82285848
	if (!ctx.cr6.gt) goto loc_82285848;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x8228584c
	goto loc_8228584C;
loc_82285848:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8228584C:
	// bl 0x823deaf8
	ctx.lr = 0x82285850;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x8228587c
	if (!ctx.cr6.gt) goto loc_8228587C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82285880
	goto loc_82285880;
loc_8228587C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82285880:
	// bl 0x823deaf8
	ctx.lr = 0x82285884;
	sub_823DEAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x822858b4
	if (!ctx.cr6.gt) goto loc_822858B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,14584
	ctx.r4.s64 = ctx.r11.s64 + 14584;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x822858AC;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822858B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e0220
	ctx.lr = 0x822858BC;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228590c
	if (ctx.cr6.eq) goto loc_8228590C;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x822858e0
	if (!ctx.cr6.eq) goto loc_822858E0;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8228590c
	if (!ctx.cr6.eq) goto loc_8228590C;
loc_822858E0:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8228592c
	if (ctx.cr6.eq) goto loc_8228592C;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8228592c
	if (ctx.cr6.eq) goto loc_8228592C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14548
	ctx.r4.s64 = ctx.r11.s64 + 14548;
	// bl 0x82280900
	ctx.lr = 0x82285904;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8228590C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r8,r11,14468
	ctx.r8.s64 = ctx.r11.s64 + 14468;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e1618
	ctx.lr = 0x8228592C;
	sub_822E1618(ctx, base);
loc_8228592C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82285788) {
	__imp__sub_82285788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82285934) {
	__imp__sub_82285934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82285940;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x822859d4
	if (ctx.cr6.eq) goto loc_822859D4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822859a8
	if (!ctx.cr6.gt) goto loc_822859A8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14636
	ctx.r4.s64 = ctx.r11.s64 + 14636;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82280900
	ctx.lr = 0x82285994;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822859A8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14636
	ctx.r4.s64 = ctx.r11.s64 + 14636;
	// bl 0x82280900
	ctx.lr = 0x822859C0;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822859D4:
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x823dec00
	ctx.lr = 0x822859E8;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// ble cr6,0x82285a1c
	if (!ctx.cr6.gt) goto loc_82285A1C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82285a20
	goto loc_82285A20;
loc_82285A1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82285A20:
	// bl 0x823dec00
	ctx.lr = 0x82285A24;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x82285a50
	if (!ctx.cr6.gt) goto loc_82285A50;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82285a54
	goto loc_82285A54;
loc_82285A50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82285A54:
	// bl 0x823dec00
	ctx.lr = 0x82285A58;
	sub_823DEC00(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82285aa4
	if (!ctx.cr6.gt) goto loc_82285AA4;
	// stfd f31,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f30,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f30.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r4,r11,14708
	ctx.r4.s64 = ctx.r11.s64 + 14708;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82285A90;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82285AA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e0220
	ctx.lr = 0x82285AAC;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82285b00
	if (ctx.cr6.eq) goto loc_82285B00;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82285ad0
	if (!ctx.cr6.eq) goto loc_82285AD0;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82285b00
	if (!ctx.cr6.eq) goto loc_82285B00;
loc_82285AD0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82285b20
	if (ctx.cr6.eq) goto loc_82285B20;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14676
	ctx.r4.s64 = ctx.r11.s64 + 14676;
	// bl 0x82280900
	ctx.lr = 0x82285AEC;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82285B00:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,256
	ctx.r7.s64 = 256;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r11,14468
	ctx.r8.s64 = ctx.r11.s64 + 14468;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e1660
	ctx.lr = 0x82285B20;
	sub_822E1660(ctx, base);
loc_82285B20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82285938) {
	__imp__sub_82285938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82285B34) {
	__imp__sub_82285B34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82285B40;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de024
	ctx.lr = 0x82285B48;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82285bc8
	if (ctx.cr6.eq) goto loc_82285BC8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82285ba0
	if (!ctx.cr6.gt) goto loc_82285BA0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14800
	ctx.r4.s64 = ctx.r11.s64 + 14800;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82280900
	ctx.lr = 0x82285B90;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x82285B9C;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82285BA0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14800
	ctx.r4.s64 = ctx.r11.s64 + 14800;
	// bl 0x82280900
	ctx.lr = 0x82285BB8;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x82285BC4;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82285BC8:
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x823dec00
	ctx.lr = 0x82285BDC;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// ble cr6,0x82285c10
	if (!ctx.cr6.gt) goto loc_82285C10;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82285c14
	goto loc_82285C14;
loc_82285C10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82285C14:
	// bl 0x823dec00
	ctx.lr = 0x82285C18;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x82285c44
	if (!ctx.cr6.gt) goto loc_82285C44;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82285c48
	goto loc_82285C48;
loc_82285C44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82285C48:
	// bl 0x823dec00
	ctx.lr = 0x82285C4C;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// ble cr6,0x82285c78
	if (!ctx.cr6.gt) goto loc_82285C78;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x82285c7c
	goto loc_82285C7C;
loc_82285C78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82285C7C:
	// bl 0x823dec00
	ctx.lr = 0x82285C80;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// ble cr6,0x82285cac
	if (!ctx.cr6.gt) goto loc_82285CAC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// b 0x82285cb0
	goto loc_82285CB0;
loc_82285CAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82285CB0:
	// bl 0x823dec00
	ctx.lr = 0x82285CB4;
	sub_823DEC00(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82285cfc
	if (!ctx.cr6.gt) goto loc_82285CFC;
	// stfd f31,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f30,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f30.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r4,r11,14708
	ctx.r4.s64 = ctx.r11.s64 + 14708;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82285CEC;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x82285CF8;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82285CFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e0220
	ctx.lr = 0x82285D04;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82285d54
	if (ctx.cr6.eq) goto loc_82285D54;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82285d28
	if (!ctx.cr6.eq) goto loc_82285D28;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82285d54
	if (!ctx.cr6.eq) goto loc_82285D54;
loc_82285D28:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82285d7c
	if (ctx.cr6.eq) goto loc_82285D7C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14760
	ctx.r4.s64 = ctx.r11.s64 + 14760;
	// bl 0x82280900
	ctx.lr = 0x82285D44;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x82285D50;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82285D54:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f31.f64;
	// li r9,256
	ctx.r9.s64 = 256;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// addi r10,r11,14468
	ctx.r10.s64 = ctx.r11.s64 + 14468;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e16f0
	ctx.lr = 0x82285D7C;
	sub_822E16F0(ctx, base);
loc_82285D7C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x82285D88;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82285B38) {
	__imp__sub_82285B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82285D8C) {
	__imp__sub_82285D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82285D98;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82285e2c
	if (ctx.cr6.eq) goto loc_82285E2C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82285e00
	if (!ctx.cr6.gt) goto loc_82285E00;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14904
	ctx.r4.s64 = ctx.r11.s64 + 14904;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82280900
	ctx.lr = 0x82285DEC;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82285E00:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,14904
	ctx.r4.s64 = ctx.r11.s64 + 14904;
	// bl 0x82280900
	ctx.lr = 0x82285E18;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82285E2C:
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x823dec00
	ctx.lr = 0x82285E40;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// ble cr6,0x82285e74
	if (!ctx.cr6.gt) goto loc_82285E74;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82285e78
	goto loc_82285E78;
loc_82285E74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82285E78:
	// bl 0x823dec00
	ctx.lr = 0x82285E7C;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x82285ea8
	if (!ctx.cr6.gt) goto loc_82285EA8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82285eac
	goto loc_82285EAC;
loc_82285EA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82285EAC:
	// bl 0x823dec00
	ctx.lr = 0x82285EB0;
	sub_823DEC00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x822e0220
	ctx.lr = 0x82285EBC;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82285f10
	if (ctx.cr6.eq) goto loc_82285F10;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82285ee0
	if (!ctx.cr6.eq) goto loc_82285EE0;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82285f10
	if (!ctx.cr6.eq) goto loc_82285F10;
loc_82285EE0:
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82285f38
	if (ctx.cr6.eq) goto loc_82285F38;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14864
	ctx.r4.s64 = ctx.r11.s64 + 14864;
	// bl 0x82280900
	ctx.lr = 0x82285EFC;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82285F10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r8,256
	ctx.r8.s64 = 256;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r9,r10,14468
	ctx.r9.s64 = ctx.r10.s64 + 14468;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f4,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x822e1740
	ctx.lr = 0x82285F38;
	sub_822E1740(ctx, base);
loc_82285F38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82285D90) {
	__imp__sub_82285D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82285F4C) {
	__imp__sub_82285F4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82285F50) {
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
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bge cr6,0x82285fa4
	if (!ctx.cr6.lt) goto loc_82285FA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14956
	ctx.r4.s64 = ctx.r11.s64 + 14956;
	// bl 0x82280900
	ctx.lr = 0x82285F90;
	sub_82280900(ctx, base);
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
loc_82285FA4:
	// bl 0x82285548
	ctx.lr = 0x82285FA8;
	sub_82285548(ctx, base);
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
	// ble cr6,0x82285fd0
	if (!ctx.cr6.gt) goto loc_82285FD0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82285fd8
	goto loc_82285FD8;
loc_82285FD0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82285FD8:
	// bl 0x822e0220
	ctx.lr = 0x82285FDC;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82285fec
	if (ctx.cr6.eq) goto loc_82285FEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e2710
	ctx.lr = 0x82285FEC;
	sub_822E2710(ctx, base);
loc_82285FEC:
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

PPC_WEAK_FUNC(sub_82285F50) {
	__imp__sub_82285F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286000) {
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
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8228604c
	if (ctx.cr6.eq) goto loc_8228604C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,14988
	ctx.r4.s64 = ctx.r11.s64 + 14988;
	// bl 0x82280900
	ctx.lr = 0x8228603C;
	sub_82280900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8228604C:
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x822e0220
	ctx.lr = 0x8228605C;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228606c
	if (ctx.cr6.eq) goto loc_8228606C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e2720
	ctx.lr = 0x8228606C;
	sub_822E2720(ctx, base);
loc_8228606C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82286000) {
	__imp__sub_82286000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228607C) {
	__imp__sub_8228607C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,15016
	ctx.r4.s64 = ctx.r11.s64 + 15016;
	// b 0x822e8058
	sub_822E8058(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82286080) {
	__imp__sub_82286080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286090) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r11,24704
	ctx.r3.s64 = ctx.r11.s64 + 24704;
	// bl 0x822e3358
	ctx.lr = 0x822860B0;
	sub_822E3358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82286090) {
	__imp__sub_82286090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822860C0) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,15016
	ctx.r4.s64 = ctx.r11.s64 + 15016;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x822860EC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228612c
	if (ctx.cr6.eq) goto loc_8228612C;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r12,8452
	ctx.r12.s64 = 8452;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8228612c
	if (!ctx.cr6.eq) goto loc_8228612C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822df098
	ctx.lr = 0x82286114;
	sub_822DF098(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,15028
	ctx.r4.s64 = ctx.r11.s64 + 15028;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d3ad0
	ctx.lr = 0x8228612C;
	sub_822D3AD0(ctx, base);
loc_8228612C:
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

PPC_WEAK_FUNC(sub_822860C0) {
	__imp__sub_822860C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82286144) {
	__imp__sub_82286144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286148) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r11,24768
	ctx.r3.s64 = ctx.r11.s64 + 24768;
	// bl 0x822e3358
	ctx.lr = 0x82286168;
	sub_822E3358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82286148) {
	__imp__sub_82286148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286178) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822861b4
	if (ctx.cr6.eq) goto loc_822861B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822dd2a8
	ctx.lr = 0x822861A8;
	sub_822DD2A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822862a0
	if (ctx.cr6.eq) goto loc_822862A0;
loc_822861B4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r11,-6372
	ctx.r31.s64 = ctx.r11.s64 + -6372;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82280900
	ctx.lr = 0x822861C8;
	sub_82280900(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x822861D4;
	sub_82280900(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822861f4
	if (ctx.cr6.eq) goto loc_822861F4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15068
	ctx.r4.s64 = ctx.r11.s64 + 15068;
	// b 0x822861f8
	goto loc_822861F8;
loc_822861F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_822861F8:
	// bl 0x82280900
	ctx.lr = 0x822861FC;
	sub_82280900(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228621c
	if (ctx.cr6.eq) goto loc_8228621C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15064
	ctx.r4.s64 = ctx.r11.s64 + 15064;
	// b 0x82286220
	goto loc_82286220;
loc_8228621C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82286220:
	// bl 0x82280900
	ctx.lr = 0x82286224;
	sub_82280900(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82286230;
	sub_82280900(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82286250
	if (ctx.cr6.eq) goto loc_82286250;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15060
	ctx.r4.s64 = ctx.r11.s64 + 15060;
	// b 0x82286254
	goto loc_82286254;
loc_82286250:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82286254:
	// bl 0x82280900
	ctx.lr = 0x82286258;
	sub_82280900(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82286278
	if (ctx.cr6.eq) goto loc_82286278;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15056
	ctx.r4.s64 = ctx.r11.s64 + 15056;
	// b 0x8228627c
	goto loc_8228627C;
loc_82286278:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8228627C:
	// bl 0x82280900
	ctx.lr = 0x82286280;
	sub_82280900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822df088
	ctx.lr = 0x82286288;
	sub_822DF088(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,15044
	ctx.r4.s64 = ctx.r11.s64 + 15044;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x822862A0;
	sub_82280900(ctx, base);
loc_822862A0:
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

PPC_WEAK_FUNC(sub_82286178) {
	__imp__sub_82286178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822862B8) {
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
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x822862f4
	if (!ctx.cr6.gt) goto loc_822862F4;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822862f8
	goto loc_822862F8;
loc_822862F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822862F8:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,24952
	ctx.r3.s64 = ctx.r11.s64 + 24952;
	// bl 0x822e3358
	ctx.lr = 0x82286304;
	sub_822E3358(ctx, base);
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r9,15072
	ctx.r4.s64 = ctx.r9.s64 + 15072;
	// lwz r5,-30064(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30064);
	// bl 0x82280900
	ctx.lr = 0x8228631C;
	sub_82280900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822862B8) {
	__imp__sub_822862B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228632C) {
	__imp__sub_8228632C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286330) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228637c
	if (ctx.cr6.eq) goto loc_8228637C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// bl 0x822df088
	ctx.lr = 0x82286364;
	sub_822DF088(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r10,15044
	ctx.r4.s64 = ctx.r10.s64 + 15044;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8228637C;
	sub_82280900(ctx, base);
loc_8228637C:
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

PPC_WEAK_FUNC(sub_82286330) {
	__imp__sub_82286330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286390) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,25392
	ctx.r3.s64 = ctx.r10.s64 + 25392;
	// bl 0x822e3358
	ctx.lr = 0x822863B4;
	sub_822E3358(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r9,15092
	ctx.r4.s64 = ctx.r9.s64 + 15092;
	// bl 0x82280900
	ctx.lr = 0x822863C8;
	sub_82280900(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82286390) {
	__imp__sub_82286390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822863D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822863E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8228641c
	if (ctx.cr6.eq) goto loc_8228641C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822dd2a8
	ctx.lr = 0x82286410;
	sub_822DD2A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82286498
	if (ctx.cr6.eq) goto loc_82286498;
loc_8228641C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dfca8
	ctx.lr = 0x82286424;
	sub_822DFCA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82286468
	if (ctx.cr6.eq) goto loc_82286468;
	// bl 0x822df0a8
	ctx.lr = 0x82286438;
	sub_822DF0A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822df088
	ctx.lr = 0x82286444;
	sub_822DF088(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,15132
	ctx.r5.s64 = ctx.r11.s64 + 15132;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x822e8368
	ctx.lr = 0x82286464;
	sub_822E8368(ctx, base);
	// b 0x82286488
	goto loc_82286488;
loc_82286468:
	// bl 0x822df088
	ctx.lr = 0x8228646C;
	sub_822DF088(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,15116
	ctx.r5.s64 = ctx.r11.s64 + 15116;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x82286488;
	sub_822E8368(ctx, base);
loc_82286488:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82280840
	ctx.lr = 0x82286498;
	sub_82280840(ctx, base);
loc_82286498:
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822863D8) {
	__imp__sub_822863D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822864A0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x822864e0
	if (!ctx.cr6.eq) goto loc_822864E0;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82286558
	if (ctx.cr6.eq) goto loc_82286558;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82286558
	if (ctx.cr6.eq) goto loc_82286558;
loc_822864E0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,15296
	ctx.r4.s64 = ctx.r11.s64 + 15296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280840
	ctx.lr = 0x822864F4;
	sub_82280840(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r9,25560
	ctx.r3.s64 = ctx.r9.s64 + 25560;
	// bl 0x822e3358
	ctx.lr = 0x82286514;
	sub_822E3358(ctx, base);
	// lis r8,-31852
	ctx.r8.s64 = -2087452672;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r5,r7,15256
	ctx.r5.s64 = ctx.r7.s64 + 15256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,-30064(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30064);
	// bl 0x822e8368
	ctx.lr = 0x82286534;
	sub_822E8368(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280840
	ctx.lr = 0x82286544;
	sub_82280840(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,15168
	ctx.r4.s64 = ctx.r6.s64 + 15168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280840
	ctx.lr = 0x82286558;
	sub_82280840(ctx, base);
loc_82286558:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

PPC_WEAK_FUNC(sub_822864A0) {
	__imp__sub_822864A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286570) {
	PPC_FUNC_PROLOGUE();
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
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x822865a0
	if (!ctx.cr6.gt) goto loc_822865A0;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822865a4
	goto loc_822865A4;
loc_822865A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822865A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822864a0
	sub_822864A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82286570) {
	__imp__sub_82286570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822865AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822865AC) {
	__imp__sub_822865AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822865B0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822865f0
	if (ctx.cr6.eq) goto loc_822865F0;
	// bl 0x822df088
	ctx.lr = 0x822865DC;
	sub_822DF088(ctx, base);
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,1856
	ctx.r3.s64 = ctx.r11.s64 + 1856;
	// bl 0x822e8c20
	ctx.lr = 0x822865F0;
	sub_822E8C20(ctx, base);
loc_822865F0:
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

PPC_WEAK_FUNC(sub_822865B0) {
	__imp__sub_822865B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82286604) {
	__imp__sub_82286604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286608) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82286648
	if (ctx.cr6.eq) goto loc_82286648;
	// bl 0x822df088
	ctx.lr = 0x82286634;
	sub_822DF088(ctx, base);
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,2880
	ctx.r3.s64 = ctx.r11.s64 + 2880;
	// bl 0x822e8e70
	ctx.lr = 0x82286648;
	sub_822E8E70(ctx, base);
loc_82286648:
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

PPC_WEAK_FUNC(sub_82286608) {
	__imp__sub_82286608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228665C) {
	__imp__sub_8228665C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286660) {
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
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r9,26032
	ctx.r3.s64 = ctx.r9.s64 + 26032;
	// stb r11,1856(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1856, ctx.r11.u8);
	// addi r31,r10,1856
	ctx.r31.s64 = ctx.r10.s64 + 1856;
	// bl 0x822e3358
	ctx.lr = 0x82286694;
	sub_822E3358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82286660) {
	__imp__sub_82286660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822866AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822866AC) {
	__imp__sub_822866AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822866B0) {
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
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r9,26120
	ctx.r3.s64 = ctx.r9.s64 + 26120;
	// stb r11,2880(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2880, ctx.r11.u8);
	// addi r31,r10,2880
	ctx.r31.s64 = ctx.r10.s64 + 2880;
	// bl 0x822e3358
	ctx.lr = 0x822866E4;
	sub_822E3358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_822866B0) {
	__imp__sub_822866B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822866FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822866FC) {
	__imp__sub_822866FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286700) {
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
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,11312
	ctx.r5.s64 = ctx.r11.s64 + 11312;
	// addi r3,r9,-10716
	ctx.r3.s64 = ctx.r9.s64 + -10716;
	// addi r4,r10,21680
	ctx.r4.s64 = ctx.r10.s64 + 21680;
	// bl 0x8227da10
	ctx.lr = 0x82286728;
	sub_8227DA10(ctx, base);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,11292
	ctx.r5.s64 = ctx.r8.s64 + 11292;
	// addi r3,r6,-10724
	ctx.r3.s64 = ctx.r6.s64 + -10724;
	// addi r4,r7,21688
	ctx.r4.s64 = ctx.r7.s64 + 21688;
	// bl 0x8227da10
	ctx.lr = 0x82286744;
	sub_8227DA10(ctx, base);
	// lis r5,-31931
	ctx.r5.s64 = -2092630016;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,11272
	ctx.r5.s64 = ctx.r5.s64 + 11272;
	// addi r3,r3,-10684
	ctx.r3.s64 = ctx.r3.s64 + -10684;
	// addi r4,r4,21832
	ctx.r4.s64 = ctx.r4.s64 + 21832;
	// bl 0x8227da10
	ctx.lr = 0x82286760;
	sub_8227DA10(ctx, base);
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,11252
	ctx.r5.s64 = ctx.r11.s64 + 11252;
	// addi r3,r9,-10692
	ctx.r3.s64 = ctx.r9.s64 + -10692;
	// addi r4,r10,24400
	ctx.r4.s64 = ctx.r10.s64 + 24400;
	// bl 0x8227da10
	ctx.lr = 0x8228677C;
	sub_8227DA10(ctx, base);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,11232
	ctx.r5.s64 = ctx.r8.s64 + 11232;
	// addi r3,r6,-10708
	ctx.r3.s64 = ctx.r6.s64 + -10708;
	// addi r4,r7,24576
	ctx.r4.s64 = ctx.r7.s64 + 24576;
	// bl 0x8227da10
	ctx.lr = 0x82286798;
	sub_8227DA10(ctx, base);
	// lis r5,-31931
	ctx.r5.s64 = -2092630016;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r5,r5,11212
	ctx.r5.s64 = ctx.r5.s64 + 11212;
	// addi r3,r3,15472
	ctx.r3.s64 = ctx.r3.s64 + 15472;
	// addi r4,r4,25272
	ctx.r4.s64 = ctx.r4.s64 + 25272;
	// bl 0x8227da10
	ctx.lr = 0x822867B4;
	sub_8227DA10(ctx, base);
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r11,11192
	ctx.r5.s64 = ctx.r11.s64 + 11192;
	// addi r3,r9,15460
	ctx.r3.s64 = ctx.r9.s64 + 15460;
	// addi r4,r10,25968
	ctx.r4.s64 = ctx.r10.s64 + 25968;
	// bl 0x8227da10
	ctx.lr = 0x822867D0;
	sub_8227DA10(ctx, base);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r5,r8,11172
	ctx.r5.s64 = ctx.r8.s64 + 11172;
	// addi r3,r6,15448
	ctx.r3.s64 = ctx.r6.s64 + 15448;
	// addi r4,r7,22128
	ctx.r4.s64 = ctx.r7.s64 + 22128;
	// bl 0x8227da10
	ctx.lr = 0x822867EC;
	sub_8227DA10(ctx, base);
	// lis r5,-31931
	ctx.r5.s64 = -2092630016;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r5,r5,11152
	ctx.r5.s64 = ctx.r5.s64 + 11152;
	// addi r3,r3,15436
	ctx.r3.s64 = ctx.r3.s64 + 15436;
	// addi r4,r4,22408
	ctx.r4.s64 = ctx.r4.s64 + 22408;
	// bl 0x8227da10
	ctx.lr = 0x82286808;
	sub_8227DA10(ctx, base);
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r11,11132
	ctx.r5.s64 = ctx.r11.s64 + 11132;
	// addi r3,r9,15424
	ctx.r3.s64 = ctx.r9.s64 + 15424;
	// addi r4,r10,22840
	ctx.r4.s64 = ctx.r10.s64 + 22840;
	// bl 0x8227da10
	ctx.lr = 0x82286824;
	sub_8227DA10(ctx, base);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r5,r8,11112
	ctx.r5.s64 = ctx.r8.s64 + 11112;
	// addi r3,r6,15412
	ctx.r3.s64 = ctx.r6.s64 + 15412;
	// addi r4,r7,23352
	ctx.r4.s64 = ctx.r7.s64 + 23352;
	// bl 0x8227da10
	ctx.lr = 0x82286840;
	sub_8227DA10(ctx, base);
	// lis r5,-31931
	ctx.r5.s64 = -2092630016;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// addi r5,r5,11092
	ctx.r5.s64 = ctx.r5.s64 + 11092;
	// addi r4,r4,23952
	ctx.r4.s64 = ctx.r4.s64 + 23952;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r3,r3,15396
	ctx.r3.s64 = ctx.r3.s64 + 15396;
	// bl 0x8227da10
	ctx.lr = 0x8228685C;
	sub_8227DA10(ctx, base);
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r11,11072
	ctx.r5.s64 = ctx.r11.s64 + 11072;
	// addi r3,r9,15380
	ctx.r3.s64 = ctx.r9.s64 + 15380;
	// addi r4,r10,25488
	ctx.r4.s64 = ctx.r10.s64 + 25488;
	// bl 0x8227da10
	ctx.lr = 0x82286878;
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

PPC_WEAK_FUNC(sub_82286700) {
	__imp__sub_82286700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82286890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r30,r10,11344
	ctx.r30.s64 = ctx.r10.s64 + 11344;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// rlwinm r31,r8,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,11340(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11340);
	// lwzx r5,r31,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x8236e888
	ctx.lr = 0x822868C0;
	sub_8236E888(ctx, base);
	// addi r7,r30,40
	ctx.r7.s64 = ctx.r30.s64 + 40;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r11,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82286888) {
	__imp__sub_82286888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822868EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822868EC) {
	__imp__sub_822868EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822868F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822868F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r30,r10,11344
	ctx.r30.s64 = ctx.r10.s64 + 11344;
	// rlwinm r31,r9,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// ldx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r5,r31,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r4,r31,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwzx r3,r31,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// bl 0x8228a758
	ctx.lr = 0x82286940;
	sub_8228A758(ctx, base);
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r5,r31,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lwz r3,11340(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11340);
	// bl 0x8236e888
	ctx.lr = 0x82286954;
	sub_8236E888(ctx, base);
	// addi r9,r30,40
	ctx.r9.s64 = ctx.r30.s64 + 40;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822868F0) {
	__imp__sub_822868F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286978) {
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
	// lis r31,-31930
	ctx.r31.s64 = -2092564480;
	// lbz r11,-17308(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -17308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82286ae8
	if (!ctx.cr6.eq) goto loc_82286AE8;
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11344
	ctx.r3.s64 = ctx.r11.s64 + 11344;
	// ori r5,r5,36864
	ctx.r5.u64 = ctx.r5.u64 | 36864;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x822869B0;
	sub_823DE090(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r10,64136
	ctx.r4.u64 = ctx.r10.u64 | 64136;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x8236f460
	ctx.lr = 0x822869C4;
	sub_8236F460(ctx, base);
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r6,999
	ctx.r6.s64 = 999;
	// addi r8,r8,15760
	ctx.r8.s64 = ctx.r8.s64 + 15760;
	// stw r3,11340(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11340, ctx.r3.u32);
	// addi r3,r7,15784
	ctx.r3.s64 = ctx.r7.s64 + 15784;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x822869F0;
	sub_822E1618(ctx, base);
	// lis r6,-31930
	ctx.r6.s64 = -2092564480;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r8,r5,15728
	ctx.r8.s64 = ctx.r5.s64 + 15728;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-17316(r6)
	PPC_STORE_U32(ctx.r6.u32 + -17316, ctx.r3.u32);
	// addi r3,r4,15712
	ctx.r3.s64 = ctx.r4.s64 + 15712;
	// li r6,999
	ctx.r6.s64 = 999;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x82286A1C;
	sub_822E1618(ctx, base);
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r10,15672
	ctx.r8.s64 = ctx.r10.s64 + 15672;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,11336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11336, ctx.r3.u32);
	// addi r3,r9,15648
	ctx.r3.s64 = ctx.r9.s64 + 15648;
	// li r6,999
	ctx.r6.s64 = 999;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x82286A48;
	sub_822E1618(ctx, base);
	// lis r7,-31930
	ctx.r7.s64 = -2092564480;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r8,r6,15612
	ctx.r8.s64 = ctx.r6.s64 + 15612;
	// li r6,999
	ctx.r6.s64 = 999;
	// stw r3,-17324(r7)
	PPC_STORE_U32(ctx.r7.u32 + -17324, ctx.r3.u32);
	// addi r3,r5,15596
	ctx.r3.s64 = ctx.r5.s64 + 15596;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x82286A74;
	sub_822E1618(ctx, base);
	// lis r4,-31930
	ctx.r4.s64 = -2092564480;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r8,r11,15560
	ctx.r8.s64 = ctx.r11.s64 + 15560;
	// stw r3,-17320(r4)
	PPC_STORE_U32(ctx.r4.u32 + -17320, ctx.r3.u32);
	// addi r3,r10,15536
	ctx.r3.s64 = ctx.r10.s64 + 15536;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,60000
	ctx.r6.u64 = ctx.r6.u64 | 60000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// bl 0x822e1618
	ctx.lr = 0x82286AA4;
	sub_822E1618(ctx, base);
	// lis r7,-31930
	ctx.r7.s64 = -2092564480;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r3,-17312(r7)
	PPC_STORE_U32(ctx.r7.u32 + -17312, ctx.r3.u32);
	// addi r3,r6,15516
	ctx.r3.s64 = ctx.r6.s64 + 15516;
	// lfs f2,5484(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,15484
	ctx.r8.s64 = ctx.r8.s64 + 15484;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f3,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x822e1660
	ctx.lr = 0x82286AD8;
	sub_822E1660(ctx, base);
	// lis r4,-31930
	ctx.r4.s64 = -2092564480;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,-17328(r4)
	PPC_STORE_U32(ctx.r4.u32 + -17328, ctx.r3.u32);
	// stb r11,-17308(r31)
	PPC_STORE_U8(ctx.r31.u32 + -17308, ctx.r11.u8);
loc_82286AE8:
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

PPC_WEAK_FUNC(sub_82286978) {
	__imp__sub_82286978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82286AFC) {
	__imp__sub_82286AFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82286B08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r11,11344
	ctx.r28.s64 = ctx.r11.s64 + 11344;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r28,20
	ctx.r11.s64 = ctx.r28.s64 + 20;
loc_82286B20:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82286ca8
	if (!ctx.cr6.gt) goto loc_82286CA8;
	// addis r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 65536;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// addi r10,r10,-28652
	ctx.r10.s64 = ctx.r10.s64 + -28652;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82286b20
	if (ctx.cr6.lt) goto loc_82286B20;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// bl 0x82310110
	ctx.lr = 0x82286B4C;
	sub_82310110(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r28,28
	ctx.r9.s64 = ctx.r28.s64 + 28;
loc_82286B54:
	// lbz r8,-28(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82286b74
	if (ctx.cr6.eq) goto loc_82286B74;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82286b74
	if (!ctx.cr6.lt) goto loc_82286B74;
	// addi r27,r10,-2
	ctx.r27.s64 = ctx.r10.s64 + -2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82286B74:
	// lbz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 44);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82286b94
	if (ctx.cr6.eq) goto loc_82286B94;
	// lwz r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82286b94
	if (!ctx.cr6.lt) goto loc_82286B94;
	// addi r27,r10,-1
	ctx.r27.s64 = ctx.r10.s64 + -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82286B94:
	// lbz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 116);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82286bb4
	if (ctx.cr6.eq) goto loc_82286BB4;
	// lwz r11,144(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82286bb4
	if (!ctx.cr6.lt) goto loc_82286BB4;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82286BB4:
	// lbz r8,188(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 188);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82286bd4
	if (ctx.cr6.eq) goto loc_82286BD4;
	// lwz r11,216(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 216);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82286bd4
	if (!ctx.cr6.lt) goto loc_82286BD4;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82286BD4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,288
	ctx.r9.s64 = ctx.r9.s64 + 288;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// blt cr6,0x82286b54
	if (ctx.cr6.lt) goto loc_82286B54;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,15800
	ctx.r4.s64 = ctx.r11.s64 + 15800;
	// bl 0x82280900
	ctx.lr = 0x82286BF8;
	sub_82280900(ctx, base);
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r28,24
	ctx.r30.s64 = ctx.r28.s64 + 24;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r31,r10,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r9,r31,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r5,r31,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82286c78
	if (ctx.cr6.eq) goto loc_82286C78;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r29,r28,20
	ctx.r29.s64 = ctx.r28.s64 + 20;
	// ldx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r3,r31,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r4,r31,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8228a758
	ctx.lr = 0x82286C40;
	sub_8228A758(ctx, base);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r5,r31,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwz r3,11340(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11340);
	// bl 0x8236e888
	ctx.lr = 0x82286C54;
	sub_8236E888(ctx, base);
	// addi r6,r28,40
	ctx.r6.s64 = ctx.r28.s64 + 40;
	// stwx r26,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r26.u32);
	// addi r5,r28,52
	ctx.r5.s64 = ctx.r28.s64 + 52;
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r26,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r26.u32);
	// stwx r26,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82286C78:
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,11340(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11340);
	// bl 0x8236e888
	ctx.lr = 0x82286C88;
	sub_8236E888(ctx, base);
	// addi r10,r28,40
	ctx.r10.s64 = ctx.r28.s64 + 40;
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// addi r9,r28,20
	ctx.r9.s64 = ctx.r28.s64 + 20;
	// addi r8,r28,52
	ctx.r8.s64 = ctx.r28.s64 + 52;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r26,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r26.u32);
	// stwx r26,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u32);
	// stwx r26,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r26.u32);
loc_82286CA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82286B00) {
	__imp__sub_82286B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82286CB0) {
	__imp__sub_82286CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x82286CC8;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// lbz r10,-17308(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -17308);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82286ce8
	if (!ctx.cr6.eq) goto loc_82286CE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
loc_82286CE8:
	// bl 0x82310110
	ctx.lr = 0x82286CEC;
	sub_82310110(ctx, base);
	// lis r31,-31930
	ctx.r31.s64 = -2092564480;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lwz r11,-17316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17316);
	// lwz r10,-9384(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9384);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// subf r17,r6,r3
	ctx.r17.s64 = ctx.r3.s64 - ctx.r6.s64;
	// beq cr6,0x82286d24
	if (ctx.cr6.eq) goto loc_82286D24;
	// bl 0x82310110
	ctx.lr = 0x82286D1C;
	sub_82310110(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// b 0x82286d3c
	goto loc_82286D3C;
loc_82286D24:
	// bl 0x82310110
	ctx.lr = 0x82286D28;
	sub_82310110(ctx, base);
	// lwz r11,-17316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17316);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// subf r18,r9,r3
	ctx.r18.s64 = ctx.r3.s64 - ctx.r9.s64;
loc_82286D3C:
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r20,r11,11344
	ctx.r20.s64 = ctx.r11.s64 + 11344;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r20,1
	ctx.r29.s64 = ctx.r20.s64 + 1;
	// lis r26,-31930
	ctx.r26.s64 = -2092564480;
	// addi r28,r7,15912
	ctx.r28.s64 = ctx.r7.s64 + 15912;
	// addi r25,r6,1944
	ctx.r25.s64 = ctx.r6.s64 + 1944;
	// addi r24,r8,15900
	ctx.r24.s64 = ctx.r8.s64 + 15900;
	// addi r23,r9,-28736
	ctx.r23.s64 = ctx.r9.s64 + -28736;
	// addi r22,r10,2044
	ctx.r22.s64 = ctx.r10.s64 + 2044;
	// addi r21,r11,2036
	ctx.r21.s64 = ctx.r11.s64 + 2036;
loc_82286D84:
	// lwz r11,19(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19);
	// addi r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82286e58
	if (ctx.cr6.eq) goto loc_82286E58;
	// lbz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82286e58
	if (ctx.cr6.eq) goto loc_82286E58;
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82286dc0
	if (ctx.cr6.eq) goto loc_82286DC0;
	// lwz r11,27(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// ble cr6,0x82286dcc
	if (!ctx.cr6.gt) goto loc_82286DCC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82286e58
	if (!ctx.cr6.eq) goto loc_82286E58;
loc_82286DC0:
	// lwz r11,27(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27);
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bgt cr6,0x82286e58
	if (ctx.cr6.gt) goto loc_82286E58;
loc_82286DCC:
	// lwz r11,-17272(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17272);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82286e4c
	if (ctx.cr6.eq) goto loc_82286E4C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82286dec
	if (ctx.cr6.gt) goto loc_82286DEC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82286e4c
	if (!ctx.cr6.eq) goto loc_82286E4C;
loc_82286DEC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82286e00
	if (!ctx.cr6.eq) goto loc_82286E00;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// b 0x82286e0c
	goto loc_82286E0C;
loc_82286E00:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// blt cr6,0x82286e0c
	if (ctx.cr6.lt) goto loc_82286E0C;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82286E0C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// bne cr6,0x82286e1c
	if (!ctx.cr6.eq) goto loc_82286E1C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82286E1C:
	// lwz r16,27(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27);
	// bl 0x82310110
	ctx.lr = 0x82286E24;
	sub_82310110(ctx, base);
	// subf r15,r16,r3
	ctx.r15.s64 = ctx.r3.s64 - ctx.r16.s64;
	// bl 0x82310110
	ctx.lr = 0x82286E2C;
	sub_82310110(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// bl 0x82280900
	ctx.lr = 0x82286E4C;
	sub_82280900(ctx, base);
loc_82286E4C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822868f0
	ctx.lr = 0x82286E54;
	sub_822868F0(ctx, base);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
loc_82286E58:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// addi r11,r11,-28671
	ctx.r11.s64 = ctx.r11.s64 + -28671;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82286d84
	if (ctx.cr6.lt) goto loc_82286D84;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82286CC0) {
	__imp__sub_82286CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82286E7C) {
	__imp__sub_82286E7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82286E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82286E88;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r7,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x82310110
	ctx.lr = 0x82286EA8;
	sub_82310110(ctx, base);
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// lis r26,-31930
	ctx.r26.s64 = -2092564480;
	// lis r31,-31930
	ctx.r31.s64 = -2092564480;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r21,-31930
	ctx.r21.s64 = -2092564480;
	// lwz r11,11336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11336);
	// lis r30,-31930
	ctx.r30.s64 = -2092564480;
	// lwz r9,-17320(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17320);
	// lwz r3,-17316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17316);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82286f30
	if (ctx.cr6.eq) goto loc_82286F30;
	// lwz r8,-17324(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17324);
	// lwz r9,-17304(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + -17304);
	// subf r9,r9,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r9.s64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// subf r8,r7,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// subf r8,r5,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r5.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82286f14
	if (!ctx.cr6.lt) goto loc_82286F14;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82286F14:
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82286f24
	if (!ctx.cr6.lt) goto loc_82286F24;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_82286F24:
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x822e1f80
	ctx.lr = 0x82286F2C;
	sub_822E1F80(ctx, base);
	// lwz r3,-17316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17316);
loc_82286F30:
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r28,-17328(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17328);
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82286f74
	if (!ctx.cr6.gt) goto loc_82286F74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822d9488
	ctx.lr = 0x82286F58;
	sub_822D9488(ctx, base);
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82286f70
	if (ctx.cr6.lt) goto loc_82286F70;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82286F70:
	// lwz r3,-17316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17316);
loc_82286F74:
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// lbz r10,-17308(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -17308);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82287178
	if (ctx.cr6.eq) goto loc_82287178;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82286fa0
	if (!ctx.cr6.eq) goto loc_82286FA0;
	// lwz r11,-17324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17324);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82287178
	if (ctx.cr6.eq) goto loc_82287178;
loc_82286FA0:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r28,224(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82286fc0
	if (ctx.cr6.eq) goto loc_82286FC0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x82287178
	if (ctx.cr6.eq) goto loc_82287178;
loc_82286FC0:
	// bl 0x82286b00
	ctx.lr = 0x82286FC4;
	sub_82286B00(ctx, base);
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,11340(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11340);
	// bl 0x8236dfc0
	ctx.lr = 0x82286FDC;
	sub_8236DFC0(ctx, base);
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// add r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 + ctx.r10.u64;
	// addi r31,r11,11344
	ctx.r31.s64 = ctx.r11.s64 + 11344;
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r3.u32);
	// bne cr6,0x82287048
	if (!ctx.cr6.eq) goto loc_82287048;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,16020
	ctx.r4.s64 = ctx.r11.s64 + 16020;
	// bl 0x82280c30
	ctx.lr = 0x82287010;
	sub_82280C30(ctx, base);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8228a758
	ctx.lr = 0x8228702C;
	sub_8228A758(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82287048:
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// bl 0x823de1f0
	ctx.lr = 0x8228705C;
	sub_823DE1F0(ctx, base);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 1;
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cntlzw r4,r10
	ctx.r4.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// stbx r11,r30,r27
	PPC_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u8);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// stwx r29,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r29.u32);
	// stbx r3,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u8);
	// stwx r24,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r24.u32);
	// lwz r11,-17320(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17320);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822870cc
	if (ctx.cr6.eq) goto loc_822870CC;
	// lwz r11,-17304(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -17304);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r4,r22,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r22.s64;
	// bl 0x822d94d8
	ctx.lr = 0x822870C4;
	sub_822D94D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x822870d0
	goto loc_822870D0;
loc_822870CC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_822870D0:
	// bl 0x82310110
	ctx.lr = 0x822870D4;
	sub_82310110(ctx, base);
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// add r9,r3,r29
	ctx.r9.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r11,-17272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17272);
	// stwx r9,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82287168
	if (ctx.cr6.eq) goto loc_82287168;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82287108
	if (ctx.cr6.gt) goto loc_82287108;
	// lbzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82287168
	if (!ctx.cr6.eq) goto loc_82287168;
loc_82287108:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x8228711c
	if (!ctx.cr6.eq) goto loc_8228711C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r11,2036
	ctx.r7.s64 = ctx.r11.s64 + 2036;
	// b 0x82287134
	goto loc_82287134;
loc_8228711C:
	// bge cr6,0x8228712c
	if (!ctx.cr6.lt) goto loc_8228712C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r11,2044
	ctx.r7.s64 = ctx.r11.s64 + 2044;
	// b 0x82287134
	goto loc_82287134;
loc_8228712C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r7,r11,-28736
	ctx.r7.s64 = ctx.r11.s64 + -28736;
loc_82287134:
	// lbzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228714c
	if (ctx.cr6.eq) goto loc_8228714C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,15900
	ctx.r6.s64 = ctx.r11.s64 + 15900;
	// b 0x82287154
	goto loc_82287154;
loc_8228714C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,1944
	ctx.r6.s64 = ctx.r11.s64 + 1944;
loc_82287154:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,15980
	ctx.r4.s64 = ctx.r11.s64 + 15980;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x82287168;
	sub_82280900(ctx, base);
loc_82287168:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r22,-17304(r21)
	PPC_STORE_U32(ctx.r21.u32 + -17304, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82287178:
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8228a758
	ctx.lr = 0x82287194;
	sub_8228A758(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82286E80) {
	__imp__sub_82286E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822871B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x822871B8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82310110
	ctx.lr = 0x822871D0;
	sub_82310110(ctx, base);
	// lis r25,-31930
	ctx.r25.s64 = -2092564480;
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r20,-31930
	ctx.r20.s64 = -2092564480;
	// lwz r9,-17320(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17320);
	// lwz r11,11336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11336);
	// lwz r3,-17316(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17316);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82287254
	if (ctx.cr6.eq) goto loc_82287254;
	// lis r8,-31930
	ctx.r8.s64 = -2092564480;
	// lwz r9,-17300(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + -17300);
	// subf r9,r9,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r9.s64;
	// lwz r8,-17324(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17324);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// srawi r4,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// xor r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8228723c
	if (!ctx.cr6.lt) goto loc_8228723C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8228723C:
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8228724c
	if (!ctx.cr6.lt) goto loc_8228724C;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_8228724C:
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x822e1f80
	ctx.lr = 0x82287254;
	sub_822E1F80(ctx, base);
loc_82287254:
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r31,-17328(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17328);
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82287294
	if (!ctx.cr6.gt) goto loc_82287294;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822d9488
	ctx.lr = 0x8228727C;
	sub_822D9488(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82287294
	if (ctx.cr6.lt) goto loc_82287294;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82287294:
	// bl 0x82286b00
	ctx.lr = 0x82287298;
	sub_82286B00(ctx, base);
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,11340(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11340);
	// bl 0x8236dfc0
	ctx.lr = 0x822872B0;
	sub_8236DFC0(ctx, base);
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// add r10,r24,r10
	ctx.r10.u64 = ctx.r24.u64 + ctx.r10.u64;
	// addi r30,r11,11344
	ctx.r30.s64 = ctx.r11.s64 + 11344;
	// rlwinm r31,r10,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r30,24
	ctx.r28.s64 = ctx.r30.s64 + 24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r3.u32);
	// bne cr6,0x822872fc
	if (!ctx.cr6.eq) goto loc_822872FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,16020
	ctx.r4.s64 = ctx.r11.s64 + 16020;
	// bl 0x82280c30
	ctx.lr = 0x822872E4;
	sub_82280C30(ctx, base);
	// addi r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 + 20;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_822872FC:
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x823de1f0
	ctx.lr = 0x82287308;
	sub_823DE1F0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// addi r9,r29,-4
	ctx.r9.s64 = ctx.r29.s64 + -4;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82287320:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82287320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82287320;
	// lwzx r9,r31,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r8,r30,40
	ctx.r8.s64 = ctx.r30.s64 + 40;
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// lwz r11,-17320(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17320);
	// addi r27,r30,1
	ctx.r27.s64 = ctx.r30.s64 + 1;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r31,r10
	ctx.r5.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stwx r9,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// stbx r6,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u8);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// stbx r21,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r21.u8);
	// stwx r23,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r23.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stwx r8,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822873a4
	if (ctx.cr6.eq) goto loc_822873A4;
	// lwz r11,-17300(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -17300);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r4,r22,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r22.s64;
	// bl 0x822d94d8
	ctx.lr = 0x8228739C;
	sub_822D94D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x822873a8
	goto loc_822873A8;
loc_822873A4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_822873A8:
	// bl 0x82310110
	ctx.lr = 0x822873AC;
	sub_82310110(ctx, base);
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// add r9,r3,r29
	ctx.r9.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r11,-17272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17272);
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82287440
	if (ctx.cr6.eq) goto loc_82287440;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x822873e0
	if (ctx.cr6.gt) goto loc_822873E0;
	// lbzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82287440
	if (!ctx.cr6.eq) goto loc_82287440;
loc_822873E0:
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x822873f4
	if (!ctx.cr6.eq) goto loc_822873F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r11,2036
	ctx.r7.s64 = ctx.r11.s64 + 2036;
	// b 0x8228740c
	goto loc_8228740C;
loc_822873F4:
	// bge cr6,0x82287404
	if (!ctx.cr6.lt) goto loc_82287404;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r11,2044
	ctx.r7.s64 = ctx.r11.s64 + 2044;
	// b 0x8228740c
	goto loc_8228740C;
loc_82287404:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r7,r11,-28736
	ctx.r7.s64 = ctx.r11.s64 + -28736;
loc_8228740C:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82287424
	if (ctx.cr6.eq) goto loc_82287424;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,15900
	ctx.r6.s64 = ctx.r11.s64 + 15900;
	// b 0x8228742c
	goto loc_8228742C;
loc_82287424:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,1944
	ctx.r6.s64 = ctx.r11.s64 + 1944;
loc_8228742C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,16084
	ctx.r4.s64 = ctx.r11.s64 + 16084;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x82287440;
	sub_82280900(ctx, base);
loc_82287440:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r22,-17300(r20)
	PPC_STORE_U32(ctx.r20.u32 + -17300, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822871B0) {
	__imp__sub_822871B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287450) {
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
	// li r4,16384
	ctx.r4.s64 = 16384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db808
	ctx.lr = 0x82287470;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x82287478;
	sub_822DB8F0(ctx, base);
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,11336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11336);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822874a4
	if (!ctx.cr6.eq) goto loc_822874A4;
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// lwz r11,-17320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17320);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822875a8
	if (ctx.cr6.eq) goto loc_822875A8;
loc_822874A4:
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287b40
	ctx.lr = 0x822874B4;
	sub_82287B40(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228a520
	ctx.lr = 0x822874C4;
	sub_8228A520(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822874f8
	if (ctx.cr6.eq) goto loc_822874F8;
loc_822874CC:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822871b0
	ctx.lr = 0x822874E0;
	sub_822871B0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228a520
	ctx.lr = 0x822874F0;
	sub_8228A520(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822874cc
	if (!ctx.cr6.eq) goto loc_822874CC;
loc_822874F8:
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287b40
	ctx.lr = 0x82287508;
	sub_82287B40(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8228750C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228a520
	ctx.lr = 0x8228751C;
	sub_8228A520(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82287550
	if (ctx.cr6.eq) goto loc_82287550;
loc_82287524:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822871b0
	ctx.lr = 0x82287538;
	sub_822871B0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228a520
	ctx.lr = 0x82287548;
	sub_8228A520(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82287524
	if (!ctx.cr6.eq) goto loc_82287524;
loc_82287550:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8228750c
	if (ctx.cr6.lt) goto loc_8228750C;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287b40
	ctx.lr = 0x8228756C;
	sub_82287B40(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230f470
	ctx.lr = 0x82287578;
	sub_8230F470(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822875a8
	if (ctx.cr6.eq) goto loc_822875A8;
loc_82287580:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822871b0
	ctx.lr = 0x82287594;
	sub_822871B0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230f470
	ctx.lr = 0x822875A0;
	sub_8230F470(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82287580
	if (!ctx.cr6.eq) goto loc_82287580;
loc_822875A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x822875B0;
	sub_822DB8D8(ctx, base);
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

PPC_WEAK_FUNC(sub_82287450) {
	__imp__sub_82287450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822875C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822875D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82310110
	ctx.lr = 0x822875E8;
	sub_82310110(ctx, base);
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lis r9,-31930
	ctx.r9.s64 = -2092564480;
	// addi r31,r11,11344
	ctx.r31.s64 = ctx.r11.s64 + 11344;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r7,-9384(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9384);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r8,-17316(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17316);
loc_8228760C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82287670
	if (ctx.cr6.eq) goto loc_82287670;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82287670
	if (!ctx.cr6.eq) goto loc_82287670;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82287670
	if (!ctx.cr6.eq) goto loc_82287670;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82287670
	if (!ctx.cr6.eq) goto loc_82287670;
	// lbz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82287654
	if (ctx.cr6.eq) goto loc_82287654;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82287694
	if (ctx.cr6.eq) goto loc_82287694;
loc_82287654:
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// addze r9,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r9.s64 = temp.s64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82287694
	if (ctx.cr6.lt) goto loc_82287694;
loc_82287670:
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// addi r10,r10,-28672
	ctx.r10.s64 = ctx.r10.s64 + -28672;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8228760c
	if (ctx.cr6.lt) goto loc_8228760C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82287694:
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// lwz r11,-17272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17272);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822876f8
	if (ctx.cr6.eq) goto loc_822876F8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x822876cc
	if (ctx.cr6.gt) goto loc_822876CC;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822876f8
	if (!ctx.cr6.eq) goto loc_822876F8;
loc_822876CC:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r7,16128
	ctx.r4.s64 = ctx.r7.s64 + 16128;
	// li r3,25
	ctx.r3.s64 = 25;
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// subf r8,r6,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// bl 0x82280900
	ctx.lr = 0x822876F8;
	sub_82280900(ctx, base);
loc_822876F8:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// stw r4,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r9,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r8,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r8.u32);
	// lwzx r7,r11,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stw r7,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r7.u32);
	// lwzx r6,r11,r5
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r5,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r5.u32);
	// lwzx r5,r11,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8236f750
	ctx.lr = 0x82287778;
	sub_8236F750(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82286888
	ctx.lr = 0x82287780;
	sub_82286888(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822875C8) {
	__imp__sub_822875C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228778C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228778C) {
	__imp__sub_8228778C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82287798;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82310110
	ctx.lr = 0x822877A8;
	sub_82310110(ctx, base);
	// lis r31,-31930
	ctx.r31.s64 = -2092564480;
	// lis r28,-31930
	ctx.r28.s64 = -2092564480;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-17324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17324);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822877d4
	if (ctx.cr6.gt) goto loc_822877D4;
	// lwz r11,-17320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17320);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82287880
	if (!ctx.cr6.gt) goto loc_82287880;
loc_822877D4:
	// lis r30,-31930
	ctx.r30.s64 = -2092564480;
	// lwz r11,-17296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17296);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82287880
	if (!ctx.cr6.gt) goto loc_82287880;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822d9488
	ctx.lr = 0x82287800;
	sub_822D9488(ctx, base);
	// lwz r11,-17320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17320);
	// lwz r3,-17324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17324);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822e1f80
	ctx.lr = 0x82287834;
	sub_822E1F80(ctx, base);
	// lis r7,-31930
	ctx.r7.s64 = -2092564480;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,-17312(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -17312);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822d9488
	ctx.lr = 0x8228784C;
	sub_822D9488(ctx, base);
	// rlwinm r6,r31,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f1,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,-17296(r30)
	PPC_STORE_U32(ctx.r30.u32 + -17296, ctx.r11.u32);
loc_82287880:
	// bl 0x82287450
	ctx.lr = 0x82287884;
	sub_82287450(ctx, base);
	// bl 0x82286cc0
	ctx.lr = 0x82287888;
	sub_82286CC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82287790) {
	__imp__sub_82287790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822878A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31930
	ctx.r26.s64 = -2092564480;
	// lbz r11,-17308(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + -17308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82287944
	if (ctx.cr6.eq) goto loc_82287944;
	// lis r11,-31931
	ctx.r11.s64 = -2092630016;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,11344
	ctx.r28.s64 = ctx.r11.s64 + 11344;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
	// lis r27,-31931
	ctx.r27.s64 = -2092630016;
loc_822878CC:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82287910
	if (ctx.cr6.eq) goto loc_82287910;
	// lbz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822878f0
	if (ctx.cr6.eq) goto loc_822878F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822868f0
	ctx.lr = 0x822878EC;
	sub_822868F0(ctx, base);
	// b 0x82287910
	goto loc_82287910;
loc_822878F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,11340(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11340);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8236e888
	ctx.lr = 0x82287900;
	sub_8236E888(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82287910:
	// addis r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 65536;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// addi r11,r11,-28648
	ctx.r11.s64 = ctx.r11.s64 + -28648;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822878cc
	if (ctx.cr6.lt) goto loc_822878CC;
	// lwz r3,11340(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11340);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82287940
	if (ctx.cr6.eq) goto loc_82287940;
	// bl 0x8236f4e0
	ctx.lr = 0x82287938;
	sub_8236F4E0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,11340(r27)
	PPC_STORE_U32(ctx.r27.u32 + 11340, ctx.r30.u32);
loc_82287940:
	// stb r30,-17308(r26)
	PPC_STORE_U8(ctx.r26.u32 + -17308, ctx.r30.u8);
loc_82287944:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82287898) {
	__imp__sub_82287898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228794C) {
	__imp__sub_8228794C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82287958;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8228797C;
	sub_822E7E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e5ed0
	ctx.lr = 0x82287984;
	sub_822E5ED0(ctx, base);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x822e6d10
	ctx.lr = 0x8228798C;
	sub_822E6D10(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x82287990;
	sub_823DEAF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822e6d10
	ctx.lr = 0x822879A0;
	sub_822E6D10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82287a34
	if (ctx.cr6.eq) goto loc_82287A34;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r30,r28,60
	ctx.r30.s64 = ctx.r28.s64 + 60;
	// addi r27,r10,16256
	ctx.r27.s64 = ctx.r10.s64 + 16256;
loc_822879BC:
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// beq cr6,0x82287a34
	if (ctx.cr6.eq) goto loc_82287A34;
	// bl 0x823dec00
	ctx.lr = 0x822879C8;
	sub_823DEC00(ctx, base);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// bl 0x822e6d10
	ctx.lr = 0x822879D4;
	sub_822E6D10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82287a34
	if (ctx.cr6.eq) goto loc_82287A34;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// beq cr6,0x82287a34
	if (ctx.cr6.eq) goto loc_82287A34;
	// bl 0x823dec00
	ctx.lr = 0x822879F0;
	sub_823DEC00(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x82287a10
	if (ctx.cr6.lt) goto loc_82287A10;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82287A10;
	sub_822830E8(ctx, base);
loc_82287A10:
	// stfs f30,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// stfsu f31,8(r30)
	ea = 8 + ctx.r30.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x822e6d10
	ctx.lr = 0x82287A24;
	sub_822E6D10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822879bc
	if (!ctx.cr6.eq) goto loc_822879BC;
loc_82287A34:
	// bl 0x822e5fb0
	ctx.lr = 0x82287A38;
	sub_822E5FB0(ctx, base);
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82287a54
	if (ctx.cr6.eq) goto loc_82287A54;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,16196
	ctx.r4.s64 = ctx.r11.s64 + 16196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82287A54;
	sub_822830E8(ctx, base);
loc_82287A54:
	// sth r26,320(r28)
	PPC_STORE_U16(ctx.r28.u32 + 320, ctx.r26.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82287950) {
	__imp__sub_82287950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287A68) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8304(r1)
	ea = -8304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r5,328
	ctx.r5.s64 = 328;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822dd778
	ctx.lr = 0x82287AA0;
	sub_822DD778(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,16336
	ctx.r5.s64 = ctx.r11.s64 + 16336;
	// addi r4,r10,16328
	ctx.r4.s64 = ctx.r10.s64 + 16328;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8227fef8
	ctx.lr = 0x82287ABC;
	sub_8227FEF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287950
	ctx.lr = 0x82287ACC;
	sub_82287950(ctx, base);
	// stfs f31,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// addi r1,r1,8304
	ctx.r1.s64 = ctx.r1.s64 + 8304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287A68) {
	__imp__sub_82287A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287AEC) {
	__imp__sub_82287AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287AF0) {
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
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,320(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 320);
	// bl 0x822d45d8
	ctx.lr = 0x82287B10;
	sub_822D45D8(ctx, base);
	// lfs f0,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
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

PPC_WEAK_FUNC(sub_82287AF0) {
	__imp__sub_82287AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287B2C) {
	__imp__sub_82287B2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287B30) {
	__imp__sub_82287B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287B34) {
	__imp__sub_82287B34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287B38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287B38) {
	__imp__sub_82287B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287B3C) {
	__imp__sub_82287B3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82287B48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8236b468
	ctx.lr = 0x82287B64;
	sub_8236B468(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82287B40) {
	__imp__sub_82287B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287B74) {
	__imp__sub_82287B74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287B78) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287B78) {
	__imp__sub_82287B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287B88) {
	PPC_FUNC_PROLOGUE();
	// add r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287B88) {
	__imp__sub_82287B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287B9C) {
	__imp__sub_82287B9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287BA0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287BA0) {
	__imp__sub_82287BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287BB4) {
	__imp__sub_82287BB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287BB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287BB8) {
	__imp__sub_82287BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287BC4) {
	__imp__sub_82287BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287BC8) {
	__imp__sub_82287BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287BDC) {
	__imp__sub_82287BDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82287c04
	if (ctx.cr6.eq) goto loc_82287C04;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// blr 
	return;
loc_82287C04:
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287BE0) {
	__imp__sub_82287BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287C0C) {
	__imp__sub_82287C0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287C10) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82287c34
	if (ctx.cr6.lt) goto loc_82287C34;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82287C34:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287C10) {
	__imp__sub_82287C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287C5C) {
	__imp__sub_82287C5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287C60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82287cc0
	if (!ctx.cr6.eq) goto loc_82287CC0;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82287c90
	if (ctx.cr6.lt) goto loc_82287C90;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82287cb4
	goto loc_82287CB4;
loc_82287C90:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
loc_82287CB4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82287CC0:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287C60) {
	__imp__sub_82287C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82287d30
	if (!ctx.cr6.eq) goto loc_82287D30;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82287d00
	if (ctx.cr6.lt) goto loc_82287D00;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x82287d24
	goto loc_82287D24;
loc_82287D00:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stbx r5,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
loc_82287D24:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82287D30:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287CD0) {
	__imp__sub_82287CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287D5C) {
	__imp__sub_82287D5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287D60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bge cr6,0x82287d80
	if (!ctx.cr6.lt) goto loc_82287D80;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82287D80:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82287D94:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82287dc4
	if (!ctx.cr6.eq) goto loc_82287DC4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
loc_82287DC4:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82287dec
	if (ctx.cr6.eq) goto loc_82287DEC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// or r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stbx r5,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u8);
loc_82287DEC:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// bdnz 0x82287d94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82287D94;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287D60) {
	__imp__sub_82287D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287E04) {
	__imp__sub_82287E04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82287e30
	if (!ctx.cr6.lt) goto loc_82287E30;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r4,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// blr 
	return;
loc_82287E30:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287E08) {
	__imp__sub_82287E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287E3C) {
	__imp__sub_82287E3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287E40) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82287e80
	if (ctx.cr6.gt) goto loc_82287E80;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822dd768
	ctx.lr = 0x82287E78;
	sub_822DD768(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// b 0x82287e88
	goto loc_82287E88;
loc_82287E80:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82287E88:
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

PPC_WEAK_FUNC(sub_82287E40) {
	__imp__sub_82287E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82287ec4
	if (ctx.cr6.gt) goto loc_82287EC4;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// sthx r4,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u16);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_82287EC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287EA0) {
	__imp__sub_82287EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82287ef4
	if (ctx.cr6.gt) goto loc_82287EF4;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_82287EF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287ED0) {
	__imp__sub_82287ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82287f2c
	if (ctx.cr6.gt) goto loc_82287F2C;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_82287F2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287F00) {
	__imp__sub_82287F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82287f6c
	if (ctx.cr6.gt) goto loc_82287F6C;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stwx r7,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// b 0x82287f70
	goto loc_82287F70;
loc_82287F6C:
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_82287F70:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82287fa0
	if (ctx.cr6.gt) goto loc_82287FA0;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stwx r7,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// b 0x82287fa4
	goto loc_82287FA4;
loc_82287FA0:
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_82287FA4:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82287fd4
	if (ctx.cr6.gt) goto loc_82287FD4;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
loc_82287FD4:
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82287F38) {
	__imp__sub_82287F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82287FDC) {
	__imp__sub_82287FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82287FE0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82288028
	if (ctx.cr6.gt) goto loc_82288028;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822e7960
	ctx.lr = 0x82288014;
	sub_822E7960(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stdx r3,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u64);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// b 0x82288030
	goto loc_82288030;
loc_82288028:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82288030:
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

PPC_WEAK_FUNC(sub_82287FE0) {
	__imp__sub_82287FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288048) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82288064:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82288064
	if (!ctx.cr6.eq) goto loc_82288064;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822880ac
	if (ctx.cr6.gt) goto loc_822880AC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822dd768
	ctx.lr = 0x822880A4;
	sub_822DD768(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// b 0x822880b4
	goto loc_822880B4;
loc_822880AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822880B4:
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

PPC_WEAK_FUNC(sub_82288048) {
	__imp__sub_82288048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822880CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822880CC) {
	__imp__sub_822880CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822880D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82288110
	if (!ctx.cr6.lt) goto loc_82288110;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,-21876(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21876);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// blr 
	return;
loc_82288110:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822880D0) {
	__imp__sub_822880D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228811C) {
	__imp__sub_8228811C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288120) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,-9656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9656);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x8228814C;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// bgt cr6,0x82288194
	if (ctx.cr6.gt) goto loc_82288194;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// sthx r9,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u16);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
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
loc_82288194:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82288120) {
	__imp__sub_82288120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822881B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822881fc
	if (!ctx.cr6.lt) goto loc_822881FC;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822881ec
	if (!ctx.cr6.lt) goto loc_822881EC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822881ec
	if (ctx.cr6.lt) goto loc_822881EC;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
loc_822881EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
loc_822881FC:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822881B0) {
	__imp__sub_822881B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228820C) {
	__imp__sub_8228820C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82288274
	if (ctx.cr6.gt) goto loc_82288274;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82288264
	if (!ctx.cr6.lt) goto loc_82288264;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82288264
	if (ctx.cr6.lt) goto loc_82288264;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82288264
	if (ctx.cr6.gt) goto loc_82288264;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// stb r5,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r5.u8);
loc_82288264:
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
loc_82288274:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82288210) {
	__imp__sub_82288210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82288284) {
	__imp__sub_82288284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288288) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822882dc
	if (ctx.cr6.gt) goto loc_822882DC;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822882d0
	if (!ctx.cr6.lt) goto loc_822882D0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822882d0
	if (ctx.cr6.lt) goto loc_822882D0;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x822882d0
	if (ctx.cr6.gt) goto loc_822882D0;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// blr 
	return;
loc_822882D0:
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// blr 
	return;
loc_822882DC:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82288288) {
	__imp__sub_82288288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822882EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822882EC) {
	__imp__sub_822882EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822882F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82288350
	if (ctx.cr6.gt) goto loc_82288350;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82288334
	if (!ctx.cr6.lt) goto loc_82288334;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82288334
	if (ctx.cr6.lt) goto loc_82288334;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82288334
	if (ctx.cr6.gt) goto loc_82288334;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82288338
	goto loc_82288338;
loc_82288334:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
loc_82288338:
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// beq cr6,0x82288354
	if (ctx.cr6.eq) goto loc_82288354;
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82288350:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_82288354:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f1,2424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822882F0) {
	__imp__sub_822882F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82288364) {
	__imp__sub_82288364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r6,r4,-4
	ctx.r6.s64 = ctx.r4.s64 + -4;
	// li r7,1
	ctx.r7.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
loc_82288384:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822883d8
	if (ctx.cr6.gt) goto loc_822883D8;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822883c0
	if (!ctx.cr6.lt) goto loc_822883C0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822883c0
	if (ctx.cr6.lt) goto loc_822883C0;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822883c0
	if (ctx.cr6.gt) goto loc_822883C0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_822883C0:
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// beq cr6,0x822883dc
	if (ctx.cr6.eq) goto loc_822883DC;
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822883e4
	goto loc_822883E4;
loc_822883D8:
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
loc_822883DC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
loc_822883E4:
	// stfsu f0,4(r6)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r6.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x82288384
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82288384;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82288368) {
	__imp__sub_82288368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822883F0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82288470
	if (ctx.cr6.gt) goto loc_82288470;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82288460
	if (!ctx.cr6.lt) goto loc_82288460;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82288460
	if (ctx.cr6.lt) goto loc_82288460;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82288460
	if (ctx.cr6.gt) goto loc_82288460;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
loc_82288460:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e7960
	ctx.lr = 0x82288468;
	sub_822E7960(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x8228847c
	goto loc_8228847C;
loc_82288470:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8228847C:
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

PPC_WEAK_FUNC(sub_822883F0) {
	__imp__sub_822883F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82288494) {
	__imp__sub_82288494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288498) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_822884A4:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8228850c
	if (!ctx.cr6.lt) goto loc_8228850C;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822884d4
	if (!ctx.cr6.lt) goto loc_822884D4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822884d4
	if (ctx.cr6.lt) goto loc_822884D4;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// b 0x822884d8
	goto loc_822884D8;
loc_822884D4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822884D8:
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r6,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r6.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822884f0
	if (!ctx.cr6.eq) goto loc_822884F0;
loc_822884EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822884F0:
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x822884fc
	if (!ctx.cr6.lt) goto loc_822884FC;
	// stbx r11,r8,r4
	PPC_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r11.u8);
loc_822884FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82288514
	if (ctx.cr6.eq) goto loc_82288514;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x822884a4
	goto loc_822884A4;
loc_8228850C:
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// b 0x822884ec
	goto loc_822884EC;
loc_82288514:
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82288498) {
	__imp__sub_82288498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288528) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82288534:
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82288580
	if (!ctx.cr6.lt) goto loc_82288580;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82288564
	if (!ctx.cr6.lt) goto loc_82288564;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82288564
	if (ctx.cr6.lt) goto loc_82288564;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82288568
	goto loc_82288568;
loc_82288564:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82288568:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// bne cr6,0x82288588
	if (!ctx.cr6.eq) goto loc_82288588;
	// li r11,46
	ctx.r11.s64 = 46;
	// b 0x8228859c
	goto loc_8228859C;
loc_82288580:
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// b 0x82288598
	goto loc_82288598;
loc_82288588:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82288598
	if (ctx.cr6.eq) goto loc_82288598;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8228859c
	if (!ctx.cr6.eq) goto loc_8228859C;
loc_82288598:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228859C:
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x822885a8
	if (!ctx.cr6.lt) goto loc_822885A8;
	// stbx r11,r8,r4
	PPC_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r11.u8);
loc_822885A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822885b8
	if (ctx.cr6.eq) goto loc_822885B8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x82288534
	goto loc_82288534;
loc_822885B8:
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82288528) {
	__imp__sub_82288528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822885CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822885CC) {
	__imp__sub_822885CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822885D0) {
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
	// bl 0x82288210
	ctx.lr = 0x822885E0;
	sub_82288210(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-29228(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29228);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822885D0) {
	__imp__sub_822885D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bge cr6,0x82288628
	if (!ctx.cr6.lt) goto loc_82288628;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82288628:
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82288610) {
	__imp__sub_82288610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82288634) {
	__imp__sub_82288634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288638) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8228864C:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8228869c
	if (!ctx.cr6.lt) goto loc_8228869C;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82288688
	if (!ctx.cr6.lt) goto loc_82288688;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82288688
	if (ctx.cr6.lt) goto loc_82288688;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x822886a4
	goto loc_822886A4;
loc_82288688:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x822886a4
	goto loc_822886A4;
loc_8228869C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_822886A4:
	// stbx r11,r9,r4
	PPC_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8228864c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228864C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82288638) {
	__imp__sub_82288638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822886B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822886B4) {
	__imp__sub_822886B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822886B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822886C0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x822886E4;
	sub_823DE090(ctx, base);
	// lwz r11,692(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 692);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// addi r30,r27,260
	ctx.r30.s64 = ctx.r27.s64 + 260;
	// li r29,2
	ctx.r29.s64 = 2;
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,680(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 680);
	// lfs f31,-9656(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9656);
	ctx.f31.f64 = double(temp.f32);
	// sth r9,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r9.u16);
	// lfs f30,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
loc_82288710:
	// lfs f13,-164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -164);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f1,f12,f31,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82288724;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stwu r10,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r28.u32 = ea;
	// bne 0x82288710
	if (!ctx.cr0.eq) goto loc_82288710;
	// lwz r11,172(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 172);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82288760
	if (ctx.cr6.eq) goto loc_82288760;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// b 0x82288774
	goto loc_82288774;
loc_82288760:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82288778
	if (ctx.cr6.eq) goto loc_82288778;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
loc_82288774:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82288778:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82288798
	if (!ctx.cr6.gt) goto loc_82288798;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// b 0x822887a8
	goto loc_822887A8;
loc_82288798:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822887ac
	if (!ctx.cr6.lt) goto loc_822887AC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
loc_822887A8:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_822887AC:
	// lfs f13,704(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822887c4
	if (ctx.cr6.eq) goto loc_822887C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_822887C4:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822887e0
	if (ctx.cr6.eq) goto loc_822887E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_822887E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822886B8) {
	__imp__sub_822886B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822887F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822887F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x82288824
	if (!ctx.cr6.eq) goto loc_82288824;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82287d60
	ctx.lr = 0x8228881C;
	sub_82287D60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82288824:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x8228882C;
	sub_82287D60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287d60
	ctx.lr = 0x8228883C;
	sub_82287D60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822887F0) {
	__imp__sub_822887F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82288844) {
	__imp__sub_82288844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82288850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820f17b8
	ctx.lr = 0x82288868;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82288884
	if (ctx.cr6.eq) goto loc_82288884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8228887C;
	sub_820F17B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82288884:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82288848) {
	__imp__sub_82288848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288890) {
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
	// stfs f2,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x822888bc
	if (!ctx.cr6.eq) goto loc_822888BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822888d0
	goto loc_822888D0;
loc_822888BC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x822888C4;
	sub_82287D60(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822888D0:
	// bl 0x82287d60
	ctx.lr = 0x822888D4;
	sub_82287D60(ctx, base);
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

PPC_WEAK_FUNC(sub_82288890) {
	__imp__sub_82288890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822888E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8228890C;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228892c
	if (ctx.cr6.eq) goto loc_8228892C;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x82288920;
	sub_820F17B8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82288930
	goto loc_82288930;
loc_8228892C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82288930:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822888E8) {
	__imp__sub_822888E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82288948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82288950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bge cr6,0x82288990
	if (!ctx.cr6.lt) goto loc_82288990;
	// bl 0x82287cd0
	ctx.lr = 0x82288978;
	sub_82287CD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x82287e08
	ctx.lr = 0x8228898C;
	sub_82287E08(ctx, base);
	// b 0x822889a0
	goto loc_822889A0;
loc_82288990:
	// bl 0x82287c60
	ctx.lr = 0x82288994;
	sub_82287C60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82287ed0
	ctx.lr = 0x822889A0;
	sub_82287ED0(ctx, base);
loc_822889A0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822889d4
	if (!ctx.cr6.eq) goto loc_822889D4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822889d4
	if (!ctx.cr6.eq) goto loc_822889D4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822889d8
	if (ctx.cr6.eq) goto loc_822889D8;
loc_822889D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822889D8:
	// lbz r10,26(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 26);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lbz r9,26(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82288a40
	if (!ctx.cr6.eq) goto loc_82288A40;
	// lbz r11,27(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 27);
	// lbz r10,27(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82288a40
	if (!ctx.cr6.eq) goto loc_82288A40;
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82288a40
	if (!ctx.cr6.eq) goto loc_82288A40;
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// lbz r10,29(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82288a40
	if (!ctx.cr6.eq) goto loc_82288A40;
	// lbz r11,30(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// lbz r10,30(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82288a40
	if (!ctx.cr6.eq) goto loc_82288A40;
	// lbz r11,31(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 31);
	// lbz r10,31(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 31);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82288a44
	if (ctx.cr6.eq) goto loc_82288A44;
loc_82288A40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82288A44:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lhz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// rlwinm r6,r3,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// bne cr6,0x82288a90
	if (!ctx.cr6.eq) goto loc_82288A90;
	// lhz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// lhz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82288a90
	if (!ctx.cr6.eq) goto loc_82288A90;
	// lhz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// lhz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82288a94
	if (ctx.cr6.eq) goto loc_82288A94;
loc_82288A90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82288A94:
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82288aec
	if (!ctx.cr6.eq) goto loc_82288AEC;
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82288aec
	if (!ctx.cr6.eq) goto loc_82288AEC;
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82288aec
	if (!ctx.cr6.eq) goto loc_82288AEC;
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82288aec
	if (!ctx.cr6.eq) goto loc_82288AEC;
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82288af0
	if (ctx.cr6.eq) goto loc_82288AF0;
loc_82288AEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82288AF0:
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82288b18
	if (!ctx.cr6.eq) goto loc_82288B18;
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82288b1c
	if (ctx.cr6.eq) goto loc_82288B1C;
loc_82288B18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82288B1C:
	// lbz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lbz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82288b44
	if (!ctx.cr6.eq) goto loc_82288B44;
	// lbz r11,61(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// lbz r4,61(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82288b48
	if (ctx.cr6.eq) goto loc_82288B48;
loc_82288B44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82288B48:
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82288bac
	if (ctx.cr6.eq) goto loc_82288BAC;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82288bac
	if (ctx.cr6.eq) goto loc_82288BAC;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82288bac
	if (ctx.cr6.eq) goto loc_82288BAC;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82288bac
	if (ctx.cr6.eq) goto loc_82288BAC;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82288bac
	if (ctx.cr6.eq) goto loc_82288BAC;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82288bac
	if (ctx.cr6.eq) goto loc_82288BAC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82288bac
	if (ctx.cr6.eq) goto loc_82288BAC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82287c60
	ctx.lr = 0x82288BA4;
	sub_82287C60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82288BAC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82287cd0
	ctx.lr = 0x82288BB4;
	sub_82287CD0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288bd4
	if (!ctx.cr6.eq) goto loc_82288BD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288be8
	goto loc_82288BE8;
loc_82288BD4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288BDC;
	sub_82287D60(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288BE8:
	// bl 0x82287d60
	ctx.lr = 0x82288BEC;
	sub_82287D60(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288c0c
	if (!ctx.cr6.eq) goto loc_82288C0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288c20
	goto loc_82288C20;
loc_82288C0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288C14;
	sub_82287D60(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288C20:
	// bl 0x82287d60
	ctx.lr = 0x82288C24;
	sub_82287D60(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288c44
	if (!ctx.cr6.eq) goto loc_82288C44;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288c58
	goto loc_82288C58;
loc_82288C44:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288C4C;
	sub_82287D60(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288C58:
	// bl 0x82287d60
	ctx.lr = 0x82288C5C;
	sub_82287D60(ctx, base);
	// lbz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26);
	// lbz r10,26(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 26);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288c84
	if (!ctx.cr6.eq) goto loc_82288C84;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288c98
	goto loc_82288C98;
loc_82288C84:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288C8C;
	sub_82287D60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288C98:
	// bl 0x82287d60
	ctx.lr = 0x82288C9C;
	sub_82287D60(ctx, base);
	// lbz r11,27(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// lbz r10,27(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 27);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288cc4
	if (!ctx.cr6.eq) goto loc_82288CC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288cd8
	goto loc_82288CD8;
loc_82288CC4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288CCC;
	sub_82287D60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288CD8:
	// bl 0x82287d60
	ctx.lr = 0x82288CDC;
	sub_82287D60(ctx, base);
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288cfc
	if (!ctx.cr6.eq) goto loc_82288CFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288d10
	goto loc_82288D10;
loc_82288CFC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288D04;
	sub_82287D60(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288D10:
	// bl 0x82287d60
	ctx.lr = 0x82288D14;
	sub_82287D60(ctx, base);
	// lbz r11,29(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r29,29(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288d34
	if (!ctx.cr6.eq) goto loc_82288D34;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288d48
	goto loc_82288D48;
loc_82288D34:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288D3C;
	sub_82287D60(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288D48:
	// bl 0x82287d60
	ctx.lr = 0x82288D4C;
	sub_82287D60(ctx, base);
	// lbz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// lbz r10,30(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288d74
	if (!ctx.cr6.eq) goto loc_82288D74;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288d88
	goto loc_82288D88;
loc_82288D74:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288D7C;
	sub_82287D60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288D88:
	// bl 0x82287d60
	ctx.lr = 0x82288D8C;
	sub_82287D60(ctx, base);
	// lbz r11,31(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 31);
	// lbz r10,31(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 31);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288db4
	if (!ctx.cr6.eq) goto loc_82288DB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288dc8
	goto loc_82288DC8;
loc_82288DB4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288DBC;
	sub_82287D60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288DC8:
	// bl 0x82287d60
	ctx.lr = 0x82288DCC;
	sub_82287D60(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288dec
	if (!ctx.cr6.eq) goto loc_82288DEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288e00
	goto loc_82288E00;
loc_82288DEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288DF4;
	sub_82287D60(ctx, base);
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288E00:
	// bl 0x82287d60
	ctx.lr = 0x82288E04;
	sub_82287D60(ctx, base);
	// lhz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288e24
	if (!ctx.cr6.eq) goto loc_82288E24;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288e38
	goto loc_82288E38;
loc_82288E24:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288E2C;
	sub_82287D60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288E38:
	// bl 0x82287d60
	ctx.lr = 0x82288E3C;
	sub_82287D60(ctx, base);
	// lhz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288e5c
	if (!ctx.cr6.eq) goto loc_82288E5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288e70
	goto loc_82288E70;
loc_82288E5C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288E64;
	sub_82287D60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288E70:
	// bl 0x82287d60
	ctx.lr = 0x82288E74;
	sub_82287D60(ctx, base);
	// lhz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r29,22(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82288e94
	if (!ctx.cr6.eq) goto loc_82288E94;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288ea8
	goto loc_82288EA8;
loc_82288E94:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288E9C;
	sub_82287D60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288EA8:
	// bl 0x82287d60
	ctx.lr = 0x82288EAC;
	sub_82287D60(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82288ed0
	if (!ctx.cr6.eq) goto loc_82288ED0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288ee4
	goto loc_82288EE4;
loc_82288ED0:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288ED8;
	sub_82287D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288EE4:
	// bl 0x82287d60
	ctx.lr = 0x82288EE8;
	sub_82287D60(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82288f0c
	if (!ctx.cr6.eq) goto loc_82288F0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288f20
	goto loc_82288F20;
loc_82288F0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288F14;
	sub_82287D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288F20:
	// bl 0x82287d60
	ctx.lr = 0x82288F24;
	sub_82287D60(ctx, base);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82288f48
	if (!ctx.cr6.eq) goto loc_82288F48;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288f5c
	goto loc_82288F5C;
loc_82288F48:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288F50;
	sub_82287D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288F5C:
	// bl 0x82287d60
	ctx.lr = 0x82288F60;
	sub_82287D60(ctx, base);
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82288f84
	if (!ctx.cr6.eq) goto loc_82288F84;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288f98
	goto loc_82288F98;
loc_82288F84:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288F8C;
	sub_82287D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288F98:
	// bl 0x82287d60
	ctx.lr = 0x82288F9C;
	sub_82287D60(ctx, base);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82288fc0
	if (!ctx.cr6.eq) goto loc_82288FC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82288fd4
	goto loc_82288FD4;
loc_82288FC0:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82288FC8;
	sub_82287D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82288FD4:
	// bl 0x82287d60
	ctx.lr = 0x82288FD8;
	sub_82287D60(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82288ffc
	if (!ctx.cr6.eq) goto loc_82288FFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82289010
	goto loc_82289010;
loc_82288FFC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x82289004;
	sub_82287D60(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82289010:
	// bl 0x82287d60
	ctx.lr = 0x82289014;
	sub_82287D60(ctx, base);
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r29,56(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82289034
	if (!ctx.cr6.eq) goto loc_82289034;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82289048
	goto loc_82289048;
loc_82289034:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x8228903C;
	sub_82287D60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82289048:
	// bl 0x82287d60
	ctx.lr = 0x8228904C;
	sub_82287D60(ctx, base);
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// lbz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82289074
	if (!ctx.cr6.eq) goto loc_82289074;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82289088
	goto loc_82289088;
loc_82289074:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x8228907C;
	sub_82287D60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82289088:
	// bl 0x82287d60
	ctx.lr = 0x8228908C;
	sub_82287D60(ctx, base);
	// lbz r11,61(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// lbz r10,61(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x822890bc
	if (!ctx.cr6.eq) goto loc_822890BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82287d60
	ctx.lr = 0x822890B4;
	sub_82287D60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822890BC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287d60
	ctx.lr = 0x822890C4;
	sub_82287D60(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82287d60
	ctx.lr = 0x822890D4;
	sub_82287D60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82288948) {
	__imp__sub_82288948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822890DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822890DC) {
	__imp__sub_822890DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822890E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822890E8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x820f1718
	ctx.lr = 0x82289100;
	sub_820F1718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82289120
	if (ctx.cr6.eq) goto loc_82289120;
	// bl 0x822881b0
	ctx.lr = 0x82289110;
	sub_822881B0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82289128
	goto loc_82289128;
loc_82289120:
	// bl 0x82288288
	ctx.lr = 0x82289124;
	sub_82288288(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_82289128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1718
	ctx.lr = 0x82289130;
	sub_820F1718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822895b0
	if (ctx.cr6.eq) goto loc_822895B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x82289148;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82289160
	if (ctx.cr6.eq) goto loc_82289160;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8228915C;
	sub_820F17B8(ctx, base);
	// b 0x82289164
	goto loc_82289164;
loc_82289160:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82289164:
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,12(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x820f17b8
	ctx.lr = 0x82289178;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82289190
	if (ctx.cr6.eq) goto loc_82289190;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8228918C;
	sub_820F17B8(ctx, base);
	// b 0x82289194
	goto loc_82289194;
loc_82289190:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82289194:
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x820f17b8
	ctx.lr = 0x822891A8;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822891c0
	if (ctx.cr6.eq) goto loc_822891C0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x822891BC;
	sub_820F17B8(ctx, base);
	// b 0x822891c4
	goto loc_822891C4;
loc_822891C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822891C4:
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,26(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 26);
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// bl 0x820f17b8
	ctx.lr = 0x822891DC;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822891f4
	if (ctx.cr6.eq) goto loc_822891F4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x822891F0;
	sub_820F17B8(ctx, base);
	// b 0x822891f8
	goto loc_822891F8;
loc_822891F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822891F8:
	// stb r3,26(r29)
	PPC_STORE_U8(ctx.r29.u32 + 26, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,27(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 27);
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
	// bl 0x820f17b8
	ctx.lr = 0x82289210;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82289228
	if (ctx.cr6.eq) goto loc_82289228;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x82289224;
	sub_820F17B8(ctx, base);
	// b 0x8228922c
	goto loc_8228922C;
loc_82289228:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8228922C:
	// stb r3,27(r29)
	PPC_STORE_U8(ctx.r29.u32 + 27, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r28,28(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// bl 0x820f17b8
	ctx.lr = 0x82289240;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82289258
	if (ctx.cr6.eq) goto loc_82289258;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x82289254;
	sub_820F17B8(ctx, base);
	// b 0x8228925c
	goto loc_8228925C;
loc_82289258:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8228925C:
	// stb r3,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r28,29(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// bl 0x820f17b8
	ctx.lr = 0x82289270;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82289288
	if (ctx.cr6.eq) goto loc_82289288;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x82289284;
	sub_820F17B8(ctx, base);
	// b 0x8228928c
	goto loc_8228928C;
loc_82289288:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8228928C:
	// stb r3,29(r29)
	PPC_STORE_U8(ctx.r29.u32 + 29, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,30(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
	// bl 0x820f17b8
	ctx.lr = 0x822892A4;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822892bc
	if (ctx.cr6.eq) goto loc_822892BC;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x822892B8;
	sub_820F17B8(ctx, base);
	// b 0x822892c0
	goto loc_822892C0;
loc_822892BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822892C0:
	// stb r3,30(r29)
	PPC_STORE_U8(ctx.r29.u32 + 30, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,31(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 31);
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
	// bl 0x820f17b8
	ctx.lr = 0x822892D8;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822892f0
	if (ctx.cr6.eq) goto loc_822892F0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x822892EC;
	sub_820F17B8(ctx, base);
	// b 0x822892f4
	goto loc_822892F4;
loc_822892F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822892F4:
	// stb r3,31(r29)
	PPC_STORE_U8(ctx.r29.u32 + 31, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x820f17b8
	ctx.lr = 0x82289308;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82289320
	if (ctx.cr6.eq) goto loc_82289320;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8228931C;
	sub_820F17B8(ctx, base);
	// b 0x82289324
	goto loc_82289324;
loc_82289320:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82289324:
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r28,20(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// bl 0x820f17b8
	ctx.lr = 0x82289338;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82289350
	if (ctx.cr6.eq) goto loc_82289350;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8228934C;
	sub_820F17B8(ctx, base);
	// b 0x82289354
	goto loc_82289354;
loc_82289350:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82289354:
	// sth r3,20(r29)
	PPC_STORE_U16(ctx.r29.u32 + 20, ctx.r3.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r28,24(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// bl 0x820f17b8
	ctx.lr = 0x82289368;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82289380
	if (ctx.cr6.eq) goto loc_82289380;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8228937C;
	sub_820F17B8(ctx, base);
	// b 0x82289384
	goto loc_82289384;
loc_82289380:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82289384:
	// sth r3,24(r29)
	PPC_STORE_U16(ctx.r29.u32 + 24, ctx.r3.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r28,22(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// bl 0x820f17b8
	ctx.lr = 0x82289398;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822893b0
	if (ctx.cr6.eq) goto loc_822893B0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x822893AC;
	sub_820F17B8(ctx, base);
	// b 0x822893b4
	goto loc_822893B4;
loc_822893B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822893B4:
	// sth r3,22(r29)
	PPC_STORE_U16(ctx.r29.u32 + 22, ctx.r3.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x820f17b8
	ctx.lr = 0x822893C8;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822893e8
	if (ctx.cr6.eq) goto loc_822893E8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x822893DC;
	sub_820F17B8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822893ec
	goto loc_822893EC;
loc_822893E8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_822893EC:
	// stfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x820f17b8
	ctx.lr = 0x82289400;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82289420
	if (ctx.cr6.eq) goto loc_82289420;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x82289414;
	sub_820F17B8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82289424
	goto loc_82289424;
loc_82289420:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82289424:
	// stfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x820f17b8
	ctx.lr = 0x82289438;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82289458
	if (ctx.cr6.eq) goto loc_82289458;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8228944C;
	sub_820F17B8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8228945c
	goto loc_8228945C;
loc_82289458:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_8228945C:
	// stfs f0,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x820f17b8
	ctx.lr = 0x82289470;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82289490
	if (ctx.cr6.eq) goto loc_82289490;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x82289484;
	sub_820F17B8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82289494
	goto loc_82289494;
loc_82289490:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82289494:
	// stfs f0,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 44, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x820f17b8
	ctx.lr = 0x822894A8;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822894c8
	if (ctx.cr6.eq) goto loc_822894C8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x822894BC;
	sub_820F17B8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822894cc
	goto loc_822894CC;
loc_822894C8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_822894CC:
	// stfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 48, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x820f17b8
	ctx.lr = 0x822894E0;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822894fc
	if (ctx.cr6.eq) goto loc_822894FC;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x822894F4;
	sub_820F17B8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
loc_822894FC:
	// stfs f31,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 52, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r28,56(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// bl 0x820f17b8
	ctx.lr = 0x82289510;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82289528
	if (ctx.cr6.eq) goto loc_82289528;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x82289524;
	sub_820F17B8(ctx, base);
	// b 0x8228952c
	goto loc_8228952C;
loc_82289528:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8228952C:
	// stb r3,56(r29)
	PPC_STORE_U8(ctx.r29.u32 + 56, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
	// bl 0x820f17b8
	ctx.lr = 0x82289544;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228955c
	if (ctx.cr6.eq) goto loc_8228955C;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x82289558;
	sub_820F17B8(ctx, base);
	// b 0x82289560
	goto loc_82289560;
loc_8228955C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82289560:
	// stb r3,60(r29)
	PPC_STORE_U8(ctx.r29.u32 + 60, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,61(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// bl 0x820f17b8
	ctx.lr = 0x82289578;
	sub_820F17B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228959c
	if (ctx.cr6.eq) goto loc_8228959C;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f17b8
	ctx.lr = 0x8228958C;
	sub_820F17B8(ctx, base);
	// stb r3,61(r29)
	PPC_STORE_U8(ctx.r29.u32 + 61, ctx.r3.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8228959C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r30,61(r29)
	PPC_STORE_U8(ctx.r29.u32 + 61, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822895B0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r9,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r9.u32);
	// lbz r8,26(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 26);
	// stb r8,26(r29)
	PPC_STORE_U8(ctx.r29.u32 + 26, ctx.r8.u8);
	// lbz r7,27(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 27);
	// stb r7,27(r29)
	PPC_STORE_U8(ctx.r29.u32 + 27, ctx.r7.u8);
	// lbz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// stb r6,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r6.u8);
	// lbz r5,29(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// stb r5,29(r29)
	PPC_STORE_U8(ctx.r29.u32 + 29, ctx.r5.u8);
	// lbz r4,30(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// stb r4,30(r29)
	PPC_STORE_U8(ctx.r29.u32 + 30, ctx.r4.u8);
	// lbz r3,31(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 31);
	// stb r3,31(r29)
	PPC_STORE_U8(ctx.r29.u32 + 31, ctx.r3.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lhz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// sth r10,20(r29)
	PPC_STORE_U16(ctx.r29.u32 + 20, ctx.r10.u16);
	// lhz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// sth r9,24(r29)
	PPC_STORE_U16(ctx.r29.u32 + 24, ctx.r9.u16);
	// lhz r8,22(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// sth r8,22(r29)
	PPC_STORE_U16(ctx.r29.u32 + 22, ctx.r8.u16);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// lfs f12,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// lfs f11,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 44, temp.u32);
	// lfs f10,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 48, temp.u32);
	// lfs f9,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 52, temp.u32);
	// lbz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// stb r7,56(r29)
	PPC_STORE_U8(ctx.r29.u32 + 56, ctx.r7.u8);
	// lbz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// stb r6,60(r29)
	PPC_STORE_U8(ctx.r29.u32 + 60, ctx.r6.u8);
	// lbz r5,61(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// stb r5,61(r29)
	PPC_STORE_U8(ctx.r29.u32 + 61, ctx.r5.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822890E0) {
	__imp__sub_822890E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228966C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228966C) {
	__imp__sub_8228966C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289670) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// addi r31,r11,-16528
	ctx.r31.s64 = ctx.r11.s64 + -16528;
	// addi r5,r10,20932
	ctx.r5.s64 = ctx.r10.s64 + 20932;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822e8368
	ctx.lr = 0x822896A4;
	sub_822E8368(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822896c8
	if (!ctx.cr6.eq) goto loc_822896C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,15900
	ctx.r5.s64 = ctx.r11.s64 + 15900;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822e8368
	ctx.lr = 0x822896C4;
	sub_822E8368(ctx, base);
	// b 0x82289704
	goto loc_82289704;
loc_822896C8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82289704
	if (!ctx.cr6.eq) goto loc_82289704;
	// lhz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// bl 0x822e7940
	ctx.lr = 0x822896D8;
	sub_822E7940(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lbz r11,119(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lbz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// addi r5,r9,16372
	ctx.r5.s64 = ctx.r9.s64 + 16372;
	// lbz r7,117(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lbz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x82289704;
	sub_822E8368(ctx, base);
loc_82289704:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82289670) {
	__imp__sub_82289670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228971C) {
	__imp__sub_8228971C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82289720) {
	__imp__sub_82289720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82289724) {
	__imp__sub_82289724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82289730;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// lis r10,-30584
	ctx.r10.s64 = -2004353024;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r10,34953
	ctx.r9.u64 = ctx.r10.u64 | 34953;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mulhw r10,r11,r9
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 5;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r6,r7,60
	ctx.r6.s64 = ctx.r7.s64 * 60;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// stw r11,720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 720, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82310110
	ctx.lr = 0x82289780;
	sub_82310110(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82289728) {
	__imp__sub_82289728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82289794) {
	__imp__sub_82289794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82289798) {
	__imp__sub_82289798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228979C) {
	__imp__sub_8228979C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822897A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822897A0) {
	__imp__sub_822897A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822897A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822897A4) {
	__imp__sub_822897A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822897A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822897A8) {
	__imp__sub_822897A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822897AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822897AC) {
	__imp__sub_822897AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822897B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822897B0) {
	__imp__sub_822897B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822897B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822897B4) {
	__imp__sub_822897B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822897B8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r11,16484
	ctx.r8.s64 = ctx.r11.s64 + 16484;
	// addi r3,r10,16472
	ctx.r3.s64 = ctx.r10.s64 + 16472;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x822897E8;
	sub_822E1618(ctx, base);
	// lis r9,-31930
	ctx.r9.s64 = -2092564480;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r6,r8,16448
	ctx.r6.s64 = ctx.r8.s64 + 16448;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-17272(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17272, ctx.r3.u32);
	// addi r3,r7,16436
	ctx.r3.s64 = ctx.r7.s64 + 16436;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8228980C;
	sub_822E15D0(ctx, base);
	// lis r5,-31919
	ctx.r5.s64 = -2091843584;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r4,16400
	ctx.r6.s64 = ctx.r4.s64 + 16400;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-16536(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16536, ctx.r3.u32);
	// addi r3,r11,16388
	ctx.r3.s64 = ctx.r11.s64 + 16388;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82289830;
	sub_822E15D0(ctx, base);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// stw r3,-17268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17268, ctx.r3.u32);
	// bl 0x82286978
	ctx.lr = 0x8228983C;
	sub_82286978(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822897B8) {
	__imp__sub_822897B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228984C) {
	__imp__sub_8228984C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,8178
	ctx.r3.s64 = 8178;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1250
	ctx.r3.s64 = 1250;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82289850) {
	__imp__sub_82289850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289868) {
	PPC_FUNC_PROLOGUE();
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82289868) {
	__imp__sub_82289868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228987C) {
	__imp__sub_8228987C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82289888;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// li r5,1568
	ctx.r5.s64 = 1568;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// bl 0x823de090
	ctx.lr = 0x822898B8;
	sub_823DE090(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// stw r28,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r28.u32);
	// stw r27,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// stw r6,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82289880) {
	__imp__sub_82289880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82289908;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8368(r1)
	ea = -8368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287b40
	ctx.lr = 0x82289928;
	sub_82287B40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// oris r4,r11,32768
	ctx.r4.u64 = ctx.r11.u64 | 2147483648;
	// bl 0x82287ed0
	ctx.lr = 0x82289938;
	sub_82287ED0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r28,8178
	ctx.r28.s64 = 8178;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8228994c
	if (ctx.cr6.eq) goto loc_8228994C;
	// li r28,1250
	ctx.r28.s64 = 1250;
loc_8228994C:
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r10,r4,r28
	ctx.r10.u64 = ctx.r4.u64 + ctx.r28.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82289968
	if (!ctx.cr6.gt) goto loc_82289968;
	// subf r30,r4,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r4.s64;
loc_82289968:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287ed0
	ctx.lr = 0x82289970;
	sub_82287ED0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287ea0
	ctx.lr = 0x8228997C;
	sub_82287EA0(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82287e40
	ctx.lr = 0x82289994;
	sub_82287E40(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82286e80
	ctx.lr = 0x822899B0;
	sub_82286E80(ctx, base);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// li r11,-1
	ctx.r11.s64 = -1;
	// srawi r9,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r10,-17272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17272);
	// adde r29,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82289a24
	if (ctx.cr6.eq) goto loc_82289A24;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x822899ec
	if (ctx.cr6.gt) goto loc_822899EC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82289a24
	if (ctx.cr6.eq) goto loc_82289A24;
loc_822899EC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r9,14392
	ctx.r5.s64 = ctx.r9.s64 + 14392;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r7,16500
	ctx.r4.s64 = ctx.r7.s64 + 16500;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// li r3,25
	ctx.r3.s64 = 25;
	// lwzx r5,r10,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// bl 0x82280900
	ctx.lr = 0x82289A24;
	sub_82280900(ctx, base);
loc_82289A24:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82289a58
	if (!ctx.cr6.eq) goto loc_82289A58;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82289a58
	if (ctx.cr6.eq) goto loc_82289A58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82289A58:
	// neg r11,r29
	ctx.r11.s64 = -ctx.r29.s64;
	// andc r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r1,r1,8368
	ctx.r1.s64 = ctx.r1.s64 + 8368;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82289900) {
	__imp__sub_82289900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82289A6C) {
	__imp__sub_82289A6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82289A78;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8384(r1)
	ea = -8384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,16384
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16384, ctx.xer);
	// ble cr6,0x82289aac
	if (!ctx.cr6.gt) goto loc_82289AAC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,16732
	ctx.r4.s64 = ctx.r11.s64 + 16732;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82289AAC;
	sub_822830E8(ctx, base);
loc_82289AAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// li r11,8178
	ctx.r11.s64 = 8178;
	// beq cr6,0x82289ac8
	if (ctx.cr6.eq) goto loc_82289AC8;
	// li r11,1250
	ctx.r11.s64 = 1250;
loc_82289AC8:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82289b28
	if (ctx.cr6.lt) goto loc_82289B28;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bge cr6,0x82289b08
	if (!ctx.cr6.lt) goto loc_82289B08;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,16656
	ctx.r4.s64 = ctx.r11.s64 + 16656;
	// bl 0x82280b08
	ctx.lr = 0x82289AFC;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,8384
	ctx.r1.s64 = ctx.r1.s64 + 8384;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82289B08:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x822dd768
	ctx.lr = 0x82289B14;
	sub_822DD768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289900
	ctx.lr = 0x82289B1C;
	sub_82289900(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,8384
	ctx.r1.s64 = ctx.r1.s64 + 8384;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82289B28:
	// li r5,8192
	ctx.r5.s64 = 8192;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82287b40
	ctx.lr = 0x82289B38;
	sub_82287B40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82287ed0
	ctx.lr = 0x82289B44;
	sub_82287ED0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r29,-31930
	ctx.r29.s64 = -2092564480;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,-17268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17268);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82289b78
	if (ctx.cr6.eq) goto loc_82289B78;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,16616
	ctx.r4.s64 = ctx.r11.s64 + 16616;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x82289B78;
	sub_82280900(ctx, base);
loc_82289B78:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82287e40
	ctx.lr = 0x82289B88;
	sub_82287E40(ctx, base);
	// lwz r11,-17268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17268);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82289bac
	if (ctx.cr6.eq) goto loc_82289BAC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,16592
	ctx.r4.s64 = ctx.r11.s64 + 16592;
	// bl 0x82280900
	ctx.lr = 0x82289BAC;
	sub_82280900(ctx, base);
loc_82289BAC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82286e80
	ctx.lr = 0x82289BC8;
	sub_82286E80(ctx, base);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// li r11,-1
	ctx.r11.s64 = -1;
	// srawi r9,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r10,-17272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17272);
	// adde r30,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82289c50
	if (ctx.cr6.eq) goto loc_82289C50;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82289c04
	if (ctx.cr6.gt) goto loc_82289C04;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82289c50
	if (ctx.cr6.eq) goto loc_82289C50;
loc_82289C04:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r9,14392
	ctx.r5.s64 = ctx.r9.s64 + 14392;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,23(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r8,22(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// addi r4,r7,16540
	ctx.r4.s64 = ctx.r7.s64 + 16540;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r3,25
	ctx.r3.s64 = 25;
	// lbz r7,21(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lwzx r5,r28,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82280900
	ctx.lr = 0x82289C50;
	sub_82280900(ctx, base);
loc_82289C50:
	// neg r11,r30
	ctx.r11.s64 = -ctx.r30.s64;
	// andc r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r30.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r1,r1,8384
	ctx.r1.s64 = ctx.r1.s64 + 8384;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82289A70) {
	__imp__sub_82289A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82289C64) {
	__imp__sub_82289C64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82289C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82289C70;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82287ba0
	ctx.lr = 0x82289C84;
	sub_82287BA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82288288
	ctx.lr = 0x82289C8C;
	sub_82288288(ctx, base);
	// rlwinm r11,r3,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000000;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82289cc4
	if (ctx.cr6.eq) goto loc_82289CC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r26,r26,1
	ctx.r26.u64 = ctx.r26.u32 & 0x7FFFFFFF;
	// li r22,1
	ctx.r22.s64 = 1;
	// bl 0x82288288
	ctx.lr = 0x82289CB0;
	sub_82288288(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82288210
	ctx.lr = 0x82289CBC;
	sub_82288210(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82289cd0
	goto loc_82289CD0;
loc_82289CC4:
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_82289CD0:
	// lis r23,-31930
	ctx.r23.s64 = -2092564480;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r28,r11,14392
	ctx.r28.s64 = ctx.r11.s64 + 14392;
	// lwz r11,-17272(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17272);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82289d4c
	if (ctx.cr6.eq) goto loc_82289D4C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82289d00
	if (ctx.cr6.gt) goto loc_82289D00;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82289d4c
	if (ctx.cr6.eq) goto loc_82289D4C;
loc_82289D00:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// beq cr6,0x82289d38
	if (ctx.cr6.eq) goto loc_82289D38;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r4,r10,17004
	ctx.r4.s64 = ctx.r10.s64 + 17004;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwzx r5,r5,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// bl 0x82280900
	ctx.lr = 0x82289D34;
	sub_82280900(ctx, base);
	// b 0x82289d4c
	goto loc_82289D4C;
loc_82289D38:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,16980
	ctx.r4.s64 = ctx.r10.s64 + 16980;
	// lwzx r5,r9,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// bl 0x82280900
	ctx.lr = 0x82289D4C;
	sub_82280900(ctx, base);
loc_82289D4C:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x82289dd4
	if (ctx.cr6.gt) goto loc_82289DD4;
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r11,-16536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16536);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82289d90
	if (!ctx.cr6.eq) goto loc_82289D90;
	// lwz r11,-17272(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17272);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82289dc8
	if (ctx.cr6.eq) goto loc_82289DC8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82289d90
	if (ctx.cr6.gt) goto loc_82289D90;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82289dc8
	if (ctx.cr6.eq) goto loc_82289DC8;
loc_82289D90:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ld r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289670
	ctx.lr = 0x82289DA0;
	sub_82289670(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,16940
	ctx.r4.s64 = ctx.r9.s64 + 16940;
	// li r3,25
	ctx.r3.s64 = 25;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwzx r5,r5,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// bl 0x82280900
	ctx.lr = 0x82289DC8;
	sub_82280900(ctx, base);
loc_82289DC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82289DD4:
	// subf r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	// lis r25,-31919
	ctx.r25.s64 = -2091843584;
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ble 0x82289e54
	if (!ctx.cr0.gt) goto loc_82289E54;
	// lwz r11,-16536(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16536);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82289e1c
	if (!ctx.cr6.eq) goto loc_82289E1C;
	// lwz r11,-17272(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17272);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82289e54
	if (ctx.cr6.eq) goto loc_82289E54;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82289e1c
	if (ctx.cr6.gt) goto loc_82289E1C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82289e54
	if (ctx.cr6.eq) goto loc_82289E54;
loc_82289E1C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ld r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289670
	ctx.lr = 0x82289E2C;
	sub_82289670(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,16904
	ctx.r4.s64 = ctx.r9.s64 + 16904;
	// li r3,25
	ctx.r3.s64 = 25;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwzx r5,r5,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// bl 0x82280900
	ctx.lr = 0x82289E54;
	sub_82280900(ctx, base);
loc_82289E54:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82289fcc
	if (ctx.cr6.eq) goto loc_82289FCC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82289e70
	if (ctx.cr6.eq) goto loc_82289E70;
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r21,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r21.u32);
loc_82289E70:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82289ee4
	if (ctx.cr6.eq) goto loc_82289EE4;
	// lwz r11,-16536(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16536);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82289eb0
	if (!ctx.cr6.eq) goto loc_82289EB0;
	// lwz r11,-17272(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17272);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82289ed8
	if (ctx.cr6.eq) goto loc_82289ED8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82289eb0
	if (ctx.cr6.gt) goto loc_82289EB0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82289ed8
	if (ctx.cr6.eq) goto loc_82289ED8;
loc_82289EB0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ld r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289670
	ctx.lr = 0x82289EC0;
	sub_82289670(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,16872
	ctx.r4.s64 = ctx.r10.s64 + 16872;
	// li r3,25
	ctx.r3.s64 = 25;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x82280900
	ctx.lr = 0x82289ED8;
	sub_82280900(ctx, base);
loc_82289ED8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82289EE4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82289fdc
	if (ctx.cr6.lt) goto loc_82289FDC;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r10,r8,r27
	ctx.r10.u64 = ctx.r8.u64 + ctx.r27.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82289fdc
	if (ctx.cr6.gt) goto loc_82289FDC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r9,r27
	ctx.r10.u64 = ctx.r9.u64 + ctx.r27.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82289fdc
	if (ctx.cr6.gt) goto loc_82289FDC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82289F28;
	sub_823DE1F0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,8178
	ctx.r11.s64 = 8178;
	// beq cr6,0x82289f48
	if (ctx.cr6.eq) goto loc_82289F48;
	// li r11,1250
	ctx.r11.s64 = 1250;
loc_82289F48:
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82289dc8
	if (ctx.cr6.eq) goto loc_82289DC8;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x82289f90
	if (!ctx.cr6.gt) goto loc_82289F90;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// ld r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289670
	ctx.lr = 0x82289F6C;
	sub_82289670(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,16832
	ctx.r4.s64 = ctx.r10.s64 + 16832;
	// li r3,25
	ctx.r3.s64 = 25;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82280900
	ctx.lr = 0x82289F84;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82289F90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82287b40
	ctx.lr = 0x82289F9C;
	sub_82287B40(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82287ed0
	ctx.lr = 0x82289FA8;
	sub_82287ED0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82287e40
	ctx.lr = 0x82289FB8;
	sub_82287E40(ctx, base);
	// stw r21,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r21.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82287ba0
	ctx.lr = 0x82289FC4;
	sub_82287BA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82288288
	ctx.lr = 0x82289FCC;
	sub_82288288(ctx, base);
loc_82289FCC:
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82289FDC:
	// lwz r11,-16536(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16536);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8228a010
	if (!ctx.cr6.eq) goto loc_8228A010;
	// lwz r11,-17272(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17272);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228a048
	if (ctx.cr6.eq) goto loc_8228A048;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8228a010
	if (ctx.cr6.gt) goto loc_8228A010;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8228a048
	if (ctx.cr6.eq) goto loc_8228A048;
loc_8228A010:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r30,28(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// ld r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// bl 0x82289670
	ctx.lr = 0x8228A028;
	sub_82289670(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,16768
	ctx.r4.s64 = ctx.r10.s64 + 16768;
	// li r3,25
	ctx.r3.s64 = 25;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x82280900
	ctx.lr = 0x8228A048;
	sub_82280900(ctx, base);
loc_8228A048:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82289C68) {
	__imp__sub_82289C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228A054) {
	__imp__sub_8228A054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A058) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8228a084
	if (!ctx.cr6.eq) goto loc_8228A084;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8228a098
	if (!ctx.cr6.eq) goto loc_8228A098;
loc_8228A07C:
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
loc_8228A084:
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8228A098:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228a07c
	if (ctx.cr6.eq) goto loc_8228A07C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8228a0e4
	if (!ctx.cr6.eq) goto loc_8228A0E4;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_8228A0B4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8228a0f8
	if (!ctx.cr0.eq) goto loc_8228A0F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8228a0b4
	if (!ctx.cr6.eq) goto loc_8228A0B4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8228A0E4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,17044
	ctx.r4.s64 = ctx.r11.s64 + 17044;
	// bl 0x82280900
	ctx.lr = 0x8228A0F4;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228A0F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228A058) {
	__imp__sub_8228A058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A108) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// bl 0x8228a058
	ctx.lr = 0x8228A130;
	sub_8228A058(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228A108) {
	__imp__sub_8228A108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A148) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8228a178
	if (ctx.cr6.eq) goto loc_8228A178;
loc_8228A164:
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8228A178:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8228a1f4
	if (ctx.cr6.eq) goto loc_8228A1F4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8228a1d4
	if (!ctx.cr6.eq) goto loc_8228A1D4;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8228a164
	if (!ctx.cr6.eq) goto loc_8228A164;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_8228A1A4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8228a1f8
	if (!ctx.cr0.eq) goto loc_8228A1F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8228a1a4
	if (!ctx.cr6.eq) goto loc_8228A1A4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8228A1D4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228a1f4
	if (ctx.cr6.eq) goto loc_8228A1F4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8228a1f4
	if (ctx.cr6.eq) goto loc_8228A1F4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,17088
	ctx.r4.s64 = ctx.r11.s64 + 17088;
	// bl 0x82280900
	ctx.lr = 0x8228A1F4;
	sub_82280900(ctx, base);
loc_8228A1F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228A1F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228A148) {
	__imp__sub_8228A148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A208) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// bl 0x8228a148
	ctx.lr = 0x8228A230;
	sub_8228A148(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228A208) {
	__imp__sub_8228A208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A248) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r3,36
	ctx.r9.s64 = ctx.r3.s64 + 36;
loc_8228A250:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// subf. r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228a270
	if (!ctx.cr0.eq) goto loc_8228A270;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8228a250
	if (!ctx.cr6.eq) goto loc_8228A250;
loc_8228A270:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228A248) {
	__imp__sub_8228A248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228A27C) {
	__imp__sub_8228A27C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A280) {
	PPC_FUNC_PROLOGUE();
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// lwz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// beq cr6,0x8228a2a0
	if (ctx.cr6.eq) goto loc_8228A2A0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8228A2A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228A280) {
	__imp__sub_8228A280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// lbz r10,-17308(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -17308);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228a2e0
	if (ctx.cr6.eq) goto loc_8228A2E0;
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// lwz r11,-17316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17316);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8228a2e0
	if (ctx.cr6.eq) goto loc_8228A2E0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822875c8
	sub_822875C8(ctx, base);
	return;
loc_8228A2E0:
	// b 0x8230f470
	sub_8230F470(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228A2A8) {
	__imp__sub_8228A2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228A2E4) {
	__imp__sub_8228A2E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A2E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8230f470
	sub_8230F470(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228A2E8) {
	__imp__sub_8228A2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228A2EC) {
	__imp__sub_8228A2EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8228A2F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// addi r31,r11,-17056
	ctx.r31.s64 = ctx.r11.s64 + -17056;
	// ori r30,r10,512
	ctx.r30.u64 = ctx.r10.u64 | 512;
	// ori r28,r9,516
	ctx.r28.u64 = ctx.r9.u64 | 516;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwzx r8,r31,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r7,r31,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// cmpwi cr6,r6,64
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 64, ctx.xer);
	// ble cr6,0x8228a350
	if (!ctx.cr6.gt) goto loc_8228A350;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,17128
	ctx.r4.s64 = ctx.r11.s64 + 17128;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8228A344;
	sub_82280B08(ctx, base);
	// lwzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// stwx r10,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
loc_8228A350:
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r10,r31,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8228a36c
	if (ctx.cr6.lt) goto loc_8228A36C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8228A36C:
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addis r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 524288;
	// addi r7,r11,512
	ctx.r7.s64 = ctx.r11.s64 + 512;
	// clrlwi r6,r10,26
	ctx.r6.u64 = ctx.r10.u32 & 0x3F;
loc_8228A37C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228a37c
	if (!ctx.cr0.eq) goto loc_8228A37C;
	// mulli r11,r6,8200
	ctx.r11.s64 = ctx.r6.s64 * 8200;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,8192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8192);
	// bl 0x823de1f0
	ctx.lr = 0x8228A3B0;
	sub_823DE1F0(ctx, base);
	// lwz r5,8192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8192);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r5.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x82283040
	ctx.lr = 0x8228A3D4;
	sub_82283040(ctx, base);
	// lwz r4,8196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8196);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r4,8(r29)
	PPC_STORE_U16(ctx.r29.u32 + 8, ctx.r4.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228A2F0) {
	__imp__sub_8228A2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8228A3F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// ori r9,r11,32872
	ctx.r9.u64 = ctx.r11.u64 | 32872;
	// addi r11,r10,-17264
	ctx.r11.s64 = ctx.r10.s64 + -17264;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addis r29,r28,2
	ctx.r29.s64 = ctx.r28.s64 + 131072;
	// addis r31,r28,2
	ctx.r31.s64 = ctx.r28.s64 + 131072;
	// addi r29,r29,-32668
	ctx.r29.s64 = ctx.r29.s64 + -32668;
	// addi r31,r31,-32672
	ctx.r31.s64 = ctx.r31.s64 + -32672;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmpwi cr6,r6,12
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 12, ctx.xer);
	// ble cr6,0x8228a468
	if (!ctx.cr6.gt) goto loc_8228A468;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// subfic r10,r10,-12
	ctx.xer.ca = ctx.r10.u32 <= 4294967284;
	ctx.r10.s64 = -12 - ctx.r10.s64;
	// addi r4,r9,17240
	ctx.r4.s64 = ctx.r9.s64 + 17240;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8228A45C;
	sub_82280B08(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_8228A468:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228a484
	if (ctx.cr6.lt) goto loc_8228A484;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8228A484:
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r6,r11,43691
	ctx.r6.u64 = ctx.r11.u64 | 43691;
	// mulhw r5,r9,r6
	ctx.r5.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32)) >> 32;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
loc_8228A4B0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228a4b0
	if (!ctx.cr0.eq) goto loc_8228A4B0;
	// mulli r11,r11,8200
	ctx.r11.s64 = ctx.r11.s64 * 8200;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,8192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8192);
	// bl 0x823de1f0
	ctx.lr = 0x8228A4E4;
	sub_823DE1F0(ctx, base);
	// lwz r10,8192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8192);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82283040
	ctx.lr = 0x8228A508;
	sub_82283040(ctx, base);
	// lwz r9,8196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8196);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r9,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r9.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228A3E8) {
	__imp__sub_8228A3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228A51C) {
	__imp__sub_8228A51C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A520) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8228a538
	if (!ctx.cr6.eq) goto loc_8228A538;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8228a2f0
	sub_8228A2F0(ctx, base);
	return;
loc_8228A538:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8228a3e8
	sub_8228A3E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228A520) {
	__imp__sub_8228A520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A540) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbz r9,-17308(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -17308);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8228a57c
	if (ctx.cr6.eq) goto loc_8228A57C;
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r10,-17316(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17316);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8228a57c
	if (ctx.cr6.eq) goto loc_8228A57C;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822875c8
	sub_822875C8(ctx, base);
	return;
loc_8228A57C:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8228a590
	if (!ctx.cr6.eq) goto loc_8228A590;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8228a2f0
	sub_8228A2F0(ctx, base);
	return;
loc_8228A590:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8228a3e8
	sub_8228A3E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228A540) {
	__imp__sub_8228A540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228A5A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addi r30,r11,-17056
	ctx.r30.s64 = ctx.r11.s64 + -17056;
	// ori r9,r10,516
	ctx.r9.u64 = ctx.r10.u64 | 516;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// clrlwi r7,r8,26
	ctx.r7.u64 = ctx.r8.u32 & 0x3F;
	// mulli r11,r7,8200
	ctx.r11.s64 = ctx.r7.s64 * 8200;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8228A5DC;
	sub_823DE1F0(ctx, base);
	// addis r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 524288;
	// stw r28,8192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8192, ctx.r28.u32);
	// stw r29,8196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8196, ctx.r29.u32);
	// addi r4,r11,516
	ctx.r4.s64 = ctx.r11.s64 + 516;
loc_8228A5EC:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwcx. r6,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228a5ec
	if (!ctx.cr0.eq) goto loc_8228A5EC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228A598) {
	__imp__sub_8228A598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228A618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// ori r9,r11,32872
	ctx.r9.u64 = ctx.r11.u64 | 32872;
	// addi r11,r10,-17264
	ctx.r11.s64 = ctx.r10.s64 + -17264;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,10922
	ctx.r8.s64 = 715784192;
	// addis r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 131072;
	// ori r7,r8,43691
	ctx.r7.u64 = ctx.r8.u64 | 43691;
	// addi r28,r28,-32668
	ctx.r28.s64 = ctx.r28.s64 + -32668;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulhw r3,r6,r7
	ctx.r3.s64 = (int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32)) >> 32;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r9.s64;
	// mulli r10,r8,8200
	ctx.r10.s64 = ctx.r8.s64 * 8200;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8228A688;
	sub_823DE1F0(ctx, base);
	// stw r29,8192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8192, ctx.r29.u32);
	// stw r30,8196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8196, ctx.r30.u32);
loc_8228A690:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228a690
	if (!ctx.cr0.eq) goto loc_8228A690;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228A610) {
	__imp__sub_8228A610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228A6B4) {
	__imp__sub_8228A6B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228A6C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8228a740
	if (!ctx.cr6.lt) goto loc_8228A740;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addi r30,r11,-17056
	ctx.r30.s64 = ctx.r11.s64 + -17056;
	// ori r9,r10,516
	ctx.r9.u64 = ctx.r10.u64 | 516;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// clrlwi r7,r8,26
	ctx.r7.u64 = ctx.r8.u32 & 0x3F;
	// mulli r11,r7,8200
	ctx.r11.s64 = ctx.r7.s64 * 8200;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8228A70C;
	sub_823DE1F0(ctx, base);
	// addis r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 524288;
	// stw r29,8192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8192, ctx.r29.u32);
	// stw r28,8196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8196, ctx.r28.u32);
	// addi r4,r11,516
	ctx.r4.s64 = ctx.r11.s64 + 516;
loc_8228A71C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r4
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwcx. r6,0,r4
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8228a71c
	if (!ctx.cr0.eq) goto loc_8228A71C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8228A740:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lhz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 184);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8228a610
	ctx.lr = 0x8228A750;
	sub_8228A610(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228A6B8) {
	__imp__sub_8228A6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228A760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-17272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17272);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8228a7c0
	if (ctx.cr6.eq) goto loc_8228A7C0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8228a7c0
	if (!ctx.cr6.eq) goto loc_8228A7C0;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14392
	ctx.r9.s64 = ctx.r11.s64 + 14392;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r8,17356
	ctx.r4.s64 = ctx.r8.s64 + 17356;
	// li r3,25
	ctx.r3.s64 = 25;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82280900
	ctx.lr = 0x8228A7C0;
	sub_82280900(ctx, base);
loc_8228A7C0:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228a820
	if (ctx.cr6.eq) goto loc_8228A820;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8228a820
	if (ctx.cr6.eq) goto loc_8228A820;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bne cr6,0x8228a804
	if (!ctx.cr6.eq) goto loc_8228A804;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8228a6b8
	ctx.lr = 0x8228A7F8;
	sub_8228A6B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8228A804:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230f5e0
	ctx.lr = 0x8228A818;
	sub_8230F5E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8228A820:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228A758) {
	__imp__sub_8228A758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228A82C) {
	__imp__sub_8228A82C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8228A838;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// std r8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// lwz r27,208(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,-17272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17272);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228a8d4
	if (ctx.cr6.eq) goto loc_8228A8D4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8228a884
	if (ctx.cr6.gt) goto loc_8228A884;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x8228a8dc
	if (ctx.cr6.eq) goto loc_8228A8DC;
loc_8228A884:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8228a8a8
	if (ctx.cr6.eq) goto loc_8228A8A8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8228a8a8
	if (!ctx.cr6.eq) goto loc_8228A8A8;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r8,17356
	ctx.r4.s64 = ctx.r8.s64 + 17356;
	// b 0x8228a8bc
	goto loc_8228A8BC;
loc_8228A8A8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8228a8d4
	if (ctx.cr6.eq) goto loc_8228A8D4;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r8,17380
	ctx.r4.s64 = ctx.r8.s64 + 17380;
loc_8228A8BC:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,14392
	ctx.r9.s64 = ctx.r11.s64 + 14392;
	// li r3,25
	ctx.r3.s64 = 25;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82280900
	ctx.lr = 0x8228A8D4;
	sub_82280900(ctx, base);
loc_8228A8D4:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x8228a92c
	if (!ctx.cr6.eq) goto loc_8228A92C;
loc_8228A8DC:
	// lwz r27,216(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8228a900
	if (ctx.cr6.eq) goto loc_8228A900;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rldicr r7,r27,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8228a6b8
	ctx.lr = 0x8228A900;
	sub_8228A6B8(ctx, base);
loc_8228A900:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8228a920
	if (ctx.cr6.eq) goto loc_8228A920;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rldicr r7,r27,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8228a6b8
	ctx.lr = 0x8228A920;
	sub_8228A6B8(ctx, base);
loc_8228A920:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8228A92C:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8228a940
	if (!ctx.cr6.eq) goto loc_8228A940;
loc_8228A934:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8228A940:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8228a934
	if (ctx.cr6.eq) goto loc_8228A934;
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230f4e8
	ctx.lr = 0x8228A968;
	sub_8230F4E8(ctx, base);
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// lwz r11,-16464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228a97c
	if (ctx.cr6.eq) goto loc_8228A97C;
	// twi 31,r0,22
loc_8228A97C:
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228A830) {
	__imp__sub_8228A830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228A98C) {
	__imp__sub_8228A98C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228A990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8228A998;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x822db808
	ctx.lr = 0x8228A9BC;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x8228A9C4;
	sub_822DB8F0(ctx, base);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// li r11,255
	ctx.r11.s64 = 255;
	// lwz r26,184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// lwz r11,-17272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17272);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228aa2c
	if (ctx.cr6.eq) goto loc_8228AA2C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8228aa08
	if (ctx.cr6.gt) goto loc_8228AA08;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8228aa2c
	if (ctx.cr6.eq) goto loc_8228AA2C;
loc_8228AA08:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rldicr r4,r26,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x82289670
	ctx.lr = 0x8228AA14;
	sub_82289670(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,17452
	ctx.r4.s64 = ctx.r11.s64 + 17452;
	// li r3,25
	ctx.r3.s64 = 25;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82280a68
	ctx.lr = 0x8228AA2C;
	sub_82280A68(ctx, base);
loc_8228AA2C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8228AA30:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8228aa30
	if (!ctx.cr6.eq) goto loc_8228AA30;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r29,r5,4
	ctx.r29.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r29,4096
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4096, ctx.xer);
	// ble cr6,0x8228aa80
	if (!ctx.cr6.gt) goto loc_8228AA80;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,17408
	ctx.r4.s64 = ctx.r11.s64 + 17408;
	// bl 0x82280a68
	ctx.lr = 0x8228AA6C;
	sub_82280A68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x8228AA74;
	sub_822DB8D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8228AA80:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823de1f0
	ctx.lr = 0x8228AA8C;
	sub_823DE1F0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rldicr r7,r26,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFF00000000;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82286e80
	ctx.lr = 0x8228AAA4;
	sub_82286E80(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// subfc r9,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// adde r31,r8,r10
	temp.u8 = (ctx.r8.u32 + ctx.r10.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822db8d8
	ctx.lr = 0x8228AAC0;
	sub_822DB8D8(ctx, base);
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228A990) {
	__imp__sub_8228A990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228AACC) {
	__imp__sub_8228AACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8228AAD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r4.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x822db808
	ctx.lr = 0x8228AB00;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x8228AB08;
	sub_822DB8F0(ctx, base);
	// lis r11,-31930
	ctx.r11.s64 = -2092564480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-17272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17272);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228ab58
	if (ctx.cr6.eq) goto loc_8228AB58;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8228ab34
	if (ctx.cr6.gt) goto loc_8228AB34;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8228ab58
	if (ctx.cr6.eq) goto loc_8228AB58;
loc_8228AB34:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lbz r8,183(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 183);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lbz r7,182(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 182);
	// addi r4,r10,17540
	ctx.r4.s64 = ctx.r10.s64 + 17540;
	// lbz r6,181(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 181);
	// li r3,25
	ctx.r3.s64 = 25;
	// lbz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 180);
	// bl 0x82280a68
	ctx.lr = 0x8228AB58;
	sub_82280A68(ctx, base);
loc_8228AB58:
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpwi cr6,r29,4096
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4096, ctx.xer);
	// ble cr6,0x8228ab90
	if (!ctx.cr6.gt) goto loc_8228AB90;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,4092
	ctx.r6.s64 = 4092;
	// addi r4,r11,17472
	ctx.r4.s64 = ctx.r11.s64 + 17472;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8228AB7C;
	sub_82280B08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x8228AB84;
	sub_822DB8D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8228AB90:
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// bl 0x823de1f0
	ctx.lr = 0x8228ABB0;
	sub_823DE1F0(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82286e80
	ctx.lr = 0x8228ABCC;
	sub_82286E80(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// subfc r9,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// adde r31,r8,r10
	temp.u8 = (ctx.r8.u32 + ctx.r10.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822db8d8
	ctx.lr = 0x8228ABE8;
	sub_822DB8D8(ctx, base);
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228AAD0) {
	__imp__sub_8228AAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228ABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228ABF4) {
	__imp__sub_8228ABF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228ABF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8228AC00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x822db808
	ctx.lr = 0x8228AC28;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x8228AC30;
	sub_822DB8F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// bl 0x823de1f0
	ctx.lr = 0x8228AC58;
	sub_823DE1F0(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// beq cr6,0x8228ac8c
	if (ctx.cr6.eq) goto loc_8228AC8C;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8228ac98
	goto loc_8228AC98;
loc_8228AC8C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8228AC98:
	// bl 0x8228a830
	ctx.lr = 0x8228AC9C;
	sub_8228A830(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r31,r9,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// bl 0x822db8d8
	ctx.lr = 0x8228ACB4;
	sub_822DB8D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228ABF8) {
	__imp__sub_8228ABF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228ACC0) {
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
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-3772
	ctx.r10.s64 = ctx.r10.s64 + -3772;
loc_8228ACE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8228ad08
	if (ctx.cr6.eq) goto loc_8228AD08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8228ace4
	if (ctx.cr6.eq) goto loc_8228ACE4;
loc_8228AD08:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8228ad30
	if (!ctx.cr6.eq) goto loc_8228AD30;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82283040
	ctx.lr = 0x8228AD2C;
	sub_82283040(ctx, base);
	// b 0x8228ade0
	goto loc_8228ADE0;
loc_8228AD30:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7e98
	ctx.lr = 0x8228AD40;
	sub_822E7E98(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17576
	ctx.r4.s64 = ctx.r11.s64 + 17576;
	// bl 0x823dfa98
	ctx.lr = 0x8228AD50;
	sub_823DFA98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ad68
	if (ctx.cr6.eq) goto loc_8228AD68;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_8228AD68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dcb40
	ctx.lr = 0x8228AD74;
	sub_822DCB40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8228ad8c
	if (!ctx.cr6.eq) goto loc_8228AD8C;
loc_8228AD7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8228ade4
	goto loc_8228ADE4;
loc_8228AD8C:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8228adbc
	if (!ctx.cr6.eq) goto loc_8228ADBC;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8228adbc
	if (!ctx.cr6.eq) goto loc_8228ADBC;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8228adbc
	if (!ctx.cr6.eq) goto loc_8228ADBC;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8228ad7c
	if (ctx.cr6.eq) goto loc_8228AD7C;
loc_8228ADBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8228add4
	if (ctx.cr6.eq) goto loc_8228ADD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823deaf8
	ctx.lr = 0x8228ADCC;
	sub_823DEAF8(ctx, base);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// b 0x8228add8
	goto loc_8228ADD8;
loc_8228ADD4:
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_8228ADD8:
	// bl 0x822e7940
	ctx.lr = 0x8228ADDC;
	sub_822E7940(ctx, base);
	// sth r3,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r3.u16);
loc_8228ADE0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8228ADE4:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
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

PPC_WEAK_FUNC(sub_8228ACC0) {
	__imp__sub_8228ACC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228ADFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228ADFC) {
	__imp__sub_8228ADFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AE00) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r5,r11,17580
	ctx.r5.s64 = ctx.r11.s64 + 17580;
	// bl 0x823dfb70
	ctx.lr = 0x8228AE2C;
	sub_823DFB70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228AE00) {
	__imp__sub_8228AE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228AE3C) {
	__imp__sub_8228AE3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AE40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// addi r5,r10,17592
	ctx.r5.s64 = ctx.r10.s64 + 17592;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823dfb70
	sub_823DFB70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228AE40) {
	__imp__sub_8228AE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AE68) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,17612
	ctx.r4.s64 = ctx.r11.s64 + 17612;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823deeb8
	ctx.lr = 0x8228AE88;
	sub_823DEEB8(ctx, base);
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

PPC_WEAK_FUNC(sub_8228AE68) {
	__imp__sub_8228AE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228AE9C) {
	__imp__sub_8228AE9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 + 12;
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// addi r4,r11,17620
	ctx.r4.s64 = ctx.r11.s64 + 17620;
	// b 0x823deeb8
	sub_823DEEB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228AEA0) {
	__imp__sub_8228AEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228AEBC) {
	__imp__sub_8228AEBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AEC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r5,r10,17580
	ctx.r5.s64 = ctx.r10.s64 + 17580;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823dfb70
	sub_823DFB70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228AEC0) {
	__imp__sub_8228AEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AEE0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228aef8
	if (!ctx.cr6.eq) goto loc_8228AEF8;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
loc_8228AEF8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r5,4
	ctx.r6.s64 = ctx.r5.s64 + 4;
	// addi r4,r11,17612
	ctx.r4.s64 = ctx.r11.s64 + 17612;
	// b 0x823deeb8
	sub_823DEEB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228AEE0) {
	__imp__sub_8228AEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8228AF10;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r10,17636
	ctx.r5.s64 = ctx.r10.s64 + 17636;
	// li r4,73
	ctx.r4.s64 = 73;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r28,20(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x823dfb70
	ctx.lr = 0x8228AF60;
	sub_823DFB70(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228AF08) {
	__imp__sub_8228AF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// addi r9,r4,28
	ctx.r9.s64 = ctx.r4.s64 + 28;
	// addi r8,r4,24
	ctx.r8.s64 = ctx.r4.s64 + 24;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// addi r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 + 12;
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// addi r4,r11,17676
	ctx.r4.s64 = ctx.r11.s64 + 17676;
	// bl 0x823deeb8
	ctx.lr = 0x8228AFB0;
	sub_823DEEB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228AF68) {
	__imp__sub_8228AF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228AFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8228AFC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-9436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9436);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228b05c
	if (ctx.cr6.eq) goto loc_8228B05C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ec4e8
	ctx.lr = 0x8228AFF4;
	sub_822EC4E8(ctx, base);
	// rlwinm r30,r28,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82310110
	ctx.lr = 0x8228AFFC;
	sub_82310110(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r31,r11,-16456
	ctx.r31.s64 = ctx.r11.s64 + -16456;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwzx r9,r30,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8228b040
	if (!ctx.cr6.eq) goto loc_8228B040;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228b040
	if (ctx.cr6.eq) goto loc_8228B040;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8238bd98
	ctx.lr = 0x8228B03C;
	sub_8238BD98(ctx, base);
	// stwx r3,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u32);
loc_8228B040:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228b054
	if (ctx.cr6.lt) goto loc_8228B054;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8228B054:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ec500
	ctx.lr = 0x8228B05C;
	sub_822EC500(ctx, base);
loc_8228B05C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228AFC0) {
	__imp__sub_8228AFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B064) {
	__imp__sub_8228B064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// addi r10,r11,-16456
	ctx.r10.s64 = ctx.r11.s64 + -16456;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B068) {
	__imp__sub_8228B068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B080) {
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
	// li r5,88
	ctx.r5.s64 = 88;
	// addi r31,r11,-16456
	ctx.r31.s64 = ctx.r11.s64 + -16456;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x8228B0A8;
	sub_823DE090(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8228B080) {
	__imp__sub_8228B080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B0C4) {
	__imp__sub_8228B0C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B0C8) {
	__imp__sub_8228B0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B0D4) {
	__imp__sub_8228B0D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B0D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8236b768
	sub_8236B768(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B0D8) {
	__imp__sub_8228B0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B0DC) {
	__imp__sub_8228B0DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B0E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8236fa48
	sub_8236FA48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B0E0) {
	__imp__sub_8228B0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B0E4) {
	__imp__sub_8228B0E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B0E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8236fa58
	sub_8236FA58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B0E8) {
	__imp__sub_8228B0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B0F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8236fa98
	sub_8236FA98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B0F0) {
	__imp__sub_8228B0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B0F8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236fad0
	ctx.lr = 0x8228B120;
	sub_8236FAD0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8228B0F8) {
	__imp__sub_8228B0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B138) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8236fb70
	ctx.lr = 0x8228B14C;
	sub_8236FB70(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B138) {
	__imp__sub_8228B138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B164) {
	__imp__sub_8228B164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B168) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x8236fb70
	sub_8236FB70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B168) {
	__imp__sub_8228B168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B174) {
	__imp__sub_8228B174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B178) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8236fb78
	ctx.lr = 0x8228B190;
	sub_8236FB78(ctx, base);
	// addi r11,r3,-192
	ctx.r11.s64 = ctx.r3.s64 + -192;
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

PPC_WEAK_FUNC(sub_8228B178) {
	__imp__sub_8228B178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8228B1AC) {
	__imp__sub_8228B1AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B1B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B1B0) {
	__imp__sub_8228B1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B1B8) {
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
	ctx.lr = 0x8228B1CC;
	sub_8236FA48(ctx, base);
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r31,r11,-16304
	ctx.r31.s64 = ctx.r11.s64 + -16304;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r31,244
	ctx.r6.s64 = ctx.r31.s64 + 244;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// li r4,-2
	ctx.r4.s64 = -2;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8236fbe0
	ctx.lr = 0x8228B1F8;
	sub_8236FBE0(ctx, base);
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// bl 0x822e85b0
	ctx.lr = 0x8228B20C;
	sub_822E85B0(ctx, base);
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

PPC_WEAK_FUNC(sub_8228B1B8) {
	__imp__sub_8228B1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31919
	ctx.r11.s64 = -2091843584;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-16304
	ctx.r11.s64 = ctx.r11.s64 + -16304;
	// li r8,8
	ctx.r8.s64 = 8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x822e85b0
	sub_822E85B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8228B220) {
	__imp__sub_8228B220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,4948(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4948);
	// lwz r16,-23048(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -23048);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r3,16493
	ctx.r3.s64 = 1080885248;
	// ori r3,r3,5000
	ctx.r3.u64 = ctx.r3.u64 | 5000;
	// bl 0x8236fc28
	ctx.lr = 0x8228B294;
	sub_8236FC28(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B240) {
	__imp__sub_8228B240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r3,16493
	ctx.r3.s64 = 1080885248;
	// ori r3,r3,5000
	ctx.r3.u64 = ctx.r3.u64 | 5000;
	// bl 0x8236fc28
	ctx.lr = 0x8228B294;
	sub_8236FC28(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B248) {
	__imp__sub_8228B248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8228B2B4) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8228B2B4) {
	__imp__sub_8228B2B4(ctx, base);
}

