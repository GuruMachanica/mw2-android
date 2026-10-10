#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_823A8A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A8A1C) {
	__imp__sub_823A8A1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8A20) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,5640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5640, ctx.r11.u32);
	// stw r11,5644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5644, ctx.r11.u32);
	// stw r11,5648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5648, ctx.r11.u32);
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r31,5640
	ctx.r11.s64 = ctx.r31.s64 + 5640;
	// bl 0x823c7d58
	ctx.lr = 0x823A8A5C;
	sub_823C7D58(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,5692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5692);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r10,208(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// subfe r4,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823a8a7c
	if (ctx.cr6.eq) goto loc_823A8A7C;
	// bl 0x823c85c8
	ctx.lr = 0x823A8A7C;
	sub_823C85C8(ctx, base);
loc_823A8A7C:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a8aa8
	if (ctx.cr6.eq) goto loc_823A8AA8;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,208(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r9,5692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5692);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823a8aa8
	if (ctx.cr6.eq) goto loc_823A8AA8;
	// bl 0x823c85c8
	ctx.lr = 0x823A8AA8;
	sub_823C85C8(ctx, base);
loc_823A8AA8:
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

PPC_WEAK_FUNC(sub_823A8A20) {
	__imp__sub_823A8A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A8ABC) {
	__imp__sub_823A8ABC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8AC0) {
	PPC_FUNC_PROLOGUE();
	// std r3,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r3.u64);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A8AC0) {
	__imp__sub_823A8AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A8ACC) {
	__imp__sub_823A8ACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A8AD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x823d5f58
	ctx.lr = 0x823A8B00;
	sub_823D5F58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8f40
	ctx.lr = 0x823A8B0C;
	sub_823C8F40(ctx, base);
	// std r31,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r31.u64);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A8AD0) {
	__imp__sub_823A8AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A8B1C) {
	__imp__sub_823A8B1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8B20) {
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
	// subfic r11,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r4.s64;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823a8a20
	ctx.lr = 0x823A8B50;
	sub_823A8A20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A8B20) {
	__imp__sub_823A8B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8B60) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823A8B68;
	__savegprlr_29(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// ld r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// ble cr6,0x823a8c44
	if (!ctx.cr6.gt) goto loc_823A8C44;
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// ld r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// ld r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// li r10,2
	ctx.r10.s64 = 2;
	// ld r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// ld r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ld r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// std r6,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r6.u64);
	// std r5,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r5.u64);
	// std r31,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r31.u64);
	// std r30,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r30.u64);
	// std r29,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r29.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ble cr6,0x823a8c14
	if (!ctx.cr6.gt) goto loc_823A8C14;
	// ld r9,-64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
loc_823A8BD4:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// ble cr6,0x823a8c14
	if (!ctx.cr6.gt) goto loc_823A8C14;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// std r5,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r5.u64);
	// std r31,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r31.u64);
	// blt cr6,0x823a8bd4
	if (ctx.cr6.lt) goto loc_823A8BD4;
loc_823A8C14:
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r7,r11,-32
	ctx.r7.s64 = ctx.r11.s64 + -32;
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// ld r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// std r8,-32(r11)
	PPC_STORE_U64(ctx.r11.u32 + -32, ctx.r8.u64);
	// std r6,-24(r11)
	PPC_STORE_U64(ctx.r11.u32 + -24, ctx.r6.u64);
	// std r5,-16(r11)
	PPC_STORE_U64(ctx.r11.u32 + -16, ctx.r5.u64);
	// std r4,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r4.u64);
loc_823A8C44:
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A8B60) {
	__imp__sub_823A8B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8C48) {
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
	// addi r31,r4,-2
	ctx.r31.s64 = ctx.r4.s64 + -2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x823a8b60
	ctx.lr = 0x823A8C74;
	sub_823A8B60(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823a8c94
	if (ctx.cr6.eq) goto loc_823A8C94;
loc_823A8C7C:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// subf r4,r31,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x823a8b60
	ctx.lr = 0x823A8C8C;
	sub_823A8B60(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823a8c7c
	if (!ctx.cr6.eq) goto loc_823A8C7C;
loc_823A8C94:
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

PPC_WEAK_FUNC(sub_823A8C48) {
	__imp__sub_823A8C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A8CAC) {
	__imp__sub_823A8CAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicl r9,r10,7,57
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 7) & 0x7F;
	// rldicl r8,r10,11,53
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FF;
	// rldicl r7,r10,19,45
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 19) & 0x7FFFF;
	// rlwimi r8,r9,4,22,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0x3F0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC0F);
	// rldicl r6,r10,20,44
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 20) & 0xFFFFF;
	// clrlwi r5,r8,22
	ctx.r5.u64 = ctx.r8.u32 & 0x3FF;
	// rldicl r3,r10,34,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0x3FFFFFFFF;
	// rlwimi r7,r5,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r6,r7,1,0,30
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 1) & 0xFFFFFFFE) | (ctx.r6.u64 & 0xFFFFFFFF00000001);
	// rlwimi r3,r6,12,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 12) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A8CB0) {
	__imp__sub_823A8CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A8CE4) {
	__imp__sub_823A8CE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A8CF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a8d14
	if (!ctx.cr6.eq) goto loc_823A8D14;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823A8D14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,120
	ctx.r30.s64 = ctx.r11.s64 + 120;
	// ble cr6,0x823a8dc4
	if (!ctx.cr6.gt) goto loc_823A8DC4;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823a8c48
	ctx.lr = 0x823A8D38;
	sub_823A8C48(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// beq cr6,0x823a8e20
	if (ctx.cr6.eq) goto loc_823A8E20;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
loc_823A8D48:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a8d88
	if (ctx.cr6.eq) goto loc_823A8D88;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823a8b60
	ctx.lr = 0x823A8D84;
	sub_823A8B60(ctx, base);
	// b 0x823a8dac
	goto loc_823A8DAC;
loc_823A8D88:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823a8dc4
	if (ctx.cr6.eq) goto loc_823A8DC4;
loc_823A8DAC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x823a8d48
	if (!ctx.cr6.eq) goto loc_823A8D48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823A8DC4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x823a8e20
	if (ctx.cr6.eq) goto loc_823A8E20;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
loc_823A8DD4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a8e08
	if (ctx.cr6.eq) goto loc_823A8E08;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x823a8dd4
	if (!ctx.cr6.eq) goto loc_823A8DD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823A8E08:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_823A8E20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A8CE8) {
	__imp__sub_823A8CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A8E2C) {
	__imp__sub_823A8E2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823A8E38;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// rlwinm r11,r26,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r25,r11,120
	ctx.r25.s64 = ctx.r11.s64 + 120;
	// beq cr6,0x823a8e84
	if (ctx.cr6.eq) goto loc_823A8E84;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// addi r29,r25,-12
	ctx.r29.s64 = ctx.r25.s64 + -12;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_823A8E6C:
	// lwzu r11,32(r29)
	ea = 32 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x823a8e6c
	if (!ctx.cr0.eq) goto loc_823A8E6C;
loc_823A8E84:
	// li r4,400
	ctx.r4.s64 = 400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8ce8
	ctx.lr = 0x823A8E90;
	sub_823A8CE8(ctx, base);
	// li r5,376
	ctx.r5.s64 = 376;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823A8EA0;
	sub_823DE1F0(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823a8f38
	if (ctx.cr6.eq) goto loc_823A8F38;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_823A8EBC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a8ef8
	if (ctx.cr6.eq) goto loc_823A8EF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// b 0x823a8f2c
	goto loc_823A8F2C;
loc_823A8EF8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + ctx.r25.u64;
	// ldx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r25.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r8,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r8.u64);
	// ld r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r7,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r7.u64);
loc_823A8F2C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823a8ebc
	if (ctx.cr6.lt) goto loc_823A8EBC;
loc_823A8F38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A8E30) {
	__imp__sub_823A8E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8F40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A8F40) {
	__imp__sub_823A8F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A8F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A8F60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8236b940
	ctx.lr = 0x823A8F70;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// addi r29,r10,3224
	ctx.r29.s64 = ctx.r10.s64 + 3224;
	// bge cr6,0x823a8f94
	if (!ctx.cr6.lt) goto loc_823A8F94;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r29,96
	ctx.r10.s64 = ctx.r29.s64 + 96;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823a8f98
	goto loc_823A8F98;
loc_823A8F94:
	// li r28,0
	ctx.r28.s64 = 0;
loc_823A8F98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// beq cr6,0x823a9028
	if (ctx.cr6.eq) goto loc_823A9028;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_823A8FB8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823a8fe0
	if (ctx.cr6.eq) goto loc_823A8FE0;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823a9028
	if (ctx.cr6.eq) goto loc_823A9028;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823a9028
	if (!ctx.cr0.lt) goto loc_823A9028;
loc_823A8FE0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a8fb8
	if (!ctx.cr6.eq) goto loc_823A8FB8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823a8fb8
	if (!ctx.cr6.eq) goto loc_823A8FB8;
loc_823A9028:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A8F58) {
	__imp__sub_823A8F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823A9038;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9194
	if (ctx.cr6.eq) goto loc_823A9194;
	// bl 0x8236b940
	ctx.lr = 0x823A9054;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// addi r28,r10,3224
	ctx.r28.s64 = ctx.r10.s64 + 3224;
	// bge cr6,0x823a9078
	if (!ctx.cr6.lt) goto loc_823A9078;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r28,96
	ctx.r10.s64 = ctx.r28.s64 + 96;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823a907c
	goto loc_823A907C;
loc_823A9078:
	// li r27,0
	ctx.r27.s64 = 0;
loc_823A907C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,120
	ctx.r30.s64 = ctx.r11.s64 + 120;
	// ble cr6,0x823a9134
	if (!ctx.cr6.gt) goto loc_823A9134;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823a8c48
	ctx.lr = 0x823A90A0;
	sub_823A8C48(ctx, base);
loc_823A90A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823a90c8
	if (ctx.cr6.eq) goto loc_823A90C8;
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823a9194
	if (ctx.cr6.eq) goto loc_823A9194;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823a9194
	if (!ctx.cr0.lt) goto loc_823A9194;
loc_823A90C8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A90E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a9110
	if (ctx.cr6.eq) goto loc_823A9110;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A90FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823a8b60
	ctx.lr = 0x823A910C;
	sub_823A8B60(ctx, base);
	// b 0x823a90a0
	goto loc_823A90A0;
loc_823A9110:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823a90a0
	if (!ctx.cr6.eq) goto loc_823A90A0;
loc_823A9134:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823a915c
	if (ctx.cr6.eq) goto loc_823A915C;
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823a9194
	if (ctx.cr6.eq) goto loc_823A9194;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823a9194
	if (!ctx.cr0.lt) goto loc_823A9194;
loc_823A915C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A9170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a9134
	if (!ctx.cr6.eq) goto loc_823A9134;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_823A9194:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A9030) {
	__imp__sub_823A9030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A919C) {
	__imp__sub_823A919C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A91A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x823A91A8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a938c
	if (ctx.cr6.eq) goto loc_823A938C;
	// bl 0x8236b940
	ctx.lr = 0x823A91C4;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// addi r23,r10,3224
	ctx.r23.s64 = ctx.r10.s64 + 3224;
	// bge cr6,0x823a91e8
	if (!ctx.cr6.lt) goto loc_823A91E8;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r23,96
	ctx.r10.s64 = ctx.r23.s64 + 96;
	// add r21,r11,r10
	ctx.r21.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823a91ec
	goto loc_823A91EC;
loc_823A91E8:
	// li r21,0
	ctx.r21.s64 = 0;
loc_823A91EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// li r20,-1
	ctx.r20.s64 = -1;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823A9208:
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r10,r29,158
	ctx.r10.s64 = ctx.r29.s64 + 158;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r30,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// add r27,r11,r22
	ctx.r27.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823a9244
	if (ctx.cr6.eq) goto loc_823A9244;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,552
	ctx.r4.s64 = ctx.r11.s64 + 552;
	// bl 0x823c9448
	ctx.lr = 0x823A9244;
	sub_823C9448(ctx, base);
loc_823A9244:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r26,20(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r24,r26
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x823a9298
	if (ctx.cr6.eq) goto loc_823A9298;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823a9268
	if (ctx.cr6.eq) goto loc_823A9268;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x823a927c
	if (!ctx.cr6.eq) goto loc_823A927C;
loc_823A9268:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,552
	ctx.r4.s64 = ctx.r11.s64 + 552;
	// bl 0x823c9448
	ctx.lr = 0x823A927C;
	sub_823C9448(ctx, base);
loc_823A927C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x823d5d40
	ctx.lr = 0x823A9298;
	sub_823D5D40(ctx, base);
loc_823A9298:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r25,r30,r31
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x823a92cc
	if (!ctx.cr6.gt) goto loc_823A92CC;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a92c4
	if (ctx.cr6.lt) goto loc_823A92C4;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// b 0x823a92d0
	goto loc_823A92D0;
loc_823A92C4:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x823a92d0
	goto loc_823A92D0;
loc_823A92CC:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_823A92D0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823a92f8
	if (ctx.cr6.eq) goto loc_823A92F8;
	// lwz r11,92(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 92);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823a9378
	if (ctx.cr6.eq) goto loc_823A9378;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823a9378
	if (!ctx.cr0.lt) goto loc_823A9378;
loc_823A92F8:
	// mulli r11,r29,108
	ctx.r11.s64 = ctx.r29.s64 * 108;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x823A9318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a9358
	if (ctx.cr6.eq) goto loc_823A9358;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A9334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x823a92d0
	if (!ctx.cr6.gt) goto loc_823A92D0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a9208
	if (ctx.cr6.eq) goto loc_823A9208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a8b60
	ctx.lr = 0x823A9354;
	sub_823A8B60(ctx, base);
	// b 0x823a9208
	goto loc_823A9208;
loc_823A9358:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x823a9208
	if (!ctx.cr0.eq) goto loc_823A9208;
loc_823A9378:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x823a938c
	if (!ctx.cr6.eq) goto loc_823A938C;
	// addi r4,r31,552
	ctx.r4.s64 = ctx.r31.s64 + 552;
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// bl 0x823c9448
	ctx.lr = 0x823A938C;
	sub_823C9448(ctx, base);
loc_823A938C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A91A0) {
	__imp__sub_823A91A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A9394) {
	__imp__sub_823A9394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A93A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r27,r5,112
	ctx.r27.s64 = ctx.r5.s64 + 112;
	// bl 0x8236b940
	ctx.lr = 0x823A93BC;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823a93ec
	if (!ctx.cr6.lt) goto loc_823A93EC;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r10,3224
	ctx.r10.s64 = ctx.r10.s64 + 3224;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a93ec
	if (ctx.cr6.eq) goto loc_823A93EC;
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823A93EC:
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bl 0x823d5f58
	ctx.lr = 0x823A9404;
	sub_823D5F58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8f40
	ctx.lr = 0x823A9410;
	sub_823C8F40(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a9030
	ctx.lr = 0x823A9424;
	sub_823A9030(ctx, base);
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 & ctx.r28.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823a8a20
	ctx.lr = 0x823A9444;
	sub_823A8A20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A9398) {
	__imp__sub_823A9398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A944C) {
	__imp__sub_823A944C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A9458;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r27,r5,112
	ctx.r27.s64 = ctx.r5.s64 + 112;
	// bl 0x8236b940
	ctx.lr = 0x823A9474;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823a94a4
	if (!ctx.cr6.lt) goto loc_823A94A4;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r10,3224
	ctx.r10.s64 = ctx.r10.s64 + 3224;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a94a4
	if (ctx.cr6.eq) goto loc_823A94A4;
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823A94A4:
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bl 0x823d5f58
	ctx.lr = 0x823A94BC;
	sub_823D5F58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8f40
	ctx.lr = 0x823A94C8;
	sub_823C8F40(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a9030
	ctx.lr = 0x823A94DC;
	sub_823A9030(ctx, base);
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 & ctx.r28.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823a8a20
	ctx.lr = 0x823A94FC;
	sub_823A8A20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A9450) {
	__imp__sub_823A9450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A9504) {
	__imp__sub_823A9504(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9508) {
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
	// bl 0x823de018
	ctx.lr = 0x823A9520;
	__savefpr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,260(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,264(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fsubs f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,256(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	ctx.f8.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// addi r7,r4,256
	ctx.r7.s64 = ctx.r4.s64 + 256;
	// lfs f1,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f1.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f5,f10,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f0,f9,f9,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fnmsubs f13,f7,f7,f0
	ctx.f13.f64 = double(float(-(ctx.f7.f64 * ctx.f7.f64 - ctx.f0.f64)));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x823a9718
	if (!ctx.cr6.gt) goto loc_823A9718;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r11,r4,448
	ctx.r11.s64 = ctx.r4.s64 + 448;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsqrts f2,f0
	ctx.f2.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f2,f2,f7
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// lfs f7,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f4,f11,f0,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f3,f10,f0,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
loc_823A95D4:
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// fmuls f12,f6,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// rlwinm r9,r8,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f30,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f30.f64 = double(temp.f32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f29,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r5,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r5.s64;
	// lfs f0,300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f27,292(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f26,f27,f11
	ctx.f26.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// lfs f25,296(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f24,f25,f10
	ctx.f24.f64 = double(float(ctx.f25.f64 * ctx.f10.f64));
	// fmsubs f13,f27,f10,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f10.f64 - ctx.f13.f64));
	// fmsubs f27,f25,f9,f26
	ctx.f27.f64 = double(float(ctx.f25.f64 * ctx.f9.f64 - ctx.f26.f64));
	// fmsubs f0,f0,f11,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f24.f64));
	// fmuls f26,f13,f13
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f26,f27,f27,f26
	ctx.f26.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f26.f64));
	// fmadds f26,f0,f0,f26
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f26.f64));
	// fsqrts f26,f26
	ctx.f26.f64 = double(float(sqrt(ctx.f26.f64)));
	// fneg f25,f26
	ctx.f25.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// fsel f26,f25,f31,f26
	ctx.f26.f64 = ctx.f25.f64 >= 0.0 ? ctx.f31.f64 : ctx.f26.f64;
	// fdivs f26,f31,f26
	ctx.f26.f64 = double(float(ctx.f31.f64 / ctx.f26.f64));
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fmuls f25,f26,f0
	ctx.f25.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f27,f27,f26
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f26.f64));
	// fmadds f0,f13,f12,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f13,f12,f25,f5
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f25.f64 + ctx.f5.f64));
	// fmadds f12,f27,f12,f3
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f8,f30,f13,f8
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f8,f29,f12,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fadds f8,f8,f28
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x823a9704
	if (!ctx.cr6.gt) goto loc_823A9704;
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f30,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f8,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f29,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f8,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f8.f64 = double(temp.f32);
	// lfs f28,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmadds f30,f29,f12,f30
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f30.f64));
	// fmadds f8,f8,f13,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fadds f8,f8,f28
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x823a9704
	if (!ctx.cr6.gt) goto loc_823A9704;
	// addi r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 + 36;
	// addi r5,r10,40
	ctx.r5.s64 = ctx.r10.s64 + 40;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// addi r5,r10,44
	ctx.r5.s64 = ctx.r10.s64 + 44;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r4,r31
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	ctx.f30.f64 = double(temp.f32);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfsx f30,r3,r31
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	ctx.f30.f64 = double(temp.f32);
	// lfsx f29,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f29.f64 = double(temp.f32);
	// lfsx f28,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f12,f30,f12,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f29,f13,f12
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fadds f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fdivs f12,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fsubs f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fsubs f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fsel f13,f8,f31,f12
	ctx.f13.f64 = ctx.f8.f64 >= 0.0 ? ctx.f31.f64 : ctx.f12.f64;
	// fsel f12,f0,f1,f13
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_823A9704:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// fneg f6,f6
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x823a95d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A95D4;
loc_823A9718:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f29,f7,f0
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f30,f9,f0
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823A9768;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f31,f5
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// fctiwz f3,f6
	ctx.f3.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f3,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f3.u32);
	// fmuls f1,f4,f29
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x823A9784;
	sub_823DDE20(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// fctiwz f13,f2
	ctx.f13.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// li r12,4
	ctx.r12.s64 = 4;
	// stfiwx f13,r30,r12
	PPC_STORE_U32(ctx.r30.u32 + ctx.r12.u32, ctx.f13.u32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x823df940
	ctx.lr = 0x823A97A4;
	sub_823DF940(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// fmuls f1,f10,f29
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// bl 0x823df940
	ctx.lr = 0x823A97D0;
	sub_823DF940(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de064
	ctx.lr = 0x823A9814;
	__restfpr_24(ctx, base);
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

PPC_WEAK_FUNC(sub_823A9508) {
	__imp__sub_823A9508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9828) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823a985c
	if (!ctx.cr6.lt) goto loc_823A985C;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_823A985C:
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823a9868
	if (!ctx.cr6.gt) goto loc_823A9868;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_823A9868:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823a9874
	if (!ctx.cr6.lt) goto loc_823A9874;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_823A9874:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x823a9880
	if (!ctx.cr6.gt) goto loc_823A9880;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_823A9880:
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r10,r31,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r31.s64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A9828) {
	__imp__sub_823A9828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A98A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,216(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,4924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4924);
	// addi r31,r11,12488
	ctx.r31.s64 = ctx.r11.s64 + 12488;
	// bl 0x8236b940
	ctx.lr = 0x823A98C4;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823a98f4
	if (!ctx.cr6.lt) goto loc_823A98F4;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a98f4
	if (ctx.cr6.eq) goto loc_823A98F4;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823A98F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// bl 0x823d5f58
	ctx.lr = 0x823A9908;
	sub_823D5F58(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c8f40
	ctx.lr = 0x823A9914;
	sub_823C8F40(ctx, base);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x823a9950
	if (!ctx.cr6.gt) goto loc_823A9950;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r31,652
	ctx.r9.s64 = ctx.r31.s64 + 652;
loc_823A9934:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r29,4(r10)
	PPC_STORE_U64(ctx.r10.u32 + 4, ctx.r29.u64);
	// stwu r8,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823a9934
	if (ctx.cr6.lt) goto loc_823A9934;
loc_823A9950:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a91a0
	ctx.lr = 0x823A995C;
	sub_823A91A0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x823a9990
	if (!ctx.cr6.gt) goto loc_823A9990;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
loc_823A9970:
	// lwzu r9,108(r10)
	ea = 108 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823a9970
	if (ctx.cr6.lt) goto loc_823A9970;
loc_823A9990:
	// li r11,0
	ctx.r11.s64 = 0;
	// subfic r10,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r27.s64;
	// stw r11,5640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5640, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,5644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5644, ctx.r11.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,5648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5648, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r30,5640
	ctx.r11.s64 = ctx.r30.s64 + 5640;
	// and r31,r8,r30
	ctx.r31.u64 = ctx.r8.u64 & ctx.r30.u64;
	// bl 0x823c7d58
	ctx.lr = 0x823A99BC;
	sub_823C7D58(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r7,5692(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5692);
	// addic r5,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// lwz r6,208(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x823a99dc
	if (ctx.cr6.eq) goto loc_823A99DC;
	// bl 0x823c85c8
	ctx.lr = 0x823A99DC;
	sub_823C85C8(ctx, base);
loc_823A99DC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823a9a04
	if (ctx.cr6.eq) goto loc_823A9A04;
	// lwz r11,5692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5692);
	// lwz r10,208(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 208);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r4,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823a9a04
	if (ctx.cr6.eq) goto loc_823A9A04;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c85c8
	ctx.lr = 0x823A9A04;
	sub_823C85C8(ctx, base);
loc_823A9A04:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A9898) {
	__imp__sub_823A9898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A9A0C) {
	__imp__sub_823A9A0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A9A18;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8236b940
	ctx.lr = 0x823A9A34;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823a9a64
	if (!ctx.cr6.lt) goto loc_823A9A64;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r10,3224
	ctx.r10.s64 = ctx.r10.s64 + 3224;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9a64
	if (ctx.cr6.eq) goto loc_823A9A64;
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823A9A64:
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,84(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// bl 0x823d5f58
	ctx.lr = 0x823A9A7C;
	sub_823D5F58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8f40
	ctx.lr = 0x823A9A88;
	sub_823C8F40(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a9030
	ctx.lr = 0x823A9A9C;
	sub_823A9030(ctx, base);
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 & ctx.r28.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823a8a20
	ctx.lr = 0x823A9ABC;
	sub_823A8A20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A9A10) {
	__imp__sub_823A9A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A9AC4) {
	__imp__sub_823A9AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823A9AD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r27,r5,112
	ctx.r27.s64 = ctx.r5.s64 + 112;
	// bl 0x8236b940
	ctx.lr = 0x823A9AEC;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823a9b1c
	if (!ctx.cr6.lt) goto loc_823A9B1C;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r10,3224
	ctx.r10.s64 = ctx.r10.s64 + 3224;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9b1c
	if (ctx.cr6.eq) goto loc_823A9B1C;
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823A9B1C:
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bl 0x823d5f58
	ctx.lr = 0x823A9B34;
	sub_823D5F58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8f40
	ctx.lr = 0x823A9B40;
	sub_823C8F40(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a8f58
	ctx.lr = 0x823A9B54;
	sub_823A8F58(ctx, base);
	// subfic r11,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r29.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 & ctx.r28.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823a8a20
	ctx.lr = 0x823A9B74;
	sub_823A8A20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A9AC8) {
	__imp__sub_823A9AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A9B7C) {
	__imp__sub_823A9B7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9B80) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9bb4
	if (ctx.cr6.eq) goto loc_823A9BB4;
	// bl 0x823b1c28
	ctx.lr = 0x823A9BB4;
	sub_823B1C28(ctx, base);
loc_823A9BB4:
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r10,-24112
	ctx.r9.s64 = ctx.r10.s64 + -24112;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r3,144(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// bl 0x823c91d0
	ctx.lr = 0x823A9BDC;
	sub_823C91D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_823A9B80) {
	__imp__sub_823A9B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r1,592
	ctx.r10.s64 = ctx.r1.s64 + 592;
	// addi r8,r1,1104
	ctx.r8.s64 = ctx.r1.s64 + 1104;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// subf r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823A9C28:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r7,-512(r9)
	PPC_STORE_U16(ctx.r9.u32 + -512, ctx.r7.u16);
	// sthx r7,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u16);
	// sthx r7,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x823a9c28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A9C28;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,3224
	ctx.r10.s64 = ctx.r11.s64 + 3224;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x820c1618
	ctx.lr = 0x823A9C5C;
	sub_820C1618(ctx, base);
	// addi r1,r1,1632
	ctx.r1.s64 = ctx.r1.s64 + 1632;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823A9C00) {
	__imp__sub_823A9C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A9C6C) {
	__imp__sub_823A9C6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A9C78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9ca4
	if (ctx.cr6.eq) goto loc_823A9CA4;
	// bl 0x823b1c28
	ctx.lr = 0x823A9CA4;
	sub_823B1C28(ctx, base);
loc_823A9CA4:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r30,r11,4608
	ctx.r30.s64 = ctx.r11.s64 + 4608;
	// addi r31,r10,-29904
	ctx.r31.s64 = ctx.r10.s64 + -29904;
	// addi r8,r30,8628
	ctx.r8.s64 = ctx.r30.s64 + 8628;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,5700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5700);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823a9d04
	if (ctx.cr6.eq) goto loc_823A9D04;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r7,-2072
	ctx.r7.s64 = ctx.r7.s64 + -2072;
	// lwz r4,-26624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26624);
	// li r6,-1
	ctx.r6.s64 = -1;
	// ld r3,-16268(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16268);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823a75f8
	ctx.lr = 0x823A9D00;
	sub_823A75F8(ctx, base);
	// lwz r11,5700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5700);
loc_823A9D04:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r30,8628
	ctx.r9.s64 = ctx.r30.s64 + 8628;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A9C70) {
	__imp__sub_823A9C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823A9D2C) {
	__imp__sub_823A9D2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A9D38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9d64
	if (ctx.cr6.eq) goto loc_823A9D64;
	// bl 0x823b1c28
	ctx.lr = 0x823A9D64;
	sub_823B1C28(ctx, base);
loc_823A9D64:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r29,r11,4608
	ctx.r29.s64 = ctx.r11.s64 + 4608;
	// addi r30,r10,-29904
	ctx.r30.s64 = ctx.r10.s64 + -29904;
	// addi r8,r29,8628
	ctx.r8.s64 = ctx.r29.s64 + 8628;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,5700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5700);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823a9dc0
	if (ctx.cr6.eq) goto loc_823A9DC0;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f4,f0,f2
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fadds f3,f13,f1
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// lwz r4,-26624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26624);
	// ld r3,-16268(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16268);
	// bl 0x823a7b68
	ctx.lr = 0x823A9DBC;
	sub_823A7B68(ctx, base);
	// lwz r11,5700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5700);
loc_823A9DC0:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r29,8628
	ctx.r9.s64 = ctx.r29.s64 + 8628;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A9D30) {
	__imp__sub_823A9D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A9DF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9e1c
	if (ctx.cr6.eq) goto loc_823A9E1C;
	// bl 0x823b1c28
	ctx.lr = 0x823A9E1C;
	sub_823B1C28(ctx, base);
loc_823A9E1C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r29,r11,4608
	ctx.r29.s64 = ctx.r11.s64 + 4608;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r29,8628
	ctx.r7.s64 = ctx.r29.s64 + 8628;
	// addi r30,r10,-29904
	ctx.r30.s64 = ctx.r10.s64 + -29904;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r11,5700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5700);
	// subf. r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823a9f60
	if (ctx.cr0.lt) goto loc_823A9F60;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823a9f60
	if (!ctx.cr6.lt) goto loc_823A9F60;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f1,-18744(r8)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r8.u32 + -18744);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f2,f10,f9
	ctx.f2.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x823e1e88
	ctx.lr = 0x823A9E8C;
	sub_823E1E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,14164(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14164);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823a9ea4
	if (!ctx.cr6.gt) goto loc_823A9EA4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A9EA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// bl 0x823dde20
	ctx.lr = 0x823A9EBC;
	sub_823DDE20(ctx, base);
	// lwz r11,5764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5764);
	// lis r9,-31771
	ctx.r9.s64 = -2082144256;
	// lwz r10,5768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5768);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r11,-26624(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -26624);
	// li r6,8
	ctx.r6.s64 = 8;
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// lwz r3,8600(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8600);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// ori r10,r4,65535
	ctx.r10.u64 = ctx.r4.u64 | 65535;
	// stw r11,4816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4816, ctx.r11.u32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fctiwz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfd f8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f8.u64);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lfs f2,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// fcfid f4,f11
	ctx.f4.f64 = double(ctx.f11.s64);
	// rlwimi r10,r8,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// fadds f8,f6,f9
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// fadds f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// fmuls f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// bl 0x823a66b8
	ctx.lr = 0x823A9F60;
	sub_823A66B8(ctx, base);
loc_823A9F60:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A9DE8) {
	__imp__sub_823A9DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823A9F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823A9F80;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x823A9F88;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9fb4
	if (ctx.cr6.eq) goto loc_823A9FB4;
	// bl 0x823b1c28
	ctx.lr = 0x823A9FB4;
	sub_823B1C28(ctx, base);
loc_823A9FB4:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,-29904
	ctx.r9.s64 = ctx.r11.s64 + -29904;
	// lwz r10,-26624(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26624);
	// lwz r11,5764(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5764);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r11,5768(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5768);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r10,4816(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4816, ctx.r10.u32);
	// lbz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f28,f7,f13
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f29,f8,f0
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// beq cr6,0x823aa028
	if (ctx.cr6.eq) goto loc_823AA028;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r30,8464(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8464);
	// b 0x823aa09c
	goto loc_823AA09C;
loc_823AA028:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,4608
	ctx.r8.s64 = ctx.r10.s64 + 4608;
	// lfs f31,3100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f30,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// lwz r30,8604(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8604);
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823AA050;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fadds f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// clrlwi r28,r7,24
	ctx.r28.u64 = ctx.r7.u32 & 0xFF;
	// bl 0x823dde20
	ctx.lr = 0x823AA074;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f7.u64);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r5,r6,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF00;
	// or r4,r5,r28
	ctx.r4.u64 = ctx.r5.u64 | ctx.r28.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 | ctx.r28.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 | ctx.r28.u64;
loc_823AA09C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f6,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fadds f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f2,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x823a66b8
	ctx.lr = 0x823AA0DC;
	sub_823A66B8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x823AA0F8;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823A9F78) {
	__imp__sub_823A9F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AA0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AA0FC) {
	__imp__sub_823AA0FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AA100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823AA108;
	__savegprlr_21(ctx, base);
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,8360(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8360);
	// bl 0x823b1ca8
	ctx.lr = 0x823AA134;
	sub_823B1CA8(ctx, base);
	// lbz r6,6(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// fmuls f30,f11,f0
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// ble cr6,0x823aa444
	if (!ctx.cr6.gt) goto loc_823AA444;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// ori r7,r10,6156
	ctx.r7.u64 = ctx.r10.u64 | 6156;
	// lis r29,8176
	ctx.r29.s64 = 535822336;
	// lfs f29,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
loc_823AA198:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// bgt cr6,0x823aa1bc
	if (ctx.cr6.gt) goto loc_823AA1BC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,6152
	ctx.r9.u64 = ctx.r10.u64 | 6152;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// cmplwi cr6,r8,3072
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3072, ctx.xer);
	// ble cr6,0x823aa1d8
	if (!ctx.cr6.gt) goto loc_823AA1D8;
loc_823AA1BC:
	// bl 0x823b1c30
	ctx.lr = 0x823AA1C0;
	sub_823B1C30(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
loc_823AA1D8:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// sthx r8,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r4,r7,6152
	ctx.r4.u64 = ctx.r7.u64 | 6152;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r5,6156
	ctx.r10.u64 = ctx.r5.u64 | 6156;
	// ori r26,r11,6156
	ctx.r26.u64 = ctx.r11.u64 | 6156;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r24,r11,6156
	ctx.r24.u64 = ctx.r11.u64 | 6156;
	// ori r7,r7,6156
	ctx.r7.u64 = ctx.r7.u64 | 6156;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r5,r5,6152
	ctx.r5.u64 = ctx.r5.u64 | 6152;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// ori r25,r9,6152
	ctx.r25.u64 = ctx.r9.u64 | 6152;
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r23,r9,6152
	ctx.r23.u64 = ctx.r9.u64 | 6152;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// lis r21,1
	ctx.r21.s64 = 65536;
	// addi r22,r9,8
	ctx.r22.s64 = ctx.r9.s64 + 8;
	// sthx r10,r11,r6
	PPC_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u16);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// ori r6,r21,6152
	ctx.r6.u64 = ctx.r21.u64 | 6152;
	// lwzx r10,r31,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r21,r9,10
	ctx.r21.s64 = ctx.r9.s64 + 10;
	// sthx r11,r5,r3
	PPC_STORE_U16(ctx.r5.u32 + ctx.r3.u32, ctx.r11.u16);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwzx r11,r31,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwzx r10,r31,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// ori r4,r4,6156
	ctx.r4.u64 = ctx.r4.u64 | 6156;
	// sthx r9,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
	// ori r7,r7,6156
	ctx.r7.u64 = ctx.r7.u64 | 6156;
	// lwzx r10,r31,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwzx r11,r31,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r22
	PPC_STORE_U16(ctx.r11.u32 + ctx.r22.u32, ctx.r10.u16);
	// ori r5,r5,6152
	ctx.r5.u64 = ctx.r5.u64 | 6152;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lwzx r10,r31,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// ori r3,r3,6152
	ctx.r3.u64 = ctx.r3.u64 | 6152;
	// sthx r6,r8,r21
	PPC_STORE_U16(ctx.r8.u32 + ctx.r21.u32, ctx.r6.u16);
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// fsubs f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// stfsx f10,r10,r31
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r8,r3,6156
	ctx.r8.u64 = ctx.r3.u64 | 6156;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r6,r7,6156
	ctx.r6.u64 = ctx.r7.u64 | 6156;
	// ori r7,r3,6156
	ctx.r7.u64 = ctx.r3.u64 | 6156;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f29,20(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f29,24(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lfs f7,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// ori r4,r5,6156
	ctx.r4.u64 = ctx.r5.u64 | 6156;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fsubs f6,f9,f30
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f30.f64));
	// fadds f5,f8,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r5,r8,6156
	ctx.r5.u64 = ctx.r8.u64 | 6156;
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// stfs f29,20(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f0,f4,f30
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fadds f1,f2,f30
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f31,20(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fadds f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwzu r10,16(r30)
	ea = 16 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f31,20(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f29,24(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lhz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823aa198
	if (ctx.cr6.lt) goto loc_823AA198;
loc_823AA444:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AA100) {
	__imp__sub_823AA100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AA458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x823AA460;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823de000
	ctx.lr = 0x823AA468;
	__savefpr_18(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,8368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8368);
	// bl 0x823b1ca8
	ctx.lr = 0x823AA488;
	sub_823B1CA8(ctx, base);
	// bl 0x823a64e8
	ctx.lr = 0x823AA48C;
	sub_823A64E8(ctx, base);
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// lbz r4,6(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r8,r9,-29904
	ctx.r8.s64 = ctx.r9.s64 + -29904;
	// lhz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// lwz r10,5768(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5768);
	// lwz r11,5764(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5764);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r11,5652(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5652);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// addi r26,r11,128
	ctx.r26.s64 = ctx.r11.s64 + 128;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f22,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f20.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f6,f11
	ctx.f6.f64 = double(float(ctx.f11.f64));
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fdivs f19,f7,f10
	ctx.f19.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// fdivs f18,f7,f6
	ctx.f18.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// ble cr6,0x823aa850
	if (!ctx.cr6.gt) goto loc_823AA850;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// ori r6,r10,6156
	ctx.r6.u64 = ctx.r10.u64 | 6156;
	// lfs f24,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f24.f64 = double(temp.f32);
	// lis r29,8176
	ctx.r29.s64 = 535822336;
	// lfs f25,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f25.f64 = double(temp.f32);
	// lfs f23,5804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5804);
	ctx.f23.f64 = double(temp.f32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
loc_823AA53C:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f20
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f20.f64));
	// fsubs f11,f13,f21
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f21.f64));
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f22
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f22.f64));
	// lfs f7,24(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// lfs f4,32(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,28(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f9,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f7,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f1,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f12,f4
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f31,16(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f29,20(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,56(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// lfs f4,60(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// lfs f28,48(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,52(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f0,f6,f8,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f12,f5,f12,f10
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f13,f8,f7
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f9,f9,f8,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f7,f2,f11,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f6,f8,f1,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f5,f11,f31,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmadds f3,f29,f11,f9
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fadds f31,f7,f4
	ctx.f31.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fadds f2,f6,f30
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// fadds f29,f5,f28
	ctx.f29.f64 = double(float(ctx.f5.f64 + ctx.f28.f64));
	// fadds f28,f3,f27
	ctx.f28.f64 = double(float(ctx.f3.f64 + ctx.f27.f64));
	// fmuls f27,f31,f19
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f19.f64));
	// fmuls f26,f31,f18
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f18.f64));
	// fmadds f30,f31,f23,f2
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f23.f64 + ctx.f2.f64));
	// bgt cr6,0x823aa604
	if (ctx.cr6.gt) goto loc_823AA604;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,6152
	ctx.r9.u64 = ctx.r10.u64 | 6152;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// cmplwi cr6,r8,3072
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3072, ctx.xer);
	// ble cr6,0x823aa620
	if (!ctx.cr6.gt) goto loc_823AA620;
