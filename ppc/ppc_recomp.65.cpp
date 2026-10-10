#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822979F0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,42
	ctx.r3.s64 = 42;
	// bl 0x82296cf0
	ctx.lr = 0x82297A14;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297A20;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_822979F0) {
	__imp__sub_822979F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297A34) {
	__imp__sub_82297A34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297A38) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82296cf0
	ctx.lr = 0x82297A5C;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297A68;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297A38) {
	__imp__sub_82297A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297A7C) {
	__imp__sub_82297A7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297A80) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82296cf0
	ctx.lr = 0x82297AA4;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297AB0;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297A80) {
	__imp__sub_82297A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297AC4) {
	__imp__sub_82297AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82297AD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r11,12184
	ctx.r30.s64 = ctx.r11.s64 + 12184;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x822a3628
	ctx.lr = 0x82297AF8;
	sub_822A3628(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82297b30
	if (ctx.cr6.eq) goto loc_82297B30;
	// bl 0x822a2468
	ctx.lr = 0x82297B0C;
	sub_822A2468(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x822a7160
	ctx.lr = 0x82297B18;
	sub_822A7160(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82297B30:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82297378
	ctx.lr = 0x82297B40;
	sub_82297378(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// addi r30,r3,27
	ctx.r30.s64 = ctx.r3.s64 + 27;
	// ble cr6,0x82297b54
	if (!ctx.cr6.gt) goto loc_82297B54;
	// li r30,33
	ctx.r30.s64 = 33;
loc_82297B54:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82296cf0
	ctx.lr = 0x82297B64;
	sub_82296CF0(ctx, base);
	// cmplwi cr6,r30,33
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 33, ctx.xer);
	// bne cr6,0x82297b80
	if (!ctx.cr6.eq) goto loc_82297B80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x82297B74;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
loc_82297B80:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297B8C;
	sub_8229E1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82297AC8) {
	__imp__sub_82297AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297B98) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82297378
	ctx.lr = 0x82297BBC;
	sub_82297378(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,58
	ctx.r3.s64 = ctx.r11.s64 + 58;
	// bl 0x82296cf0
	ctx.lr = 0x82297BDC;
	sub_82296CF0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82297bf8
	if (ctx.cr6.eq) goto loc_82297BF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x82297BEC;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
loc_82297BF8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297C04;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297B98) {
	__imp__sub_82297B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297C1C) {
	__imp__sub_82297C1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297C20) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82296cf0
	ctx.lr = 0x82297C44;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297C50;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297C20) {
	__imp__sub_82297C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297C64) {
	__imp__sub_82297C64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297C68) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x82296cf0
	ctx.lr = 0x82297C94;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297CA0;
	sub_8229E1D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297CAC;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297C68) {
	__imp__sub_82297C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297CC4) {
	__imp__sub_82297CC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297CC8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x82296cf0
	ctx.lr = 0x82297CF4;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297D00;
	sub_8229E1D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297D0C;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297CC8) {
	__imp__sub_82297CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297D24) {
	__imp__sub_82297D24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297D28) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82296cf0
	ctx.lr = 0x82297D54;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297D60;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297D6C;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297D28) {
	__imp__sub_82297D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297D84) {
	__imp__sub_82297D84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297D88) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x82296cf0
	ctx.lr = 0x82297DAC;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297DB8;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297D88) {
	__imp__sub_82297D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297DCC) {
	__imp__sub_82297DCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297DD0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,100
	ctx.r3.s64 = 100;
	// b 0x82296cf0
	sub_82296CF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82297DD0) {
	__imp__sub_82297DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297DE0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,101
	ctx.r3.s64 = 101;
	// bl 0x82296cf0
	ctx.lr = 0x82297E04;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297E10;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82297DE0) {
	__imp__sub_82297DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297E24) {
	__imp__sub_82297E24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82297E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x82297E54;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82297e68
	if (ctx.cr6.eq) goto loc_82297E68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x82297E68;
	sub_82294C58(ctx, base);
loc_82297E68:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229a1d0
	ctx.lr = 0x82297E78;
	sub_8229A1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82297e8c
	if (ctx.cr6.eq) goto loc_82297E8C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294c58
	ctx.lr = 0x82297E8C;
	sub_82294C58(ctx, base);
loc_82297E8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,35
	ctx.r3.s64 = 35;
	// bl 0x82296cf0
	ctx.lr = 0x82297E9C;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297EA8;
	sub_8229E1D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82297EB4;
	sub_8229E1D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82297E28) {
	__imp__sub_82297E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82297EBC) {
	__imp__sub_82297EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297EC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82297ED0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82297efc
	if (ctx.cr6.eq) goto loc_82297EFC;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82297ed0
	if (ctx.cr6.eq) goto loc_82297ED0;
	// blr 
	return;
loc_82297EFC:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82294480
	sub_82294480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82297EC0) {
	__imp__sub_82297EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82297F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82297F10;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x822981a0
	if (!ctx.cr6.eq) goto loc_822981A0;
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822981a0
	if (ctx.cr6.eq) goto loc_822981A0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82297F3C;
	sub_822A13A0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lwz r26,8(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a3628
	ctx.lr = 0x82297F58;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82297f90
	if (ctx.cr6.eq) goto loc_82297F90;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a7160
	ctx.lr = 0x82297F6C;
	sub_822A7160(ctx, base);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82298104
	goto loc_82298104;
loc_82297F90:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822a3628
	ctx.lr = 0x82297F9C;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82297fd4
	if (ctx.cr6.eq) goto loc_82297FD4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822a7160
	ctx.lr = 0x82297FB0;
	sub_822A7160(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82298048
	goto loc_82298048;
loc_82297FD4:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82225020
	ctx.lr = 0x82297FE8;
	sub_82225020(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822980cc
	if (!ctx.cr6.eq) goto loc_822980CC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82225230
	ctx.lr = 0x82298004;
	sub_82225230(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822980cc
	if (ctx.cr6.eq) goto loc_822980CC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822a67b8
	ctx.lr = 0x8229801C;
	sub_822A67B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x822a3878
	ctx.lr = 0x82298048;
	sub_822A3878(ctx, base);
loc_82298048:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822981a0
	if (ctx.cr6.eq) goto loc_822981A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82298070
	if (!ctx.cr6.eq) goto loc_82298070;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,48
	ctx.r10.u64 = ctx.r11.u64 | 48;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229812c
	if (ctx.cr6.eq) goto loc_8229812C;
loc_82298070:
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229808c
	if (!ctx.cr6.eq) goto loc_8229808C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2468
	ctx.lr = 0x8229808C;
	sub_822A2468(ctx, base);
loc_8229808C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82296cf0
	ctx.lr = 0x8229809C;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822980A8;
	sub_8229E1D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822953f0
	ctx.lr = 0x822980B0;
	sub_822953F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x822980BC;
	sub_822A2830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r30,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r30.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822980CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a67b8
	ctx.lr = 0x822980D8;
	sub_822A67B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x822a3878
	ctx.lr = 0x82298104;
	sub_822A3878(ctx, base);
loc_82298104:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822981a0
	if (ctx.cr6.eq) goto loc_822981A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82298144
	if (!ctx.cr6.eq) goto loc_82298144;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,48
	ctx.r10.u64 = ctx.r11.u64 | 48;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82298144
	if (!ctx.cr6.eq) goto loc_82298144;
loc_8229812C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,21592
	ctx.r4.s64 = ctx.r11.s64 + 21592;
	// bl 0x8229e338
	ctx.lr = 0x8229813C;
	sub_8229E338(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82298144:
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82298160
	if (!ctx.cr6.eq) goto loc_82298160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2468
	ctx.lr = 0x82298160;
	sub_822A2468(ctx, base);
loc_82298160:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82296cf0
	ctx.lr = 0x82298170;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229817C;
	sub_8229E1D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822953f0
	ctx.lr = 0x82298184;
	sub_822953F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x82298190;
	sub_822A2830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r30,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r30.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822981A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82296cf0
	ctx.lr = 0x822981B0;
	sub_82296CF0(ctx, base);
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822981BC;
	sub_8229E1D0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82295048
	ctx.lr = 0x822981C8;
	sub_82295048(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82297F08) {
	__imp__sub_82297F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822981D0) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r5,3
	ctx.r5.s64 = 3;
	// bne cr6,0x82298208
	if (!ctx.cr6.eq) goto loc_82298208;
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
	// li r3,86
	ctx.r3.s64 = 86;
	// b 0x82298210
	goto loc_82298210;
loc_82298208:
	// subfic r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r4.s64;
	// li r3,88
	ctx.r3.s64 = 88;
loc_82298210:
	// bl 0x82296cf0
	ctx.lr = 0x82298214;
	sub_82296CF0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82298220;
	sub_8229E1D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82295048
	ctx.lr = 0x8229822C;
	sub_82295048(ctx, base);
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

PPC_WEAK_FUNC(sub_822981D0) {
	__imp__sub_822981D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82298244) {
	__imp__sub_82298244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82298250;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x82298270;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298284
	if (ctx.cr6.eq) goto loc_82298284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x82298284;
	sub_82294C58(ctx, base);
loc_82298284:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r5,3
	ctx.r5.s64 = 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822982a0
	if (!ctx.cr6.eq) goto loc_822982A0;
	// subfic r4,r31,-1
	ctx.xer.ca = ctx.r31.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r31.s64;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x822982a8
	goto loc_822982A8;
loc_822982A0:
	// subfic r4,r31,-2
	ctx.xer.ca = ctx.r31.u32 <= 4294967294;
	ctx.r4.s64 = -2 - ctx.r31.s64;
	// li r3,89
	ctx.r3.s64 = 89;
loc_822982A8:
	// bl 0x82296cf0
	ctx.lr = 0x822982AC;
	sub_82296CF0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822982B8;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822982C4;
	sub_8229E1D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82298248) {
	__imp__sub_82298248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822982CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822982CC) {
	__imp__sub_822982CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822982D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822982D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x82298304
	if (!ctx.cr6.eq) goto loc_82298304;
	// subfic r4,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r4.s64;
	// li r3,90
	ctx.r3.s64 = 90;
	// b 0x8229830c
	goto loc_8229830C;
loc_82298304:
	// neg r4,r31
	ctx.r4.s64 = -ctx.r31.s64;
	// li r3,94
	ctx.r3.s64 = 94;
loc_8229830C:
	// bl 0x82296cf0
	ctx.lr = 0x82298310;
	sub_82296CF0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229831C;
	sub_8229E1D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82295048
	ctx.lr = 0x82298328;
	sub_82295048(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x82298330;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822982D0) {
	__imp__sub_822982D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82298344) {
	__imp__sub_82298344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82298350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x8229837c
	if (!ctx.cr6.eq) goto loc_8229837C;
	// subfic r4,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r4.s64;
	// li r3,91
	ctx.r3.s64 = 91;
	// b 0x82298384
	goto loc_82298384;
loc_8229837C:
	// neg r4,r31
	ctx.r4.s64 = -ctx.r31.s64;
	// li r3,95
	ctx.r3.s64 = 95;
loc_82298384:
	// bl 0x82296cf0
	ctx.lr = 0x82298388;
	sub_82296CF0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82298394;
	sub_8229E1D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82295048
	ctx.lr = 0x822983A0;
	sub_82295048(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x822983A8;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82298348) {
	__imp__sub_82298348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822983BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822983BC) {
	__imp__sub_822983BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822983C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822983C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x822983E4;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822983f8
	if (ctx.cr6.eq) goto loc_822983F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x822983F8;
	sub_82294C58(ctx, base);
loc_822983F8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82298414
	if (!ctx.cr6.eq) goto loc_82298414;
	// neg r4,r31
	ctx.r4.s64 = -ctx.r31.s64;
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x8229841c
	goto loc_8229841C;
loc_82298414:
	// subfic r4,r31,-1
	ctx.xer.ca = ctx.r31.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r31.s64;
	// li r3,96
	ctx.r3.s64 = 96;
loc_8229841C:
	// bl 0x82296cf0
	ctx.lr = 0x82298420;
	sub_82296CF0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229842C;
	sub_8229E1D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x82298434;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822983C0) {
	__imp__sub_822983C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82298450;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229846C;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298480
	if (ctx.cr6.eq) goto loc_82298480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x82298480;
	sub_82294C58(ctx, base);
loc_82298480:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229849c
	if (!ctx.cr6.eq) goto loc_8229849C;
	// neg r4,r31
	ctx.r4.s64 = -ctx.r31.s64;
	// li r3,93
	ctx.r3.s64 = 93;
	// b 0x822984a4
	goto loc_822984A4;
loc_8229849C:
	// subfic r4,r31,-1
	ctx.xer.ca = ctx.r31.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r31.s64;
	// li r3,97
	ctx.r3.s64 = 97;
loc_822984A4:
	// bl 0x82296cf0
	ctx.lr = 0x822984A8;
	sub_82296CF0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822984B4;
	sub_8229E1D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x822984BC;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82298448) {
	__imp__sub_82298448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822984D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x822984f4
	if (ctx.cr6.eq) goto loc_822984F4;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82298248
	sub_82298248(ctx, base);
	return;
loc_822984F4:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x822981d0
	sub_822981D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822984D0) {
	__imp__sub_822984D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822984FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822984FC) {
	__imp__sub_822984FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298500) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x82298540
	if (ctx.cr6.eq) goto loc_82298540;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x82298548
	if (!ctx.cr6.eq) goto loc_82298548;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822983c0
	ctx.lr = 0x8229853C;
	sub_822983C0(ctx, base);
	// b 0x82298548
	goto loc_82298548;
loc_82298540:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822982d0
	ctx.lr = 0x82298548;
	sub_822982D0(ctx, base);
loc_82298548:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82298554;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82298500) {
	__imp__sub_82298500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298568) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x822985a8
	if (ctx.cr6.eq) goto loc_822985A8;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x822985b0
	if (!ctx.cr6.eq) goto loc_822985B0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82298448
	ctx.lr = 0x822985A4;
	sub_82298448(ctx, base);
	// b 0x822985b0
	goto loc_822985B0;
loc_822985A8:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82298348
	ctx.lr = 0x822985B0;
	sub_82298348(ctx, base);
loc_822985B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822985BC;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82298568) {
	__imp__sub_82298568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822985D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822985D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x822985F4;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298608
	if (ctx.cr6.eq) goto loc_82298608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x82298608;
	sub_82294C58(ctx, base);
loc_82298608:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82298624
	if (!ctx.cr6.eq) goto loc_82298624;
	// neg r4,r31
	ctx.r4.s64 = -ctx.r31.s64;
	// li r3,98
	ctx.r3.s64 = 98;
	// b 0x8229862c
	goto loc_8229862C;
loc_82298624:
	// subfic r4,r31,-1
	ctx.xer.ca = ctx.r31.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r31.s64;
	// li r3,99
	ctx.r3.s64 = 99;
loc_8229862C:
	// bl 0x82296cf0
	ctx.lr = 0x82298630;
	sub_82296CF0(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229863C;
	sub_8229E1D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x82298644;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822985D0) {
	__imp__sub_822985D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298658) {
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
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x822986a4
	if (!ctx.cr6.eq) goto loc_822986A4;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,84
	ctx.r3.s64 = 84;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// bl 0x82296cf0
	ctx.lr = 0x82298698;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8229e1d0
	ctx.lr = 0x822986A4;
	sub_8229E1D0(ctx, base);
loc_822986A4:
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

PPC_WEAK_FUNC(sub_82298658) {
	__imp__sub_82298658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822986B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8229874c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229874C;
	// bdzf 4*cr6+eq,0x8229874c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229874C;
	// bdzf 4*cr6+eq,0x8229874c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229874C;
	// bdzf 4*cr6+eq,0x8229871c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229871C;
	// bdzf 4*cr6+eq,0x8229872c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229872C;
	// bne cr6,0x8229873c
	if (!ctx.cr6.eq) goto loc_8229873C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// beq cr6,0x82298714
	if (ctx.cr6.eq) goto loc_82298714;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82298248
	sub_82298248(ctx, base);
	return;
loc_82298714:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822981d0
	sub_822981D0(ctx, base);
	return;
loc_8229871C:
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82298500
	sub_82298500(ctx, base);
	return;
loc_8229872C:
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82298568
	sub_82298568(ctx, base);
	return;
loc_8229873C:
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x822985d0
	sub_822985D0(ctx, base);
	return;
loc_8229874C:
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822986B8) {
	__imp__sub_822986B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82298758;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// ble cr6,0x82298774
	if (!ctx.cr6.gt) goto loc_82298774;
	// li r30,74
	ctx.r30.s64 = 74;
loc_82298774:
	// li r5,1
	ctx.r5.s64 = 1;
	// subfic r4,r31,1
	ctx.xer.ca = ctx.r31.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r31.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82296cf0
	ctx.lr = 0x82298784;
	sub_82296CF0(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82298790;
	sub_8229E1D0(ctx, base);
	// cmplwi cr6,r30,74
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 74, ctx.xer);
	// bne cr6,0x822987ac
	if (!ctx.cr6.eq) goto loc_822987AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x822987A0;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
loc_822987AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82298750) {
	__imp__sub_82298750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822987B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822987B4) {
	__imp__sub_822987B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822987B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822987C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// addi r30,r3,75
	ctx.r30.s64 = ctx.r3.s64 + 75;
	// ble cr6,0x822987dc
	if (!ctx.cr6.gt) goto loc_822987DC;
	// li r30,81
	ctx.r30.s64 = 81;
loc_822987DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// neg r4,r31
	ctx.r4.s64 = -ctx.r31.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82296cf0
	ctx.lr = 0x822987EC;
	sub_82296CF0(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822987F8;
	sub_8229E1D0(ctx, base);
	// cmplwi cr6,r30,81
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 81, ctx.xer);
	// bne cr6,0x82298814
	if (!ctx.cr6.eq) goto loc_82298814;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x82298808;
	sub_822A2818(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r3,16344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
loc_82298814:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822987B8) {
	__imp__sub_822987B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229881C) {
	__imp__sub_8229881C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82298828;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x82298a80
	if (!ctx.cr6.eq) goto loc_82298A80;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bne cr6,0x82298a48
	if (!ctx.cr6.eq) goto loc_82298A48;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// bne cr6,0x82298a48
	if (!ctx.cr6.eq) goto loc_82298A48;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82298a48
	if (ctx.cr6.eq) goto loc_82298A48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82298884;
	sub_822A13A0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lwz r26,8(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a3628
	ctx.lr = 0x822988A0;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822988d8
	if (ctx.cr6.eq) goto loc_822988D8;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a7160
	ctx.lr = 0x822988B4;
	sub_822A7160(ctx, base);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82298928
	goto loc_82298928;
loc_822988D8:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82225020
	ctx.lr = 0x822988E8;
	sub_82225020(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822a67b8
	ctx.lr = 0x822988FC;
	sub_822A67B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x822a3878
	ctx.lr = 0x82298928;
	sub_822A3878(ctx, base);
loc_82298928:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82298a48
	if (ctx.cr6.eq) goto loc_82298A48;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82298978
	if (!ctx.cr6.eq) goto loc_82298978;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295488
	ctx.lr = 0x82298948;
	sub_82295488(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82298978
	if (!ctx.cr6.eq) goto loc_82298978;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82298978
	if (!ctx.cr6.eq) goto loc_82298978;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,21688
	ctx.r4.s64 = ctx.r11.s64 + 21688;
	// bl 0x8229e338
	ctx.lr = 0x82298970;
	sub_8229E338(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82298978:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82294ef0
	ctx.lr = 0x82298984;
	sub_82294EF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// blt cr6,0x822989a8
	if (ctx.cr6.lt) goto loc_822989A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,21660
	ctx.r4.s64 = ctx.r11.s64 + 21660;
	// bl 0x8229e338
	ctx.lr = 0x822989A0;
	sub_8229E338(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822989A8:
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r29,r11,16344
	ctx.r29.s64 = ctx.r11.s64 + 16344;
	// lbz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822989c4
	if (!ctx.cr6.eq) goto loc_822989C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2468
	ctx.lr = 0x822989C4;
	sub_822A2468(ctx, base);
loc_822989C4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82298750
	ctx.lr = 0x822989D0;
	sub_82298750(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822953f0
	ctx.lr = 0x822989D8;
	sub_822953F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x822989E4;
	sub_822A2830(ctx, base);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r30,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r30.u16);
	// beq cr6,0x82298a08
	if (ctx.cr6.eq) goto loc_82298A08;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82296cf0
	ctx.lr = 0x82298A08;
	sub_82296CF0(ctx, base);
loc_82298A08:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82298abc
	if (!ctx.cr6.eq) goto loc_82298ABC;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// ori r8,r10,48
	ctx.r8.u64 = ctx.r10.u64 | 48;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r7,6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stwx r23,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r23.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82298abc
	if (!ctx.cr6.eq) goto loc_82298ABC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822a2850
	ctx.lr = 0x82298A40;
	sub_822A2850(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82298A48:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x82298a80
	if (!ctx.cr6.eq) goto loc_82298A80;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,84
	ctx.r3.s64 = 84;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// bl 0x82296cf0
	ctx.lr = 0x82298A74;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8229e1d0
	ctx.lr = 0x82298A80;
	sub_8229E1D0(ctx, base);
loc_82298A80:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82294ef0
	ctx.lr = 0x82298A8C;
	sub_82294EF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822986b8
	ctx.lr = 0x82298AA0;
	sub_822986B8(ctx, base);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298abc
	if (ctx.cr6.eq) goto loc_82298ABC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82296cf0
	ctx.lr = 0x82298ABC;
	sub_82296CF0(ctx, base);
loc_82298ABC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82298820) {
	__imp__sub_82298820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82298AC4) {
	__imp__sub_82298AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82298AD0;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x82298d64
	if (!ctx.cr6.eq) goto loc_82298D64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bne cr6,0x82298d2c
	if (!ctx.cr6.eq) goto loc_82298D2C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 22, ctx.xer);
	// bne cr6,0x82298d2c
	if (!ctx.cr6.eq) goto loc_82298D2C;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82298d2c
	if (ctx.cr6.eq) goto loc_82298D2C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82298B34;
	sub_822A13A0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lwz r25,8(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822a3628
	ctx.lr = 0x82298B50;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82298b88
	if (ctx.cr6.eq) goto loc_82298B88;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822a7160
	ctx.lr = 0x82298B64;
	sub_822A7160(ctx, base);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82298bd8
	goto loc_82298BD8;
loc_82298B88:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82225230
	ctx.lr = 0x82298B98;
	sub_82225230(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822a67b8
	ctx.lr = 0x82298BAC;
	sub_822A67B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x822a3878
	ctx.lr = 0x82298BD8;
	sub_822A3878(ctx, base);
loc_82298BD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82298d2c
	if (ctx.cr6.eq) goto loc_82298D2C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82298c28
	if (!ctx.cr6.eq) goto loc_82298C28;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82295488
	ctx.lr = 0x82298BF8;
	sub_82295488(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82298c28
	if (!ctx.cr6.eq) goto loc_82298C28;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82298c28
	if (!ctx.cr6.eq) goto loc_82298C28;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,21688
	ctx.r4.s64 = ctx.r11.s64 + 21688;
	// bl 0x8229e338
	ctx.lr = 0x82298C20;
	sub_8229E338(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82298C28:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294ef0
	ctx.lr = 0x82298C34;
	sub_82294EF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8229a1d0
	ctx.lr = 0x82298C48;
	sub_8229A1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298c5c
	if (ctx.cr6.eq) goto loc_82298C5C;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82294c58
	ctx.lr = 0x82298C5C;
	sub_82294C58(ctx, base);
loc_82298C5C:
	// cmpwi cr6,r28,256
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 256, ctx.xer);
	// blt cr6,0x82298c7c
	if (ctx.cr6.lt) goto loc_82298C7C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,21660
	ctx.r4.s64 = ctx.r11.s64 + 21660;
	// bl 0x8229e338
	ctx.lr = 0x82298C74;
	sub_8229E338(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82298C7C:
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r29,r11,16344
	ctx.r29.s64 = ctx.r11.s64 + 16344;
	// lbz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82298c98
	if (!ctx.cr6.eq) goto loc_82298C98;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a2468
	ctx.lr = 0x82298C98;
	sub_822A2468(ctx, base);
loc_82298C98:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822987b8
	ctx.lr = 0x82298CA4;
	sub_822987B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822953f0
	ctx.lr = 0x82298CAC;
	sub_822953F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x82298CB8;
	sub_822A2830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// bl 0x8229e1d0
	ctx.lr = 0x82298CD0;
	sub_8229E1D0(ctx, base);
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298cec
	if (ctx.cr6.eq) goto loc_82298CEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82296cf0
	ctx.lr = 0x82298CEC;
	sub_82296CF0(ctx, base);
loc_82298CEC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82298dd4
	if (!ctx.cr6.eq) goto loc_82298DD4;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// ori r8,r10,48
	ctx.r8.u64 = ctx.r10.u64 | 48;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lbz r7,6(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stwx r21,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r21.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82298dd4
	if (!ctx.cr6.eq) goto loc_82298DD4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822a2850
	ctx.lr = 0x82298D24;
	sub_822A2850(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82298D2C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x82298d64
	if (!ctx.cr6.eq) goto loc_82298D64;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,84
	ctx.r3.s64 = 84;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// bl 0x82296cf0
	ctx.lr = 0x82298D58;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8229e1d0
	ctx.lr = 0x82298D64;
	sub_8229E1D0(ctx, base);
loc_82298D64:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82294ef0
	ctx.lr = 0x82298D70;
	sub_82294EF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8229a1d0
	ctx.lr = 0x82298D84;
	sub_8229A1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298d98
	if (ctx.cr6.eq) goto loc_82298D98;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82294c58
	ctx.lr = 0x82298D98;
	sub_82294C58(ctx, base);
loc_82298D98:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822986b8
	ctx.lr = 0x82298DAC;
	sub_822986B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82298DB8;
	sub_8229E1D0(ctx, base);
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298dd4
	if (ctx.cr6.eq) goto loc_82298DD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82296cf0
	ctx.lr = 0x82298DD4;
	sub_82296CF0(ctx, base);
loc_82298DD4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82298AC8) {
	__imp__sub_82298AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82298DDC) {
	__imp__sub_82298DDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298DE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x82298e10
	if (ctx.cr6.eq) goto loc_82298E10;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82298ac8
	sub_82298AC8(ctx, base);
	return;
loc_82298E10:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// b 0x82298820
	sub_82298820(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82298DE0) {
	__imp__sub_82298DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298E24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82298E24) {
	__imp__sub_82298E24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298E28) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x82298e74
	if (ctx.cr6.eq) goto loc_82298E74;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x82298ea8
	if (!ctx.cr6.eq) goto loc_82298EA8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82298ac8
	ctx.lr = 0x82298E6C;
	sub_82298AC8(ctx, base);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x82298e8c
	goto loc_82298E8C;
loc_82298E74:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82298820
	ctx.lr = 0x82298E88;
	sub_82298820(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82298E8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,101
	ctx.r3.s64 = 101;
	// bl 0x82296cf0
	ctx.lr = 0x82298E9C;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82298EA8;
	sub_8229E1D0(ctx, base);
loc_82298EA8:
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

PPC_WEAK_FUNC(sub_82298E28) {
	__imp__sub_82298E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82298EBC) {
	__imp__sub_82298EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82298EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82298EC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82299014
	if (ctx.cr6.eq) goto loc_82299014;
loc_82298EEC:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82298eec
	if (!ctx.cr6.eq) goto loc_82298EEC;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82298f20
	if (!ctx.cr6.eq) goto loc_82298F20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8229a4f0
	ctx.lr = 0x82298F18;
	sub_8229A4F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82298F20:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82299014
	if (!ctx.cr6.eq) goto loc_82299014;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298f9c
	if (ctx.cr6.eq) goto loc_82298F9C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82298F3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x82298f74
	if (ctx.cr6.eq) goto loc_82298F74;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229a4f0
	ctx.lr = 0x82298F58;
	sub_8229A4F0(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82298f90
	if (ctx.cr6.eq) goto loc_82298F90;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294dc0
	ctx.lr = 0x82298F70;
	sub_82294DC0(ctx, base);
	// b 0x82298f90
	goto loc_82298F90;
loc_82298F74:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8229a4f0
	ctx.lr = 0x82298F7C;
	sub_8229A4F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82298f90
	if (ctx.cr6.eq) goto loc_82298F90;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294c58
	ctx.lr = 0x82298F90;
	sub_82294C58(ctx, base);
loc_82298F90:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82298f3c
	if (!ctx.cr6.eq) goto loc_82298F3C;
loc_82298F9C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298fec
	if (ctx.cr6.eq) goto loc_82298FEC;
	// lis r8,-31918
	ctx.r8.s64 = -2091778048;
	// lis r7,-31916
	ctx.r7.s64 = -2091646976;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r10,r7,16344
	ctx.r10.s64 = ctx.r7.s64 + 16344;
	// lwz r11,12184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12184);
	// addi r9,r10,92
	ctx.r9.s64 = ctx.r10.s64 + 92;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// stw r11,12184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12184, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x822958a8
	ctx.lr = 0x82298FDC;
	sub_822958A8(ctx, base);
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82298FEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// li r3,139
	ctx.r3.s64 = 139;
	// bl 0x82296cf0
	ctx.lr = 0x82298FFC;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82299008;
	sub_8229E1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82299014:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,21772
	ctx.r4.s64 = ctx.r11.s64 + 21772;
	// bl 0x8229e338
	ctx.lr = 0x82299024;
	sub_8229E338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82298EC0) {
	__imp__sub_82298EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299030) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82299080
	if (ctx.cr6.eq) goto loc_82299080;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82299080
	if (!ctx.cr6.eq) goto loc_82299080;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82299074
	if (ctx.cr6.eq) goto loc_82299074;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21440
	ctx.r4.s64 = ctx.r11.s64 + 21440;
	// b 0x8229e338
	sub_8229E338(ctx, base);
	return;
loc_82299074:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82299458
	sub_82299458(ctx, base);
	return;
loc_82299080:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,21440
	ctx.r4.s64 = ctx.r11.s64 + 21440;
	// b 0x8229e338
	sub_8229E338(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82299030) {
	__imp__sub_82299030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82299090) {
	__imp__sub_82299090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82299094) {
	__imp__sub_82299094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822990A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x822990C0;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822990d4
	if (ctx.cr6.eq) goto loc_822990D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x822990D4;
	sub_82294C58(ctx, base);
loc_822990D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,109
	ctx.r3.s64 = 109;
	// bl 0x82296cf0
	ctx.lr = 0x822990E4;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822990F0;
	sub_8229E1D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x822990F8;
	sub_822A2830(ctx, base);
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16344, ctx.r11.u32);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r29,16344(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16344);
	// bl 0x822a2818
	ctx.lr = 0x82299118;
	sub_822A2818(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229912C;
	sub_8229A4F0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82299140
	if (ctx.cr6.eq) goto loc_82299140;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294c58
	ctx.lr = 0x82299140;
	sub_82294C58(ctx, base);
loc_82299140:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,103
	ctx.r3.s64 = 103;
	// bl 0x82296cf0
	ctx.lr = 0x82299150;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229915C;
	sub_8229E1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x82299164;
	sub_822A2818(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82299098) {
	__imp__sub_82299098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82299174) {
	__imp__sub_82299174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82299180;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x822991A0;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822991b4
	if (ctx.cr6.eq) goto loc_822991B4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x822991B4;
	sub_82294C58(ctx, base);
loc_822991B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82296cf0
	ctx.lr = 0x822991C4;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822991D0;
	sub_8229E1D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x822991D8;
	sub_822A2830(ctx, base);
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16344, ctx.r11.u32);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r29,16344(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16344);
	// bl 0x822a2818
	ctx.lr = 0x822991F8;
	sub_822A2818(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229920C;
	sub_8229A4F0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82299220
	if (ctx.cr6.eq) goto loc_82299220;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294c58
	ctx.lr = 0x82299220;
	sub_82294C58(ctx, base);
loc_82299220:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,103
	ctx.r3.s64 = 103;
	// bl 0x82296cf0
	ctx.lr = 0x82299230;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229923C;
	sub_8229E1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x82299244;
	sub_822A2818(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82299178) {
	__imp__sub_82299178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82299254) {
	__imp__sub_82299254(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82299260;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x82299284;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822992b8
	if (!ctx.cr6.eq) goto loc_822992B8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x822992A0;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822992dc
	if (ctx.cr6.eq) goto loc_822992DC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294c58
	ctx.lr = 0x822992B4;
	sub_82294C58(ctx, base);
	// b 0x822992dc
	goto loc_822992DC;
loc_822992B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294dc0
	ctx.lr = 0x822992C0;
	sub_82294DC0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x822992D0;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82299304
	if (!ctx.cr6.eq) goto loc_82299304;
loc_822992DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// extsb r3,r29
	ctx.r3.s64 = ctx.r29.s8;
	// bl 0x82296cf0
	ctx.lr = 0x822992EC;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822992F8;
	sub_8229E1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82299304:
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12184);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12184, ctx.r11.u32);
	// bl 0x822a98b8
	ctx.lr = 0x82299324;
	sub_822A98B8(ctx, base);
	// lis r9,-31862
	ctx.r9.s64 = -2088108032;
	// addi r8,r9,-6904
	ctx.r8.s64 = ctx.r9.s64 + -6904;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82299354
	if (ctx.cr6.eq) goto loc_82299354;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-29844
	ctx.r4.s64 = ctx.r11.s64 + -29844;
	// bl 0x8229e338
	ctx.lr = 0x82299348;
	sub_8229E338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82299354:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82299258) {
	__imp__sub_82299258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229936C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229936C) {
	__imp__sub_8229936C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822993a8
	if (ctx.cr6.eq) goto loc_822993A8;
loc_82299380:
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82299380
	if (!ctx.cr6.eq) goto loc_82299380;
loc_822993A8:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82294480
	sub_82294480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82299370) {
	__imp__sub_82299370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822993B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822993B4) {
	__imp__sub_822993B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822993B8) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// beq cr6,0x82299438
	if (ctx.cr6.eq) goto loc_82299438;
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// beq cr6,0x82299404
	if (ctx.cr6.eq) goto loc_82299404;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,21816
	ctx.r4.s64 = ctx.r11.s64 + 21816;
	// bl 0x8229e338
	ctx.lr = 0x822993F0;
	sub_8229E338(ctx, base);
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
loc_82299404:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82296cf0
	ctx.lr = 0x82299418;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82299424;
	sub_8229E1D0(ctx, base);
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
loc_82299438:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8229bb70
	ctx.lr = 0x82299444;
	sub_8229BB70(ctx, base);
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

PPC_WEAK_FUNC(sub_822993B8) {
	__imp__sub_822993B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299458) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// bgt cr6,0x82299500
	if (ctx.cr6.gt) goto loc_82299500;
	// beq cr6,0x822994f8
	if (ctx.cr6.eq) goto loc_822994F8;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x822994bc
	if (ctx.cr6.eq) goto loc_822994BC;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x8229949c
	if (ctx.cr6.eq) goto loc_8229949C;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x82299510
	if (!ctx.cr6.eq) goto loc_82299510;
	// li r3,42
	ctx.r3.s64 = 42;
	// b 0x82299554
	goto loc_82299554;
loc_8229949C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82298e28
	ctx.lr = 0x822994A8;
	sub_82298E28(ctx, base);
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
loc_822994BC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8229a0a0
	ctx.lr = 0x822994C8;
	sub_8229A0A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822994dc
	if (ctx.cr6.eq) goto loc_822994DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x822994DC;
	sub_82294C58(ctx, base);
loc_822994DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,101
	ctx.r3.s64 = 101;
	// bl 0x82296cf0
	ctx.lr = 0x822994F0;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82299568
	goto loc_82299568;
loc_822994F8:
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82299554
	goto loc_82299554;
loc_82299500:
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x82299550
	if (ctx.cr6.eq) goto loc_82299550;
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// beq cr6,0x82299534
	if (ctx.cr6.eq) goto loc_82299534;
loc_82299510:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,21440
	ctx.r4.s64 = ctx.r11.s64 + 21440;
	// bl 0x8229e338
	ctx.lr = 0x82299520;
	sub_8229E338(ctx, base);
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
loc_82299534:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82299030
	ctx.lr = 0x8229953C;
	sub_82299030(ctx, base);
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
loc_82299550:
	// li r3,16
	ctx.r3.s64 = 16;
loc_82299554:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82296cf0
	ctx.lr = 0x82299564;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_82299568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82299570;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82299458) {
	__imp__sub_82299458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82299584) {
	__imp__sub_82299584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299588) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822995b4
	if (ctx.cr6.eq) goto loc_822995B4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82299370
	sub_82299370(ctx, base);
	return;
loc_822995B4:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82294480
	sub_82294480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82299588) {
	__imp__sub_82299588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822995C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822995C4) {
	__imp__sub_822995C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822995C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x822995f8
	if (ctx.cr6.eq) goto loc_822995F8;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82298ac8
	sub_82298AC8(ctx, base);
	return;
loc_822995F8:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82298820
	sub_82298820(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822995C8) {
	__imp__sub_822995C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229960C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229960C) {
	__imp__sub_8229960C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299610) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82299638
	if (!ctx.cr6.eq) goto loc_82299638;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82299638:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82296cf0
	ctx.lr = 0x82299648;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82299654;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82299610) {
	__imp__sub_82299610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299668) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,83
	ctx.r3.s64 = 83;
	// bl 0x82296cf0
	ctx.lr = 0x8229968C;
	sub_82296CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,129
	ctx.r4.s64 = 129;
	// bl 0x8229e1d0
	ctx.lr = 0x82299698;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x822996A4;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82299668) {
	__imp__sub_82299668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822996B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822996e4
	if (ctx.cr6.eq) goto loc_822996E4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82299370
	sub_82299370(ctx, base);
	return;
loc_822996E4:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82294480
	sub_82294480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822996B8) {
	__imp__sub_822996B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822996F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822996F4) {
	__imp__sub_822996F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822996F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82299700;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82299784
	if (ctx.cr6.eq) goto loc_82299784;
	// lis r27,-31916
	ctx.r27.s64 = -2091646976;
loc_82299718:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82297378
	ctx.lr = 0x82299734;
	sub_82297378(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,53
	ctx.r3.s64 = ctx.r11.s64 + 53;
	// bl 0x82296cf0
	ctx.lr = 0x82299754;
	sub_82296CF0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8229976c
	if (ctx.cr6.eq) goto loc_8229976C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x82299764;
	sub_822A2818(ctx, base);
	// stw r3,16344(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16344, ctx.r3.u32);
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
loc_8229976C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82299778;
	sub_8229E1D0(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82299718
	if (!ctx.cr6.eq) goto loc_82299718;
loc_82299784:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822996F8) {
	__imp__sub_822996F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229978C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229978C) {
	__imp__sub_8229978C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82299798;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229980c
	if (ctx.cr6.eq) goto loc_8229980C;
	// lis r29,-31916
	ctx.r29.s64 = -2091646976;
loc_822997B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82297378
	ctx.lr = 0x822997CC;
	sub_82297378(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,55
	ctx.r3.s64 = 55;
	// bl 0x82296cf0
	ctx.lr = 0x822997E0;
	sub_82296CF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x822997E8;
	sub_822A2818(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,16344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16344, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// bl 0x8229e1d0
	ctx.lr = 0x82299800;
	sub_8229E1D0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822997b0
	if (!ctx.cr6.eq) goto loc_822997B0;
loc_8229980C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82299790) {
	__imp__sub_82299790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82299814) {
	__imp__sub_82299814(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299818) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82299870
	if (ctx.cr6.eq) goto loc_82299870;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8229985c
	if (ctx.cr6.eq) goto loc_8229985C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,21860
	ctx.r4.s64 = ctx.r11.s64 + 21860;
	// bl 0x8229e338
	ctx.lr = 0x82299858;
	sub_8229E338(ctx, base);
	// b 0x822998bc
	goto loc_822998BC;
loc_8229985C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82293f00
	ctx.lr = 0x8229986C;
	sub_82293F00(ctx, base);
	// b 0x822998b0
	goto loc_822998B0;
loc_82299870:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a3518
	ctx.lr = 0x82299878;
	sub_822A3518(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822998a4
	if (!ctx.cr6.eq) goto loc_822998A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,21832
	ctx.r3.s64 = ctx.r11.s64 + 21832;
	// bl 0x822e84f0
	ctx.lr = 0x82299894;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e338
	ctx.lr = 0x822998A0;
	sub_8229E338(ctx, base);
	// b 0x822998bc
	goto loc_822998BC;
loc_822998A4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a3538
	ctx.lr = 0x822998AC;
	sub_822A3538(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822998B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82296948
	ctx.lr = 0x822998BC;
	sub_82296948(ctx, base);
loc_822998BC:
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

PPC_WEAK_FUNC(sub_82299818) {
	__imp__sub_82299818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822998D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822998D4) {
	__imp__sub_822998D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822998D8) {
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
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,12184
	ctx.r9.s64 = ctx.r11.s64 + 12184;
	// ori r8,r10,48
	ctx.r8.u64 = ctx.r10.u64 | 48;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82299944
	if (ctx.cr6.eq) goto loc_82299944;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822db2b8
	ctx.lr = 0x82299914;
	sub_822DB2B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a2818
	ctx.lr = 0x82299928;
	sub_822A2818(ctx, base);
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r9,r10,16344
	ctx.r9.s64 = ctx.r10.s64 + 16344;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r31,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r31.u32);
loc_82299944:
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

PPC_WEAK_FUNC(sub_822998D8) {
	__imp__sub_822998D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229995C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229995C) {
	__imp__sub_8229995C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x82299968;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r20,68(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r19,72(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r21,64(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x822db2b8
	ctx.lr = 0x822999A0;
	sub_822DB2B8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82299b64
	if (ctx.cr6.eq) goto loc_82299B64;
loc_822999CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r25,4(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// beq cr6,0x82299a50
	if (ctx.cr6.eq) goto loc_82299A50;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x82299a50
	if (ctx.cr6.eq) goto loc_82299A50;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82299ba4
	if (ctx.cr6.eq) goto loc_82299BA4;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82299a14
	if (ctx.cr6.eq) goto loc_82299A14;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82296740
	ctx.lr = 0x82299A04;
	sub_82296740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82299a18
	if (!ctx.cr6.eq) goto loc_82299A18;
loc_82299A14:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82299A18:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8229c058
	ctx.lr = 0x82299A28;
	sub_8229C058(ctx, base);
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82299b00
	if (ctx.cr6.eq) goto loc_82299B00;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82299b00
	if (ctx.cr6.eq) goto loc_82299B00;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// b 0x82299afc
	goto loc_82299AFC;
loc_82299A50:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82299aa4
	if (ctx.cr6.eq) goto loc_82299AA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82299aa4
	if (!ctx.cr6.eq) goto loc_82299AA4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf. r28,r11,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82299aa4
	if (ctx.cr0.eq) goto loc_82299AA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x82296cf0
	ctx.lr = 0x82299A8C;
	sub_82296CF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x82299A94;
	sub_822A2818(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82299AA4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,66
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 66, ctx.xer);
	// bne cr6,0x82299ad0
	if (!ctx.cr6.eq) goto loc_82299AD0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82299818
	ctx.lr = 0x82299ACC;
	sub_82299818(ctx, base);
	// b 0x82299ae8
	goto loc_82299AE8;
loc_82299AD0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822998d8
	ctx.lr = 0x82299AE8;
	sub_822998D8(ctx, base);
loc_82299AE8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x822948d0
	ctx.lr = 0x82299AF4;
	sub_822948D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
loc_82299AFC:
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
loc_82299B00:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822999cc
	if (!ctx.cr6.eq) goto loc_822999CC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82299b64
	if (ctx.cr6.eq) goto loc_82299B64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82299b64
	if (!ctx.cr6.eq) goto loc_82299B64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf. r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82299b64
	if (ctx.cr0.eq) goto loc_82299B64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x82296cf0
	ctx.lr = 0x82299B48;
	sub_82296CF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x82299B50;
	sub_822A2818(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
loc_82299B64:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82299b90
	if (ctx.cr6.eq) goto loc_82299B90;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82299b80
	if (ctx.cr6.eq) goto loc_82299B80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82296138
	ctx.lr = 0x82299B80;
	sub_82296138(ctx, base);
loc_82299B80:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822945a8
	ctx.lr = 0x82299B90;
	sub_822945A8(ctx, base);
loc_82299B90:
	// stw r21,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r21.u32);
	// stw r20,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r20.u32);
	// stw r19,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r19.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82299BA4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,21904
	ctx.r4.s64 = ctx.r11.s64 + 21904;
	// bl 0x8229e338
	ctx.lr = 0x82299BB4;
	sub_8229E338(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82299960) {
	__imp__sub_82299960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82299BBC) {
	__imp__sub_82299BBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82299BC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82299c90
	if (ctx.cr6.eq) goto loc_82299C90;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82299c90
	if (!ctx.cr6.eq) goto loc_82299C90;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82296138
	ctx.lr = 0x82299BFC;
	sub_82296138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82297568
	ctx.lr = 0x82299C08;
	sub_82297568(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,110
	ctx.r3.s64 = 110;
	// bl 0x82296cf0
	ctx.lr = 0x82299C20;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82299C2C;
	sub_8229E1D0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2830
	ctx.lr = 0x82299C34;
	sub_822A2830(ctx, base);
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r8,r10,12184
	ctx.r8.s64 = ctx.r10.s64 + 12184;
	// ori r7,r9,48
	ctx.r7.u64 = ctx.r9.u64 | 48;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82299ca0
	if (ctx.cr6.eq) goto loc_82299CA0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822db2b8
	ctx.lr = 0x82299C64;
	sub_822DB2B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x822a2818
	ctx.lr = 0x82299C78;
	sub_822A2818(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82299C90:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,21928
	ctx.r4.s64 = ctx.r11.s64 + 21928;
	// bl 0x8229e338
	ctx.lr = 0x82299CA0;
	sub_8229E338(ctx, base);
loc_82299CA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82299BC0) {
	__imp__sub_82299BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82299CB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,16344
	ctx.r30.s64 = ctx.r11.s64 + 16344;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82299d78
	if (ctx.cr6.eq) goto loc_82299D78;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82299d78
	if (!ctx.cr6.eq) goto loc_82299D78;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822961e8
	ctx.lr = 0x82299CE4;
	sub_822961E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82297568
	ctx.lr = 0x82299CF0;
	sub_82297568(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,110
	ctx.r3.s64 = 110;
	// bl 0x82296cf0
	ctx.lr = 0x82299D08;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82299D14;
	sub_8229E1D0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2830
	ctx.lr = 0x82299D1C;
	sub_822A2830(ctx, base);
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r8,r10,12184
	ctx.r8.s64 = ctx.r10.s64 + 12184;
	// ori r7,r9,48
	ctx.r7.u64 = ctx.r9.u64 | 48;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82299d88
	if (ctx.cr6.eq) goto loc_82299D88;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822db2b8
	ctx.lr = 0x82299D4C;
	sub_822DB2B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a2818
	ctx.lr = 0x82299D60;
	sub_822A2818(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82299D78:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,21952
	ctx.r4.s64 = ctx.r11.s64 + 21952;
	// bl 0x8229e338
	ctx.lr = 0x82299D88;
	sub_8229E338(ctx, base);
loc_82299D88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82299CA8) {
	__imp__sub_82299CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82299D98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r30,r11,12184
	ctx.r30.s64 = ctx.r11.s64 + 12184;
	// ori r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 48;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82299dd8
	if (ctx.cr6.eq) goto loc_82299DD8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,21500
	ctx.r4.s64 = ctx.r11.s64 + 21500;
	// bl 0x8229e338
	ctx.lr = 0x82299DD0;
	sub_8229E338(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82299DD8:
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r29,r11,-6904
	ctx.r29.s64 = ctx.r11.s64 + -6904;
	// lwz r27,72(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x822948d0
	ctx.lr = 0x82299DF0;
	sub_822948D0(ctx, base);
	// lbz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82299e30
	if (ctx.cr6.eq) goto loc_82299E30;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229c518
	ctx.lr = 0x82299E20;
	sub_8229C518(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x82297568
	ctx.lr = 0x82299E2C;
	sub_82297568(ctx, base);
	// b 0x82299e68
	goto loc_82299E68;
loc_82299E30:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x82299E38;
	sub_822A2818(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 48;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229c518
	ctx.lr = 0x82299E60;
	sub_8229C518(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a2850
	ctx.lr = 0x82299E68;
	sub_822A2850(ctx, base);
loc_82299E68:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r27,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 48;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82299D90) {
	__imp__sub_82299D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82299E84) {
	__imp__sub_82299E84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299E88) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x822996f8
	ctx.lr = 0x82299EA8;
	sub_822996F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x82296cf0
	ctx.lr = 0x82299EB8;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82299EC4;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82299E88) {
	__imp__sub_82299E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299ED8) {
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
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,16344
	ctx.r11.s64 = ctx.r11.s64 + 16344;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stb r7,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r7.u8);
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stb r7,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r7.u8);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// stw r7,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r7.u32);
	// lbzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82299f6c
	if (ctx.cr6.eq) goto loc_82299F6C;
	// stbx r7,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u8);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,12184
	ctx.r9.s64 = ctx.r11.s64 + 12184;
	// ori r8,r10,52
	ctx.r8.u64 = ctx.r10.u64 | 52;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// bl 0x82296cf0
	ctx.lr = 0x82299F54;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8229e1d0
	ctx.lr = 0x82299F60;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,-2
	ctx.r3.s64 = -2;
	// bl 0x8229e1d0
	ctx.lr = 0x82299F6C;
	sub_8229E1D0(ctx, base);
loc_82299F6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82299ED8) {
	__imp__sub_82299ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82299F7C) {
	__imp__sub_82299F7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299F80) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82299458
	ctx.lr = 0x82299FA8;
	sub_82299458(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x82296cf0
	ctx.lr = 0x82299FB8;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x82299FC4;
	sub_8229E1D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82293e00
	ctx.lr = 0x82299FCC;
	sub_82293E00(ctx, base);
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

PPC_WEAK_FUNC(sub_82299F80) {
	__imp__sub_82299F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82299FE4) {
	__imp__sub_82299FE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82299FE8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82299458
	ctx.lr = 0x8229A008;
	sub_82299458(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x82296cf0
	ctx.lr = 0x8229A018;
	sub_82296CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82293e00
	ctx.lr = 0x8229A020;
	sub_82293E00(ctx, base);
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

PPC_WEAK_FUNC(sub_82299FE8) {
	__imp__sub_82299FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229A034) {
	__imp__sub_8229A034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A038) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82299458
	ctx.lr = 0x8229A060;
	sub_82299458(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x82296cf0
	ctx.lr = 0x8229A070;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A07C;
	sub_8229E1D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82293e00
	ctx.lr = 0x8229A084;
	sub_82293E00(ctx, base);
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

PPC_WEAK_FUNC(sub_8229A038) {
	__imp__sub_8229A038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229A09C) {
	__imp__sub_8229A09C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A0A0) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x8229a144
	if (ctx.cr6.gt) goto loc_8229A144;
	// beq cr6,0x8229a120
	if (ctx.cr6.eq) goto loc_8229A120;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8229a100
	if (ctx.cr6.eq) goto loc_8229A100;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8229a1b8
	if (!ctx.cr6.eq) goto loc_8229A1B8;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82297e28
	ctx.lr = 0x8229A0EC;
	sub_82297E28(ctx, base);
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
loc_8229A100:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82297ac8
	ctx.lr = 0x8229A110;
	sub_82297AC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8229A120:
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82299f80
	ctx.lr = 0x8229A130;
	sub_82299F80(ctx, base);
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
loc_8229A144:
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// beq cr6,0x8229a180
	if (ctx.cr6.eq) goto loc_8229A180;
	// cmpwi cr6,r11,85
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 85, ctx.xer);
	// bne cr6,0x8229a1b8
	if (!ctx.cr6.eq) goto loc_8229A1B8;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,12184
	ctx.r9.s64 = ctx.r11.s64 + 12184;
	// ori r8,r10,44
	ctx.r8.u64 = ctx.r10.u64 | 44;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8229a1b8
	if (ctx.cr6.eq) goto loc_8229A1B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21196
	ctx.r4.s64 = ctx.r11.s64 + 21196;
	// b 0x8229a1b4
	goto loc_8229A1B4;
loc_8229A180:
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,12184
	ctx.r9.s64 = ctx.r11.s64 + 12184;
	// ori r8,r10,44
	ctx.r8.u64 = ctx.r10.u64 | 44;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8229a1a8
	if (!ctx.cr6.eq) goto loc_8229A1A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,22032
	ctx.r4.s64 = ctx.r11.s64 + 22032;
	// b 0x8229a1b0
	goto loc_8229A1B0;
loc_8229A1A8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21980
	ctx.r4.s64 = ctx.r11.s64 + 21980;
loc_8229A1B0:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_8229A1B4:
	// bl 0x8229e338
	ctx.lr = 0x8229A1B8;
	sub_8229E338(ctx, base);
loc_8229A1B8:
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

PPC_WEAK_FUNC(sub_8229A0A0) {
	__imp__sub_8229A0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229A1CC) {
	__imp__sub_8229A1CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A1D0) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bgt cr6,0x8229a37c
	if (ctx.cr6.gt) goto loc_8229A37C;
	// beq cr6,0x8229a358
	if (ctx.cr6.eq) goto loc_8229A358;
	// addi r11,r11,-19
	ctx.r11.s64 = ctx.r11.s64 + -19;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x8229a430
	if (ctx.cr6.gt) goto loc_8229A430;
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24040
	ctx.r12.s64 = ctx.r12.s64 + -24040;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8229A2BC;
	case 1:
		goto loc_8229A348;
	case 2:
		goto loc_8229A26C;
	case 3:
		goto loc_8229A430;
	case 4:
		goto loc_8229A430;
	case 5:
		goto loc_8229A430;
	case 6:
		goto loc_8229A430;
	case 7:
		goto loc_8229A430;
	case 8:
		goto loc_8229A430;
	case 9:
		goto loc_8229A430;
	case 10:
		goto loc_8229A430;
	case 11:
		goto loc_8229A430;
	case 12:
		goto loc_8229A430;
	case 13:
		goto loc_8229A430;
	case 14:
		goto loc_8229A430;
	case 15:
		goto loc_8229A430;
	case 16:
		goto loc_8229A430;
	case 17:
		goto loc_8229A2DC;
	case 18:
		goto loc_8229A430;
	case 19:
		goto loc_8229A300;
	case 20:
		goto loc_8229A324;
	default:
		return;
	}
	// lwz r17,-23876(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23876);
	// lwz r17,-23736(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23736);
	// lwz r17,-23956(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23956);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23844(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23844);
	// lwz r17,-23504(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23504);
	// lwz r17,-23808(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23808);
	// lwz r17,-23772(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23772);
loc_8229A26C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// beq cr6,0x8229a2a4
	if (ctx.cr6.eq) goto loc_8229A2A4;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// bne cr6,0x8229a494
	if (!ctx.cr6.eq) goto loc_8229A494;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82298ac8
	ctx.lr = 0x8229A2A0;
	sub_82298AC8(ctx, base);
	// b 0x8229a494
	goto loc_8229A494;
loc_8229A2A4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82298820
	ctx.lr = 0x8229A2B8;
	sub_82298820(ctx, base);
	// b 0x8229a494
	goto loc_8229A494;
loc_8229A2BC:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229a0a0
	ctx.lr = 0x8229A2C8;
	sub_8229A0A0(ctx, base);
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
loc_8229A2DC:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82296cf0
	ctx.lr = 0x8229A2F0;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A2FC;
	sub_8229E1D0(ctx, base);
	// b 0x8229a494
	goto loc_8229A494;
loc_8229A300:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x82296cf0
	ctx.lr = 0x8229A314;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A320;
	sub_8229E1D0(ctx, base);
	// b 0x8229a494
	goto loc_8229A494;
loc_8229A324:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82296cf0
	ctx.lr = 0x8229A338;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A344;
	sub_8229E1D0(ctx, base);
	// b 0x8229a494
	goto loc_8229A494;
loc_8229A348:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82297f08
	ctx.lr = 0x8229A354;
	sub_82297F08(ctx, base);
	// b 0x8229a494
	goto loc_8229A494;
loc_8229A358:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82296cf0
	ctx.lr = 0x8229A36C;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A378;
	sub_8229E1D0(ctx, base);
	// b 0x8229a494
	goto loc_8229A494;
loc_8229A37C:
	// cmpwi cr6,r11,71
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 71, ctx.xer);
	// bgt cr6,0x8229a420
	if (ctx.cr6.gt) goto loc_8229A420;
	// beq cr6,0x8229a3fc
	if (ctx.cr6.eq) goto loc_8229A3FC;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x8229a3d8
	if (ctx.cr6.eq) goto loc_8229A3D8;
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// beq cr6,0x8229a3b0
	if (ctx.cr6.eq) goto loc_8229A3B0;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bne cr6,0x8229a430
	if (!ctx.cr6.eq) goto loc_8229A430;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82297828
	ctx.lr = 0x8229A3AC;
	sub_82297828(ctx, base);
	// b 0x8229a494
	goto loc_8229A494;
loc_8229A3B0:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82298ec0
	ctx.lr = 0x8229A3C4;
	sub_82298EC0(ctx, base);
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
loc_8229A3D8:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82296cf0
	ctx.lr = 0x8229A3EC;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A3F8;
	sub_8229E1D0(ctx, base);
	// b 0x8229a494
	goto loc_8229A494;
loc_8229A3FC:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,41
	ctx.r3.s64 = 41;
	// bl 0x82296cf0
	ctx.lr = 0x8229A410;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A41C;
	sub_8229E1D0(ctx, base);
	// b 0x8229a494
	goto loc_8229A494;
loc_8229A420:
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// beq cr6,0x8229a460
	if (ctx.cr6.eq) goto loc_8229A460;
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// beq cr6,0x8229a44c
	if (ctx.cr6.eq) goto loc_8229A44C;
loc_8229A430:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x82295ad0
	ctx.lr = 0x8229A438;
	sub_82295AD0(ctx, base);
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
loc_8229A44C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r11,21392
	ctx.r4.s64 = ctx.r11.s64 + 21392;
	// bl 0x8229e338
	ctx.lr = 0x8229A45C;
	sub_8229E338(ctx, base);
	// b 0x8229a494
	goto loc_8229A494;
loc_8229A460:
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r11,11128
	ctx.r10.s64 = ctx.r11.s64 + 11128;
	// lwz r11,1044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229a48c
	if (!ctx.cr6.eq) goto loc_8229A48C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,20592
	ctx.r4.s64 = ctx.r11.s64 + 20592;
	// bl 0x8229e338
	ctx.lr = 0x8229A488;
	sub_8229E338(ctx, base);
	// b 0x8229a494
	goto loc_8229A494;
loc_8229A48C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822941b8
	ctx.lr = 0x8229A494;
	sub_822941B8(ctx, base);
loc_8229A494:
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

PPC_WEAK_FUNC(sub_8229A1D0) {
	__imp__sub_8229A1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229A4AC) {
	__imp__sub_8229A4AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A4B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8229a4dc
	if (ctx.cr6.eq) goto loc_8229A4DC;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82299370
	sub_82299370(ctx, base);
	return;
loc_8229A4DC:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82294480
	sub_82294480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229A4B0) {
	__imp__sub_8229A4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A4EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229A4EC) {
	__imp__sub_8229A4EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A4F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bgt cr6,0x8229a5a0
	if (ctx.cr6.gt) goto loc_8229A5A0;
	// beq cr6,0x8229a580
	if (ctx.cr6.eq) goto loc_8229A580;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8229a574
	if (ctx.cr6.eq) goto loc_8229A574;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8229a550
	if (ctx.cr6.eq) goto loc_8229A550;
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// bne cr6,0x8229a548
	if (!ctx.cr6.eq) goto loc_8229A548;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82299098
	ctx.lr = 0x8229A548;
	sub_82299098(ctx, base);
loc_8229A548:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229a664
	goto loc_8229A664;
loc_8229A550:
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r10,16344
	ctx.r30.s64 = ctx.r10.s64 + 16344;
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8229a4f0
	ctx.lr = 0x8229A568;
	sub_8229A4F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// b 0x8229a664
	goto loc_8229A664;
loc_8229A574:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8229a1d0
	ctx.lr = 0x8229A57C;
	sub_8229A1D0(ctx, base);
	// b 0x8229a664
	goto loc_8229A664;
loc_8229A580:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82299178
	ctx.lr = 0x8229A598;
	sub_82299178(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229a664
	goto loc_8229A664;
loc_8229A5A0:
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// beq cr6,0x8229a648
	if (ctx.cr6.eq) goto loc_8229A648;
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// beq cr6,0x8229a600
	if (ctx.cr6.eq) goto loc_8229A600;
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// bne cr6,0x8229a548
	if (!ctx.cr6.eq) goto loc_8229A548;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8229a4f0
	ctx.lr = 0x8229A5C4;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a5d8
	if (ctx.cr6.eq) goto loc_8229A5D8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229A5D8;
	sub_82294C58(ctx, base);
loc_8229A5D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,105
	ctx.r3.s64 = 105;
	// bl 0x82296cf0
	ctx.lr = 0x8229A5EC;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A5F8;
	sub_8229E1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229a664
	goto loc_8229A664;
loc_8229A600:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8229a4f0
	ctx.lr = 0x8229A60C;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a620
	if (ctx.cr6.eq) goto loc_8229A620;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229A620;
	sub_82294C58(ctx, base);
loc_8229A620:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82296cf0
	ctx.lr = 0x8229A634;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A640;
	sub_8229E1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229a664
	goto loc_8229A664;
loc_8229A648:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82299258
	ctx.lr = 0x8229A664;
	sub_82299258(ctx, base);
loc_8229A664:
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
}

PPC_WEAK_FUNC(sub_8229A4F0) {
	__imp__sub_8229A4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229A67C) {
	__imp__sub_8229A67C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A680) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229a4f0
	ctx.lr = 0x8229A698;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a6ac
	if (ctx.cr6.eq) goto loc_8229A6AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229A6AC;
	sub_82294C58(ctx, base);
loc_8229A6AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229A680) {
	__imp__sub_8229A680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229A6BC) {
	__imp__sub_8229A6BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A6C0) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229a6e8
	if (!ctx.cr6.eq) goto loc_8229A6E8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8229A6E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229a4f0
	ctx.lr = 0x8229A6F0;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a704
	if (ctx.cr6.eq) goto loc_8229A704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229A704;
	sub_82294C58(ctx, base);
loc_8229A704:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82296cf0
	ctx.lr = 0x8229A714;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A720;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_8229A6C0) {
	__imp__sub_8229A6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229A734) {
	__imp__sub_8229A734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A738) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229a4f0
	ctx.lr = 0x8229A760;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a774
	if (ctx.cr6.eq) goto loc_8229A774;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229A774;
	sub_82294C58(ctx, base);
loc_8229A774:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,82
	ctx.r3.s64 = 82;
	// bl 0x82296cf0
	ctx.lr = 0x8229A784;
	sub_82296CF0(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A790;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A79C;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A7A8;
	sub_8229E1D0(ctx, base);
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
}

PPC_WEAK_FUNC(sub_8229A738) {
	__imp__sub_8229A738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8229A7C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229A7F0;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a804
	if (ctx.cr6.eq) goto loc_8229A804;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229A804;
	sub_82294C58(ctx, base);
loc_8229A804:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,106
	ctx.r3.s64 = 106;
	// bl 0x82296cf0
	ctx.lr = 0x8229A814;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A820;
	sub_8229E1D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x8229A828;
	sub_822A2830(ctx, base);
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16344, ctx.r11.u32);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r26,16344(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16344);
	// bl 0x822a2818
	ctx.lr = 0x8229A848;
	sub_822A2818(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822948d0
	ctx.lr = 0x8229A858;
	sub_822948D0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229c058
	ctx.lr = 0x8229A86C;
	sub_8229C058(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r29,72(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// beq cr6,0x8229a8a8
	if (ctx.cr6.eq) goto loc_8229A8A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82296cf0
	ctx.lr = 0x8229A898;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A8A4;
	sub_8229E1D0(ctx, base);
	// b 0x8229a8b0
	goto loc_8229A8B0;
loc_8229A8A8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82297568
	ctx.lr = 0x8229A8B0;
	sub_82297568(ctx, base);
loc_8229A8B0:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// bl 0x822a2818
	ctx.lr = 0x8229A8C0;
	sub_822A2818(ctx, base);
	// subf r11,r25,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r25.s64;
	// sth r11,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229A7C0) {
	__imp__sub_8229A7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229A8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x8229A8D8;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229A90C;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229a920
	if (ctx.cr6.eq) goto loc_8229A920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229A920;
	sub_82294C58(ctx, base);
loc_8229A920:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,106
	ctx.r3.s64 = 106;
	// bl 0x82296cf0
	ctx.lr = 0x8229A930;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229A93C;
	sub_8229E1D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x8229A944;
	sub_822A2830(ctx, base);
	// lis r30,-31916
	ctx.r30.s64 = -2091646976;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16344, ctx.r11.u32);
	// sth r26,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r26.u16);
	// lwz r24,16344(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16344);
	// bl 0x822a2818
	ctx.lr = 0x8229A960;
	sub_822A2818(ctx, base);
	// lwz r31,292(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822948d0
	ctx.lr = 0x8229A974;
	sub_822948D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229c058
	ctx.lr = 0x8229A988;
	sub_8229C058(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x82297568
	ctx.lr = 0x8229A994;
	sub_82297568(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8229a9ac
	if (!ctx.cr6.eq) goto loc_8229A9AC;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r19,1
	ctx.r19.s64 = 1;
loc_8229A9AC:
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// clrlwi r22,r27,24
	ctx.r22.u64 = ctx.r27.u32 & 0xFF;
	// addi r28,r11,-6904
	ctx.r28.s64 = ctx.r11.s64 + -6904;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,72(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// beq cr6,0x8229a9fc
	if (ctx.cr6.eq) goto loc_8229A9FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82296cf0
	ctx.lr = 0x8229A9D4;
	sub_82296CF0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2830
	ctx.lr = 0x8229A9DC;
	sub_822A2830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,16344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16344, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// bl 0x8229e1d0
	ctx.lr = 0x8229A9F4;
	sub_8229E1D0(ctx, base);
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// b 0x8229aa34
	goto loc_8229AA34;
loc_8229A9FC:
	// li r3,110
	ctx.r3.s64 = 110;
	// bl 0x82296cf0
	ctx.lr = 0x8229AA04;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229AA10;
	sub_8229E1D0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2830
	ctx.lr = 0x8229AA18;
	sub_822A2830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16344, ctx.r11.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lwz r21,16344(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16344);
	// bl 0x822a2818
	ctx.lr = 0x8229AA30;
	sub_822A2818(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8229AA34:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
	// bl 0x822a2818
	ctx.lr = 0x8229AA44;
	sub_822A2818(ctx, base);
	// subf r11,r23,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r23.s64;
	// lwz r31,300(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r11,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r11.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822948d0
	ctx.lr = 0x8229AA5C;
	sub_822948D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8229c058
	ctx.lr = 0x8229AA70;
	sub_8229C058(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lwz r30,72(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// beq cr6,0x8229aaa0
	if (ctx.cr6.eq) goto loc_8229AAA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82296cf0
	ctx.lr = 0x8229AA90;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229AA9C;
	sub_8229E1D0(ctx, base);
	// b 0x8229aaa8
	goto loc_8229AAA8;
loc_8229AAA0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82297568
	ctx.lr = 0x8229AAA8;
	sub_82297568(ctx, base);
loc_8229AAA8:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8229aad0
	if (!ctx.cr6.eq) goto loc_8229AAD0;
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_8229AAD0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8229aae8
	if (!ctx.cr6.eq) goto loc_8229AAE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x8229AAE0;
	sub_822A2818(ctx, base);
	// subf r11,r26,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r26.s64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_8229AAE8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822945a8
	ctx.lr = 0x8229AAF8;
	sub_822945A8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229A8D0) {
	__imp__sub_8229A8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229AB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8229AB08;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lbz r15,48(r31)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lbz r14,56(r31)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stb r28,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r28.u8);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stb r28,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r28.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x822948d0
	ctx.lr = 0x8229AB64;
	sub_822948D0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822974e8
	ctx.lr = 0x8229AB6C;
	sub_822974E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// bl 0x822a2818
	ctx.lr = 0x8229AB80;
	sub_822A2818(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229AB98;
	sub_8229A4F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229abec
	if (ctx.cr6.eq) goto loc_8229ABEC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8229abc4
	if (ctx.cr6.eq) goto loc_8229ABC4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8229abc4
	if (ctx.cr6.eq) goto loc_8229ABC4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82294c58
	ctx.lr = 0x8229ABC0;
	sub_82294C58(ctx, base);
	// b 0x8229abec
	goto loc_8229ABEC;
loc_8229ABC4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822a7200
	ctx.lr = 0x8229ABCC;
	sub_822A7200(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229abe8
	if (!ctx.cr6.eq) goto loc_8229ABE8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,22092
	ctx.r4.s64 = ctx.r11.s64 + 22092;
	// bl 0x8229e338
	ctx.lr = 0x8229ABE8;
	sub_8229E338(ctx, base);
loc_8229ABE8:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8229ABEC:
	// lwz r20,76(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// clrlwi r24,r29,24
	ctx.r24.u64 = ctx.r29.u32 & 0xFF;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// lwz r19,72(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r17,68(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r18,64(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r16,80(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bne cr6,0x8229ac68
	if (!ctx.cr6.eq) goto loc_8229AC68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,106
	ctx.r3.s64 = 106;
	// bl 0x82296cf0
	ctx.lr = 0x8229AC30;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229AC3C;
	sub_8229E1D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x8229AC44;
	sub_822A2830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r28,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r28.u16);
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a2818
	ctx.lr = 0x8229AC5C;
	sub_822A2818(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x8229ac84
	goto loc_8229AC84;
loc_8229AC68:
	// li r3,4096
	ctx.r3.s64 = 4096;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// bl 0x822db2b8
	ctx.lr = 0x8229AC78;
	sub_822DB2B8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8229AC84:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r9.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bl 0x8229c058
	ctx.lr = 0x8229ACBC;
	sub_8229C058(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8229acd0
	if (ctx.cr6.eq) goto loc_8229ACD0;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_8229ACD0:
	// stb r28,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r28.u8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r28,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r28.u8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x82295ef8
	ctx.lr = 0x8229ACE4;
	sub_82295EF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,111
	ctx.r3.s64 = 111;
	// bl 0x82296cf0
	ctx.lr = 0x8229ACF4;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229AD00;
	sub_8229E1D0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// bne cr6,0x8229ad18
	if (!ctx.cr6.eq) goto loc_8229AD18;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x8229e1d0
	ctx.lr = 0x8229AD18;
	sub_8229E1D0(ctx, base);
loc_8229AD18:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x8229AD20;
	sub_822A2830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r28,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r28.u16);
	// bl 0x822a2818
	ctx.lr = 0x8229AD34;
	sub_822A2818(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r21,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r21.s64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// beq cr6,0x8229ad58
	if (ctx.cr6.eq) goto loc_8229AD58;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x8229AD50;
	sub_822A2818(ctx, base);
	// subf r11,r23,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r23.s64;
	// sth r11,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
loc_8229AD58:
	// bl 0x82295ea0
	ctx.lr = 0x8229AD5C;
	sub_82295EA0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stb r15,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r15.u8);
	// stb r14,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r14.u8);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// beq cr6,0x8229ad8c
	if (ctx.cr6.eq) goto loc_8229AD8C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822945a8
	ctx.lr = 0x8229AD8C;
	sub_822945A8(ctx, base);
loc_8229AD8C:
	// stw r18,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r18.u32);
	// stw r17,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r17.u32);
	// stw r19,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r19.u32);
	// stw r20,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r20.u32);
	// stw r16,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r16.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229AB00) {
	__imp__sub_8229AB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229ADA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8229ADB0;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r27,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r27.u8);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// stb r27,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r27.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x8229c058
	ctx.lr = 0x8229AE1C;
	sub_8229C058(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822948d0
	ctx.lr = 0x8229AE28;
	sub_822948D0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822974e8
	ctx.lr = 0x8229AE30;
	sub_822974E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r24,356(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x822948d0
	ctx.lr = 0x8229AE4C;
	sub_822948D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x8229AE54;
	sub_822A2818(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmpwi cr6,r9,70
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 70, ctx.xer);
	// bne cr6,0x8229aec8
	if (!ctx.cr6.eq) goto loc_8229AEC8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229AE78;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229aecc
	if (ctx.cr6.eq) goto loc_8229AECC;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8229aea4
	if (ctx.cr6.eq) goto loc_8229AEA4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8229aea4
	if (ctx.cr6.eq) goto loc_8229AEA4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82294c58
	ctx.lr = 0x8229AEA0;
	sub_82294C58(ctx, base);
	// b 0x8229aecc
	goto loc_8229AECC;
loc_8229AEA4:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822a7200
	ctx.lr = 0x8229AEAC;
	sub_822A7200(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229aec8
	if (!ctx.cr6.eq) goto loc_8229AEC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,22092
	ctx.r4.s64 = ctx.r11.s64 + 22092;
	// bl 0x8229e338
	ctx.lr = 0x8229AEC8;
	sub_8229E338(ctx, base);
loc_8229AEC8:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8229AECC:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r3,4096
	ctx.r3.s64 = 4096;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r17,68(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r16,72(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r14,80(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r18,64(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r15,76(r31)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x822db2b8
	ctx.lr = 0x8229AEF0;
	sub_822DB2B8(ctx, base);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// clrlwi r22,r26,24
	ctx.r22.u64 = ctx.r26.u32 & 0xFF;
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bne cr6,0x8229af5c
	if (!ctx.cr6.eq) goto loc_8229AF5C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,106
	ctx.r3.s64 = 106;
	// bl 0x82296cf0
	ctx.lr = 0x8229AF24;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229AF30;
	sub_8229E1D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x8229AF38;
	sub_822A2830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// lwz r23,0(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a2818
	ctx.lr = 0x8229AF50;
	sub_822A2818(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x8229af78
	goto loc_8229AF78;
loc_8229AF5C:
	// li r3,4096
	ctx.r3.s64 = 4096;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// bl 0x822db2b8
	ctx.lr = 0x8229AF6C;
	sub_822DB2B8(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8229AF78:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r9,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r9.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bl 0x8229c058
	ctx.lr = 0x8229AFB0;
	sub_8229C058(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822961e8
	ctx.lr = 0x8229AFB8;
	sub_822961E8(ctx, base);
	// stb r27,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r27.u8);
	// stb r27,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r27.u8);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bl 0x82295ef8
	ctx.lr = 0x8229AFCC;
	sub_82295EF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x822945a8
	ctx.lr = 0x8229AFDC;
	sub_822945A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229c058
	ctx.lr = 0x8229AFF0;
	sub_8229C058(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,111
	ctx.r3.s64 = 111;
	// bl 0x82296cf0
	ctx.lr = 0x8229B000;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B00C;
	sub_8229E1D0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// bne cr6,0x8229b024
	if (!ctx.cr6.eq) goto loc_8229B024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x8229e1d0
	ctx.lr = 0x8229B024;
	sub_8229E1D0(ctx, base);
loc_8229B024:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x8229B02C;
	sub_822A2830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// bl 0x822a2818
	ctx.lr = 0x8229B040;
	sub_822A2818(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// beq cr6,0x8229b068
	if (ctx.cr6.eq) goto loc_8229B068;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x8229B060;
	sub_822A2818(ctx, base);
	// subf r11,r19,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r19.s64;
	// sth r11,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r11.u16);
loc_8229B068:
	// bl 0x82295ea0
	ctx.lr = 0x8229B06C;
	sub_82295EA0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stb r9,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r9.u8);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// beq cr6,0x8229b0a4
	if (ctx.cr6.eq) goto loc_8229B0A4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822945a8
	ctx.lr = 0x8229B0A4;
	sub_822945A8(ctx, base);
loc_8229B0A4:
	// stw r18,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r18.u32);
	// stw r17,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r17.u32);
	// stw r16,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r16.u32);
	// stw r15,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r15.u32);
	// stw r14,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r14.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229ADA8) {
	__imp__sub_8229ADA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229B0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8229B0C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8229a4f0
	ctx.lr = 0x8229B0F8;
	sub_8229A4F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229b10c
	if (ctx.cr6.eq) goto loc_8229B10C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229B10C;
	sub_82294C58(ctx, base);
loc_8229B10C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229a1d0
	ctx.lr = 0x8229B11C;
	sub_8229A1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229b130
	if (ctx.cr6.eq) goto loc_8229B130;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229B130;
	sub_82294C58(ctx, base);
loc_8229B130:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// li r3,133
	ctx.r3.s64 = 133;
	// bl 0x82296cf0
	ctx.lr = 0x8229B140;
	sub_82296CF0(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B14C;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B158;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B164;
	sub_8229E1D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8229e1d0
	ctx.lr = 0x8229B174;
	sub_8229E1D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299790
	ctx.lr = 0x8229B180;
	sub_82299790(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82296cf0
	ctx.lr = 0x8229B190;
	sub_82296CF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229B0C0) {
	__imp__sub_8229B0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229B198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8229B1A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229b208
	if (ctx.cr6.eq) goto loc_8229B208;
loc_8229B1D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8229a4f0
	ctx.lr = 0x8229B1E4;
	sub_8229A4F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229b1f8
	if (ctx.cr6.eq) goto loc_8229B1F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229B1F8;
	sub_82294C58(ctx, base);
loc_8229B1F8:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229b1d0
	if (!ctx.cr6.eq) goto loc_8229B1D0;
loc_8229B208:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8229a4f0
	ctx.lr = 0x8229B224;
	sub_8229A4F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229b238
	if (ctx.cr6.eq) goto loc_8229B238;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229B238;
	sub_82294C58(ctx, base);
loc_8229B238:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229a1d0
	ctx.lr = 0x8229B248;
	sub_8229A1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229b25c
	if (ctx.cr6.eq) goto loc_8229B25C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229B25C;
	sub_82294C58(ctx, base);
loc_8229B25C:
	// li r5,0
	ctx.r5.s64 = 0;
	// subfic r4,r30,-2
	ctx.xer.ca = ctx.r30.u32 <= 4294967294;
	ctx.r4.s64 = -2 - ctx.r30.s64;
	// li r3,131
	ctx.r3.s64 = 131;
	// bl 0x82296cf0
	ctx.lr = 0x8229B26C;
	sub_82296CF0(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B278;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B284;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B290;
	sub_8229E1D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8229e1d0
	ctx.lr = 0x8229B2A0;
	sub_8229E1D0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229b2c8
	if (ctx.cr6.eq) goto loc_8229B2C8;
loc_8229B2AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8229e1d0
	ctx.lr = 0x8229B2BC;
	sub_8229E1D0(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229b2ac
	if (!ctx.cr6.eq) goto loc_8229B2AC;
loc_8229B2C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a2818
	ctx.lr = 0x8229B2D0;
	sub_822A2818(ctx, base);
	// lis r31,-31916
	ctx.r31.s64 = -2091646976;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16344, ctx.r11.u32);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// bl 0x822a2818
	ctx.lr = 0x8229B2E8;
	sub_822A2818(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r3,16344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16344, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,56
	ctx.r3.s64 = 56;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// bl 0x82296cf0
	ctx.lr = 0x8229B308;
	sub_82296CF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229B198) {
	__imp__sub_8229B198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229B310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8229B318;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,136
	ctx.r3.s64 = 136;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82296cf0
	ctx.lr = 0x8229B340;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B34C;
	sub_8229E1D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229b39c
	if (ctx.cr6.eq) goto loc_8229B39C;
loc_8229B360:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8229a4f0
	ctx.lr = 0x8229B378;
	sub_8229A4F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229b38c
	if (ctx.cr6.eq) goto loc_8229B38C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229B38C;
	sub_82294C58(ctx, base);
loc_8229B38C:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229b360
	if (!ctx.cr6.eq) goto loc_8229B360;
loc_8229B39C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8229a1d0
	ctx.lr = 0x8229B3AC;
	sub_8229A1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229b3c0
	if (ctx.cr6.eq) goto loc_8229B3C0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229B3C0;
	sub_82294C58(ctx, base);
loc_8229B3C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// subfic r4,r30,-2
	ctx.xer.ca = ctx.r30.u32 <= 4294967294;
	ctx.r4.s64 = -2 - ctx.r30.s64;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x82296cf0
	ctx.lr = 0x8229B3D0;
	sub_82296CF0(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B3DC;
	sub_8229E1D0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8229e1d0
	ctx.lr = 0x8229B3EC;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B3F8;
	sub_8229E1D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229B310) {
	__imp__sub_8229B310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229B400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229B408;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229B42C;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229b440
	if (ctx.cr6.eq) goto loc_8229B440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229B440;
	sub_82294C58(ctx, base);
loc_8229B440:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229a1d0
	ctx.lr = 0x8229B450;
	sub_8229A1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229b464
	if (ctx.cr6.eq) goto loc_8229B464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229B464;
	sub_82294C58(ctx, base);
loc_8229B464:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// li r3,135
	ctx.r3.s64 = 135;
	// bl 0x82296cf0
	ctx.lr = 0x8229B474;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B480;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B48C;
	sub_8229E1D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229B400) {
	__imp__sub_8229B400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229B494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229B494) {
	__imp__sub_8229B494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229B498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x8229B4A0;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r24,48(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r23,44(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r22,52(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229B4E4;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229b4f8
	if (ctx.cr6.eq) goto loc_8229B4F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229B4F8;
	sub_82294C58(ctx, base);
loc_8229B4F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,137
	ctx.r3.s64 = 137;
	// bl 0x82296cf0
	ctx.lr = 0x8229B508;
	sub_82296CF0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a2830
	ctx.lr = 0x8229B510;
	sub_822A2830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r21,0(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a2818
	ctx.lr = 0x8229B528;
	sub_822A2818(ctx, base);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x82299960
	ctx.lr = 0x8229B550;
	sub_82299960(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,138
	ctx.r3.s64 = 138;
	// bl 0x82296cf0
	ctx.lr = 0x8229B560;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229B56C;
	sub_8229E1D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a2830
	ctx.lr = 0x8229B574;
	sub_822A2830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r29,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r20,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r20.s64;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bl 0x822a2840
	ctx.lr = 0x8229B598;
	sub_822A2840(ctx, base);
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229b5e4
	if (ctx.cr6.eq) goto loc_8229B5E4;
loc_8229B5A8:
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822a2830
	ctx.lr = 0x8229B5B4;
	sub_822A2830(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lwz r26,4(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822a2830
	ctx.lr = 0x8229B5CC;
	sub_822A2830(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229b5a8
	if (!ctx.cr6.eq) goto loc_8229B5A8;
loc_8229B5E4:
	// sth r29,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r29.u16);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r10,26392
	ctx.r6.s64 = ctx.r10.s64 + 26392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823def18
	ctx.lr = 0x8229B600;
	sub_823DEF18(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x8229b650
	if (!ctx.cr6.gt) goto loc_8229B650;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_8229B60C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8229b640
	if (!ctx.cr6.eq) goto loc_8229B640;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229b640
	if (ctx.cr6.eq) goto loc_8229B640;
loc_8229B628:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8229b668
	if (ctx.cr6.eq) goto loc_8229B668;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229b628
	if (!ctx.cr6.eq) goto loc_8229B628;
loc_8229B640:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bgt cr6,0x8229b60c
	if (ctx.cr6.gt) goto loc_8229B60C;
loc_8229B650:
	// bl 0x82295ea0
	ctx.lr = 0x8229B654;
	sub_82295EA0(ctx, base);
	// stw r23,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r23.u32);
	// stb r24,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r24.u8);
	// stw r22,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r22.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_8229B668:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r10,22140
	ctx.r4.s64 = ctx.r10.s64 + 22140;
	// bl 0x8229e338
	ctx.lr = 0x8229B678;
	sub_8229E338(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229B498) {
	__imp__sub_8229B498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229B680) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bgt cr6,0x8229b7c0
	if (ctx.cr6.gt) goto loc_8229B7C0;
	// beq cr6,0x8229b6cc
	if (ctx.cr6.eq) goto loc_8229B6CC;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bgt cr6,0x8229b764
	if (ctx.cr6.gt) goto loc_8229B764;
	// beq cr6,0x8229b748
	if (ctx.cr6.eq) goto loc_8229B748;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bgt cr6,0x8229b72c
	if (ctx.cr6.gt) goto loc_8229B72C;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bge cr6,0x8229b718
	if (!ctx.cr6.lt) goto loc_8229B718;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8229b8dc
	if (!ctx.cr6.eq) goto loc_8229B8DC;
loc_8229B6CC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8229b704
	if (ctx.cr6.eq) goto loc_8229B704;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x8229b8dc
	if (!ctx.cr6.eq) goto loc_8229B8DC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// bne cr6,0x8229b8dc
	if (!ctx.cr6.eq) goto loc_8229B8DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82299370
	ctx.lr = 0x8229B700;
	sub_82299370(ctx, base);
	// b 0x8229b8dc
	goto loc_8229B8DC;
loc_8229B704:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82294480
	ctx.lr = 0x8229B714;
	sub_82294480(ctx, base);
	// b 0x8229b8dc
	goto loc_8229B8DC;
loc_8229B718:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229b8dc
	if (!ctx.cr6.eq) goto loc_8229B8DC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8229b8d8
	goto loc_8229B8D8;
loc_8229B72C:
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x8229b8dc
	if (!ctx.cr6.eq) goto loc_8229B8DC;
	// addi r5,r3,16
	ctx.r5.s64 = ctx.r3.s64 + 16;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82295fa0
	ctx.lr = 0x8229B744;
	sub_82295FA0(ctx, base);
	// b 0x8229b8dc
	goto loc_8229B8DC;
loc_8229B748:
	// addi r7,r3,28
	ctx.r7.s64 = ctx.r3.s64 + 28;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r3,24
	ctx.r6.s64 = ctx.r3.s64 + 24;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82296010
	ctx.lr = 0x8229B760;
	sub_82296010(ctx, base);
	// b 0x8229b8dc
	goto loc_8229B8DC;
loc_8229B764:
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8229b8dc
	if (ctx.cr6.gt) goto loc_8229B8DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8229b79c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229B79C;
	// bdzf 4*cr6+eq,0x8229b6cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229B6CC;
	// bne cr6,0x8229b6cc
	if (!ctx.cr6.eq) goto loc_8229B6CC;
	// addi r6,r3,20
	ctx.r6.s64 = ctx.r3.s64 + 20;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82296298
	ctx.lr = 0x8229B798;
	sub_82296298(ctx, base);
	// b 0x8229b8dc
	goto loc_8229B8DC;
loc_8229B79C:
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r8,r3,28
	ctx.r8.s64 = ctx.r3.s64 + 28;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82296460
	ctx.lr = 0x8229B7BC;
	sub_82296460(ctx, base);
	// b 0x8229b8dc
	goto loc_8229B8DC;
loc_8229B7C0:
	// addi r11,r11,-49
	ctx.r11.s64 = ctx.r11.s64 + -49;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x8229b8dc
	if (ctx.cr6.gt) goto loc_8229B8DC;
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18460
	ctx.r12.s64 = ctx.r12.s64 + -18460;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8229B838;
	case 1:
		goto loc_8229B868;
	case 2:
		goto loc_8229B8DC;
	case 3:
		goto loc_8229B8DC;
	case 4:
		goto loc_8229B8DC;
	case 5:
		goto loc_8229B8DC;
	case 6:
		goto loc_8229B8DC;
	case 7:
		goto loc_8229B8DC;
	case 8:
		goto loc_8229B8DC;
	case 9:
		goto loc_8229B8DC;
	case 10:
		goto loc_8229B8DC;
	case 11:
		goto loc_8229B87C;
	case 12:
		goto loc_8229B8DC;
	case 13:
		goto loc_8229B8DC;
	case 14:
		goto loc_8229B8DC;
	case 15:
		goto loc_8229B8DC;
	case 16:
		goto loc_8229B894;
	case 17:
		goto loc_8229B8DC;
	case 18:
		goto loc_8229B8DC;
	case 19:
		goto loc_8229B8A4;
	case 20:
		goto loc_8229B8C0;
	default:
		return;
	}
	// lwz r17,-18376(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18376);
	// lwz r17,-18328(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18328);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18308(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18308);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18284(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18284);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18212(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18212);
	// lwz r17,-18268(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18268);
	// lwz r17,-18240(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18240);
loc_8229B838:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229b8dc
	if (ctx.cr6.eq) goto loc_8229B8DC;
loc_8229B84C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229b680
	ctx.lr = 0x8229B858;
	sub_8229B680(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229b84c
	if (!ctx.cr6.eq) goto loc_8229B84C;
	// b 0x8229b8dc
	goto loc_8229B8DC;
loc_8229B868:
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82296a00
	ctx.lr = 0x8229B878;
	sub_82296A00(ctx, base);
	// b 0x8229b8dc
	goto loc_8229B8DC;
loc_8229B87C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x822966a8
	ctx.lr = 0x8229B890;
	sub_822966A8(ctx, base);
	// b 0x8229b8dc
	goto loc_8229B8DC;
loc_8229B894:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82296788
	ctx.lr = 0x8229B8A0;
	sub_82296788(ctx, base);
	// b 0x8229b8dc
	goto loc_8229B8DC;
loc_8229B8A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82296138
	ctx.lr = 0x8229B8AC;
	sub_82296138(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229b8dc
	if (!ctx.cr6.eq) goto loc_8229B8DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8229b8d8
	goto loc_8229B8D8;
loc_8229B8C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822961e8
	ctx.lr = 0x8229B8C8;
	sub_822961E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8229b8dc
	if (!ctx.cr6.eq) goto loc_8229B8DC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8229B8D8:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8229B8DC:
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

PPC_WEAK_FUNC(sub_8229B680) {
	__imp__sub_8229B680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229B8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229B8F4) {
	__imp__sub_8229B8F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229B8F8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229b938
	if (ctx.cr6.eq) goto loc_8229B938;
loc_8229B920:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229b680
	ctx.lr = 0x8229B92C;
	sub_8229B680(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229b920
	if (!ctx.cr6.eq) goto loc_8229B920;
loc_8229B938:
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

PPC_WEAK_FUNC(sub_8229B8F8) {
	__imp__sub_8229B8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229B950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229B958;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,280
	ctx.r3.s64 = 280;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r31,84(r10)
	PPC_STORE_U8(ctx.r10.u32 + 84, ctx.r31.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bl 0x822db2b8
	ctx.lr = 0x8229B984;
	sub_822DB2B8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r31.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r31.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822966a8
	ctx.lr = 0x8229B9BC;
	sub_822966A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8229b8f8
	ctx.lr = 0x8229B9C8;
	sub_8229B8F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229B950) {
	__imp__sub_8229B950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229B9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229B9D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229B9F8;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229ba14
	if (!ctx.cr6.eq) goto loc_8229BA14;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22188
	ctx.r4.s64 = ctx.r11.s64 + 22188;
	// bl 0x8229e338
	ctx.lr = 0x8229BA14;
	sub_8229E338(ctx, base);
loc_8229BA14:
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a3628
	ctx.lr = 0x8229BA28;
	sub_822A3628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229ba40
	if (ctx.cr6.eq) goto loc_8229BA40;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,22168
	ctx.r4.s64 = ctx.r11.s64 + 22168;
	// bl 0x8229e338
	ctx.lr = 0x8229BA40;
	sub_8229E338(ctx, base);
loc_8229BA40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a67b8
	ctx.lr = 0x8229BA4C;
	sub_822A67B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2468
	ctx.lr = 0x8229BA58;
	sub_822A2468(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a3898
	ctx.lr = 0x8229BA68;
	sub_822A3898(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229B9D0) {
	__imp__sub_8229B9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229BA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229BA78;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229BA9C;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229bab0
	if (ctx.cr6.eq) goto loc_8229BAB0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229BAB0;
	sub_82294C58(ctx, base);
loc_8229BAB0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822993b8
	ctx.lr = 0x8229BAC0;
	sub_822993B8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x82296cf0
	ctx.lr = 0x8229BAD0;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229BADC;
	sub_8229E1D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229BAE8;
	sub_8229E1D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229BA70) {
	__imp__sub_8229BA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229BAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229BAF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229BB1C;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229bb30
	if (ctx.cr6.eq) goto loc_8229BB30;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229BB30;
	sub_82294C58(ctx, base);
loc_8229BB30:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822993b8
	ctx.lr = 0x8229BB40;
	sub_822993B8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82296cf0
	ctx.lr = 0x8229BB50;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229BB5C;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229BB68;
	sub_8229E1D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229BAF0) {
	__imp__sub_8229BAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229BB70) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bgt cr6,0x8229bc70
	if (ctx.cr6.gt) goto loc_8229BC70;
	// beq cr6,0x8229bc38
	if (ctx.cr6.eq) goto loc_8229BC38;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8229bc18
	if (ctx.cr6.eq) goto loc_8229BC18;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x8229bbec
	if (ctx.cr6.eq) goto loc_8229BBEC;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bne cr6,0x8229bcb8
	if (!ctx.cr6.eq) goto loc_8229BCB8;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82299458
	ctx.lr = 0x8229BBC0;
	sub_82299458(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x82296cf0
	ctx.lr = 0x8229BBD0;
	sub_82296CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82293e00
	ctx.lr = 0x8229BBD8;
	sub_82293E00(ctx, base);
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
loc_8229BBEC:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8229ba70
	ctx.lr = 0x8229BC04;
	sub_8229BA70(ctx, base);
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
loc_8229BC18:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82297b98
	ctx.lr = 0x8229BC24;
	sub_82297B98(ctx, base);
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
loc_8229BC38:
	// lis r9,-31916
	ctx.r9.s64 = -2091646976;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r9,16344
	ctx.r31.s64 = ctx.r9.s64 + 16344;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stb r10,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r10.u8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8229bb70
	ctx.lr = 0x8229BC54;
	sub_8229BB70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
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
loc_8229BC70:
	// cmpwi cr6,r10,58
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 58, ctx.xer);
	// beq cr6,0x8229bc80
	if (ctx.cr6.eq) goto loc_8229BC80;
	// cmpwi cr6,r10,85
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 85, ctx.xer);
	// bne cr6,0x8229bcb8
	if (!ctx.cr6.eq) goto loc_8229BCB8;
loc_8229BC80:
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r8,r10,12184
	ctx.r8.s64 = ctx.r10.s64 + 12184;
	// ori r7,r9,44
	ctx.r7.u64 = ctx.r9.u64 | 44;
	// lbzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8229bca8
	if (!ctx.cr6.eq) goto loc_8229BCA8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,21816
	ctx.r4.s64 = ctx.r10.s64 + 21816;
	// b 0x8229bcb0
	goto loc_8229BCB0;
loc_8229BCA8:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,22240
	ctx.r4.s64 = ctx.r10.s64 + 22240;
loc_8229BCB0:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8229e338
	ctx.lr = 0x8229BCB8;
	sub_8229E338(ctx, base);
loc_8229BCB8:
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

PPC_WEAK_FUNC(sub_8229BB70) {
	__imp__sub_8229BB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229BCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229BCCC) {
	__imp__sub_8229BCCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229BCD0) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x8229bd64
	if (ctx.cr6.gt) goto loc_8229BD64;
	// beq cr6,0x8229bd40
	if (ctx.cr6.eq) goto loc_8229BD40;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8229bd2c
	if (ctx.cr6.eq) goto loc_8229BD2C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8229bdac
	if (!ctx.cr6.eq) goto loc_8229BDAC;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229baf0
	ctx.lr = 0x8229BD18;
	sub_8229BAF0(ctx, base);
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
loc_8229BD2C:
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
loc_8229BD40:
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229a038
	ctx.lr = 0x8229BD50;
	sub_8229A038(ctx, base);
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
loc_8229BD64:
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// beq cr6,0x8229bd74
	if (ctx.cr6.eq) goto loc_8229BD74;
	// cmpwi cr6,r11,85
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 85, ctx.xer);
	// bne cr6,0x8229bdac
	if (!ctx.cr6.eq) goto loc_8229BDAC;
loc_8229BD74:
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,12184
	ctx.r9.s64 = ctx.r11.s64 + 12184;
	// ori r8,r10,44
	ctx.r8.u64 = ctx.r10.u64 | 44;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8229bd9c
	if (!ctx.cr6.eq) goto loc_8229BD9C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,21816
	ctx.r4.s64 = ctx.r11.s64 + 21816;
	// b 0x8229bda4
	goto loc_8229BDA4;
loc_8229BD9C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,22240
	ctx.r4.s64 = ctx.r11.s64 + 22240;
loc_8229BDA4:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8229e338
	ctx.lr = 0x8229BDAC;
	sub_8229E338(ctx, base);
loc_8229BDAC:
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

PPC_WEAK_FUNC(sub_8229BCD0) {
	__imp__sub_8229BCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229BDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229BDC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8229be00
	if (!ctx.cr6.eq) goto loc_8229BE00;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,-35
	ctx.r10.s64 = ctx.r11.s64 + -35;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8229be04
	goto loc_8229BE04;
loc_8229BE00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8229BE04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229be2c
	if (ctx.cr6.eq) goto loc_8229BE2C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229bcd0
	ctx.lr = 0x8229BE20;
	sub_8229BCD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229be78
	if (!ctx.cr6.eq) goto loc_8229BE78;
loc_8229BE2C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229BE3C;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229be50
	if (ctx.cr6.eq) goto loc_8229BE50;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229BE50;
	sub_82294C58(ctx, base);
loc_8229BE50:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229bb70
	ctx.lr = 0x8229BE5C;
	sub_8229BB70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x82296cf0
	ctx.lr = 0x8229BE6C;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229BE78;
	sub_8229E1D0(ctx, base);
loc_8229BE78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229BDC0) {
	__imp__sub_8229BDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229BE80) {
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
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r10,16344
	ctx.r30.s64 = ctx.r10.s64 + 16344;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stb r11,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r11.u8);
	// bl 0x8229bb70
	ctx.lr = 0x8229BEB0;
	sub_8229BB70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82296cf0
	ctx.lr = 0x8229BEC8;
	sub_82296CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8229e1d0
	ctx.lr = 0x8229BED4;
	sub_8229E1D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x82296cf0
	ctx.lr = 0x8229BEE4;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229BEF0;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_8229BE80) {
	__imp__sub_8229BE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229BF08) {
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
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r10,16344
	ctx.r30.s64 = ctx.r10.s64 + 16344;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stb r11,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r11.u8);
	// bl 0x8229bb70
	ctx.lr = 0x8229BF38;
	sub_8229BB70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,113
	ctx.r3.s64 = 113;
	// bl 0x82296cf0
	ctx.lr = 0x8229BF50;
	sub_82296CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8229e1d0
	ctx.lr = 0x8229BF5C;
	sub_8229E1D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x82296cf0
	ctx.lr = 0x8229BF6C;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229BF78;
	sub_8229E1D0(ctx, base);
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

PPC_WEAK_FUNC(sub_8229BF08) {
	__imp__sub_8229BF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229BF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8229BF98;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r10,16344
	ctx.r30.s64 = ctx.r10.s64 + 16344;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x8229a0a0
	ctx.lr = 0x8229BFCC;
	sub_8229A0A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229bfe0
	if (ctx.cr6.eq) goto loc_8229BFE0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229BFE0;
	sub_82294C58(ctx, base);
loc_8229BFE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229a4f0
	ctx.lr = 0x8229BFF8;
	sub_8229A4F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229c00c
	if (ctx.cr6.eq) goto loc_8229C00C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82294c58
	ctx.lr = 0x8229C00C;
	sub_82294C58(ctx, base);
loc_8229C00C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// extsb r3,r26
	ctx.r3.s64 = ctx.r26.s8;
	// bl 0x82296cf0
	ctx.lr = 0x8229C01C;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229C028;
	sub_8229E1D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229bb70
	ctx.lr = 0x8229C034;
	sub_8229BB70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,62
	ctx.r3.s64 = 62;
	// bl 0x82296cf0
	ctx.lr = 0x8229C044;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229C050;
	sub_8229E1D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229BF90) {
	__imp__sub_8229BF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229C058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229C060;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bgt cr6,0x8229c50c
	if (ctx.cr6.gt) goto loc_8229C50C;
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16232
	ctx.r12.s64 = ctx.r12.s64 + -16232;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8229C1E0;
	case 1:
		goto loc_8229C50C;
	case 2:
		goto loc_8229C50C;
	case 3:
		goto loc_8229C50C;
	case 4:
		goto loc_8229C50C;
	case 5:
		goto loc_8229C50C;
	case 6:
		goto loc_8229C50C;
	case 7:
		goto loc_8229C50C;
	case 8:
		goto loc_8229C50C;
	case 9:
		goto loc_8229C50C;
	case 10:
		goto loc_8229C50C;
	case 11:
		goto loc_8229C50C;
	case 12:
		goto loc_8229C50C;
	case 13:
		goto loc_8229C50C;
	case 14:
		goto loc_8229C50C;
	case 15:
		goto loc_8229C50C;
	case 16:
		goto loc_8229C50C;
	case 17:
		goto loc_8229C50C;
	case 18:
		goto loc_8229C50C;
	case 19:
		goto loc_8229C50C;
	case 20:
		goto loc_8229C50C;
	case 21:
		goto loc_8229C50C;
	case 22:
		goto loc_8229C50C;
	case 23:
		goto loc_8229C50C;
	case 24:
		goto loc_8229C50C;
	case 25:
		goto loc_8229C200;
	case 26:
		goto loc_8229C50C;
	case 27:
		goto loc_8229C258;
	case 28:
		goto loc_8229C270;
	case 29:
		goto loc_8229C284;
	case 30:
		goto loc_8229C50C;
	case 31:
		goto loc_8229C50C;
	case 32:
		goto loc_8229C50C;
	case 33:
		goto loc_8229C50C;
	case 34:
		goto loc_8229C50C;
	case 35:
		goto loc_8229C50C;
	case 36:
		goto loc_8229C50C;
	case 37:
		goto loc_8229C50C;
	case 38:
		goto loc_8229C50C;
	case 39:
		goto loc_8229C50C;
	case 40:
		goto loc_8229C2A0;
	case 41:
		goto loc_8229C2C8;
	case 42:
		goto loc_8229C304;
	case 43:
		goto loc_8229C328;
	case 44:
		goto loc_8229C35C;
	case 45:
		goto loc_8229C374;
	case 46:
		goto loc_8229C38C;
	case 47:
		goto loc_8229C3AC;
	case 48:
		goto loc_8229C3C8;
	case 49:
		goto loc_8229C50C;
	case 50:
		goto loc_8229C50C;
	case 51:
		goto loc_8229C50C;
	case 52:
		goto loc_8229C50C;
	case 53:
		goto loc_8229C50C;
	case 54:
		goto loc_8229C50C;
	case 55:
		goto loc_8229C50C;
	case 56:
		goto loc_8229C50C;
	case 57:
		goto loc_8229C50C;
	case 58:
		goto loc_8229C3E4;
	case 59:
		goto loc_8229C404;
	case 60:
		goto loc_8229C424;
	case 61:
		goto loc_8229C434;
	case 62:
		goto loc_8229C454;
	case 63:
		goto loc_8229C474;
	case 64:
		goto loc_8229C498;
	case 65:
		goto loc_8229C4B0;
	case 66:
		goto loc_8229C4C8;
	case 67:
		goto loc_8229C4DC;
	case 68:
		goto loc_8229C50C;
	case 69:
		goto loc_8229C50C;
	case 70:
		goto loc_8229C50C;
	case 71:
		goto loc_8229C50C;
	case 72:
		goto loc_8229C50C;
	case 73:
		goto loc_8229C50C;
	case 74:
		goto loc_8229C50C;
	case 75:
		goto loc_8229C50C;
	case 76:
		goto loc_8229C50C;
	case 77:
		goto loc_8229C50C;
	case 78:
		goto loc_8229C50C;
	case 79:
		goto loc_8229C50C;
	case 80:
		goto loc_8229C4F0;
	case 81:
		goto loc_8229C4F0;
	default:
		return;
	}
	// lwz r17,-15904(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15904);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15872(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15872);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15784(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15784);
	// lwz r17,-15760(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15760);
	// lwz r17,-15740(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15740);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15712(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15712);
	// lwz r17,-15672(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15672);
	// lwz r17,-15612(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15612);
	// lwz r17,-15576(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15576);
	// lwz r17,-15524(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15524);
	// lwz r17,-15500(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15500);
	// lwz r17,-15476(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15476);
	// lwz r17,-15444(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15444);
	// lwz r17,-15416(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15416);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15388(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15388);
	// lwz r17,-15356(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15356);
	// lwz r17,-15324(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15324);
	// lwz r17,-15308(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15308);
	// lwz r17,-15276(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15276);
	// lwz r17,-15244(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15244);
	// lwz r17,-15208(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15208);
	// lwz r17,-15184(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15184);
	// lwz r17,-15160(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15160);
	// lwz r17,-15140(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15140);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15092(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15092);
	// lwz r17,-15120(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
	// lwz r17,-15120(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15120);
loc_8229C1E0:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229bdc0
	ctx.lr = 0x8229C1F8;
	sub_8229BDC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C200:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 25, ctx.xer);
	// beq cr6,0x8229c23c
	if (ctx.cr6.eq) goto loc_8229C23C;
	// cmpwi cr6,r9,26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 26, ctx.xer);
	// bne cr6,0x8229c50c
	if (!ctx.cr6.eq) goto loc_8229C50C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82298ac8
	ctx.lr = 0x8229C234;
	sub_82298AC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C23C:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82298820
	ctx.lr = 0x8229C250;
	sub_82298820(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C258:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229a6c0
	ctx.lr = 0x8229C268;
	sub_8229A6C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C270:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82299610
	ctx.lr = 0x8229C27C;
	sub_82299610(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C284:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229a738
	ctx.lr = 0x8229C298;
	sub_8229A738(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C2A0:
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8229a7c0
	ctx.lr = 0x8229C2C0;
	sub_8229A7C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C2C8:
	// addi r29,r3,28
	ctx.r29.s64 = ctx.r3.s64 + 28;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r28,r3,24
	ctx.r28.s64 = ctx.r3.s64 + 24;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x8229a8d0
	ctx.lr = 0x8229C2FC;
	sub_8229A8D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C304:
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229ab00
	ctx.lr = 0x8229C320;
	sub_8229AB00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C328:
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8229ada8
	ctx.lr = 0x8229C354;
	sub_8229ADA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C35C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229be80
	ctx.lr = 0x8229C36C;
	sub_8229BE80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C374:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229bf08
	ctx.lr = 0x8229C384;
	sub_8229BF08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C38C:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229bf90
	ctx.lr = 0x8229C3A4;
	sub_8229BF90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C3AC:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8229c518
	ctx.lr = 0x8229C3C0;
	sub_8229C518(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C3C8:
	// addi r6,r3,12
	ctx.r6.s64 = ctx.r3.s64 + 12;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82299d90
	ctx.lr = 0x8229C3DC;
	sub_82299D90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C3E4:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229b0c0
	ctx.lr = 0x8229C3FC;
	sub_8229B0C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C404:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229b198
	ctx.lr = 0x8229C41C;
	sub_8229B198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C424:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82299668
	ctx.lr = 0x8229C42C;
	sub_82299668(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C434:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229b310
	ctx.lr = 0x8229C44C;
	sub_8229B310(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C454:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229b400
	ctx.lr = 0x8229C46C;
	sub_8229B400(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C474:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229b498
	ctx.lr = 0x8229C490;
	sub_8229B498(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C498:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r11,22328
	ctx.r4.s64 = ctx.r11.s64 + 22328;
	// bl 0x8229e338
	ctx.lr = 0x8229C4A8;
	sub_8229E338(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C4B0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,22300
	ctx.r4.s64 = ctx.r11.s64 + 22300;
	// bl 0x8229e338
	ctx.lr = 0x8229C4C0;
	sub_8229E338(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C4C8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82299bc0
	ctx.lr = 0x8229C4D4;
	sub_82299BC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C4DC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82299ca8
	ctx.lr = 0x8229C4E8;
	sub_82299CA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229C4F0:
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8229c50c
	if (!ctx.cr6.eq) goto loc_8229C50C;
	// bl 0x822a2468
	ctx.lr = 0x8229C50C;
	sub_822A2468(ctx, base);
loc_8229C50C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229C058) {
	__imp__sub_8229C058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229C514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229C514) {
	__imp__sub_8229C514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229C518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8229C520;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229c5c4
	if (ctx.cr6.eq) goto loc_8229C5C4;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// clrlwi r27,r4,24
	ctx.r27.u64 = ctx.r4.u32 & 0xFF;
	// addi r28,r11,-6904
	ctx.r28.s64 = ctx.r11.s64 + -6904;
loc_8229C548:
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8229c5a4
	if (ctx.cr6.eq) goto loc_8229C5A4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229c590
	if (ctx.cr6.eq) goto loc_8229C590;
	// lbz r10,6(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229c574
	if (ctx.cr6.eq) goto loc_8229C574;
loc_8229C56C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8229c594
	goto loc_8229C594;
loc_8229C574:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,50
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 50, ctx.xer);
	// bne cr6,0x8229c56c
	if (!ctx.cr6.eq) goto loc_8229C56C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229c574
	if (!ctx.cr6.eq) goto loc_8229C574;
loc_8229C590:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8229C594:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229c5a8
	if (!ctx.cr6.eq) goto loc_8229C5A8;
loc_8229C5A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8229C5A8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8229c058
	ctx.lr = 0x8229C5B8;
	sub_8229C058(ctx, base);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229c548
	if (!ctx.cr6.eq) goto loc_8229C548;
loc_8229C5C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229C518) {
	__imp__sub_8229C518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229C5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229C5CC) {
	__imp__sub_8229C5CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229C5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8229C5D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r10,16344
	ctx.r27.s64 = ctx.r10.s64 + 16344;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r9,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r9.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82293f00
	ctx.lr = 0x8229C618;
	sub_82293F00(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x822996f8
	ctx.lr = 0x8229C628;
	sub_822996F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x82296cf0
	ctx.lr = 0x8229C638;
	sub_82296CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229C644;
	sub_8229E1D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8229c518
	ctx.lr = 0x8229C658;
	sub_8229C518(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82296cf0
	ctx.lr = 0x8229C668;
	sub_82296CF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e1d0
	ctx.lr = 0x8229C674;
	sub_8229E1D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,-2
	ctx.r3.s64 = -2;
	// bl 0x8229e1d0
	ctx.lr = 0x8229C680;
	sub_8229E1D0(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,2048
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2048, ctx.xer);
	// blt cr6,0x8229c6a8
	if (ctx.cr6.lt) goto loc_8229C6A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,22352
	ctx.r4.s64 = ctx.r11.s64 + 22352;
	// bl 0x8229e338
	ctx.lr = 0x8229C6A8;
	sub_8229E338(ctx, base);
loc_8229C6A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229C5D0) {
	__imp__sub_8229C5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229C6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229C6B8;
	__savegprlr_29(ctx, base);
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
	// bl 0x82299ed8
	ctx.lr = 0x8229C6CC;
	sub_82299ED8(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r11,16344
	ctx.r29.s64 = ctx.r11.s64 + 16344;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x822a3628
	ctx.lr = 0x8229C6E0;
	sub_822A3628(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a38e0
	ctx.lr = 0x8229C6F0;
	sub_822A38E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x8229C6FC;
	sub_822A2818(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8229c5d0
	ctx.lr = 0x8229C714;
	sub_8229C5D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229C6B0) {
	__imp__sub_8229C6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229C71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229C71C) {
	__imp__sub_8229C71C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229C720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8229C728;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229c7c8
	if (ctx.cr6.eq) goto loc_8229C7C8;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r30,r11,12184
	ctx.r30.s64 = ctx.r11.s64 + 12184;
	// ori r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 48;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x82299ed8
	ctx.lr = 0x8229C768;
	sub_82299ED8(ctx, base);
	// lis r8,-31916
	ctx.r8.s64 = -2091646976;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r8,16344
	ctx.r28.s64 = ctx.r8.s64 + 16344;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x822a3628
	ctx.lr = 0x8229C77C;
	sub_822A3628(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a38e0
	ctx.lr = 0x8229C78C;
	sub_822A38E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x8229C798;
	sub_822A2818(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8229c5d0
	ctx.lr = 0x8229C7B0;
	sub_8229C5D0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r7,48
	ctx.r6.u64 = ctx.r7.u64 | 48;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8229C7C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x8229C7D0;
	sub_822A2818(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r28,72(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r27,r11,12184
	ctx.r27.s64 = ctx.r11.s64 + 12184;
	// ori r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 48;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r11,r27,r9
	PPC_STORE_U32(ctx.r27.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x82299ed8
	ctx.lr = 0x8229C7F8;
	sub_82299ED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8229c5d0
	ctx.lr = 0x8229C80C;
	sub_8229C5D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a2850
	ctx.lr = 0x8229C814;
	sub_822A2850(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r28.u32);
	// ori r7,r8,48
	ctx.r7.u64 = ctx.r8.u64 | 48;
	// stwx r11,r27,r7
	PPC_STORE_U32(ctx.r27.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229C720) {
	__imp__sub_8229C720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229C830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229C838;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-73
	ctx.r11.s64 = ctx.r11.s64 + -73;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x8229c9a4
	if (ctx.cr6.gt) goto loc_8229C9A4;
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14232
	ctx.r12.s64 = ctx.r12.s64 + -14232;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8229C8EC;
	case 1:
		goto loc_8229C8BC;
	case 2:
		goto loc_8229C8D4;
	case 3:
		goto loc_8229C934;
	case 4:
		goto loc_8229C9A4;
	case 5:
		goto loc_8229C9A4;
	case 6:
		goto loc_8229C9A4;
	case 7:
		goto loc_8229C9A4;
	case 8:
		goto loc_8229C9A4;
	case 9:
		goto loc_8229C9A4;
	case 10:
		goto loc_8229C9A4;
	case 11:
		goto loc_8229C9A4;
	case 12:
		goto loc_8229C9A4;
	case 13:
		goto loc_8229C9A4;
	case 14:
		goto loc_8229C9A4;
	case 15:
		goto loc_8229C9A4;
	case 16:
		goto loc_8229C9A4;
	case 17:
		goto loc_8229C9A4;
	case 18:
		goto loc_8229C9A4;
	case 19:
		goto loc_8229C9A4;
	case 20:
		goto loc_8229C990;
	default:
		return;
	}
	// lwz r17,-14100(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14100);
	// lwz r17,-14148(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14148);
	// lwz r17,-14124(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14124);
	// lwz r17,-14028(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14028);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13916(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13916);
	// lwz r17,-13936(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13936);
loc_8229C8BC:
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,16344
	ctx.r9.s64 = ctx.r10.s64 + 16344;
	// stb r11,33(r9)
	PPC_STORE_U8(ctx.r9.u32 + 33, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229C8D4:
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,16344
	ctx.r9.s64 = ctx.r10.s64 + 16344;
	// stb r11,33(r9)
	PPC_STORE_U8(ctx.r9.u32 + 33, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229C8EC:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8229b950
	ctx.lr = 0x8229C900;
	sub_8229B950(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,16344
	ctx.r10.s64 = ctx.r11.s64 + 16344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r9,33(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8229c928
	if (!ctx.cr6.eq) goto loc_8229C928;
	// bl 0x8229c6b0
	ctx.lr = 0x8229C920;
	sub_8229C6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229C928:
	// bl 0x8229c720
	ctx.lr = 0x8229C92C;
	sub_8229C720(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229C934:
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r30,r11,16344
	ctx.r30.s64 = ctx.r11.s64 + 16344;
	// lbz r11,33(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229c960
	if (ctx.cr6.eq) goto loc_8229C960;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,22388
	ctx.r4.s64 = ctx.r11.s64 + 22388;
	// bl 0x8229e338
	ctx.lr = 0x8229C958;
	sub_8229E338(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229C960:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a13a0
	ctx.lr = 0x8229C96C;
	sub_822A13A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822939d8
	ctx.lr = 0x8229C974;
	sub_822939D8(ctx, base);
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229c9a4
	if (!ctx.cr6.eq) goto loc_8229C9A4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822a2468
	ctx.lr = 0x8229C988;
	sub_822A2468(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229C990:
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8229b9d0
	ctx.lr = 0x8229C9A4;
	sub_8229B9D0(ctx, base);
loc_8229C9A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229C830) {
	__imp__sub_8229C830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229C9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229C9AC) {
	__imp__sub_8229C9AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229C9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229C9B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,16344
	ctx.r31.s64 = ctx.r10.s64 + 16344;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r11,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229c9f8
	if (ctx.cr6.eq) goto loc_8229C9F8;
loc_8229C9E0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82296a98
	ctx.lr = 0x8229C9E8;
	sub_82296A98(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229c9e0
	if (!ctx.cr6.eq) goto loc_8229C9E0;
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
loc_8229C9F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229ca14
	if (ctx.cr6.eq) goto loc_8229CA14;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r11,22440
	ctx.r4.s64 = ctx.r11.s64 + 22440;
	// bl 0x8229e338
	ctx.lr = 0x8229CA14;
	sub_8229E338(ctx, base);
loc_8229CA14:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// stb r10,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r10.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229ca48
	if (ctx.cr6.eq) goto loc_8229CA48;
loc_8229CA34:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229c830
	ctx.lr = 0x8229CA3C;
	sub_8229C830(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229ca34
	if (!ctx.cr6.eq) goto loc_8229CA34;
loc_8229CA48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229C9B0) {
	__imp__sub_8229C9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8229CA58;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// stw r6,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// stw r7,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// addi r21,r10,12184
	ctx.r21.s64 = ctx.r10.s64 + 12184;
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// addi r31,r11,16344
	ctx.r31.s64 = ctx.r11.s64 + 16344;
	// addi r6,r10,11128
	ctx.r6.s64 = ctx.r10.s64 + 11128;
	// ori r5,r9,48
	ctx.r5.u64 = ctx.r9.u64 | 48;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r7,4(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// stb r14,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r14.u8);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r14,1044(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1044, ctx.r14.u32);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// stwx r14,r21,r5
	PPC_STORE_U32(ctx.r21.u32 + ctx.r5.u32, ctx.r14.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8229cad0
	if (ctx.cr6.eq) goto loc_8229CAD0;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x8229cad4
	goto loc_8229CAD4;
loc_8229CAD0:
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
loc_8229CAD4:
	// add r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r27,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r27.u32);
	// cmpwi cr6,r27,1024
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1024, ctx.xer);
	// ble cr6,0x8229caf4
	if (!ctx.cr6.gt) goto loc_8229CAF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,22512
	ctx.r4.s64 = ctx.r11.s64 + 22512;
	// bl 0x822830e8
	ctx.lr = 0x8229CAF4;
	sub_822830E8(ctx, base);
loc_8229CAF4:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82296c78
	ctx.lr = 0x8229CB00;
	sub_82296C78(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229c9b0
	ctx.lr = 0x8229CB08;
	sub_8229C9B0(ctx, base);
	// lwz r3,20(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// bl 0x822a5f10
	ctx.lr = 0x8229CB10;
	sub_822A5F10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x8229CB18;
	sub_822A2818(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// ori r8,r10,56
	ctx.r8.u64 = ctx.r10.u64 | 56;
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stwx r11,r21,r8
	PPC_STORE_U32(ctx.r21.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x8229e770
	ctx.lr = 0x8229CB38;
	sub_8229E770(ctx, base);
	// bl 0x822db348
	ctx.lr = 0x8229CB3C;
	sub_822DB348(ctx, base);
	// lwz r20,4(r21)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x822a3098
	ctx.lr = 0x8229CB44;
	sub_822A3098(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x8229cd50
	if (!ctx.cr6.gt) goto loc_8229CD50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// li r15,7
	ctx.r15.s64 = 7;
	// ori r17,r10,51201
	ctx.r17.u64 = ctx.r10.u64 | 51201;
	// ori r18,r9,36866
	ctx.r18.u64 = ctx.r9.u64 | 36866;
	// addi r19,r11,21360
	ctx.r19.s64 = ctx.r11.s64 + 21360;
	// b 0x8229cb7c
	goto loc_8229CB7C;
loc_8229CB78:
	// lwz r27,332(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
loc_8229CB7C:
	// lhz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8229CB88;
	sub_822A13A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8229d268
	ctx.lr = 0x8229CB94;
	sub_8229D268(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8229cd8c
	if (ctx.cr6.eq) goto loc_8229CD8C;
	// bl 0x822a2468
	ctx.lr = 0x8229CBA8;
	sub_822A2468(ctx, base);
	// lbz r10,2(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 2);
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229cd40
	if (ctx.cr6.eq) goto loc_8229CD40;
	// addi r10,r16,1
	ctx.r10.s64 = ctx.r16.s64 + 1;
	// cmpw cr6,r10,r20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x8229cbec
	if (!ctx.cr6.lt) goto loc_8229CBEC;
loc_8229CBC4:
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229cbec
	if (ctx.cr6.eq) goto loc_8229CBEC;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8229cdac
	if (ctx.cr6.eq) goto loc_8229CDAC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x8229cbc4
	if (ctx.cr6.lt) goto loc_8229CBC4;
loc_8229CBEC:
	// stb r14,2(r26)
	PPC_STORE_U8(ctx.r26.u32 + 2, ctx.r14.u8);
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mullw r10,r11,r17
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r17.s32);
	// add r25,r10,r18
	ctx.r25.u64 = ctx.r10.u64 + ctx.r18.u64;
	// bl 0x822a3a70
	ctx.lr = 0x8229CC08;
	sub_822A3A70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229cd40
	if (ctx.cr6.eq) goto loc_8229CD40;
loc_8229CC14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a7160
	ctx.lr = 0x8229CC20;
	sub_822A7160(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x822a3b78
	ctx.lr = 0x8229CC34;
	sub_822A3B78(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822a3628
	ctx.lr = 0x8229CC44;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229cc84
	if (ctx.cr6.eq) goto loc_8229CC84;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x822a7160
	ctx.lr = 0x8229CC5C;
	sub_822A7160(ctx, base);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229cc84
	if (ctx.cr6.eq) goto loc_8229CC84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8229CC74;
	sub_822A13A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e338
	ctx.lr = 0x8229CC84;
	sub_8229E338(ctx, base);
loc_8229CC84:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a6760
	ctx.lr = 0x8229CC90;
	sub_822A6760(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a7160
	ctx.lr = 0x8229CCA4;
	sub_822A7160(ctx, base);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229cccc
	if (ctx.cr6.eq) goto loc_8229CCCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8229CCBC;
	sub_822A13A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229e338
	ctx.lr = 0x8229CCCC;
	sub_8229E338(ctx, base);
loc_8229CCCC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a38e0
	ctx.lr = 0x8229CCD8;
	sub_822A38E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822a3898
	ctx.lr = 0x8229CCF4;
	sub_822A3898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a6760
	ctx.lr = 0x8229CD00;
	sub_822A6760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a3c38
	ctx.lr = 0x8229CD0C;
	sub_822A3C38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82295548
	ctx.lr = 0x8229CD18;
	sub_82295548(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822a6a50
	ctx.lr = 0x8229CD24;
	sub_822A6A50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a3a88
	ctx.lr = 0x8229CD30;
	sub_822A3A88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229cc14
	if (!ctx.cr6.eq) goto loc_8229CC14;
	// lwz r28,324(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
loc_8229CD40:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r16,r20
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x8229cb78
	if (ctx.cr6.lt) goto loc_8229CB78;
loc_8229CD50:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a5f10
	ctx.lr = 0x8229CD58;
	sub_822A5F10(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822a32e0
	ctx.lr = 0x8229CD60;
	sub_822A32E0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82295690
	ctx.lr = 0x8229CD6C;
	sub_82295690(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x822a3878
	ctx.lr = 0x8229CD84;
	sub_822A3878(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_8229CD8C:
	// bl 0x822a13a0
	ctx.lr = 0x8229CD90;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r4,r11,22484
	ctx.r4.s64 = ctx.r11.s64 + 22484;
	// bl 0x8229e338
	ctx.lr = 0x8229CDA4;
	sub_8229E338(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_8229CDAC:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,22464
	ctx.r4.s64 = ctx.r10.s64 + 22464;
	// bl 0x8229e338
	ctx.lr = 0x8229CDBC;
	sub_8229E338(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229CA50) {
	__imp__sub_8229CA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229CDC4) {
	__imp__sub_8229CDC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// subf r5,r11,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// subfc r4,r11,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r4.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229CDC8) {
	__imp__sub_8229CDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229CDFC) {
	__imp__sub_8229CDFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r11,r11,-6904
	ctx.r11.s64 = ctx.r11.s64 + -6904;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8229ce24
	if (ctx.cr6.lt) goto loc_8229CE24;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8229CE24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229CE00) {
	__imp__sub_8229CE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229CE2C) {
	__imp__sub_8229CE2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CE30) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8229ce70
	if (ctx.cr6.eq) goto loc_8229CE70;
loc_8229CE54:
	// bl 0x822e8238
	ctx.lr = 0x8229CE58;
	sub_822E8238(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8229ce88
	if (ctx.cr6.eq) goto loc_8229CE88;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8229ce54
	if (!ctx.cr6.eq) goto loc_8229CE54;
loc_8229CE70:
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
loc_8229CE88:
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

PPC_WEAK_FUNC(sub_8229CE30) {
	__imp__sub_8229CE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229CEA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822a2400
	ctx.lr = 0x8229CEB4;
	sub_822A2400(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a3628
	ctx.lr = 0x8229CECC;
	sub_822A3628(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2468
	ctx.lr = 0x8229CED8;
	sub_822A2468(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229ceec
	if (!ctx.cr6.eq) goto loc_8229CEEC;
loc_8229CEE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8229CEEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a3cf8
	ctx.lr = 0x8229CEF8;
	sub_822A3CF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a1838
	ctx.lr = 0x8229CF04;
	sub_822A1838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229cee0
	if (ctx.cr6.eq) goto loc_8229CEE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a3628
	ctx.lr = 0x8229CF18;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229cee0
	if (ctx.cr6.eq) goto loc_8229CEE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a7160
	ctx.lr = 0x8229CF2C;
	sub_822A7160(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r7,r10,56
	ctx.r7.u64 = ctx.r10.u64 | 56;
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subfc r5,r10,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r10.u32;
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 & ctx.r6.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229CEA0) {
	__imp__sub_8229CEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229CF64) {
	__imp__sub_8229CF64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CF68) {
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
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r11,r11,12184
	ctx.r11.s64 = ctx.r11.s64 + 12184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x823de090
	ctx.lr = 0x8229CF8C;
	sub_823DE090(ctx, base);
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6904
	ctx.r9.s64 = ctx.r10.s64 + -6904;
	// sth r11,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229CF68) {
	__imp__sub_8229CF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229CFAC) {
	__imp__sub_8229CFAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CFB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229CFB0) {
	__imp__sub_8229CFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229CFB4) {
	__imp__sub_8229CFB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229CFB8) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a1e80
	ctx.lr = 0x8229CFD4;
	sub_822A1E80(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,12184
	ctx.r11.s64 = ctx.r11.s64 + 12184;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229d00c
	if (!ctx.cr6.eq) goto loc_8229D00C;
	// lis r9,-31862
	ctx.r9.s64 = -2088108032;
	// addi r8,r9,-6904
	ctx.r8.s64 = ctx.r9.s64 + -6904;
	// lhz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r7,16
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r3,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r3.u16);
	// sthx r3,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u16);
loc_8229D00C:
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

PPC_WEAK_FUNC(sub_8229CFB8) {
	__imp__sub_8229CFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D020) {
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
	// bl 0x822a1810
	ctx.lr = 0x8229D038;
	sub_822A1810(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,12184
	ctx.r11.s64 = ctx.r11.s64 + 12184;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229d068
	if (!ctx.cr6.eq) goto loc_8229D068;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1d20
	ctx.lr = 0x8229D064;
	sub_822A1D20(ctx, base);
	// bl 0x8229cfb8
	ctx.lr = 0x8229D068;
	sub_8229CFB8(ctx, base);
loc_8229D068:
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

PPC_WEAK_FUNC(sub_8229D020) {
	__imp__sub_8229D020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229D07C) {
	__imp__sub_8229D07C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D080) {
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
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r4,r11,22544
	ctx.r4.s64 = ctx.r11.s64 + 22544;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// bl 0x822dba40
	ctx.lr = 0x8229D0A4;
	sub_822DBA40(ctx, base);
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// addi r9,r10,-6904
	ctx.r9.s64 = ctx.r10.s64 + -6904;
	// stw r3,84(r9)
	PPC_STORE_U32(ctx.r9.u32 + 84, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229D080) {
	__imp__sub_8229D080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31862
	ctx.r10.s64 = -2088108032;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6904
	ctx.r9.s64 = ctx.r10.s64 + -6904;
	// stw r11,84(r9)
	PPC_STORE_U32(ctx.r9.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229D0C0) {
	__imp__sub_8229D0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229D0D4) {
	__imp__sub_8229D0D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D0D8) {
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
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// bl 0x822a3148
	ctx.lr = 0x8229D104;
	sub_822A3148(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8229D0D8) {
	__imp__sub_8229D0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229D11C) {
	__imp__sub_8229D11C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229D128;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31918
	ctx.r29.s64 = -2091778048;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r29,11128
	ctx.r31.s64 = ctx.r29.s64 + 11128;
	// rlwinm r9,r3,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xFFFFFE00;
	// addi r8,r31,1036
	ctx.r8.s64 = ctx.r31.s64 + 1036;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,1048(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1048, ctx.r11.u8);
	// stwx r30,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r30.u32);
	// stwx r30,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r30.u32);
	// bl 0x822a3148
	ctx.lr = 0x8229D15C;
	sub_822A3148(ctx, base);
	// lis r6,-31918
	ctx.r6.s64 = -2091778048;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r4,r6,12184
	ctx.r4.s64 = ctx.r6.s64 + 12184;
	// stw r3,11128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11128, ctx.r3.u32);
	// ori r9,r5,48
	ctx.r9.u64 = ctx.r5.u64 | 48;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stwx r30,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229D120) {
	__imp__sub_8229D120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D188) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r11,42
	ctx.r11.s64 = 42;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r10,12184
	ctx.r10.s64 = ctx.r10.s64 + 12184;
	// ble cr6,0x8229d1e8
	if (!ctx.cr6.gt) goto loc_8229D1E8;
loc_8229D1A4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 | 32;
	// ori r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 | 32;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stwx r8,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r8.u32);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8229d1f4
	if (ctx.cr6.eq) goto loc_8229D1F4;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x8229d1f4
	if (ctx.cr6.eq) goto loc_8229D1F4;
	// stbx r11,r3,r7
	PPC_STORE_U8(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8229d1a4
	if (ctx.cr6.lt) goto loc_8229D1A4;
loc_8229D1E8:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
loc_8229D1F4:
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// bne cr6,0x8229d20c
	if (!ctx.cr6.eq) goto loc_8229D20C;
	// stbx r11,r3,r7
	PPC_STORE_U8(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_8229D20C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r11,36
	ctx.r9.u64 = ctx.r11.u64 | 36;
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8229d23c
	if (ctx.cr6.eq) goto loc_8229D23C;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// blr 
	return;
loc_8229D23C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r8,r11,40
	ctx.r8.u64 = ctx.r11.u64 | 40;
	// ori r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 | 32;
	// ori r5,r7,36
	ctx.r5.u64 = ctx.r7.u64 | 36;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stbx r9,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u8);
	// stwx r11,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229D188) {
	__imp__sub_8229D188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229D264) {
	__imp__sub_8229D264(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8229D270;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x822a2400
	ctx.lr = 0x8229D280;
	sub_822A2400(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822a3628
	ctx.lr = 0x8229D298;
	sub_822A3628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229d2dc
	if (ctx.cr6.eq) goto loc_8229D2DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2468
	ctx.lr = 0x8229D2A8;
	sub_822A2468(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a3628
	ctx.lr = 0x8229D2B4;
	sub_822A3628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229d2d0
	if (ctx.cr6.eq) goto loc_8229D2D0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a3cf8
	ctx.lr = 0x8229D2C8;
	sub_822A3CF8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8229D2D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8229D2DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822a67b8
	ctx.lr = 0x8229D2E8;
	sub_822A67B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2468
	ctx.lr = 0x8229D2F4;
	sub_822A2468(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8229D2FC;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,22568
	ctx.r5.s64 = ctx.r11.s64 + 22568;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8368
	ctx.lr = 0x8229D314;
	sub_822E8368(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x8229D31C;
	sub_822A2818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8229D328;
	sub_822A13A0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8229e258
	ctx.lr = 0x8229D338;
	sub_8229E258(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229d2d0
	if (ctx.cr6.eq) goto loc_8229D2D0;
	// lis r10,-31918
	ctx.r10.s64 = -2091778048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r24,r10,11128
	ctx.r24.s64 = ctx.r10.s64 + 11128;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r29,8(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// bl 0x8229e768
	ctx.lr = 0x8229D360;
	sub_8229E768(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r9,40
	ctx.r6.u64 = ctx.r9.u64 | 40;
	// ori r5,r8,32
	ctx.r5.u64 = ctx.r8.u64 | 32;
	// ori r9,r7,36
	ctx.r9.u64 = ctx.r7.u64 | 36;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5972
	ctx.r11.s64 = ctx.r11.s64 + -5972;
	// stwx r28,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r10,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// bl 0x822b6ca0
	ctx.lr = 0x8229D39C;
	sub_822B6CA0(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r7,r8,40
	ctx.r7.u64 = ctx.r8.u64 | 40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x822a6760
	ctx.lr = 0x8229D3B8;
	sub_822A6760(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c38
	ctx.lr = 0x8229D3C8;
	sub_822A3C38(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a6760
	ctx.lr = 0x8229D3DC;
	sub_822A6760(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a3c38
	ctx.lr = 0x8229D3EC;
	sub_822A3C38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x8229ca50
	ctx.lr = 0x8229D408;
	sub_8229CA50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822a6a50
	ctx.lr = 0x8229D414;
	sub_822A6A50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r29.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229D268) {
	__imp__sub_8229D268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229D424) {
	__imp__sub_8229D424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8288(r1)
	ea = -8288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8229d268
	ctx.lr = 0x8229D448;
	sub_8229D268(ctx, base);
	// addi r1,r1,8288
	ctx.r1.s64 = ctx.r1.s64 + 8288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229D428) {
	__imp__sub_8229D428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229D458) {
	__imp__sub_8229D458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229D45C) {
	__imp__sub_8229D45C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D460) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a25e0
	ctx.lr = 0x8229D478;
	sub_822A25E0(ctx, base);
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stbx r11,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// bl 0x822a5f10
	ctx.lr = 0x8229D498;
	sub_822A5F10(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822a90e8
	ctx.lr = 0x8229D4A0;
	sub_822A90E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822a5f10
	ctx.lr = 0x8229D4B0;
	sub_822A5F10(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a90e8
	ctx.lr = 0x8229D4B8;
	sub_822A90E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x822a5f10
	ctx.lr = 0x8229D4C8;
	sub_822A5F10(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822a90e8
	ctx.lr = 0x8229D4D0;
	sub_822A90E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x822a5f10
	ctx.lr = 0x8229D4E0;
	sub_822A5F10(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a90e8
	ctx.lr = 0x8229D4E8;
	sub_822A90E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x822a5f10
	ctx.lr = 0x8229D4F8;
	sub_822A5F10(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822a90e8
	ctx.lr = 0x8229D500;
	sub_822A90E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x822a5f10
	ctx.lr = 0x8229D510;
	sub_822A5F10(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822a90e8
	ctx.lr = 0x8229D518;
	sub_822A90E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x8229d878
	ctx.lr = 0x8229D524;
	sub_8229D878(ctx, base);
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

PPC_WEAK_FUNC(sub_8229D460) {
	__imp__sub_8229D460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8229D540;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,11128
	ctx.r11.s64 = ctx.r11.s64 + 11128;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,1036
	ctx.r28.s64 = ctx.r11.s64 + 1036;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8229d58c
	if (ctx.cr6.lt) goto loc_8229D58C;
loc_8229D56C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82293ad8
	ctx.lr = 0x8229D57C;
	sub_82293AD8(ctx, base);
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8229d56c
	if (!ctx.cr6.gt) goto loc_8229D56C;
loc_8229D58C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229D538) {
	__imp__sub_8229D538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229D594) {
	__imp__sub_8229D594(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D598) {
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
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// addi r31,r11,11128
	ctx.r31.s64 = ctx.r11.s64 + 11128;
	// lwz r3,11128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11128);
	// bl 0x822a5f10
	ctx.lr = 0x8229D5BC;
	sub_822A5F10(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a90e8
	ctx.lr = 0x8229D5C4;
	sub_822A90E8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8229d5dc
	if (ctx.cr6.eq) goto loc_8229D5DC;
	// bl 0x822a90e8
	ctx.lr = 0x8229D5DC;
	sub_822A90E8(ctx, base);
loc_8229D5DC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822a25e0
	ctx.lr = 0x8229D5E4;
	sub_822A25E0(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229d610
	if (ctx.cr6.eq) goto loc_8229D610;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229d610
	if (!ctx.cr6.eq) goto loc_8229D610;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x8229D60C;
	sub_822A2818(ctx, base);
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
loc_8229D610:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1048(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1048, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_8229D598) {
	__imp__sub_8229D598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D630) {
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
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r31,r11,12184
	ctx.r31.s64 = ctx.r11.s64 + 12184;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// lbzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8229d674
	if (ctx.cr6.eq) goto loc_8229D674;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,44
	ctx.r9.u64 = ctx.r10.u64 | 44;
	// stbx r11,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// bl 0x8229d460
	ctx.lr = 0x8229D674;
	sub_8229D460(ctx, base);
loc_8229D674:
	// lis r11,-31918
	ctx.r11.s64 = -2091778048;
	// addi r11,r11,11128
	ctx.r11.s64 = ctx.r11.s64 + 11128;
	// lbz r10,1048(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1048);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229d694
	if (ctx.cr6.eq) goto loc_8229D694;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1048(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1048, ctx.r10.u8);
	// bl 0x8229d598
	ctx.lr = 0x8229D694;
	sub_8229D598(ctx, base);
loc_8229D694:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a25e0
	ctx.lr = 0x8229D69C;
	sub_822A25E0(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r30,r11,-6904
	ctx.r30.s64 = ctx.r11.s64 + -6904;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x822dc310
	ctx.lr = 0x8229D6AC;
	sub_822DC310(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r10,56
	ctx.r8.u64 = ctx.r10.u64 | 56;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// stw r9,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r9.u32);
	// stwx r10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_8229D630) {
	__imp__sub_8229D630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229D6F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822db948
	ctx.lr = 0x8229D6F8;
	sub_822DB948(ctx, base);
	// bl 0x8229d878
	ctx.lr = 0x8229D6FC;
	sub_8229D878(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r30,-31918
	ctx.r30.s64 = -2091778048;
	// ori r10,r11,44
	ctx.r10.u64 = ctx.r11.u64 | 44;
	// addi r31,r30,12184
	ctx.r31.s64 = ctx.r30.s64 + 12184;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// bl 0x822a3148
	ctx.lr = 0x8229D718;
	sub_822A3148(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x822a3148
	ctx.lr = 0x8229D720;
	sub_822A3148(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x822a3148
	ctx.lr = 0x8229D728;
	sub_822A3148(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bl 0x822a3148
	ctx.lr = 0x8229D730;
	sub_822A3148(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bl 0x822a3148
	ctx.lr = 0x8229D738;
	sub_822A3148(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bl 0x822a3148
	ctx.lr = 0x8229D740;
	sub_822A3148(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r29,-31862
	ctx.r29.s64 = -2088108032;
	// addi r28,r29,-6904
	ctx.r28.s64 = ctx.r29.s64 + -6904;
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// bl 0x822a2808
	ctx.lr = 0x8229D754;
	sub_822A2808(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a2818
	ctx.lr = 0x8229D75C;
	sub_822A2818(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r3.u32);
	// ori r8,r9,56
	ctx.r8.u64 = ctx.r9.u64 | 56;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,92(r28)
	PPC_STORE_U32(ctx.r28.u32 + 92, ctx.r10.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x823de090
	ctx.lr = 0x8229D788;
	sub_823DE090(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r11.u16);
	// stw r10,-6904(r29)
	PPC_STORE_U32(ctx.r29.u32 + -6904, ctx.r10.u32);
	// stw r9,12184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12184, ctx.r9.u32);
	// bl 0x822aa8a0
	ctx.lr = 0x8229D7A4;
	sub_822AA8A0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r30,-31918
	ctx.r30.s64 = -2091778048;
	// ori r6,r7,60
	ctx.r6.u64 = ctx.r7.u64 | 60;
	// addi r29,r30,11128
	ctx.r29.s64 = ctx.r30.s64 + 11128;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// bl 0x8229e6e8
	ctx.lr = 0x8229D7CC;
	sub_8229E6E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,1048(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1048, ctx.r11.u8);
	// stw r10,1040(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1040, ctx.r10.u32);
	// stw r9,524(r29)
	PPC_STORE_U32(ctx.r29.u32 + 524, ctx.r9.u32);
	// bl 0x822a3148
	ctx.lr = 0x8229D7E8;
	sub_822A3148(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,11128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11128, ctx.r3.u32);
	// ori r9,r5,48
	ctx.r9.u64 = ctx.r5.u64 | 48;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x82225020
	ctx.lr = 0x8229D810;
	sub_82225020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82225230
	ctx.lr = 0x8229D81C;
	sub_82225230(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229D6E8) {
	__imp__sub_8229D6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229D824) {
	__imp__sub_8229D824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D828) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r31,r11,22576
	ctx.r31.s64 = ctx.r11.s64 + 22576;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82280900
	ctx.lr = 0x8229D84C;
	sub_82280900(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x8229D858;
	sub_82280900(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x8229D864;
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
}

PPC_WEAK_FUNC(sub_8229D828) {
	__imp__sub_8229D828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D878) {
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
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r31,r11,16896
	ctx.r31.s64 = ctx.r11.s64 + 16896;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 1048576;
	// addi r3,r11,8212
	ctx.r3.s64 = ctx.r11.s64 + 8212;
	// bl 0x823de090
	ctx.lr = 0x8229D8A4;
	sub_823DE090(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addis r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 1048576;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8229D8B8:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8229d8b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229D8B8;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_8229D878) {
	__imp__sub_8229D878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D8D8) {
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
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// lis r10,-31900
	ctx.r10.s64 = -2090598400;
	// addi r31,r11,16896
	ctx.r31.s64 = ctx.r11.s64 + 16896;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,255
	ctx.r4.s64 = 255;
	// addis r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 1048576;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,25344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25344, ctx.r31.u32);
	// bl 0x823de090
	ctx.lr = 0x8229D90C;
	sub_823DE090(ctx, base);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// ori r7,r9,8192
	ctx.r7.u64 = ctx.r9.u64 | 8192;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r5,r8,8204
	ctx.r5.u64 = ctx.r8.u64 | 8204;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// ori r9,r6,8196
	ctx.r9.u64 = ctx.r6.u64 | 8196;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// ori r11,r7,8208
	ctx.r11.u64 = ctx.r7.u64 | 8208;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// ori r6,r8,8200
	ctx.r6.u64 = ctx.r8.u64 | 8200;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// addis r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 1048576;
	// lis r9,-4096
	ctx.r9.s64 = -268435456;
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r3,r8,8212
	ctx.r3.s64 = ctx.r8.s64 + 8212;
	// stwx r9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x823de090
	ctx.lr = 0x8229D984;
	sub_823DE090(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addis r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 1048576;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,8272
	ctx.r10.s64 = ctx.r10.s64 + 8272;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8229D998:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8229d998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229D998;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_8229D8D8) {
	__imp__sub_8229D8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229D9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229D9C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,22576
	ctx.r29.s64 = ctx.r11.s64 + 22576;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82280900
	ctx.lr = 0x8229D9E0;
	sub_82280900(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x8229D9EC;
	sub_82280900(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x8229D9F8;
	sub_82280900(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r10,22708
	ctx.r4.s64 = ctx.r10.s64 + 22708;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x8229DA10;
	sub_82280900(ctx, base);
	// bl 0x8228b728
	ctx.lr = 0x8229DA14;
	sub_8228B728(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8229da40
	if (!ctx.cr6.eq) goto loc_8229DA40;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,22656
	ctx.r4.s64 = ctx.r11.s64 + 22656;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8229DA38;
	sub_822830E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229DA40:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,22612
	ctx.r3.s64 = ctx.r11.s64 + 22612;
	// bl 0x822ad420
	ctx.lr = 0x8229DA4C;
	sub_822AD420(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229D9B8) {
	__imp__sub_8229D9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229DA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229DA54) {
	__imp__sub_8229DA54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229DA58) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8229da9c
	if (!ctx.cr6.lt) goto loc_8229DA9C;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subfic r3,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r3.s64 = 32 - ctx.r8.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8229DA9C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,22768
	ctx.r3.s64 = ctx.r11.s64 + 22768;
	// bl 0x8229d9b8
	ctx.lr = 0x8229DAA8;
	sub_8229D9B8(ctx, base);
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

PPC_WEAK_FUNC(sub_8229DA58) {
	__imp__sub_8229DA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229DABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229DABC) {
	__imp__sub_8229DABC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229DAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8229DAC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8229dafc
	if (!ctx.cr6.lt) goto loc_8229DAFC;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subfic r11,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r8.s64;
	// b 0x8229db10
	goto loc_8229DB10;
loc_8229DAFC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,22768
	ctx.r3.s64 = ctx.r11.s64 + 22768;
	// bl 0x8229d9b8
	ctx.lr = 0x8229DB0C;
	sub_8229D9B8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8229DB10:
	// lis r10,-31916
	ctx.r10.s64 = -2091646976;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,16896
	ctx.r6.s64 = ctx.r10.s64 + 16896;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// addis r10,r6,16
	ctx.r10.s64 = ctx.r6.s64 + 1048576;
	// addi r29,r10,8212
	ctx.r29.s64 = ctx.r10.s64 + 8212;
	// lwzx r30,r28,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bgt cr6,0x8229de08
	if (ctx.cr6.gt) goto loc_8229DE08;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8229dbc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229DBC0;
	// bdzf 4*cr6+eq,0x8229dc48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229DC48;
	// bdzf 4*cr6+eq,0x8229dcd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8229DCD8;
	// bne cr6,0x8229dd70
	if (!ctx.cr6.eq) goto loc_8229DD70;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
loc_8229DB50:
	// addis r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 1048576;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x8229dbac
	if (ctx.cr6.eq) goto loc_8229DBAC;
	// srw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// andc r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ~ctx.r5.u64;
loc_8229DB74:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229db98
	if (!ctx.cr6.eq) goto loc_8229DB98;
	// stwcx. r5,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8229db74
	if (!ctx.cr0.eq) goto loc_8229DB74;
	// b 0x8229dba0
	goto loc_8229DBA0;
loc_8229DB98:
	// stwcx. r4,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8229DBA0:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8229df9c
	if (ctx.cr6.eq) goto loc_8229DF9C;
loc_8229DBAC:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r8,r11,21
	ctx.r8.u64 = ctx.r11.u32 & 0x7FF;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8229db50
	if (!ctx.cr6.eq) goto loc_8229DB50;
	// b 0x8229df00
	goto loc_8229DF00;
loc_8229DBC0:
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
loc_8229DBC4:
	// addis r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 1048576;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-10923
	ctx.r12.s64 = -715849728;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x8229dc34
	if (ctx.cr6.eq) goto loc_8229DC34;
	// srw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// andc r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ~ctx.r5.u64;
loc_8229DBFC:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229dc20
	if (!ctx.cr6.eq) goto loc_8229DC20;
	// stwcx. r5,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8229dbfc
	if (!ctx.cr0.eq) goto loc_8229DBFC;
	// b 0x8229dc28
	goto loc_8229DC28;
loc_8229DC20:
	// stwcx. r4,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8229DC28:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8229df9c
	if (ctx.cr6.eq) goto loc_8229DF9C;
loc_8229DC34:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r8,r11,21
	ctx.r8.u64 = ctx.r11.u32 & 0x7FF;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8229dbc4
	if (!ctx.cr6.eq) goto loc_8229DBC4;
	// b 0x8229df00
	goto loc_8229DF00;
loc_8229DC48:
	// lis r7,-4096
	ctx.r7.s64 = -268435456;
loc_8229DC4C:
	// addis r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 1048576;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-30584
	ctx.r12.s64 = -2004353024;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r12,r12,34959
	ctx.r12.u64 = ctx.r12.u64 | 34959;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r4,r5,2,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFF8;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x8229dcc4
	if (ctx.cr6.eq) goto loc_8229DCC4;
	// srw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// andc r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ~ctx.r5.u64;
loc_8229DC8C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229dcb0
	if (!ctx.cr6.eq) goto loc_8229DCB0;
	// stwcx. r5,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8229dc8c
	if (!ctx.cr0.eq) goto loc_8229DC8C;
	// b 0x8229dcb8
	goto loc_8229DCB8;
loc_8229DCB0:
	// stwcx. r4,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8229DCB8:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8229df9c
	if (ctx.cr6.eq) goto loc_8229DF9C;
loc_8229DCC4:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r8,r11,21
	ctx.r8.u64 = ctx.r11.u32 & 0x7FF;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8229dc4c
	if (!ctx.cr6.eq) goto loc_8229DC4C;
	// b 0x8229df00
	goto loc_8229DF00;
loc_8229DCD8:
	// lis r7,-256
	ctx.r7.s64 = -16777216;
loc_8229DCDC:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r10,r6,16
	ctx.r10.s64 = ctx.r6.s64 + 1048576;
	// lis r12,-32640
	ctx.r12.s64 = -2139095040;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r12,r12,33023
	ctx.r12.u64 = ctx.r12.u64 | 33023;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// rlwinm r11,r3,4,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFF80;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// and r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x8229dd5c
	if (ctx.cr6.eq) goto loc_8229DD5C;
	// srw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// andc r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ~ctx.r5.u64;
loc_8229DD24:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229dd48
	if (!ctx.cr6.eq) goto loc_8229DD48;
	// stwcx. r5,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8229dd24
	if (!ctx.cr0.eq) goto loc_8229DD24;
	// b 0x8229dd50
	goto loc_8229DD50;
loc_8229DD48:
	// stwcx. r4,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8229DD50:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8229df9c
	if (ctx.cr6.eq) goto loc_8229DF9C;
loc_8229DD5C:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r8,r11,21
	ctx.r8.u64 = ctx.r11.u32 & 0x7FF;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8229dcdc
	if (!ctx.cr6.eq) goto loc_8229DCDC;
	// b 0x8229df00
	goto loc_8229DF00;
loc_8229DD70:
	// lis r7,-1
	ctx.r7.s64 = -65536;
loc_8229DD74:
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r10,r6,16
	ctx.r10.s64 = ctx.r6.s64 + 1048576;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// and r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r4,r5,8,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF8000;
	// rlwinm r4,r4,0,16,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x8229ddf4
	if (ctx.cr6.eq) goto loc_8229DDF4;
	// srw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// andc r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ~ctx.r5.u64;
loc_8229DDBC:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229dde0
	if (!ctx.cr6.eq) goto loc_8229DDE0;
	// stwcx. r5,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8229ddbc
	if (!ctx.cr0.eq) goto loc_8229DDBC;
	// b 0x8229dde8
	goto loc_8229DDE8;
loc_8229DDE0:
	// stwcx. r4,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8229DDE8:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8229df9c
	if (ctx.cr6.eq) goto loc_8229DF9C;
loc_8229DDF4:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r8,r11,21
	ctx.r8.u64 = ctx.r11.u32 & 0x7FF;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8229dd74
	if (!ctx.cr6.eq) goto loc_8229DD74;
	// b 0x8229df00
	goto loc_8229DF00;
loc_8229DE08:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// slw r5,r10,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8229DE1C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8229de5c
	if (ctx.cr6.eq) goto loc_8229DE5C;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8229DE30:
	// addis r7,r6,16
	ctx.r7.s64 = ctx.r6.s64 + 1048576;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8229def0
	if (!ctx.cr6.eq) goto loc_8229DEF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8229de30
	if (ctx.cr6.lt) goto loc_8229DE30;
loc_8229DE5C:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_8229DE64:
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8229df98
	if (!ctx.cr6.lt) goto loc_8229DF98;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r10,r6,16
	ctx.r10.s64 = ctx.r6.s64 + 1048576;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8229DE78:
	// mfmsr r25
	ctx.r25.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r26,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r26.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r26,r4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8229de9c
	if (!ctx.cr6.eq) goto loc_8229DE9C;
	// stwcx. r31,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r31.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r25,1
	ctx.msr = (ctx.r25.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8229de78
	if (!ctx.cr0.eq) goto loc_8229DE78;
	// b 0x8229dea4
	goto loc_8229DEA4;
loc_8229DE9C:
	// stwcx. r26,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r25,1
	ctx.msr = (ctx.r25.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8229DEA4:
	// not r10,r26
	ctx.r10.u64 = ~ctx.r26.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8229dec4
	if (!ctx.cr6.eq) goto loc_8229DEC4;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// clrlwi r9,r11,21
	ctx.r9.u64 = ctx.r11.u32 & 0x7FF;
	// b 0x8229de64
	goto loc_8229DE64;
loc_8229DEC4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8229def0
	if (ctx.cr6.eq) goto loc_8229DEF0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8229DED8:
	// addis r9,r6,16
	ctx.r9.s64 = ctx.r6.s64 + 1048576;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r7,21
	ctx.r11.u64 = ctx.r7.u32 & 0x7FF;
	// stwx r3,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bdnz 0x8229ded8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229DED8;
loc_8229DEF0:
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// clrlwi r8,r11,21
	ctx.r8.u64 = ctx.r11.u32 & 0x7FF;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8229de1c
	if (!ctx.cr6.eq) goto loc_8229DE1C;
loc_8229DF00:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r31,r11,22576
	ctx.r31.s64 = ctx.r11.s64 + 22576;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82280900
	ctx.lr = 0x8229DF14;
	sub_82280900(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x8229DF20;
	sub_82280900(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x8229DF2C;
	sub_82280900(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r31,r11,22804
	ctx.r31.s64 = ctx.r11.s64 + 22804;
	// addi r4,r10,22708
	ctx.r4.s64 = ctx.r10.s64 + 22708;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x8229DF4C;
	sub_82280900(ctx, base);
	// bl 0x8228b728
	ctx.lr = 0x8229DF50;
	sub_8228B728(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8229df80
	if (!ctx.cr6.eq) goto loc_8229DF80;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,22656
	ctx.r4.s64 = ctx.r11.s64 + 22656;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8229DF74;
	sub_822830E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8229DF80:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,22612
	ctx.r3.s64 = ctx.r11.s64 + 22612;
	// bl 0x822ad420
	ctx.lr = 0x8229DF8C;
	sub_822AD420(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8229DF98:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8229DF9C:
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stwx r8,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r8.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229DAC0) {
	__imp__sub_8229DAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229DFB0) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8229dff0
	if (!ctx.cr6.lt) goto loc_8229DFF0;
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subfic r8,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r8.s64;
	// b 0x8229e000
	goto loc_8229E000;
loc_8229DFF0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,22768
	ctx.r3.s64 = ctx.r11.s64 + 22768;
	// bl 0x8229d9b8
	ctx.lr = 0x8229DFFC;
	sub_8229D9B8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
loc_8229E000:
	// rlwinm r6,r31,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// lwsync 
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// addi r11,r11,16896
	ctx.r11.s64 = ctx.r11.s64 + 16896;
	// bge cr6,0x8229e05c
	if (!ctx.cr6.lt) goto loc_8229E05C;
	// addis r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 1048576;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,8192
	ctx.r30.s64 = ctx.r10.s64 + 8192;
	// addis r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 1048576;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r31,r31,27
	ctx.r31.u64 = ctx.r31.u32 & 0x1F;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r4,r4,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// srw r9,r4,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r31.u8 & 0x3F));
loc_8229E03C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// or r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwcx. r5,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8229e03c
	if (!ctx.cr0.eq) goto loc_8229E03C;
	// b 0x8229e094
	goto loc_8229E094;
loc_8229E05C:
	// addi r9,r8,-5
	ctx.r9.s64 = ctx.r8.s64 + -5;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// slw. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8229e094
	if (ctx.cr0.eq) goto loc_8229E094;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_8229E07C:
	// addis r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 1048576;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r4,21
	ctx.r10.u64 = ctx.r4.u32 & 0x7FF;
	// stwx r7,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r7.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bdnz 0x8229e07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229E07C;
loc_8229E094:
	// addis r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 1048576;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,8212
	ctx.r7.s64 = ctx.r9.s64 + 8212;
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8229e0d0
	if (!ctx.cr0.gt) goto loc_8229E0D0;
	// addis r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 1048576;
	// addi r8,r11,8280
	ctx.r8.s64 = ctx.r11.s64 + 8280;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8229e0cc
	if (!ctx.cr6.lt) goto loc_8229E0CC;
	// stwx r6,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8229E0CC:
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
loc_8229E0D0:
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

PPC_WEAK_FUNC(sub_8229DFB0) {
	__imp__sub_8229DFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E0E8) {
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
	// bl 0x8229dac0
	ctx.lr = 0x8229E0F8;
	sub_8229DAC0(ctx, base);
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,16896
	ctx.r11.s64 = ctx.r11.s64 + 16896;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229E0E8) {
	__imp__sub_8229E0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31916
	ctx.r11.s64 = -2091646976;
	// addi r10,r11,16896
	ctx.r10.s64 = ctx.r11.s64 + 16896;
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// b 0x8229dfb0
	sub_8229DFB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E118) {
	__imp__sub_8229E118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E12C) {
	__imp__sub_8229E12C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229E138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,1
	ctx.r28.s64 = 65536;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// addi r31,r10,22768
	ctx.r31.s64 = ctx.r10.s64 + 22768;
	// bge cr6,0x8229e174
	if (!ctx.cr6.lt) goto loc_8229E174;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subfic r29,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r29.s64 = 32 - ctx.r8.s64;
	// b 0x8229e184
	goto loc_8229E184;
loc_8229E174:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8229d9b8
	ctx.lr = 0x8229E180;
	sub_8229D9B8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_8229E184:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x8229e1a8
	if (!ctx.cr6.lt) goto loc_8229E1A8;
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subfic r11,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r8.s64;
	// b 0x8229e1b8
	goto loc_8229E1B8;
loc_8229E1A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8229d9b8
	ctx.lr = 0x8229E1B4;
	sub_8229D9B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8229E1B8:
	// srawi r10,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// adde r3,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E130) {
	__imp__sub_8229E130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229E1D0) {
	__imp__sub_8229E1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E1D4) {
	__imp__sub_8229E1D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E1D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229E1D8) {
	__imp__sub_8229E1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E1DC) {
	__imp__sub_8229E1DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229E1E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x82177148
	ctx.lr = 0x8229E1FC;
	sub_82177148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,34
	ctx.r3.s64 = 34;
	// bl 0x82172b20
	ctx.lr = 0x8229E20C;
	sub_82172B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8229e220
	if (ctx.cr6.eq) goto loc_8229E220;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229E220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821741c8
	ctx.lr = 0x8229E228;
	sub_821741C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822db2b8
	ctx.lr = 0x8229E230;
	sub_822DB2B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82177030
	ctx.lr = 0x8229E244;
	sub_82177030(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E1E0) {
	__imp__sub_8229E1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E250) {
	PPC_FUNC_PROLOGUE();
	// b 0x8229e1e0
	sub_8229E1E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E250) {
	__imp__sub_8229E250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E254) {
	__imp__sub_8229E254(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E258) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8229e1e0
	sub_8229E1E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E258) {
	__imp__sub_8229E258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E260) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8229e290
	if (!ctx.cr6.eq) goto loc_8229E290;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,22856
	ctx.r4.s64 = ctx.r11.s64 + 22856;
	// b 0x8229e2f0
	goto loc_8229E2F0;
loc_8229E290:
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r10,r11,15008
	ctx.r10.s64 = ctx.r11.s64 + 15008;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8229e2e8
	if (ctx.cr6.eq) goto loc_8229E2E8;
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// bl 0x8229cdc8
	ctx.lr = 0x8229E2A8;
	sub_8229CDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8229e2d4
	if (ctx.cr6.eq) goto loc_8229E2D4;
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-6904
	ctx.r9.s64 = ctx.r11.s64 + -6904;
	// addi r4,r10,22848
	ctx.r4.s64 = ctx.r10.s64 + 22848;
	// lwz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// subf r5,r11,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x82280b08
	ctx.lr = 0x8229E2D0;
	sub_82280B08(ctx, base);
	// b 0x8229e2f8
	goto loc_8229E2F8;
loc_8229E2D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,22840
	ctx.r4.s64 = ctx.r11.s64 + 22840;
	// bl 0x82280b08
	ctx.lr = 0x8229E2E4;
	sub_82280B08(ctx, base);
	// b 0x8229e2f8
	goto loc_8229E2F8;
loc_8229E2E8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,22820
	ctx.r4.s64 = ctx.r11.s64 + 22820;
loc_8229E2F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82280b08
	ctx.lr = 0x8229E2F8;
	sub_82280B08(ctx, base);
loc_8229E2F8:
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

PPC_WEAK_FUNC(sub_8229E260) {
	__imp__sub_8229E260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E310) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31862
	ctx.r9.s64 = -2088108032;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r7,r9,-6904
	ctx.r7.s64 = ctx.r9.s64 + -6904;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r5,r8,22876
	ctx.r5.s64 = ctx.r8.s64 + 22876;
	// lwz r11,88(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// subf r6,r11,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x822e8368
	sub_822E8368(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E310) {
	__imp__sub_8229E310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2192
	ctx.r10.s64 = ctx.r1.s64 + 2192;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x8229E380;
	sub_823E06D0(ctx, base);
	// lis r11,-31862
	ctx.r11.s64 = -2088108032;
	// addi r31,r11,-6904
	ctx.r31.s64 = ctx.r11.s64 + -6904;
	// lbz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8229e3c8
	if (ctx.cr6.eq) goto loc_8229E3C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229e430
	if (!ctx.cr6.eq) goto loc_8229E430;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-29844
	ctx.r3.s64 = ctx.r11.s64 + -29844;
	// bl 0x822e84f0
	ctx.lr = 0x8229E3B0;
	sub_822E84F0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8229E3C8:
	// bl 0x8229e770
	ctx.lr = 0x8229E3CC;
	sub_8229E770(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,-27364
	ctx.r4.s64 = ctx.r11.s64 + -27364;
	// bl 0x82280b08
	ctx.lr = 0x8229E3DC;
	sub_82280B08(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r10,22980
	ctx.r4.s64 = ctx.r10.s64 + 22980;
	// bl 0x82280b08
	ctx.lr = 0x8229E3EC;
	sub_82280B08(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,-27340
	ctx.r4.s64 = ctx.r9.s64 + -27340;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280b08
	ctx.lr = 0x8229E400;
	sub_82280B08(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stb r8,1120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1120, ctx.r8.u8);
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r7,22940
	ctx.r4.s64 = ctx.r7.s64 + 22940;
	// bl 0x82280900
	ctx.lr = 0x8229E418;
	sub_82280900(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r6,r1,1120
	ctx.r6.s64 = ctx.r1.s64 + 1120;
	// addi r4,r5,22884
	ctx.r4.s64 = ctx.r5.s64 + 22884;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822830e8
	ctx.lr = 0x8229E430;
	sub_822830E8(ctx, base);
loc_8229E430:
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229E338) {
	__imp__sub_8229E338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E444) {
	__imp__sub_8229E444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E448) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,-27364
	ctx.r4.s64 = ctx.r11.s64 + -27364;
	// bl 0x82280b08
	ctx.lr = 0x8229E48C;
	sub_82280B08(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r10,22980
	ctx.r4.s64 = ctx.r10.s64 + 22980;
	// bl 0x82280b08
	ctx.lr = 0x8229E49C;
	sub_82280B08(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,2208
	ctx.r8.s64 = ctx.r1.s64 + 2208;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x8229E4BC;
	sub_823E06D0(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r7,23020
	ctx.r4.s64 = ctx.r7.s64 + 23020;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280b08
	ctx.lr = 0x8229E4D0;
	sub_82280B08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8229e260
	ctx.lr = 0x8229E4E0;
	sub_8229E260(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r6,22940
	ctx.r4.s64 = ctx.r6.s64 + 22940;
	// bl 0x82280900
	ctx.lr = 0x8229E4F0;
	sub_82280900(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stb r5,1120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1120, ctx.r5.u8);
	// addi r6,r1,1120
	ctx.r6.s64 = ctx.r1.s64 + 1120;
	// addi r4,r4,22884
	ctx.r4.s64 = ctx.r4.s64 + 22884;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822830e8
	ctx.lr = 0x8229E510;
	sub_822830E8(ctx, base);
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
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

PPC_WEAK_FUNC(sub_8229E448) {
	__imp__sub_8229E448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8229E530;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,23104
	ctx.r4.s64 = ctx.r11.s64 + 23104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82280b08
	ctx.lr = 0x8229E554;
	sub_82280B08(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r10,23060
	ctx.r3.s64 = ctx.r10.s64 + 23060;
	// bl 0x822e84f0
	ctx.lr = 0x8229E564;
	sub_822E84F0(ctx, base);
	// bl 0x823617c0
	ctx.lr = 0x8229E568;
	sub_823617C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229e260
	ctx.lr = 0x8229E578;
	sub_8229E260(ctx, base);
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// addi r27,r11,-3336
	ctx.r27.s64 = ctx.r11.s64 + -3336;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229e600
	if (ctx.cr6.eq) goto loc_8229E600;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x8229e5e0
	if (ctx.cr6.lt) goto loc_8229E5E0;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,60
	ctx.r10.s64 = ctx.r27.s64 + 60;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,23044
	ctx.r28.s64 = ctx.r11.s64 + 23044;
loc_8229E5B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82280b08
	ctx.lr = 0x8229E5C0;
	sub_82280B08(ctx, base);
	// lwz r4,-28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lwzu r11,-24(r31)
	ea = -24 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8229e260
	ctx.lr = 0x8229E5D8;
	sub_8229E260(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8229e5b4
	if (!ctx.cr0.eq) goto loc_8229E5B4;
loc_8229E5E0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,23028
	ctx.r4.s64 = ctx.r11.s64 + 23028;
	// bl 0x82280b08
	ctx.lr = 0x8229E5F0;
	sub_82280B08(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,32(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// bl 0x8229e260
	ctx.lr = 0x8229E600;
	sub_8229E260(ctx, base);
loc_8229E600:
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r9,22940
	ctx.r4.s64 = ctx.r9.s64 + 22940;
	// stw r11,-4912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4912, ctx.r11.u32);
	// bl 0x82280b08
	ctx.lr = 0x8229E61C;
	sub_82280B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E528) {
	__imp__sub_8229E528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E624) {
	__imp__sub_8229E624(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229E630;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r11,-3336
	ctx.r31.s64 = ctx.r11.s64 + -3336;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e6e0
	if (ctx.cr6.eq) goto loc_8229E6E0;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e680
	if (ctx.cr6.eq) goto loc_8229E680;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// bl 0x82280900
	ctx.lr = 0x8229E66C;
	sub_82280900(ctx, base);
	// lbz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229e698
	if (!ctx.cr6.eq) goto loc_8229E698;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8229E680:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x8229e528
	ctx.lr = 0x8229E694;
	sub_8229E528(ctx, base);
	// lbz r11,22(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
loc_8229E698:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229e6b0
	if (ctx.cr6.eq) goto loc_8229E6B0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r10,-27364
	ctx.r6.s64 = ctx.r10.s64 + -27364;
	// b 0x8229e6bc
	goto loc_8229E6BC;
loc_8229E6B0:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r7,r10,-28736
	ctx.r7.s64 = ctx.r10.s64 + -28736;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_8229E6BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r4,r10,23148
	ctx.r4.s64 = ctx.r10.s64 + 23148;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x822830e8
	ctx.lr = 0x8229E6E0;
	sub_822830E8(ctx, base);
loc_8229E6E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E628) {
	__imp__sub_8229E628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// stb r3,25352(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25352, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229E6E8) {
	__imp__sub_8229E6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E6F4) {
	__imp__sub_8229E6F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// lbz r3,25352(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25352);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229E6F8) {
	__imp__sub_8229E6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E704) {
	__imp__sub_8229E704(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229E708) {
	__imp__sub_8229E708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E70C) {
	__imp__sub_8229E70C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229E710) {
	__imp__sub_8229E710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E714) {
	__imp__sub_8229E714(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E718) {
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
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r4,r11,23204
	ctx.r4.s64 = ctx.r11.s64 + 23204;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// bl 0x822dba40
	ctx.lr = 0x8229E73C;
	sub_822DBA40(ctx, base);
	// lis r10,-31900
	ctx.r10.s64 = -2090598400;
	// stw r3,25364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25364, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229E718) {
	__imp__sub_8229E718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E754) {
	__imp__sub_8229E754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E758) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31900
	ctx.r10.s64 = -2090598400;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,25364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25364, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229E758) {
	__imp__sub_8229E758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229E768) {
	__imp__sub_8229E768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E76C) {
	__imp__sub_8229E76C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// b 0x822dc310
	sub_822DC310(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E770) {
	__imp__sub_8229E770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E77C) {
	__imp__sub_8229E77C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// b 0x822dbb60
	sub_822DBB60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E780) {
	__imp__sub_8229E780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229E794) {
	__imp__sub_8229E794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E798) {
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
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// bl 0x822dbb60
	ctx.lr = 0x8229E7C0;
	sub_822DBB60(ctx, base);
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

PPC_WEAK_FUNC(sub_8229E798) {
	__imp__sub_8229E798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E7D8) {
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
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// bl 0x822dbb60
	ctx.lr = 0x8229E808;
	sub_822DBB60(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_8229E7D8) {
	__imp__sub_8229E7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229E830;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// bl 0x822dbb60
	ctx.lr = 0x8229E854;
	sub_822DBB60(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E828) {
	__imp__sub_8229E828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E868) {
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
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// bl 0x822dbb60
	ctx.lr = 0x8229E898;
	sub_822DBB60(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_8229E868) {
	__imp__sub_8229E868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229E8C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822dbb60
	ctx.lr = 0x8229E8E8;
	sub_822DBB60(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E8B8) {
	__imp__sub_8229E8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229E908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// bl 0x822dbb60
	ctx.lr = 0x8229E92C;
	sub_822DBB60(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E900) {
	__imp__sub_8229E900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8229E948;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x822dbb60
	ctx.lr = 0x8229E974;
	sub_822DBB60(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E940) {
	__imp__sub_8229E940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8229E998;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822dbb60
	ctx.lr = 0x8229E9C0;
	sub_822DBB60(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E990) {
	__imp__sub_8229E990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229E9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8229E9E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x822dbb60
	ctx.lr = 0x8229EA10;
	sub_822DBB60(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229E9D8) {
	__imp__sub_8229E9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8229EA38;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x822dbb60
	ctx.lr = 0x8229EA6C;
	sub_822DBB60(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229EA30) {
	__imp__sub_8229EA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8229EA98;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x822dbb60
	ctx.lr = 0x8229EAD0;
	sub_822DBB60(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r25.u32);
	// stw r24,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229EA90) {
	__imp__sub_8229EA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8229EB00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x822dbb60
	ctx.lr = 0x8229EB38;
	sub_822DBB60(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r25.u32);
	// stw r24,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r24.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229EAF8) {
	__imp__sub_8229EAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8229EB70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31900
	ctx.r30.s64 = -2090598400;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25364);
	// bl 0x822dbb60
	ctx.lr = 0x8229EB8C;
	sub_822DBB60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,25364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25364);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x822dbb60
	ctx.lr = 0x8229EBAC;
	sub_822DBB60(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8229EB68) {
	__imp__sub_8229EB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229EBBC) {
	__imp__sub_8229EBBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EBC0) {
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
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// bl 0x822dbb60
	ctx.lr = 0x8229EBF0;
	sub_822DBB60(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
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
}

PPC_WEAK_FUNC(sub_8229EBC0) {
	__imp__sub_8229EBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229EC1C) {
	__imp__sub_8229EC1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EC20) {
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
	// lis r11,-31900
	ctx.r11.s64 = -2090598400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,25364(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25364);
	// bl 0x822dbb60
	ctx.lr = 0x8229EC50;
	sub_822DBB60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8229EC20) {
	__imp__sub_8229EC20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229EC84) {
	__imp__sub_8229EC84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EC88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229EC88) {
	__imp__sub_8229EC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229ECA0) {
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
	// stb r3,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r3.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,119
	ctx.r5.s64 = ctx.r1.s64 + 119;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e40f0
	ctx.lr = 0x8229ECC0;
	sub_822E40F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229ECA0) {
	__imp__sub_8229ECA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229ECD0) {
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
	// sth r3,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r3.u16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,118
	ctx.r5.s64 = ctx.r1.s64 + 118;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822e40f0
	ctx.lr = 0x8229ECF0;
	sub_822E40F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229ECD0) {
	__imp__sub_8229ECD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229ED00) {
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
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8229ED1C;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e42f8
	ctx.lr = 0x8229ED28;
	sub_822E42F8(ctx, base);
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

PPC_WEAK_FUNC(sub_8229ED00) {
	__imp__sub_8229ED00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229ED3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229ED3C) {
	__imp__sub_8229ED3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229ED40) {
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
	// bl 0x822e4998
	ctx.lr = 0x8229ED50;
	sub_822E4998(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8229ed68
	if (!ctx.cr6.eq) goto loc_8229ED68;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8229ED68:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8229ED6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8229ed6c
	if (!ctx.cr6.eq) goto loc_8229ED6C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x822a19a8
	ctx.lr = 0x8229ED98;
	sub_822A19A8(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8229ED40) {
	__imp__sub_8229ED40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8229EDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8229EDAC) {
	__imp__sub_8229EDAC(ctx, base);
}