loc_823AA604:
	// bl 0x823b1c30
	ctx.lr = 0x823AA608;
	sub_823B1C30(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
loc_823AA620:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// fsubs f0,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f27.f64));
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// fsubs f13,f28,f26
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f26.f64));
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// sthx r8,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// fadds f12,f26,f28
	ctx.f12.f64 = double(float(ctx.f26.f64 + ctx.f28.f64));
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r4,r7,6152
	ctx.r4.u64 = ctx.r7.u64 | 6152;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r5,6156
	ctx.r10.u64 = ctx.r5.u64 | 6156;
	// ori r25,r11,6156
	ctx.r25.u64 = ctx.r11.u64 | 6156;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r23,r11,6156
	ctx.r23.u64 = ctx.r11.u64 | 6156;
	// ori r7,r7,6156
	ctx.r7.u64 = ctx.r7.u64 | 6156;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r5,r5,6152
	ctx.r5.u64 = ctx.r5.u64 | 6152;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// ori r24,r9,6152
	ctx.r24.u64 = ctx.r9.u64 | 6152;
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r22,r9,6152
	ctx.r22.u64 = ctx.r9.u64 | 6152;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// lis r20,1
	ctx.r20.s64 = 65536;
	// addi r21,r9,8
	ctx.r21.s64 = ctx.r9.s64 + 8;
	// sthx r10,r11,r6
	PPC_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u16);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// ori r6,r20,6152
	ctx.r6.u64 = ctx.r20.u64 | 6152;
	// lwzx r10,r31,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r20,r9,10
	ctx.r20.s64 = ctx.r9.s64 + 10;
	// sthx r11,r5,r3
	PPC_STORE_U16(ctx.r5.u32 + ctx.r3.u32, ctx.r11.u16);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwzx r11,r31,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwzx r10,r31,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// ori r4,r4,6156
	ctx.r4.u64 = ctx.r4.u64 | 6156;
	// sthx r9,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
	// ori r7,r7,6156
	ctx.r7.u64 = ctx.r7.u64 | 6156;
	// lwzx r10,r31,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwzx r11,r31,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r21
	PPC_STORE_U16(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u16);
	// ori r5,r5,6152
	ctx.r5.u64 = ctx.r5.u64 | 6152;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lwzx r10,r31,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// ori r3,r3,6152
	ctx.r3.u64 = ctx.r3.u64 | 6152;
	// sthx r6,r8,r20
	PPC_STORE_U16(ctx.r8.u32 + ctx.r20.u32, ctx.r6.u16);
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stfsx f0,r10,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r7,r3,6156
	ctx.r7.u64 = ctx.r3.u64 | 6156;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stfs f25,20(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stfs f25,24(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// ori r6,r10,6156
	ctx.r6.u64 = ctx.r10.u64 | 6156;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// fadds f11,f27,f29
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ori r7,r3,6156
	ctx.r7.u64 = ctx.r3.u64 | 6156;
	// ori r4,r5,6156
	ctx.r4.u64 = ctx.r5.u64 | 6156;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// ori r5,r8,6156
	ctx.r5.u64 = ctx.r8.u64 | 6156;
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// stfs f24,24(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f25,20(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f24,20(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f24,24(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stfs f24,20(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f25,24(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lhz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823aa53c
	if (ctx.cr6.lt) goto loc_823AA53C;
loc_823AA850:
	// bl 0x823b1c28
	ctx.lr = 0x823AA854;
	sub_823B1C28(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823de04c
	ctx.lr = 0x823AA860;
	__restfpr_18(ctx, base);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AA458) {
	__imp__sub_823AA458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AA864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AA864) {
	__imp__sub_823AA864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AA868) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823aa894
	if (!ctx.cr6.eq) goto loc_823AA894;
	// bl 0x823aa100
	ctx.lr = 0x823AA890;
	sub_823AA100(ctx, base);
	// b 0x823aa898
	goto loc_823AA898;
loc_823AA894:
	// bl 0x823aa458
	ctx.lr = 0x823AA898;
	sub_823AA458(ctx, base);
loc_823AA898:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_823AA868) {
	__imp__sub_823AA868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AA8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AA8BC) {
	__imp__sub_823AA8BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AA8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x823AA8C8;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,8360(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8360);
	// bl 0x823b1ca8
	ctx.lr = 0x823AA8F8;
	sub_823B1CA8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x823aac1c
	if (!ctx.cr6.gt) goto loc_823AAC1C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r31,-20
	ctx.r30.s64 = ctx.r31.s64 + -20;
	// lfs f30,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lis r29,8176
	ctx.r29.s64 = 535822336;
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// lfs f29,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
loc_823AA928:
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x823AA950;
	sub_822D4AC8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f8,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// ori r10,r11,6156
	ctx.r10.u64 = ctx.r11.u64 | 6156;
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f8,f29
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f7,f29
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,2048
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2048, ctx.xer);
	// bgt cr6,0x823aa998
	if (ctx.cr6.gt) goto loc_823AA998;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,6152
	ctx.r9.u64 = ctx.r10.u64 | 6152;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// cmplwi cr6,r8,3072
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3072, ctx.xer);
	// ble cr6,0x823aa9bc
	if (!ctx.cr6.gt) goto loc_823AA9BC;
loc_823AA998:
	// bl 0x823b1c30
	ctx.lr = 0x823AA99C;
	sub_823B1C30(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
loc_823AA9BC:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// sthx r8,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r4,r7,6152
	ctx.r4.u64 = ctx.r7.u64 | 6152;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r5,6156
	ctx.r10.u64 = ctx.r5.u64 | 6156;
	// ori r27,r11,6156
	ctx.r27.u64 = ctx.r11.u64 | 6156;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r25,r11,6156
	ctx.r25.u64 = ctx.r11.u64 | 6156;
	// ori r7,r7,6156
	ctx.r7.u64 = ctx.r7.u64 | 6156;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r5,r5,6152
	ctx.r5.u64 = ctx.r5.u64 | 6152;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// ori r26,r9,6152
	ctx.r26.u64 = ctx.r9.u64 | 6152;
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r24,r9,6152
	ctx.r24.u64 = ctx.r9.u64 | 6152;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// lis r22,1
	ctx.r22.s64 = 65536;
	// addi r23,r9,8
	ctx.r23.s64 = ctx.r9.s64 + 8;
	// sthx r10,r11,r6
	PPC_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u16);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// ori r6,r22,6152
	ctx.r6.u64 = ctx.r22.u64 | 6152;
	// lwzx r10,r31,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r22,r9,10
	ctx.r22.s64 = ctx.r9.s64 + 10;
	// sthx r11,r5,r3
	PPC_STORE_U16(ctx.r5.u32 + ctx.r3.u32, ctx.r11.u16);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwzx r10,r31,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// ori r4,r4,6156
	ctx.r4.u64 = ctx.r4.u64 | 6156;
	// sthx r9,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
	// ori r7,r7,6156
	ctx.r7.u64 = ctx.r7.u64 | 6156;
	// lwzx r10,r31,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwzx r11,r31,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r23
	PPC_STORE_U16(ctx.r11.u32 + ctx.r23.u32, ctx.r10.u16);
	// ori r5,r5,6152
	ctx.r5.u64 = ctx.r5.u64 | 6152;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lwzx r10,r31,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// ori r3,r3,6152
	ctx.r3.u64 = ctx.r3.u64 | 6152;
	// sthx r6,r8,r22
	PPC_STORE_U16(ctx.r8.u32 + ctx.r22.u32, ctx.r6.u16);
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// lfs f11,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// fsubs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfsx f8,r10,r31
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// ori r8,r3,6156
	ctx.r8.u64 = ctx.r3.u64 | 6156;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r6,r7,6156
	ctx.r6.u64 = ctx.r7.u64 | 6156;
	// ori r7,r3,6156
	ctx.r7.u64 = ctx.r3.u64 | 6156;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f30,20(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f30,24(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lfs f7,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f5,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f6,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsubs f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// stfs f30,20(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lfs f2,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fadds f10,f2,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f12,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// ori r4,r5,6156
	ctx.r4.u64 = ctx.r5.u64 | 6156;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ori r5,r8,6156
	ctx.r5.u64 = ctx.r8.u64 | 6156;
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f31,20(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lfs f9,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f8,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f7,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fadds f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwzu r10,32(r30)
	ea = 32 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f31,20(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f30,24(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bne 0x823aa928
	if (!ctx.cr0.eq) goto loc_823AA928;
loc_823AAC1C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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
}

PPC_WEAK_FUNC(sub_823AA8C0) {
	__imp__sub_823AA8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AAC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823AAC38;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823ddff0
	ctx.lr = 0x823AAC40;
	__savefpr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// beq cr6,0x823aac6c
	if (ctx.cr6.eq) goto loc_823AAC6C;
	// lwz r3,8372(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8372);
	// b 0x823aac70
	goto loc_823AAC70;
loc_823AAC6C:
	// lwz r3,8376(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8376);
loc_823AAC70:
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823b1ca8
	ctx.lr = 0x823AAC7C;
	sub_823B1CA8(ctx, base);
	// bl 0x823a64e8
	ctx.lr = 0x823AAC80;
	sub_823A64E8(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// addi r9,r11,-29904
	ctx.r9.s64 = ctx.r11.s64 + -29904;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r11,5764(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5764);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,5768(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5768);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r11,5652(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5652);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// addi r27,r11,128
	ctx.r27.s64 = ctx.r11.s64 + 128;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f17,256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f17.f64 = double(temp.f32);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// lfs f16,260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f15.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f14,f12,f6
	ctx.f14.f64 = double(float(ctx.f12.f64 / ctx.f6.f64));
	// fdivs f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ble cr6,0x823ab0d0
	if (!ctx.cr6.gt) goto loc_823AB0D0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// lis r29,8176
	ctx.r29.s64 = 535822336;
	// lfs f18,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f18.f64 = double(temp.f32);
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// lfs f19,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f19.f64 = double(temp.f32);
loc_823AAD14:
	// lfs f0,-24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f13,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f16
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f16.f64));
	// fsubs f11,f13,f16
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f16.f64));
	// lfs f6,-12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,28(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f4,f6,f17
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f17.f64));
	// lfs f7,-28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f7,f17
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f17.f64));
	// lfs f9,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f27,24(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f27.f64 = double(temp.f32);
	// lfs f1,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f0,-20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f7,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f30,f10,f11
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f23,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f31,32(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f29,36(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f28,44(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f12,f27,f12
	ctx.f12.f64 = double(float(ctx.f27.f64 * ctx.f12.f64));
	// lfs f26,48(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f11,f27,f11
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// lfs f27,40(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f7,f7,f15
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f15.f64));
	// lfs f25,52(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f0,f0,f15
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f15.f64));
	// lfs f24,60(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f6,f1,f5,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f6.f64));
	// lfs f22,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f13,f2,f5,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f30,f3,f4,f30
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f30.f64));
	// fmadds f1,f1,f4,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f8.f64));
	// fmadds f10,f3,f5,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f9,f2,f4,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f8,f23,f5,f12
	ctx.f8.f64 = double(float(ctx.f23.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fmadds f5,f23,f4,f11
	ctx.f5.f64 = double(float(ctx.f23.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fmadds f3,f28,f0,f6
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f4,f29,f0,f13
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f2,f31,f7,f30
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f7.f64 + ctx.f30.f64));
	// fmadds f1,f28,f7,f1
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f13,f31,f0,f10
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f12,f29,f7,f9
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f11,f27,f0,f8
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f10,f27,f7,f5
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fadds f31,f3,f24
	ctx.f31.f64 = double(float(ctx.f3.f64 + ctx.f24.f64));
	// fadds f28,f4,f25
	ctx.f28.f64 = double(float(ctx.f4.f64 + ctx.f25.f64));
	// fadds f27,f2,f26
	ctx.f27.f64 = double(float(ctx.f2.f64 + ctx.f26.f64));
	// fadds f30,f1,f24
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f24.f64));
	// fadds f29,f13,f26
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// fadds f26,f12,f25
	ctx.f26.f64 = double(float(ctx.f12.f64 + ctx.f25.f64));
	// fadds f25,f11,f22
	ctx.f25.f64 = double(float(ctx.f11.f64 + ctx.f22.f64));
	// fadds f24,f10,f22
	ctx.f24.f64 = double(float(ctx.f10.f64 + ctx.f22.f64));
	// fmuls f9,f27,f31
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fmuls f8,f30,f28
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmsubs f7,f30,f29,f9
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f29.f64 - ctx.f9.f64));
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmsubs f6,f26,f31,f8
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f31.f64 - ctx.f8.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x823AAE24;
	sub_822D4AC8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f4,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// ori r10,r11,6156
	ctx.r10.u64 = ctx.r11.u64 | 6156;
	// fmuls f0,f4,f14
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f14.f64));
	// lfs f3,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f23,f0,f31
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,2048
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2048, ctx.xer);
	// fmuls f22,f13,f31
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f21,f0,f30
	ctx.f21.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f20,f13,f30
	ctx.f20.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// bgt cr6,0x823aae80
	if (ctx.cr6.gt) goto loc_823AAE80;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,6152
	ctx.r9.u64 = ctx.r10.u64 | 6152;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r10,6
	ctx.r8.s64 = ctx.r10.s64 + 6;
	// cmplwi cr6,r8,3072
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3072, ctx.xer);
	// ble cr6,0x823aae9c
	if (!ctx.cr6.gt) goto loc_823AAE9C;
loc_823AAE80:
	// bl 0x823b1c30
	ctx.lr = 0x823AAE84;
	sub_823B1C30(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
loc_823AAE9C:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// fsubs f0,f29,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f23.f64));
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// fsubs f13,f28,f22
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f22.f64));
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// sthx r8,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// fsubs f12,f27,f21
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f21.f64));
	// lis r7,1
	ctx.r7.s64 = 65536;
	// fsubs f11,f26,f20
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f20.f64));
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// fadds f10,f21,f27
	ctx.f10.f64 = double(float(ctx.f21.f64 + ctx.f27.f64));
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r4,r7,6152
	ctx.r4.u64 = ctx.r7.u64 | 6152;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r5,6156
	ctx.r10.u64 = ctx.r5.u64 | 6156;
	// ori r26,r11,6156
	ctx.r26.u64 = ctx.r11.u64 | 6156;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r24,r11,6156
	ctx.r24.u64 = ctx.r11.u64 | 6156;
	// ori r7,r7,6156
	ctx.r7.u64 = ctx.r7.u64 | 6156;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r5,r5,6152
	ctx.r5.u64 = ctx.r5.u64 | 6152;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// ori r25,r9,6152
	ctx.r25.u64 = ctx.r9.u64 | 6152;
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r23,r9,6152
	ctx.r23.u64 = ctx.r9.u64 | 6152;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// lis r21,1
	ctx.r21.s64 = 65536;
	// addi r22,r9,8
	ctx.r22.s64 = ctx.r9.s64 + 8;
	// sthx r10,r11,r6
	PPC_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u16);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// ori r6,r21,6152
	ctx.r6.u64 = ctx.r21.u64 | 6152;
	// lwzx r10,r31,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r21,r9,10
	ctx.r21.s64 = ctx.r9.s64 + 10;
	// sthx r11,r5,r3
	PPC_STORE_U16(ctx.r5.u32 + ctx.r3.u32, ctx.r11.u16);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwzx r11,r31,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwzx r10,r31,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// ori r4,r4,6156
	ctx.r4.u64 = ctx.r4.u64 | 6156;
	// sthx r9,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
	// ori r7,r7,6156
	ctx.r7.u64 = ctx.r7.u64 | 6156;
	// lwzx r10,r31,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwzx r11,r31,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r22
	PPC_STORE_U16(ctx.r11.u32 + ctx.r22.u32, ctx.r10.u16);
	// ori r5,r5,6152
	ctx.r5.u64 = ctx.r5.u64 | 6152;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lwzx r10,r31,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// ori r3,r3,6152
	ctx.r3.u64 = ctx.r3.u64 | 6152;
	// sthx r6,r8,r21
	PPC_STORE_U16(ctx.r8.u32 + ctx.r21.u32, ctx.r6.u16);
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stfsx f0,r10,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f25,8(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r26,-16(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
	// ori r7,r3,6156
	ctx.r7.u64 = ctx.r3.u64 | 6156;
	// stfs f19,20(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// ori r6,r10,6156
	ctx.r6.u64 = ctx.r10.u64 | 6156;
	// stfs f19,24(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// fadds f9,f20,f26
	ctx.f9.f64 = double(float(ctx.f20.f64 + ctx.f26.f64));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fadds f8,f23,f29
	ctx.f8.f64 = double(float(ctx.f23.f64 + ctx.f29.f64));
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// fadds f7,f22,f28
	ctx.f7.f64 = double(float(ctx.f22.f64 + ctx.f28.f64));
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// ori r4,r5,6156
	ctx.r4.u64 = ctx.r5.u64 | 6156;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stfs f24,8(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stfs f19,20(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f18,24(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r3,r3,6156
	ctx.r3.u64 = ctx.r3.u64 | 6156;
	// ori r5,r5,6156
	ctx.r5.u64 = ctx.r5.u64 | 6156;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f24,8(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stfs f18,20(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f18,24(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f25,8(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r6,-16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// stfs f18,20(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f19,24(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bne 0x823aad14
	if (!ctx.cr0.eq) goto loc_823AAD14;
loc_823AB0D0:
	// bl 0x823b1c28
	ctx.lr = 0x823AB0D4;
	sub_823B1C28(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de03c
	ctx.lr = 0x823AB0E0;
	__restfpr_14(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AAC30) {
	__imp__sub_823AAC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AB0E4) {
	__imp__sub_823AB0E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB0E8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// bne cr6,0x823ab124
	if (!ctx.cr6.eq) goto loc_823AB124;
	// bl 0x823aa8c0
	ctx.lr = 0x823AB120;
	sub_823AA8C0(ctx, base);
	// b 0x823ab12c
	goto loc_823AB12C;
loc_823AB124:
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x823aac30
	ctx.lr = 0x823AB12C;
	sub_823AAC30(ctx, base);
loc_823AB12C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_823AB0E8) {
	__imp__sub_823AB0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823AB158;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// ori r9,r10,6156
	ctx.r9.u64 = ctx.r10.u64 | 6156;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ab19c
	if (ctx.cr6.eq) goto loc_823AB19C;
	// bl 0x823b1c28
	ctx.lr = 0x823AB19C;
	sub_823B1C28(ctx, base);
loc_823AB19C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r11,-29904
	ctx.r3.s64 = ctx.r11.s64 + -29904;
	// bne cr6,0x823ab1b8
	if (!ctx.cr6.eq) goto loc_823AB1B8;
	// bl 0x823d4060
	ctx.lr = 0x823AB1B4;
	sub_823D4060(ctx, base);
	// b 0x823ab1bc
	goto loc_823AB1BC;
loc_823AB1B8:
	// bl 0x823d41b0
	ctx.lr = 0x823AB1BC;
	sub_823D41B0(ctx, base);
loc_823AB1BC:
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b1ca8
	ctx.lr = 0x823AB1CC;
	sub_823B1CA8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// extsh r30,r28
	ctx.r30.s64 = ctx.r28.s16;
	// ori r10,r11,6156
	ctx.r10.u64 = ctx.r11.u64 | 6156;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,2048
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2048, ctx.xer);
	// bgt cr6,0x823ab204
	if (ctx.cr6.gt) goto loc_823AB204;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// extsh r10,r26
	ctx.r10.s64 = ctx.r26.s16;
	// ori r9,r11,6152
	ctx.r9.u64 = ctx.r11.u64 | 6152;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,3072
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3072, ctx.xer);
	// ble cr6,0x823ab208
	if (!ctx.cr6.gt) goto loc_823AB208;
loc_823AB204:
	// bl 0x823b1c30
	ctx.lr = 0x823AB208;
	sub_823B1C30(ctx, base);
loc_823AB208:
	// extsh r3,r26
	ctx.r3.s64 = ctx.r26.s16;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823ab25c
	if (!ctx.cr6.gt) goto loc_823AB25C;
	// addi r10,r25,-2
	ctx.r10.s64 = ctx.r25.s64 + -2;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_823AB220:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r8,6152
	ctx.r6.u64 = ctx.r8.u64 | 6152;
	// ori r5,r7,6156
	ctx.r5.u64 = ctx.r7.u64 | 6156;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// lwzx r9,r31,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwzx r8,r31,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r8,r7,r4
	PPC_STORE_U16(ctx.r7.u32 + ctx.r4.u32, ctx.r8.u16);
	// bdnz 0x823ab220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823AB220;
loc_823AB25C:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x823ab350
	if (!ctx.cr6.gt) goto loc_823AB350;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lis r4,-31852
	ctx.r4.s64 = -2087452672;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lwz r9,284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r4,-30336
	ctx.r29.s64 = ctx.r4.s64 + -30336;
	// addi r11,r11,-5648
	ctx.r11.s64 = ctx.r11.s64 + -5648;
	// addi r5,r5,-5664
	ctx.r5.s64 = ctx.r5.s64 + -5664;
	// addi r8,r9,-8
	ctx.r8.s64 = ctx.r9.s64 + -8;
	// addi r10,r24,-16
	ctx.r10.s64 = ctx.r24.s64 + -16;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r23,-12
	ctx.r9.s64 = ctx.r23.s64 + -12;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,16
	ctx.r4.s64 = 16;
	// lvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823AB2AC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f13,20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lfsu f0,12(r9)
	ea = 12 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lis r29,1
	ctx.r29.s64 = 65536;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ori r29,r29,6156
	ctx.r29.u64 = ctx.r29.u64 | 6156;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvlx128 v61,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lfs f10,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f8,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// vor128 v60,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lfsu f0,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// vand128 v0,v60,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// vmaddfp v13,v0,v11,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stfs f8,4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// vpkd3d128 v0,v13,2,1,3
	ctx.fpscr.enableFlushModeUnconditional();
	vTemp.s32[0] = int32_t(ctx.v13.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v13.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v13.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v13.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v0.u32[3] = temp.u32;
	// vspltw128 v59,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx128 v59,r0,r28
	ea = (ctx.r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwzu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// bdnz 0x823ab2ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823AB2AC;
loc_823AB350:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,6152
	ctx.r9.u64 = ctx.r11.u64 | 6152;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r5,r7,6152
	ctx.r5.u64 = ctx.r7.u64 | 6152;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// ori r4,r6,6156
	ctx.r4.u64 = ctx.r6.u64 | 6156;
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r10,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// bl 0x823b1c28
	ctx.lr = 0x823AB38C;
	sub_823B1C28(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AB150) {
	__imp__sub_823AB150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AB394) {
	__imp__sub_823AB394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823AB3A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lhz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// lhz r6,14(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lbz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r31,r10,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r7
	ctx.r30.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 + ctx.r7.u64;
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r31,r30,r10
	ctx.r31.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x823ab150
	ctx.lr = 0x823AB40C;
	sub_823AB150(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AB398) {
	__imp__sub_823AB398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AB424) {
	__imp__sub_823AB424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB428) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ab464
	if (ctx.cr6.eq) goto loc_823AB464;
	// bl 0x823b1c28
	ctx.lr = 0x823AB464;
	sub_823B1C28(ctx, base);
loc_823AB464:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,-29904
	ctx.r10.s64 = ctx.r11.s64 + -29904;
	// lhz r11,5414(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 5414);
	// stfs f0,4144(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4144, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4148(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4148, temp.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4152(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4152, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// sth r9,5414(r10)
	PPC_STORE_U16(ctx.r10.u32 + 5414, ctx.r9.u16);
	// stfs f0,4156(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4156, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_823AB428) {
	__imp__sub_823AB428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB4C0) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ab4f4
	if (ctx.cr6.eq) goto loc_823AB4F4;
	// bl 0x823b1c28
	ctx.lr = 0x823AB4F4;
	sub_823B1C28(ctx, base);
loc_823AB4F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r3,r10,-29904
	ctx.r3.s64 = ctx.r10.s64 + -29904;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x823c8d28
	ctx.lr = 0x823AB508;
	sub_823C8D28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_823AB4C0) {
	__imp__sub_823AB4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AB52C) {
	__imp__sub_823AB52C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB530) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ab564
	if (ctx.cr6.eq) goto loc_823AB564;
	// bl 0x823b1c28
	ctx.lr = 0x823AB564;
	sub_823B1C28(ctx, base);
loc_823AB564:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,-24112
	ctx.r3.s64 = ctx.r11.s64 + -24112;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,2844(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2844);
	// lwz r8,2836(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2836);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// blt cr6,0x823ab5a0
	if (ctx.cr6.lt) goto loc_823AB5A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823AB5A0:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// bge cr6,0x823ab5b0
	if (!ctx.cr6.lt) goto loc_823AB5B0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_823AB5B0:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823ab5bc
	if (!ctx.cr6.lt) goto loc_823AB5BC;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_823AB5BC:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823ab5c8
	if (!ctx.cr6.lt) goto loc_823AB5C8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_823AB5C8:
	// lwz r10,2848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2848);
	// lwz r9,2840(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2840);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bge cr6,0x823ab5e4
	if (!ctx.cr6.lt) goto loc_823AB5E4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_823AB5E4:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ab5f0
	if (ctx.cr6.lt) goto loc_823AB5F0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823AB5F0:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ab5fc
	if (!ctx.cr6.lt) goto loc_823AB5FC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_823AB5FC:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ab608
	if (ctx.cr6.lt) goto loc_823AB608;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823AB608:
	// subf r9,r5,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r5.s64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x823c9578
	ctx.lr = 0x823AB628;
	sub_823C9578(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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

PPC_WEAK_FUNC(sub_823AB530) {
	__imp__sub_823AB530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AB64C) {
	__imp__sub_823AB64C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB650) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ab684
	if (ctx.cr6.eq) goto loc_823AB684;
	// bl 0x823b1c28
	ctx.lr = 0x823AB684;
	sub_823B1C28(ctx, base);
loc_823AB684:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r11,-24112
	ctx.r3.s64 = ctx.r11.s64 + -24112;
	// bl 0x823c95c8
	ctx.lr = 0x823AB690;
	sub_823C95C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_823AB650) {
	__imp__sub_823AB650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AB6B4) {
	__imp__sub_823AB6B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB6B8) {
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
	// bl 0x822e76c8
	ctx.lr = 0x823AB6D8;
	sub_822E76C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x823ab6fc
	if (!ctx.cr6.lt) goto loc_823AB6FC;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-18736
	ctx.r8.s64 = ctx.r10.s64 + -18736;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// b 0x823ab738
	goto loc_823AB738;
loc_823AB6FC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// beq cr6,0x823ab728
	if (ctx.cr6.eq) goto loc_823AB728;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// beq cr6,0x823ab718
	if (ctx.cr6.eq) goto loc_823AB718;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x823ab734
	goto loc_823AB734;
loc_823AB718:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lwz r11,660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	// b 0x823ab734
	goto loc_823AB734;
loc_823AB728:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lwz r11,656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 656);
loc_823AB734:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_823AB738:
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

PPC_WEAK_FUNC(sub_823AB6B8) {
	__imp__sub_823AB6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// fmr f9,f3
	ctx.f9.f64 = ctx.f3.f64;
	// fmr f10,f4
	ctx.f10.f64 = ctx.f4.f64;
	// fmr f12,f5
	ctx.f12.f64 = ctx.f5.f64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// bne cr6,0x823ab7a0
	if (!ctx.cr6.eq) goto loc_823AB7A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,5484
	ctx.r10.s64 = ctx.r11.s64 + 5484;
	// addi r11,r9,12168
	ctx.r11.s64 = ctx.r9.s64 + 12168;
	// lfs f8,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// b 0x823ab7c0
	goto loc_823AB7C0;
loc_823AB7A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// addi r10,r10,5484
	ctx.r10.s64 = ctx.r10.s64 + 5484;
	// lfs f8,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f7,f6
	ctx.f7.f64 = ctx.f6.f64;
loc_823AB7C0:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// li r9,6
	ctx.r9.s64 = 6;
	// lbz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// lwz r3,3(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3);
	// mullw r11,r10,r5
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// lfs f0,2416(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// mullw r11,r9,r5
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r11,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 5;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f4,128(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f3,128(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f31,f3,f12
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmadds f13,f11,f13,f4
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fnmsubs f2,f13,f0,f2
	ctx.f2.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f2.f64)));
	// bl 0x823a6c00
	ctx.lr = 0x823AB86C;
	sub_823A6C00(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB750) {
	__imp__sub_823AB750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AB884) {
	__imp__sub_823AB884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB888) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x823ab8a0
	if (ctx.cr6.lt) goto loc_823AB8A0;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bgt cr6,0x823ab8a0
	if (ctx.cr6.gt) goto loc_823AB8A0;
loc_823AB898:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823AB8A0:
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// blt cr6,0x823ab8b0
	if (ctx.cr6.lt) goto loc_823AB8B0;
	// cmplwi cr6,r3,23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 23, ctx.xer);
	// ble cr6,0x823ab898
	if (!ctx.cr6.gt) goto loc_823AB898;
loc_823AB8B0:
	// cmplwi cr6,r3,28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 28, ctx.xer);
	// blt cr6,0x823ab8c0
	if (ctx.cr6.lt) goto loc_823AB8C0;
	// cmplwi cr6,r3,31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 31, ctx.xer);
	// ble cr6,0x823ab898
	if (!ctx.cr6.gt) goto loc_823AB898;
loc_823AB8C0:
	// cmplwi cr6,r3,188
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 188, ctx.xer);
	// beq cr6,0x823ab898
	if (ctx.cr6.eq) goto loc_823AB898;
	// addi r11,r3,-189
	ctx.r11.s64 = ctx.r3.s64 + -189;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB888) {
	__imp__sub_823AB888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB8D8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x823ab8f4
	if (ctx.cr6.lt) goto loc_823AB8F4;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x823ab8f4
	if (ctx.cr6.gt) goto loc_823AB8F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823ab940
	goto loc_823AB940;
loc_823AB8F4:
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// blt cr6,0x823ab90c
	if (ctx.cr6.lt) goto loc_823AB90C;
	// cmplwi cr6,r4,23
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 23, ctx.xer);
	// bgt cr6,0x823ab90c
	if (ctx.cr6.gt) goto loc_823AB90C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823ab940
	goto loc_823AB940;
loc_823AB90C:
	// cmplwi cr6,r4,28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 28, ctx.xer);
	// blt cr6,0x823ab924
	if (ctx.cr6.lt) goto loc_823AB924;
	// cmplwi cr6,r4,31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 31, ctx.xer);
	// bgt cr6,0x823ab924
	if (ctx.cr6.gt) goto loc_823AB924;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823ab940
	goto loc_823AB940;
loc_823AB924:
	// cmplwi cr6,r4,188
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 188, ctx.xer);
	// bne cr6,0x823ab934
	if (!ctx.cr6.eq) goto loc_823AB934;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823ab940
	goto loc_823AB940;
loc_823AB934:
	// addi r11,r4,-189
	ctx.r11.s64 = ctx.r4.s64 + -189;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_823AB940:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 20);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB8D8) {
	__imp__sub_823AB8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AB964) {
	__imp__sub_823AB964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AB968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fmr f9,f5
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f5.f64;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823ab9a4
	if (!ctx.cr6.eq) goto loc_823AB9A4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823ab9a8
	if (ctx.cr6.eq) goto loc_823AB9A8;
loc_823AB9A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823AB9A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ab9d0
	if (ctx.cr6.eq) goto loc_823AB9D0;
	// li r3,57
	ctx.r3.s64 = 57;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x823ddd78
	ctx.lr = 0x823AB9C0;
	sub_823DDD78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823AB9D0:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r8,6
	ctx.r8.s64 = 6;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lfs f8,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x823a6c00
	ctx.lr = 0x823AB9F8;
	sub_823A6C00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AB968) {
	__imp__sub_823AB968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823ABA10;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de020
	ctx.lr = 0x823ABA18;
	__savefpr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// fmr f26,f5
	ctx.f26.f64 = ctx.f5.f64;
	// fmr f31,f6
	ctx.f31.f64 = ctx.f6.f64;
	// bl 0x82132148
	ctx.lr = 0x823ABA44;
	sub_82132148(ctx, base);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823abae0
	if (!ctx.cr6.eq) goto loc_823ABAE0;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8238b430
	ctx.lr = 0x823ABA68;
	sub_8238B430(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,284(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x823ab8d8
	ctx.lr = 0x823ABA78;
	sub_823AB8D8(ctx, base);
	// lbz r4,5(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r8,3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lbz r11,6(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// fmr f6,f27
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f27.f64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f2,f9
	ctx.f2.f64 = double(float(ctx.f9.f64));
	// fmuls f4,f8,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f3,f7,f26
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f26.f64));
	// fmadds f2,f2,f31,f29
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f29.f64));
	// bl 0x823ab968
	ctx.lr = 0x823ABAE0;
	sub_823AB968(ctx, base);
loc_823ABAE0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de06c
	ctx.lr = 0x823ABAEC;
	__restfpr_26(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823ABA08) {
	__imp__sub_823ABA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f5,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// fsubs f13,f6,f4
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fmuls f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmadds f11,f0,f1,f3
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f3.f64));
	// fmadds f10,f13,f1,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fnmsubs f9,f13,f2,f11
	ctx.f9.f64 = double(float(-(ctx.f13.f64 * ctx.f2.f64 - ctx.f11.f64)));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f8,f10,f4
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABAF0) {
	__imp__sub_823ABAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABB18) {
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
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823abb5c
	if (ctx.cr6.eq) goto loc_823ABB5C;
	// li r4,111
	ctx.r4.s64 = 111;
	// bl 0x8238b430
	ctx.lr = 0x823ABB38;
	sub_8238B430(ctx, base);
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823ABB5C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABB18) {
	__imp__sub_823ABB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823ABB74) {
	__imp__sub_823ABB74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r6,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823abba8
	if (ctx.cr6.eq) goto loc_823ABBA8;
	// lbz r11,37(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 37);
	// lbz r10,38(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 38);
	// lbz r9,39(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 39);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// stb r9,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r9.u8);
	// blr 
	return;
loc_823ABBA8:
	// lbz r5,30(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 30);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r11,29(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 29);
	// lbz r4,31(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 31);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfs f0,-21324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21324);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fctidz f2,f5
	ctx.f2.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f2,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f2.u64);
	// lbz r9,-9(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fctidz f0,f3
	ctx.f0.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lbz r8,-9(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r8,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r8.u8);
	// fctidz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lbz r7,-9(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r7,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r7.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABB78) {
	__imp__sub_823ABB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823ABC38;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823abc90
	if (!ctx.cr6.eq) goto loc_823ABC90;
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r6,284(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823ABC90:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r10,r11,-29904
	ctx.r10.s64 = ctx.r11.s64 + -29904;
	// lwz r11,5700(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823abcdc
	if (ctx.cr6.gt) goto loc_823ABCDC;
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,284(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823ABCDC:
	// subf r30,r27,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r27.s64;
	// add r11,r28,r9
	ctx.r11.u64 = ctx.r28.u64 + ctx.r9.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x823abd24
	if (!ctx.cr6.gt) goto loc_823ABD24;
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r6,284(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823ABD24:
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// bl 0x822b7e60
	ctx.lr = 0x823ABD3C;
	sub_822B7E60(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x823abd48
	if (!ctx.cr6.gt) goto loc_823ABD48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823ABD48:
	// mullw r11,r3,r29
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823abd80
	if (ctx.cr6.lt) goto loc_823ABD80;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x823abdc4
	if (!ctx.cr6.gt) goto loc_823ABDC4;
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x822d4018
	ctx.lr = 0x823ABD70;
	sub_822D4018(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d4018
	ctx.lr = 0x823ABD78;
	sub_822D4018(ctx, base);
	// subf r24,r28,r30
	ctx.r24.s64 = ctx.r30.s64 - ctx.r28.s64;
	// b 0x823abdc4
	goto loc_823ABDC4;
loc_823ABD80:
	// divw r31,r30,r29
	ctx.r31.s32 = ctx.r30.s32 / ctx.r29.s32;
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// mullw r9,r31,r29
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// addze. r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r26,1
	ctx.r26.s64 = 1;
	// subf r11,r9,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r9.s64;
	// beq 0x823abda0
	if (ctx.cr0.eq) goto loc_823ABDA0;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
loc_823ABDA0:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822d4018
	ctx.lr = 0x823ABDB8;
	sub_822D4018(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d4018
	ctx.lr = 0x823ABDC0;
	sub_822D4018(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_823ABDC4:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r7,284(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stb r26,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r26.u8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stb r25,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r25.u8);
	// stw r24,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823ABC30) {
	__imp__sub_823ABC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x823ABE00;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f13,5808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5808);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f31,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822d4018
	ctx.lr = 0x823ABE74;
	sub_822D4018(ctx, base);
	// divw r6,r3,r22
	ctx.r6.s32 = ctx.r3.s32 / ctx.r22.s32;
	// divw r7,r30,r22
	ctx.r7.s32 = ctx.r30.s32 / ctx.r22.s32;
	// mullw r5,r6,r22
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r22.s32);
	// subf r4,r5,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r5.s64;
	// mullw r30,r4,r7
	ctx.r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x823abe98
	if (ctx.cr6.lt) goto loc_823ABE98;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x823abf34
	goto loc_823ABF34;
loc_823ABE98:
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x823abf34
	if (ctx.cr6.lt) goto loc_823ABF34;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822d4018
	ctx.lr = 0x823ABEB8;
	sub_822D4018(ctx, base);
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x823abed8
	if (ctx.cr0.eq) goto loc_823ABED8;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r29,79
	ctx.r29.s64 = 79;
	// b 0x823abee8
	goto loc_823ABEE8;
loc_823ABED8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8238b4c8
	ctx.lr = 0x823ABEE4;
	sub_8238B4C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_823ABEE8:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// clrlwi r8,r26,24
	ctx.r8.u64 = ctx.r26.u32 & 0xFF;
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f0,8220(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8220);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,6232(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6232);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f8,f9,f0,f31
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f31,f7,f13
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
loc_823ABF34:
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stb r24,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r24.u8);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x821ff1f8
	ctx.lr = 0x823ABF48;
	sub_821FF1F8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// stb r25,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r25.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823ABDF8) {
	__imp__sub_823ABDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823ABF64) {
	__imp__sub_823ABF64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f9,f5
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f5.f64;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// subf r4,r6,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r6.s64;
	// lfs f0,24332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24332);
	ctx.f0.f64 = double(temp.f32);
	// li r11,6
	ctx.r11.s64 = 6;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// lfs f8,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f6,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// bl 0x823a6c00
	ctx.lr = 0x823ABFD4;
	sub_823A6C00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABF68) {
	__imp__sub_823ABF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823ABFE4) {
	__imp__sub_823ABFE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ABFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,6232(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,3100(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3100);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f4.u64);
	// lbz r3,-9(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ABFE8) {
	__imp__sub_823ABFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AC040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x823AC048;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823ddff0
	ctx.lr = 0x823AC050;
	__savefpr_14(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r18,868(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// lbz r9,852(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 852);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stfs f7,892(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 892, temp.u32);
	// clrlwi r11,r18,31
	ctx.r11.u64 = ctx.r18.u32 & 0x1;
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r3.u32);
	// lfs f22,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f22.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// stfs f22,212(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmr f26,f2
	ctx.f26.f64 = ctx.f2.f64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// stb r22,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r22.u8);
	// fmr f30,f6
	ctx.f30.f64 = ctx.f6.f64;
	// stb r9,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r9.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ac0dc
	if (ctx.cr6.eq) goto loc_823AC0DC;
	// li r4,111
	ctx.r4.s64 = 111;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8238b430
	ctx.lr = 0x823AC0C0;
	sub_8238B430(ctx, base);
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// b 0x823ac0e0
	goto loc_823AC0E0;
loc_823AC0DC:
	// stfs f22,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
loc_823AC0E0:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// lwz r15,12(r23)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// lwz r8,924(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	// addi r28,r1,860
	ctx.r28.s64 = ctx.r1.s64 + 860;
	// lwz r7,916(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// addi r27,r1,168
	ctx.r27.s64 = ctx.r1.s64 + 168;
	// lwz r4,860(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// lwz r9,932(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r6,908(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// bl 0x823abc30
	ctx.lr = 0x823AC12C;
	sub_823ABC30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823acc40
	if (ctx.cr6.eq) goto loc_823ACC40;
	// rlwinm r10,r18,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x400;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r18,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x10;
	// beq cr6,0x823ac18c
	if (ctx.cr6.eq) goto loc_823AC18C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ac164
	if (ctx.cr6.eq) goto loc_823AC164;
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_823AC164:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r1,200
	ctx.r9.s64 = ctx.r1.s64 + 200;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,200
	ctx.r7.s64 = ctx.r1.s64 + 200;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// stwx r22,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r22.u32);
	// b 0x823ac1ac
	goto loc_823AC1AC;
loc_823AC18C:
	// stw r22,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r22.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ac1ac
	if (ctx.cr6.eq) goto loc_823AC1AC;
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_823AC1AC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f24,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f24.f64 = double(temp.f32);
	// stfs f24,192(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fnmsubs f28,f29,f24,f28
	ctx.f28.f64 = double(float(-(ctx.f29.f64 * ctx.f24.f64 - ctx.f28.f64)));
	// fnmsubs f26,f27,f24,f26
	ctx.f26.f64 = double(float(-(ctx.f27.f64 * ctx.f24.f64 - ctx.f26.f64)));
	// ble cr6,0x823acc40
	if (!ctx.cr6.gt) goto loc_823ACC40;
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r17,940(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r21,136(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r14,132(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lfs f23,3100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3100);
	ctx.f23.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f13,14268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14268);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f17,-18596(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18596);
	ctx.f17.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f18,29164(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29164);
	ctx.f18.f64 = double(temp.f32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r3,r10,-18664
	ctx.r3.s64 = ctx.r10.s64 + -18664;
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r10,r9,-18600
	ctx.r10.s64 = ctx.r9.s64 + -18600;
	// lfs f14,-18668(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -18668);
	ctx.f14.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f15,-18672(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -18672);
	ctx.f15.f64 = double(temp.f32);
	// addi r9,r8,-18600
	ctx.r9.s64 = ctx.r8.s64 + -18600;
	// lfs f16,6232(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6232);
	ctx.f16.f64 = double(temp.f32);
	// stfs f23,180(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r16,r11,-18704
	ctx.r16.s64 = ctx.r11.s64 + -18704;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// b 0x823ac264
	goto loc_823AC264;
loc_823AC25C:
	// lwz r31,788(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// li r22,0
	ctx.r22.s64 = 0;
loc_823AC264:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// lwz r24,852(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// fmr f25,f28
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f28.f64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// fmr f20,f26
	ctx.f20.f64 = ctx.f26.f64;
	// lwz r20,860(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823acbc8
	if (ctx.cr6.eq) goto loc_823ACBC8;
	// lbz r31,852(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 852);
	// li r25,0
	ctx.r25.s64 = 0;
loc_823AC29C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x823acbc8
	if (ctx.cr6.eq) goto loc_823ACBC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x822b7e18
	ctx.lr = 0x823AC2B0;
	sub_822B7E18(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r25,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r25.u8);
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// cmplwi cr6,r3,94
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 94, ctx.xer);
	// stb r25,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r25.u8);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// bne cr6,0x823ac40c
	if (!ctx.cr6.eq) goto loc_823AC40C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ac40c
	if (ctx.cr6.eq) goto loc_823AC40C;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,94
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 94, ctx.xer);
	// beq cr6,0x823ac40c
	if (ctx.cr6.eq) goto loc_823AC40C;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x823ac40c
	if (ctx.cr6.lt) goto loc_823AC40C;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x823ac40c
	if (ctx.cr6.gt) goto loc_823AC40C;
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
	// bl 0x822e76c8
	ctx.lr = 0x823AC300;
	sub_822E76C8(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x822e76c8
	ctx.lr = 0x823AC30C;
	sub_822E76C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823ac320
	if (!ctx.cr6.eq) goto loc_823AC320;
	// lwz r24,852(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// b 0x823ac3f4
	goto loc_823AC3F4;
loc_823AC320:
	// rlwinm r11,r18,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ac3c8
	if (ctx.cr6.eq) goto loc_823AC3C8;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x822e76c8
	ctx.lr = 0x823AC338;
	sub_822E76C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x823ac3c8
	if (!ctx.cr6.eq) goto loc_823AC3C8;
	// rlwinm r11,r18,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bne cr6,0x823ac358
	if (!ctx.cr6.eq) goto loc_823AC358;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
loc_823AC358:
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r19,1
	ctx.r19.s64 = 1;
	// std r5,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r5.u64);
	// lfd f13,464(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 464);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// std r7,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r7.u64);
	// lfd f0,360(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f16
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f16.f64));
	// fmuls f7,f9,f16
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f16.f64));
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f5,f6,f23
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f23.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f4.u64);
	// lbz r3,159(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// rotlwi r11,r3,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r24,r7,r4
	ctx.r24.u64 = ctx.r7.u64 | ctx.r4.u64;
	// b 0x823ac3f4
	goto loc_823AC3F4;
loc_823AC3C8:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x823ab6b8
	ctx.lr = 0x823AC3D8;
	sub_823AB6B8(ctx, base);
	// lbz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// lbz r9,137(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 137);
	// rlwimi r10,r31,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r9,r8,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// lbz r24,138(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 138);
	// rlwimi r24,r9,8,0,23
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r24.u64 & 0xFFFFFFFF000000FF);
loc_823AC3F4:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x823acbbc
	goto loc_823ACBBC;
loc_823AC40C:
	// lbz r27,120(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823ac548
	if (ctx.cr6.eq) goto loc_823AC548;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x823ac548
	if (!ctx.cr6.eq) goto loc_823AC548;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8238b4c8
	ctx.lr = 0x823AC42C;
	sub_8238B4C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,192
	ctx.r11.s64 = 192;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// bl 0x822d4018
	ctx.lr = 0x823AC444;
	sub_822D4018(ctx, base);
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x823ac544
	if (ctx.cr0.eq) goto loc_823AC544;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,79
	ctx.r30.s64 = 79;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
loc_823AC468:
	// lbz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823ac4b8
	if (ctx.cr6.eq) goto loc_823AC4B8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lbz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// addi r5,r1,113
	ctx.r5.s64 = ctx.r1.s64 + 113;
	// lwz r8,932(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 932);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r10,r1,121
	ctx.r10.s64 = ctx.r1.s64 + 121;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r7,908(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823abdf8
	ctx.lr = 0x823AC4B4;
	sub_823ABDF8(ctx, base);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_823AC4B8:
	// lbz r26,113(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823ac4d8
	if (ctx.cr6.eq) goto loc_823AC4D8;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x822d4018
	ctx.lr = 0x823AC4D4;
	sub_822D4018(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_823AC4D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8238b430
	ctx.lr = 0x823AC4E4;
	sub_8238B430(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823ac608
	if (ctx.cr6.eq) goto loc_823AC608;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8238b430
	ctx.lr = 0x823AC4FC;
	sub_8238B430(ctx, base);
	// lbz r7,5(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lfd f12,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// std r6,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r6.u64);
	// lfd f7,264(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// std r10,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r10.u64);
	// lfd f0,248(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f24
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f24.f64));
	// frsp f19,f6
	ctx.f19.f64 = double(float(ctx.f6.f64));
	// fmsubs f0,f9,f24,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f24.f64 - ctx.f8.f64));
	// b 0x823ac620
	goto loc_823AC620;
loc_823AC544:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_823AC548:
	// cmplwi cr6,r30,94
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 94, ctx.xer);
	// bne cr6,0x823ac5cc
	if (!ctx.cr6.eq) goto loc_823AC5CC;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823ac568
	if (ctx.cr6.eq) goto loc_823AC568;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823ac468
	if (!ctx.cr6.eq) goto loc_823AC468;
loc_823AC568:
	// fsubs f0,f25,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 - ctx.f28.f64));
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// fsubs f13,f20,f26
	ctx.f13.f64 = double(float(ctx.f20.f64 - ctx.f26.f64));
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// fmr f6,f27
	ctx.f6.f64 = ctx.f27.f64;
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmadds f11,f0,f30,f28
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f10,f13,f30,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fnmsubs f1,f13,f31,f11
	ctx.f1.f64 = double(float(-(ctx.f13.f64 * ctx.f31.f64 - ctx.f11.f64)));
	// fadds f2,f10,f26
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f26.f64));
	// bl 0x823ab750
	ctx.lr = 0x823AC5A4;
	sub_823AB750(ctx, base);
	// rlwinm r11,r18,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x80;
	// fadds f25,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f1.f64 + ctx.f25.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ac5bc
	if (ctx.cr6.eq) goto loc_823AC5BC;
	// lfs f0,892(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f25,f29,f0,f25
	ctx.f25.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f25.f64));
loc_823AC5BC:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x823acbb4
	goto loc_823ACBB4;
loc_823AC5CC:
	// cmplwi cr6,r30,10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 10, ctx.xer);
	// bne cr6,0x823ac5f8
	if (!ctx.cr6.eq) goto loc_823AC5F8;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// fmr f25,f28
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f28.f64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r9.u64);
	// lfd f0,408(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f20,f12,f27,f20
	ctx.f20.f64 = double(float(ctx.f12.f64 * ctx.f27.f64 + ctx.f20.f64));
	// b 0x823acbbc
	goto loc_823ACBBC;
loc_823AC5F8:
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 13, ctx.xer);
	// bne cr6,0x823ac468
	if (!ctx.cr6.eq) goto loc_823AC468;
	// fmr f25,f28
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f28.f64;
	// b 0x823acbbc
	goto loc_823ACBBC;
loc_823AC608:
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// fmr f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f22.f64;
	// std r10,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r10.u64);
	// lfd f13,440(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f19,f12
	ctx.f19.f64 = double(float(ctx.f12.f64));
loc_823AC620:
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// std r6,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r6.u64);
	// std r7,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r7.u64);
	// lfd f11,376(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lfd f13,280(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f21,f7,f29
	ctx.f21.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fmuls f22,f10,f27
	ctx.f22.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// bl 0x823ab8d8
	ctx.lr = 0x823AC668;
	sub_823AB8D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x823ac688
	if (!ctx.cr6.eq) goto loc_823AC688;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823ac6d4
	if (ctx.cr6.eq) goto loc_823AC6D4;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x823ac6d4
	if (!ctx.cr6.eq) goto loc_823AC6D4;
loc_823AC688:
	// lbz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// std r7,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r7.u64);
	// std r6,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r6.u64);
	// lfd f13,424(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfd f0,296(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fmuls f7,f9,f16
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f16.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f8,f10,f16
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f16.f64));
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f5,f6,f23
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f23.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.f4.u64);
	// lbz r5,319(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 319);
	// stb r5,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r5.u8);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_823AC6D4:
	// lbz r10,121(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823acb6c
	if (!ctx.cr6.eq) goto loc_823ACB6C;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ac8f4
	if (!ctx.cr6.eq) goto loc_823AC8F4;
	// rlwinm r11,r18,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ac7e4
	if (ctx.cr6.eq) goto loc_823AC7E4;
	// rlwinm r10,r18,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ac710
	if (ctx.cr6.eq) goto loc_823AC710;
	// li r11,2
	ctx.r11.s64 = 2;
loc_823AC710:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// std r11,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r11.u64);
	// lfd f0,392(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f21
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f21.f64));
	// fadds f10,f12,f22
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f22.f64));
	// fadds f9,f11,f25
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f25.f64));
	// fadds f8,f10,f20
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f20.f64));
	// fsubs f7,f9,f28
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f28.f64));
	// fsubs f6,f8,f26
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f26.f64));
	// fmuls f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmadds f4,f7,f30,f28
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f3,f6,f30,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f5.f64));
	// fnmsubs f1,f6,f31,f4
	ctx.f1.f64 = double(float(-(ctx.f6.f64 * ctx.f31.f64 - ctx.f4.f64)));
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fadds f2,f3,f26
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f26.f64));
	// beq cr6,0x823ac7a4
	if (ctx.cr6.eq) goto loc_823AC7A4;
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// std r9,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r9.u64);
	// std r8,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r8.u64);
	// lfd f0,328(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// lfd f13,456(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f3,f10,f29
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f4,f9,f27
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// bl 0x823abf68
	ctx.lr = 0x823AC7A0;
	sub_823ABF68(ctx, base);
	// b 0x823ac7e4
	goto loc_823AC7E4;
loc_823AC7A4:
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lbz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// std r7,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r7.u64);
	// lfd f12,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// lfd f0,344(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f3,f9,f29
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmuls f4,f11,f27
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// bl 0x823ab968
	ctx.lr = 0x823AC7E4;
	sub_823AB968(ctx, base);
loc_823AC7E4:
	// fadds f24,f21,f25
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f21.f64 + ctx.f25.f64));
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// fadds f0,f22,f20
	ctx.f0.f64 = double(float(ctx.f22.f64 + ctx.f20.f64));
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fsubs f13,f24,f28
	ctx.f13.f64 = double(float(ctx.f24.f64 - ctx.f28.f64));
	// fsubs f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmadds f10,f13,f30,f28
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f9,f12,f30,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f11.f64));
	// fnmsubs f1,f12,f31,f10
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f10.f64)));
	// fadds f2,f9,f26
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f26.f64));
	// beq cr6,0x823ac85c
	if (ctx.cr6.eq) goto loc_823AC85C;
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// std r8,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r8.u64);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// std r9,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r9.u64);
	// lfd f0,240(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,256(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f4,f11,f27
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fmuls f3,f9,f29
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// bl 0x823abf68
	ctx.lr = 0x823AC858;
	sub_823ABF68(ctx, base);
	// b 0x823ac898
	goto loc_823AC898;
loc_823AC85C:
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// std r8,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r8.u64);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// std r7,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r7.u64);
	// lfd f0,272(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f13,288(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f4,f10,f27
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmuls f3,f9,f29
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// bl 0x823ab968
	ctx.lr = 0x823AC898;
	sub_823AB968(ctx, base);
loc_823AC898:
	// rlwinm r11,r18,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823acb6c
	if (ctx.cr6.eq) goto loc_823ACB6C;
	// lwz r11,876(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823acb6c
	if (!ctx.cr6.eq) goto loc_823ACB6C;
	// fsubs f0,f20,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f20.f64 - ctx.f26.f64));
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fsubs f13,f24,f28
	ctx.f13.f64 = double(float(ctx.f24.f64 - ctx.f28.f64));
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lbz r4,887(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 887);
	// fmr f6,f27
	ctx.f6.f64 = ctx.f27.f64;
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmadds f11,f13,f30,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f10,f13,f31,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fnmsubs f1,f0,f31,f11
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f11.f64)));
	// fadds f2,f10,f26
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f26.f64));
	// bl 0x823aba08
	ctx.lr = 0x823AC8F0;
	sub_823ABA08(ctx, base);
	// b 0x823acb6c
	goto loc_823ACB6C;
loc_823AC8F4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823ac9f8
	if (!ctx.cr6.eq) goto loc_823AC9F8;
	// rlwinm r11,r18,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ac910
	if (ctx.cr6.eq) goto loc_823AC910;
	// lfs f24,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f24.f64 = double(temp.f32);
	// b 0x823ac914
	goto loc_823AC914;
loc_823AC910:
	// lfs f24,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f24.f64 = double(temp.f32);
loc_823AC914:
	// lwz r29,176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823AC91C:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// fmadds f13,f0,f24,f21
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f24.f64 + ctx.f21.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f24,f22
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f24.f64 + ctx.f22.f64));
	// fadds f10,f13,f25
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f25.f64));
	// fadds f9,f11,f20
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f20.f64));
	// fsubs f8,f10,f28
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f28.f64));
	// fsubs f7,f9,f26
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f26.f64));
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmadds f5,f8,f30,f28
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f4,f7,f30,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f6.f64));
	// fnmsubs f1,f7,f31,f5
	ctx.f1.f64 = double(float(-(ctx.f7.f64 * ctx.f31.f64 - ctx.f5.f64)));
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fadds f2,f4,f26
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f26.f64));
	// beq cr6,0x823ac9a4
	if (ctx.cr6.eq) goto loc_823AC9A4;
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// std r9,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r9.u64);
	// std r8,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r8.u64);
	// lfd f0,304(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// lfd f13,320(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f4,f10,f27
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmuls f3,f9,f29
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// bl 0x823abf68
	ctx.lr = 0x823AC9A0;
	sub_823ABF68(ctx, base);
	// b 0x823ac9e4
	goto loc_823AC9E4;
loc_823AC9A4:
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// std r8,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r8.u64);
	// std r7,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r7.u64);
	// lfd f0,336(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// lfd f13,352(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f4,f10,f27
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmuls f3,f9,f29
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// bl 0x823ab968
	ctx.lr = 0x823AC9E4;
	sub_823AB968(ctx, base);
loc_823AC9E4:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r29,64
	ctx.r11.s64 = ctx.r29.s64 + 64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ac91c
	if (ctx.cr6.lt) goto loc_823AC91C;
	// b 0x823acb6c
	goto loc_823ACB6C;
loc_823AC9F8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823acb6c
	if (!ctx.cr6.eq) goto loc_823ACB6C;
	// rlwinm r11,r18,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823aca18
	if (ctx.cr6.eq) goto loc_823ACA18;
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823acb6c
	if (ctx.cr6.eq) goto loc_823ACB6C;
loc_823ACA18:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// lwz r5,900(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 900);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x823abb78
	ctx.lr = 0x823ACA2C;
	sub_823ABB78(ctx, base);
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwz r27,144(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,948(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	// std r9,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r9.u64);
	// std r8,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r8.u64);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfd f0,368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// lfd f13,384(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f27
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmuls f7,f9,f29
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmuls f23,f8,f14
	ctx.f23.f64 = double(float(ctx.f8.f64 * ctx.f14.f64));
	// fmuls f24,f7,f15
	ctx.f24.f64 = double(float(ctx.f7.f64 * ctx.f15.f64));
loc_823ACA74:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f27
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f13,f0,f24
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f24.f64));
	// fmadds f9,f11,f0,f23
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f23.f64));
	// fadds f8,f10,f21
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f21.f64));
	// fadds f7,f9,f22
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f22.f64));
	// fadds f6,f8,f25
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f25.f64));
	// fadds f5,f7,f20
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f20.f64));
	// fsubs f4,f6,f28
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f28.f64));
	// fsubs f3,f5,f26
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f26.f64));
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmuls f2,f4,f31
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmadds f1,f4,f30,f28
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f0,f3,f30,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fnmsubs f1,f3,f31,f1
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f31.f64 - ctx.f1.f64)));
	// fadds f2,f0,f26
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// beq cr6,0x823acb14
	if (ctx.cr6.eq) goto loc_823ACB14;
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// std r9,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r9.u64);
	// std r8,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r8.u64);
	// lfd f0,400(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// lfd f13,416(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f4,f10,f27
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmuls f3,f9,f29
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// bl 0x823abf68
	ctx.lr = 0x823ACB10;
	sub_823ABF68(ctx, base);
	// b 0x823acb5c
	goto loc_823ACB5C;
loc_823ACB14:
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// std r8,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r8.u64);
	// std r7,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.r7.u64);
	// lfd f0,432(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// lfd f13,448(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 448);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f27
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmuls f7,f9,f29
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmuls f4,f8,f18
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f18.f64));
	// fmuls f3,f7,f17
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f17.f64));
	// bl 0x823ab968
	ctx.lr = 0x823ACB5C;
	sub_823AB968(ctx, base);
loc_823ACB5C:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r11,r16,32
	ctx.r11.s64 = ctx.r16.s64 + 32;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823aca74
	if (ctx.cr6.lt) goto loc_823ACA74;
loc_823ACB6C:
	// clrlwi r11,r18,31
	ctx.r11.u64 = ctx.r18.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823acb84
	if (ctx.cr6.eq) goto loc_823ACB84;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f25,f0,f29,f25
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f25.f64));
	// b 0x823acb88
	goto loc_823ACB88;
loc_823ACB84:
	// fmadds f25,f19,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f19.f64 * ctx.f29.f64 + ctx.f25.f64));
loc_823ACB88:
	// rlwinm r11,r18,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823acb9c
	if (ctx.cr6.eq) goto loc_823ACB9C;
	// lfs f0,892(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f25,f29,f0,f25
	ctx.f25.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f25.f64));
loc_823ACB9C:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f23,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f23.f64 = double(temp.f32);
	// lfs f24,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f24.f64 = double(temp.f32);
	// lbz r31,852(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 852);
	// lfs f22,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f22.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
loc_823ACBB4:
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_823ACBBC:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ac29c
	if (!ctx.cr6.eq) goto loc_823AC29C;
loc_823ACBC8:
	// rlwinm r11,r18,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823acc24
	if (ctx.cr6.eq) goto loc_823ACC24;
	// lwz r11,876(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823acc24
	if (!ctx.cr6.eq) goto loc_823ACC24;
	// fsubs f0,f25,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 - ctx.f28.f64));
	// lwz r11,852(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// fsubs f13,f20,f26
	ctx.f13.f64 = double(float(ctx.f20.f64 - ctx.f26.f64));
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lbz r4,887(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 887);
	// fmr f6,f27
	ctx.f6.f64 = ctx.f27.f64;
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmadds f11,f0,f30,f28
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f28.f64));
	// fmadds f10,f13,f30,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fnmsubs f1,f13,f31,f11
	ctx.f1.f64 = double(float(-(ctx.f13.f64 * ctx.f31.f64 - ctx.f11.f64)));
	// fadds f2,f10,f26
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f26.f64));
	// bl 0x823aba08
	ctx.lr = 0x823ACC24;
	sub_823ABA08(ctx, base);
loc_823ACC24:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// bne 0x823ac25c
	if (!ctx.cr0.eq) goto loc_823AC25C;
loc_823ACC40:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de03c
	ctx.lr = 0x823ACC4C;
	__restfpr_14(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AC040) {
	__imp__sub_823AC040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 65535;
	// lfs f6,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f6.f64 = double(temp.f32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lfs f7,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f7.f64 = double(temp.f32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x823ac040
	ctx.lr = 0x823ACCBC;
	sub_823AC040(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ACC50) {
	__imp__sub_823ACC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823ACCCC) {
	__imp__sub_823ACCCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823ACCD8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x823b1ca8
	ctx.lr = 0x823ACCFC;
	sub_823B1CA8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// ori r9,r10,6156
	ctx.r9.u64 = ctx.r10.u64 | 6156;
	// addi r31,r11,-15488
	ctx.r31.s64 = ctx.r11.s64 + -15488;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r8,2048
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2048, ctx.xer);
	// bgt cr6,0x823acd34
	if (ctx.cr6.gt) goto loc_823ACD34;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,6152
	ctx.r9.u64 = ctx.r11.u64 | 6152;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r8,r7,6
	ctx.r8.s64 = ctx.r7.s64 + 6;
	// cmplwi cr6,r8,3072
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3072, ctx.xer);
	// ble cr6,0x823acd50
	if (!ctx.cr6.gt) goto loc_823ACD50;
loc_823ACD34:
	// bl 0x823b1c30
	ctx.lr = 0x823ACD38;
	sub_823B1C30(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r8,r10,6152
	ctx.r8.u64 = ctx.r10.u64 | 6152;
	// ori r9,r11,6156
	ctx.r9.u64 = ctx.r11.u64 | 6156;
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
loc_823ACD50:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r8,r9,6156
	ctx.r8.u64 = ctx.r9.u64 | 6156;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// rlwinm r25,r7,1,15,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1FFFE;
	// stwx r10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// ori r8,r6,6152
	ctx.r8.u64 = ctx.r6.u64 | 6152;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// rlwinm r9,r11,5,11,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1FFFE0;
	// sthx r11,r25,r10
	PPC_STORE_U16(ctx.r25.u32 + ctx.r10.u32, ctx.r11.u16);
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// sthx r11,r25,r4
	PPC_STORE_U16(ctx.r25.u32 + ctx.r4.u32, ctx.r11.u16);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r6,r5,6
	ctx.r6.s64 = ctx.r5.s64 + 6;
	// addi r5,r3,10
	ctx.r5.s64 = ctx.r3.s64 + 10;
	// sthx r7,r25,r11
	PPC_STORE_U16(ctx.r25.u32 + ctx.r11.u32, ctx.r7.u16);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sthx r8,r25,r4
	PPC_STORE_U16(ctx.r25.u32 + ctx.r4.u32, ctx.r8.u16);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// sthx r7,r25,r6
	PPC_STORE_U16(ctx.r25.u32 + ctx.r6.u32, ctx.r7.u16);
	// lis r8,8176
	ctx.r8.s64 = 535822336;
	// sthx r24,r25,r5
	PPC_STORE_U16(ctx.r25.u32 + ctx.r5.u32, ctx.r24.u16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f13,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r31,64
	ctx.r7.s64 = ctx.r31.s64 + 64;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// lfs f0,12168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stw r26,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r26.u32);
	// stfsx f9,r9,r31
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f13,24(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f12,20(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f2,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// lfs f12,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f7,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f6,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f8,f6
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfs f10,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f2,f11
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// lfs f9,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f1,f13
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfsx f8,r9,r7
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stw r26,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r26.u32);
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfs f9,20(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f10,24(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f5,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f5,f2
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f1,24(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823ACCD0) {
	__imp__sub_823ACCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ACF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x823ACF38;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r26,12(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// addi r24,r11,-15488
	ctx.r24.s64 = ctx.r11.s64 + -15488;
	// stw r8,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// ori r9,r10,6156
	ctx.r9.u64 = ctx.r10.u64 | 6156;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwzx r11,r24,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823acf88
	if (ctx.cr6.eq) goto loc_823ACF88;
	// bl 0x823b1c28
	ctx.lr = 0x823ACF88;
	sub_823B1C28(ctx, base);
loc_823ACF88:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r11,-29904
	ctx.r3.s64 = ctx.r11.s64 + -29904;
	// bl 0x823d41b0
	ctx.lr = 0x823ACF94;
	sub_823D41B0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f10,f13,f0,f12
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f7,f11,f0,f9
	ctx.f7.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// fnmsubs f5,f8,f0,f6
	ctx.f5.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f6.f64)));
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lfs f4,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f2,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fnmsubs f31,f4,f0,f10
	ctx.f31.f64 = double(float(-(ctx.f4.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// fnmsubs f30,f3,f0,f7
	ctx.f30.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f7.f64)));
	// fnmsubs f29,f2,f0,f5
	ctx.f29.f64 = double(float(-(ctx.f2.f64 * ctx.f0.f64 - ctx.f5.f64)));
	// beq cr6,0x823ad1ac
	if (ctx.cr6.eq) goto loc_823AD1AC;
	// lbz r23,348(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 348);
	// li r25,-1
	ctx.r25.s64 = -1;
loc_823ACFF0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x822b7e18
	ctx.lr = 0x823ACFFC;
	sub_822B7E18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8238b430
	ctx.lr = 0x823AD00C;
	sub_8238B430(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x823ad028
	if (ctx.cr6.lt) goto loc_823AD028;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// bgt cr6,0x823ad028
	if (ctx.cr6.gt) goto loc_823AD028;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823ad074
	goto loc_823AD074;
loc_823AD028:
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// blt cr6,0x823ad040
	if (ctx.cr6.lt) goto loc_823AD040;
	// cmplwi cr6,r31,23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 23, ctx.xer);
	// bgt cr6,0x823ad040
	if (ctx.cr6.gt) goto loc_823AD040;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823ad074
	goto loc_823AD074;
loc_823AD040:
	// cmplwi cr6,r31,28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 28, ctx.xer);
	// blt cr6,0x823ad058
	if (ctx.cr6.lt) goto loc_823AD058;
	// cmplwi cr6,r31,31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 31, ctx.xer);
	// bgt cr6,0x823ad058
	if (ctx.cr6.gt) goto loc_823AD058;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823ad074
	goto loc_823AD074;
loc_823AD058:
	// cmplwi cr6,r31,188
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 188, ctx.xer);
	// bne cr6,0x823ad068
	if (!ctx.cr6.eq) goto loc_823AD068;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823ad074
	goto loc_823AD074;
loc_823AD068:
	// addi r11,r31,-189
	ctx.r11.s64 = ctx.r31.s64 + -189;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_823AD074:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad090
	if (ctx.cr6.eq) goto loc_823AD090;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823ad094
	goto loc_823AD094;
loc_823AD090:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_823AD094:
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r6,5(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// lbz r3,6(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// lbz r5,2(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// lfs f8,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f5,112(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lfs f7,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// lfs f6,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fcfid f2,f11
	ctx.f2.f64 = double(ctx.f11.s64);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fcfid f1,f10
	ctx.f1.f64 = double(ctx.f10.s64);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// fcfid f11,f9
	ctx.f11.f64 = double(ctx.f9.s64);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmadds f10,f0,f3,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f31.f64));
	// frsp f9,f2
	ctx.f9.f64 = double(float(ctx.f2.f64));
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// fmadds f2,f13,f3,f30
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f30.f64));
	// frsp f4,f11
	ctx.f4.f64 = double(float(ctx.f11.f64));
	// fmadds f1,f12,f3,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f29.f64));
	// fmadds f11,f8,f9,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f10,f0,f5
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f0,f12,f5
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f10,f7,f9,f2
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f2.f64));
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f13,f8,f4
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f12,f7,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f11,f6,f4
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f9,f6,f9,f1
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f1.f64));
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x823accd0
	ctx.lr = 0x823AD170;
	sub_823ACCD0(ctx, base);
	// lbz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// lwz r8,308(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lfs f8,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f5,120(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fmadds f31,f8,f3,f31
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f31.f64));
	// fmadds f30,f7,f3,f30
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f30.f64));
	// fmadds f29,f6,f3,f29
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f29.f64));
	// bne cr6,0x823acff0
	if (!ctx.cr6.eq) goto loc_823ACFF0;
loc_823AD1AC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,6156
	ctx.r10.u64 = ctx.r11.u64 | 6156;
	// lwzx r11,r24,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad1c4
	if (ctx.cr6.eq) goto loc_823AD1C4;
	// bl 0x823b1c28
	ctx.lr = 0x823AD1C4;
	sub_823B1C28(ctx, base);
loc_823AD1C4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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
}

PPC_WEAK_FUNC(sub_823ACF30) {
	__imp__sub_823ACF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823AD1E0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x823AD20C;
	sub_823DE720(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x823AD218;
	sub_823DE800(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lfs f7,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lfs f4,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f3,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lbz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lwz r28,40(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r27,36(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r26,32(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r25,28(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stb r29,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r29.u8);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x823ac040
	ctx.lr = 0x823AD2A0;
	sub_823AC040(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AD1D8) {
	__imp__sub_823AD1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD2C0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x823acf30
	ctx.lr = 0x823AD2F4;
	sub_823ACF30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_823AD2C0) {
	__imp__sub_823AD2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD318) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823ad370
	if (ctx.cr6.lt) goto loc_823AD370;
	// bne cr6,0x823ad39c
	if (!ctx.cr6.eq) goto loc_823AD39C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad360
	if (ctx.cr6.eq) goto loc_823AD360;
	// bl 0x823b1c28
	ctx.lr = 0x823AD360;
	sub_823B1C28(ctx, base);
loc_823AD360:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r11,-29904
	ctx.r3.s64 = ctx.r11.s64 + -29904;
	// bl 0x823d41b0
	ctx.lr = 0x823AD36C;
	sub_823D41B0(ctx, base);
	// b 0x823ad39c
	goto loc_823AD39C;
loc_823AD370:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad390
	if (ctx.cr6.eq) goto loc_823AD390;
	// bl 0x823b1c28
	ctx.lr = 0x823AD390;
	sub_823B1C28(ctx, base);
loc_823AD390:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r11,-29904
	ctx.r3.s64 = ctx.r11.s64 + -29904;
	// bl 0x823d4060
	ctx.lr = 0x823AD39C;
	sub_823D4060(ctx, base);
loc_823AD39C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_823AD318) {
	__imp__sub_823AD318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13352
	ctx.r10.s64 = ctx.r11.s64 + 13352;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD3C0) {
	__imp__sub_823AD3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD3D8) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820b9428
	ctx.lr = 0x823AD404;
	sub_820B9428(ctx, base);
	// lwz r11,1220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	// addi r10,r31,1212
	ctx.r10.s64 = ctx.r31.s64 + 1212;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x820c3390
	ctx.lr = 0x823AD420;
	sub_820C3390(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lwz r11,1220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
	// lwz r10,12900(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12900);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823ad450
	if (ctx.cr6.eq) goto loc_823AD450;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.s64 = 128 - ctx.r6.s64;
	// bl 0x820b9428
	ctx.lr = 0x823AD450;
	sub_820B9428(ctx, base);
loc_823AD450:
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

PPC_WEAK_FUNC(sub_823AD3D8) {
	__imp__sub_823AD3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AD464) {
	__imp__sub_823AD464(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD468) {
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
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad4f0
	if (ctx.cr6.eq) goto loc_823AD4F0;
	// bl 0x823ad3d8
	ctx.lr = 0x823AD48C;
	sub_823AD3D8(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r30,-31780
	ctx.r30.s64 = -2082734080;
	// lis r31,-31780
	ctx.r31.s64 = -2082734080;
	// lwz r3,12644(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12644);
	// lbz r10,11(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ad4c8
	if (!ctx.cr6.eq) goto loc_823AD4C8;
	// lwz r11,12888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12888);
	// lbz r11,11(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ad4c8
	if (!ctx.cr6.eq) goto loc_823AD4C8;
	// lwz r11,12832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12832);
	// lbz r11,11(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad4f0
	if (ctx.cr6.eq) goto loc_823AD4F0;
loc_823AD4C8:
	// bl 0x822e0228
	ctx.lr = 0x823AD4CC;
	sub_822E0228(ctx, base);
	// lwz r3,12888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12888);
	// bl 0x822e0228
	ctx.lr = 0x823AD4D4;
	sub_822E0228(ctx, base);
	// lwz r3,12832(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12832);
	// bl 0x822e0228
	ctx.lr = 0x823AD4DC;
	sub_822E0228(ctx, base);
	// lwz r11,12888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12888);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ad4f0
	if (!ctx.cr6.eq) goto loc_823AD4F0;
	// bl 0x8238e110
	ctx.lr = 0x823AD4F0;
	sub_8238E110(ctx, base);
loc_823AD4F0:
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

PPC_WEAK_FUNC(sub_823AD468) {
	__imp__sub_823AD468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD508) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,12828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12828);
	// bl 0x823a4938
	ctx.lr = 0x823AD520;
	sub_823A4938(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ad590
	if (!ctx.cr6.eq) goto loc_823AD590;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,13140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13140);
	// bl 0x823a4938
	ctx.lr = 0x823AD538;
	sub_823A4938(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ad590
	if (!ctx.cr6.eq) goto loc_823AD590;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,12872(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12872);
	// bl 0x823a4938
	ctx.lr = 0x823AD550;
	sub_823A4938(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ad590
	if (!ctx.cr6.eq) goto loc_823AD590;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,12956(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12956);
	// bl 0x823a4938
	ctx.lr = 0x823AD568;
	sub_823A4938(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ad590
	if (!ctx.cr6.eq) goto loc_823AD590;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,12972(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12972);
	// bl 0x823a4938
	ctx.lr = 0x823AD580;
	sub_823A4938(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ad594
	if (ctx.cr6.eq) goto loc_823AD594;
loc_823AD590:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823AD594:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad5a4
	if (ctx.cr6.eq) goto loc_823AD5A4;
	// bl 0x823c7ab0
	ctx.lr = 0x823AD5A4;
	sub_823C7AB0(ctx, base);
loc_823AD5A4:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r9,r10,-19840
	ctx.r9.s64 = ctx.r10.s64 + -19840;
	// lwz r11,13020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13020);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 96, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD508) {
	__imp__sub_823AD508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AD5CC) {
	__imp__sub_823AD5CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD5D0) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ad624
	if (ctx.cr6.eq) goto loc_823AD624;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r31,r10,-18880
	ctx.r31.s64 = ctx.r10.s64 + -18880;
loc_823AD5FC:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823AD614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823ad5fc
	if (!ctx.cr6.eq) goto loc_823AD5FC;
loc_823AD624:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad644
	if (ctx.cr6.eq) goto loc_823AD644;
	// bl 0x823b1c28
	ctx.lr = 0x823AD644;
	sub_823B1C28(ctx, base);
loc_823AD644:
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

PPC_WEAK_FUNC(sub_823AD5D0) {
	__imp__sub_823AD5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD658) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,3224
	ctx.r10.s64 = ctx.r11.s64 + 3224;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x820c3b58
	ctx.lr = 0x823AD678;
	sub_820C3B58(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD658) {
	__imp__sub_823AD658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AD694) {
	__imp__sub_823AD694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823AD6A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,-19968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19968);
	// lwz r11,5952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5952);
	// rlwinm r29,r11,31,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823ad7a0
	if (ctx.cr6.eq) goto loc_823AD7A0;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// bl 0x823b7840
	ctx.lr = 0x823AD6D0;
	sub_823B7840(ctx, base);
	// lwz r11,-19968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19968);
	// lwz r10,5564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5564);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ad6e4
	if (ctx.cr6.eq) goto loc_823AD6E4;
	// bl 0x823ccd70
	ctx.lr = 0x823AD6E4;
	sub_823CCD70(ctx, base);
loc_823AD6E4:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r27,r11,-29904
	ctx.r27.s64 = ctx.r11.s64 + -29904;
	// addi r4,r10,-21248
	ctx.r4.s64 = ctx.r10.s64 + -21248;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823d3b90
	ctx.lr = 0x823AD700;
	sub_823D3B90(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-24112
	ctx.r31.s64 = ctx.r11.s64 + -24112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-19968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19968);
	// stw r11,4924(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4924, ctx.r11.u32);
	// bl 0x823d3c78
	ctx.lr = 0x823AD718;
	sub_823D3C78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c90b8
	ctx.lr = 0x823AD724;
	sub_823C90B8(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823AD734;
	sub_823C9CA0(ctx, base);
	// bl 0x823b1e18
	ctx.lr = 0x823AD738;
	sub_823B1E18(ctx, base);
	// lwz r11,-19968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19968);
	// lwz r8,5572(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5572);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823ad750
	if (ctx.cr6.eq) goto loc_823AD750;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// bl 0x823ad5d0
	ctx.lr = 0x823AD750;
	sub_823AD5D0(ctx, base);
loc_823AD750:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad770
	if (ctx.cr6.eq) goto loc_823AD770;
	// bl 0x823b1c28
	ctx.lr = 0x823AD770;
	sub_823B1C28(ctx, base);
loc_823AD770:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9618
	ctx.lr = 0x823AD778;
	sub_823C9618(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad798
	if (ctx.cr6.eq) goto loc_823AD798;
	// stw r28,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bl 0x820c0f58
	ctx.lr = 0x823AD798;
	sub_820C0F58(ctx, base);
loc_823AD798:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x823c86c8
	ctx.lr = 0x823AD7A0;
	sub_823C86C8(ctx, base);
loc_823AD7A0:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820bad78
	ctx.lr = 0x823AD7B0;
	sub_820BAD78(ctx, base);
	// lwz r11,-19968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19968);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r3,5492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5492, ctx.r3.u32);
	// beq cr6,0x823ad800
	if (ctx.cr6.eq) goto loc_823AD800;
	// lwz r11,1220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r31,1212
	ctx.r6.s64 = ctx.r31.s64 + 1212;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r6,r4,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c4308
	ctx.lr = 0x823AD800;
	sub_820C4308(ctx, base);
loc_823AD800:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AD698) {
	__imp__sub_823AD698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD808) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,3224
	ctx.r10.s64 = ctx.r11.s64 + 3224;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad82c
	if (ctx.cr6.eq) goto loc_823AD82C;
	// bl 0x820be060
	ctx.lr = 0x823AD82C;
	sub_820BE060(ctx, base);
loc_823AD82C:
	// bl 0x8228c468
	ctx.lr = 0x823AD830;
	sub_8228C468(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD808) {
	__imp__sub_823AD808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD840) {
	PPC_FUNC_PROLOGUE();
	// b 0x8228c4a8
	sub_8228C4A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AD840) {
	__imp__sub_823AD840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AD844) {
	__imp__sub_823AD844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD848) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_823AD874:
	// bl 0x8238edc0
	ctx.lr = 0x823AD878;
	sub_8238EDC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c29b0
	ctx.lr = 0x823AD89C;
	sub_820C29B0(ctx, base);
	// lwz r11,1220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	// addi r6,r31,1212
	ctx.r6.s64 = ctx.r31.s64 + 1212;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r6,r5,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820c4308
	ctx.lr = 0x823AD8D8;
	sub_820C4308(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820b9428
	ctx.lr = 0x823AD8EC;
	sub_820B9428(ctx, base);
	// lwz r11,1220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,1212
	ctx.r4.s64 = ctx.r31.s64 + 1212;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// bl 0x820c3390
	ctx.lr = 0x823AD908;
	sub_820C3390(ctx, base);
	// lwz r11,1220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
	// b 0x823ad874
	goto loc_823AD874;
}

PPC_WEAK_FUNC(sub_823AD848) {
	__imp__sub_823AD848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD918) {
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
	// bl 0x82282b58
	ctx.lr = 0x823AD92C;
	sub_82282B58(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x822ec4e8
	ctx.lr = 0x823AD934;
	sub_822EC4E8(ctx, base);
	// bl 0x8228c4a8
	ctx.lr = 0x823AD938;
	sub_8228C4A8(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// beq cr6,0x823ad95c
	if (ctx.cr6.eq) goto loc_823AD95C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ad958
	if (ctx.cr6.eq) goto loc_823AD958;
	// bl 0x820be060
	ctx.lr = 0x823AD958;
	sub_820BE060(ctx, base);
loc_823AD958:
	// bl 0x8228c468
	ctx.lr = 0x823AD95C;
	sub_8228C468(ctx, base);
loc_823AD95C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r11.u32);
	// bl 0x8236b630
	ctx.lr = 0x823AD96C;
	sub_8236B630(ctx, base);
}

PPC_WEAK_FUNC(sub_823AD918) {
	__imp__sub_823AD918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AD96C) {
	__imp__sub_823AD96C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-17464
	ctx.r3.s64 = ctx.r11.s64 + -17464;
	// b 0x823b7840
	sub_823B7840(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AD970) {
	__imp__sub_823AD970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD980) {
	__imp__sub_823AD980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AD984) {
	__imp__sub_823AD984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r8,r10,-21248
	ctx.r8.s64 = ctx.r10.s64 + -21248;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r11,500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// stw r11,1256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1256, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD988) {
	__imp__sub_823AD988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r11,r11,-21248
	ctx.r11.s64 = ctx.r11.s64 + -21248;
	// addi r10,r10,13536
	ctx.r10.s64 = ctx.r10.s64 + 13536;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1200
	ctx.r8.s64 = ctx.r11.s64 + 1200;
	// addi r7,r11,1312
	ctx.r7.s64 = ctx.r11.s64 + 1312;
	// addi r11,r10,784
	ctx.r11.s64 = ctx.r10.s64 + 784;
	// stwx r4,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r4.u32);
	// stbx r5,r3,r7
	PPC_STORE_U8(ctx.r3.u32 + ctx.r7.u32, ctx.r5.u8);
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AD9A8) {
	__imp__sub_823AD9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AD9D8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x823AD9E0;
	__savegprlr_19(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r6,-31799
	ctx.r6.s64 = -2083979264;
	// addi r20,r11,13536
	ctx.r20.s64 = ctx.r11.s64 + 13536;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r4,r6,13512
	ctx.r4.s64 = ctx.r6.s64 + 13512;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r9,r9,-18404
	ctx.r9.s64 = ctx.r9.s64 + -18404;
	// addi r19,r10,-21248
	ctx.r19.s64 = ctx.r10.s64 + -21248;
	// stw r9,808(r20)
	PPC_STORE_U32(ctx.r20.u32 + 808, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 20);
	// lis r7,-31799
	ctx.r7.s64 = -2083979264;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r28,r7,4608
	ctx.r28.s64 = ctx.r7.s64 + 4608;
	// stb r9,1312(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1312, ctx.r9.u8);
	// addi r8,r8,-18428
	ctx.r8.s64 = ctx.r8.s64 + -18428;
	// stb r9,1313(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1313, ctx.r9.u8);
	// lis r27,-32250
	ctx.r27.s64 = -2113536000;
	// stb r9,1314(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1314, ctx.r9.u8);
	// li r9,226
	ctx.r9.s64 = 226;
	// stb r10,1318(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1318, ctx.r10.u8);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stb r10,1319(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1319, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,1315(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1315, ctx.r9.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,1236(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1236, ctx.r10.u32);
	// li r10,98
	ctx.r10.s64 = 98;
	// stw r9,1228(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1228, ctx.r9.u32);
	// li r9,98
	ctx.r9.s64 = 98;
	// lwz r7,8328(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8328);
	// addi r5,r5,-18456
	ctx.r5.s64 = ctx.r5.s64 + -18456;
	// stb r10,1321(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1321, ctx.r10.u8);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// stw r8,812(r20)
	PPC_STORE_U32(ctx.r20.u32 + 812, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r9,1320(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1320, ctx.r9.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,8340(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8340);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r24,r27,-18440
	ctx.r24.s64 = ctx.r27.s64 + -18440;
	// lwz r11,8332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8332);
	// addi r27,r10,-26624
	ctx.r27.s64 = ctx.r10.s64 + -26624;
	// stw r7,1204(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1204, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,784(r20)
	PPC_STORE_U32(ctx.r20.u32 + 784, ctx.r8.u32);
	// stw r8,788(r20)
	PPC_STORE_U32(ctx.r20.u32 + 788, ctx.r8.u32);
	// lis r22,-32250
	ctx.r22.s64 = -2113536000;
	// stw r8,792(r20)
	PPC_STORE_U32(ctx.r20.u32 + 792, ctx.r8.u32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// stw r8,796(r20)
	PPC_STORE_U32(ctx.r20.u32 + 796, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,1232(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1232, ctx.r8.u32);
	// addi r8,r4,-18468
	ctx.r8.s64 = ctx.r4.s64 + -18468;
	// stw r9,820(r20)
	PPC_STORE_U32(ctx.r20.u32 + 820, ctx.r9.u32);
	// li r9,98
	ctx.r9.s64 = 98;
	// stw r5,816(r20)
	PPC_STORE_U32(ctx.r20.u32 + 816, ctx.r5.u32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r31,-32250
	ctx.r31.s64 = -2113536000;
	// stw r7,1212(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1212, ctx.r7.u32);
	// lis r30,-32250
	ctx.r30.s64 = -2113536000;
	// stw r7,1224(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1224, ctx.r7.u32);
	// lis r29,-32250
	ctx.r29.s64 = -2113536000;
	// stw r6,1208(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1208, ctx.r6.u32);
	// lis r23,-32250
	ctx.r23.s64 = -2113536000;
	// stw r8,828(r20)
	PPC_STORE_U32(ctx.r20.u32 + 828, ctx.r8.u32);
	// addi r21,r22,-18496
	ctx.r21.s64 = ctx.r22.s64 + -18496;
	// lwz r22,8460(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8460);
	// addi r7,r3,-18508
	ctx.r7.s64 = ctx.r3.s64 + -18508;
	// stw r10,1240(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1240, ctx.r10.u32);
	// stb r9,1322(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1322, ctx.r9.u8);
	// addi r3,r5,-18528
	ctx.r3.s64 = ctx.r5.s64 + -18528;
	// lwz r10,180(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// addi r28,r31,-18556
	ctx.r28.s64 = ctx.r31.s64 + -18556;
	// lwz r9,200(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// addi r26,r30,-18568
	ctx.r26.s64 = ctx.r30.s64 + -18568;
	// stw r11,1200(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1200, ctx.r11.u32);
	// addi r25,r29,-18580
	ctx.r25.s64 = ctx.r29.s64 + -18580;
	// addi r23,r23,-18592
	ctx.r23.s64 = ctx.r23.s64 + -18592;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,98
	ctx.r6.s64 = 98;
	// stw r7,832(r20)
	PPC_STORE_U32(ctx.r20.u32 + 832, ctx.r7.u32);
	// li r7,98
	ctx.r7.s64 = 98;
	// stw r8,824(r20)
	PPC_STORE_U32(ctx.r20.u32 + 824, ctx.r8.u32);
	// li r8,98
	ctx.r8.s64 = 98;
	// stw r10,1244(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1244, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r7,1323(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1323, ctx.r7.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1248(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1248, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r8,1326(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1326, ctx.r8.u8);
	// li r9,97
	ctx.r9.s64 = 97;
	// lwz r30,120(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r29,140(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,160(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r5,1252(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1252, ctx.r5.u32);
	// li r5,97
	ctx.r5.s64 = 97;
	// stw r10,840(r20)
	PPC_STORE_U32(ctx.r20.u32 + 840, ctx.r10.u32);
	// li r10,98
	ctx.r10.s64 = 98;
	// stb r9,1327(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1327, ctx.r9.u8);
	// li r9,98
	ctx.r9.s64 = 98;
	// stw r7,844(r20)
	PPC_STORE_U32(ctx.r20.u32 + 844, ctx.r7.u32);
	// li r7,98
	ctx.r7.s64 = 98;
	// stw r8,860(r20)
	PPC_STORE_U32(ctx.r20.u32 + 860, ctx.r8.u32);
	// li r8,98
	ctx.r8.s64 = 98;
	// stb r6,1324(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1324, ctx.r6.u8);
	// stb r6,1330(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1330, ctx.r6.u8);
	// stb r4,1325(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1325, ctx.r4.u8);
	// stw r3,836(r20)
	PPC_STORE_U32(ctx.r20.u32 + 836, ctx.r3.u32);
	// stw r31,1256(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1256, ctx.r31.u32);
	// stw r30,1260(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1260, ctx.r30.u32);
	// stw r29,1272(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1272, ctx.r29.u32);
	// stw r28,856(r20)
	PPC_STORE_U32(ctx.r20.u32 + 856, ctx.r28.u32);
	// stw r27,1276(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1276, ctx.r27.u32);
	// stb r5,1331(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1331, ctx.r5.u8);
	// stw r11,1284(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1284, ctx.r11.u32);
	// stb r10,1333(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1333, ctx.r10.u8);
	// stw r26,868(r20)
	PPC_STORE_U32(ctx.r20.u32 + 868, ctx.r26.u32);
	// stw r11,1288(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1288, ctx.r11.u32);
	// stb r9,1334(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1334, ctx.r9.u8);
	// stw r25,872(r20)
	PPC_STORE_U32(ctx.r20.u32 + 872, ctx.r25.u32);
	// stw r11,1292(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1292, ctx.r11.u32);
	// stb r7,1335(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1335, ctx.r7.u8);
	// stw r24,876(r20)
	PPC_STORE_U32(ctx.r20.u32 + 876, ctx.r24.u32);
	// stw r11,1296(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1296, ctx.r11.u32);
	// stb r6,1336(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1336, ctx.r6.u8);
	// stw r23,880(r20)
	PPC_STORE_U32(ctx.r20.u32 + 880, ctx.r23.u32);
	// stw r22,1308(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1308, ctx.r22.u32);
	// stb r8,1339(r19)
	PPC_STORE_U8(ctx.r19.u32 + 1339, ctx.r8.u8);
	// stw r21,892(r20)
	PPC_STORE_U32(ctx.r20.u32 + 892, ctx.r21.u32);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AD9D8) {
	__imp__sub_823AD9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823ADBFC) {
	__imp__sub_823ADBFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADC00) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,32752
	ctx.r3.s64 = ctx.r11.s64 + 32752;
	// bl 0x8238b538
	ctx.lr = 0x823ADC1C;
	sub_8238B538(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r9,r10,-19960
	ctx.r9.s64 = ctx.r10.s64 + -19960;
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ADC00) {
	__imp__sub_823ADC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// addi r10,r7,-19840
	ctx.r10.s64 = ctx.r7.s64 + -19840;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r5,r10,256
	ctx.r5.s64 = ctx.r10.s64 + 256;
	// lhz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// rotlwi r4,r6,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// ldx r11,r4,r3
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r3.u32);
	// rldicl r10,r11,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// rldicl r9,r11,19,45
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 19) & 0x7FFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// rlwimi r8,r7,1,19,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 1) & 0x1FFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r3,r8,0,19,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFE;
	// rlwinm r11,r3,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lbzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r8,r9,12,14,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3F000;
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwimi r10,r7,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// rlwimi r3,r10,12,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ADC38) {
	__imp__sub_823ADC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823ADCA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8236b940
	ctx.lr = 0x823ADCB8;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823adcf4
	if (!ctx.cr6.lt) goto loc_823ADCF4;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823adcf4
	if (ctx.cr6.eq) goto loc_823ADCF4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823adcf4
	if (!ctx.cr0.lt) goto loc_823ADCF4;
	// bl 0x823905c8
	ctx.lr = 0x823ADCF4;
	sub_823905C8(ctx, base);
loc_823ADCF4:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r6,r7,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// ldx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r5.u32);
	// rldicl r11,r4,34,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 34) & 0x3FFFFFFFF;
	// rldicl r10,r4,19,45
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 19) & 0x7FFFF;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// rlwimi r9,r8,1,19,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0x1FFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r5,r9,0,19,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE;
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a8950
	ctx.lr = 0x823ADD48;
	sub_823A8950(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823add60
	if (!ctx.cr6.eq) goto loc_823ADD60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d5fc8
	ctx.lr = 0x823ADD5C;
	sub_823D5FC8(ctx, base);
	// b 0x823addc8
	goto loc_823ADDC8;
loc_823ADD60:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x823d3350
	ctx.lr = 0x823ADD80;
	sub_823D3350(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,196(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// lhz r7,6(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x823addc8
	if (ctx.cr6.eq) goto loc_823ADDC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823ADDAC;
	sub_823D5A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823ADDB8;
	sub_823D5650(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3350
	ctx.lr = 0x823ADDC8;
	sub_823D3350(ctx, base);
loc_823ADDC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823ADCA0) {
	__imp__sub_823ADCA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823ADDE4) {
	__imp__sub_823ADDE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// addi r10,r7,-19840
	ctx.r10.s64 = ctx.r7.s64 + -19840;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r5,r10,256
	ctx.r5.s64 = ctx.r10.s64 + 256;
	// lhz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// rotlwi r4,r6,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// ldx r11,r4,r3
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r3.u32);
	// rldicl r10,r11,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// rldicl r9,r11,19,45
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 19) & 0x7FFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// rlwimi r8,r7,1,19,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 1) & 0x1FFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r3,r8,0,19,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFE;
	// rlwinm r11,r3,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFF;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lbzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r8,r9,12,14,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3F000;
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r6,512
	ctx.r5.u64 = ctx.r6.u64 | 512;
	// or r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwimi r3,r4,12,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ADDE8) {
	__imp__sub_823ADDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823ADE60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8236b940
	ctx.lr = 0x823ADE70;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823adeac
	if (!ctx.cr6.lt) goto loc_823ADEAC;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823adeac
	if (ctx.cr6.eq) goto loc_823ADEAC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823adeac
	if (!ctx.cr0.lt) goto loc_823ADEAC;
	// bl 0x823905c8
	ctx.lr = 0x823ADEAC;
	sub_823905C8(ctx, base);
loc_823ADEAC:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r29.u8);
	// addi r31,r28,20
	ctx.r31.s64 = ctx.r28.s64 + 20;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r7,r8,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// lwz r6,92(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// ldx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r6.u32);
	// rldicl r4,r5,34,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 34) & 0x3FFFFFFFF;
	// rldicl r11,r5,19,45
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 19) & 0x7FFFF;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// rlwimi r9,r10,1,19,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1FFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r6,r9,0,19,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE;
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a8950
	ctx.lr = 0x823ADF00;
	sub_823A8950(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823adf18
	if (!ctx.cr6.eq) goto loc_823ADF18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d5fc8
	ctx.lr = 0x823ADF14;
	sub_823D5FC8(ctx, base);
	// b 0x823adf7c
	goto loc_823ADF7C;
loc_823ADF18:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3350
	ctx.lr = 0x823ADF34;
	sub_823D3350(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// lhz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x823adf7c
	if (ctx.cr6.eq) goto loc_823ADF7C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823ADF60;
	sub_823D5A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823ADF6C;
	sub_823D5650(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3350
	ctx.lr = 0x823ADF7C;
	sub_823D3350(ctx, base);
loc_823ADF7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823ADE58) {
	__imp__sub_823ADE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADF98) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwimi r8,r6,1,19,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 1) & 0x1FFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r11,r8,0,19,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFE;
	// rlwinm r10,r11,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lbzx r8,r10,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r7,r8,12,14,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x3F000;
	// or r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r4,r5,1024
	ctx.r4.u64 = ctx.r5.u64 | 1024;
	// or r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rlwimi r3,r11,12,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823ADF98) {
	__imp__sub_823ADF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823ADFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823ADFF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8236b940
	ctx.lr = 0x823AE000;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823ae03c
	if (!ctx.cr6.lt) goto loc_823AE03C;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ae03c
	if (ctx.cr6.eq) goto loc_823AE03C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823ae03c
	if (!ctx.cr0.lt) goto loc_823AE03C;
	// bl 0x823905c8
	ctx.lr = 0x823AE03C;
	sub_823905C8(ctx, base);
loc_823AE03C:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r10,2
	ctx.r10.s64 = 2;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r9,r8,1,19,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0x1FFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r5,r9,0,19,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE;
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a8950
	ctx.lr = 0x823AE074;
	sub_823A8950(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823ae08c
	if (!ctx.cr6.eq) goto loc_823AE08C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d61f8
	ctx.lr = 0x823AE088;
	sub_823D61F8(ctx, base);
	// b 0x823ae0ec
	goto loc_823AE0EC;
loc_823AE08C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x823d3298
	ctx.lr = 0x823AE0A8;
	sub_823D3298(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,196(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// lhz r7,6(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x823ae0ec
	if (ctx.cr6.eq) goto loc_823AE0EC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823AE0D4;
	sub_823D5A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823AE0E0;
	sub_823D5650(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3298
	ctx.lr = 0x823AE0EC;
	sub_823D3298(ctx, base);
loc_823AE0EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823ADFE8) {
	__imp__sub_823ADFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823AE110;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8236b940
	ctx.lr = 0x823AE120;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823ae15c
	if (!ctx.cr6.lt) goto loc_823AE15C;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ae15c
	if (ctx.cr6.eq) goto loc_823AE15C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823ae15c
	if (!ctx.cr0.lt) goto loc_823AE15C;
	// bl 0x823905c8
	ctx.lr = 0x823AE15C;
	sub_823905C8(ctx, base);
loc_823AE15C:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r31,r29,48
	ctx.r31.s64 = ctx.r29.s64 + 48;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicl r8,r9,34,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 34) & 0x3FFFFFFFF;
	// rldicl r7,r9,20,44
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 20) & 0xFFFFF;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// rldicl r4,r9,11,53
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 11) & 0x7FF;
	// rlwimi r10,r6,1,19,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 1) & 0x1FFE) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE001);
	// rldicl r5,r9,19,45
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 19) & 0x7FFFF;
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// rlwimi r7,r11,0,16,30
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFE) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0001);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a8950
	ctx.lr = 0x823AE1A8;
	sub_823A8950(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823ae1c0
	if (!ctx.cr6.eq) goto loc_823AE1C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d63c8
	ctx.lr = 0x823AE1BC;
	sub_823D63C8(ctx, base);
	// b 0x823ae254
	goto loc_823AE254;
loc_823AE1C0:
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r11,-18932
	ctx.r29.s64 = ctx.r11.s64 + -18932;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicl r7,r8,11,53
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 11) & 0x7FF;
	// rlwinm r6,r7,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r5,r6,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823AE1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,196(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823ae254
	if (ctx.cr6.eq) goto loc_823AE254;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823AE224;
	sub_823D5A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823AE230;
	sub_823D5650(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicl r7,r8,11,53
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 11) & 0x7FF;
	// rlwinm r6,r7,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lwzx r5,r6,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823AE254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823AE254:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AE108) {
	__imp__sub_823AE108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE270) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lbz r6,-13(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -13);
	// lbz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r4,r3,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// rlwimi r6,r4,4,22,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x3F0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFC0F);
	// clrlwi r10,r6,22
	ctx.r10.u64 = ctx.r6.u32 & 0x3FF;
	// rlwimi r5,r10,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r5,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwimi r3,r11,12,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AE270) {
	__imp__sub_823AE270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AE2B4) {
	__imp__sub_823AE2B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823AE2C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8236b940
	ctx.lr = 0x823AE2D0;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823ae30c
	if (!ctx.cr6.lt) goto loc_823AE30C;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ae30c
	if (ctx.cr6.eq) goto loc_823AE30C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823ae30c
	if (!ctx.cr0.lt) goto loc_823AE30C;
	// bl 0x823905c8
	ctx.lr = 0x823AE30C;
	sub_823905C8(ctx, base);
loc_823AE30C:
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r29,60
	ctx.r31.s64 = ctx.r29.s64 + 60;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823a8950
	ctx.lr = 0x823AE320;
	sub_823A8950(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ae338
	if (!ctx.cr6.eq) goto loc_823AE338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d6550
	ctx.lr = 0x823AE334;
	sub_823D6550(ctx, base);
	// b 0x823ae388
	goto loc_823AE388;
loc_823AE338:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d1e48
	ctx.lr = 0x823AE34C;
	sub_823D1E48(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// lhz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x823ae388
	if (ctx.cr6.eq) goto loc_823AE388;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823AE370;
	sub_823D5A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823AE37C;
	sub_823D5650(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d1e48
	ctx.lr = 0x823AE388;
	sub_823D1E48(ctx, base);
loc_823AE388:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AE2B8) {
	__imp__sub_823AE2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AE3A4) {
	__imp__sub_823AE3A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE3A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lbz r6,-13(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -13);
	// lbz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r4,r3,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// rlwimi r6,r4,4,22,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x3F0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFC0F);
	// clrlwi r10,r6,22
	ctx.r10.u64 = ctx.r6.u32 & 0x3FF;
	// rlwimi r5,r10,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r5,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwimi r3,r11,12,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AE3A8) {
	__imp__sub_823AE3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AE3EC) {
	__imp__sub_823AE3EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823AE3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8236b940
	ctx.lr = 0x823AE408;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823ae444
	if (!ctx.cr6.lt) goto loc_823AE444;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ae444
	if (ctx.cr6.eq) goto loc_823AE444;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823ae444
	if (!ctx.cr0.lt) goto loc_823AE444;
	// bl 0x823905c8
	ctx.lr = 0x823AE444;
	sub_823905C8(ctx, base);
loc_823AE444:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r29,68
	ctx.r31.s64 = ctx.r29.s64 + 68;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823a8950
	ctx.lr = 0x823AE458;
	sub_823A8950(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ae470
	if (!ctx.cr6.eq) goto loc_823AE470;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d6598
	ctx.lr = 0x823AE46C;
	sub_823D6598(ctx, base);
	// b 0x823ae4d0
	goto loc_823AE4D0;
loc_823AE470:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x823d22d0
	ctx.lr = 0x823AE48C;
	sub_823D22D0(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,196(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// lhz r7,6(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x823ae4d0
	if (ctx.cr6.eq) goto loc_823AE4D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823AE4B8;
	sub_823D5A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823AE4C4;
	sub_823D5650(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d22d0
	ctx.lr = 0x823AE4D0;
	sub_823D22D0(ctx, base);
loc_823AE4D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AE3F0) {
	__imp__sub_823AE3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AE4EC) {
	__imp__sub_823AE4EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE4F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lbz r6,-13(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -13);
	// lbz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r4,r3,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// rlwimi r6,r4,4,22,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x3F0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFC0F);
	// clrlwi r10,r6,22
	ctx.r10.u64 = ctx.r6.u32 & 0x3FF;
	// rlwimi r5,r10,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r5,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwimi r3,r11,12,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AE4F0) {
	__imp__sub_823AE4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AE534) {
	__imp__sub_823AE534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823AE540;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8236b940
	ctx.lr = 0x823AE550;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823ae58c
	if (!ctx.cr6.lt) goto loc_823AE58C;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ae58c
	if (ctx.cr6.eq) goto loc_823AE58C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823ae58c
	if (!ctx.cr0.lt) goto loc_823AE58C;
	// bl 0x823905c8
	ctx.lr = 0x823AE58C;
	sub_823905C8(ctx, base);
loc_823AE58C:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r29,80
	ctx.r31.s64 = ctx.r29.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823a8950
	ctx.lr = 0x823AE5A0;
	sub_823A8950(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ae5b8
	if (!ctx.cr6.eq) goto loc_823AE5B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d65e0
	ctx.lr = 0x823AE5B4;
	sub_823D65E0(ctx, base);
	// b 0x823ae618
	goto loc_823AE618;
loc_823AE5B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x823d2068
	ctx.lr = 0x823AE5D4;
	sub_823D2068(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,196(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// lhz r7,6(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x823ae618
	if (ctx.cr6.eq) goto loc_823AE618;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823AE600;
	sub_823D5A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823AE60C;
	sub_823D5650(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d2068
	ctx.lr = 0x823AE618;
	sub_823D2068(ctx, base);
loc_823AE618:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AE538) {
	__imp__sub_823AE538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AE634) {
	__imp__sub_823AE634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE638) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lbz r5,-13(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -13);
	// lhz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwimi r8,r4,1,15,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 1) & 0x1FFFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFE0001);
	// rlwinm r11,r8,0,16,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFE;
	// rlwinm r10,r11,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lbzx r8,r10,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// rlwimi r5,r8,4,22,27
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwinm r7,r5,9,13,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 9) & 0x7FE00;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r3,r6,12,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 12) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AE638) {
	__imp__sub_823AE638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823AE690;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8236b940
	ctx.lr = 0x823AE6A0;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823ae6dc
	if (!ctx.cr6.lt) goto loc_823AE6DC;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ae6dc
	if (ctx.cr6.eq) goto loc_823AE6DC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823ae6dc
	if (!ctx.cr0.lt) goto loc_823AE6DC;
	// bl 0x823905c8
	ctx.lr = 0x823AE6DC;
	sub_823905C8(ctx, base);
loc_823AE6DC:
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// addi r31,r29,92
	ctx.r31.s64 = ctx.r29.s64 + 92;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lhz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// rlwimi r9,r6,1,15,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 1) & 0x1FFFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFE0001);
	// rlwinm r4,r9,0,16,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFE;
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a8950
	ctx.lr = 0x823AE71C;
	sub_823A8950(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ae734
	if (!ctx.cr6.eq) goto loc_823AE734;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d6628
	ctx.lr = 0x823AE730;
	sub_823D6628(ctx, base);
	// b 0x823ae784
	goto loc_823AE784;
loc_823AE734:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d2928
	ctx.lr = 0x823AE748;
	sub_823D2928(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// lhz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x823ae784
	if (ctx.cr6.eq) goto loc_823AE784;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823AE76C;
	sub_823D5A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823AE778;
	sub_823D5650(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d2928
	ctx.lr = 0x823AE784;
	sub_823D2928(ctx, base);
loc_823AE784:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AE688) {
	__imp__sub_823AE688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE7A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwimi r8,r5,1,15,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0x1FFFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFE0001);
	// rlwinm r3,r8,0,16,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFE;
	// rlwinm r11,r3,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFF;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// rlwinm r9,r3,31,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0xFFF;
	// lbzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r7,r8,13,13,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x7E000;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r5,r6,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// oris r4,r5,320
	ctx.r4.u64 = ctx.r5.u64 | 20971520;
	// or r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 | ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AE7A0) {
	__imp__sub_823AE7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823AE7F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8236b940
	ctx.lr = 0x823AE808;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823ae844
	if (!ctx.cr6.lt) goto loc_823AE844;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ae844
	if (ctx.cr6.eq) goto loc_823AE844;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823ae844
	if (!ctx.cr0.lt) goto loc_823AE844;
	// bl 0x823905c8
	ctx.lr = 0x823AE844;
	sub_823905C8(ctx, base);
loc_823AE844:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r8,10
	ctx.r8.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lhz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// rlwimi r9,r6,1,15,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 1) & 0x1FFFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFE0001);
	// rlwinm r4,r9,0,16,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFE;
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a8950
	ctx.lr = 0x823AE884;
	sub_823A8950(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ae89c
	if (!ctx.cr6.eq) goto loc_823AE89C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d6690
	ctx.lr = 0x823AE898;
	sub_823D6690(ctx, base);
	// b 0x823ae8ec
	goto loc_823AE8EC;
loc_823AE89C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d36a0
	ctx.lr = 0x823AE8B0;
	sub_823D36A0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// lhz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x823ae8ec
	if (ctx.cr6.eq) goto loc_823AE8EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823AE8D4;
	sub_823D5A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823AE8E0;
	sub_823D5650(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d36a0
	ctx.lr = 0x823AE8EC;
	sub_823D36A0(ctx, base);
loc_823AE8EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AE7F0) {
	__imp__sub_823AE7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r7,92(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// ldx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r7.u32);
	// rldicl r5,r6,7,57
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 7) & 0x7F;
	// clrlwi r3,r5,26
	ctx.r3.u64 = ctx.r5.u32 & 0x3F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AE908) {
	__imp__sub_823AE908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE930) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r5,r6,20
	ctx.r5.u64 = ctx.r6.u32 & 0xFFF;
	// lbzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AE930) {
	__imp__sub_823AE930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicl r9,r10,7,57
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 7) & 0x7F;
	// clrlwi r3,r9,26
	ctx.r3.u64 = ctx.r9.u32 & 0x3F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AE958) {
	__imp__sub_823AE958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AE96C) {
	__imp__sub_823AE96C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE970) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AE970) {
	__imp__sub_823AE970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE998) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AE998) {
	__imp__sub_823AE998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE9C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AE9C0) {
	__imp__sub_823AE9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AE9E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lbzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AE9E8) {
	__imp__sub_823AE9E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AEA0C) {
	__imp__sub_823AEA0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEA10) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lbzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AEA10) {
	__imp__sub_823AEA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AEA2C) {
	__imp__sub_823AEA2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r7,92(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// ldx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r7.u32);
	// rldicl r5,r6,7,57
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 7) & 0x7F;
	// clrlwi r3,r5,26
	ctx.r3.u64 = ctx.r5.u32 & 0x3F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AEA30) {
	__imp__sub_823AEA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823AEA60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8236b940
	ctx.lr = 0x823AEA70;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823aeaac
	if (!ctx.cr6.lt) goto loc_823AEAAC;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aeaac
	if (ctx.cr6.eq) goto loc_823AEAAC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823aeaac
	if (!ctx.cr0.lt) goto loc_823AEAAC;
	// bl 0x823905c8
	ctx.lr = 0x823AEAAC;
	sub_823905C8(ctx, base);
loc_823AEAAC:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r29.u8);
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r7,r8,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// lwz r6,92(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// ldx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r6.u32);
	// rldicl r4,r5,34,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 34) & 0x3FFFFFFFF;
	// rldicl r11,r5,19,45
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 19) & 0x7FFFF;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// rlwimi r9,r10,1,19,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1FFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r6,r9,0,19,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE;
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a8950
	ctx.lr = 0x823AEB00;
	sub_823A8950(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823aeb18
	if (!ctx.cr6.eq) goto loc_823AEB18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d5fc8
	ctx.lr = 0x823AEB14;
	sub_823D5FC8(ctx, base);
	// b 0x823aeb7c
	goto loc_823AEB7C;
loc_823AEB18:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3350
	ctx.lr = 0x823AEB34;
	sub_823D3350(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// lhz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x823aeb7c
	if (ctx.cr6.eq) goto loc_823AEB7C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823AEB60;
	sub_823D5A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823AEB6C;
	sub_823D5650(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3350
	ctx.lr = 0x823AEB7C;
	sub_823D3350(ctx, base);
loc_823AEB7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AEA58) {
	__imp__sub_823AEA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEB98) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823d5fc8
	ctx.lr = 0x823AEBB4;
	sub_823D5FC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

PPC_WEAK_FUNC(sub_823AEB98) {
	__imp__sub_823AEB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AEBDC) {
	__imp__sub_823AEBDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEBE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AEBE0) {
	__imp__sub_823AEBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AEBEC) {
	__imp__sub_823AEBEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AEBF0) {
	__imp__sub_823AEBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEC18) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r11,r9,-19840
	ctx.r11.s64 = ctx.r9.s64 + -19840;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r5,r6,20
	ctx.r5.u64 = ctx.r6.u32 & 0xFFF;
	// lbzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AEC18) {
	__imp__sub_823AEC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823AEC48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8236b940
	ctx.lr = 0x823AEC58;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823aec94
	if (!ctx.cr6.lt) goto loc_823AEC94;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mulli r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 * 552;
	// addi r11,r9,3224
	ctx.r11.s64 = ctx.r9.s64 + 3224;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aec94
	if (ctx.cr6.eq) goto loc_823AEC94;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823aec94
	if (!ctx.cr0.lt) goto loc_823AEC94;
	// bl 0x823905c8
	ctx.lr = 0x823AEC94;
	sub_823905C8(ctx, base);
loc_823AEC94:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r10,3
	ctx.r10.s64 = 3;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r9,r8,1,19,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0x1FFE) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r5,r9,0,19,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE;
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a8950
	ctx.lr = 0x823AECCC;
	sub_823A8950(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823aece4
	if (!ctx.cr6.eq) goto loc_823AECE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d61f8
	ctx.lr = 0x823AECE0;
	sub_823D61F8(ctx, base);
	// b 0x823aed44
	goto loc_823AED44;
loc_823AECE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x823d3298
	ctx.lr = 0x823AED00;
	sub_823D3298(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,196(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// lhz r7,6(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x823aed44
	if (ctx.cr6.eq) goto loc_823AED44;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d5a38
	ctx.lr = 0x823AED2C;
	sub_823D5A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x823d5650
	ctx.lr = 0x823AED38;
	sub_823D5650(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3298
	ctx.lr = 0x823AED44;
	sub_823D3298(ctx, base);
loc_823AED44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823AEC40) {
	__imp__sub_823AEC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AED60) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x823d61f8
	ctx.lr = 0x823AED7C;
	sub_823D61F8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

PPC_WEAK_FUNC(sub_823AED60) {
	__imp__sub_823AED60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AEDA4) {
	__imp__sub_823AEDA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEDA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AEDA8) {
	__imp__sub_823AEDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AEDB4) {
	__imp__sub_823AEDB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AEDB8) {
	__imp__sub_823AEDB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEDE0) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// stw r3,-19968(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19968, ctx.r3.u32);
	// lwz r10,5952(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5952);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823aee68
	if (ctx.cr6.eq) goto loc_823AEE68;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13352
	ctx.r10.s64 = ctx.r11.s64 + 13352;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bl 0x823ad508
	ctx.lr = 0x823AEE1C;
	sub_823AD508(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8238d710
	ctx.lr = 0x823AEE24;
	sub_8238D710(ctx, base);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// addi r11,r9,-19960
	ctx.r11.s64 = ctx.r9.s64 + -19960;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r8,-15488
	ctx.r5.s64 = ctx.r8.s64 + -15488;
	// ori r4,r7,6152
	ctx.r4.u64 = ctx.r7.u64 | 6152;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// ori r3,r6,6156
	ctx.r3.u64 = ctx.r6.u64 | 6156;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stwx r10,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r10,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r10.u32);
loc_823AEE68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AEDE0) {
	__imp__sub_823AEDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEE78) {
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
	// bl 0x8228c220
	ctx.lr = 0x823AEE8C;
	sub_8228C220(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aeeb4
	if (ctx.cr6.eq) goto loc_823AEEB4;
	// bl 0x820be020
	ctx.lr = 0x823AEEA4;
	sub_820BE020(ctx, base);
	// lwz r11,1292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823aeeb4
	if (ctx.cr6.eq) goto loc_823AEEB4;
	// bl 0x823ad848
	ctx.lr = 0x823AEEB4;
	sub_823AD848(ctx, base);
loc_823AEEB4:
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

PPC_WEAK_FUNC(sub_823AEE78) {
	__imp__sub_823AEE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEEC8) {
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
	// bl 0x8228c300
	ctx.lr = 0x823AEEDC;
	sub_8228C300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aeef8
	if (!ctx.cr6.eq) goto loc_823AEEF8;
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
loc_823AEEF8:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aef20
	if (ctx.cr6.eq) goto loc_823AEF20;
	// bl 0x820be020
	ctx.lr = 0x823AEF10;
	sub_820BE020(ctx, base);
	// lwz r11,1292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823aef20
	if (ctx.cr6.eq) goto loc_823AEF20;
	// bl 0x823ad848
	ctx.lr = 0x823AEF20;
	sub_823AD848(ctx, base);
loc_823AEF20:
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

PPC_WEAK_FUNC(sub_823AEEC8) {
	__imp__sub_823AEEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEF38) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r11,-19960
	ctx.r11.s64 = ctx.r11.s64 + -19960;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823AEF5C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823aef5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823AEF5C;
	// bl 0x823b1e18
	ctx.lr = 0x823AEF68;
	sub_823B1E18(ctx, base);
	// bl 0x823ad9d8
	ctx.lr = 0x823AEF6C;
	sub_823AD9D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AEF38) {
	__imp__sub_823AEF38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AEF7C) {
	__imp__sub_823AEF7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AEF80) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 * 108;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823af094
	if (ctx.cr6.eq) goto loc_823AF094;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// lhz r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r8,r5,-19840
	ctx.r8.s64 = ctx.r5.s64 + -19840;
	// addi r9,r9,21
	ctx.r9.s64 = ctx.r9.s64 + 21;
	// lwz r10,13412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// addi r5,r8,256
	ctx.r5.s64 = ctx.r8.s64 + 256;
	// lhz r7,2(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r31,-32197
	ctx.r31.s64 = -2110062592;
	// rotlwi r8,r7,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// addi r7,r11,-9160
	ctx.r7.s64 = ctx.r11.s64 + -9160;
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// addi r31,r31,-9056
	ctx.r31.s64 = ctx.r31.s64 + -9056;
	// li r11,0
	ctx.r11.s64 = 0;
	// ldx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// rldicl r10,r8,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 34) & 0x3FFFFFFFF;
	// rldicl r8,r8,19,45
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 19) & 0x7FFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rlwimi r6,r10,1,19,30
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1FFE) | (ctx.r6.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r10,r6,0,19,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1FFE;
	// rlwinm r6,r10,31,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lbzx r5,r6,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r6,r5,12,14,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0x3F000;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwimi r10,r5,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// rlwimi r30,r10,12,0,19
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xFFFFF000) | (ctx.r30.u64 & 0xFFFFFFFF00000FFF);
	// stwx r30,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r30.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,676(r9)
	PPC_STORE_U32(ctx.r9.u32 + 676, ctx.r4.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,680(r6)
	PPC_STORE_U32(ctx.r6.u32 + 680, ctx.r7.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r31,684(r4)
	PPC_STORE_U32(ctx.r4.u32 + 684, ctx.r31.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,688(r9)
	PPC_STORE_U32(ctx.r9.u32 + 688, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,692(r7)
	PPC_STORE_U32(ctx.r7.u32 + 692, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,696(r5)
	PPC_STORE_U32(ctx.r5.u32 + 696, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
loc_823AF094:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AEF80) {
	__imp__sub_823AEF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF0A0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 * 108;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823af1c0
	if (ctx.cr6.eq) goto loc_823AF1C0;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// lhz r6,-32(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r8,r5,-19840
	ctx.r8.s64 = ctx.r5.s64 + -19840;
	// addi r9,r9,21
	ctx.r9.s64 = ctx.r9.s64 + 21;
	// lwz r10,13412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// addi r5,r8,256
	ctx.r5.s64 = ctx.r8.s64 + 256;
	// lhz r7,2(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r31,-32197
	ctx.r31.s64 = -2110062592;
	// rotlwi r8,r7,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// addi r7,r11,-8728
	ctx.r7.s64 = ctx.r11.s64 + -8728;
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// addi r31,r31,-8616
	ctx.r31.s64 = ctx.r31.s64 + -8616;
	// li r11,0
	ctx.r11.s64 = 0;
	// ldx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// rldicl r10,r8,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 34) & 0x3FFFFFFFF;
	// rldicl r8,r8,19,45
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 19) & 0x7FFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rlwimi r6,r10,1,19,30
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1FFE) | (ctx.r6.u64 & 0xFFFFFFFFFFFFE001);
	// rlwinm r10,r6,0,19,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1FFE;
	// rlwinm r6,r10,31,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFF;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lbzx r6,r6,r5
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r5,r6,12,14,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0x3F000;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r6,512
	ctx.r5.u64 = ctx.r6.u64 | 512;
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwimi r30,r10,12,0,19
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xFFFFF000) | (ctx.r30.u64 & 0xFFFFFFFF00000FFF);
	// stwx r30,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r30.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,676(r8)
	PPC_STORE_U32(ctx.r8.u32 + 676, ctx.r4.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,680(r5)
	PPC_STORE_U32(ctx.r5.u32 + 680, ctx.r7.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r31,684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 684, ctx.r31.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 688, ctx.r11.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,692(r6)
	PPC_STORE_U32(ctx.r6.u32 + 692, ctx.r11.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,696(r4)
	PPC_STORE_U32(ctx.r4.u32 + 696, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_823AF1C0:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AF0A0) {
	__imp__sub_823AF0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AF1CC) {
	__imp__sub_823AF1CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF1D0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 * 108;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823af2d0
	if (ctx.cr6.eq) goto loc_823AF2D0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r8,-32(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r9,r10,-19840
	ctx.r9.s64 = ctx.r10.s64 + -19840;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r7,-8296
	ctx.r6.s64 = ctx.r7.s64 + -8296;
	// addi r5,r9,256
	ctx.r5.s64 = ctx.r9.s64 + 256;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r7,r10,21
	ctx.r7.s64 = ctx.r10.s64 + 21;
	// rlwimi r8,r9,1,19,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x1FFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE001);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// rlwinm r11,r8,0,19,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFE;
	// addi r8,r10,-8216
	ctx.r8.s64 = ctx.r10.s64 + -8216;
	// rlwinm r10,r11,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
	// clrlwi r31,r11,31
	ctx.r31.u64 = ctx.r11.u32 & 0x1;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r5,r10,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r10,r5,12,14,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0x3F000;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r10,r5,1024
	ctx.r10.u64 = ctx.r5.u64 | 1024;
	// or r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 | ctx.r31.u64;
	// rlwimi r30,r9,12,0,19
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0xFFFFF000) | (ctx.r30.u64 & 0xFFFFFFFF00000FFF);
	// stwx r30,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r30.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,676(r5)
	PPC_STORE_U32(ctx.r5.u32 + 676, ctx.r4.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r6,680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 680, ctx.r6.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,684(r7)
	PPC_STORE_U32(ctx.r7.u32 + 684, ctx.r8.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,688(r5)
	PPC_STORE_U32(ctx.r5.u32 + 688, ctx.r11.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 692, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,696(r8)
	PPC_STORE_U32(ctx.r8.u32 + 696, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
loc_823AF2D0:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AF1D0) {
	__imp__sub_823AF1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AF2DC) {
	__imp__sub_823AF2DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF2E0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 * 108;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823af3c0
	if (ctx.cr6.eq) goto loc_823AF3C0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32197
	ctx.r9.s64 = -2110062592;
	// addi r6,r10,21
	ctx.r6.s64 = ctx.r10.s64 + 21;
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// addi r7,r9,-29520
	ctx.r7.s64 = ctx.r9.s64 + -29520;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r5,r8,-7928
	ctx.r5.s64 = ctx.r8.s64 + -7928;
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// rldicl r8,r10,7,57
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 7) & 0x7F;
	// rldicl r6,r10,11,53
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FF;
	// rldicl r31,r10,19,45
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 19) & 0x7FFFF;
	// rlwimi r6,r8,4,22,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0x3F0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFC0F);
	// rldicl r8,r10,20,44
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 20) & 0xFFFFF;
	// clrlwi r6,r6,22
	ctx.r6.u64 = ctx.r6.u32 & 0x3FF;
	// rldicl r10,r10,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0x3FFFFFFFF;
	// rlwimi r31,r6,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r8,r31,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// rlwimi r10,r8,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,676(r8)
	PPC_STORE_U32(ctx.r8.u32 + 676, ctx.r4.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,680(r4)
	PPC_STORE_U32(ctx.r4.u32 + 680, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r5,684(r9)
	PPC_STORE_U32(ctx.r9.u32 + 684, ctx.r5.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,688(r7)
	PPC_STORE_U32(ctx.r7.u32 + 688, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,692(r5)
	PPC_STORE_U32(ctx.r5.u32 + 692, ctx.r11.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 696, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_823AF3C0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AF2E0) {
	__imp__sub_823AF2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF3C8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 * 108;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823af4bc
	if (ctx.cr6.eq) goto loc_823AF4BC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r7,r10,21
	ctx.r7.s64 = ctx.r10.s64 + 21;
	// addi r9,r9,-19840
	ctx.r9.s64 = ctx.r9.s64 + -19840;
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r9,256
	ctx.r6.s64 = ctx.r9.s64 + 256;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r8,-7568
	ctx.r8.s64 = ctx.r8.s64 + -7568;
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r5.u32);
	// addi r7,r7,-7496
	ctx.r7.s64 = ctx.r7.s64 + -7496;
	// lbz r5,-29(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -29);
	// lbz r31,-30(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -30);
	// lhz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// rlwimi r5,r6,4,22,27
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// clrlwi r6,r5,22
	ctx.r6.u64 = ctx.r5.u32 & 0x3FF;
	// rlwimi r31,r6,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r10,r31,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// rlwimi r30,r10,12,0,19
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xFFFFF000) | (ctx.r30.u64 & 0xFFFFFFFF00000FFF);
	// stwx r30,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r30.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 676, ctx.r4.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,680(r6)
	PPC_STORE_U32(ctx.r6.u32 + 680, ctx.r8.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,684(r4)
	PPC_STORE_U32(ctx.r4.u32 + 684, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,688(r9)
	PPC_STORE_U32(ctx.r9.u32 + 688, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,692(r7)
	PPC_STORE_U32(ctx.r7.u32 + 692, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,696(r5)
	PPC_STORE_U32(ctx.r5.u32 + 696, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
loc_823AF4BC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AF3C8) {
	__imp__sub_823AF3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF4C8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 * 108;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823af5bc
	if (ctx.cr6.eq) goto loc_823AF5BC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r7,r10,21
	ctx.r7.s64 = ctx.r10.s64 + 21;
	// addi r9,r9,-19840
	ctx.r9.s64 = ctx.r9.s64 + -19840;
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r9,256
	ctx.r6.s64 = ctx.r9.s64 + 256;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r8,-7256
	ctx.r8.s64 = ctx.r8.s64 + -7256;
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r5.u32);
	// addi r7,r7,-7184
	ctx.r7.s64 = ctx.r7.s64 + -7184;
	// lbz r5,-29(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -29);
	// lbz r31,-30(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -30);
	// lhz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// rlwimi r5,r6,4,22,27
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// clrlwi r6,r5,22
	ctx.r6.u64 = ctx.r5.u32 & 0x3FF;
	// rlwimi r31,r6,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r10,r31,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// rlwimi r30,r10,12,0,19
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xFFFFF000) | (ctx.r30.u64 & 0xFFFFFFFF00000FFF);
	// stwx r30,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r30.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 676, ctx.r4.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,680(r6)
	PPC_STORE_U32(ctx.r6.u32 + 680, ctx.r8.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,684(r4)
	PPC_STORE_U32(ctx.r4.u32 + 684, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,688(r9)
	PPC_STORE_U32(ctx.r9.u32 + 688, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,692(r7)
	PPC_STORE_U32(ctx.r7.u32 + 692, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,696(r5)
	PPC_STORE_U32(ctx.r5.u32 + 696, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
loc_823AF5BC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AF4C8) {
	__imp__sub_823AF4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF5C8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 * 108;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823af6bc
	if (ctx.cr6.eq) goto loc_823AF6BC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r7,r10,21
	ctx.r7.s64 = ctx.r10.s64 + 21;
	// addi r9,r9,-19840
	ctx.r9.s64 = ctx.r9.s64 + -19840;
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r9,256
	ctx.r6.s64 = ctx.r9.s64 + 256;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r8,-6928
	ctx.r8.s64 = ctx.r8.s64 + -6928;
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r5.u32);
	// addi r7,r7,-6856
	ctx.r7.s64 = ctx.r7.s64 + -6856;
	// lbz r5,-29(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -29);
	// lbz r31,-30(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -30);
	// lhz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// rlwimi r5,r6,4,22,27
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x3F0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC0F);
	// clrlwi r6,r5,22
	ctx.r6.u64 = ctx.r5.u32 & 0x3FF;
	// rlwimi r31,r6,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r10,r31,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// rlwimi r30,r10,12,0,19
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xFFFFF000) | (ctx.r30.u64 & 0xFFFFFFFF00000FFF);
	// stwx r30,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r30.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 676, ctx.r4.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,680(r6)
	PPC_STORE_U32(ctx.r6.u32 + 680, ctx.r8.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,684(r4)
	PPC_STORE_U32(ctx.r4.u32 + 684, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,688(r9)
	PPC_STORE_U32(ctx.r9.u32 + 688, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,692(r7)
	PPC_STORE_U32(ctx.r7.u32 + 692, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,696(r5)
	PPC_STORE_U32(ctx.r5.u32 + 696, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
loc_823AF6BC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AF5C8) {
	__imp__sub_823AF5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF6C8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 * 108;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823af7c8
	if (ctx.cr6.eq) goto loc_823AF7C8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r8,-32(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r9,r10,-19840
	ctx.r9.s64 = ctx.r10.s64 + -19840;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r7,-6600
	ctx.r6.s64 = ctx.r7.s64 + -6600;
	// addi r5,r9,256
	ctx.r5.s64 = ctx.r9.s64 + 256;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,21
	ctx.r7.s64 = ctx.r10.s64 + 21;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r11,-6520
	ctx.r7.s64 = ctx.r11.s64 + -6520;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r9,-29(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -29);
	// lhz r31,-32(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + -32);
	// rlwimi r8,r31,1,15,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0x1FFFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFE0001);
	// rlwinm r8,r8,0,16,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFE;
	// rlwinm r31,r8,31,17,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFF;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lbzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// rlwimi r9,r5,4,22,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x3F0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC0F);
	// rlwinm r9,r9,9,13,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x7FE00;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwimi r30,r8,12,0,19
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xFFFFF000) | (ctx.r30.u64 & 0xFFFFFFFF00000FFF);
	// stwx r30,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r30.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 676, ctx.r4.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r6,680(r8)
	PPC_STORE_U32(ctx.r8.u32 + 680, ctx.r6.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,684(r5)
	PPC_STORE_U32(ctx.r5.u32 + 684, ctx.r7.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 688, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,692(r8)
	PPC_STORE_U32(ctx.r8.u32 + 692, ctx.r11.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,696(r6)
	PPC_STORE_U32(ctx.r6.u32 + 696, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
loc_823AF7C8:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AF6C8) {
	__imp__sub_823AF6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AF7D4) {
	__imp__sub_823AF7D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF7D8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 * 108;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823af8d4
	if (ctx.cr6.eq) goto loc_823AF8D4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r9,r10,-19840
	ctx.r9.s64 = ctx.r10.s64 + -19840;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r7,-6240
	ctx.r6.s64 = ctx.r7.s64 + -6240;
	// addi r5,r9,256
	ctx.r5.s64 = ctx.r9.s64 + 256;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,21
	ctx.r7.s64 = ctx.r10.s64 + 21;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r11,-6160
	ctx.r7.s64 = ctx.r11.s64 + -6160;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwimi r8,r9,1,15,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x1FFFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFE0001);
	// rlwinm r9,r8,0,16,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFE;
	// rlwinm r8,r9,31,17,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFF;
	// clrlwi r31,r9,31
	ctx.r31.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r9,r9,31,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xFFF;
	// lbzx r8,r8,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// rlwinm r5,r8,13,13,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x7E000;
	// or r8,r5,r31
	ctx.r8.u64 = ctx.r5.u64 | ctx.r31.u64;
	// rlwinm r5,r8,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// oris r8,r5,320
	ctx.r8.u64 = ctx.r5.u64 | 20971520;
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,676(r9)
	PPC_STORE_U32(ctx.r9.u32 + 676, ctx.r4.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r6,680(r5)
	PPC_STORE_U32(ctx.r5.u32 + 680, ctx.r6.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 684, ctx.r7.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 688, ctx.r11.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,692(r6)
	PPC_STORE_U32(ctx.r6.u32 + 692, ctx.r11.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,696(r4)
	PPC_STORE_U32(ctx.r4.u32 + 696, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_823AF8D4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AF7D8) {
	__imp__sub_823AF7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AF8DC) {
	__imp__sub_823AF8DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF8E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r6,-5880
	ctx.r7.s64 = ctx.r6.s64 + -5880;
	// add r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r10,13412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lis r5,-32197
	ctx.r5.s64 = -2110062592;
	// lhz r9,2(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r5,-9056
	ctx.r8.s64 = ctx.r5.s64 + -9056;
	// rotlwi r5,r9,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// ldx r9,r5,r10
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r10.u32);
	// rldicl r5,r9,7,57
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 7) & 0x7F;
	// clrlwi r10,r5,26
	ctx.r10.u64 = ctx.r5.u32 & 0x3F;
	// stw r10,120(r6)
	PPC_STORE_U32(ctx.r6.u32 + 120, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,124(r6)
	PPC_STORE_U32(ctx.r6.u32 + 124, ctx.r4.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// rlwinm r4,r5,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r7,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 132, ctx.r8.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,136(r7)
	PPC_STORE_U32(ctx.r7.u32 + 136, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,140(r5)
	PPC_STORE_U32(ctx.r5.u32 + 140, ctx.r11.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AF8E0) {
	__imp__sub_823AF8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AF9AC) {
	__imp__sub_823AF9AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AF9B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r9,r10,-19840
	ctx.r9.s64 = ctx.r10.s64 + -19840;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// addi r6,r9,256
	ctx.r6.s64 = ctx.r9.s64 + 256;
	// addi r9,r7,-5840
	ctx.r9.s64 = ctx.r7.s64 + -5840;
	// addi r7,r8,-8216
	ctx.r7.s64 = ctx.r8.s64 + -8216;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r8,r5,20
	ctx.r8.u64 = ctx.r5.u32 & 0xFFF;
	// lbzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stw r6,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r4.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r8,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r9,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 136, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,140(r7)
	PPC_STORE_U32(ctx.r7.u32 + 140, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,144(r5)
	PPC_STORE_U32(ctx.r5.u32 + 144, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AF9B0) {
	__imp__sub_823AF9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AFA78) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// addi r7,r10,-5800
	ctx.r7.s64 = ctx.r10.s64 + -5800;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r6,r8,-7928
	ctx.r6.s64 = ctx.r8.s64 + -7928;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rldicl r9,r5,7,57
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u64, 7) & 0x7F;
	// clrlwi r8,r9,26
	ctx.r8.u64 = ctx.r9.u32 & 0x3F;
	// stw r8,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r8.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r4.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r7,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r6,132(r5)
	PPC_STORE_U32(ctx.r5.u32 + 132, ctx.r6.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r11.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,144(r6)
	PPC_STORE_U32(ctx.r6.u32 + 144, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AFA78) {
	__imp__sub_823AFA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AFB30) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r9,r10,-19840
	ctx.r9.s64 = ctx.r10.s64 + -19840;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r9,256
	ctx.r6.s64 = ctx.r9.s64 + 256;
	// addi r9,r7,-5776
	ctx.r9.s64 = ctx.r7.s64 + -5776;
	// addi r7,r8,-7496
	ctx.r7.s64 = ctx.r8.s64 + -7496;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwinm r8,r5,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stw r6,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r4.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r8,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r9,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 136, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,140(r7)
	PPC_STORE_U32(ctx.r7.u32 + 140, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,144(r5)
	PPC_STORE_U32(ctx.r5.u32 + 144, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AFB30) {
	__imp__sub_823AFB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AFBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AFBFC) {
	__imp__sub_823AFBFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AFC00) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r9,r10,-19840
	ctx.r9.s64 = ctx.r10.s64 + -19840;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r9,256
	ctx.r6.s64 = ctx.r9.s64 + 256;
	// addi r9,r7,-5736
	ctx.r9.s64 = ctx.r7.s64 + -5736;
	// addi r7,r8,-7184
	ctx.r7.s64 = ctx.r8.s64 + -7184;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwinm r8,r5,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stw r6,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r4.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r8,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r9,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 136, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,140(r7)
	PPC_STORE_U32(ctx.r7.u32 + 140, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,144(r5)
	PPC_STORE_U32(ctx.r5.u32 + 144, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AFC00) {
	__imp__sub_823AFC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AFCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AFCCC) {
	__imp__sub_823AFCCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AFCD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r9,r10,-19840
	ctx.r9.s64 = ctx.r10.s64 + -19840;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r9,256
	ctx.r6.s64 = ctx.r9.s64 + 256;
	// addi r9,r7,-5696
	ctx.r9.s64 = ctx.r7.s64 + -5696;
	// addi r7,r8,-6856
	ctx.r7.s64 = ctx.r8.s64 + -6856;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// rlwinm r8,r5,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stw r6,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r4.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r8,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r9,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 136, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,140(r7)
	PPC_STORE_U32(ctx.r7.u32 + 140, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,144(r5)
	PPC_STORE_U32(ctx.r5.u32 + 144, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AFCD0) {
	__imp__sub_823AFCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AFD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823AFD9C) {
	__imp__sub_823AFD9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AFDA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r3,100
	ctx.r11.s64 = ctx.r3.s64 + 100;
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r9,r10,-19840
	ctx.r9.s64 = ctx.r10.s64 + -19840;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r9,256
	ctx.r6.s64 = ctx.r9.s64 + 256;
	// addi r9,r7,-5656
	ctx.r9.s64 = ctx.r7.s64 + -5656;
	// addi r7,r8,-6520
	ctx.r7.s64 = ctx.r8.s64 + -6520;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lbzx r6,r8,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stw r6,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r4.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r8,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r9,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 136, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,140(r7)
	PPC_STORE_U32(ctx.r7.u32 + 140, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,144(r5)
	PPC_STORE_U32(ctx.r5.u32 + 144, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AFDA0) {
	__imp__sub_823AFDA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AFE68) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// addi r11,r3,108
	ctx.r11.s64 = ctx.r3.s64 + 108;
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r9,r10,-19840
	ctx.r9.s64 = ctx.r10.s64 + -19840;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r6,r9,256
	ctx.r6.s64 = ctx.r9.s64 + 256;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// addi r9,r7,-5616
	ctx.r9.s64 = ctx.r7.s64 + -5616;
	// addi r7,r8,-6160
	ctx.r7.s64 = ctx.r8.s64 + -6160;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r6,r5,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stw r6,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r4,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r4.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r8,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r9,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r7.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 136, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,140(r7)
	PPC_STORE_U32(ctx.r7.u32 + 140, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,144(r5)
	PPC_STORE_U32(ctx.r5.u32 + 144, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AFE68) {
	__imp__sub_823AFE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823AFF28) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823b000c
	if (ctx.cr6.eq) goto loc_823B000C;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r6,-5584
	ctx.r7.s64 = ctx.r6.s64 + -5584;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r11,13412(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13412);
	// lis r5,-32197
	ctx.r5.s64 = -2110062592;
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// addi r9,r5,-5544
	ctx.r9.s64 = ctx.r5.s64 + -5544;
	// rotlwi r5,r10,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// addi r10,r8,-5224
	ctx.r10.s64 = ctx.r8.s64 + -5224;
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lis r31,-32197
	ctx.r31.s64 = -2110062592;
	// addi r30,r11,-5152
	ctx.r30.s64 = ctx.r11.s64 + -5152;
	// addi r31,r31,-5136
	ctx.r31.s64 = ctx.r31.s64 + -5136;
	// ldx r8,r5,r8
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r8.u32);
	// rldicl r5,r8,7,57
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 7) & 0x7F;
	// clrlwi r11,r5,26
	ctx.r11.u64 = ctx.r5.u32 & 0x3F;
	// stw r11,120(r6)
	PPC_STORE_U32(ctx.r6.u32 + 120, ctx.r11.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,124(r6)
	PPC_STORE_U32(ctx.r6.u32 + 124, ctx.r4.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r5,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r7,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 132, ctx.r9.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,136(r6)
	PPC_STORE_U32(ctx.r6.u32 + 136, ctx.r10.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r30,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r30.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r31,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r31.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_823B000C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823AFF28) {
	__imp__sub_823AFF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0018) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b00f4
	if (ctx.cr6.eq) goto loc_823B00F4;
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r8,-19840
	ctx.r10.s64 = ctx.r8.s64 + -19840;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r5,r10,256
	ctx.r5.s64 = ctx.r10.s64 + 256;
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r8,r6,-5096
	ctx.r8.s64 = ctx.r6.s64 + -5096;
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// addi r7,r7,-5056
	ctx.r7.s64 = ctx.r7.s64 + -5056;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// addi r6,r6,-4768
	ctx.r6.s64 = ctx.r6.s64 + -4768;
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// lbzx r5,r10,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// addi r31,r11,-4696
	ctx.r31.s64 = ctx.r11.s64 + -4696;
	// addi r10,r10,-4680
	ctx.r10.s64 = ctx.r10.s64 + -4680;
	// stw r5,120(r9)
	PPC_STORE_U32(ctx.r9.u32 + 120, ctx.r5.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,124(r5)
	PPC_STORE_U32(ctx.r5.u32 + 124, ctx.r4.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r7,132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 132, ctx.r7.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r6,136(r5)
	PPC_STORE_U32(ctx.r5.u32 + 136, ctx.r6.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r31,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r31.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
loc_823B00F4:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B0018) {
	__imp__sub_823B0018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B00FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B00FC) {
	__imp__sub_823B00FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0100) {
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
	// addi r11,r5,163
	ctx.r11.s64 = ctx.r5.s64 + 163;
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r5,108
	ctx.r11.s64 = ctx.r5.s64 * 108;
	// stwx r10,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r10.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x823a63a0
	ctx.lr = 0x823B0140;
	sub_823A63A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823aef80
	ctx.lr = 0x823B014C;
	sub_823AEF80(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823af0a0
	ctx.lr = 0x823B0154;
	sub_823AF0A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823af1d0
	ctx.lr = 0x823B015C;
	sub_823AF1D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823af2e0
	ctx.lr = 0x823B0164;
	sub_823AF2E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823af3c8
	ctx.lr = 0x823B016C;
	sub_823AF3C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823af4c8
	ctx.lr = 0x823B0174;
	sub_823AF4C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823af5c8
	ctx.lr = 0x823B017C;
	sub_823AF5C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823af6c8
	ctx.lr = 0x823B0184;
	sub_823AF6C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823af7d8
	ctx.lr = 0x823B018C;
	sub_823AF7D8(ctx, base);
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

PPC_WEAK_FUNC(sub_823B0100) {
	__imp__sub_823B0100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B01A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B01A4) {
	__imp__sub_823B01A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B01A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B01B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823a63a0
	ctx.lr = 0x823B01C8;
	sub_823A63A0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823af8e0
	ctx.lr = 0x823B01DC;
	sub_823AF8E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823af9b0
	ctx.lr = 0x823B01E4;
	sub_823AF9B0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823afa78
	ctx.lr = 0x823B01EC;
	sub_823AFA78(ctx, base);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b0220
	if (ctx.cr6.eq) goto loc_823B0220;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x823afb30
	ctx.lr = 0x823B0200;
	sub_823AFB30(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x823afc00
	ctx.lr = 0x823B0208;
	sub_823AFC00(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823afcd0
	ctx.lr = 0x823B0210;
	sub_823AFCD0(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x823afda0
	ctx.lr = 0x823B0218;
	sub_823AFDA0(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x823afe68
	ctx.lr = 0x823B0220;
	sub_823AFE68(ctx, base);
loc_823B0220:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B01A8) {
	__imp__sub_823B01A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B022C) {
	__imp__sub_823B022C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0230) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x823b026c
	if (ctx.cr6.gt) goto loc_823B026C;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// b 0x823b0284
	goto loc_823B0284;
loc_823B026C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_823B0284:
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// bl 0x823aff28
	ctx.lr = 0x823B02AC;
	sub_823AFF28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823b0018
	ctx.lr = 0x823B02B4;
	sub_823B0018(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_823B0230) {
	__imp__sub_823B0230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B02CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B02CC) {
	__imp__sub_823B02CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B02D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823B02D8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823b0100
	ctx.lr = 0x823B0304;
	sub_823B0100(ctx, base);
	// lwz r11,368(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 368);
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r29,r24,368
	ctx.r29.s64 = ctx.r24.s64 + 368;
	// addi r27,r25,5960
	ctx.r27.s64 = ctx.r25.s64 + 5960;
	// stw r11,552(r28)
	PPC_STORE_U32(ctx.r28.u32 + 552, ctx.r11.u32);
	// lwz r10,372(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 372);
	// stw r10,556(r28)
	PPC_STORE_U32(ctx.r28.u32 + 556, ctx.r10.u32);
	// lwz r9,376(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 376);
	// stw r9,560(r28)
	PPC_STORE_U32(ctx.r28.u32 + 560, ctx.r9.u32);
	// lwz r8,380(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 380);
	// stw r8,564(r28)
	PPC_STORE_U32(ctx.r28.u32 + 564, ctx.r8.u32);
	// stw r23,632(r28)
	PPC_STORE_U32(ctx.r28.u32 + 632, ctx.r23.u32);
	// lwz r11,7912(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 7912);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r26,4(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bne cr6,0x823b034c
	if (!ctx.cr6.eq) goto loc_823B034C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// beq cr6,0x823b0448
	if (ctx.cr6.eq) goto loc_823B0448;
loc_823B034C:
	// addi r22,r28,632
	ctx.r22.s64 = ctx.r28.s64 + 632;
	// addi r30,r28,580
	ctx.r30.s64 = ctx.r28.s64 + 580;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_823B0358:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b0100
	ctx.lr = 0x823B0368;
	sub_823B0100(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b043c
	if (ctx.cr6.eq) goto loc_823B043C;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r31,r30,-12
	ctx.r31.s64 = ctx.r30.s64 + -12;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r11,r11,8634
	ctx.r11.s64 = ctx.r11.s64 + 8634;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x823a9508
	ctx.lr = 0x823B0398;
	sub_823A9508(ctx, base);
	// lwz r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823b03c8
	if (!ctx.cr6.lt) goto loc_823B03C8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_823B03C8:
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823b03d4
	if (!ctx.cr6.gt) goto loc_823B03D4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_823B03D4:
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b03e0
	if (!ctx.cr6.lt) goto loc_823B03E0;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_823B03E0:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x823b03ec
	if (!ctx.cr6.gt) goto loc_823B03EC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_823B03EC:
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// subf r9,r7,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r7.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r9.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
loc_823B0408:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0428
	if (!ctx.cr0.eq) goto loc_823B0428;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823b0408
	if (!ctx.cr6.eq) goto loc_823B0408;
loc_823B0428:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stwu r10,4(r22)
	ea = 4 + ctx.r22.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r22.u32 = ea;
loc_823B043C:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r27,r27,488
	ctx.r27.s64 = ctx.r27.s64 + 488;
	// bne 0x823b0358
	if (!ctx.cr0.eq) goto loc_823B0358;
loc_823B0448:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r23,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r23.u32);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// ble cr6,0x823b0460
	if (!ctx.cr6.gt) goto loc_823B0460;
	// addi r3,r28,672
	ctx.r3.s64 = ctx.r28.s64 + 672;
	// bl 0x823a8c48
	ctx.lr = 0x823B0460;
	sub_823A8C48(ctx, base);
loc_823B0460:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B02D0) {
	__imp__sub_823B02D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0468) {
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
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// lwz r11,-19968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19968);
	// lwz r10,5564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5564);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b04a4
	if (ctx.cr6.eq) goto loc_823B04A4;
	// lwz r9,5560(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5560);
	// lwz r10,5568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5568);
	// mulli r11,r9,8496
	ctx.r11.s64 = ctx.r9.s64 * 8496;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ccf60
	ctx.lr = 0x823B04A4;
	sub_823CCF60(ctx, base);
loc_823B04A4:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b04bc
	if (ctx.cr6.eq) goto loc_823B04BC;
	// bl 0x820be060
	ctx.lr = 0x823B04BC;
	sub_820BE060(ctx, base);
loc_823B04BC:
	// bl 0x8228c468
	ctx.lr = 0x823B04C0;
	sub_8228C468(ctx, base);
	// bl 0x8238d810
	ctx.lr = 0x823B04C4;
	sub_8238D810(ctx, base);
	// bl 0x8228c220
	ctx.lr = 0x823B04C8;
	sub_8228C220(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b04e8
	if (ctx.cr6.eq) goto loc_823B04E8;
	// bl 0x820be020
	ctx.lr = 0x823B04D8;
	sub_820BE020(ctx, base);
	// lwz r11,1292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b04e8
	if (ctx.cr6.eq) goto loc_823B04E8;
	// bl 0x823ad848
	ctx.lr = 0x823B04E8;
	sub_823AD848(ctx, base);
loc_823B04E8:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r11,-19968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19968);
	// addi r9,r10,13352
	ctx.r9.s64 = ctx.r10.s64 + 13352;
	// stw r11,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r11.u32);
	// bl 0x8228bd60
	ctx.lr = 0x823B04FC;
	sub_8228BD60(ctx, base);
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

PPC_WEAK_FUNC(sub_823B0468) {
	__imp__sub_823B0468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B0514) {
	__imp__sub_823B0514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0518) {
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
	// bl 0x823aede0
	ctx.lr = 0x823B052C;
	sub_823AEDE0(ctx, base);
	// bl 0x823b0468
	ctx.lr = 0x823B0530;
	sub_823B0468(ctx, base);
	// bl 0x823ad698
	ctx.lr = 0x823B0534;
	sub_823AD698(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,-19968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19968);
	// lwz r31,5952(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5952);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19968, ctx.r11.u32);
	// bl 0x8238ebe8
	ctx.lr = 0x823B054C;
	sub_8238EBE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ad468
	ctx.lr = 0x823B0554;
	sub_823AD468(ctx, base);
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

PPC_WEAK_FUNC(sub_823B0518) {
	__imp__sub_823B0518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823B0570;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8228c220
	ctx.lr = 0x823B0578;
	sub_8228C220(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r29,r11,3224
	ctx.r29.s64 = ctx.r11.s64 + 3224;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b05a0
	if (ctx.cr6.eq) goto loc_823B05A0;
	// bl 0x820be020
	ctx.lr = 0x823B0590;
	sub_820BE020(ctx, base);
	// lwz r11,1292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b05a0
	if (ctx.cr6.eq) goto loc_823B05A0;
	// bl 0x823ad848
	ctx.lr = 0x823B05A0;
	sub_823AD848(ctx, base);
loc_823B05A0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228bd10
	ctx.lr = 0x823B05A8;
	sub_8228BD10(ctx, base);
	// bl 0x823dff10
	ctx.lr = 0x823B05AC;
	sub_823DFF10(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,13352
	ctx.r30.s64 = ctx.r11.s64 + 13352;
	// beq cr6,0x823b0640
	if (ctx.cr6.eq) goto loc_823B0640;
loc_823B05C0:
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b0628
	if (ctx.cr6.eq) goto loc_823B0628;
loc_823B05CC:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b05dc
	if (ctx.cr6.eq) goto loc_823B05DC;
	// bl 0x820be060
	ctx.lr = 0x823B05DC;
	sub_820BE060(ctx, base);
loc_823B05DC:
	// bl 0x8228c468
	ctx.lr = 0x823B05E0;
	sub_8228C468(ctx, base);
	// bl 0x82177ff8
	ctx.lr = 0x823B05E4;
	sub_82177FF8(ctx, base);
	// bl 0x8228c220
	ctx.lr = 0x823B05E8;
	sub_8228C220(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0604
	if (ctx.cr6.eq) goto loc_823B0604;
	// bl 0x820be020
	ctx.lr = 0x823B05F8;
	sub_820BE020(ctx, base);
	// lwz r11,1292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b07f4
	if (!ctx.cr6.eq) goto loc_823B07F4;
loc_823B0604:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x823B060C;
	sub_8228B0D8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b05cc
	if (!ctx.cr6.eq) goto loc_823B05CC;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// lwsync 
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// b 0x823b062c
	goto loc_823B062C;
loc_823B0628:
	// bl 0x8238ebe8
	ctx.lr = 0x823B062C;
	sub_8238EBE8(ctx, base);
loc_823B062C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228bd10
	ctx.lr = 0x823B0634;
	sub_8228BD10(ctx, base);
	// bl 0x823dff10
	ctx.lr = 0x823B0638;
	sub_823DFF10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b05c0
	if (!ctx.cr6.eq) goto loc_823B05C0;
loc_823B0640:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,-129
	ctx.r9.s64 = -129;
	// lis r31,-31777
	ctx.r31.s64 = -2082537472;
	// lis r28,-31776
	ctx.r28.s64 = -2082471936;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_823B0658:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-16816
	ctx.r3.s64 = ctx.r11.s64 + -16816;
	// bl 0x823b7840
	ctx.lr = 0x823B0668;
	sub_823B7840(ctx, base);
	// bl 0x8228bb90
	ctx.lr = 0x823B066C;
	sub_8228BB90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b0714
	if (ctx.cr6.eq) goto loc_823B0714;
	// bl 0x8228b528
	ctx.lr = 0x823B0678;
	sub_8228B528(ctx, base);
	// stw r3,-8704(r28)
	PPC_STORE_U32(ctx.r28.u32 + -8704, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b06ac
	if (ctx.cr6.eq) goto loc_823B06AC;
	// bl 0x823aede0
	ctx.lr = 0x823B0688;
	sub_823AEDE0(ctx, base);
	// bl 0x823b0468
	ctx.lr = 0x823B068C;
	sub_823B0468(ctx, base);
	// bl 0x823ad698
	ctx.lr = 0x823B0690;
	sub_823AD698(ctx, base);
	// lwz r11,-19968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19968);
	// lwz r26,5952(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5952);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19968, ctx.r11.u32);
	// bl 0x8238ebe8
	ctx.lr = 0x823B06A4;
	sub_8238EBE8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ad468
	ctx.lr = 0x823B06AC;
	sub_823AD468(ctx, base);
loc_823B06AC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// beq cr6,0x823b06c8
	if (ctx.cr6.eq) goto loc_823B06C8;
	// bl 0x820be060
	ctx.lr = 0x823B06C8;
	sub_820BE060(ctx, base);
loc_823B06C8:
	// bl 0x8228c468
	ctx.lr = 0x823B06CC;
	sub_8228C468(ctx, base);
	// bl 0x8228bc00
	ctx.lr = 0x823B06D0;
	sub_8228BC00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-17464
	ctx.r3.s64 = ctx.r11.s64 + -17464;
	// bl 0x823b7840
	ctx.lr = 0x823B06E0;
	sub_823B7840(ctx, base);
	// bl 0x8228c220
	ctx.lr = 0x823B06E4;
	sub_8228C220(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0700
	if (ctx.cr6.eq) goto loc_823B0700;
	// bl 0x820be020
	ctx.lr = 0x823B06F4;
	sub_820BE020(ctx, base);
	// lwz r11,1292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b07f8
	if (!ctx.cr6.eq) goto loc_823B07F8;
loc_823B0700:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwsync 
	// bl 0x8228bc40
	ctx.lr = 0x823B0714;
	sub_8228BC40(ctx, base);
loc_823B0714:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b07b8
	if (ctx.cr6.eq) goto loc_823B07B8;
	// bl 0x8228b528
	ctx.lr = 0x823B0724;
	sub_8228B528(ctx, base);
	// stw r3,-8704(r28)
	PPC_STORE_U32(ctx.r28.u32 + -8704, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0758
	if (ctx.cr6.eq) goto loc_823B0758;
	// bl 0x823aede0
	ctx.lr = 0x823B0734;
	sub_823AEDE0(ctx, base);
	// bl 0x823b0468
	ctx.lr = 0x823B0738;
	sub_823B0468(ctx, base);
	// bl 0x823ad698
	ctx.lr = 0x823B073C;
	sub_823AD698(ctx, base);
	// lwz r11,-19968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19968);
	// lwz r26,5952(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5952);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19968, ctx.r11.u32);
	// bl 0x8238ebe8
	ctx.lr = 0x823B0750;
	sub_8238EBE8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ad468
	ctx.lr = 0x823B0758;
	sub_823AD468(ctx, base);
loc_823B0758:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// stb r27,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r27.u8);
loc_823B0764:
	// bl 0x82135a90
	ctx.lr = 0x823B0768;
	sub_82135A90(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0778
	if (ctx.cr6.eq) goto loc_823B0778;
	// bl 0x820be060
	ctx.lr = 0x823B0778;
	sub_820BE060(ctx, base);
loc_823B0778:
	// bl 0x8228c468
	ctx.lr = 0x823B077C;
	sub_8228C468(ctx, base);
	// bl 0x82177ff8
	ctx.lr = 0x823B0780;
	sub_82177FF8(ctx, base);
	// bl 0x8228c220
	ctx.lr = 0x823B0784;
	sub_8228C220(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b07a0
	if (ctx.cr6.eq) goto loc_823B07A0;
	// bl 0x820be020
	ctx.lr = 0x823B0794;
	sub_820BE020(ctx, base);
	// lwz r11,1292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b07fc
	if (!ctx.cr6.eq) goto loc_823B07FC;
loc_823B07A0:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b0764
	if (!ctx.cr6.eq) goto loc_823B0764;
	// stb r11,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r11.u8);
	// lwsync 
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
loc_823B07B8:
	// bl 0x8228b528
	ctx.lr = 0x823B07BC;
	sub_8228B528(ctx, base);
	// stw r3,-8704(r28)
	PPC_STORE_U32(ctx.r28.u32 + -8704, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0658
	if (ctx.cr6.eq) goto loc_823B0658;
	// bl 0x823aede0
	ctx.lr = 0x823B07CC;
	sub_823AEDE0(ctx, base);
	// bl 0x823b0468
	ctx.lr = 0x823B07D0;
	sub_823B0468(ctx, base);
	// bl 0x823ad698
	ctx.lr = 0x823B07D4;
	sub_823AD698(ctx, base);
	// lwz r11,-19968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19968);
	// lwz r26,5952(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5952);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19968, ctx.r11.u32);
	// bl 0x8238ebe8
	ctx.lr = 0x823B07E8;
	sub_8238EBE8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ad468
	ctx.lr = 0x823B07F0;
	sub_823AD468(ctx, base);
	// b 0x823b0658
	goto loc_823B0658;
loc_823B07F4:
	// bl 0x823ad848
	ctx.lr = 0x823B07F8;
	sub_823AD848(ctx, base);
loc_823B07F8:
	// bl 0x823ad848
	ctx.lr = 0x823B07FC;
	sub_823AD848(ctx, base);
loc_823B07FC:
	// bl 0x823ad848
	ctx.lr = 0x823B0800;
	sub_823AD848(ctx, base);
}

PPC_WEAK_FUNC(sub_823B0568) {
	__imp__sub_823B0568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0800) {
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
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e54e0
	ctx.lr = 0x823B0824;
	sub_822E54E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b0844
	if (!ctx.cr6.eq) goto loc_823B0844;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18220
	ctx.r4.s64 = ctx.r11.s64 + -18220;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823B0844;
	sub_822830E8(ctx, base);
loc_823B0844:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_823B0800) {
	__imp__sub_823B0800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0860) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ed3c0
	ctx.lr = 0x823B0894;
	sub_823ED3C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed900
	ctx.lr = 0x823B08A0;
	sub_823ED900(ctx, base);
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

PPC_WEAK_FUNC(sub_823B0860) {
	__imp__sub_823B0860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B08B8) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b0900
	if (ctx.cr6.eq) goto loc_823B0900;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ed3c0
	ctx.lr = 0x823B08F4;
	sub_823ED3C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed900
	ctx.lr = 0x823B0900;
	sub_823ED900(ctx, base);
loc_823B0900:
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

PPC_WEAK_FUNC(sub_823B08B8) {
	__imp__sub_823B08B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B0920;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e54e0
	ctx.lr = 0x823B093C;
	sub_822E54E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b095c
	if (!ctx.cr6.eq) goto loc_823B095C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18220
	ctx.r4.s64 = ctx.r11.s64 + -18220;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823B095C;
	sub_822830E8(ctx, base);
loc_823B095C:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ed3c0
	ctx.lr = 0x823B0974;
	sub_823ED3C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ed900
	ctx.lr = 0x823B0980;
	sub_823ED900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B0918) {
	__imp__sub_823B0918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B098C) {
	__imp__sub_823B098C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0990) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ed458
	ctx.lr = 0x823B09C8;
	sub_823ED458(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed900
	ctx.lr = 0x823B09D4;
	sub_823ED900(ctx, base);
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

PPC_WEAK_FUNC(sub_823B0990) {
	__imp__sub_823B0990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B09EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B09EC) {
	__imp__sub_823B09EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B09F0) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823ed458
	ctx.lr = 0x823B0A2C;
	sub_823ED458(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed900
	ctx.lr = 0x823B0A38;
	sub_823ED900(ctx, base);
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

PPC_WEAK_FUNC(sub_823B09F0) {
	__imp__sub_823B09F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B0A58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e54e0
	ctx.lr = 0x823B0A74;
	sub_822E54E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b0a94
	if (!ctx.cr6.eq) goto loc_823B0A94;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18220
	ctx.r4.s64 = ctx.r11.s64 + -18220;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823B0A94;
	sub_822830E8(ctx, base);
loc_823B0A94:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ed458
	ctx.lr = 0x823B0AB0;
	sub_823ED458(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ed900
	ctx.lr = 0x823B0ABC;
	sub_823ED900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B0A50) {
	__imp__sub_823B0A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f5,f9,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f0,f8,f8,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f13,f7,f7,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823b0b08
	if (!ctx.cr6.lt) goto loc_823B0B08;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_823B0B08:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B0AC8) {
	__imp__sub_823B0AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B0B1C) {
	__imp__sub_823B0B1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0B20) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r6,r10,2760
	ctx.r6.s64 = ctx.r10.s64 + 2760;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x823def18
	sub_823DEF18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B0B20) {
	__imp__sub_823B0B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x823B0B40;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de018
	ctx.lr = 0x823B0B48;
	__savefpr_24(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// ori r30,r11,16384
	ctx.r30.u64 = ctx.r11.u64 | 16384;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f13,-18112(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18112);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// lfs f12,-18116(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -18116);
	ctx.f12.f64 = double(temp.f32);
	// li r22,4
	ctx.r22.s64 = 4;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r21,0
	ctx.r21.s64 = 0;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r20,6
	ctx.r20.s64 = 6;
	// stfs f29,156(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stfs f29,160(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// sth r21,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r21.u16);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// stfs f29,184(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// stfs f29,200(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// sth r21,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r21.u16);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// sth r9,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// sth r9,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r9.u16);
	// stfs f29,216(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// stfs f12,220(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// sth r10,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r10.u16);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// sth r11,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r11.u16);
	// stfs f29,228(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// sth r22,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r22.u16);
	// stfs f29,232(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// sth r10,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r10.u16);
	// stfs f29,236(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// sth r10,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r10.u16);
	// sth r22,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r22.u16);
	// sth r8,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r8.u16);
	// sth r22,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r22.u16);
	// sth r20,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r20.u16);
	// sth r8,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r8.u16);
	// sth r8,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r8.u16);
	// sth r20,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r20.u16);
	// sth r7,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r7.u16);
	// bl 0x822e54e0
	ctx.lr = 0x823B0C64;
	sub_822E54E0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-18220
	ctx.r27.s64 = ctx.r11.s64 + -18220;
	// bne cr6,0x823b0c88
	if (!ctx.cr6.eq) goto loc_823B0C88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823B0C88;
	sub_822830E8(ctx, base);
loc_823B0C88:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r11,-19840
	ctx.r31.s64 = ctx.r11.s64 + -19840;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r31,100
	ctx.r7.s64 = ctx.r31.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ed3c0
	ctx.lr = 0x823B0CA8;
	sub_823ED3C0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x823ed900
	ctx.lr = 0x823B0CB4;
	sub_823ED900(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,12288
	ctx.r4.s64 = 12288;
	// addi r5,r11,-18140
	ctx.r5.s64 = ctx.r11.s64 + -18140;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x823b0a50
	ctx.lr = 0x823B0CC8;
	sub_823B0A50(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r10,-18172
	ctx.r5.s64 = ctx.r10.s64 + -18172;
	// ori r4,r4,36864
	ctx.r4.u64 = ctx.r4.u64 | 36864;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x823b0a50
	ctx.lr = 0x823B0CE4;
	sub_823B0A50(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r30,r9,32768
	ctx.r30.u64 = ctx.r9.u64 | 32768;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e54e0
	ctx.lr = 0x823B0D00;
	sub_822E54E0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b0d1c
	if (!ctx.cr6.eq) goto loc_823B0D1C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823B0D1C;
	sub_822830E8(ctx, base);
loc_823B0D1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r31,164
	ctx.r7.s64 = ctx.r31.s64 + 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ed3c0
	ctx.lr = 0x823B0D34;
	sub_823ED3C0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x823ed900
	ctx.lr = 0x823B0D40;
	sub_823ED900(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r26,r19,-4
	ctx.r26.s64 = ctx.r19.s64 + -4;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// lfs f24,14156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14156);
	ctx.f24.f64 = double(temp.f32);
	// addi r31,r28,-2
	ctx.r31.s64 = ctx.r28.s64 + -2;
	// lfs f27,5880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f27.f64 = double(temp.f32);
	// addi r30,r29,-2
	ctx.r30.s64 = ctx.r29.s64 + -2;
	// lfs f28,24252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24252);
	ctx.f28.f64 = double(temp.f32);
	// addi r25,r18,-4
	ctx.r25.s64 = ctx.r18.s64 + -4;
loc_823B0D6C:
	// extsw r11,r23
	ctx.r11.s64 = ctx.r23.s32;
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// std r11,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r11.u64);
	// lfd f0,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r10,r23,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 9) & 0xFFFFFE00;
	// frsp f25,f13
	ctx.f25.f64 = double(float(ctx.f13.f64));
	// rlwinm r11,r23,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 10) & 0xFFFFFC00;
loc_823B0D8C:
	// extsw r9,r24
	ctx.r9.s64 = ctx.r24.s32;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// std r9,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r9.u64);
	// lfd f0,272(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// frsp f26,f13
	ctx.f26.f64 = double(float(ctx.f13.f64));
loc_823B0DAC:
	// bl 0x823df900
	ctx.lr = 0x823B0DB0;
	sub_823DF900(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// lfd f0,248(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f28,f25
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f25.f64));
	// fmsubs f31,f11,f27,f29
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 - ctx.f29.f64));
	// bl 0x823df900
	ctx.lr = 0x823B0DD0;
	sub_823DF900(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r10.u64);
	// lfd f10,264(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f8,f28,f26
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 + ctx.f26.f64));
	// fmsubs f30,f7,f27,f29
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f27.f64 - ctx.f29.f64));
	// bl 0x823df900
	ctx.lr = 0x823B0DF0;
	sub_823DF900(ctx, base);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// extsw r9,r27
	ctx.r9.s64 = ctx.r27.s32;
	// std r8,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r8.u64);
	// lfd f5,256(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// lfd f6,240(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmadds f0,f2,f28,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f28.f64 + ctx.f1.f64));
	// fmsubs f0,f0,f24,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f24.f64 - ctx.f29.f64));
loc_823B0E30:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,4(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// stfs f30,8(r25)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// stfs f0,12(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// lfsu f13,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f12,16(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 16, temp.u32);
	// stfsu f13,20(r25)
	ea = 20 + ctx.r25.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r25.u32 = ea;
	// bdnz 0x823b0e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0E30;
	// addi r11,r1,78
	ctx.r11.s64 = ctx.r1.s64 + 78;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
loc_823B0E60:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthu r10,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r30.u32 = ea;
	// bdnz 0x823b0e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0E60;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823B0E80:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,4(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f30,8(r26)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stfs f0,12(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// lfsu f13,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f12,16(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 16, temp.u32);
	// stfsu f13,20(r26)
	ea = 20 + ctx.r26.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r26.u32 = ea;
	// bdnz 0x823b0e80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0E80;
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r11,r1,94
	ctx.r11.s64 = ctx.r1.s64 + 94;
	// clrlwi r8,r28,16
	ctx.r8.u64 = ctx.r28.u32 & 0xFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823B0EB0:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthu r10,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r31.u32 = ea;
	// bdnz 0x823b0eb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B0EB0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// bne cr6,0x823b0dac
	if (!ctx.cr6.eq) goto loc_823B0DAC;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r24,8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 8, ctx.xer);
	// bne cr6,0x823b0d8c
	if (!ctx.cr6.eq) goto loc_823B0D8C;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r23,8
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 8, ctx.xer);
	// bne cr6,0x823b0d6c
	if (!ctx.cr6.eq) goto loc_823B0D6C;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r6,r11,2760
	ctx.r6.s64 = ctx.r11.s64 + 2760;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823def18
	ctx.lr = 0x823B0F10;
	sub_823DEF18(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r5,160
	ctx.r5.s64 = 160;
	// addi r6,r10,2760
	ctx.r6.s64 = ctx.r10.s64 + 2760;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823def18
	ctx.lr = 0x823B0F28;
	sub_823DEF18(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de064
	ctx.lr = 0x823B0F34;
	__restfpr_24(ctx, base);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B0B38) {
	__imp__sub_823B0B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B0F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e54e0
	ctx.lr = 0x823B0F5C;
	sub_822E54E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b0f7c
	if (!ctx.cr6.eq) goto loc_823B0F7C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18220
	ctx.r4.s64 = ctx.r11.s64 + -18220;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823B0F7C;
	sub_822830E8(ctx, base);
loc_823B0F7C:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ed3c0
	ctx.lr = 0x823B0F94;
	sub_823ED3C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ed900
	ctx.lr = 0x823B0FA0;
	sub_823ED900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B0F38) {
	__imp__sub_823B0F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B0FAC) {
	__imp__sub_823B0FAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0FB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b0a50
	sub_823B0A50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B0FB0) {
	__imp__sub_823B0FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B0FB4) {
	__imp__sub_823B0FB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B0FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823B0FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// bl 0x822e54e0
	ctx.lr = 0x823B0FEC;
	sub_822E54E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b100c
	if (!ctx.cr6.eq) goto loc_823B100C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-18220
	ctx.r4.s64 = ctx.r11.s64 + -18220;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823B100C;
	sub_822830E8(ctx, base);
loc_823B100C:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ed3c0
	ctx.lr = 0x823B1024;
	sub_823ED3C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ed900
	ctx.lr = 0x823B1030;
	sub_823ED900(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B0FB8) {
	__imp__sub_823B0FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B103C) {
	__imp__sub_823B103C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1040) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,-18108
	ctx.r5.s64 = ctx.r10.s64 + -18108;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823b0a50
	ctx.lr = 0x823B1074;
	sub_823B0A50(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823B1040) {
	__imp__sub_823B1040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B108C) {
	__imp__sub_823B108C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823B1098;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,-8688
	ctx.r27.s64 = ctx.r11.s64 + -8688;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r27,8
	ctx.r31.s64 = ctx.r27.s64 + 8;
	// lis r29,72
	ctx.r29.s64 = 4718592;
	// addi r26,r11,-18220
	ctx.r26.s64 = ctx.r11.s64 + -18220;
loc_823B10B8:
	// stw r28,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r28.u32);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lis r3,72
	ctx.r3.s64 = 4718592;
	// bl 0x822e54e0
	ctx.lr = 0x823B10D0;
	sub_822E54E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b10ec
	if (!ctx.cr6.eq) goto loc_823B10EC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lis r5,72
	ctx.r5.s64 = 4718592;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823B10EC;
	sub_822830E8(ctx, base);
loc_823B10EC:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r3,72
	ctx.r3.s64 = 4718592;
	// bl 0x823ed3c0
	ctx.lr = 0x823B1104;
	sub_823ED3C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed900
	ctx.lr = 0x823B1110;
	sub_823ED900(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r11,r27,96
	ctx.r11.s64 = ctx.r27.s64 + 96;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823b10b8
	if (!ctx.cr6.eq) goto loc_823B10B8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B1090) {
	__imp__sub_823B1090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B112C) {
	__imp__sub_823B112C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x823B1138;
	__savegprlr_22(ctx, base);
	// stwu r1,-3264(r1)
	ea = -3264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// sth r31,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r31.u16);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// beq cr6,0x823b1248
	if (ctx.cr6.eq) goto loc_823B1248;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,-12
	ctx.r6.s64 = ctx.r11.s64 + -12;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r11,-17916
	ctx.r30.s64 = ctx.r11.s64 + -17916;
loc_823B1178:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lhzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x823b1280
	if (ctx.cr6.eq) goto loc_823B1280;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// ble cr6,0x823b11e4
	if (!ctx.cr6.gt) goto loc_823B11E4;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_823B11AC:
	// lhz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x823b11e4
	if (!ctx.cr6.gt) goto loc_823B11E4;
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r27,r10,12
	ctx.r27.s64 = ctx.r10.s64 + 12;
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r25,8(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// stw r25,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r25.u32);
	// bgt 0x823b11ac
	if (ctx.cr0.gt) goto loc_823B11AC;
loc_823B11E4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// lbz r26,0(r7)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,1(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// addi r7,r1,98
	ctx.r7.s64 = ctx.r1.s64 + 98;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r1,100
	ctx.r25.s64 = ctx.r1.s64 + 100;
	// addi r24,r1,104
	ctx.r24.s64 = ctx.r1.s64 + 104;
	// addi r23,r1,105
	ctx.r23.s64 = ctx.r1.s64 + 105;
	// addi r22,r1,106
	ctx.r22.s64 = ctx.r1.s64 + 106;
	// sthx r28,r11,r27
	PPC_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r28.u16);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r28,2(r9)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r28,r11,r7
	PPC_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r28.u16);
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// stwx r9,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r9.u32);
	// stbx r31,r11,r24
	PPC_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r31.u8);
	// stbx r26,r11,r23
	PPC_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r26.u8);
	// stbx r10,r11,r22
	PPC_STORE_U8(ctx.r11.u32 + ctx.r22.u32, ctx.r10.u8);
	// bne 0x823b1178
	if (!ctx.cr0.eq) goto loc_823B1178;
loc_823B1248:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stw r29,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r29.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// bl 0x820b93a8
	ctx.lr = 0x823B1278;
	sub_820B93A8(ctx, base);
	// addi r1,r1,3264
	ctx.r1.s64 = ctx.r1.s64 + 3264;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_823B1280:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3264
	ctx.r1.s64 = ctx.r1.s64 + 3264;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B1130) {
	__imp__sub_823B1130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B128C) {
	__imp__sub_823B128C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823B1298;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,26
	ctx.r5.s64 = 26;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x823de1f0
	ctx.lr = 0x823B12B4;
	sub_823DE1F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-17888
	ctx.r28.s64 = ctx.r11.s64 + -17888;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_823B12C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x823b1130
	ctx.lr = 0x823B12D8;
	sub_823B1130(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// addi r10,r28,1080
	ctx.r10.s64 = ctx.r28.s64 + 1080;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// blt cr6,0x823b12c4
	if (ctx.cr6.lt) goto loc_823B12C4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B1290) {
	__imp__sub_823B1290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1300) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B1300) {
	__imp__sub_823B1300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1308) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B1308) {
	__imp__sub_823B1308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mullw. r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,-16608(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -16608);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// blelr 
	if (!ctx.cr0.gt) return;
	// subf r5,r10,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// subf r4,r10,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r6,r9,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r7,r11,-8448
	ctx.r7.s64 = ctx.r11.s64 + -8448;
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_823B135C:
	// add r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 + ctx.r10.u64;
	// li r8,512
	ctx.r8.s64 = 512;
	// dcbt r8,r11
	// li r3,512
	ctx.r3.s64 = 512;
	// dcbt r3,r10
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// dcbt r3,r8
	// lwzx r3,r5,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b1390
	if (!ctx.cr6.eq) goto loc_823B1390;
	// stfsx f0,r6,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x823b13d4
	goto loc_823B13D4;
loc_823B1390:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fctidz f8,f11
	ctx.f8.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// addi r8,r11,255
	ctx.r8.s64 = ctx.r11.s64 + 255;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,20,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFC;
	// lfsx f7,r3,r7
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfsx f4,r6,r9
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_823B13D4:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823b135c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B135C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B1310) {
	__imp__sub_823B1310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B13E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B13E4) {
	__imp__sub_823B13E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B13E8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823B13F0;
	__savegprlr_28(ctx, base);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r4,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b14e8
	if (ctx.cr6.eq) goto loc_823B14E8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subfic r29,r3,16
	ctx.xer.ca = ctx.r3.u32 <= 16;
	ctx.r29.s64 = 16 - ctx.r3.s64;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
loc_823B1428:
	// add r11,r29,r4
	ctx.r11.u64 = ctx.r29.u64 + ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwinm r28,r11,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// add r10,r4,r31
	ctx.r10.u64 = ctx.r4.u64 + ctx.r31.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_823B1444:
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r11
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v59,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vmrghw128 v58,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// lvx128 v57,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r9,r10
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v55,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v54,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v53,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// lvx128 v52,r8,r10
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v51,v57,v54
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vmrghw128 v50,v56,v52
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vmrghw128 v49,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vmrglw128 v48,v57,v54
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vmrglw128 v47,v56,v52
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vmrglw128 v46,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vmrghw128 v45,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vmrglw128 v44,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vmrghw128 v43,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrglw128 v42,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// stvx128 v49,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v41,v48,v47
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// vmrglw128 v40,v48,v47
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// stvx128 v46,r9,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v45,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v44,r8,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stvx128 v43,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// stvx128 v42,r9,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v41,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r8,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823b1444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B1444;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bne 0x823b1428
	if (!ctx.cr0.eq) goto loc_823B1428;
loc_823B14E8:
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B13E8) {
	__imp__sub_823B13E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B14EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B14EC) {
	__imp__sub_823B14EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B14F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823B14F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823b152c
	if (ctx.cr6.eq) goto loc_823B152C;
loc_823B151C:
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823b151c
	if (!ctx.cr6.eq) goto loc_823B151C;
loc_823B152C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-8448
	ctx.r29.s64 = ctx.r11.s64 + -8448;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b1578
	if (!ctx.cr6.gt) goto loc_823B1578;
loc_823B1544:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r7,r29,4096
	ctx.r7.s64 = ctx.r29.s64 + 4096;
	// addi r6,r29,6144
	ctx.r6.s64 = ctx.r29.s64 + 6144;
	// mullw r10,r30,r11
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x822e3930
	ctx.lr = 0x823B1568;
	sub_822E3930(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823b1544
	if (ctx.cr6.lt) goto loc_823B1544;
loc_823B1578:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823b13e8
	ctx.lr = 0x823B1584;
	sub_823B13E8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823b13e8
	ctx.lr = 0x823B1590;
	sub_823B13E8(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823b15d4
	if (!ctx.cr6.gt) goto loc_823B15D4;
loc_823B15A0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r7,r29,4096
	ctx.r7.s64 = ctx.r29.s64 + 4096;
	// addi r6,r29,6144
	ctx.r6.s64 = ctx.r29.s64 + 6144;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x822e3930
	ctx.lr = 0x823B15C4;
	sub_822E3930(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x823b15a0
	if (ctx.cr6.lt) goto loc_823B15A0;
loc_823B15D4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b13e8
	ctx.lr = 0x823B15DC;
	sub_823B13E8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823b13e8
	ctx.lr = 0x823B15E8;
	sub_823B13E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B14F0) {
	__imp__sub_823B14F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B15F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B15F8;
	__savegprlr_29(ctx, base);
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// mullw. r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrldi r6,r11,32
	ctx.r6.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,-16604
	ctx.r10.s64 = ctx.r7.s64 + -16604;
	// std r6,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r6.u64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,-48(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// beq 0x823b1770
	if (ctx.cr0.eq) goto loc_823B1770;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lis r5,-31852
	ctx.r5.s64 = -2087452672;
	// lis r4,-31775
	ctx.r4.s64 = -2082406400;
	// lis r31,-32252
	ctx.r31.s64 = -2113667072;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lis r6,-31852
	ctx.r6.s64 = -2087452672;
	// lis r30,-31852
	ctx.r30.s64 = -2087452672;
	// addi r6,r6,-30624
	ctx.r6.s64 = ctx.r6.s64 + -30624;
	// addi r29,r5,-30752
	ctx.r29.s64 = ctx.r5.s64 + -30752;
	// addi r4,r4,-29952
	ctx.r4.s64 = ctx.r4.s64 + -29952;
	// addi r31,r31,-5808
	ctx.r31.s64 = ctx.r31.s64 + -5808;
	// addi r30,r30,-31136
	ctx.r30.s64 = ctx.r30.s64 + -31136;
	// lvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,-16
	ctx.r7.s64 = -16;
	// lvx128 v3,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,-48
	ctx.r8.s64 = -48;
	// lvx128 v7,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,16
	ctx.r5.s64 = 16;
	// lvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823B16B0:
	// lvx128 v12,r10,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v10,v12,v12,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v9,v12,v12,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v11,r10,r7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v8,v11,v11,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v6,v11,v11,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// vmaddfp v11,v12,v12,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v10,v12,v12,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// lvx128 v12,r11,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v9,v12,v12,v8
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// lvx128 v12,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v12,v12,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vrsqrtefp v4,v11
	simde_mm_store_ps(ctx.v4.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v11.f32))));
	// vrsqrtefp v5,v10
	simde_mm_store_ps(ctx.v5.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v10.f32))));
	// vrsqrtefp v6,v9
	simde_mm_store_ps(ctx.v6.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v9.f32))));
	// vrsqrtefp v8,v12
	simde_mm_store_ps(ctx.v8.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v12.f32))));
	// vmaddfp v4,v11,v4,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v10,v10,v5,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v11,v9,v6,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v12,v8,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v60,v4,v62
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v59,v10,v62
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v58,v11,v62
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v57,v12,v62
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vminfp128 v56,v63,v60
	simde_mm_store_ps(ctx.v56.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vminfp128 v55,v63,v59
	simde_mm_store_ps(ctx.v55.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vminfp128 v54,v63,v58
	simde_mm_store_ps(ctx.v54.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vminfp128 v53,v63,v57
	simde_mm_store_ps(ctx.v53.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v52,v56,v61
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v51,v55,v61
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v50,v54,v61
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v49,v53,v61
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vcfpuxws128 v48,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_vctuxs(simde_mm_load_ps(ctx.v52.f32)));
	// vcfpuxws128 v47,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_vctuxs(simde_mm_load_ps(ctx.v51.f32)));
	// vcfpuxws128 v46,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_vctuxs(simde_mm_load_ps(ctx.v50.f32)));
	// vcfpuxws128 v45,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_vctuxs(simde_mm_load_ps(ctx.v49.f32)));
	// vperm128 v44,v48,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v43,v46,v45,v7
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v42,v44,v43,v3
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// stvx128 v42,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x823b16b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B16B0;
loc_823B1770:
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B15F0) {
	__imp__sub_823B15F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B1774) {
	__imp__sub_823B1774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823B1780;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r11,-1280
	ctx.r10.s64 = ctx.r11.s64 + -1280;
	// lis r4,10240
	ctx.r4.s64 = 671088640;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,68(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r11,-32768
	ctx.r7.s64 = ctx.r11.s64 + -32768;
	// ori r4,r4,258
	ctx.r4.u64 = ctx.r4.u64 | 258;
	// bl 0x823d6db8
	ctx.lr = 0x823B17B8;
	sub_823D6DB8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r31,16(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x823b1808
	if (!ctx.cr6.gt) goto loc_823B1808;
loc_823B17C8:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d66e8
	ctx.lr = 0x823B17E0;
	sub_823D66E8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823d6db8
	ctx.lr = 0x823B17F8;
	sub_823D6DB8(ctx, base);
	// srawi r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bgt cr6,0x823b17c8
	if (ctx.cr6.gt) goto loc_823B17C8;
loc_823B1808:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B1778) {
	__imp__sub_823B1778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1810) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,-1280
	ctx.r31.s64 = ctx.r11.s64 + -1280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r31,16384
	ctx.r4.s64 = ctx.r31.s64 + 16384;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823b1310
	ctx.lr = 0x823B1844;
	sub_823B1310(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r31,16384
	ctx.r4.s64 = ctx.r31.s64 + 16384;
	// bl 0x823b14f0
	ctx.lr = 0x823B1854;
	sub_823B14F0(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r31,16384
	ctx.r5.s64 = ctx.r31.s64 + 16384;
	// addi r3,r11,-32768
	ctx.r3.s64 = ctx.r11.s64 + -32768;
	// bl 0x823b15f0
	ctx.lr = 0x823B186C;
	sub_823B15F0(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r3,10240
	ctx.r3.s64 = 671088640;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r3,r3,258
	ctx.r3.u64 = ctx.r3.u64 | 258;
	// addi r4,r11,-32768
	ctx.r4.s64 = ctx.r11.s64 + -32768;
	// bl 0x823b1778
	ctx.lr = 0x823B1884;
	sub_823B1778(ctx, base);
	// lwsync 
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,-8576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8576, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_823B1810) {
	__imp__sub_823B1810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B18AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B18AC) {
	__imp__sub_823B18AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B18B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B18B8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r29,r11,-8448
	ctx.r29.s64 = ctx.r11.s64 + -8448;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lfs f31,-16600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16600);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f30.f64 = double(temp.f32);
loc_823B18E4:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f1,f11,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// bl 0x823de720
	ctx.lr = 0x823B1904;
	sub_823DE720(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r10,r29,4096
	ctx.r10.s64 = ctx.r29.s64 + 4096;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b18e4
	if (ctx.cr6.lt) goto loc_823B18E4;
	// addi r4,r29,4096
	ctx.r4.s64 = ctx.r29.s64 + 4096;
	// addi r3,r29,6144
	ctx.r3.s64 = ctx.r29.s64 + 6144;
	// bl 0x822e37e8
	ctx.lr = 0x823B192C;
	sub_822E37E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B18B0) {
	__imp__sub_823B18B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B193C) {
	__imp__sub_823B193C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B1940) {
	__imp__sub_823B1940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B1944) {
	__imp__sub_823B1944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1948) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-24112
	ctx.r31.s64 = ctx.r11.s64 + -24112;
	// lwz r11,2812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1978
	if (ctx.cr6.eq) goto loc_823B1978;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x820b8c80
	ctx.lr = 0x823B1978;
	sub_820B8C80(ctx, base);
loc_823B1978:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2812, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_823B1948) {
	__imp__sub_823B1948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B1994) {
	__imp__sub_823B1994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1998) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-24112
	ctx.r31.s64 = ctx.r11.s64 + -24112;
	// lwz r11,2816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b19c8
	if (ctx.cr6.eq) goto loc_823B19C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x820b9060
	ctx.lr = 0x823B19C8;
	sub_820B9060(ctx, base);
loc_823B19C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2816, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_823B1998) {
	__imp__sub_823B1998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B19E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B19E4) {
	__imp__sub_823B19E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B19E8) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-24112
	ctx.r31.s64 = ctx.r11.s64 + -24112;
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1a20
	if (ctx.cr6.eq) goto loc_823B1A20;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x820b9268
	ctx.lr = 0x823B1A18;
	sub_820B9268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
loc_823B1A20:
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

PPC_WEAK_FUNC(sub_823B19E8) {
	__imp__sub_823B19E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B1A34) {
	__imp__sub_823B1A34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823B1A40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,164(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r28,196(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// lhz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b1abc
	if (ctx.cr6.eq) goto loc_823B1ABC;
	// addi r26,r29,144
	ctx.r26.s64 = ctx.r29.s64 + 144;
loc_823B1A6C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d5650
	ctx.lr = 0x823B1A78;
	sub_823D5650(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d54e8
	ctx.lr = 0x823B1A80;
	sub_823D54E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d4f10
	ctx.lr = 0x823B1A88;
	sub_823D4F10(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c86c8
	ctx.lr = 0x823B1A90;
	sub_823C86C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d4be0
	ctx.lr = 0x823B1A98;
	sub_823D4BE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823B1AA0;
	sub_823D4BA0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c8710
	ctx.lr = 0x823B1AAC;
	sub_823C8710(ctx, base);
	// lhz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823b1a6c
	if (ctx.cr6.lt) goto loc_823B1A6C;
loc_823B1ABC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B1A38) {
	__imp__sub_823B1A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B1AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B1AC4) {
	__imp__sub_823B1AC4(ctx, base);
}

