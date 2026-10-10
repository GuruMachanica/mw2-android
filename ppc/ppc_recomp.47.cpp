#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_821FDCA8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821fdcc4
	if (ctx.cr6.eq) goto loc_821FDCC4;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x821fdcc4
	if (ctx.cr6.eq) goto loc_821FDCC4;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821FDCC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FDCA8) {
	__imp__sub_821FDCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FDCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FDCCC) {
	__imp__sub_821FDCCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FDCD0) {
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
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fdd58
	if (ctx.cr6.eq) goto loc_821FDD58;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r8,200
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 200, ctx.xer);
	// ble cr6,0x821fdd58
	if (!ctx.cr6.gt) goto loc_821FDD58;
	// lbz r11,175(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 175);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fdd30
	if (ctx.cr6.eq) goto loc_821FDD30;
	// bl 0x8222f680
	ctx.lr = 0x821FDD1C;
	sub_8222F680(ctx, base);
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
loc_821FDD30:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fdd50
	if (ctx.cr6.eq) goto loc_821FDD50;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r11,175(r31)
	PPC_STORE_U8(ctx.r31.u32 + 175, ctx.r11.u8);
	// bl 0x82340cf0
	ctx.lr = 0x821FDD50;
	sub_82340CF0(ctx, base);
loc_821FDD50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
loc_821FDD58:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x821fdd80
	if (!ctx.cr6.eq) goto loc_821FDD80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205bb0
	ctx.lr = 0x821FDD6C;
	sub_82205BB0(ctx, base);
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
loc_821FDD80:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821fddb8
	if (!ctx.cr6.eq) goto loc_821FDDB8;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fddf0
	if (ctx.cr6.eq) goto loc_821FDDF0;
	// bl 0x822334c0
	ctx.lr = 0x821FDD9C;
	sub_822334C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd350
	ctx.lr = 0x821FDDA4;
	sub_821FD350(ctx, base);
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
loc_821FDDB8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821fddd0
	if (ctx.cr6.lt) goto loc_821FDDD0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x821fddd4
	if (!ctx.cr6.gt) goto loc_821FDDD4;
loc_821FDDD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FDDD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fde40
	if (!ctx.cr6.eq) goto loc_821FDE40;
	// lbz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fde08
	if (ctx.cr6.eq) goto loc_821FDE08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821FDDF0:
	// bl 0x821f9118
	ctx.lr = 0x821FDDF4;
	sub_821F9118(ctx, base);
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
loc_821FDE08:
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x821fde5c
	if (ctx.cr6.eq) goto loc_821FDE5C;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x821fde5c
	if (ctx.cr6.eq) goto loc_821FDE5C;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fde64
	if (!ctx.cr6.eq) goto loc_821FDE64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821fde40
	if (!ctx.cr6.eq) goto loc_821FDE40;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fde40
	if (ctx.cr6.eq) goto loc_821FDE40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822334c0
	ctx.lr = 0x821FDE40;
	sub_822334C0(ctx, base);
loc_821FDE40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd350
	ctx.lr = 0x821FDE48;
	sub_821FD350(ctx, base);
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
loc_821FDE5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822084b8
	ctx.lr = 0x821FDE64;
	sub_822084B8(ctx, base);
loc_821FDE64:
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

PPC_WEAK_FUNC(sub_821FDCD0) {
	__imp__sub_821FDCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FDE78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// stw r11,16376(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16376, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FDE78) {
	__imp__sub_821FDE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FDE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FDE8C) {
	__imp__sub_821FDE8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FDE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821FDE98;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,460
	ctx.r31.s64 = ctx.r30.s64 + 460;
	// addi r29,r11,8200
	ctx.r29.s64 = ctx.r11.s64 + 8200;
loc_821FDEB0:
	// lbz r11,-284(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fdef8
	if (ctx.cr6.eq) goto loc_821FDEF8;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fdef8
	if (ctx.cr6.eq) goto loc_821FDEF8;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fdef8
	if (!ctx.cr6.eq) goto loc_821FDEF8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r4,128
	ctx.r4.s64 = 128;
	// lhz r6,-334(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + -334);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x821FDEEC;
	sub_822E8368(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x821FDEF8;
	sub_8233CAE8(ctx, base);
loc_821FDEF8:
	// addis r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 1310720;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// addi r11,r11,-32308
	ctx.r11.s64 = ctx.r11.s64 + -32308;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fdeb0
	if (ctx.cr6.lt) goto loc_821FDEB0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FDE90) {
	__imp__sub_821FDE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FDF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FDF14) {
	__imp__sub_821FDF14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FDF18) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r9,320(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821fe124
	if (ctx.cr6.eq) goto loc_821FE124;
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fdf60
	if (ctx.cr6.eq) goto loc_821FDF60;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821fdf18
	ctx.lr = 0x821FDF60;
	sub_821FDF18(ctx, base);
loc_821FDF60:
	// lhz r4,460(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 460);
	// addi r30,r31,460
	ctx.r30.s64 = ctx.r31.s64 + 460;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821fdf94
	if (ctx.cr6.eq) goto loc_821FDF94;
	// lbz r11,465(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 465);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fdf94
	if (ctx.cr6.eq) goto loc_821FDF94;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229da8
	ctx.lr = 0x821FDF88;
	sub_82229DA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a24e0
	ctx.lr = 0x821FDF94;
	sub_822A24E0(ctx, base);
loc_821FDF94:
	// bl 0x823383b0
	ctx.lr = 0x821FDF98;
	sub_823383B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fdcd0
	ctx.lr = 0x821FDFA0;
	sub_821FDCD0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fdfc0
	if (ctx.cr6.eq) goto loc_821FDFC0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821fdfc0
	if (ctx.cr6.eq) goto loc_821FDFC0;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821fdfc4
	if (!ctx.cr6.eq) goto loc_821FDFC4;
loc_821FDFC0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821FDFC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fe02c
	if (ctx.cr6.eq) goto loc_821FE02C;
	// bl 0x823383c0
	ctx.lr = 0x821FDFD4;
	sub_823383C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3051
	ctx.r5.s64 = 3051;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r11,7772
	ctx.r30.s64 = ctx.r11.s64 + 7772;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82338468
	ctx.lr = 0x821FDFEC;
	sub_82338468(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,3052
	ctx.r5.s64 = 3052;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x82338468
	ctx.lr = 0x821FDFFC;
	sub_82338468(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,3053
	ctx.r5.s64 = 3053;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82338468
	ctx.lr = 0x821FE00C;
	sub_82338468(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,3054
	ctx.r5.s64 = 3054;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x82338558
	ctx.lr = 0x821FE01C;
	sub_82338558(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,3055
	ctx.r5.s64 = 3055;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82338558
	ctx.lr = 0x821FE02C;
	sub_82338558(ctx, base);
loc_821FE02C:
	// bl 0x823383b0
	ctx.lr = 0x821FE030;
	sub_823383B0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x821fe04c
	if (ctx.cr6.eq) goto loc_821FE04C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821fe054
	if (ctx.cr6.eq) goto loc_821FE054;
loc_821FE04C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d8bd8
	ctx.lr = 0x821FE054;
	sub_820D8BD8(ctx, base);
loc_821FE054:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r11,-12552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12552);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fe0c4
	if (ctx.cr6.eq) goto loc_821FE0C4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x821fe0c4
	if (ctx.cr6.gt) goto loc_821FE0C4;
	// lis r12,-32224
	ctx.r12.s64 = -2111832064;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8048
	ctx.r12.s64 = ctx.r12.s64 + -8048;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821FE0BC;
	case 1:
		goto loc_821FE0C4;
	case 2:
		goto loc_821FE0C4;
	case 3:
		goto loc_821FE0BC;
	case 4:
		goto loc_821FE0C4;
	case 5:
		goto loc_821FE0BC;
	case 6:
		goto loc_821FE0C4;
	case 7:
		goto loc_821FE0C4;
	case 8:
		goto loc_821FE0C4;
	case 9:
		goto loc_821FE0C4;
	case 10:
		goto loc_821FE0BC;
	default:
		return;
	}
	// lwz r16,-8004(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8004);
	// lwz r16,-7996(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7996);
	// lwz r16,-7996(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7996);
	// lwz r16,-8004(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8004);
	// lwz r16,-7996(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7996);
	// lwz r16,-8004(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8004);
	// lwz r16,-7996(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7996);
	// lwz r16,-7996(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7996);
	// lwz r16,-7996(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7996);
	// lwz r16,-7996(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7996);
	// lwz r16,-8004(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8004);
loc_821FE0BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd1a8
	ctx.lr = 0x821FE0C4;
	sub_821FD1A8(ctx, base);
loc_821FE0C4:
	// bl 0x823383c0
	ctx.lr = 0x821FE0C8;
	sub_823383C0(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lhz r10,126(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lwz r11,-19088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19088);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821fe124
	if (!ctx.cr6.eq) goto loc_821FE124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d878
	ctx.lr = 0x821FE0E8;
	sub_8233D878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fe124
	if (ctx.cr6.eq) goto loc_821FE124;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// bl 0x8222ec90
	ctx.lr = 0x821FE110;
	sub_8222EC90(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-2072
	ctx.r4.s64 = ctx.r9.s64 + -2072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d480
	ctx.lr = 0x821FE124;
	sub_8233D480(ctx, base);
loc_821FE124:
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

PPC_WEAK_FUNC(sub_821FDF18) {
	__imp__sub_821FDF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FE13C) {
	__imp__sub_821FE13C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// addi r5,r10,-5864
	ctx.r5.s64 = ctx.r10.s64 + -5864;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lis r7,8
	ctx.r7.s64 = 524288;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// ori r4,r9,10604
	ctx.r4.u64 = ctx.r9.u64 | 10604;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// ori r3,r7,10596
	ctx.r3.u64 = ctx.r7.u64 | 10596;
	// ori r6,r6,10600
	ctx.r6.u64 = ctx.r6.u64 | 10600;
	// lwz r7,16376(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16376);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// addi r10,r10,50
	ctx.r10.s64 = ctx.r10.s64 + 50;
	// li r8,50
	ctx.r8.s64 = 50;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r8,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r8.u32);
	// stwx r10,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r10.u32);
	// stwx r10,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16376, ctx.r10.u32);
	// b 0x821fde90
	sub_821FDE90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FE140) {
	__imp__sub_821FE140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FE1B0) {
	__imp__sub_821FE1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FE1B4) {
	__imp__sub_821FE1B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821FE1C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// li r26,0
	ctx.r26.s64 = 0;
	// lbz r10,2908(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2908);
	// lwz r11,9204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r8,2908(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2908, ctx.r8.u8);
	// ble cr6,0x821fe2e8
	if (!ctx.cr6.gt) goto loc_821FE2E8;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r30,r31,6128
	ctx.r30.s64 = ctx.r31.s64 + 6128;
	// addi r24,r9,-25976
	ctx.r24.s64 = ctx.r9.s64 + -25976;
	// addi r25,r10,26552
	ctx.r25.s64 = ctx.r10.s64 + 26552;
loc_821FE204:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r9,r10,624
	ctx.r9.s64 = ctx.r10.s64 * 624;
	// add r28,r9,r25
	ctx.r28.u64 = ctx.r9.u64 + ctx.r25.u64;
	// lwz r6,120(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x821fe294
	if (!ctx.cr6.eq) goto loc_821FE294;
	// lhz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mulli r9,r9,624
	ctx.r9.s64 = ctx.r9.s64 * 624;
	// add r27,r9,r25
	ctx.r27.u64 = ctx.r9.u64 + ctx.r25.u64;
	// lwz r6,120(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x821fe294
	if (!ctx.cr6.eq) goto loc_821FE294;
	// addi r9,r31,9208
	ctx.r9.s64 = ctx.r31.s64 + 9208;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821fe25c
	if (!ctx.cr6.eq) goto loc_821FE25C;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x821fe2d8
	goto loc_821FE2D8;
loc_821FE25C:
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// stbx r8,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821fe278
	if (ctx.cr6.eq) goto loc_821FE278;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222f930
	ctx.lr = 0x821FE278;
	sub_8222F930(ctx, base);
loc_821FE278:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229b60
	ctx.lr = 0x821FE280;
	sub_82229B60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,266(r24)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r24.u32 + 266);
	// bl 0x82229da8
	ctx.lr = 0x821FE290;
	sub_82229DA8(ctx, base);
	// lwz r11,9204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9204);
loc_821FE294:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r31,6128
	ctx.r10.s64 = ctx.r31.s64 + 6128;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,9204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9204, ctx.r11.u32);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// lwz r11,9204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9204);
	// lbz r8,2908(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2908);
loc_821FE2D8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fe204
	if (ctx.cr6.lt) goto loc_821FE204;
loc_821FE2E8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FE1B8) {
	__imp__sub_821FE1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FE2F4) {
	__imp__sub_821FE2F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE2F8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8234b188
	ctx.lr = 0x821FE314;
	sub_8234B188(ctx, base);
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-15992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15992);
	// lfs f0,-23144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// beq cr6,0x821fe374
	if (ctx.cr6.eq) goto loc_821FE374;
loc_821FE34C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82349cf0
	ctx.lr = 0x821FE354;
	sub_82349CF0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822596d8
	ctx.lr = 0x821FE360;
	sub_822596D8(ctx, base);
	// lwz r11,-15992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -15992);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821fe34c
	if (ctx.cr6.lt) goto loc_821FE34C;
loc_821FE374:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r31,3
	ctx.r31.s64 = 3;
	// lfs f31,8220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8220);
	ctx.f31.f64 = double(temp.f32);
loc_821FE380:
	// li r3,4
	ctx.r3.s64 = 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822596d8
	ctx.lr = 0x821FE38C;
	sub_822596D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821fe380
	if (!ctx.cr0.eq) goto loc_821FE380;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_821FE2F8) {
	__imp__sub_821FE2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821FE3B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r3,11188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11188);
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fe430
	if (ctx.cr6.eq) goto loc_821FE430;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1f18
	ctx.lr = 0x821FE3D8;
	sub_822E1F18(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,26552
	ctx.r29.s64 = ctx.r11.s64 + 26552;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r29,292
	ctx.r31.s64 = ctx.r29.s64 + 292;
	// addi r28,r11,8224
	ctx.r28.s64 = ctx.r11.s64 + 8224;
loc_821FE3F0:
	// lbz r11,-116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fe418
	if (ctx.cr6.eq) goto loc_821FE418;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x821FE404;
	sub_822A13A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x821FE418;
	sub_82280900(ctx, base);
loc_821FE418:
	// addis r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 1310720;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// addi r11,r11,-32476
	ctx.r11.s64 = ctx.r11.s64 + -32476;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fe3f0
	if (ctx.cr6.lt) goto loc_821FE3F0;
loc_821FE430:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FE3B0) {
	__imp__sub_821FE3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// addi r9,r11,14460
	ctx.r9.s64 = ctx.r11.s64 + 14460;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// bne cr6,0x821fe4b8
	if (!ctx.cr6.eq) goto loc_821FE4B8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821fe4ac
	if (ctx.cr6.eq) goto loc_821FE4AC;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,13320
	ctx.r8.s64 = ctx.r11.s64 + 13320;
	// add r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r6,r11,14464
	ctx.r6.s64 = ctx.r11.s64 + 14464;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,13324
	ctx.r9.s64 = ctx.r11.s64 + 13324;
	// addi r7,r11,14468
	ctx.r7.s64 = ctx.r11.s64 + 14468;
	// addi r31,r11,13328
	ctx.r31.s64 = ctx.r11.s64 + 13328;
	// addi r30,r11,14472
	ctx.r30.s64 = ctx.r11.s64 + 14472;
	// lfsx f0,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// lfsx f13,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r10,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// lfsx f12,r5,r31
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r10,r30
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// b 0x821fe4ec
	goto loc_821FE4EC;
loc_821FE4AC:
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x821fe4ec
	goto loc_821FE4EC;
loc_821FE4B8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821fe4ec
	if (ctx.cr6.eq) goto loc_821FE4EC;
	// addi r8,r11,14464
	ctx.r8.s64 = ctx.r11.s64 + 14464;
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,14468
	ctx.r7.s64 = ctx.r11.s64 + 14468;
	// addi r6,r11,14472
	ctx.r6.s64 = ctx.r11.s64 + 14472;
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r10,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r10,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stwx r5,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u32);
loc_821FE4EC:
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,13308
	ctx.r9.s64 = ctx.r11.s64 + 13308;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r4,-4
	ctx.r8.s64 = ctx.r4.s64 + -4;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821FE510:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821fe510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FE510;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FE438) {
	__imp__sub_821FE438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821FE530;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// stw r11,11256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11256, ctx.r11.u32);
	// bl 0x820d8c60
	ctx.lr = 0x821FE548;
	sub_820D8C60(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r26,r11,33024
	ctx.r26.u64 = ctx.r11.u64 | 33024;
loc_821FE558:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lbz r11,5039(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5039);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fe5b8
	if (ctx.cr6.eq) goto loc_821FE5B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r29,11260
	ctx.r10.s64 = ctx.r29.s64 + 11260;
	// addi r4,r31,404
	ctx.r4.s64 = ctx.r31.s64 + 404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r8,126(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// stbx r30,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u8);
	// bl 0x821fe438
	ctx.lr = 0x821FE588;
	sub_821FE438(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r29,15260
	ctx.r11.s64 = ctx.r29.s64 + 15260;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r3,126(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 126);
	// bl 0x821ad2a8
	ctx.lr = 0x821FE59C;
	sub_821AD2A8(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r4,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r4,-32(r28)
	PPC_STORE_U8(ctx.r28.u32 + -32, ctx.r4.u8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
loc_821FE5B8:
	// addi r27,r27,5128
	ctx.r27.s64 = ctx.r27.s64 + 5128;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x821fe558
	if (ctx.cr6.lt) goto loc_821FE558;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r11,r11,6688
	ctx.r11.s64 = ctx.r11.s64 + 6688;
	// li r30,16
	ctx.r30.s64 = 16;
	// addi r31,r11,7968
	ctx.r31.s64 = ctx.r11.s64 + 7968;
loc_821FE5DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821fe5fc
	if (ctx.cr6.lt) goto loc_821FE5FC;
	// addi r10,r29,11260
	ctx.r10.s64 = ctx.r29.s64 + 11260;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stbx r3,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u8);
	// bl 0x821fe438
	ctx.lr = 0x821FE5FC;
	sub_821FE438(ctx, base);
loc_821FE5FC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x821fe5dc
	if (!ctx.cr0.eq) goto loc_821FE5DC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FE528) {
	__imp__sub_821FE528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FE614) {
	__imp__sub_821FE614(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821FE620;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82341cf0
	ctx.lr = 0x821FE644;
	sub_82341CF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341d80
	ctx.lr = 0x821FE670;
	sub_82341D80(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FE618) {
	__imp__sub_821FE618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE678) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82341f80
	ctx.lr = 0x821FE698;
	sub_82341F80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FE678) {
	__imp__sub_821FE678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821FE6B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82341cf0
	ctx.lr = 0x821FE6D4;
	sub_82341CF0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r6,r11,-9672
	ctx.r6.s64 = ctx.r11.s64 + -9672;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341d80
	ctx.lr = 0x821FE700;
	sub_82341D80(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FE6A8) {
	__imp__sub_821FE6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821FE710;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82341cf0
	ctx.lr = 0x821FE734;
	sub_82341CF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r10.u8);
	// addi r6,r11,-9672
	ctx.r6.s64 = ctx.r11.s64 + -9672;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341d80
	ctx.lr = 0x821FE768;
	sub_82341D80(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FE708) {
	__imp__sub_821FE708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE770) {
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
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r5,r9,-9672
	ctx.r5.s64 = ctx.r9.s64 + -9672;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bl 0x82341f80
	ctx.lr = 0x821FE7A8;
	sub_82341F80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FE770) {
	__imp__sub_821FE770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE7B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r6,r10,-9672
	ctx.r6.s64 = ctx.r10.s64 + -9672;
	// li r8,2047
	ctx.r8.s64 = 2047;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// b 0x82342160
	sub_82342160(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FE7B8) {
	__imp__sub_821FE7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FE7D4) {
	__imp__sub_821FE7D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE7D8) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82127c70
	sub_82127C70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FE7D8) {
	__imp__sub_821FE7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FE7E4) {
	__imp__sub_821FE7E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE7E8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82127c70
	sub_82127C70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FE7E8) {
	__imp__sub_821FE7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FE7F4) {
	__imp__sub_821FE7F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FE7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821FE800;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32032
	ctx.r31.s64 = -2099249152;
	// lwz r11,-5920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5920);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fea7c
	if (ctx.cr6.eq) goto loc_821FEA7C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821201f0
	ctx.lr = 0x821FE820;
	sub_821201F0(ctx, base);
	// lwz r11,-5920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5920);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821fe8f8
	if (ctx.cr6.eq) goto loc_821FE8F8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821fe8f8
	if (ctx.cr6.eq) goto loc_821FE8F8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821fe8f8
	if (ctx.cr6.eq) goto loc_821FE8F8;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821fea7c
	if (!ctx.cr6.gt) goto loc_821FEA7C;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r27,-32032
	ctx.r27.s64 = -2099249152;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// addi r31,r11,172
	ctx.r31.s64 = ctx.r11.s64 + 172;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r28,r11,8272
	ctx.r28.s64 = ctx.r11.s64 + 8272;
loc_821FE870:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fe8e0
	if (ctx.cr6.eq) goto loc_821FE8E0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fe8e0
	if (ctx.cr6.eq) goto loc_821FE8E0;
	// lwz r11,-5872(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5872);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fe8a8
	if (ctx.cr6.eq) goto loc_821FE8A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821fe8b4
	if (!ctx.cr6.eq) goto loc_821FE8B4;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x821fe8ac
	goto loc_821FE8AC;
loc_821FE8A8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
loc_821FE8AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fe8e0
	if (ctx.cr6.eq) goto loc_821FE8E0;
loc_821FE8B4:
	// lbz r11,119(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 119);
	// addi r9,r28,28
	ctx.r9.s64 = ctx.r28.s64 + 28;
	// mulli r8,r11,44
	ctx.r8.s64 = ctx.r11.s64 * 44;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fe8e0
	if (ctx.cr6.eq) goto loc_821FE8E0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r3,r31,-172
	ctx.r3.s64 = ctx.r31.s64 + -172;
	// bctrl 
	ctx.lr = 0x821FE8DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_821FE8E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821fe870
	if (ctx.cr6.lt) goto loc_821FE870;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821FE8F8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821201c8
	ctx.lr = 0x821FE900;
	sub_821201C8(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,8236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f7,f9,f0,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f5,f6,f0,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,-5872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5872);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fe960
	if (ctx.cr6.eq) goto loc_821FE960;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r31,128
	ctx.r31.s64 = 8388608;
	// beq cr6,0x821fe964
	if (ctx.cr6.eq) goto loc_821FE964;
	// ori r31,r31,24704
	ctx.r31.u64 = ctx.r31.u64 | 24704;
	// b 0x821fe964
	goto loc_821FE964;
loc_821FE960:
	// li r31,16384
	ctx.r31.s64 = 16384;
loc_821FE964:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82341cf0
	ctx.lr = 0x821FE970;
	sub_82341CF0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-9672
	ctx.r6.s64 = ctx.r11.s64 + -9672;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82341d80
	ctx.lr = 0x821FE99C;
	sub_82341D80(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82276090
	ctx.lr = 0x821FE9A4;
	sub_82276090(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r28,r11,26552
	ctx.r28.s64 = ctx.r11.s64 + 26552;
	// mulli r8,r4,624
	ctx.r8.s64 = ctx.r4.s64 * 624;
	// addi r7,r28,291
	ctx.r7.s64 = ctx.r28.s64 + 291;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r27,r11,8272
	ctx.r27.s64 = ctx.r11.s64 + 8272;
	// lis r30,-32020
	ctx.r30.s64 = -2098462720;
	// lbzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// addi r5,r27,28
	ctx.r5.s64 = ctx.r27.s64 + 28;
	// lis r29,-32032
	ctx.r29.s64 = -2099249152;
	// mulli r3,r6,44
	ctx.r3.s64 = ctx.r6.s64 * 44;
	// lwzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r10,9624
	ctx.r31.s64 = ctx.r10.s64 + 9624;
	// beq cr6,0x821fea00
	if (ctx.cr6.eq) goto loc_821FEA00;
	// lwz r3,-5908(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5908);
	// bl 0x822e1f80
	ctx.lr = 0x821FE9F0;
	sub_822E1F80(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,26020(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26020, ctx.r10.u32);
	// b 0x821fea08
	goto loc_821FEA08;
loc_821FEA00:
	// lwz r11,26020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26020);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
loc_821FEA08:
	// lwz r9,-5908(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5908);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821fea7c
	if (ctx.cr6.eq) goto loc_821FEA7C;
	// addi r11,r11,30000
	ctx.r11.s64 = ctx.r11.s64 + 30000;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821fea7c
	if (!ctx.cr6.gt) goto loc_821FEA7C;
	// mulli r11,r9,624
	ctx.r11.s64 = ctx.r9.s64 * 624;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fea54
	if (ctx.cr6.eq) goto loc_821FEA54;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r3,-14932(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14932);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821fea54
	if (!ctx.cr6.gt) goto loc_821FEA54;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x822e1f80
	ctx.lr = 0x821FEA54;
	sub_822E1F80(ctx, base);
loc_821FEA54:
	// lbz r11,291(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r10,r27,28
	ctx.r10.s64 = ctx.r27.s64 + 28;
	// mulli r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 * 44;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fea7c
	if (ctx.cr6.eq) goto loc_821FEA7C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821FEA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FEA7C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FE7F8) {
	__imp__sub_821FE7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FEA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FEA84) {
	__imp__sub_821FEA84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FEA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x821FEA90;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x821e4a98
	ctx.lr = 0x821FEA9C;
	sub_821E4A98(ctx, base);
	// bl 0x821e4e40
	ctx.lr = 0x821FEAA0;
	sub_821E4E40(ctx, base);
	// bl 0x821e4ea8
	ctx.lr = 0x821FEAA4;
	sub_821E4EA8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r27,-32190
	ctx.r27.s64 = -2109603840;
	// addi r26,r11,9240
	ctx.r26.s64 = ctx.r11.s64 + 9240;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwz r10,-32312(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32312);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r28,r26,16
	ctx.r28.s64 = ctx.r26.s64 + 16;
	// lis r25,-32166
	ctx.r25.s64 = -2108030976;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
loc_821FEAD0:
	// lbz r9,29088(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821feaf4
	if (!ctx.cr6.eq) goto loc_821FEAF4;
	// subfc r11,r10,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	// eqv r9,r10,r29
	ctx.r9.u64 = ~(ctx.r10.u64 ^ ctx.r29.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x821feb00
	goto loc_821FEB00;
loc_821FEAF4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821FEB00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821feb1c
	if (ctx.cr6.eq) goto loc_821FEB1C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821e4f08
	ctx.lr = 0x821FEB18;
	sub_821E4F08(ctx, base);
	// lwz r10,-32312(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32312);
loc_821FEB1C:
	// addi r28,r28,9780
	ctx.r28.s64 = ctx.r28.s64 + 9780;
	// addi r11,r26,19576
	ctx.r11.s64 = ctx.r26.s64 + 19576;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fead0
	if (ctx.cr6.lt) goto loc_821FEAD0;
	// bl 0x821fd060
	ctx.lr = 0x821FEB38;
	sub_821FD060(ctx, base);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r21,2916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2916, ctx.r21.u32);
	// addi r27,r10,26552
	ctx.r27.s64 = ctx.r10.s64 + 26552;
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r23,r10,11296
	ctx.r23.s64 = ctx.r10.s64 + 11296;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821feb9c
	if (!ctx.cr6.gt) goto loc_821FEB9C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f31,-23144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23144);
	ctx.f31.f64 = double(temp.f32);
loc_821FEB68:
	// lbzx r9,r11,r23
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821feb88
	if (ctx.cr6.eq) goto loc_821FEB88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8233d210
	ctx.lr = 0x821FEB80;
	sub_8233D210(ctx, base);
	// lwz r11,2916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_821FEB88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// stw r11,2916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2916, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821feb68
	if (ctx.cr6.lt) goto loc_821FEB68;
loc_821FEB9C:
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,9208
	ctx.r3.s64 = ctx.r31.s64 + 9208;
	// bl 0x823de090
	ctx.lr = 0x821FEBAC;
	sub_823DE090(ctx, base);
	// stb r21,2908(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2908, ctx.r21.u8);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// addi r4,r31,3056
	ctx.r4.s64 = ctx.r31.s64 + 3056;
	// addi r3,r31,6128
	ctx.r3.s64 = ctx.r31.s64 + 6128;
	// lwz r11,9200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9200);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822dd768
	ctx.lr = 0x821FEBD0;
	sub_822DD768(ctx, base);
	// lwz r11,9200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9200);
	// stw r21,9200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9200, ctx.r21.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r11,9204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9204, ctx.r11.u32);
	// bl 0x822b2a90
	ctx.lr = 0x821FEBE4;
	sub_822B2A90(ctx, base);
loc_821FEBE4:
	// bl 0x821fe1b8
	ctx.lr = 0x821FEBE8;
	sub_821FE1B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822b2a90
	ctx.lr = 0x821FEBF0;
	sub_822B2A90(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821febe4
	if (!ctx.cr6.eq) goto loc_821FEBE4;
	// lis r30,-32021
	ctx.r30.s64 = -2098528256;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,-19060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19060);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821fec28
	if (!ctx.cr6.gt) goto loc_821FEC28;
loc_821FEC10:
	// bl 0x821ad7b0
	ctx.lr = 0x821FEC14;
	sub_821AD7B0(ctx, base);
	// lwz r11,-19060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19060);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821fec10
	if (ctx.cr6.gt) goto loc_821FEC10;
loc_821FEC28:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fec64
	if (!ctx.cr6.gt) goto loc_821FEC64;
loc_821FEC3C:
	// lbzx r10,r30,r23
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fec54
	if (ctx.cr6.eq) goto loc_821FEC54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fdb10
	ctx.lr = 0x821FEC50;
	sub_821FDB10(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_821FEC54:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,624
	ctx.r29.s64 = ctx.r29.s64 + 624;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fec3c
	if (ctx.cr6.lt) goto loc_821FEC3C;
loc_821FEC64:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r21,2916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2916, ctx.r21.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// stb r21,2920(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2920, ctx.r21.u8);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821fecf8
	if (!ctx.cr6.gt) goto loc_821FECF8;
loc_821FEC88:
	// lbzx r9,r11,r23
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821fece0
	if (ctx.cr6.eq) goto loc_821FECE0;
loc_821FEC94:
	// lwz r9,312(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// rlwinm r8,r9,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821fece0
	if (!ctx.cr6.eq) goto loc_821FECE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ec70
	ctx.lr = 0x821FECB0;
	sub_8222EC70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fecd8
	if (ctx.cr6.eq) goto loc_821FECD8;
	// bl 0x822b2a90
	ctx.lr = 0x821FECBC;
	sub_822B2A90(ctx, base);
	// lwz r11,2916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stb r22,2920(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2920, ctx.r22.u8);
	// lbzx r9,r11,r23
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821fec94
	if (!ctx.cr6.eq) goto loc_821FEC94;
	// b 0x821fece0
	goto loc_821FECE0;
loc_821FECD8:
	// lbz r10,2920(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2920);
	// lwz r11,2916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
loc_821FECE0:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// stw r11,2916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2916, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821fec88
	if (ctx.cr6.lt) goto loc_821FEC88;
loc_821FECF8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fedac
	if (ctx.cr6.eq) goto loc_821FEDAC;
loc_821FED04:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// stw r21,2916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2916, ctx.r21.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stb r21,2920(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2920, ctx.r21.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821feda0
	if (!ctx.cr6.gt) goto loc_821FEDA0;
loc_821FED24:
	// lbzx r9,r11,r23
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821fed88
	if (ctx.cr6.eq) goto loc_821FED88;
loc_821FED30:
	// lwz r9,312(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// rlwinm r8,r9,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821fed88
	if (ctx.cr6.eq) goto loc_821FED88;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821fed88
	if (!ctx.cr6.eq) goto loc_821FED88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ec70
	ctx.lr = 0x821FED58;
	sub_8222EC70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fed80
	if (ctx.cr6.eq) goto loc_821FED80;
	// bl 0x822b2a90
	ctx.lr = 0x821FED64;
	sub_822B2A90(ctx, base);
	// lwz r11,2916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stb r22,2920(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2920, ctx.r22.u8);
	// lbzx r9,r11,r23
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821fed30
	if (!ctx.cr6.eq) goto loc_821FED30;
	// b 0x821fed88
	goto loc_821FED88;
loc_821FED80:
	// lbz r10,2920(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2920);
	// lwz r11,2916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2916);
loc_821FED88:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// stw r11,2916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2916, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821fed24
	if (ctx.cr6.lt) goto loc_821FED24;
loc_821FEDA0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fed04
	if (!ctx.cr6.eq) goto loc_821FED04;
loc_821FEDAC:
	// bl 0x822b2ae8
	ctx.lr = 0x821FEDB0;
	sub_822B2AE8(ctx, base);
	// bl 0x8233cf78
	ctx.lr = 0x821FEDB4;
	sub_8233CF78(ctx, base);
	// bl 0x821b6ad0
	ctx.lr = 0x821FEDB8;
	sub_821B6AD0(ctx, base);
	// lbz r11,29088(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 29088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fedc8
	if (!ctx.cr6.eq) goto loc_821FEDC8;
	// bl 0x821e4a98
	ctx.lr = 0x821FEDC8;
	sub_821E4A98(ctx, base);
loc_821FEDC8:
	// bl 0x820d82e8
	ctx.lr = 0x821FEDCC;
	sub_820D82E8(ctx, base);
	// bl 0x821fe2f8
	ctx.lr = 0x821FEDD0;
	sub_821FE2F8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82348b20
	ctx.lr = 0x821FEDD8;
	sub_82348B20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fede4
	if (ctx.cr6.eq) goto loc_821FEDE4;
	// bl 0x821fdf18
	ctx.lr = 0x821FEDE4;
	sub_821FDF18(ctx, base);
loc_821FEDE4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r21,2912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2912, ctx.r21.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821fee2c
	if (!ctx.cr6.gt) goto loc_821FEE2C;
loc_821FEDFC:
	// lbzx r9,r11,r23
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821fee18
	if (ctx.cr6.eq) goto loc_821FEE18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fdf18
	ctx.lr = 0x821FEE10;
	sub_821FDF18(ctx, base);
	// lwz r11,2912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2912);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_821FEE18:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// stw r11,2912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2912, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821fedfc
	if (ctx.cr6.lt) goto loc_821FEDFC;
loc_821FEE2C:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// stw r11,2912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2912, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821fef28
	if (!ctx.cr6.gt) goto loc_821FEF28;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// addi r24,r27,264
	ctx.r24.s64 = ctx.r27.s64 + 264;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// addi r29,r11,30208
	ctx.r29.s64 = ctx.r11.s64 + 30208;
	// addi r27,r10,-3584
	ctx.r27.s64 = ctx.r10.s64 + -3584;
loc_821FEE64:
	// lbzx r11,r28,r23
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fef08
	if (ctx.cr6.eq) goto loc_821FEF08;
	// lhz r4,-138(r24)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r24.u32 + -138);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x821f6c18
	ctx.lr = 0x821FEE7C;
	sub_821F6C18(ctx, base);
	// addi r3,r24,-264
	ctx.r3.s64 = ctx.r24.s64 + -264;
	// bl 0x821e4728
	ctx.lr = 0x821FEE84;
	sub_821E4728(ctx, base);
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821fef00
	if (ctx.cr6.gt) goto loc_821FEF00;
	// addi r11,r27,80
	ctx.r11.s64 = ctx.r27.s64 + 80;
	// lbzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fef00
	if (ctx.cr6.eq) goto loc_821FEF00;
	// addi r11,r27,108
	ctx.r11.s64 = ctx.r27.s64 + 108;
	// addi r10,r27,112
	ctx.r10.s64 = ctx.r27.s64 + 112;
	// addi r9,r27,84
	ctx.r9.s64 = ctx.r27.s64 + 84;
	// addi r8,r27,88
	ctx.r8.s64 = ctx.r27.s64 + 88;
	// addi r7,r27,92
	ctx.r7.s64 = ctx.r27.s64 + 92;
	// lhzx r5,r26,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// addi r6,r29,84
	ctx.r6.s64 = ctx.r29.s64 + 84;
	// lwzx r3,r25,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// addi r11,r29,92
	ctx.r11.s64 = ctx.r29.s64 + 92;
	// lfsx f0,r30,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r29,108
	ctx.r10.s64 = ctx.r29.s64 + 108;
	// lfsx f13,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r29,112
	ctx.r9.s64 = ctx.r29.s64 + 112;
	// lfsx f12,r30,r7
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f0,r30,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// stfsx f13,r30,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// stfsx f12,r30,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// sthx r5,r26,r10
	PPC_STORE_U16(ctx.r26.u32 + ctx.r10.u32, ctx.r5.u16);
	// stwx r3,r25,r9
	PPC_STORE_U32(ctx.r25.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwsync 
	// addi r8,r29,80
	ctx.r8.s64 = ctx.r29.s64 + 80;
	// stbx r22,r8,r28
	PPC_STORE_U8(ctx.r8.u32 + ctx.r28.u32, ctx.r22.u8);
	// b 0x821fef08
	goto loc_821FEF08;
loc_821FEF00:
	// addi r11,r29,80
	ctx.r11.s64 = ctx.r29.s64 + 80;
	// stbx r21,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r21.u8);
loc_821FEF08:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r24,r24,624
	ctx.r24.s64 = ctx.r24.s64 + 624;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fee64
	if (ctx.cr6.lt) goto loc_821FEE64;
loc_821FEF28:
	// bl 0x821ad2a0
	ctx.lr = 0x821FEF2C;
	sub_821AD2A0(ctx, base);
	// bl 0x821f4048
	ctx.lr = 0x821FEF30;
	sub_821F4048(ctx, base);
	// lwz r11,2924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2924);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fef40
	if (ctx.cr6.eq) goto loc_821FEF40;
	// bl 0x821f86d8
	ctx.lr = 0x821FEF40;
	sub_821F86D8(ctx, base);
loc_821FEF40:
	// bl 0x822393a8
	ctx.lr = 0x821FEF44;
	sub_822393A8(ctx, base);
	// bl 0x82354368
	ctx.lr = 0x821FEF48;
	sub_82354368(ctx, base);
	// bl 0x821fd3e0
	ctx.lr = 0x821FEF4C;
	sub_821FD3E0(ctx, base);
	// bl 0x821c4a40
	ctx.lr = 0x821FEF50;
	sub_821C4A40(ctx, base);
	// bl 0x821fe3b0
	ctx.lr = 0x821FEF54;
	sub_821FE3B0(ctx, base);
	// bl 0x821fe7f8
	ctx.lr = 0x821FEF58;
	sub_821FE7F8(ctx, base);
	// lis r30,-32032
	ctx.r30.s64 = -2099249152;
	// lwz r11,-6152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6152);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821fef98
	if (ctx.cr6.lt) goto loc_821FEF98;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,8124
	ctx.r3.s64 = ctx.r11.s64 + 8124;
	// bl 0x822e84f0
	ctx.lr = 0x821FEF7C;
	sub_822E84F0(ctx, base);
	// lwz r11,-6152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6152);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r11,r9,624
	ctx.r11.s64 = ctx.r9.s64 * 624;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8233d310
	ctx.lr = 0x821FEF98;
	sub_8233D310(ctx, base);
loc_821FEF98:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,6676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6676);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821fefbc
	if (!ctx.cr6.eq) goto loc_821FEFBC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r4,r11,-27364
	ctx.r4.s64 = ctx.r11.s64 + -27364;
	// bl 0x82280900
	ctx.lr = 0x821FEFBC;
	sub_82280900(ctx, base);
loc_821FEFBC:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r3,-5992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5992);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x821feff4
	if (ctx.cr6.lt) goto loc_821FEFF4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1f80
	ctx.lr = 0x821FEFD8;
	sub_822E1F80(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r10,r30,624
	ctx.r10.s64 = ctx.r30.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822846c0
	ctx.lr = 0x821FEFE8;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821feff4
	if (ctx.cr6.eq) goto loc_821FEFF4;
	// bl 0x822f0510
	ctx.lr = 0x821FEFF4;
	sub_822F0510(ctx, base);
loc_821FEFF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FEA88) {
	__imp__sub_821FEA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FF004) {
	__imp__sub_821FF004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x821FF010;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r17,1
	ctx.r17.s64 = 1;
	// addi r21,r10,9624
	ctx.r21.s64 = ctx.r10.s64 + 9624;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stw r17,36(r21)
	PPC_STORE_U32(ctx.r21.u32 + 36, ctx.r17.u32);
	// bl 0x822b2be8
	ctx.lr = 0x821FF030;
	sub_822B2BE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822aab38
	ctx.lr = 0x821FF038;
	sub_822AAB38(ctx, base);
	// bl 0x822a4c28
	ctx.lr = 0x821FF03C;
	sub_822A4C28(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r19,-32190
	ctx.r19.s64 = -2109603840;
	// addi r24,r11,9240
	ctx.r24.s64 = ctx.r11.s64 + 9240;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r30,r24,16
	ctx.r30.s64 = ctx.r24.s64 + 16;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// lwz r10,-32312(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -32312);
	// lis r18,-32166
	ctx.r18.s64 = -2108030976;
	// lwz r11,52(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// stw r11,64(r21)
	PPC_STORE_U32(ctx.r21.u32 + 64, ctx.r11.u32);
loc_821FF064:
	// lbz r9,29088(r18)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ff088
	if (!ctx.cr6.eq) goto loc_821FF088;
	// subfc r11,r10,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// eqv r9,r10,r31
	ctx.r9.u64 = ~(ctx.r10.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x821ff094
	goto loc_821FF094;
loc_821FF088:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821FF094:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ff0ac
	if (ctx.cr6.eq) goto loc_821FF0AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7670
	ctx.lr = 0x821FF0A8;
	sub_821E7670(ctx, base);
	// lwz r10,-32312(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -32312);
loc_821FF0AC:
	// addi r30,r30,9780
	ctx.r30.s64 = ctx.r30.s64 + 9780;
	// addi r11,r24,19576
	ctx.r11.s64 = ctx.r24.s64 + 19576;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ff064
	if (ctx.cr6.lt) goto loc_821FF064;
	// bl 0x8222a470
	ctx.lr = 0x821FF0C4;
	sub_8222A470(ctx, base);
	// bl 0x821add28
	ctx.lr = 0x821FF0C8;
	sub_821ADD28(ctx, base);
	// bl 0x82237fe0
	ctx.lr = 0x821FF0CC;
	sub_82237FE0(ctx, base);
	// bl 0x8220ec40
	ctx.lr = 0x821FF0D0;
	sub_8220EC40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821fea88
	ctx.lr = 0x821FF0DC;
	sub_821FEA88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822aab38
	ctx.lr = 0x821FF0E4;
	sub_822AAB38(ctx, base);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r20,36(r21)
	PPC_STORE_U32(ctx.r21.u32 + 36, ctx.r20.u32);
	// lwz r11,2924(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2924);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ff0fc
	if (ctx.cr6.eq) goto loc_821FF0FC;
	// bl 0x821f86d8
	ctx.lr = 0x821FF0FC;
	sub_821F86D8(ctx, base);
loc_821FF0FC:
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r25,r11,30208
	ctx.r25.s64 = ctx.r11.s64 + 30208;
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// lwz r10,-32312(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -32312);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r30,r11,240
	ctx.r30.s64 = ctx.r11.s64 + 240;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// addi r29,r25,112
	ctx.r29.s64 = ctx.r25.s64 + 112;
	// addi r28,r25,108
	ctx.r28.s64 = ctx.r25.s64 + 108;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// addi r31,r25,92
	ctx.r31.s64 = ctx.r25.s64 + 92;
	// ori r23,r11,45012
	ctx.r23.u64 = ctx.r11.u64 | 45012;
	// ori r22,r9,45016
	ctx.r22.u64 = ctx.r9.u64 | 45016;
loc_821FF13C:
	// lbz r9,29088(r18)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ff160
	if (!ctx.cr6.eq) goto loc_821FF160;
	// subfc r11,r10,r26
	ctx.xer.ca = ctx.r26.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r26.s64 - ctx.r10.s64;
	// eqv r9,r10,r26
	ctx.r9.u64 = ~(ctx.r10.u64 ^ ctx.r26.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x821ff16c
	goto loc_821FF16C;
loc_821FF160:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821FF16C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ff1c8
	if (ctx.cr6.eq) goto loc_821FF1C8;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f13,-4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwzx r9,r11,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// sth r9,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r9.u16);
	// stw r20,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r20.u32);
	// lwz r3,260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff1bc
	if (ctx.cr6.eq) goto loc_821FF1BC;
	// bl 0x8222e308
	ctx.lr = 0x821FF1B4;
	sub_8222E308(ctx, base);
	// lwz r10,-32312(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -32312);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_821FF1BC:
	// lwsync 
	// addi r11,r25,80
	ctx.r11.s64 = ctx.r25.s64 + 80;
	// stbx r17,r11,r26
	PPC_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r17.u8);
loc_821FF1C8:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r11,r25,116
	ctx.r11.s64 = ctx.r25.s64 + 116;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,9780
	ctx.r24.s64 = ctx.r24.s64 + 9780;
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// add r27,r27,r22
	ctx.r27.u64 = ctx.r27.u64 + ctx.r22.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ff13c
	if (ctx.cr6.lt) goto loc_821FF13C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FF008) {
	__imp__sub_821FF008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF1F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x821FF21C;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x821ff24c
	if (ctx.cr6.lt) goto loc_821FF24C;
	// li r11,255
	ctx.r11.s64 = 255;
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
loc_821FF24C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821ff258
	if (ctx.cr6.gt) goto loc_821FF258;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FF258:
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

PPC_WEAK_FUNC(sub_821FF1F8) {
	__imp__sub_821FF1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FF26C) {
	__imp__sub_821FF26C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF270) {
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
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821ff1f8
	ctx.lr = 0x821FF294;
	sub_821FF1F8(ctx, base);
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x821FF2A0;
	sub_821FF1F8(ctx, base);
	// stb r3,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r3.u8);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x821FF2AC;
	sub_821FF1F8(ctx, base);
	// stb r3,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r3.u8);
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x821FF2B8;
	sub_821FF1F8(ctx, base);
	// stb r3,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r3.u8);
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

PPC_WEAK_FUNC(sub_821FF270) {
	__imp__sub_821FF270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FF2D4) {
	__imp__sub_821FF2D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF2D8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8210ff80
	ctx.lr = 0x821FF2EC;
	sub_8210FF80(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r11,26524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26524);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FF2D8) {
	__imp__sub_821FF2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FF30C) {
	__imp__sub_821FF30C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF310) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r3,232
	ctx.r4.s64 = ctx.r3.s64 + 232;
	// b 0x8222fb90
	sub_8222FB90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FF310) {
	__imp__sub_821FF310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF318) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,8244
	ctx.r4.s64 = ctx.r11.s64 + 8244;
	// addi r3,r10,8240
	ctx.r3.s64 = ctx.r10.s64 + 8240;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82229450
	ctx.lr = 0x821FF348;
	sub_82229450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ff35c
	if (!ctx.cr6.eq) goto loc_821FF35C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f680
	ctx.lr = 0x821FF358;
	sub_8222F680(ctx, base);
	// b 0x821ff440
	goto loc_821FF440;
loc_821FF35C:
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r9,r10,-11984
	ctx.r9.s64 = ctx.r10.s64 + -11984;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mulli r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 * 68;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// sth r8,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r8.u16);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x822d9048
	ctx.lr = 0x821FF388;
	sub_822D9048(ctx, base);
	// stfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821ff270
	ctx.lr = 0x821FF398;
	sub_821FF270(ctx, base);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r7,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r7.u8);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f13,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f12,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f9,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f7,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x822d50f8
	ctx.lr = 0x821FF3E8;
	sub_822D50F8(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x821FF3F4;
	sub_8222FBE8(ctx, base);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x821FF400;
	sub_8222FB90(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f5,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// lfs f0,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f5,192(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f5,196(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f5,200(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stb r5,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// stb r4,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r4.u8);
	// bl 0x82340d30
	ctx.lr = 0x821FF440;
	sub_82340D30(ctx, base);
loc_821FF440:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_821FF318) {
	__imp__sub_821FF318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF458) {
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
	// lbz r11,173(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 173);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x821ff480
	if (!ctx.cr6.eq) goto loc_821FF480;
	// bl 0x8233cb28
	ctx.lr = 0x821FF47C;
	sub_8233CB28(ctx, base);
	// b 0x821ff484
	goto loc_821FF484;
loc_821FF480:
	// bl 0x8233cb90
	ctx.lr = 0x821FF484;
	sub_8233CB90(ctx, base);
loc_821FF484:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ff4e0
	if (!ctx.cr6.eq) goto loc_821FF4E0;
	// lfs f3,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f1,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,8248
	ctx.r4.s64 = ctx.r11.s64 + 8248;
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280b08
	ctx.lr = 0x821FF4C4;
	sub_82280B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f680
	ctx.lr = 0x821FF4CC;
	sub_8222F680(ctx, base);
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
loc_821FF4E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// stb r9,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x82340d30
	ctx.lr = 0x821FF504;
	sub_82340D30(ctx, base);
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

PPC_WEAK_FUNC(sub_821FF458) {
	__imp__sub_821FF458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF518) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821e6828
	ctx.lr = 0x821FF538;
	sub_821E6828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6960
	ctx.lr = 0x821FF544;
	sub_821E6960(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ff55c
	if (!ctx.cr6.eq) goto loc_821FF55C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
loc_821FF55C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x821FF564;
	sub_82340D30(ctx, base);
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

PPC_WEAK_FUNC(sub_821FF518) {
	__imp__sub_821FF518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FF57C) {
	__imp__sub_821FF57C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FF580) {
	__imp__sub_821FF580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FF5BC) {
	__imp__sub_821FF5BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF5C0) {
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
	// bl 0x8222f3a8
	ctx.lr = 0x821FF5D8;
	sub_8222F3A8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// addi r3,r3,292
	ctx.r3.s64 = ctx.r3.s64 + 292;
	// lhz r4,600(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 600);
	// bl 0x822a24e0
	ctx.lr = 0x821FF5F0;
	sub_822A24E0(ctx, base);
	// addi r3,r31,294
	ctx.r3.s64 = ctx.r31.s64 + 294;
	// lhz r4,600(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 600);
	// bl 0x822a24e0
	ctx.lr = 0x821FF5FC;
	sub_822A24E0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_821FF5C0) {
	__imp__sub_821FF5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stfs f1,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// b 0x82340d30
	sub_82340D30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FF650) {
	__imp__sub_821FF650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FF668) {
	__imp__sub_821FF668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FF670) {
	__imp__sub_821FF670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821FF680;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,208(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f13,212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f12,216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// bl 0x8210ff80
	ctx.lr = 0x821FF6B4;
	sub_8210FF80(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lwz r11,26524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26524);
	// lwz r10,-5920(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5920);
	// lfs f11,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsubs f2,f9,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fsubs f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmadds f13,f2,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f12,0(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x821ff738
	if (!ctx.cr6.lt) goto loc_821FF738;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,13356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13356);
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821ff738
	if (!ctx.cr6.gt) goto loc_821FF738;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x821ff750
	if (ctx.cr6.gt) goto loc_821FF750;
loc_821FF738:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f0,8316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8316);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_821FF750:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FF678) {
	__imp__sub_821FF678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF758) {
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
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821ff678
	ctx.lr = 0x821FF780;
	sub_821FF678(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r11,-2152
	ctx.r6.s64 = ctx.r11.s64 + -2152;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x821f2d40
	ctx.lr = 0x821FF7A0;
	sub_821F2D40(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lwz r11,-5920(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5920);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821ff804
	if (ctx.cr6.eq) goto loc_821FF804;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821ff804
	if (ctx.cr6.eq) goto loc_821FF804;
	// lhz r3,302(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff7d4
	if (ctx.cr6.eq) goto loc_821FF7D4;
	// bl 0x822a13a0
	ctx.lr = 0x821FF7CC;
	sub_822A13A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821ff7dc
	goto loc_821FF7DC;
loc_821FF7D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,8360
	ctx.r30.s64 = ctx.r11.s64 + 8360;
loc_821FF7DC:
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x821FF7E4;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r11,8340
	ctx.r3.s64 = ctx.r11.s64 + 8340;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821FF800;
	sub_822E84F0(ctx, base);
	// b 0x821ff814
	goto loc_821FF814;
loc_821FF804:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x822e84f0
	ctx.lr = 0x821FF814;
	sub_822E84F0(ctx, base);
loc_821FF814:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r9,8320
	ctx.r4.s64 = ctx.r9.s64 + 8320;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,8336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821fe7d8
	ctx.lr = 0x821FF838;
	sub_821FE7D8(ctx, base);
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

PPC_WEAK_FUNC(sub_821FF758) {
	__imp__sub_821FF758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FF850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x821FF858;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r31,-32191
	ctx.r31.s64 = -2109669376;
	// lis r29,-32020
	ctx.r29.s64 = -2098462720;
	// lwz r11,26036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26036);
	// lfs f31,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ff89c
	if (!ctx.cr6.eq) goto loc_821FF89C;
	// lfs f0,9388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 9388);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,26032(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 26032, temp.u32);
	// stw r11,26036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26036, ctx.r11.u32);
loc_821FF89C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ff678
	ctx.lr = 0x821FF8B0;
	sub_821FF678(ctx, base);
	// lfs f0,9388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 9388);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x821ffa08
	if (ctx.cr6.gt) goto loc_821FFA08;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f0,26032(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 26032);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// addi r10,r11,9376
	ctx.r10.s64 = ctx.r11.s64 + 9376;
	// lfs f13,9376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9376);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bge cr6,0x821ff8fc
	if (!ctx.cr6.lt) goto loc_821FF8FC;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// b 0x821ff910
	goto loc_821FF910;
loc_821FF8FC:
	// fsubs f12,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_821FF910:
	// lis r24,-32191
	ctx.r24.s64 = -2109669376;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r31,r30,352
	ctx.r31.s64 = ctx.r30.s64 + 352;
	// lfs f0,9372(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 9372);
	ctx.f0.f64 = double(temp.f32);
	// li r25,2
	ctx.r25.s64 = 2;
	// fnmsubs f12,f0,f31,f13
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// lfs f31,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// addi r26,r11,-1944
	ctx.r26.s64 = ctx.r11.s64 + -1944;
	// addi r28,r10,8392
	ctx.r28.s64 = ctx.r10.s64 + 8392;
	// addi r27,r9,8372
	ctx.r27.s64 = ctx.r9.s64 + 8372;
loc_821FF94C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ff9fc
	if (ctx.cr6.eq) goto loc_821FF9FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ff994
	if (ctx.cr6.eq) goto loc_821FF994;
	// lwz r22,4(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r23,r11,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r21,0(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82332b28
	ctx.lr = 0x821FF974;
	sub_82332B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lhz r4,126(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821FF990;
	sub_822E84F0(ctx, base);
	// b 0x821ff9b8
	goto loc_821FF9B8;
loc_821FF994:
	// lwz r23,4(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r22,0(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82332b28
	ctx.lr = 0x821FF9A0;
	sub_82332B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lhz r4,126(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821FF9B8;
	sub_822E84F0(ctx, base);
loc_821FF9B8:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f0,6048(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821fe7d8
	ctx.lr = 0x821FF9D0;
	sub_821FE7D8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// addi r3,r30,232
	ctx.r3.s64 = ctx.r30.s64 + 232;
	// bl 0x821f2d40
	ctx.lr = 0x821FF9EC;
	sub_821F2D40(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9372(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 9372);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_821FF9FC:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x821ff94c
	if (!ctx.cr0.eq) goto loc_821FF94C;
loc_821FFA08:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821FF850) {
	__imp__sub_821FF850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FFA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821FFA14) {
	__imp__sub_821FFA14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FFA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821ffa38
	if (ctx.cr6.eq) goto loc_821FFA38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ffa38
	if (ctx.cr6.eq) goto loc_821FFA38;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821FFA38:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FFA18) {
	__imp__sub_821FFA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FFA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FFA40) {
	__imp__sub_821FFA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821FFA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de01c
	ctx.lr = 0x821FFA64;
	__savefpr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r7,11748
	ctx.r3.s64 = ctx.r7.s64 + 11748;
	// lfs f30,6912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r8,11664
	ctx.r8.s64 = ctx.r8.s64 + 11664;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,11772(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11772);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FFAA0;
	sub_822E1660(ctx, base);
	// lis r6,-32020
	ctx.r6.s64 = -2098462720;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r4,11584
	ctx.r8.s64 = ctx.r4.s64 + 11584;
	// stw r3,26084(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26084, ctx.r3.u32);
	// addi r3,r11,11560
	ctx.r3.s64 = ctx.r11.s64 + 11560;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FFAD0;
	sub_822E1660(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,26988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26988, ctx.r3.u32);
	// addi r8,r6,11504
	ctx.r8.s64 = ctx.r6.s64 + 11504;
	// lfs f28,12240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r5,11480
	ctx.r3.s64 = ctx.r5.s64 + 11480;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f2,6020(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6020);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FFB08;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,11392
	ctx.r8.s64 = ctx.r10.s64 + 11392;
	// stw r3,27088(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27088, ctx.r3.u32);
	// addi r3,r9,11364
	ctx.r3.s64 = ctx.r9.s64 + 11364;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,20560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20560);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FFB38;
	sub_822E1660(ctx, base);
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,27052(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27052, ctx.r3.u32);
	// addi r8,r6,11280
	ctx.r8.s64 = ctx.r6.s64 + 11280;
	// lfs f1,-3348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -3348);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,11252
	ctx.r3.s64 = ctx.r5.s64 + 11252;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FFB68;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,11104
	ctx.r8.s64 = ctx.r11.s64 + 11104;
	// stw r3,26048(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26048, ctx.r3.u32);
	// addi r3,r10,11076
	ctx.r3.s64 = ctx.r10.s64 + 11076;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,11248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11248);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FFB98;
	sub_822E1660(ctx, base);
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r3,27048(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27048, ctx.r3.u32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f1,26572(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26572);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r6,10936
	ctx.r8.s64 = ctx.r6.s64 + 10936;
	// addi r3,r5,10912
	ctx.r3.s64 = ctx.r5.s64 + 10912;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FFBC8;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,10832
	ctx.r8.s64 = ctx.r11.s64 + 10832;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,27072(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27072, ctx.r3.u32);
	// addi r3,r10,10796
	ctx.r3.s64 = ctx.r10.s64 + 10796;
	// bl 0x822e1660
	ctx.lr = 0x821FFBF4;
	sub_822E1660(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r8,r6,10720
	ctx.r8.s64 = ctx.r6.s64 + 10720;
	// stw r3,27064(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27064, ctx.r3.u32);
	// addi r3,r5,10692
	ctx.r3.s64 = ctx.r5.s64 + 10692;
	// lfs f1,16696(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16696);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FFC24;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,10624
	ctx.r8.s64 = ctx.r10.s64 + 10624;
	// stw r3,26072(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26072, ctx.r3.u32);
	// addi r3,r9,10592
	ctx.r3.s64 = ctx.r9.s64 + 10592;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,3628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3628);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FFC54;
	sub_822E1660(ctx, base);
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,26052(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26052, ctx.r3.u32);
	// addi r8,r6,10528
	ctx.r8.s64 = ctx.r6.s64 + 10528;
	// lfs f27,-14540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -14540);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r5,10500
	ctx.r3.s64 = ctx.r5.s64 + 10500;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FFC88;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,10464
	ctx.r8.s64 = ctx.r11.s64 + 10464;
	// stw r3,26996(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26996, ctx.r3.u32);
	// addi r3,r10,10440
	ctx.r3.s64 = ctx.r10.s64 + 10440;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,-23464(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FFCB8;
	sub_822E1660(ctx, base);
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,27004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27004, ctx.r3.u32);
	// addi r8,r6,10384
	ctx.r8.s64 = ctx.r6.s64 + 10384;
	// lfs f1,10436(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10436);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,10360
	ctx.r3.s64 = ctx.r5.s64 + 10360;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FFCE8;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// stw r3,26984(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26984, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,10324
	ctx.r8.s64 = ctx.r11.s64 + 10324;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r10,10296
	ctx.r3.s64 = ctx.r10.s64 + 10296;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FFD14;
	sub_822E1660(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r8,r6,10236
	ctx.r8.s64 = ctx.r6.s64 + 10236;
	// stw r3,27084(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27084, ctx.r3.u32);
	// addi r3,r5,10208
	ctx.r3.s64 = ctx.r5.s64 + 10208;
	// lfs f26,10292(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10292);
	ctx.f26.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FFD48;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r3,26044(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26044, ctx.r3.u32);
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
	// addi r3,r7,10188
	ctx.r3.s64 = ctx.r7.s64 + 10188;
	// lfs f29,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,-23144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23144);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FFD84;
	sub_822E1660(ctx, base);
	// lis r6,-32020
	ctx.r6.s64 = -2098462720;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,26080(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26080, ctx.r3.u32);
	// addi r3,r4,10160
	ctx.r3.s64 = ctx.r4.s64 + 10160;
	// lfs f1,10184(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FFDB0;
	sub_822E1660(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r10,10040
	ctx.r6.s64 = ctx.r10.s64 + 10040;
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r3,27032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27032, ctx.r3.u32);
	// addi r3,r9,10024
	ctx.r3.s64 = ctx.r9.s64 + 10024;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FFDD4;
	sub_822E15D0(ctx, base);
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,26076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26076, ctx.r3.u32);
	// addi r8,r6,9928
	ctx.r8.s64 = ctx.r6.s64 + 9928;
	// lfs f1,6024(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6024);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,9904
	ctx.r3.s64 = ctx.r5.s64 + 9904;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FFE04;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// stw r3,27040(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27040, ctx.r3.u32);
	// addi r3,r8,9872
	ctx.r3.s64 = ctx.r8.s64 + 9872;
	// lfs f1,26980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26980);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r10,9836
	ctx.r9.s64 = ctx.r10.s64 + 9836;
	// li r8,196
	ctx.r8.s64 = 196;
	// bl 0x822e16a8
	ctx.lr = 0x821FFE38;
	sub_822E16A8(ctx, base);
	// lis r7,-32020
	ctx.r7.s64 = -2098462720;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r6,9792
	ctx.r8.s64 = ctx.r6.s64 + 9792;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// stw r3,27096(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27096, ctx.r3.u32);
	// addi r3,r5,9768
	ctx.r3.s64 = ctx.r5.s64 + 9768;
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x821FFE64;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,9724
	ctx.r8.s64 = ctx.r10.s64 + 9724;
	// stw r3,26056(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26056, ctx.r3.u32);
	// addi r3,r9,9700
	ctx.r3.s64 = ctx.r9.s64 + 9700;
	// li r7,196
	ctx.r7.s64 = 196;
	// lfs f1,8664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8664);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FFE94;
	sub_822E1660(ctx, base);
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,26040(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26040, ctx.r3.u32);
	// addi r8,r6,9624
	ctx.r8.s64 = ctx.r6.s64 + 9624;
	// lfs f1,6044(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6044);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,9592
	ctx.r3.s64 = ctx.r5.s64 + 9592;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FFEC4;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,9572
	ctx.r6.s64 = ctx.r11.s64 + 9572;
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r3,26068(r4)
	PPC_STORE_U32(ctx.r4.u32 + 26068, ctx.r3.u32);
	// addi r3,r10,9556
	ctx.r3.s64 = ctx.r10.s64 + 9556;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x821FFEE8;
	sub_822E15D0(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r8,r5,9496
	ctx.r8.s64 = ctx.r5.s64 + 9496;
	// stw r3,27056(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27056, ctx.r3.u32);
	// li r7,132
	ctx.r7.s64 = 132;
	// addi r3,r4,9472
	ctx.r3.s64 = ctx.r4.s64 + 9472;
	// lfs f1,5996(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821FFF18;
	sub_822E1660(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r10,9428
	ctx.r6.s64 = ctx.r10.s64 + 9428;
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r3,27008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27008, ctx.r3.u32);
	// addi r3,r9,9404
	ctx.r3.s64 = ctx.r9.s64 + 9404;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x821FFF3C;
	sub_822E15D0(ctx, base);
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,27080(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27080, ctx.r3.u32);
	// addi r8,r6,9344
	ctx.r8.s64 = ctx.r6.s64 + 9344;
	// lfs f28,11804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11804);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r5,9324
	ctx.r3.s64 = ctx.r5.s64 + 9324;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FFF70;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// stw r3,27016(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27016, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,9264
	ctx.r8.s64 = ctx.r10.s64 + 9264;
	// addi r3,r9,9244
	ctx.r3.s64 = ctx.r9.s64 + 9244;
	// lfs f26,4292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4292);
	ctx.f26.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x821FFFA4;
	sub_822E1660(ctx, base);
	// lis r7,-32020
	ctx.r7.s64 = -2098462720;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r6,9168
	ctx.r8.s64 = ctx.r6.s64 + 9168;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// stw r3,27044(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27044, ctx.r3.u32);
	// addi r3,r5,9140
	ctx.r3.s64 = ctx.r5.s64 + 9140;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x821FFFD0;
	sub_822E1660(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,9092
	ctx.r8.s64 = ctx.r10.s64 + 9092;
	// stw r3,26060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26060, ctx.r3.u32);
	// addi r3,r9,9076
	ctx.r3.s64 = ctx.r9.s64 + 9076;
	// lfs f25,6032(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6032);
	ctx.f25.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x822e1660
	ctx.lr = 0x82200004;
	sub_822E1660(ctx, base);
	// lis r7,-32020
	ctx.r7.s64 = -2098462720;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r6,9012
	ctx.r8.s64 = ctx.r6.s64 + 9012;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// stw r3,27060(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27060, ctx.r3.u32);
	// addi r3,r5,8996
	ctx.r3.s64 = ctx.r5.s64 + 8996;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x82200030;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,8952
	ctx.r8.s64 = ctx.r11.s64 + 8952;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,27000(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27000, ctx.r3.u32);
	// addi r3,r10,8936
	ctx.r3.s64 = ctx.r10.s64 + 8936;
	// bl 0x822e1660
	ctx.lr = 0x8220005C;
	sub_822E1660(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r8,r6,8880
	ctx.r8.s64 = ctx.r6.s64 + 8880;
	// stw r3,26064(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26064, ctx.r3.u32);
	// addi r3,r5,8860
	ctx.r3.s64 = ctx.r5.s64 + 8860;
	// lfs f1,8932(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8932);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8220008C;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,8800
	ctx.r8.s64 = ctx.r10.s64 + 8800;
	// stw r3,27028(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27028, ctx.r3.u32);
	// addi r3,r9,8780
	ctx.r3.s64 = ctx.r9.s64 + 8780;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,5876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x822000BC;
	sub_822E1660(ctx, base);
	// lis r7,-32020
	ctx.r7.s64 = -2098462720;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r8,r6,8740
	ctx.r8.s64 = ctx.r6.s64 + 8740;
	// stw r3,27076(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27076, ctx.r3.u32);
	// addi r3,r5,8716
	ctx.r3.s64 = ctx.r5.s64 + 8716;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x822000E8;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,8616
	ctx.r8.s64 = ctx.r11.s64 + 8616;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,27068(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27068, ctx.r3.u32);
	// addi r3,r10,8588
	ctx.r3.s64 = ctx.r10.s64 + 8588;
	// bl 0x822e1660
	ctx.lr = 0x82200114;
	sub_822E1660(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,27036(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27036, ctx.r3.u32);
	// addi r8,r8,8504
	ctx.r8.s64 = ctx.r8.s64 + 8504;
	// addi r3,r5,8572
	ctx.r3.s64 = ctx.r5.s64 + 8572;
	// lfs f1,7540(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7540);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82200144;
	sub_822E1660(ctx, base);
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,8440
	ctx.r8.s64 = ctx.r11.s64 + 8440;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,27020(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27020, ctx.r3.u32);
	// addi r3,r10,8412
	ctx.r3.s64 = ctx.r10.s64 + 8412;
	// bl 0x822e1660
	ctx.lr = 0x82200170;
	sub_822E1660(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// stw r3,27100(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27100, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de068
	ctx.lr = 0x82200184;
	__restfpr_25(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821FFA50) {
	__imp__sub_821FFA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82200194) {
	__imp__sub_82200194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200198) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,11964
	ctx.r6.s64 = ctx.r11.s64 + 11964;
	// addi r3,r10,11944
	ctx.r3.s64 = ctx.r10.s64 + 11944;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822001C0;
	sub_822E15D0(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r6,r8,11904
	ctx.r6.s64 = ctx.r8.s64 + 11904;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,27092(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27092, ctx.r3.u32);
	// addi r3,r7,11884
	ctx.r3.s64 = ctx.r7.s64 + 11884;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x822001E4;
	sub_822E15D0(ctx, base);
	// lis r5,-32020
	ctx.r5.s64 = -2098462720;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r4,11800
	ctx.r6.s64 = ctx.r4.s64 + 11800;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27024(r5)
	PPC_STORE_U32(ctx.r5.u32 + 27024, ctx.r3.u32);
	// addi r3,r11,11776
	ctx.r3.s64 = ctx.r11.s64 + 11776;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82200208;
	sub_822E15D0(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// stw r3,27012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27012, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82200198) {
	__imp__sub_82200198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200220) {
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
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82200234;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
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

PPC_WEAK_FUNC(sub_82200220) {
	__imp__sub_82200220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82200254) {
	__imp__sub_82200254(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,12000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,7648(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11248);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// blt cr6,0x82200294
	if (ctx.cr6.lt) goto loc_82200294;
	// li r3,50
	ctx.r3.s64 = 50;
	// blr 
	return;
loc_82200294:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82200258) {
	__imp__sub_82200258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822002A8) {
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
	// bl 0x82276090
	ctx.lr = 0x822002B8;
	sub_82276090(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r9,r11,624
	ctx.r9.s64 = ctx.r11.s64 * 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// lbzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822002e0
	if (ctx.cr6.eq) goto loc_822002E0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822002e4
	if (!ctx.cr6.eq) goto loc_822002E4;
loc_822002E0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822002E4:
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

PPC_WEAK_FUNC(sub_822002A8) {
	__imp__sub_822002A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822002F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82200300;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de01c
	ctx.lr = 0x82200308;
	__savefpr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8231f840
	ctx.lr = 0x82200368;
	sub_8231F840(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f8,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,6020(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6020);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// ble cr6,0x8220050c
	if (!ctx.cr6.gt) goto loc_8220050C;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d9340
	ctx.lr = 0x82200388;
	sub_822D9340(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
	// lfs f31,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f28,f13,f31
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x822003B0;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lfs f29,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// lfs f25,9868(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9868);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f11,f28,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f12.f64));
	// fmuls f26,f11,f29
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fabs f28,f26
	ctx.f28.u64 = ctx.f26.u64 & ~0x8000000000000000;
	// bne cr6,0x82200454
	if (!ctx.cr6.eq) goto loc_82200454;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f25
	ctx.cr6.compare(ctx.f28.f64, ctx.f25.f64);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// stw r28,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r28.u32);
	// bge cr6,0x82200430
	if (!ctx.cr6.lt) goto loc_82200430;
	// bl 0x8222fe20
	ctx.lr = 0x82200400;
	sub_8222FE20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,6032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6032);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12260);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f1,f0,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,2424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,76(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// b 0x82200454
	goto loc_82200454;
loc_82200430:
	// bl 0x8222fe20
	ctx.lr = 0x82200434;
	sub_8222FE20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,6032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6032);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12260);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f1,f0,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,76(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
loc_82200454:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82200464;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bne cr6,0x822004b8
	if (!ctx.cr6.eq) goto loc_822004B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6028);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// blt cr6,0x822004b8
	if (ctx.cr6.lt) goto loc_822004B8;
	// fcmpu cr6,f28,f25
	ctx.cr6.compare(ctx.f28.f64, ctx.f25.f64);
	// bge cr6,0x822004f4
	if (!ctx.cr6.lt) goto loc_822004F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f26,f0,f1
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 + ctx.f1.f64));
	// bl 0x822d77c0
	ctx.lr = 0x822004A4;
	sub_822D77C0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de068
	ctx.lr = 0x822004B4;
	__restfpr_25(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822004B8:
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822004f0
	if (!ctx.cr6.gt) goto loc_822004F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f27,f0
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// bl 0x822d77c0
	ctx.lr = 0x822004DC;
	sub_822D77C0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de068
	ctx.lr = 0x822004EC;
	__restfpr_25(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822004F0:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
loc_822004F4:
	// bl 0x822d77c0
	ctx.lr = 0x822004F8;
	sub_822D77C0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de068
	ctx.lr = 0x82200508;
	__restfpr_25(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8220050C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82200544
	if (!ctx.cr6.eq) goto loc_82200544;
	// bl 0x8222fd60
	ctx.lr = 0x82200518;
	sub_8222FD60(ctx, base);
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// lfs f0,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-63
	ctx.r11.s64 = ctx.r11.s64 + -63;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// bl 0x822d77c0
	ctx.lr = 0x82200540;
	sub_822D77C0(ctx, base);
	// stfs f1,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
loc_82200544:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de068
	ctx.lr = 0x82200550;
	__restfpr_25(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822002F8) {
	__imp__sub_822002F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82200554) {
	__imp__sub_82200554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200558) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8231f840
	ctx.lr = 0x822005BC;
	sub_8231F840(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d93e8
	ctx.lr = 0x822005CC;
	sub_822D93E8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822da518
	ctx.lr = 0x822005E0;
	sub_822DA518(ctx, base);
	// lfs f8,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f2,f0,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f7,f2,f13,f3
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f1,f12,f10,f8
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f2,f12,f9,f7
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f7.f64));
	// bl 0x823de9c8
	ctx.lr = 0x8220062C;
	sub_823DE9C8(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,12336(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,8(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_82200558) {
	__imp__sub_82200558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82200660;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8231f840
	ctx.lr = 0x822006C8;
	sub_8231F840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276090
	ctx.lr = 0x822006D0;
	sub_82276090(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r6,-32052
	ctx.r6.s64 = -2100559872;
	// mulli r5,r7,624
	ctx.r5.s64 = ctx.r7.s64 * 624;
	// addi r4,r6,26552
	ctx.r4.s64 = ctx.r6.s64 + 26552;
	// lbzx r11,r5,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822006f8
	if (ctx.cr6.eq) goto loc_822006F8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822006fc
	if (!ctx.cr6.eq) goto loc_822006FC;
loc_822006F8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822006FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82200714
	if (ctx.cr6.eq) goto loc_82200714;
	// lbz r11,1652(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822007bc
	if (!ctx.cr6.eq) goto loc_822007BC;
loc_82200714:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// bl 0x822d4b08
	ctx.lr = 0x82200720;
	sub_822D4B08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822007bc
	if (!ctx.cr6.gt) goto loc_822007BC;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27008);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82200774
	if (ctx.cr6.lt) goto loc_82200774;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f5,f8,f7,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bge cr6,0x822007bc
	if (!ctx.cr6.lt) goto loc_822007BC;
loc_82200774:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82200558
	ctx.lr = 0x82200784;
	sub_82200558(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,5188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5188);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f9,8(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822007BC:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f2,f11
	ctx.f2.f64 = double(float(sqrt(ctx.f11.f64)));
	// bl 0x823de9c8
	ctx.lr = 0x822007DC;
	sub_823DE9C8(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x8222fe20
	ctx.lr = 0x822007E4;
	sub_8222FE20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,12336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f0,5808(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7932(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7932);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmadds f9,f1,f0,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f8,0(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// bl 0x822da518
	ctx.lr = 0x82200820;
	sub_822DA518(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f7,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// li r3,3
	ctx.r3.s64 = 3;
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,6820(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6820);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f5,f7,f0,f6
	ctx.f5.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f6.f64)));
	// stfs f5,0(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fnmsubs f2,f3,f0,f4
	ctx.f2.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f4.f64)));
	// stfs f2,4(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f9,f10,f0,f11
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// lfs f13,14208(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14208);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f6,f8,f13,f5
	ctx.f6.f64 = double(float(-(ctx.f8.f64 * ctx.f13.f64 - ctx.f5.f64)));
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f4,f7,f13,f2
	ctx.f4.f64 = double(float(-(ctx.f7.f64 * ctx.f13.f64 - ctx.f2.f64)));
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fnmsubs f2,f5,f13,f9
	ctx.f2.f64 = double(float(-(ctx.f5.f64 * ctx.f13.f64 - ctx.f9.f64)));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f4,4(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82200658) {
	__imp__sub_82200658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822008A0) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8231f840
	ctx.lr = 0x82200904;
	sub_8231F840(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d9340
	ctx.lr = 0x82200910;
	sub_822D9340(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x822da518
	ctx.lr = 0x82200934;
	sub_822DA518(ctx, base);
	// lfs f8,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f2,f0,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f7,f2,f13,f3
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f1,f12,f10,f8
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f2,f12,f9,f7
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f7.f64));
	// bl 0x823de9c8
	ctx.lr = 0x82200980;
	sub_823DE9C8(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,12336(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,8(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_822008A0) {
	__imp__sub_822008A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822009AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822009AC) {
	__imp__sub_822009AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822009B0) {
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
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x822009D4;
	sub_82332AF8(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82200ab4
	if (!ctx.cr6.eq) goto loc_82200AB4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,112
	ctx.r10.s64 = 7340032;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822009f8
	if (!ctx.cr6.eq) goto loc_822009F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82200ab8
	goto loc_82200AB8;
loc_822009F8:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8231fd60
	ctx.lr = 0x82200A44;
	sub_8231FD60(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f10,8664(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8664);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f7,f13,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsqrts f11,f6
	ctx.f11.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x82200ab4
	if (ctx.cr6.lt) goto loc_82200AB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f10,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// lfs f11,25188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25188);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmadds f1,f8,f4,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f0,f7,f3,f1
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82200ab8
	if (ctx.cr6.gt) goto loc_82200AB8;
loc_82200AB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82200AB8:
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

PPC_WEAK_FUNC(sub_822009B0) {
	__imp__sub_822009B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82200AD8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82200AEC;
	sub_82332AF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// lwz r10,1000(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1000);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f12
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// bl 0x82332b28
	ctx.lr = 0x82200B14;
	sub_82332B28(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r27,r10,9624
	ctx.r27.s64 = ctx.r10.s64 + 9624;
	// addi r28,r11,26552
	ctx.r28.s64 = ctx.r11.s64 + 26552;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r8,44(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82200bc0
	if (!ctx.cr6.gt) goto loc_82200BC0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r26,r11,-25976
	ctx.r26.s64 = ctx.r11.s64 + -25976;
loc_82200B44:
	// lbz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82200bac
	if (ctx.cr6.eq) goto loc_82200BAC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// bl 0x821f2440
	ctx.lr = 0x82200B60;
	sub_821F2440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82200bac
	if (ctx.cr6.eq) goto loc_82200BAC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822aced0
	ctx.lr = 0x82200B70;
	sub_822ACED0(ctx, base);
	// lhz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82200b90
	if (ctx.cr6.eq) goto loc_82200B90;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// bl 0x82229b60
	ctx.lr = 0x82200B8C;
	sub_82229B60(ctx, base);
	// b 0x82200b94
	goto loc_82200B94;
loc_82200B90:
	// bl 0x822acd78
	ctx.lr = 0x82200B94;
	sub_822ACD78(ctx, base);
loc_82200B94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229b60
	ctx.lr = 0x82200B9C;
	sub_82229B60(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,90(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 90);
	// bl 0x82229da8
	ctx.lr = 0x82200BAC;
	sub_82229DA8(ctx, base);
loc_82200BAC:
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82200b44
	if (ctx.cr6.lt) goto loc_82200B44;
loc_82200BC0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82200AD0) {
	__imp__sub_82200AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82200BCC) {
	__imp__sub_82200BCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82200BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,7816
	ctx.r8.s64 = ctx.r11.s64 + 7816;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821fe6a8
	ctx.lr = 0x82200BF4;
	sub_821FE6A8(ctx, base);
	// lbz r10,41(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82200c48
	if (ctx.cr6.eq) goto loc_82200C48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d4b08
	ctx.lr = 0x82200C48;
	sub_822D4B08(ctx, base);
loc_82200C48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82200BD0) {
	__imp__sub_82200BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,27080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27080);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// fmadds f9,f13,f0,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmadds f1,f10,f11,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f9.f64));
	// beq cr6,0x82200c98
	if (ctx.cr6.eq) goto loc_82200C98;
	// lbz r11,1649(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1649);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82200c9c
	if (!ctx.cr6.eq) goto loc_82200C9C;
loc_82200C98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82200C9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82200cc4
	if (ctx.cr6.eq) goto loc_82200CC4;
	// fneg f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmadds f11,f13,f12,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f12,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f9.f64));
	// b 0x82200ce4
	goto loc_82200CE4;
loc_82200CC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,13216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13216);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmadds f11,f13,f12,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f12,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
loc_82200CE4:
	// stfs f8,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f7,f12,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f5,8(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82200C50) {
	__imp__sub_82200C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82200CFC) {
	__imp__sub_82200CFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82200D08;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f13,f9
	ctx.f13.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82200f1c
	if (!ctx.cr6.gt) goto loc_82200F1C;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82200f1c
	if (ctx.cr6.gt) goto loc_82200F1C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27080);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82200d80
	if (ctx.cr6.eq) goto loc_82200D80;
	// lbz r11,1649(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1649);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82200d84
	if (!ctx.cr6.eq) goto loc_82200D84;
loc_82200D80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82200D84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82200df4
	if (!ctx.cr6.eq) goto loc_82200DF4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,1092(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1092);
	// lwz r7,1096(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1096);
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,24(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r8,24
	ctx.r11.s64 = ctx.r8.s64 + 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfsx f10,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f7,f11,f31
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmadds f6,f8,f7,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fmuls f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f5,24(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// lfs f4,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// stfs f3,28(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lfs f2,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// stfs f1,32(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82200DF4:
	// addi r31,r8,24
	ctx.r31.s64 = ctx.r8.s64 + 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4b08
	ctx.lr = 0x82200E04;
	sub_822D4B08(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26060);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82200e24
	if (!ctx.cr6.gt) goto loc_82200E24;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27044);
	// b 0x82200e2c
	goto loc_82200E2C;
loc_82200E24:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27016);
loc_82200E2C:
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fabs f12,f31
	ctx.f12.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,13220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13220);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f5,8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bge cr6,0x82200eb0
	if (!ctx.cr6.lt) goto loc_82200EB0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82200e80
	if (ctx.cr6.eq) goto loc_82200E80;
	// stfs f1,0(r27)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_82200E80:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82200ea0
	if (ctx.cr6.eq) goto loc_82200EA0;
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
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f13,4(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f12,8(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
loc_82200EA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82200EB0:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,1096(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1096);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,27100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27100);
	// lfsx f10,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fnmsubs f6,f9,f13,f0
	ctx.f6.f64 = double(float(-(ctx.f9.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// fsel f5,f7,f8,f10
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f10.f64;
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fsel f3,f4,f6,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f6.f64 : ctx.f5.f64;
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fmadds f0,f12,f1,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f1,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f1,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f9.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82200F1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82200D00) {
	__imp__sub_82200D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82200F2C) {
	__imp__sub_82200F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82200F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82200F38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82276090
	ctx.lr = 0x82200F50;
	sub_82276090(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r9,r11,624
	ctx.r9.s64 = ctx.r11.s64 * 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// lbzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82200f78
	if (ctx.cr6.eq) goto loc_82200F78;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82200f7c
	if (!ctx.cr6.eq) goto loc_82200F7C;
loc_82200F78:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82200F7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82200fa0
	if (ctx.cr6.eq) goto loc_82200FA0;
	// lbz r11,1652(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1652);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82200FA0:
	// lwz r11,1080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1080);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82201074
	if (ctx.cr6.eq) goto loc_82201074;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82201074
	if (ctx.cr6.eq) goto loc_82201074;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82201028
	if (!ctx.cr6.eq) goto loc_82201028;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d4b08
	ctx.lr = 0x82200FC8;
	sub_822D4B08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82200ff0
	if (!ctx.cr6.gt) goto loc_82200FF0;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27008);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82201074
	if (ctx.cr6.lt) goto loc_82201074;
loc_82200FF0:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f5,f8,f7,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bgt cr6,0x82201074
	if (ctx.cr6.gt) goto loc_82201074;
loc_8220101C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82201028:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8220101c
	if (!ctx.cr6.gt) goto loc_8220101C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82201074
	if (!ctx.cr6.eq) goto loc_82201074;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,27008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27008);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f7,f10
	ctx.cr6.compare(ctx.f7.f64, ctx.f10.f64);
	// bge cr6,0x8220101c
	if (!ctx.cr6.lt) goto loc_8220101C;
loc_82201074:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82200F30) {
	__imp__sub_82200F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82201080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x82201088;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de020
	ctx.lr = 0x82201090;
	__savefpr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x822010A4;
	sub_82332AF8(ctx, base);
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342690
	ctx.lr = 0x822010BC;
	sub_82342690(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r21,r11,9624
	ctx.r21.s64 = ctx.r11.s64 + 9624;
	// srawi r9,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 20;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r11,56(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,52(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// clrlwi r24,r9,27
	ctx.r24.u64 = ctx.r9.u32 & 0x1F;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8231fd60
	ctx.lr = 0x8220111C;
	sub_8231FD60(ctx, base);
	// addi r25,r29,4
	ctx.r25.s64 = ctx.r29.s64 + 4;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82200c50
	ctx.lr = 0x82201138;
	sub_82200C50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x82276090
	ctx.lr = 0x82201148;
	sub_82276090(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r20,r11,26552
	ctx.r20.s64 = ctx.r11.s64 + 26552;
	// mulli r5,r6,624
	ctx.r5.s64 = ctx.r6.s64 * 624;
	// lbzx r11,r5,r20
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r20.u32);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// subfic r3,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r11.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 & ctx.r27.u64;
	// lfs f30,7036(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7036);
	ctx.f30.f64 = double(temp.f32);
	// clrlwi r27,r9,24
	ctx.r27.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822011cc
	if (ctx.cr6.eq) goto loc_822011CC;
	// lwz r11,1080(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1080);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822011a8
	if (ctx.cr6.eq) goto loc_822011A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822011a8
	if (ctx.cr6.eq) goto loc_822011A8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822011a8
	if (ctx.cr6.eq) goto loc_822011A8;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x822011cc
	if (!ctx.cr6.gt) goto loc_822011CC;
loc_822011A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82276090
	ctx.lr = 0x822011B0;
	sub_82276090(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r20,312
	ctx.r11.s64 = ctx.r20.s64 + 312;
	// sth r3,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r3.u16);
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// oris r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 2097152;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
loc_822011CC:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r8,r11,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f26,13220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13220);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
	// beq cr6,0x822016fc
	if (ctx.cr6.eq) goto loc_822016FC;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82200d00
	ctx.lr = 0x82201214;
	sub_82200D00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822014bc
	if (ctx.cr6.eq) goto loc_822014BC;
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x8220122C;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822014bc
	if (!ctx.cr6.eq) goto loc_822014BC;
	// bl 0x8222fe20
	ctx.lr = 0x8220123C;
	sub_8222FE20(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,27060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27060);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822012a8
	if (!ctx.cr6.lt) goto loc_822012A8;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,27000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27000);
	// lwz r10,26064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26064);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsel f8,f9,f10,f11
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// fmadds f7,f0,f8,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,0(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f6,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f8,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f4,4(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f3,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f8,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f3.f64));
	// stfs f1,8(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
loc_822012A8:
	// lfs f29,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f29,f26
	ctx.cr6.compare(ctx.f29.f64, ctx.f26.f64);
	// bge cr6,0x822014bc
	if (!ctx.cr6.lt) goto loc_822014BC;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x822014bc
	if (!ctx.cr6.gt) goto loc_822014BC;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f30,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,27028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27028);
	// lfs f13,12108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmadds f10,f11,f13,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f30.f64));
	// stfs f10,404(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x8220130c
	if (!ctx.cr6.gt) goto loc_8220130C;
loc_822012F4:
	// lfs f13,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,404(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822012f4
	if (ctx.cr6.gt) goto loc_822012F4;
loc_8220130C:
	// lfs f1,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823de720
	ctx.lr = 0x82201314;
	sub_823DE720(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de720
	ctx.lr = 0x82201320;
	sub_823DE720(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// fsubs f12,f28,f13
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// ble cr6,0x82201370
	if (!ctx.cr6.gt) goto loc_82201370;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,27076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27076);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f12,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f31.f64));
	// fdivs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f31.f64));
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f9,0(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f8,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f7,4(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f6,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f5,8(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
loc_82201370:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f13,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lwz r11,27036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27036);
	// fmuls f6,f8,f29
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f4,f5,f31,f30
	ctx.f4.f64 = double(float(-(ctx.f5.f64 * ctx.f31.f64 - ctx.f30.f64)));
	// fmsubs f28,f0,f8,f10
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 - ctx.f10.f64));
	// fmsubs f31,f11,f29,f7
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 - ctx.f7.f64));
	// fmsubs f29,f13,f9,f6
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f6.f64));
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fsel f0,f3,f27,f4
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f27.f64 : ctx.f4.f64;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82201464
	if (!ctx.cr6.gt) goto loc_82201464;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r10,27068(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27068);
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f6,f7,f29,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f13.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f5,f31,f7,f11
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f7.f64 + ctx.f11.f64));
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f4,f28,f7,f10
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f7.f64 + ctx.f10.f64));
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bne cr6,0x82201410
	if (!ctx.cr6.eq) goto loc_82201410;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_82201410:
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82200bd0
	ctx.lr = 0x82201424;
	sub_82200BD0(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f0,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f5,4(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fmadds f2,f3,f0,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82201464:
	// lfs f0,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bne cr6,0x82201484
	if (!ctx.cr6.eq) goto loc_82201484;
	// bl 0x8222fe20
	ctx.lr = 0x82201474;
	sub_8222FE20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f1,f0,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
loc_82201484:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,27020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27020);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f10,f11,f29,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f13.f64));
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f9,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f31,f11,f9
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f8,4(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f28,f11,f7
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f6,8(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
loc_822014BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822016fc
	if (ctx.cr6.eq) goto loc_822016FC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82200f30
	ctx.lr = 0x822014D4;
	sub_82200F30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822016fc
	if (ctx.cr6.eq) goto loc_822016FC;
	// lwz r11,1080(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1080);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 ^ 1;
	// addi r27,r10,2
	ctx.r27.s64 = ctx.r10.s64 + 2;
	// bne cr6,0x82201510
	if (!ctx.cr6.eq) goto loc_82201510;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822008a0
	ctx.lr = 0x8220150C;
	sub_822008A0(ctx, base);
	// b 0x8220158c
	goto loc_8220158C;
loc_82201510:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82201538
	if (!ctx.cr6.eq) goto loc_82201538;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200658
	ctx.lr = 0x82201530;
	sub_82200658(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8220158c
	goto loc_8220158C;
loc_82201538:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82201554
	if (!ctx.cr6.eq) goto loc_82201554;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200558
	ctx.lr = 0x82201550;
	sub_82200558(ctx, base);
	// b 0x8220158c
	goto loc_8220158C;
loc_82201554:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82201574
	if (ctx.cr6.eq) goto loc_82201574;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822002f8
	ctx.lr = 0x82201570;
	sub_822002F8(ctx, base);
	// b 0x8220158c
	goto loc_8220158C;
loc_82201574:
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8220158C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x82201598;
	sub_8222FB90(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x822015A4;
	sub_8222FBE8(ctx, base);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f13,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lfs f12,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,376(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// bl 0x82276090
	ctx.lr = 0x822015C4;
	sub_82276090(ctx, base);
	// lbz r11,1652(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 1652);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201634
	if (ctx.cr6.eq) goto loc_82201634;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822002a8
	ctx.lr = 0x822015DC;
	sub_822002A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201634
	if (ctx.cr6.eq) goto loc_82201634;
	// clrlwi r30,r28,16
	ctx.r30.u64 = ctx.r28.u32 & 0xFFFF;
	// lhz r5,36(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r11,r30,624
	ctx.r11.s64 = ctx.r30.s64 * 624;
	// add r4,r11,r20
	ctx.r4.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x82233ff0
	ctx.lr = 0x82201600;
	sub_82233FF0(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27024);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82201634
	if (ctx.cr6.eq) goto loc_82201634;
	// lhz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 36);
	// bl 0x822a13a0
	ctx.lr = 0x8220161C;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,12064
	ctx.r4.s64 = ctx.r11.s64 + 12064;
	// li r3,15
	ctx.r3.s64 = 15;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82280900
	ctx.lr = 0x82201634;
	sub_82280900(ctx, base);
loc_82201634:
	// lbz r11,1655(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 1655);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82201648
	if (!ctx.cr6.eq) goto loc_82201648;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// b 0x822016a0
	goto loc_822016A0;
loc_82201648:
	// lhz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8220165c
	if (!ctx.cr6.eq) goto loc_8220165C;
	// li r5,2047
	ctx.r5.s64 = 2047;
loc_8220165C:
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,52(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r3,15
	ctx.r3.s64 = 15;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r4,r8,12004
	ctx.r4.s64 = ctx.r8.s64 + 12004;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfs f0,5804(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82280a68
	ctx.lr = 0x822016A0;
	sub_82280A68(ctx, base);
loc_822016A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200ad0
	ctx.lr = 0x822016A8;
	sub_82200AD0(ctx, base);
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
	// beq cr6,0x822016cc
	if (ctx.cr6.eq) goto loc_822016CC;
	// cmplwi cr6,r11,2046
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2046, ctx.xer);
	// beq cr6,0x822016cc
	if (ctx.cr6.eq) goto loc_822016CC;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x82229b60
	ctx.lr = 0x822016C8;
	sub_82229B60(ctx, base);
	// b 0x822016d0
	goto loc_822016D0;
loc_822016CC:
	// bl 0x822acd78
	ctx.lr = 0x822016D0;
	sub_822ACD78(ctx, base);
loc_822016D0:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,100(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 100);
	// bl 0x82229da8
	ctx.lr = 0x822016E8;
	sub_82229DA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de06c
	ctx.lr = 0x822016F8;
	__restfpr_26(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_822016FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,6020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6020);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// ble cr6,0x82201728
	if (!ctx.cr6.gt) goto loc_82201728;
	// fmr f13,f27
	ctx.f13.f64 = ctx.f27.f64;
loc_82201728:
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82201760
	if (!ctx.cr6.eq) goto loc_82201760;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_82201760:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82200bd0
	ctx.lr = 0x82201774;
	sub_82200BD0(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f0,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f0,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f5,4(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fmadds f2,f3,f0,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r11,52(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82201840
	if (!ctx.cr6.eq) goto loc_82201840;
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f26
	ctx.cr6.compare(ctx.f6.f64, ctx.f26.f64);
	// ble cr6,0x82201840
	if (!ctx.cr6.gt) goto loc_82201840;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822002f8
	ctx.lr = 0x82201820;
	sub_822002F8(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,52(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82201840:
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82201848;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82201878
	if (!ctx.cr6.eq) goto loc_82201878;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82276090
	ctx.lr = 0x8220185C;
	sub_82276090(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821c5508
	ctx.lr = 0x82201878;
	sub_821C5508(ctx, base);
loc_82201878:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x822018c8
	if (!ctx.cr6.eq) goto loc_822018C8;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,-14540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x822018cc
	if (ctx.cr6.gt) goto loc_822018CC;
loc_822018C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822018CC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de06c
	ctx.lr = 0x822018D8;
	__restfpr_26(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82201080) {
	__imp__sub_82201080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822018DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822018DC) {
	__imp__sub_822018DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822018E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1040(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822018f4
	if (ctx.cr6.gt) goto loc_822018F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822018F4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,364(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822018E0) {
	__imp__sub_822018E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82201920) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82201934
	if (ctx.cr6.eq) goto loc_82201934;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82201934:
	// lwz r11,1120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1120);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82201920) {
	__imp__sub_82201920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82201948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26076);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82201964
	if (!ctx.cr6.eq) goto loc_82201964;
loc_8220195C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82201964:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82201978
	if (ctx.cr6.eq) goto loc_82201978;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82201988
	goto loc_82201988;
loc_82201978:
	// lwz r11,1120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1120);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82201988:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220195c
	if (ctx.cr6.eq) goto loc_8220195C;
	// lwz r11,436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82201948) {
	__imp__sub_82201948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822019A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822019A4) {
	__imp__sub_822019A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822019A8) {
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
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x822019C4;
	sub_82332AF8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lbz r10,291(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// mulli r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 * 44;
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822019f4
	if (!ctx.cr6.eq) goto loc_822019F4;
	// lwz r10,1060(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1060);
	// li r3,14
	ctx.r3.s64 = 14;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x822019f8
	if (ctx.cr6.eq) goto loc_822019F8;
loc_822019F4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_822019F8:
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

PPC_WEAK_FUNC(sub_822019A8) {
	__imp__sub_822019A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82201A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82201A0C) {
	__imp__sub_82201A0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82201A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x82201A18;
	__savegprlr_16(ctx, base);
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// bl 0x82276090
	ctx.lr = 0x82201A40;
	sub_82276090(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// addi r21,r11,26552
	ctx.r21.s64 = ctx.r11.s64 + 26552;
	// mulli r11,r10,624
	ctx.r11.s64 = ctx.r10.s64 * 624;
	// add r19,r11,r21
	ctx.r19.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x82332af8
	ctx.lr = 0x82201A5C;
	sub_82332AF8(ctx, base);
	// lwz r9,16(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lbz r18,1651(r3)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1651);
	// srawi r8,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 20;
	// lwz r16,1060(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1060);
	// lwz r22,560(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// stb r7,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r7.u8);
	// lwz r11,1040(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82201a90
	if (ctx.cr6.gt) goto loc_82201A90;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82201ab8
	goto loc_82201AB8;
loc_82201A90:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,364(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f13,192(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82201ab8
	if (!ctx.cr6.lt) goto loc_82201AB8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82201AB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82201b4c
	if (!ctx.cr6.eq) goto loc_82201B4C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26076);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82201ae0
	if (!ctx.cr6.eq) goto loc_82201AE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82201b1c
	goto loc_82201B1C;
loc_82201AE0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82201af4
	if (ctx.cr6.eq) goto loc_82201AF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82201b04
	goto loc_82201B04;
loc_82201AF4:
	// lwz r11,1120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1120);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82201B04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201b1c
	if (ctx.cr6.eq) goto loc_82201B1C;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82201B1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82201b4c
	if (!ctx.cr6.eq) goto loc_82201B4C;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82201b60
	if (ctx.cr6.eq) goto loc_82201B60;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lbz r10,291(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// mulli r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 * 44;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// lwzx r25,r9,r8
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x82201b64
	goto loc_82201B64;
loc_82201B4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r16,4
	ctx.r16.s64 = 4;
	// li r18,0
	ctx.r18.s64 = 0;
	// lfs f0,12184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
loc_82201B60:
	// li r25,15
	ctx.r25.s64 = 15;
loc_82201B64:
	// lhz r27,38(r23)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r23.u32 + 38);
	// cmpwi cr6,r25,15
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 15, ctx.xer);
	// bne cr6,0x82201b80
	if (!ctx.cr6.eq) goto loc_82201B80;
	// addi r11,r27,-19
	ctx.r11.s64 = ctx.r27.s64 + -19;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 & ctx.r27.u64;
loc_82201B80:
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82201bc0
	if (!ctx.cr6.eq) goto loc_82201BC0;
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201bc0
	if (ctx.cr6.eq) goto loc_82201BC0;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r10,r21,28
	ctx.r10.s64 = ctx.r21.s64 + 28;
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r11,-624
	ctx.r6.s64 = ctx.r11.s64 + -624;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r9,-624
	ctx.r3.s64 = ctx.r9.s64 + -624;
	// bl 0x821be3c0
	ctx.lr = 0x82201BC0;
	sub_821BE3C0(ctx, base);
loc_82201BC0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82201be4
	if (!ctx.cr6.eq) goto loc_82201BE4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x822d4b08
	ctx.lr = 0x82201BE0;
	sub_822D4B08(ctx, base);
	// b 0x82201bfc
	goto loc_82201BFC;
loc_82201BE4:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x8231fd60
	ctx.lr = 0x82201BFC;
	sub_8231FD60(ctx, base);
loc_82201BFC:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82201cf4
	if (ctx.cr6.eq) goto loc_82201CF4;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x82201cf4
	if (!ctx.cr6.eq) goto loc_82201CF4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822009b0
	ctx.lr = 0x82201C20;
	sub_822009B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82201cf4
	if (!ctx.cr6.eq) goto loc_82201CF4;
	// lwz r11,272(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201c54
	if (ctx.cr6.eq) goto loc_82201C54;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82201c54
	if (!ctx.cr6.eq) goto loc_82201C54;
	// cmpwi cr6,r27,19
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 19, ctx.xer);
	// lis r11,464
	ctx.r11.s64 = 30408704;
	// beq cr6,0x82201c50
	if (ctx.cr6.eq) goto loc_82201C50;
	// lis r11,112
	ctx.r11.s64 = 7340032;
loc_82201C50:
	// stw r11,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r11.u32);
loc_82201C54:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201080
	ctx.lr = 0x82201C60;
	sub_82201080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82201cb8
	if (ctx.cr6.eq) goto loc_82201CB8;
	// lbz r11,41(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 41);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82201cb8
	if (!ctx.cr6.eq) goto loc_82201CB8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82201c8c
	if (!ctx.cr6.eq) goto loc_82201C8C;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x822d4700
	ctx.lr = 0x82201C84;
	sub_822D4700(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// b 0x82201cac
	goto loc_82201CAC;
loc_82201C8C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bne cr6,0x82201ca4
	if (!ctx.cr6.eq) goto loc_82201CA4;
	// bl 0x822d4700
	ctx.lr = 0x82201C9C;
	sub_822D4700(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x82201cac
	goto loc_82201CAC;
loc_82201CA4:
	// bl 0x822d4700
	ctx.lr = 0x82201CA8;
	sub_822D4700(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
loc_82201CAC:
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f978
	ctx.lr = 0x82201CB8;
	sub_8222F978(ctx, base);
loc_82201CB8:
	// lwz r11,1040(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82201cf0
	if (!ctx.cr6.gt) goto loc_82201CF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82201cf0
	if (!ctx.cr6.eq) goto loc_82201CF0;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x822d4700
	ctx.lr = 0x82201CD8;
	sub_822D4700(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f978
	ctx.lr = 0x82201CE8;
	sub_8222F978(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f968
	ctx.lr = 0x82201CF0;
	sub_8222F968(ctx, base);
loc_82201CF0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82201CF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,289(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 289);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82201f08
	if (ctx.cr6.eq) goto loc_82201F08;
	// cmpwi cr6,r27,19
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 19, ctx.xer);
	// bne cr6,0x82201d18
	if (!ctx.cr6.eq) goto loc_82201D18;
	// cmpwi cr6,r25,15
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 15, ctx.xer);
	// beq cr6,0x82201f08
	if (ctx.cr6.eq) goto loc_82201F08;
loc_82201D18:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82201f08
	if (ctx.cr6.eq) goto loc_82201F08;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r27,19
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 19, ctx.xer);
	// bne cr6,0x82201de0
	if (!ctx.cr6.eq) goto loc_82201DE0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822323a0
	ctx.lr = 0x82201D38;
	sub_822323A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201de0
	if (ctx.cr6.eq) goto loc_82201DE0;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d4b08
	ctx.lr = 0x82201D50;
	sub_822D4B08(ctx, base);
	// lfs f0,308(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lwz r11,11184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11184);
	// fmadds f31,f8,f9,f7
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f7.f64));
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82201da4
	if (ctx.cr6.eq) goto loc_82201DA4;
	// stfd f31,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12124
	ctx.r4.s64 = ctx.r11.s64 + 12124;
	// bl 0x82280900
	ctx.lr = 0x82201DA4;
	sub_82280900(ctx, base);
loc_82201DA4:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,27104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82201ddc
	if (!ctx.cr6.lt) goto loc_82201DDC;
	// lbz r11,1623(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1623);
	// li r29,32
	ctx.r29.s64 = 32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201dc8
	if (ctx.cr6.eq) goto loc_82201DC8;
	// li r29,96
	ctx.r29.s64 = 96;
loc_82201DC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8222f978
	ctx.lr = 0x82201DD8;
	sub_8222F978(ctx, base);
	// b 0x82201de0
	goto loc_82201DE0;
loc_82201DDC:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82201DE0:
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201dfc
	if (ctx.cr6.eq) goto loc_82201DFC;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r4,r11,-624
	ctx.r4.s64 = ctx.r11.s64 + -624;
	// b 0x82201e04
	goto loc_82201E04;
loc_82201DFC:
	// addis r11,r21,19
	ctx.r11.s64 = ctx.r21.s64 + 1245184;
	// addi r4,r11,32144
	ctx.r4.s64 = ctx.r11.s64 + 32144;
loc_82201E04:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82231be8
	ctx.lr = 0x82201E0C;
	sub_82231BE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82201e18
	if (ctx.cr6.eq) goto loc_82201E18;
	// li r20,1
	ctx.r20.s64 = 1;
loc_82201E18:
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrts f0,f9
	ctx.f0.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82201e48
	if (!ctx.cr6.eq) goto loc_82201E48;
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_82201E48:
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82201e68
	if (!ctx.cr6.eq) goto loc_82201E68;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11236);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82201f08
	if (!ctx.cr6.gt) goto loc_82201F08;
loc_82201E68:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201e88
	if (ctx.cr6.eq) goto loc_82201E88;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82201e88
	if (ctx.cr6.eq) goto loc_82201E88;
	// lwz r11,1008(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1008);
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// b 0x82201e8c
	goto loc_82201E8C;
loc_82201E88:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_82201E8C:
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201ea8
	if (ctx.cr6.eq) goto loc_82201EA8;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r5,r11,-624
	ctx.r5.s64 = ctx.r11.s64 + -624;
	// b 0x82201eac
	goto loc_82201EAC;
loc_82201EA8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82201EAC:
	// lhz r4,34(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 34);
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lhz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 36);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x821f1080
	ctx.lr = 0x82201EE8;
	sub_821F1080(ctx, base);
	// lwz r3,276(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82201f08
	if (ctx.cr6.eq) goto loc_82201F08;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x8234a978
	ctx.lr = 0x82201F08;
	sub_8234A978(ctx, base);
loc_82201F08:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82202504
	if (ctx.cr6.eq) goto loc_82202504;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82201f58
	if (ctx.cr6.eq) goto loc_82201F58;
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201f38
	if (ctx.cr6.eq) goto loc_82201F38;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// b 0x82201f40
	goto loc_82201F40;
loc_82201F38:
	// addis r11,r21,19
	ctx.r11.s64 = ctx.r21.s64 + 1245184;
	// addi r3,r11,31520
	ctx.r3.s64 = ctx.r11.s64 + 31520;
loc_82201F40:
	// addi r5,r31,232
	ctx.r5.s64 = ctx.r31.s64 + 232;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8222d808
	ctx.lr = 0x82201F58;
	sub_8222D808(ctx, base);
loc_82201F58:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82201f70
	if (!ctx.cr6.eq) goto loc_82201F70;
	// lhz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201f74
	if (ctx.cr6.eq) goto loc_82201F74;
loc_82201F70:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82201F74:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82342690
	ctx.lr = 0x82201F88;
	sub_82342690(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r27,r11,-9672
	ctx.r27.s64 = ctx.r11.s64 + -9672;
	// subfe r11,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8220207c
	if (ctx.cr6.eq) goto loc_8220207C;
	// lfs f13,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lfs f0,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r8,32
	ctx.r8.s64 = 32;
	// lfs f12,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,27040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27040);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x82201FEC;
	sub_821FE618(ctx, base);
	// lbz r9,297(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 297);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8220205c
	if (!ctx.cr6.eq) goto loc_8220205C;
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x8220205c
	if (!ctx.cr6.lt) goto loc_8220205C;
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f7,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f4,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f2.f64 = double(temp.f32);
	// stfs f4,216(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f3,220(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f2,224(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmadds f1,f8,f0,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f1,232(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmadds f13,f6,f0,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,236(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fmadds f12,f5,f0,f11
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f12,240(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// b 0x82202060
	goto loc_82202060;
loc_8220205C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82202060:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8220207c
	if (ctx.cr6.eq) goto loc_8220207C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220207c
	if (ctx.cr6.eq) goto loc_8220207C;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// b 0x822020f8
	goto loc_822020F8;
loc_8220207C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822020dc
	if (!ctx.cr6.eq) goto loc_822020DC;
	// lwz r11,1120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822020dc
	if (!ctx.cr6.eq) goto loc_822020DC;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822020dc
	if (!ctx.cr6.eq) goto loc_822020DC;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822020dc
	if (ctx.cr6.eq) goto loc_822020DC;
	// lhz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822020dc
	if (ctx.cr6.eq) goto loc_822020DC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x822020dc
	if (!ctx.cr6.eq) goto loc_822020DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,12112
	ctx.r3.s64 = ctx.r11.s64 + 12112;
	// b 0x822020f8
	goto loc_822020F8;
loc_822020DC:
	// lbz r11,1650(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1650);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822020f4
	if (ctx.cr6.eq) goto loc_822020F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,12112
	ctx.r3.s64 = ctx.r11.s64 + 12112;
	// b 0x822020f8
	goto loc_822020F8;
loc_822020F4:
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
loc_822020F8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82202118
	if (ctx.cr6.eq) goto loc_82202118;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82202118
	if (!ctx.cr6.eq) goto loc_82202118;
loc_8220210C:
	// bl 0x822d4700
	ctx.lr = 0x82202110;
	sub_822D4700(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x822021fc
	goto loc_822021FC;
loc_82202118:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x822021f4
	if (ctx.cr6.eq) goto loc_822021F4;
	// cmpwi cr6,r16,6
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 6, ctx.xer);
	// beq cr6,0x822021f4
	if (ctx.cr6.eq) goto loc_822021F4;
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// bne cr6,0x82202148
	if (!ctx.cr6.eq) goto loc_82202148;
	// bl 0x822d4700
	ctx.lr = 0x82202134;
	sub_822D4700(ctx, base);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r4,r11,66
	ctx.r4.s64 = ctx.r11.s64 + 66;
	// b 0x822021fc
	goto loc_822021FC;
loc_82202148:
	// cmpwi cr6,r16,3
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 3, ctx.xer);
	// bne cr6,0x82202168
	if (!ctx.cr6.eq) goto loc_82202168;
	// bl 0x822d4700
	ctx.lr = 0x82202154;
	sub_822D4700(ctx, base);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r4,r11,69
	ctx.r4.s64 = ctx.r11.s64 + 69;
	// b 0x822021fc
	goto loc_822021FC;
loc_82202168:
	// cmpwi cr6,r16,2
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 2, ctx.xer);
	// bne cr6,0x8220217c
	if (!ctx.cr6.eq) goto loc_8220217C;
	// bl 0x822d4700
	ctx.lr = 0x82202174;
	sub_822D4700(ctx, base);
	// li r4,68
	ctx.r4.s64 = 68;
	// b 0x822021fc
	goto loc_822021FC;
loc_8220217C:
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// bne cr6,0x82202208
	if (!ctx.cr6.eq) goto loc_82202208;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82202198
	if (ctx.cr6.eq) goto loc_82202198;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822021a8
	goto loc_822021A8;
loc_82202198:
	// lwz r11,1120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1120);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_822021A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220210c
	if (ctx.cr6.eq) goto loc_8220210C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x822d4b08
	ctx.lr = 0x822021C0;
	sub_822D4B08(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x822d4700
	ctx.lr = 0x822021EC;
	sub_822D4700(ctx, base);
	// li r4,73
	ctx.r4.s64 = 73;
	// b 0x822021fc
	goto loc_822021FC;
loc_822021F4:
	// bl 0x822d4700
	ctx.lr = 0x822021F8;
	sub_822D4700(ctx, base);
	// li r4,63
	ctx.r4.s64 = 63;
loc_822021FC:
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f978
	ctx.lr = 0x82202208;
	sub_8222F978(ctx, base);
loc_82202208:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82202218
	if (ctx.cr6.eq) goto loc_82202218;
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x82202224
	goto loc_82202224;
loc_82202218:
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// srawi r10,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 20;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
loc_82202224:
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,46(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 46);
	// bl 0x82229da8
	ctx.lr = 0x82202240;
	sub_82229DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f968
	ctx.lr = 0x82202248;
	sub_8222F968(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,48
	ctx.r9.u64 = ctx.r10.u64 | 48;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// xori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 ^ 2;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// beq cr6,0x82202278
	if (ctx.cr6.eq) goto loc_82202278;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220227c
	if (!ctx.cr6.eq) goto loc_8220227C;
loc_82202278:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8220227C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x82202284;
	sub_8222FB90(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82202498
	if (ctx.cr6.eq) goto loc_82202498;
	// lbz r11,1623(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1623);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822022a8
	if (ctx.cr6.eq) goto loc_822022A8;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26068);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822022ac
	goto loc_822022AC;
loc_822022A8:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_822022AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// lfs f13,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x822022e8
	if (!ctx.cr6.gt) goto loc_822022E8;
	// lfs f12,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f13,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x82202318
	goto loc_82202318;
loc_822022E8:
	// fmuls f7,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f12,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f4,f10,f7,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f8.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f3,f9,f7,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82202318:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r8,316(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x821fe618
	ctx.lr = 0x82202334;
	sub_821FE618(ctx, base);
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f12,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fmadds f3,f7,f9,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f3,0(r24)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// fmadds f2,f5,f9,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f13.f64));
	// stfs f2,4(r24)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// fmadds f1,f4,f9,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f1,8(r24)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x82202380;
	sub_822AD078(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,70(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 70);
	// bl 0x82229da8
	ctx.lr = 0x82202390;
	sub_82229DA8(ctx, base);
	// lwz r11,1008(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82202498
	if (ctx.cr6.eq) goto loc_82202498;
	// lhz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82202498
	if (ctx.cr6.eq) goto loc_82202498;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822019a8
	ctx.lr = 0x822023B0;
	sub_822019A8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1016(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1016);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823de800
	ctx.lr = 0x822023C8;
	sub_823DE800(ctx, base);
	// lwz r10,1000(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1000);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,1012(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1012);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,1008(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1008);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// lfs f12,1016(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1016);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f0,5812(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lhz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 324);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// lfs f0,2424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fsel f4,f10,f0,f11
	ctx.f4.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r5,r11,-624
	ctx.r5.s64 = ctx.r11.s64 + -624;
	// lfd f9,192(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// lfd f8,184(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfd f6,176(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// fcfid f1,f6
	ctx.f1.f64 = double(ctx.f6.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x821f2970
	ctx.lr = 0x82202460;
	sub_821F2970(ctx, base);
	// lwz r3,1000(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1000);
	// bl 0x822acbf8
	ctx.lr = 0x82202468;
	sub_822ACBF8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822ad078
	ctx.lr = 0x82202470;
	sub_822AD078(ctx, base);
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332b28
	ctx.lr = 0x82202478;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x8220247C;
	sub_822ACED0(ctx, base);
	// lhz r8,324(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 324);
	// li r5,3
	ctx.r5.s64 = 3;
	// lhz r4,136(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 136);
	// mulli r11,r8,624
	ctx.r11.s64 = ctx.r8.s64 * 624;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// bl 0x82229da8
	ctx.lr = 0x82202498;
	sub_82229DA8(ctx, base);
loc_82202498:
	// cmpwi cr6,r16,2
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 2, ctx.xer);
	// bne cr6,0x822024fc
	if (!ctx.cr6.eq) goto loc_822024FC;
	// lhz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822024bc
	if (ctx.cr6.eq) goto loc_822024BC;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r6,r11,-624
	ctx.r6.s64 = ctx.r11.s64 + -624;
	// b 0x822024c0
	goto loc_822024C0;
loc_822024BC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_822024C0:
	// lwz r10,1004(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1004);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,1000(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1000);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r7,380(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r9,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// lfd f12,184(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x821f2880
	ctx.lr = 0x822024FC;
	sub_821F2880(ctx, base);
loc_822024FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x82202504;
	sub_82340D30(ctx, base);
loc_82202504:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82201A10) {
	__imp__sub_82201A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82202514) {
	__imp__sub_82202514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x82202520;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// bl 0x82332af8
	ctx.lr = 0x82202540;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822025a4
	if (!ctx.cr6.eq) goto loc_822025A4;
	// lhz r11,130(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 130);
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
	// bne cr6,0x822025a4
	if (!ctx.cr6.eq) goto loc_822025A4;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// ori r7,r9,60000
	ctx.r7.u64 = ctx.r9.u64 | 60000;
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82202590
	if (!ctx.cr6.gt) goto loc_82202590;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,46(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 46);
	// b 0x82202ad8
	goto loc_82202AD8;
loc_82202590:
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_822025A4:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r26,r11,26552
	ctx.r26.s64 = ctx.r11.s64 + 26552;
	// lhz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 348);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// addi r22,r10,-25976
	ctx.r22.s64 = ctx.r10.s64 + -25976;
	// addi r25,r9,9624
	ctx.r25.s64 = ctx.r9.s64 + 9624;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82202658
	if (ctx.cr6.eq) goto loc_82202658;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r26,268
	ctx.r11.s64 = ctx.r26.s64 + 268;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,-624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -624);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82202658
	if (ctx.cr6.eq) goto loc_82202658;
	// lbz r11,174(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 174);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82202658
	if (ctx.cr6.eq) goto loc_82202658;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lhz r4,530(r22)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r22.u32 + 530);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r10,-624
	ctx.r3.s64 = ctx.r10.s64 + -624;
	// bl 0x8222f0a8
	ctx.lr = 0x82202604;
	sub_8222F0A8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x82202610;
	sub_8222FB90(ctx, base);
	// lbz r11,174(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 174);
	// lhz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 348);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lbz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// mulli r11,r10,624
	ctx.r11.s64 = ctx.r10.s64 * 624;
	// stb r9,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r9.u8);
	// lwz r7,472(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 472);
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r30,r11,-624
	ctx.r30.s64 = ctx.r11.s64 + -624;
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lhz r29,530(r22)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r22.u32 + 530);
	// bl 0x82300a60
	ctx.lr = 0x82202644;
	sub_82300A60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822300e0
	ctx.lr = 0x82202654;
	sub_822300E0(ctx, base);
	// b 0x82202674
	goto loc_82202674;
loc_82202658:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8231f840
	ctx.lr = 0x82202668;
	sub_8231F840(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x82202674;
	sub_8222FB90(ctx, base);
loc_82202674:
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82202688
	if (!ctx.cr6.eq) goto loc_82202688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c40b8
	ctx.lr = 0x82202688;
	sub_821C40B8(ctx, base);
loc_82202688:
	// addi r29,r31,232
	ctx.r29.s64 = ctx.r31.s64 + 232;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82342690
	ctx.lr = 0x822026A0;
	sub_82342690(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r24,0
	ctx.r24.s64 = 0;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82202780
	if (ctx.cr6.eq) goto loc_82202780;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r6,r10,-9672
	ctx.r6.s64 = ctx.r10.s64 + -9672;
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,27040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27040);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x82202704;
	sub_821FE618(ctx, base);
	// lbz r8,265(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 265);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8220277c
	if (!ctx.cr6.eq) goto loc_8220277C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8220277c
	if (!ctx.cr6.lt) goto loc_8220277C;
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f4,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f3,180(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f2,184(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmadds f1,f8,f0,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f1,160(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f13,f6,f0,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f12,f5,f0,f11
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// b 0x82202780
	goto loc_82202780;
loc_8220277C:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82202780:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r10,r11,48
	ctx.r10.u64 = ctx.r11.u64 | 48;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x822ad078
	ctx.lr = 0x82202794;
	sub_822AD078(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,70(r22)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r22.u32 + 70);
	// bl 0x82229da8
	ctx.lr = 0x822027A4;
	sub_82229DA8(ctx, base);
	// clrlwi r23,r30,24
	ctx.r23.u64 = ctx.r30.u32 & 0xFF;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82202974
	if (ctx.cr6.eq) goto loc_82202974;
	// bl 0x8222f3a8
	ctx.lr = 0x822027B8;
	sub_8222F3A8(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r24.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lhz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// sth r10,124(r3)
	PPC_STORE_U16(ctx.r3.u32 + 124, ctx.r10.u16);
	// lbz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// stb r9,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r9.u8);
	// stw r24,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r24.u32);
	// beq cr6,0x822027fc
	if (ctx.cr6.eq) goto loc_822027FC;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x8222fb90
	ctx.lr = 0x822027EC;
	sub_8222FB90(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// b 0x822028d0
	goto loc_822028D0;
loc_822027FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8222fb90
	ctx.lr = 0x82202804;
	sub_8222FB90(ctx, base);
	// lwz r11,1080(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1080);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82202820
	if (ctx.cr6.eq) goto loc_82202820;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82202820
	if (ctx.cr6.eq) goto loc_82202820;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82202868
	if (!ctx.cr6.eq) goto loc_82202868;
loc_82202820:
	// lhz r11,130(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 130);
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
	// beq cr6,0x82202868
	if (ctx.cr6.eq) goto loc_82202868;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,6056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f7,f13,f0,f12
	ctx.f7.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// fnmsubs f6,f11,f0,f10
	ctx.f6.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fnmsubs f5,f9,f0,f8
	ctx.f5.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f8.f64)));
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// b 0x8220288c
	goto loc_8220288C;
loc_82202868:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,6056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_8220288C:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lhz r6,126(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82200bd0
	ctx.lr = 0x822028A4;
	sub_82200BD0(ctx, base);
	// lbz r11,1650(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1650);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822028bc
	if (ctx.cr6.eq) goto loc_822028BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,12112
	ctx.r3.s64 = ctx.r11.s64 + 12112;
	// b 0x822028c0
	goto loc_822028C0;
loc_822028BC:
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
loc_822028C0:
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// srawi r10,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 20;
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
loc_822028D0:
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x822028fc
	if (!ctx.cr6.eq) goto loc_822028FC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822d4700
	ctx.lr = 0x822028E0;
	sub_822D4700(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,74
	ctx.r4.s64 = 74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222f978
	ctx.lr = 0x822028F0;
	sub_8222F978(ctx, base);
	// lhz r11,126(r20)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + 126);
	// sth r11,128(r30)
	PPC_STORE_U16(ctx.r30.u32 + 128, ctx.r11.u16);
	// b 0x8220296c
	goto loc_8220296C;
loc_822028FC:
	// lwz r11,1060(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1060);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82202958
	if (ctx.cr6.eq) goto loc_82202958;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82202958
	if (ctx.cr6.eq) goto loc_82202958;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82202924
	if (!ctx.cr6.eq) goto loc_82202924;
	// bl 0x822d4700
	ctx.lr = 0x8220291C;
	sub_822D4700(ctx, base);
	// li r4,66
	ctx.r4.s64 = 66;
	// b 0x82202960
	goto loc_82202960;
loc_82202924:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82202938
	if (!ctx.cr6.eq) goto loc_82202938;
	// bl 0x822d4700
	ctx.lr = 0x82202930;
	sub_822D4700(ctx, base);
	// li r4,68
	ctx.r4.s64 = 68;
	// b 0x82202960
	goto loc_82202960;
loc_82202938:
	// bl 0x822d4700
	ctx.lr = 0x8220293C;
	sub_822D4700(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,69
	ctx.r4.s64 = 69;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222f978
	ctx.lr = 0x8220294C;
	sub_8222F978(ctx, base);
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// b 0x8220296c
	goto loc_8220296C;
loc_82202958:
	// bl 0x822d4700
	ctx.lr = 0x8220295C;
	sub_822D4700(ctx, base);
	// li r4,63
	ctx.r4.s64 = 63;
loc_82202960:
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222f978
	ctx.lr = 0x8220296C;
	sub_8222F978(ctx, base);
loc_8220296C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222f968
	ctx.lr = 0x82202974;
	sub_8222F968(ctx, base);
loc_82202974:
	// lwz r11,1008(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82202a5c
	if (ctx.cr6.eq) goto loc_82202A5C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1016(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1016);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823de800
	ctx.lr = 0x82202994;
	sub_823DE800(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,1016(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1016);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lfs f0,5812(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,2424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fsel f31,f10,f0,f11
	ctx.f31.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// bl 0x822da518
	ctx.lr = 0x822029C8;
	sub_822DA518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822019a8
	ctx.lr = 0x822029D0;
	sub_822019A8(ctx, base);
	// lhz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822029ec
	if (ctx.cr6.eq) goto loc_822029EC;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r5,r11,-624
	ctx.r5.s64 = ctx.r11.s64 + -624;
	// b 0x822029f0
	goto loc_822029F0;
loc_822029EC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_822029F0:
	// lwz r8,1000(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1000);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,1008(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1008);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lwz r4,1012(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1012);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f12,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// frsp f3,f10
	ctx.f3.f64 = double(float(ctx.f10.f64));
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x821f2970
	ctx.lr = 0x82202A5C;
	sub_821F2970(ctx, base);
loc_82202A5C:
	// lwz r11,1060(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1060);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82202ac4
	if (!ctx.cr6.eq) goto loc_82202AC4;
	// lhz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82202a84
	if (ctx.cr6.eq) goto loc_82202A84;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r6,r11,-624
	ctx.r6.s64 = ctx.r11.s64 + -624;
	// b 0x82202a88
	goto loc_82202A88;
loc_82202A84:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_82202A88:
	// lwz r11,1004(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1004);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,1000(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1000);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r7,380(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// bl 0x821f2880
	ctx.lr = 0x82202AC4;
	sub_821F2880(ctx, base);
loc_82202AC4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82202ad4
	if (ctx.cr6.eq) goto loc_82202AD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82340d30
	ctx.lr = 0x82202AD4;
	sub_82340D30(ctx, base);
loc_82202AD4:
	// lhz r4,46(r22)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r22.u32 + 46);
loc_82202AD8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229da8
	ctx.lr = 0x82202AE4;
	sub_82229DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f680
	ctx.lr = 0x82202AEC;
	sub_8222F680(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82202518) {
	__imp__sub_82202518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202AF8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82202518
	sub_82202518(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82202AF8) {
	__imp__sub_82202AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82202B10;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82276090
	ctx.lr = 0x82202B30;
	sub_82276090(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,2046
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2046, ctx.xer);
	// blt cr6,0x82202cb8
	if (ctx.cr6.lt) goto loc_82202CB8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82276118
	ctx.lr = 0x82202B44;
	sub_82276118(ctx, base);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82202dc0
	if (ctx.cr6.eq) goto loc_82202DC0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82202bac
	if (!ctx.cr6.eq) goto loc_82202BAC;
	// lfs f13,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f11,11388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11388);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f7,f13,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmuls f0,f6,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// b 0x82202bd8
	goto loc_82202BD8;
loc_82202BAC:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x8231fd60
	ctx.lr = 0x82202BC0;
	sub_8231FD60(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f13,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
loc_82202BD8:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26084);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82202dc0
	if (ctx.cr6.lt) goto loc_82202DC0;
	// clrlwi r31,r26,24
	ctx.r31.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82202c60
	if (!ctx.cr6.eq) goto loc_82202C60;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d4b08
	ctx.lr = 0x82202C08;
	sub_822D4B08(ctx, base);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f12,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f11,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r27,-1
	ctx.r3.s64 = ctx.r27.s64 + -1;
	// lfs f10,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f8,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f5,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f9,f5,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f0.f64));
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f3,f7,f5,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f2,f6,f5,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f12.f64));
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x821f3dc0
	ctx.lr = 0x82202C58;
	sub_821F3DC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82202c70
	if (ctx.cr6.eq) goto loc_82202C70;
loc_82202C60:
	// addi r3,r27,-1
	ctx.r3.s64 = ctx.r27.s64 + -1;
	// bl 0x821f4120
	ctx.lr = 0x82202C68;
	sub_821F4120(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82202c74
	goto loc_82202C74;
loc_82202C70:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82202C74:
	// lhz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82202c88
	if (!ctx.cr6.eq) goto loc_82202C88;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_82202C88:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r7,316(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82200bd0
	ctx.lr = 0x82202C9C;
	sub_82200BD0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82202dc0
	if (ctx.cr6.eq) goto loc_82202DC0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,-1
	ctx.r3.s64 = ctx.r27.s64 + -1;
	// bl 0x821f4150
	ctx.lr = 0x82202CB0;
	sub_821F4150(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82202CB8:
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r29,r10,26552
	ctx.r29.s64 = ctx.r10.s64 + 26552;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,289(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 289);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82202dc0
	if (ctx.cr6.eq) goto loc_82202DC0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82202dc0
	if (ctx.cr6.eq) goto loc_82202DC0;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x8231fd60
	ctx.lr = 0x82202CF4;
	sub_8231FD60(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// blt cr6,0x82202dc0
	if (ctx.cr6.lt) goto loc_82202DC0;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82202d88
	if (!ctx.cr6.eq) goto loc_82202D88;
	// lhz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82202d44
	if (ctx.cr6.eq) goto loc_82202D44;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r5,r11,-624
	ctx.r5.s64 = ctx.r11.s64 + -624;
	// b 0x82202d48
	goto loc_82202D48;
loc_82202D44:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82202D48:
	// lhz r3,34(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 34);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lhz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 36);
	// li r10,15
	ctx.r10.s64 = 15;
	// lhz r29,38(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 38);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r27,124(r30)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// addi r7,r30,232
	ctx.r7.s64 = ctx.r30.s64 + 232;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x821f1080
	ctx.lr = 0x82202D88;
	sub_821F1080(ctx, base);
loc_82202D88:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,204(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lhz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82202da8
	if (!ctx.cr6.eq) goto loc_82202DA8;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_82202DA8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r7,316(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82200bd0
	ctx.lr = 0x82202DBC;
	sub_82200BD0(ctx, base);
	// stw r29,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r29.u32);
loc_82202DC0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82202B08) {
	__imp__sub_82202B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82202DC8) {
	__imp__sub_82202DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82202DCC) {
	__imp__sub_82202DCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r5,896
	ctx.r5.s64 = 896;
	// addi r3,r11,26088
	ctx.r3.s64 = ctx.r11.s64 + 26088;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82202DD0) {
	__imp__sub_82202DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82202DE4) {
	__imp__sub_82202DE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r10,r11,26088
	ctx.r10.s64 = ctx.r11.s64 + 26088;
loc_82202DF4:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82202e34
	if (ctx.cr6.eq) goto loc_82202E34;
	// lhz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82202e1c
	if (ctx.cr6.eq) goto loc_82202E1C;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82202e34
	if (!ctx.cr6.eq) goto loc_82202E34;
loc_82202E1C:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82202E2C:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82202e2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82202E2C;
loc_82202E34:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// bne 0x82202df4
	if (!ctx.cr0.eq) goto loc_82202DF4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82202DE8) {
	__imp__sub_82202DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82202E44) {
	__imp__sub_82202E44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82202E50;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,32
	ctx.r29.s64 = 32;
	// addi r31,r11,26088
	ctx.r31.s64 = ctx.r11.s64 + 26088;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82202E6C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82202e8c
	if (!ctx.cr6.eq) goto loc_82202E8C;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// b 0x82202ea0
	goto loc_82202EA0;
loc_82202E8C:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// bl 0x822e40f0
	ctx.lr = 0x82202E94;
	sub_822E40F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82202EA0:
	// bl 0x822e40f0
	ctx.lr = 0x82202EA4;
	sub_822E40F0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x82202e6c
	if (!ctx.cr0.eq) goto loc_82202E6C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82202E48) {
	__imp__sub_82202E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82202EC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,26088
	ctx.r31.s64 = ctx.r11.s64 + 26088;
	// li r5,896
	ctx.r5.s64 = 896;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x82202EE0;
	sub_823DE090(ctx, base);
	// li r30,32
	ctx.r30.s64 = 32;
loc_82202EE4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e4480
	ctx.lr = 0x82202EF4;
	sub_822E4480(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82202f10
	if (ctx.cr6.eq) goto loc_82202F10;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e4480
	ctx.lr = 0x82202F10;
	sub_822E4480(ctx, base);
loc_82202F10:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x82202ee4
	if (!ctx.cr0.eq) goto loc_82202EE4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82202EB8) {
	__imp__sub_82202EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82202F24) {
	__imp__sub_82202F24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202F28) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,26088
	ctx.r11.s64 = ctx.r11.s64 + 26088;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
loc_82202F4C:
	// lbz r8,-28(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82202fa8
	if (ctx.cr6.eq) goto loc_82202FA8;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82202f94
	if (ctx.cr6.eq) goto loc_82202F94;
	// lbz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82202f9c
	if (ctx.cr6.eq) goto loc_82202F9C;
	// lbz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82202fa4
	if (ctx.cr6.eq) goto loc_82202FA4;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmplwi cr6,r10,896
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 896, ctx.xer);
	// blt cr6,0x82202f4c
	if (ctx.cr6.lt) goto loc_82202F4C;
	// b 0x82202fa8
	goto loc_82202FA8;
loc_82202F94:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82202fa8
	goto loc_82202FA8;
loc_82202F9C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82202fa8
	goto loc_82202FA8;
loc_82202FA4:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
loc_82202FA8:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bne cr6,0x82202fc4
	if (!ctx.cr6.eq) goto loc_82202FC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,12188
	ctx.r3.s64 = ctx.r11.s64 + 12188;
	// bl 0x822e84f0
	ctx.lr = 0x82202FC0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82202FC4;
	sub_822AD350(ctx, base);
loc_82202FC4:
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

PPC_WEAK_FUNC(sub_82202F28) {
	__imp__sub_82202F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82202FDC) {
	__imp__sub_82202FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82202FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82202FE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82202f28
	ctx.lr = 0x82202FF0;
	sub_82202F28(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 * 28;
	// addi r31,r11,26088
	ctx.r31.s64 = ctx.r11.s64 + 26088;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r27,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u8);
	// bl 0x82229bf0
	ctx.lr = 0x82203014;
	sub_82229BF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82203020;
	sub_822B1FB0(ctx, base);
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// li r3,2
	ctx.r3.s64 = 2;
	// stfsx f1,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// bl 0x822b1fb0
	ctx.lr = 0x82203030;
	sub_822B1FB0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f1,r30,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82203058
	if (ctx.cr6.gt) goto loc_82203058;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,12240
	ctx.r4.s64 = ctx.r11.s64 + 12240;
	// bl 0x822ad4e0
	ctx.lr = 0x82203058;
	sub_822AD4E0(ctx, base);
loc_82203058:
	// lhz r11,126(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// sthx r11,r30,r10
	PPC_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u16);
	// lwz r9,312(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// oris r8,r9,512
	ctx.r8.u64 = ctx.r9.u64 | 33554432;
	// stw r8,312(r29)
	PPC_STORE_U32(ctx.r29.u32 + 312, ctx.r8.u32);
	// bl 0x822acb68
	ctx.lr = 0x82203074;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x822030a4
	if (!ctx.cr6.gt) goto loc_822030A4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82229bf0
	ctx.lr = 0x82203084;
	sub_82229BF0(ctx, base);
	// lhz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stbx r27,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r27.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sthx r11,r30,r10
	PPC_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u16);
	// bl 0x822acbf8
	ctx.lr = 0x8220309C;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822030A4:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stbx r27,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r27.u8);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sthx r10,r30,r11
	PPC_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u16);
	// bl 0x822acbf8
	ctx.lr = 0x822030BC;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82202FE0) {
	__imp__sub_82202FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822030C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822030C4) {
	__imp__sub_822030C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822030C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822030D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82202f28
	ctx.lr = 0x822030D8;
	sub_82202F28(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 * 28;
	// addi r31,r11,26088
	ctx.r31.s64 = ctx.r11.s64 + 26088;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// li r28,2047
	ctx.r28.s64 = 2047;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stbx r27,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r27.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// sthx r28,r30,r9
	PPC_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r28.u16);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822b2498
	ctx.lr = 0x82203110;
	sub_822B2498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82203118;
	sub_822B1FB0(ctx, base);
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
	// li r3,2
	ctx.r3.s64 = 2;
	// stfsx f1,r30,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// bl 0x822b1fb0
	ctx.lr = 0x82203128;
	sub_822B1FB0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f1,r30,r6
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82203150
	if (ctx.cr6.gt) goto loc_82203150;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,12240
	ctx.r4.s64 = ctx.r11.s64 + 12240;
	// bl 0x822ad4e0
	ctx.lr = 0x82203150;
	sub_822AD4E0(ctx, base);
loc_82203150:
	// bl 0x822acb68
	ctx.lr = 0x82203154;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x82203184
	if (!ctx.cr6.gt) goto loc_82203184;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82229bf0
	ctx.lr = 0x82203164;
	sub_82229BF0(ctx, base);
	// lhz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stbx r27,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r27.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sthx r11,r30,r10
	PPC_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u16);
	// bl 0x822acbf8
	ctx.lr = 0x8220317C;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82203184:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stbx r27,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r27.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sthx r28,r30,r11
	PPC_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u16);
	// bl 0x822acbf8
	ctx.lr = 0x82203198;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822030C8) {
	__imp__sub_822030C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822031A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822031A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82202f28
	ctx.lr = 0x822031B0;
	sub_82202F28(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 * 28;
	// addi r31,r11,26088
	ctx.r31.s64 = ctx.r11.s64 + 26088;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x82229bf0
	ctx.lr = 0x822031D4;
	sub_82229BF0(ctx, base);
	// lhz r9,126(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// sthx r9,r30,r8
	PPC_STORE_U16(ctx.r30.u32 + ctx.r8.u32, ctx.r9.u16);
	// bl 0x822b1fb0
	ctx.lr = 0x822031E8;
	sub_822B1FB0(ctx, base);
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// li r3,2
	ctx.r3.s64 = 2;
	// stfsx f1,r30,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// bl 0x822b1fb0
	ctx.lr = 0x822031F8;
	sub_822B1FB0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// lfs f0,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f1,r30,r5
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82203220
	if (ctx.cr6.gt) goto loc_82203220;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,12240
	ctx.r4.s64 = ctx.r11.s64 + 12240;
	// bl 0x822ad4e0
	ctx.lr = 0x82203220;
	sub_822AD4E0(ctx, base);
loc_82203220:
	// bl 0x822acb68
	ctx.lr = 0x82203224;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x82203244
	if (!ctx.cr6.gt) goto loc_82203244;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82229bf0
	ctx.lr = 0x82203234;
	sub_82229BF0(ctx, base);
	// lhz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// sthx r11,r30,r10
	PPC_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u16);
	// b 0x82203250
	goto loc_82203250;
loc_82203244:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// sthx r10,r30,r11
	PPC_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u16);
loc_82203250:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r11,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
	// bl 0x822acbf8
	ctx.lr = 0x82203260;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822031A0) {
	__imp__sub_822031A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82203270;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82202f28
	ctx.lr = 0x82203278;
	sub_82202F28(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 * 28;
	// addi r31,r11,26088
	ctx.r31.s64 = ctx.r11.s64 + 26088;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// li r28,2047
	ctx.r28.s64 = 2047;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stbx r8,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// sthx r28,r30,r9
	PPC_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r28.u16);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822b2498
	ctx.lr = 0x822032B0;
	sub_822B2498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x822032B8;
	sub_822B1FB0(ctx, base);
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// li r3,2
	ctx.r3.s64 = 2;
	// stfsx f1,r30,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// bl 0x822b1fb0
	ctx.lr = 0x822032C8;
	sub_822B1FB0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// lfs f0,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f1,r30,r5
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822032f0
	if (ctx.cr6.gt) goto loc_822032F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,12240
	ctx.r4.s64 = ctx.r11.s64 + 12240;
	// bl 0x822ad4e0
	ctx.lr = 0x822032F0;
	sub_822AD4E0(ctx, base);
loc_822032F0:
	// bl 0x822acb68
	ctx.lr = 0x822032F4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x82203314
	if (!ctx.cr6.gt) goto loc_82203314;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82229bf0
	ctx.lr = 0x82203304;
	sub_82229BF0(ctx, base);
	// lhz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// sthx r11,r30,r10
	PPC_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u16);
	// b 0x8220331c
	goto loc_8220331C;
loc_82203314:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// sthx r28,r30,r11
	PPC_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u16);
loc_8220331C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r11,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
	// bl 0x822acbf8
	ctx.lr = 0x8220332C;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82203268) {
	__imp__sub_82203268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82203334) {
	__imp__sub_82203334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203338) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82203350;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// blt cr6,0x8220336c
	if (ctx.cr6.lt) goto loc_8220336C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12276
	ctx.r4.s64 = ctx.r11.s64 + 12276;
	// bl 0x822ad4e0
	ctx.lr = 0x8220336C;
	sub_822AD4E0(ctx, base);
loc_8220336C:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,26088
	ctx.r11.s64 = ctx.r11.s64 + 26088;
	// li r10,7
	ctx.r10.s64 = 7;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8220338C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8220338c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220338C;
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

PPC_WEAK_FUNC(sub_82203338) {
	__imp__sub_82203338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822033A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822033B0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823ddffc
	ctx.lr = 0x822033B8;
	__savefpr_17(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x822033C8;
	sub_82332AF8(ctx, base);
	// addi r27,r30,40
	ctx.r27.s64 = ctx.r30.s64 + 40;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d4b08
	ctx.lr = 0x822033DC;
	sub_822D4B08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f17,f1
	ctx.fpscr.disableFlushMode();
	ctx.f17.f64 = ctx.f1.f64;
	// lfs f19,9760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9760);
	ctx.f19.f64 = double(temp.f32);
	// fcmpu cr6,f1,f19
	ctx.cr6.compare(ctx.f1.f64, ctx.f19.f64);
	// blt cr6,0x822036bc
	if (ctx.cr6.lt) goto loc_822036BC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r9,26088
	ctx.r11.s64 = ctx.r9.s64 + 26088;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f26,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f26.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f23,f26
	ctx.f23.f64 = ctx.f26.f64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lfs f25,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// fmr f22,f26
	ctx.f22.f64 = ctx.f26.f64;
	// lfs f24,12308(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12308);
	ctx.f24.f64 = double(temp.f32);
	// li r28,32
	ctx.r28.s64 = 32;
	// lfs f18,5996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f18.f64 = double(temp.f32);
	// fmr f21,f26
	ctx.f21.f64 = ctx.f26.f64;
	// lfs f20,2424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2424);
	ctx.f20.f64 = double(temp.f32);
	// addi r29,r11,26552
	ctx.r29.s64 = ctx.r11.s64 + 26552;
loc_8220343C:
	// lbz r10,-16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822035ec
	if (ctx.cr6.eq) goto loc_822035EC;
	// lhz r10,-12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -12);
	// cmplwi cr6,r10,2047
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2047, ctx.xer);
	// beq cr6,0x8220346c
	if (ctx.cr6.eq) goto loc_8220346C;
	// lhz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822035ec
	if (ctx.cr6.eq) goto loc_822035EC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822035ec
	if (!ctx.cr6.eq) goto loc_822035EC;
loc_8220346C:
	// lhz r11,-14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -14);
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
	// bne cr6,0x82203488
	if (!ctx.cr6.eq) goto loc_82203488;
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// b 0x822034a0
	goto loc_822034A0;
loc_82203488:
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r29,232
	ctx.r11.s64 = ctx.r29.s64 + 232;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_822034A0:
	// lfs f11,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f29,f12,f10
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f13,f9
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmadds f7,f13,f30,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f8.f64));
	// fmadds f28,f0,f29,f7
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f7.f64));
	// fcmpu cr6,f28,f26
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// ble cr6,0x822035ec
	if (!ctx.cr6.gt) goto loc_822035EC;
	// fneg f11,f28
	ctx.f11.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// fmadds f10,f11,f12,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f31.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f9,f13,f11,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f30.f64));
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f8,f0,f11,f29
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f29.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x822d4b08
	ctx.lr = 0x82203500;
	sub_822D4B08(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f19
	ctx.cr6.compare(ctx.f1.f64, ctx.f19.f64);
	// bge cr6,0x82203524
	if (!ctx.cr6.lt) goto loc_82203524;
	// lbz r10,-15(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -15);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822035ec
	if (!ctx.cr6.eq) goto loc_822035EC;
	// stfs f20,96(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f26,92(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82203524:
	// lbz r10,-15(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -15);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220354c
	if (!ctx.cr6.eq) goto loc_8220354C;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x8220354c
	if (!ctx.cr6.gt) goto loc_8220354C;
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f27,f26
	ctx.f27.f64 = ctx.f26.f64;
	// stfs f26,92(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f20,96(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8220354C:
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f29,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f11,f31,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fsqrts f13,f11
	ctx.f13.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822035ec
	if (ctx.cr6.gt) goto loc_822035EC;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f31,f25,f28
	ctx.f31.f64 = double(float(ctx.f25.f64 / ctx.f28.f64));
	// fsubs f12,f25,f0
	ctx.f12.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// fmuls f1,f31,f27
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f30,f12,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// bl 0x823de8e0
	ctx.lr = 0x82203584;
	sub_823DE8E0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lbz r11,-15(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -15);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f0,f11,f24
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f24.f64));
	// bne cr6,0x8220359c
	if (!ctx.cr6.eq) goto loc_8220359C;
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f25.f64));
loc_8220359C:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822035d4
	if (ctx.cr6.eq) goto loc_822035D4;
	// lwz r11,1028(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1028);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmuls f8,f9,f18
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f18.f64));
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsel f0,f7,f8,f0
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
loc_822035D4:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f23,f13,f0,f23
	ctx.f23.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f23.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f22,f12,f0,f22
	ctx.f22.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f22.f64));
	// fmadds f21,f0,f11,f21
	ctx.f21.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f21.f64));
loc_822035EC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x8220343c
	if (!ctx.cr0.eq) goto loc_8220343C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-5928
	ctx.r11.s64 = ctx.r11.s64 + -5928;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f23,f0
	ctx.cr6.compare(ctx.f23.f64, ctx.f0.f64);
	// bne cr6,0x82203624
	if (!ctx.cr6.eq) goto loc_82203624;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f22,f0
	ctx.cr6.compare(ctx.f22.f64, ctx.f0.f64);
	// bne cr6,0x82203624
	if (!ctx.cr6.eq) goto loc_82203624;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f21,f0
	ctx.cr6.compare(ctx.f21.f64, ctx.f0.f64);
	// beq cr6,0x822036bc
	if (ctx.cr6.eq) goto loc_822036BC;
loc_82203624:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f23,f0,f13
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f11,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f22,f0,f11
	ctx.f10.f64 = double(float(ctx.f22.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f10,4(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lfs f9,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f21,f0,f9
	ctx.f8.f64 = double(float(ctx.f21.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,8(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// bl 0x822d4b08
	ctx.lr = 0x8220365C;
	sub_822D4B08(ctx, base);
	// lfs f7,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f17
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f17.f64));
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f17
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f17.f64));
	// fmuls f2,f4,f17
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f17.f64));
	// stfs f5,0(r27)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f3,4(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// stfs f2,8(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822d50f8
	ctx.lr = 0x8220368C;
	sub_822D50F8(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822036b0
	if (!ctx.cr6.eq) goto loc_822036B0;
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f13,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f12,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
loc_822036B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
loc_822036BC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de048
	ctx.lr = 0x822036C8;
	__restfpr_17(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822033A8) {
	__imp__sub_822033A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822036CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822036CC) {
	__imp__sub_822036CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822036D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822036D8;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x822036F4;
	sub_82332AF8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,356(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r11,9624
	ctx.r28.s64 = ctx.r11.s64 + 9624;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// bge cr6,0x82203814
	if (!ctx.cr6.lt) goto loc_82203814;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f31,1452(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1452);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// beq cr6,0x822037a4
	if (ctx.cr6.eq) goto loc_822037A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
loc_82203754:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8222fd88
	ctx.lr = 0x82203760;
	sub_8222FD88(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfsu f0,4(r29)
	ea = 4 + ctx.r29.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82203754
	if (!ctx.cr0.eq) goto loc_82203754;
	// lfs f0,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82203788
	if (!ctx.cr6.lt) goto loc_82203788;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82203788:
	// lfs f0,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x822037d0
	if (!ctx.cr6.gt) goto loc_822037D0;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x822037d0
	goto loc_822037D0;
loc_822037A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,2424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
loc_822037B4:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8222fd88
	ctx.lr = 0x822037C0;
	sub_8222FD88(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfsu f0,4(r29)
	ea = 4 + ctx.r29.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822037b4
	if (!ctx.cr0.eq) goto loc_822037B4;
loc_822037D0:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f12,388(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f13,396(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// lwz r10,384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// lfs f0,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// lfs f11,1448(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1448);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,356(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stw r9,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// b 0x8220381c
	goto loc_8220381C;
loc_82203814:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822038d4
	if (ctx.cr6.eq) goto loc_822038D4;
loc_8220381C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f11,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f10,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,396(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f13,f0,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f6,f11,f0,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f5,f9,f0,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8222fbe8
	ctx.lr = 0x82203860;
	sub_8222FBE8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822da518
	ctx.lr = 0x82203874;
	sub_822DA518(ctx, base);
	// lwz r10,1028(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1028);
	// lfs f4,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f3,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmuls f12,f4,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmuls f10,f2,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f9,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f8,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f7,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_822038D4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

PPC_WEAK_FUNC(sub_822036D0) {
	__imp__sub_822036D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822038E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822038F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,232(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r4,60
	ctx.r4.s64 = 60;
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f9,f5,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f0.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f3,f7,f5,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f2,f6,f5,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f12.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822304f8
	ctx.lr = 0x82203948;
	sub_822304F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822d4700
	ctx.lr = 0x82203954;
	sub_822D4700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stb r10,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r10.u8);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// srawi r8,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 20;
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// stb r7,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r7.u8);
	// lhz r6,126(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// sth r6,128(r29)
	PPC_STORE_U16(ctx.r29.u32 + 128, ctx.r6.u16);
	// lhz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// sth r5,124(r29)
	PPC_STORE_U16(ctx.r29.u32 + 124, ctx.r5.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822038E8) {
	__imp__sub_822038E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220398C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220398C) {
	__imp__sub_8220398C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203990) {
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
	// lbz r10,291(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 291);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// mulli r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 * 44;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// lwzx r30,r9,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82332af8
	ctx.lr = 0x822039C8;
	sub_82332AF8(ctx, base);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x82203a20
	if (!ctx.cr6.eq) goto loc_82203A20;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82203a34
	if (!ctx.cr6.eq) goto loc_82203A34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c3040
	ctx.lr = 0x822039E4;
	sub_821C3040(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,250
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 250, ctx.xer);
	// blt cr6,0x82203a34
	if (ctx.cr6.lt) goto loc_82203A34;
	// addi r6,r31,232
	ctx.r6.s64 = ctx.r31.s64 + 232;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821be0d8
	ctx.lr = 0x82203A14;
	sub_821BE0D8(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// b 0x82203a34
	goto loc_82203A34;
loc_82203A20:
	// addi r6,r31,232
	ctx.r6.s64 = ctx.r31.s64 + 232;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821be0d8
	ctx.lr = 0x82203A34;
	sub_821BE0D8(ctx, base);
loc_82203A34:
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

PPC_WEAK_FUNC(sub_82203990) {
	__imp__sub_82203990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82203A4C) {
	__imp__sub_82203A4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82203A50) {
	__imp__sub_82203A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82203A5C) {
	__imp__sub_82203A5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82203A68;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82332af8
	ctx.lr = 0x82203A88;
	sub_82332AF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bne cr6,0x82203ab0
	if (!ctx.cr6.eq) goto loc_82203AB0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82203ac8
	goto loc_82203AC8;
loc_82203AB0:
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmadds f7,f11,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fdivs f13,f7,f8
	ctx.f13.f64 = double(float(ctx.f7.f64 / ctx.f8.f64));
loc_82203AC8:
	// lwz r11,1028(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1028);
	// lfs f11,1124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fdivs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
	// fmuls f12,f5,f6
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// ble cr6,0x82203b54
	if (!ctx.cr6.gt) goto loc_82203B54;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// beq cr6,0x82203bb4
	if (ctx.cr6.eq) goto loc_82203BB4;
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82203bb4
	if (ctx.cr6.lt) goto loc_82203BB4;
	// fdivs f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsel f6,f8,f13,f9
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// fsel f5,f7,f12,f6
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f6.f64;
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// stfs f2,4(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82203B54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f13,6024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f13.f64 = double(temp.f32);
	// fadds f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// blt cr6,0x82203bb4
	if (ctx.cr6.lt) goto loc_82203BB4;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82203b98
	if (!ctx.cr6.gt) goto loc_82203B98;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82203B98:
	// fneg f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_82203BB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82203A60) {
	__imp__sub_82203A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82203BC8;
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82203c50
	if (ctx.cr6.lt) goto loc_82203C50;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82203C0C;
	sub_82332AF8(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fdivs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f31.f64));
	// fmsubs f9,f10,f30,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 - ctx.f12.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f7,1124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fsel f3,f5,f7,f8
	ctx.f3.f64 = ctx.f5.f64 >= 0.0 ? ctx.f7.f64 : ctx.f8.f64;
	// fsel f2,f4,f6,f3
	ctx.f2.f64 = ctx.f4.f64 >= 0.0 ? ctx.f6.f64 : ctx.f3.f64;
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82203C50:
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

PPC_WEAK_FUNC(sub_82203BC0) {
	__imp__sub_82203BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82203C64) {
	__imp__sub_82203C64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82203C70;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82332af8
	ctx.lr = 0x82203C90;
	sub_82332AF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4b60
	ctx.lr = 0x82203CA0;
	sub_822D4B60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82203de8
	if (ctx.cr6.eq) goto loc_82203DE8;
	// lwz r11,1120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82203dd0
	if (ctx.cr6.eq) goto loc_82203DD0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82203de8
	if (!ctx.cr6.eq) goto loc_82203DE8;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82203dd0
	if (!ctx.cr6.eq) goto loc_82203DD0;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82203d08
	if (!ctx.cr6.gt) goto loc_82203D08;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82203d08
	if (ctx.cr6.eq) goto loc_82203D08;
	// lwz r11,1028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// b 0x82203d24
	goto loc_82203D24;
loc_82203D08:
	// lwz r11,1028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f12.f64));
loc_82203D24:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,1124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1124);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,26988(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26988);
	// lfs f12,19444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19444);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f8,f31
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82203d68
	if (!ctx.cr6.gt) goto loc_82203D68;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82203D68:
	// lfs f13,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82203dbc
	if (!ctx.cr6.gt) goto loc_82203DBC;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lfs f0,5996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,27088(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27088);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f11,1124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1124);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f7,f9,f10,f12
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsel f5,f6,f8,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f8.f64 : ctx.f7.f64;
	// stfs f5,8(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82203DBC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82203DD0:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82203bc0
	ctx.lr = 0x82203DE8;
	sub_82203BC0(ctx, base);
loc_82203DE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82203C68) {
	__imp__sub_82203C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82203DF4) {
	__imp__sub_82203DF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203DF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82203E14;
	sub_82332AF8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// lfs f12,1048(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// lfs f13,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r11,1
	ctx.r11.s64 = 1;
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
	// fnmsubs f8,f9,f0,f12
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// ble cr6,0x82203e64
	if (!ctx.cr6.gt) goto loc_82203E64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82203E64:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82203DF8) {
	__imp__sub_82203DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82203E7C) {
	__imp__sub_82203E7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203E80) {
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
	// lwz r10,384(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82203f8c
	if (ctx.cr6.eq) goto loc_82203F8C;
	// lhz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82203ec0
	if (!ctx.cr6.eq) goto loc_82203EC0;
	// rlwinm r11,r10,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r11.u32);
	// b 0x82203f8c
	goto loc_82203F8C;
loc_82203EC0:
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r30,-624
	ctx.r11.s64 = ctx.r30.s64 + -624;
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x82203EE0;
	sub_822DA650(ctx, base);
	// lfs f0,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,412
	ctx.r11.s64 = ctx.r31.s64 + 412;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,400
	ctx.r11.s64 = ctx.r31.s64 + 400;
	// lfs f9,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f11,f10,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f0,f9,f8,f1
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f1.f64));
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// lfs f13,400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,408(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f9,f13,f6,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f5,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f9.f64));
	// stfs f8,416(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// lfs f7,400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,408(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f3,f7,f3,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f2,f6,f2,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f3.f64));
	// stfs f2,420(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// lfs f1,-392(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -392);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// lfs f12,-388(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -388);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,416(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// lfs f9,-384(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -384);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f7,420(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
loc_82203F8C:
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

PPC_WEAK_FUNC(sub_82203E80) {
	__imp__sub_82203E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82203FA4) {
	__imp__sub_82203FA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82203FA8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82203fe0
	if (ctx.cr6.eq) goto loc_82203FE0;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27048);
	// b 0x82203fe8
	goto loc_82203FE8;
loc_82203FE0:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27072);
loc_82203FE8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x822d4b60
	ctx.lr = 0x82203FF8;
	sub_822D4B60(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f2,f5,f8,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fdivs f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f4.f64));
	// bl 0x823de8e0
	ctx.lr = 0x82204034;
	sub_823DE8E0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x8220407c
	if (!ctx.cr6.lt) goto loc_8220407C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27024);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82204074
	if (ctx.cr6.eq) goto loc_82204074;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,12312
	ctx.r4.s64 = ctx.r11.s64 + 12312;
	// bl 0x82280900
	ctx.lr = 0x82204074;
	sub_82280900(ctx, base);
loc_82204074:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82204080
	goto loc_82204080;
loc_8220407C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82204080:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82203FA8) {
	__imp__sub_82203FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220409C) {
	__imp__sub_8220409C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822040A0) {
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
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x822d48f0
	ctx.lr = 0x822040B4;
	sub_822D48F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11388);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822040fc
	if (!ctx.cr6.lt) goto loc_822040FC;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27024);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822040e8
	if (ctx.cr6.eq) goto loc_822040E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,12352
	ctx.r4.s64 = ctx.r11.s64 + 12352;
	// bl 0x82280900
	ctx.lr = 0x822040E8;
	sub_82280900(ctx, base);
loc_822040E8:
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
loc_822040FC:
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

PPC_WEAK_FUNC(sub_822040A0) {
	__imp__sub_822040A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204110) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8220415c
	if (!ctx.cr6.eq) goto loc_8220415C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26048);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
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
loc_8220415C:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27052);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lhz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82204194
	if (ctx.cr6.eq) goto loc_82204194;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// b 0x822041a4
	goto loc_822041A4;
loc_82204194:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// addis r11,r10,19
	ctx.r11.s64 = ctx.r10.s64 + 1245184;
	// addi r11,r11,32144
	ctx.r11.s64 = ctx.r11.s64 + 32144;
loc_822041A4:
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	ctx.lr = 0x822041CC;
	sub_822D4AC8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f7,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,27032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27032);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fadds f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f0,f2,f4
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

PPC_WEAK_FUNC(sub_82204110) {
	__imp__sub_82204110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82204214) {
	__imp__sub_82204214(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82204234
	if (!ctx.cr6.eq) goto loc_82204234;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26996);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82204234:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26052);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82204218) {
	__imp__sub_82204218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82204244) {
	__imp__sub_82204244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822d50f8
	ctx.lr = 0x82204264;
	sub_822D50F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822da650
	ctx.lr = 0x82204270;
	sub_822DA650(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d9618
	ctx.lr = 0x8220427C;
	sub_822D9618(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82204248) {
	__imp__sub_82204248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82204298;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822042cc
	if (!ctx.cr6.eq) goto loc_822042CC;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26996);
	// b 0x822042d4
	goto loc_822042D4;
loc_822042CC:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26052);
loc_822042D4:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5812(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5812);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,6020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6020);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f8,f10,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fmadds f4,f6,f7,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fadds f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fnmsubs f1,f3,f13,f0
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// fmuls f31,f1,f12
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fcmpu cr6,f31,f11
	ctx.cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// bgt cr6,0x8220438c
	if (ctx.cr6.gt) goto loc_8220438C;
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,27024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27024);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82204374
	if (ctx.cr6.eq) goto loc_82204374;
	// stfd f31,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,12452
	ctx.r4.s64 = ctx.r11.s64 + 12452;
	// bl 0x82280900
	ctx.lr = 0x82204374;
	sub_82280900(ctx, base);
loc_82204374:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8220438C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// fmuls f4,f31,f0
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lwz r11,27024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27024);
	// fcmpu cr6,f4,f2
	ctx.cr6.compare(ctx.f4.f64, ctx.f2.f64);
	// bge cr6,0x82204410
	if (!ctx.cr6.lt) goto loc_82204410;
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822043f8
	if (ctx.cr6.eq) goto loc_822043F8;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f31,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfd f4,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,12428
	ctx.r4.s64 = ctx.r11.s64 + 12428;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x82280900
	ctx.lr = 0x822043F8;
	sub_82280900(ctx, base);
loc_822043F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82204410:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// fdivs f30,f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f2.f64 / ctx.f4.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220445c
	if (ctx.cr6.eq) goto loc_8220445C;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f30,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f30.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f31,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,12396
	ctx.r4.s64 = ctx.r11.s64 + 12396;
	// fmr f3,f2
	ctx.f3.f64 = ctx.f2.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x82280900
	ctx.lr = 0x8220445C;
	sub_82280900(ctx, base);
loc_8220445C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d50f8
	ctx.lr = 0x82204468;
	sub_822D50F8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822da650
	ctx.lr = 0x82204474;
	sub_822DA650(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822d9618
	ctx.lr = 0x82204480;
	sub_822D9618(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d50f8
	ctx.lr = 0x8220448C;
	sub_822D50F8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822da650
	ctx.lr = 0x82204498;
	sub_822DA650(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822d9618
	ctx.lr = 0x822044A4;
	sub_822D9618(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d6cb8
	ctx.lr = 0x822044B8;
	sub_822D6CB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d6ba8
	ctx.lr = 0x822044C4;
	sub_822D6BA8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27092);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822045c8
	if (ctx.cr6.eq) goto loc_822045C8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r27,r31,28
	ctx.r27.s64 = ctx.r31.s64 + 28;
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r10,-2232
	ctx.r5.s64 = ctx.r10.s64 + -2232;
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f30,-14540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	ctx.f30.f64 = double(temp.f32);
	// li r7,200
	ctx.r7.s64 = 200;
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f0,f30,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmadds f7,f12,f30,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f11.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f6,f10,f30,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f9.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821f2d18
	ctx.lr = 0x82204530;
	sub_821F2D18(ctx, base);
	// lfs f5,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f5,f30,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 + ctx.f4.f64));
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f3,f30,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f1.f64));
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r9,-2056
	ctx.r5.s64 = ctx.r9.s64 + -2056;
	// fmadds f11,f0,f30,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f12.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r7,200
	ctx.r7.s64 = 200;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821f2d18
	ctx.lr = 0x8220457C;
	sub_821F2D18(ctx, base);
	// lfs f10,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f30,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f9.f64));
	// lfs f6,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// li r7,200
	ctx.r7.s64 = 200;
	// lfs f5,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f8,f30,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f6.f64));
	// lfs f3,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r8,-2264
	ctx.r5.s64 = ctx.r8.s64 + -2264;
	// fmadds f2,f5,f30,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 + ctx.f3.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f2d18
	ctx.lr = 0x822045C8;
	sub_821F2D18(ctx, base);
loc_822045C8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82204290) {
	__imp__sub_82204290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822045DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822045DC) {
	__imp__sub_822045DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822045E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822045E8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822d4b08
	ctx.lr = 0x8220460C;
	sub_822D4B08(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204290
	ctx.lr = 0x82204624;
	sub_82204290(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822046a0
	if (!ctx.cr6.lt) goto loc_822046A0;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82204670
	if (ctx.cr6.eq) goto loc_82204670;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82204670
	if (ctx.cr6.gt) goto loc_82204670;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lfs f0,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,26984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26984);
	// lwz r10,26044(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26044);
	// b 0x82204688
	goto loc_82204688;
loc_82204670:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lfs f0,-23144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,27004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27004);
	// lwz r10,27084(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27084);
loc_82204688:
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f13,f0,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f31.f64));
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x822046a0
	if (!ctx.cr6.gt) goto loc_822046A0;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_822046A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12464(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12464);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lwz r11,26080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26080);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f8,f10,f9,f0
	ctx.f8.f64 = double(float(-(ctx.f10.f64 * ctx.f9.f64 - ctx.f0.f64)));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f6,0(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f5,4(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmuls f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f4,8(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822045E0) {
	__imp__sub_822045E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822046F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82204714
	if (!ctx.cr6.eq) goto loc_82204714;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27064);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82204714:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26072);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822046F8) {
	__imp__sub_822046F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82204724) {
	__imp__sub_82204724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8220474c
	if (!ctx.cr6.eq) goto loc_8220474C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27064);
	// b 0x82204754
	goto loc_82204754;
loc_8220474C:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26072);
loc_82204754:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82204728) {
	__imp__sub_82204728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220476C) {
	__imp__sub_8220476C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204770) {
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
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822047a4
	if (ctx.cr6.eq) goto loc_822047A4;
loc_8220479C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82204828
	goto loc_82204828;
loc_822047A4:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822047c8
	if (!ctx.cr6.eq) goto loc_822047C8;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27064);
	// b 0x822047d0
	goto loc_822047D0;
loc_822047C8:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26072);
loc_822047D0:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822047e4
	if (ctx.cr6.gt) goto loc_822047E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822047E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822047f8
	if (!ctx.cr6.eq) goto loc_822047F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82204828
	goto loc_82204828;
loc_822047F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203fa8
	ctx.lr = 0x82204804;
	sub_82203FA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220479c
	if (!ctx.cr6.eq) goto loc_8220479C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822040a0
	ctx.lr = 0x8220481C;
	sub_822040A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82204828:
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

PPC_WEAK_FUNC(sub_82204770) {
	__imp__sub_82204770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204840) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822048d8
	if (!ctx.cr6.eq) goto loc_822048D8;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r9,1128(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1128);
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822048b4
	if (!ctx.cr6.lt) goto loc_822048B4;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27024);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82204a84
	if (ctx.cr6.eq) goto loc_82204A84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,12520
	ctx.r4.s64 = ctx.r11.s64 + 12520;
	// bl 0x82280900
	ctx.lr = 0x822048B0;
	sub_82280900(ctx, base);
	// b 0x82204a84
	goto loc_82204A84;
loc_822048B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_822048D8:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// lfs f0,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x8220492c
	if (!ctx.cr6.eq) goto loc_8220492C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204770
	ctx.lr = 0x82204908;
	sub_82204770(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82204920
	if (ctx.cr6.eq) goto loc_82204920;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// b 0x8220492c
	goto loc_8220492C;
loc_82204920:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204110
	ctx.lr = 0x8220492C;
	sub_82204110(ctx, base);
loc_8220492C:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f13,f1,f0,f2
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f10,f11,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822045e0
	ctx.lr = 0x822049A4;
	sub_822045E0(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lwz r11,27024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27024);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82204a84
	if (ctx.cr6.eq) goto loc_82204A84;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822049dc
	if (!ctx.cr6.eq) goto loc_822049DC;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27064);
	// b 0x822049e4
	goto loc_822049E4;
loc_822049DC:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26072);
loc_822049E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d48f0
	ctx.lr = 0x822049F4;
	sub_822D48F0(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f2,f6,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f4,f2
	ctx.f4.f64 = double(float(sqrt(ctx.f2.f64)));
	// bne cr6,0x82204a44
	if (!ctx.cr6.eq) goto loc_82204A44;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,12516
	ctx.r5.s64 = ctx.r11.s64 + 12516;
	// b 0x82204a4c
	goto loc_82204A4C;
loc_82204A44:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,12512
	ctx.r5.s64 = ctx.r11.s64 + 12512;
loc_82204A4C:
	// stfd f3,56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f31,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f31.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f30,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f30.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,15
	ctx.r3.s64 = 15;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r4,r11,12468
	ctx.r4.s64 = ctx.r11.s64 + 12468;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// bl 0x82280900
	ctx.lr = 0x82204A84;
	sub_82280900(ctx, base);
loc_82204A84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82204840) {
	__imp__sub_82204840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82204AA4) {
	__imp__sub_82204AA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de028
	ctx.lr = 0x82204ABC;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82204ACC;
	sub_82332AF8(ctx, base);
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82204ae4
	if (!ctx.cr6.eq) goto loc_82204AE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,12548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12548);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82204aec
	goto loc_82204AEC;
loc_82204AE4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,12544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12544);
	ctx.f0.f64 = double(temp.f32);
loc_82204AEC:
	// lfs f13,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f13,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f11,f10
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f9,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f29,f9,f8
	ctx.f29.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f7,f31,f31
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f6,f30,f30,f7
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f7.f64));
	// fmadds f28,f29,f29,f6
	ctx.f28.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f6.f64));
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bgt cr6,0x82204b88
	if (ctx.cr6.gt) goto loc_82204B88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da518
	ctx.lr = 0x82204B38;
	sub_822DA518(ctx, base);
	// fsqrts f12,f28
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f28.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,26036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26036);
	ctx.f13.f64 = double(temp.f32);
	// fneg f8,f12
	ctx.f8.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f7,f8,f0,f12
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fdivs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fmuls f5,f6,f29
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// fmuls f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f3,f30,f6
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f6.f64));
	// fmuls f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmadds f1,f10,f4,f2
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f0,f9,f3,f1
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82204b8c
	if (ctx.cr6.lt) goto loc_82204B8C;
loc_82204B88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82204B8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x82204B98;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82204AA8) {
	__imp__sub_82204AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204BA8) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82204BD4;
	sub_82332AF8(ctx, base);
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82204d78
	if (ctx.cr6.eq) goto loc_82204D78;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82204d78
	if (ctx.cr6.eq) goto loc_82204D78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203df8
	ctx.lr = 0x82204BFC;
	sub_82203DF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82204d78
	if (ctx.cr6.eq) goto loc_82204D78;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82204d78
	if (!ctx.cr6.eq) goto loc_82204D78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203e80
	ctx.lr = 0x82204C20;
	sub_82203E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204aa8
	ctx.lr = 0x82204C28;
	sub_82204AA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82204c44
	if (ctx.cr6.eq) goto loc_82204C44;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// b 0x82204d78
	goto loc_82204D78;
loc_82204C44:
	// lwz r11,1120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82204c60
	if (!ctx.cr6.eq) goto loc_82204C60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204840
	ctx.lr = 0x82204C5C;
	sub_82204840(ctx, base);
	// b 0x82204d78
	goto loc_82204D78;
loc_82204C60:
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d4b60
	ctx.lr = 0x82204C70;
	sub_822D4B60(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// fneg f29,f0
	ctx.f29.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,27092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27092);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82204cb8
	if (ctx.cr6.eq) goto loc_82204CB8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,200
	ctx.r7.s64 = 200;
	// addi r5,r11,-2264
	ctx.r5.s64 = ctx.r11.s64 + -2264;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,412
	ctx.r4.s64 = ctx.r31.s64 + 412;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x821f2d18
	ctx.lr = 0x82204CB8;
	sub_821F2D18(ctx, base);
loc_82204CB8:
	// lfs f0,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f7,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f6,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmadds f0,f8,f5,f3
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f3.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f13,f8,f29,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f2.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82203a60
	ctx.lr = 0x82204D2C;
	sub_82203A60(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203c68
	ctx.lr = 0x82204D40;
	sub_82203C68(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f11,f0,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f0,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f0,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f4,8(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82204D78:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82204BA8) {
	__imp__sub_82204BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82204D9C) {
	__imp__sub_82204D9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82204DA8;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,316(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r11,452(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 452);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r9,r10,0,21,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r9.u32);
	// beq cr6,0x82204e20
	if (ctx.cr6.eq) goto loc_82204E20;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-624
	ctx.r10.s64 = ctx.r11.s64 + -624;
	// lwz r11,-360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82204e08
	if (!ctx.cr6.eq) goto loc_82204E08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r4,r11,12552
	ctx.r4.s64 = ctx.r11.s64 + 12552;
	// bl 0x82280b08
	ctx.lr = 0x82204E04;
	sub_82280B08(ctx, base);
	// b 0x82204e20
	goto loc_82204E20;
loc_82204E08:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44204
	ctx.r9.u64 = ctx.r10.u64 | 44204;
	// lwzx r29,r11,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r8,r29,0,11,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82204e24
	if (!ctx.cr6.eq) goto loc_82204E24;
loc_82204E20:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82204E24:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x822da518
	ctx.lr = 0x82204E38;
	sub_822DA518(ctx, base);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lfs f9,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// addi r31,r30,40
	ctx.r31.s64 = ctx.r30.s64 + 40;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f31,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f0,f9,f8,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// beq cr6,0x82204ed0
	if (ctx.cr6.eq) goto loc_82204ED0;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82204ed0
	if (!ctx.cr6.eq) goto loc_82204ED0;
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82204ed0
	if (ctx.cr6.eq) goto loc_82204ED0;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,27096(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27096);
	// lfs f13,8664(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8664);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82204ec8
	if (!ctx.cr6.gt) goto loc_82204EC8;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r11.u32);
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222f978
	ctx.lr = 0x82204EC8;
	sub_8222F978(ctx, base);
loc_82204EC8:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82204f50
	goto loc_82204F50;
loc_82204ED0:
	// rlwinm r10,r29,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82204ef0
	if (ctx.cr6.eq) goto loc_82204EF0;
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82204ef0
	if (!ctx.cr6.eq) goto loc_82204EF0;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r11.u32);
loc_82204EF0:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,27096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27096);
	// lfs f11,5804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82204f2c
	if (!ctx.cr6.gt) goto loc_82204F2C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26056);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82204f50
	if (!ctx.cr6.gt) goto loc_82204F50;
	// b 0x82204f4c
	goto loc_82204F4C;
loc_82204F2C:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82204f50
	if (!ctx.cr6.lt) goto loc_82204F50;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,26040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26040);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f12,f31,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82204f50
	if (!ctx.cr6.lt) goto loc_82204F50;
loc_82204F4C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82204F50:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f3,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f9,f31,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f3.f64));
	// stfs f2,28(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// fmr f9,f2
	ctx.f9.f64 = ctx.f2.f64;
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f31,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f13,32(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f31,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f10,36(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stfs f2,0(r28)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f8,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,4(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f7,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,8(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82204DA0) {
	__imp__sub_82204DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82204FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82204FF0;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x8220500C;
	sub_82332AF8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822052f4
	if (!ctx.cr6.gt) goto loc_822052F4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822052f4
	if (ctx.cr6.eq) goto loc_822052F4;
	// lbz r11,291(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x822052f4
	if (!ctx.cr6.eq) goto loc_822052F4;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82205070
	if (ctx.cr6.eq) goto loc_82205070;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204da0
	ctx.lr = 0x82205060;
	sub_82204DA0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82205070:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1048(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82205144
	if (!ctx.cr6.gt) goto loc_82205144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da518
	ctx.lr = 0x822050A0;
	sub_822DA518(ctx, base);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,1028(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1028);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f5,f9,f12,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// fmadds f10,f8,f11,f5
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x82205114
	if (ctx.cr6.lt) goto loc_82205114;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f13,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f12,f0,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f11,f0,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x82205144
	goto loc_82205144;
loc_82205114:
	// lfs f10,1048(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1048);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmadds f6,f7,f13,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f12,f7,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f5.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f11,f7,f3
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82205144:
	// lfs f0,1052(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1052);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82205184
	if (!ctx.cr6.gt) goto loc_82205184;
	// lfs f0,388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f31,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f11,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f31,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f9,44(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,396(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f8,f31,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f7.f64));
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_82205184:
	// lis r27,-32020
	ctx.r27.s64 = -2098462720;
	// lwz r11,27092(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27092);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822051b0
	if (ctx.cr6.eq) goto loc_822051B0;
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_822051B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82204ba8
	ctx.lr = 0x822051B8;
	sub_82204BA8(ctx, base);
	// lwz r11,1120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822051e4
	if (!ctx.cr6.eq) goto loc_822051E4;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822051e4
	if (!ctx.cr6.eq) goto loc_822051E4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8231f840
	ctx.lr = 0x822051E0;
	sub_8231F840(ctx, base);
	// b 0x82205230
	goto loc_82205230;
loc_822051E4:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f31,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f11,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f31,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f31,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f4,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,4(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f3,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_82205230:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82205274
	if (!ctx.cr6.eq) goto loc_82205274;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203df8
	ctx.lr = 0x82205244;
	sub_82203DF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205274
	if (ctx.cr6.eq) goto loc_82205274;
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822d50f8
	ctx.lr = 0x82205260;
	sub_822D50F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x8220526C;
	sub_8222FBE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82205274:
	// lwz r11,27092(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27092);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205300
	if (ctx.cr6.eq) goto loc_82205300;
	// lwz r11,1120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822052c8
	if (!ctx.cr6.eq) goto loc_822052C8;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822052c8
	if (!ctx.cr6.eq) goto loc_822052C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,200
	ctx.r7.s64 = 200;
	// addi r5,r11,-2008
	ctx.r5.s64 = ctx.r11.s64 + -2008;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821f2d18
	ctx.lr = 0x822052B8;
	sub_821F2D18(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822052C8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,200
	ctx.r7.s64 = 200;
	// addi r5,r11,-2280
	ctx.r5.s64 = ctx.r11.s64 + -2280;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821f2d18
	ctx.lr = 0x822052E4;
	sub_821F2D18(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822052F4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8231f840
	ctx.lr = 0x82205300;
	sub_8231F840(ctx, base);
loc_82205300:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82204FE8) {
	__imp__sub_82204FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82205310) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,180
	ctx.r11.s64 = ctx.r3.s64 + 180;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lbz r4,168(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 168);
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// oris r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 2097152;
	// stw r7,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r7.u32);
	// bl 0x8231f478
	ctx.lr = 0x82205368;
	sub_8231F478(ctx, base);
	// sth r3,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r3.u16);
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

PPC_WEAK_FUNC(sub_82205310) {
	__imp__sub_82205310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82205380) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822053ac
	if (ctx.cr6.eq) goto loc_822053AC;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// li r3,6
	ctx.r3.s64 = 6;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,-624(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + -624);
	// cmplwi cr6,r7,13
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 13, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822053AC:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82205380) {
	__imp__sub_82205380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822053B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822053B4) {
	__imp__sub_822053B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822053B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822053C0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de024
	ctx.lr = 0x822053C8;
	__savefpr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82203990
	ctx.lr = 0x822053D4;
	sub_82203990(ctx, base);
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x822053DC;
	sub_82332AF8(ctx, base);
	// lhz r10,130(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 130);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r11,26552
	ctx.r9.s64 = ctx.r11.s64 + 26552;
	// cmplwi cr6,r10,2047
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2047, ctx.xer);
	// beq cr6,0x82205440
	if (ctx.cr6.eq) goto loc_82205440;
	// cmplwi cr6,r10,2046
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2046, ctx.xer);
	// beq cr6,0x82205440
	if (ctx.cr6.eq) goto loc_82205440;
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82205418
	if (ctx.cr6.eq) goto loc_82205418;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82205418
	if (ctx.cr6.eq) goto loc_82205418;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82205440
	if (!ctx.cr6.eq) goto loc_82205440;
loc_82205418:
	// mulli r11,r10,624
	ctx.r11.s64 = ctx.r10.s64 * 624;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,276(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82205440
	if (ctx.cr6.eq) goto loc_82205440;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82340d30
	ctx.lr = 0x8220543C;
	sub_82340D30(ctx, base);
	// b 0x82205b98
	goto loc_82205B98;
loc_82205440:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f27,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// bne cr6,0x8220551c
	if (!ctx.cr6.eq) goto loc_8220551C;
	// cmplwi cr6,r10,2046
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2046, ctx.xer);
	// beq cr6,0x8220551c
	if (ctx.cr6.eq) goto loc_8220551C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// lfs f13,368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// lfs f12,372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f11,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lfs f10,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12608(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f8,f13,f0,f10
	ctx.f8.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// lfs f7,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f6,f12,f0,f9
	ctx.f6.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// fnmsubs f5,f11,f0,f7
	ctx.f5.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f7.f64)));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x822054b4
	if (!ctx.cr6.eq) goto loc_822054B4;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_822054B4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82200bd0
	ctx.lr = 0x822054C8;
	sub_82200BD0(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x82205574
	if (!ctx.cr6.eq) goto loc_82205574;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f27,40(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f27,44(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f27,48(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x82205574
	goto loc_82205574;
loc_8220551C:
	// lbz r10,1649(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1649);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82205574
	if (ctx.cr6.eq) goto loc_82205574;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82205574
	if (!ctx.cr6.eq) goto loc_82205574;
	// lhz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205554
	if (ctx.cr6.eq) goto loc_82205554;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,-624(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -624);
	// li r11,6
	ctx.r11.s64 = 6;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x82205558
	if (ctx.cr6.eq) goto loc_82205558;
loc_82205554:
	// li r11,5
	ctx.r11.s64 = 5;
loc_82205558:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_82205574:
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82204fe8
	ctx.lr = 0x8220559C;
	sub_82204FE8(ctx, base);
	// lfs f11,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f0,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f9,f9
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f13,f3,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// fsel f10,f11,f29,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f29.f64 : ctx.f12.f64;
	// fdivs f8,f29,f10
	ctx.f8.f64 = double(float(ctx.f29.f64 / ctx.f10.f64));
	// fmuls f7,f8,f6
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// stfs f7,192(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f6,f3,f8
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// stfs f6,196(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmuls f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f5,200(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// blt cr6,0x82205b98
	if (ctx.cr6.lt) goto loc_82205B98;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82205654
	if (!ctx.cr6.gt) goto loc_82205654;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82342690
	ctx.lr = 0x8220562C;
	sub_82342690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82205654
	if (!ctx.cr6.eq) goto loc_82205654;
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82205648
	if (!ctx.cr6.eq) goto loc_82205648;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_82205648:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// ori r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 | 32;
	// b 0x8220566c
	goto loc_8220566C;
loc_82205654:
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82205668
	if (!ctx.cr6.eq) goto loc_82205668;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_82205668:
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
loc_8220566C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82200bd0
	ctx.lr = 0x8220567C;
	sub_82200BD0(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r10,320
	ctx.r10.s64 = 20971520;
	// rlwinm r9,r11,0,7,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822056c8
	if (!ctx.cr6.eq) goto loc_822056C8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822038e8
	ctx.lr = 0x822056A0;
	sub_822038E8(ctx, base);
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x822056b4
	if (!ctx.cr6.eq) goto loc_822056B4;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_822056B4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82200bd0
	ctx.lr = 0x822056C8;
	sub_82200BD0(ctx, base);
loc_822056C8:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r10,144
	ctx.r10.s64 = 9437184;
	// rlwinm r9,r11,0,7,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822056f8
	if (!ctx.cr6.eq) goto loc_822056F8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,560(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 560);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82202b08
	ctx.lr = 0x822056F8;
	sub_82202B08(ctx, base);
loc_822056F8:
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,7036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7036);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f13,f8,f0,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmadds f12,f6,f0,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f11,f5,f0,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x822059d4
	if (ctx.cr6.eq) goto loc_822059D4;
	// lwz r11,1080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1080);
	// lfs f10,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f10.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822058a0
	if (ctx.cr6.eq) goto loc_822058A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822058a0
	if (ctx.cr6.eq) goto loc_822058A0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822058a0
	if (ctx.cr6.eq) goto loc_822058A0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220578c
	if (ctx.cr6.eq) goto loc_8220578C;
	// fcmpu cr6,f10,f28
	ctx.cr6.compare(ctx.f10.f64, ctx.f28.f64);
	// bgt cr6,0x822058a0
	if (ctx.cr6.gt) goto loc_822058A0;
loc_8220578C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x822057a4
	if (ctx.cr6.eq) goto loc_822057A4;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x822059d4
	if (!ctx.cr6.lt) goto loc_822059D4;
	// fcmpu cr6,f10,f28
	ctx.cr6.compare(ctx.f10.f64, ctx.f28.f64);
	// ble cr6,0x822059d4
	if (!ctx.cr6.gt) goto loc_822059D4;
loc_822057A4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// lfs f0,-21928(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21928);
	ctx.f0.f64 = double(temp.f32);
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// lfs f30,6820(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6820);
	ctx.f30.f64 = double(temp.f32);
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f7,f13,f30
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bne cr6,0x82205800
	if (!ctx.cr6.eq) goto loc_82205800;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_82205800:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82200bd0
	ctx.lr = 0x82205814;
	sub_82200BD0(ctx, base);
	// lfs f31,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// beq cr6,0x822059d4
	if (ctx.cr6.eq) goto loc_822059D4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823de1f0
	ctx.lr = 0x82205830;
	sub_823DE1F0(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f5,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f0,f11,f31,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f13,f7,f31,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f12,f6,f31,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f4,f0,f30
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fsubs f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f2,36(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f1,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// b 0x822059d4
	goto loc_822059D4;
loc_822058A0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x822059d4
	if (!ctx.cr6.lt) goto loc_822059D4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,-21928(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21928);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// lfs f13,6820(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6820);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f12,f0,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f4,f11,f0,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f2,f10,f0,f7
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fnmsubs f0,f12,f13,f9
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f9.f64)));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fnmsubs f12,f11,f13,f8
	ctx.f12.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f8.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fnmsubs f11,f10,f13,f7
	ctx.f11.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f7.f64)));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8220591c
	if (!ctx.cr6.eq) goto loc_8220591C;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_8220591C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82200bd0
	ctx.lr = 0x82205930;
	sub_82200BD0(ctx, base);
	// lfs f31,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// beq cr6,0x822059d4
	if (ctx.cr6.eq) goto loc_822059D4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823de1f0
	ctx.lr = 0x8220594C;
	sub_823DE1F0(ctx, base);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f5,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f0,f8,f31,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f13,f7,f31,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f12,f6,f31,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f3,f13,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f2,f12,f9
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fadds f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f1,28(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fadds f9,f11,f3
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fadds f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fadds f5,f2,f12
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f5,8(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_822059D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x822059DC;
	sub_82340D30(ctx, base);
	// lwz r11,1040(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1040);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82205a28
	if (!ctx.cr6.gt) goto loc_82205A28;
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fadds f0,f1,f5
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
loc_82205A28:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lbz r10,291(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// mulli r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 * 44;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x82205a5c
	if (!ctx.cr6.eq) goto loc_82205A5C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,1008(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1008);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222da38
	ctx.lr = 0x82205A5C;
	sub_8222DA38(ctx, base);
loc_82205A5C:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82205a84
	if (!ctx.cr6.eq) goto loc_82205A84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234a5f0
	ctx.lr = 0x82205A78;
	sub_8234A5F0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82205ba0
	if (!ctx.cr6.eq) goto loc_82205BA0;
loc_82205A84:
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x82205b34
	if (ctx.cr6.eq) goto loc_82205B34;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82205ad0
	if (ctx.cr6.eq) goto loc_82205AD0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,46(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 46);
	// bl 0x82229da8
	ctx.lr = 0x82205AB8;
	sub_82229DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f680
	ctx.lr = 0x82205AC0;
	sub_8222F680(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x82205ACC;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82205AD0:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82201a10
	ctx.lr = 0x82205AE0;
	sub_82201A10(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82205ba0
	if (!ctx.cr6.eq) goto loc_82205BA0;
	// lbz r11,1649(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1649);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205b98
	if (ctx.cr6.eq) goto loc_82205B98;
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82205b98
	if (!ctx.cr6.gt) goto loc_82205B98;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82205b98
	if (ctx.cr6.eq) goto loc_82205B98;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// b 0x82205b98
	goto loc_82205B98;
loc_82205B34:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f8,f27
	ctx.cr6.compare(ctx.f8.f64, ctx.f27.f64);
	// beq cr6,0x82205b98
	if (ctx.cr6.eq) goto loc_82205B98;
	// li r11,2047
	ctx.r11.s64 = 2047;
	// sth r11,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r11.u16);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82205b98
	if (!ctx.cr6.eq) goto loc_82205B98;
	// lwz r11,1120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82205b98
	if (!ctx.cr6.eq) goto loc_82205B98;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82205b90
	if (!ctx.cr6.eq) goto loc_82205B90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822036d0
	ctx.lr = 0x82205B90;
	sub_822036D0(ctx, base);
loc_82205B90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822033a8
	ctx.lr = 0x82205B98;
	sub_822033A8(ctx, base);
loc_82205B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd350
	ctx.lr = 0x82205BA0;
	sub_821FD350(ctx, base);
loc_82205BA0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x82205BAC;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822053B8) {
	__imp__sub_822053B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82205BB0) {
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
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205c30
	if (ctx.cr6.eq) goto loc_82205C30;
	// lfs f0,232(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r3,232
	ctx.r31.s64 = ctx.r3.s64 + 232;
	// lfs f13,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822334c0
	ctx.lr = 0x82205BF4;
	sub_822334C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd350
	ctx.lr = 0x82205BFC;
	sub_821FD350(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r11,27092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27092);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82205c34
	if (ctx.cr6.eq) goto loc_82205C34;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,1000
	ctx.r7.s64 = 1000;
	// addi r5,r11,-2072
	ctx.r5.s64 = ctx.r11.s64 + -2072;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f2d18
	ctx.lr = 0x82205C2C;
	sub_821F2D18(ctx, base);
	// b 0x82205c34
	goto loc_82205C34;
loc_82205C30:
	// bl 0x822053b8
	ctx.lr = 0x82205C34;
	sub_822053B8(ctx, base);
loc_82205C34:
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

PPC_WEAK_FUNC(sub_82205BB0) {
	__imp__sub_82205BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82205C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82205C4C) {
	__imp__sub_82205C4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82205C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82205C58;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x82332af8
	ctx.lr = 0x82205C84;
	sub_82332AF8(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// srawi r10,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r25,r10,27
	ctx.r25.u64 = ctx.r10.u32 & 0x1F;
	// bl 0x8231fd60
	ctx.lr = 0x82205CA4;
	sub_8231FD60(ctx, base);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r26,r28,4
	ctx.r26.s64 = ctx.r28.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200c50
	ctx.lr = 0x82205CC0;
	sub_82200C50(ctx, base);
	// lwz r9,312(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r8,r9,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82205d90
	if (ctx.cr6.eq) goto loc_82205D90;
	// lhz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82205CDC;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82205d20
	if (!ctx.cr6.eq) goto loc_82205D20;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200d00
	ctx.lr = 0x82205D10;
	sub_82200D00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82205d24
	if (!ctx.cr6.eq) goto loc_82205D24;
loc_82205D20:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82205D24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82205d4c
	if (!ctx.cr6.eq) goto loc_82205D4C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82200f30
	ctx.lr = 0x82205D40;
	sub_82200F30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205d90
	if (ctx.cr6.eq) goto loc_82205D90;
loc_82205D4C:
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f13,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82205D90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,6020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6020);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82205dc4
	if (!ctx.cr6.gt) goto loc_82205DC4;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_82205DC4:
	// lfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f10,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f8,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82205C50) {
	__imp__sub_82205C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82205DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82205E00;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de014
	ctx.lr = 0x82205E08;
	__savefpr_23(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
loc_82205E30:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82205e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82205E30;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x8231f840
	ctx.lr = 0x82205E54;
	sub_8231F840(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82205E64;
	sub_82332AF8(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r30,r11,50
	ctx.r30.s64 = ctx.r11.s64 + 50;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8220625c
	if (!ctx.cr6.lt) goto loc_8220625C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f24,-30900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30900);
	ctx.f24.f64 = double(temp.f32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f28,6820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6820);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,-21928(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21928);
	ctx.f26.f64 = double(temp.f32);
	// lis r24,144
	ctx.r24.s64 = 9437184;
	// lfs f27,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// addi r26,r11,7816
	ctx.r26.s64 = ctx.r11.s64 + 7816;
	// lfs f25,7036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7036);
	ctx.f25.f64 = double(temp.f32);
	// lfs f23,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f23.f64 = double(temp.f32);
loc_82205EB8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8231f840
	ctx.lr = 0x82205EC8;
	sub_8231F840(ctx, base);
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82205edc
	if (!ctx.cr6.eq) goto loc_82205EDC;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_82205EDC:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fe6a8
	ctx.lr = 0x82205EF4;
	sub_821FE6A8(ctx, base);
	// lbz r10,185(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82205f40
	if (ctx.cr6.eq) goto loc_82205F40;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f23,144(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f8,196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f6,200(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x822d4b08
	ctx.lr = 0x82205F40;
	sub_822D4B08(ctx, base);
loc_82205F40:
	// lbz r10,185(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82206244
	if (!ctx.cr6.eq) goto loc_82206244;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r11,0,7,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00000;
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x82205f78
	if (!ctx.cr6.eq) goto loc_82205F78;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,560(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 560);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82202b08
	ctx.lr = 0x82205F78;
	sub_82202B08(ctx, base);
loc_82205F78:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f9,f0,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f12,f7,f0,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f11,f6,f0,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x821ffa18
	ctx.lr = 0x82205FCC;
	sub_821FFA18(ctx, base);
	// lfs f9,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822060c0
	if (!ctx.cr6.eq) goto loc_822060C0;
	// lwz r11,1080(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82205fec
	if (ctx.cr6.eq) goto loc_82205FEC;
	// fcmpu cr6,f9,f25
	ctx.cr6.compare(ctx.f9.f64, ctx.f25.f64);
	// bgt cr6,0x822060c0
	if (ctx.cr6.gt) goto loc_822060C0;
loc_82205FEC:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x82206004
	if (ctx.cr6.eq) goto loc_82206004;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x822061b8
	if (!ctx.cr6.lt) goto loc_822061B8;
	// fcmpu cr6,f9,f25
	ctx.cr6.compare(ctx.f9.f64, ctx.f25.f64);
	// ble cr6,0x822061b8
	if (!ctx.cr6.gt) goto loc_822061B8;
loc_82206004:
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// fadds f0,f11,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f26.f64));
	// fsubs f11,f11,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f28.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x82206038
	if (!ctx.cr6.eq) goto loc_82206038;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_82206038:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82200bd0
	ctx.lr = 0x8220604C;
	sub_82200BD0(ctx, base);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// fmadds f10,f8,f0,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f12,f6,f0,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f13,f5,f0,f11
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// beq cr6,0x8220622c
	if (ctx.cr6.eq) goto loc_8220622C;
	// fadds f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f28
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fadds f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f5,244(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// b 0x822061b8
	goto loc_822061B8;
loc_822060C0:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x822061b8
	if (!ctx.cr6.lt) goto loc_822061B8;
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f0,f26,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fmadds f7,f10,f26,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f26.f64 + ctx.f12.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f6,f9,f26,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f26.f64 + ctx.f11.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fnmsubs f5,f0,f28,f13
	ctx.f5.f64 = double(float(-(ctx.f0.f64 * ctx.f28.f64 - ctx.f13.f64)));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fnmsubs f4,f10,f28,f12
	ctx.f4.f64 = double(float(-(ctx.f10.f64 * ctx.f28.f64 - ctx.f12.f64)));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fnmsubs f3,f9,f28,f11
	ctx.f3.f64 = double(float(-(ctx.f9.f64 * ctx.f28.f64 - ctx.f11.f64)));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82206114
	if (!ctx.cr6.eq) goto loc_82206114;
	// li r6,2047
	ctx.r6.s64 = 2047;
loc_82206114:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82200bd0
	ctx.lr = 0x82206128;
	sub_82200BD0(ctx, base);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// fmadds f31,f8,f0,f13
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f30,f6,f0,f12
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f29,f5,f0,f11
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// beq cr6,0x8220622c
	if (ctx.cr6.eq) goto loc_8220622C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82276090
	ctx.lr = 0x82206178;
	sub_82276090(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,2046
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2046, ctx.xer);
	// bne cr6,0x822061b4
	if (!ctx.cr6.eq) goto loc_822061B4;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f30,f13
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fsubs f9,f29,f11
	ctx.f9.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// fadds f8,f12,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f6,f9,f29
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_822061B4:
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
loc_822061B8:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x8220622c
	if (ctx.cr6.eq) goto loc_8220622C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82206244
	if (!ctx.cr6.eq) goto loc_82206244;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82206258
	if (ctx.cr6.eq) goto loc_82206258;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82206258
	if (ctx.cr6.eq) goto loc_82206258;
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.f13.u64);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r7,r11,-50
	ctx.r7.s64 = ctx.r11.s64 + -50;
	// bl 0x82205c50
	ctx.lr = 0x8220621C;
	sub_82205C50(ctx, base);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82206258
	if (ctx.cr6.eq) goto loc_82206258;
loc_8220622C:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r30,r30,50
	ctx.r30.s64 = ctx.r30.s64 + 50;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82205eb8
	if (ctx.cr6.lt) goto loc_82205EB8;
	// b 0x8220625c
	goto loc_8220625C;
loc_82206244:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de060
	ctx.lr = 0x82206254;
	__restfpr_23(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82206258:
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
loc_8220625C:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// stfs f13,4(r23)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// stfs f12,8(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 8, temp.u32);
	// beq cr6,0x822062a0
	if (ctx.cr6.eq) goto loc_822062A0;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822062a0
	if (ctx.cr6.eq) goto loc_822062A0;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de060
	ctx.lr = 0x8220629C;
	__restfpr_23(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822062A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de060
	ctx.lr = 0x822062B0;
	__restfpr_23(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82205DF8) {
	__imp__sub_82205DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822062B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822062B4) {
	__imp__sub_822062B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822062B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822062C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r3,124(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 124);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x822062D4;
	sub_82332AF8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r11,9624
	ctx.r27.s64 = ctx.r11.s64 + 9624;
	// oris r7,r10,16384
	ctx.r7.u64 = ctx.r10.u64 | 1073741824;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,8448
	ctx.r8.s64 = 8448;
	// ori r7,r7,2048
	ctx.r7.u64 = ctx.r7.u64 | 2048;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
	// stw r7,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r7.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r6,64(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822063b4
	if (!ctx.cr6.eq) goto loc_822063B4;
	// lwz r10,1056(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1056);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822063b4
	if (ctx.cr6.eq) goto loc_822063B4;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// addi r10,r10,244
	ctx.r10.s64 = ctx.r10.s64 + 244;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8220633C:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8220633c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220633C;
	// lfs f13,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8220638c
	if (!ctx.cr6.lt) goto loc_8220638C;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_8220638C:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f9,f11,f13,f0
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsel f8,f10,f12,f0
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// b 0x822063e0
	goto loc_822063E0;
loc_822063B4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14208);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f13,196(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
loc_822063E0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82206448
	if (ctx.cr6.eq) goto loc_82206448;
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82206448
	if (ctx.cr6.eq) goto loc_82206448;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82206448
	if (!ctx.cr6.lt) goto loc_82206448;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,2047
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2047, ctx.xer);
	// beq cr6,0x82206448
	if (ctx.cr6.eq) goto loc_82206448;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
	// mulli r11,r10,624
	ctx.r11.s64 = ctx.r10.s64 * 624;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821e2e18
	ctx.lr = 0x82206424;
	sub_821E2E18(ctx, base);
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82206440
	if (ctx.cr6.eq) goto loc_82206440;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-624
	ctx.r4.s64 = ctx.r11.s64 + -624;
	// b 0x82206458
	goto loc_82206458;
loc_82206440:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82206458
	goto loc_82206458;
loc_82206448:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x821e2e18
	ctx.lr = 0x82206454;
	sub_821E2E18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82206458:
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// bl 0x821e2e18
	ctx.lr = 0x82206460;
	sub_821E2E18(ctx, base);
	// lis r11,640
	ctx.r11.s64 = 41943040;
	// li r10,13
	ctx.r10.s64 = 13;
	// ori r9,r11,57489
	ctx.r9.u64 = ctx.r11.u64 | 57489;
	// stb r10,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x821e2e18
	ctx.lr = 0x82206480;
	sub_821E2E18(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r8,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r8.u8);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8220649c
	if (ctx.cr6.eq) goto loc_8220649C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822064a4
	if (!ctx.cr6.eq) goto loc_822064A4;
loc_8220649C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205310
	ctx.lr = 0x822064A4;
	sub_82205310(ctx, base);
loc_822064A4:
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// beq cr6,0x822064d0
	if (ctx.cr6.eq) goto loc_822064D0;
	// lwz r11,272(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822064d0
	if (ctx.cr6.eq) goto loc_822064D0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822064D0:
	// stw r26,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822062B8) {
	__imp__sub_822062B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822064DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822064DC) {
	__imp__sub_822064DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822064E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822064E8;
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 324);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f31,364(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// beq cr6,0x8220653c
	if (ctx.cr6.eq) goto loc_8220653C;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// mulli r9,r10,624
	ctx.r9.s64 = ctx.r10.s64 * 624;
	// addi r10,r8,26552
	ctx.r10.s64 = ctx.r8.s64 + 26552;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// lbz r6,-624(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + -624);
	// cmplwi cr6,r6,13
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 13, ctx.xer);
	// beq cr6,0x82206540
	if (ctx.cr6.eq) goto loc_82206540;
loc_8220653C:
	// li r9,5
	ctx.r9.s64 = 5;
loc_82206540:
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// addi r28,r10,9624
	ctx.r28.s64 = ctx.r10.s64 + 9624;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,40(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,44(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// bl 0x822d50f8
	ctx.lr = 0x822065AC;
	sub_822D50F8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822066d0
	if (ctx.cr6.eq) goto loc_822066D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,3628(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// bl 0x822d77c0
	ctx.lr = 0x822065F4;
	sub_822D77C0(ctx, base);
	// stfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lwz r9,48(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x8220661c
	if (!ctx.cr6.eq) goto loc_8220661C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f31,84(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f0,26980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26980);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x822066a8
	goto loc_822066A8;
loc_8220661C:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222fdd8
	ctx.lr = 0x82206628;
	sub_8222FDD8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f2,18652(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18652);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,14000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14000);
	ctx.f1.f64 = double(temp.f32);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bl 0x8222fd88
	ctx.lr = 0x82206658;
	sub_8222FD88(ctx, base);
	// fmuls f12,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222fdd8
	ctx.lr = 0x82206670;
	sub_8222FDD8(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f2,12612(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12612);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,5812(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5812);
	ctx.f1.f64 = double(temp.f32);
	// frsp f31,f10
	ctx.f31.f64 = double(float(ctx.f10.f64));
	// bl 0x8222fd88
	ctx.lr = 0x822066A0;
	sub_8222FD88(ctx, base);
	// fmuls f9,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f9,84(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_822066A8:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822066D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x822066DC;
	sub_8222FBE8(ctx, base);
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

PPC_WEAK_FUNC(sub_822064E0) {
	__imp__sub_822064E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822066EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822066EC) {
	__imp__sub_822066EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822066F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1040(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1040);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// beq cr6,0x8220670c
	if (ctx.cr6.eq) goto loc_8220670C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82206778
	if (!ctx.cr6.gt) goto loc_82206778;
loc_8220670C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220676c
	if (ctx.cr6.eq) goto loc_8220676C;
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220676c
	if (ctx.cr6.eq) goto loc_8220676C;
	// lbz r9,1655(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1655);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82206734
	if (!ctx.cr6.eq) goto loc_82206734;
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// b 0x82206778
	goto loc_82206778;
loc_82206734:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220676c
	if (ctx.cr6.eq) goto loc_8220676C;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8220676c
	if (ctx.cr6.eq) goto loc_8220676C;
	// lwz r9,264(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,52(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,328(r4)
	PPC_STORE_U32(ctx.r4.u32 + 328, ctx.r7.u32);
	// lwz r6,264(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// stw r8,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r8.u32);
	// b 0x82206778
	goto loc_82206778;
loc_8220676C:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r10,328(r4)
	PPC_STORE_U32(ctx.r4.u32 + 328, ctx.r10.u32);
loc_82206778:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,328(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,360(r4)
	PPC_STORE_U32(ctx.r4.u32 + 360, ctx.r10.u32);
	// bne cr6,0x82206798
	if (!ctx.cr6.eq) goto loc_82206798;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r10,30000
	ctx.r10.s64 = ctx.r10.s64 + 30000;
	// stw r10,328(r4)
	PPC_STORE_U32(ctx.r4.u32 + 328, ctx.r10.u32);
loc_82206798:
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,328(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-5536
	ctx.r11.s64 = ctx.r11.s64 + -5536;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r11,328(r4)
	PPC_STORE_U32(ctx.r4.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822066F0) {
	__imp__sub_822066F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822067B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822067C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x82332af8
	ctx.lr = 0x822067E8;
	sub_82332AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8222f3a8
	ctx.lr = 0x822067F0;
	sub_8222F3A8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-25976
	ctx.r27.s64 = ctx.r11.s64 + -25976;
	// addi r3,r3,292
	ctx.r3.s64 = ctx.r3.s64 + 292;
	// lhz r4,88(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 88);
	// bl 0x822a24e0
	ctx.lr = 0x82206808;
	sub_822A24E0(ctx, base);
	// addi r3,r31,294
	ctx.r3.s64 = ctx.r31.s64 + 294;
	// lhz r4,88(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 88);
	// bl 0x822a24e0
	ctx.lr = 0x82206814;
	sub_822A24E0(ctx, base);
	// stb r23,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r23.u8);
	// sth r26,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r26.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822062b8
	ctx.lr = 0x82206828;
	sub_822062B8(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82206840
	if (ctx.cr6.eq) goto loc_82206840;
	// lbz r11,1656(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1656);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82206844
	if (!ctx.cr6.eq) goto loc_82206844;
loc_82206840:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82206844:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822064e0
	ctx.lr = 0x82206858;
	sub_822064E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82206898
	if (ctx.cr6.eq) goto loc_82206898;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82206898
	if (ctx.cr6.eq) goto loc_82206898;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f1,f9
	ctx.f1.f64 = double(float(sqrt(ctx.f9.f64)));
	// bl 0x82200258
	ctx.lr = 0x8220688C;
	sub_82200258(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
loc_82206898:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822066f0
	ctx.lr = 0x822068AC;
	sub_822066F0(ctx, base);
	// lwz r3,1056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1056);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822068c8
	if (ctx.cr6.eq) goto loc_822068C8;
	// bl 0x82300a60
	ctx.lr = 0x822068BC;
	sub_82300A60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eb90
	ctx.lr = 0x822068C8;
	sub_8222EB90(ctx, base);
loc_822068C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222feb8
	ctx.lr = 0x822068D4;
	sub_8222FEB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82206920
	if (ctx.cr6.eq) goto loc_82206920;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332b28
	ctx.lr = 0x822068E4;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x822068E8;
	sub_822ACED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229b60
	ctx.lr = 0x822068F0;
	sub_82229B60(ctx, base);
	// lwz r11,1040(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1040);
	// li r5,2
	ctx.r5.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82206918
	if (ctx.cr6.eq) goto loc_82206918;
	// lhz r4,96(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 96);
	// bl 0x82229da8
	ctx.lr = 0x8220690C;
	sub_82229DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82206918:
	// lhz r4,92(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 92);
	// bl 0x82229da8
	ctx.lr = 0x82206920;
	sub_82229DA8(ctx, base);
loc_82206920:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822067B8) {
	__imp__sub_822067B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220692C) {
	__imp__sub_8220692C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82206930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,1044(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1044);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// lfs f0,-31048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r7,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r7.u32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-5536
	ctx.r11.s64 = ctx.r11.s64 + -5536;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82206930) {
	__imp__sub_82206930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220697C) {
	__imp__sub_8220697C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82206980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x82206988;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823de028
	ctx.lr = 0x82206990;
	__savefpr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// bl 0x82332af8
	ctx.lr = 0x822069B8;
	sub_82332AF8(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lfs f30,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f30,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f30.f64 : ctx.f8.f64;
	// fdivs f5,f30,f6
	ctx.f5.f64 = double(float(ctx.f30.f64 / ctx.f6.f64));
	// fmuls f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f3,4(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x8222f3a8
	ctx.lr = 0x82206A08;
	sub_8222F3A8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r19,r11,-25976
	ctx.r19.s64 = ctx.r11.s64 + -25976;
	// addi r3,r3,292
	ctx.r3.s64 = ctx.r3.s64 + 292;
	// lhz r4,150(r19)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r19.u32 + 150);
	// bl 0x822a24e0
	ctx.lr = 0x82206A20;
	sub_822A24E0(ctx, base);
	// addi r3,r31,294
	ctx.r3.s64 = ctx.r31.s64 + 294;
	// lhz r4,150(r19)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r19.u32 + 150);
	// bl 0x822a24e0
	ctx.lr = 0x82206A2C;
	sub_822A24E0(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r25,r11,9624
	ctx.r25.s64 = ctx.r11.s64 + 9624;
	// sth r20,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r20.u16);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r18,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r18.u8);
	// ori r7,r8,4096
	ctx.r7.u64 = ctx.r8.u64 | 4096;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r6,264(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 264);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82206a9c
	if (ctx.cr6.eq) goto loc_82206A9C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82206a9c
	if (!ctx.cr6.eq) goto loc_82206A9C;
	// lwz r11,1028(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1028);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82200258
	ctx.lr = 0x82206A90;
	sub_82200258(ctx, base);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_82206A9C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x821e2e18
	ctx.lr = 0x82206AA8;
	sub_821E2E18(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// bl 0x821e2e18
	ctx.lr = 0x82206AB4;
	sub_821E2E18(ctx, base);
	// lis r11,640
	ctx.r11.s64 = 41943040;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// ori r9,r11,57489
	ctx.r9.u64 = ctx.r11.u64 | 57489;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// stb r10,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r10.u8);
	// lfs f13,1044(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1044);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-31048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r6,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r6.u32);
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-5536
	ctx.r11.s64 = ctx.r11.s64 + -5536;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82206b08
	if (!ctx.cr6.gt) goto loc_82206B08;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
loc_82206B08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r17,5
	ctx.r17.s64 = 5;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// beq cr6,0x82206bc8
	if (ctx.cr6.eq) goto loc_82206BC8;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82206bc8
	if (ctx.cr6.eq) goto loc_82206BC8;
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82206b90
	if (ctx.cr6.eq) goto loc_82206B90;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x821e2e18
	ctx.lr = 0x82206B58;
	sub_821E2E18(ctx, base);
	// lfs f0,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// lfs f13,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,404(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// lfs f12,16(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,408(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lfs f11,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,412(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// lfs f10,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,416(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// lfs f9,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,420(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// b 0x82206c40
	goto loc_82206C40;
loc_82206B90:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// bl 0x821e2e18
	ctx.lr = 0x82206BA0;
	sub_821E2E18(ctx, base);
	// stfs f31,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f31,400(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// lfs f0,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// lfs f13,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,416(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// lfs f12,16(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,420(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// b 0x82206c40
	goto loc_82206C40;
loc_82206BC8:
	// lwz r11,1120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1120);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// bne cr6,0x82206c34
	if (!ctx.cr6.eq) goto loc_82206C34;
	// rlwimi r11,r17,1,28,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r17.u32, 1) & 0xE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF1);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// bl 0x821e2e18
	ctx.lr = 0x82206BEC;
	sub_821E2E18(ctx, base);
	// stfs f31,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,400(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// lfs f0,20560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20560);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,412(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,416(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f5,420(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// b 0x82206c40
	goto loc_82206C40;
loc_82206C34:
	// rlwinm r10,r11,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// bl 0x821e2e18
	ctx.lr = 0x82206C40;
	sub_821E2E18(ctx, base);
loc_82206C40:
	// lwz r11,1120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82206ce4
	if (!ctx.cr6.eq) goto loc_82206CE4;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,9396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9396);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r21,64
	ctx.r3.s64 = ctx.r21.s64 + 64;
	// fadds f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fmadds f8,f11,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f4,f5,f30,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f30.f64 : ctx.f6.f64;
	// fdivs f3,f30,f4
	ctx.f3.f64 = double(float(ctx.f30.f64 / ctx.f4.f64));
	// fmuls f2,f11,f3
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// stfs f2,0(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f1,f13,f3
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfs f1,4(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f0,f9,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x822da518
	ctx.lr = 0x82206CAC;
	sub_822DA518(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,9392(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9392);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f0,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f5,f7,f0,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,0(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f6,4(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f5,8(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_82206CE4:
	// lwz r11,272(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82206cfc
	if (ctx.cr6.eq) goto loc_82206CFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// b 0x82206d00
	goto loc_82206D00;
loc_82206CFC:
	// stw r18,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r18.u32);
loc_82206D00:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// lfs f0,1048(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82206d30
	if (!ctx.cr6.gt) goto loc_82206D30;
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x82206d6c
	goto loc_82206D6C;
loc_82206D30:
	// lwz r10,1028(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1028);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f8,44(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_82206D6C:
	// lwz r10,52(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// addi r27,r31,244
	ctx.r27.s64 = ctx.r31.s64 + 244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r28,r31,232
	ctx.r28.s64 = ctx.r31.s64 + 232;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f11,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f8,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f2,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,232(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,236(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// bl 0x822d50f8
	ctx.lr = 0x82206DE8;
	sub_822D50F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x82206DF4;
	sub_8222FBE8(ctx, base);
	// lfs f13,1052(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1052);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x82206eb8
	if (!ctx.cr6.gt) goto loc_82206EB8;
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822da518
	ctx.lr = 0x82206E18;
	sub_822DA518(ctx, base);
	// bl 0x8222fe20
	ctx.lr = 0x82206E1C;
	sub_8222FE20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f1,f0
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x8222fe20
	ctx.lr = 0x82206E2C;
	sub_8222FE20(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1052(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1052);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f1,f0
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,5524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de720
	ctx.lr = 0x82206E48;
	sub_823DE720(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// addi r11,r31,388
	ctx.r11.s64 = ctx.r31.s64 + 388;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de800
	ctx.lr = 0x82206E58;
	sub_823DE800(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f28,f29
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// fmuls f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f9,388(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f7,392(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f5,396(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f4,f11,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f2,388(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lfs f1,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f11,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f13,392(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,396(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f11,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,396(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
loc_82206EB8:
	// lwz r11,1120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82206f0c
	if (ctx.cr6.eq) goto loc_82206F0C;
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stw r23,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r23.u32);
	// stw r18,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r18.u32);
	// lwz r11,1120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82206f0c
	if (!ctx.cr6.eq) goto loc_82206F0C;
	// stw r17,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r17.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// stw r18,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r18.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82206f08
	if (ctx.cr6.eq) goto loc_82206F08;
	// lbz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82206f08
	if (ctx.cr6.eq) goto loc_82206F08;
	// stw r18,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r18.u32);
	// b 0x82206f0c
	goto loc_82206F0C;
loc_82206F08:
	// stw r23,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r23.u32);
loc_82206F0C:
	// lwz r3,1056(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1056);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82206f28
	if (ctx.cr6.eq) goto loc_82206F28;
	// bl 0x82300a60
	ctx.lr = 0x82206F1C;
	sub_82300A60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eb90
	ctx.lr = 0x82206F28;
	sub_8222EB90(ctx, base);
loc_82206F28:
	// lwz r11,1028(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1028);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,1456(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1456);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfs f0,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,356(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// lfs f5,1448(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1448);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f5,f31
	ctx.cr6.compare(ctx.f5.f64, ctx.f31.f64);
	// bne cr6,0x82206f88
	if (!ctx.cr6.eq) goto loc_82206F88;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// b 0x82206f9c
	goto loc_82206F9C;
loc_82206F88:
	// lwz r11,312(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 312);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r8.u32);
loc_82206F9C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222feb8
	ctx.lr = 0x82206FA8;
	sub_8222FEB8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82332b28
	ctx.lr = 0x82206FB0;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x82206FB4;
	sub_822ACED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229b60
	ctx.lr = 0x82206FBC;
	sub_82229B60(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lhz r4,96(r19)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r19.u32 + 96);
	// bl 0x82229da8
	ctx.lr = 0x82206FCC;
	sub_82229DA8(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,428(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,432(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823de074
	ctx.lr = 0x82206FF4;
	__restfpr_28(ctx, base);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82206980) {
	__imp__sub_82206980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82206FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220703c
	if (ctx.cr6.eq) goto loc_8220703C;
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82207034
	if (ctx.cr6.eq) goto loc_82207034;
loc_82207020:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82207034:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x82207040
	goto loc_82207040;
loc_8220703C:
	// li r8,2065
	ctx.r8.s64 = 2065;
loc_82207040:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 + 176;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82207050:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82207050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82207050;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// fsel f10,f11,f0,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsel f8,f9,f10,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bne cr6,0x822070a8
	if (!ctx.cr6.eq) goto loc_822070A8;
	// lhz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x822070ac
	if (!ctx.cr6.eq) goto loc_822070AC;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// b 0x822070ac
	goto loc_822070AC;
loc_822070A8:
	// lhz r7,126(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
loc_822070AC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821fe618
	ctx.lr = 0x822070BC;
	sub_821FE618(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82276090
	ctx.lr = 0x822070C4;
	sub_82276090(ctx, base);
	// lbz r10,153(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 153);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822070dc
	if (!ctx.cr6.eq) goto loc_822070DC;
	// lbz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82207020
	if (ctx.cr6.eq) goto loc_82207020;
loc_822070DC:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82206FF8) {
	__imp__sub_82206FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82207100) {
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
	// addi r5,r4,12
	ctx.r5.s64 = ctx.r4.s64 + 12;
	// addi r6,r4,24
	ctx.r6.s64 = ctx.r4.s64 + 24;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822da518
	ctx.lr = 0x82207120;
	sub_822DA518(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
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

PPC_WEAK_FUNC(sub_82207100) {
	__imp__sub_82207100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82207158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82207168:
	// lfs f0,-20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfsu f0,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82207168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82207168;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82207158) {
	__imp__sub_82207158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82207188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f10,f11,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f6,f8,f9,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f7.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f1,f5,f11,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f13,f4,f9,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f1.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f6,f12,f11,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f5,f10,f9,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82207188) {
	__imp__sub_82207188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822071EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822071EC) {
	__imp__sub_822071EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822071F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822071F8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823ddff0
	ctx.lr = 0x82207200;
	__savefpr_14(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f10,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// addi r30,r3,232
	ctx.r30.s64 = ctx.r3.s64 + 232;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f8,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822da518
	ctx.lr = 0x8220725C;
	sub_822DA518(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f5,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// lfs f4,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f2,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f4
	ctx.f1.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fneg f0,f2
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f3,204(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f1,208(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82207290:
	// lfs f13,-20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfsu f0,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82207290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82207290;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r9,6
	ctx.r9.s64 = 6;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// lfs f12,232(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 + 176;
	// lfs f11,236(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f16,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f15.f64 = double(temp.f32);
	// lfs f14,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f14.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,240(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfs f30,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f4,f16,f8
	ctx.f4.f64 = double(float(ctx.f16.f64 * ctx.f8.f64));
	// lfs f27,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f3,f15,f8
	ctx.f3.f64 = double(float(ctx.f15.f64 * ctx.f8.f64));
	// lfs f26,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f2,f14,f7
	ctx.f2.f64 = double(float(ctx.f14.f64 * ctx.f7.f64));
	// fmadds f1,f31,f7,f4
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f10,f30,f7,f3
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f9,f29,f8,f2
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f11,f28,f5,f1
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f5.f64 + ctx.f1.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f10,f27,f5,f10
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f5.f64 + ctx.f10.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f9,f26,f5,f9
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f5.f64 + ctx.f9.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f7,f10,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f6,f9,f5
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fadds f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82207358:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82207358
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82207358;
	// lfs f0,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,316(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fsel f10,f11,f0,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f10,172(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f10,176(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsel f8,f9,f10,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// stfs f8,180(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bne cr6,0x8220739c
	if (!ctx.cr6.eq) goto loc_8220739C;
	// li r8,2065
	ctx.r8.s64 = 2065;
loc_8220739C:
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lhz r7,126(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 126);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821fe618
	ctx.lr = 0x822073B4;
	sub_821FE618(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f0,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f9,f0,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f3,f6,f0,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f2,f5,f0,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82206ff8
	ctx.lr = 0x82207400;
	sub_82206FF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82207590
	if (!ctx.cr6.eq) goto loc_82207590;
	// lhz r11,126(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 126);
	// lhz r10,130(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 130);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82207420
	if (ctx.cr6.eq) goto loc_82207420;
	// li r11,2047
	ctx.r11.s64 = 2047;
	// sth r11,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r11.u16);
loc_82207420:
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
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207480
	if (ctx.cr6.eq) goto loc_82207480;
	// lfs f0,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,100(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// b 0x822074b8
	goto loc_822074B8;
loc_82207480:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822074b8
	if (ctx.cr6.eq) goto loc_822074B8;
	// lfs f0,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,308
	ctx.r3.s64 = ctx.r11.s64 + 308;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x821ce288
	ctx.lr = 0x822074A0;
	sub_821CE288(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lfs f12,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r11,324
	ctx.r3.s64 = ctx.r11.s64 + 324;
	// lfs f11,336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// bl 0x821ce288
	ctx.lr = 0x822074B8;
	sub_821CE288(ctx, base);
loc_822074B8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8220756c
	if (!ctx.cr6.eq) goto loc_8220756C;
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,244(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f11,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,368
	ctx.r11.s64 = ctx.r31.s64 + 368;
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,248(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f8,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,252(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lfs f5,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,64(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f2,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,72(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f10,372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f16
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f16.f64));
	// fmuls f6,f15,f8
	ctx.f6.f64 = double(float(ctx.f15.f64 * ctx.f8.f64));
	// fmuls f5,f29,f8
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fmadds f4,f10,f31,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fmadds f3,f30,f10,f6
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f2,f14,f10,f5
	ctx.f2.f64 = double(float(ctx.f14.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f1,f9,f28,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f4.f64));
	// stfs f1,368(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// fmadds f0,f27,f9,f3
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f9.f64 + ctx.f3.f64));
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// fmadds f13,f26,f9,f2
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f9.f64 + ctx.f2.f64));
	// stfs f13,376(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
loc_8220756C:
	// lis r10,-32019
	ctx.r10.s64 = -2098397184;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27112);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,27112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27112, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de03c
	ctx.lr = 0x8220758C;
	__restfpr_14(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82207590:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f20,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f0,f0,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// lfs f23,7540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7540);
	ctx.f23.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// ble cr6,0x822076b8
	if (!ctx.cr6.gt) goto loc_822076B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f22,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f22.f64 = double(temp.f32);
	// lfs f26,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// lfs f21,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f21.f64 = double(temp.f32);
	// lfs f17,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f17.f64 = double(temp.f32);
	// fmr f18,f17
	ctx.f18.f64 = ctx.f17.f64;
	// fcmpu cr6,f0,f17
	ctx.cr6.compare(ctx.f0.f64, ctx.f17.f64);
	// ble cr6,0x822076b8
	if (!ctx.cr6.gt) goto loc_822076B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f25,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f25.f64 = double(temp.f32);
loc_822075D8:
	// fneg f24,f18
	ctx.fpscr.disableFlushMode();
	ctx.f24.u64 = ctx.f18.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f24,f18
	ctx.cr6.compare(ctx.f24.f64, ctx.f18.f64);
	// bgt cr6,0x822076a4
	if (ctx.cr6.gt) goto loc_822076A4;
loc_822075E4:
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmr f19,f23
	ctx.f19.f64 = ctx.f23.f64;
	// fmuls f13,f0,f20
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fcmpu cr6,f13,f23
	ctx.cr6.compare(ctx.f13.f64, ctx.f23.f64);
	// ble cr6,0x82207690
	if (!ctx.cr6.gt) goto loc_82207690;
loc_822075F8:
	// fneg f27,f19
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = ctx.f19.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f27,f19
	ctx.cr6.compare(ctx.f27.f64, ctx.f19.f64);
	// bgt cr6,0x8220767c
	if (ctx.cr6.gt) goto loc_8220767C;
loc_82207604:
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f23
	ctx.f30.f64 = ctx.f23.f64;
	// fmuls f13,f0,f20
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fcmpu cr6,f13,f23
	ctx.cr6.compare(ctx.f13.f64, ctx.f23.f64);
	// ble cr6,0x82207670
	if (!ctx.cr6.gt) goto loc_82207670;
loc_82207618:
	// fneg f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x8220765c
	if (ctx.cr6.gt) goto loc_8220765C;
	// fadds f29,f22,f27
	ctx.f29.f64 = double(float(ctx.f22.f64 + ctx.f27.f64));
	// fadds f28,f21,f24
	ctx.f28.f64 = double(float(ctx.f21.f64 + ctx.f24.f64));
loc_8220762C:
	// fadds f0,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 + ctx.f31.f64));
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f28,104(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206ff8
	ctx.lr = 0x82207648;
	sub_82206FF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822076e8
	if (ctx.cr6.eq) goto loc_822076E8;
	// fmadds f31,f30,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 * ctx.f25.f64 + ctx.f31.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x8220762c
	if (!ctx.cr6.gt) goto loc_8220762C;
loc_8220765C:
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f30,f23
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f23.f64));
	// fmuls f13,f0,f20
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// blt cr6,0x82207618
	if (ctx.cr6.lt) goto loc_82207618;
loc_82207670:
	// fmadds f27,f19,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f19.f64 * ctx.f25.f64 + ctx.f27.f64));
	// fcmpu cr6,f27,f19
	ctx.cr6.compare(ctx.f27.f64, ctx.f19.f64);
	// ble cr6,0x82207604
	if (!ctx.cr6.gt) goto loc_82207604;
loc_8220767C:
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fadds f19,f19,f23
	ctx.f19.f64 = double(float(ctx.f19.f64 + ctx.f23.f64));
	// fmuls f13,f0,f20
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fcmpu cr6,f19,f13
	ctx.cr6.compare(ctx.f19.f64, ctx.f13.f64);
	// blt cr6,0x822075f8
	if (ctx.cr6.lt) goto loc_822075F8;
loc_82207690:
	// fcmpu cr6,f24,f17
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f17.f64);
	// beq cr6,0x822076a4
	if (ctx.cr6.eq) goto loc_822076A4;
	// fmadds f24,f18,f25,f24
	ctx.f24.f64 = double(float(ctx.f18.f64 * ctx.f25.f64 + ctx.f24.f64));
	// fcmpu cr6,f24,f18
	ctx.cr6.compare(ctx.f24.f64, ctx.f18.f64);
	// ble cr6,0x822075e4
	if (!ctx.cr6.gt) goto loc_822075E4;
loc_822076A4:
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fadds f18,f18,f23
	ctx.f18.f64 = double(float(ctx.f18.f64 + ctx.f23.f64));
	// fmuls f13,f0,f20
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fcmpu cr6,f18,f13
	ctx.cr6.compare(ctx.f18.f64, ctx.f13.f64);
	// blt cr6,0x822075d8
	if (ctx.cr6.lt) goto loc_822075D8;
loc_822076B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206ff8
	ctx.lr = 0x822076C4;
	sub_82206FF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82207820
	if (!ctx.cr6.eq) goto loc_82207820;
	// li r11,2047
	ctx.r11.s64 = 2047;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r11.u16);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de03c
	ctx.lr = 0x822076E4;
	__restfpr_14(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822076E8:
	// lhz r11,126(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 126);
	// lhz r10,130(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 130);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82207700
	if (ctx.cr6.eq) goto loc_82207700;
	// li r11,2047
	ctx.r11.s64 = 2047;
	// sth r11,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r11.u16);
loc_82207700:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207760
	if (ctx.cr6.eq) goto loc_82207760;
	// lfs f0,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,100(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// b 0x82207798
	goto loc_82207798;
loc_82207760:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207798
	if (ctx.cr6.eq) goto loc_82207798;
	// lfs f0,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,308
	ctx.r3.s64 = ctx.r11.s64 + 308;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x821ce288
	ctx.lr = 0x82207780;
	sub_821CE288(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lfs f12,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r11,324
	ctx.r3.s64 = ctx.r11.s64 + 324;
	// lfs f11,336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// bl 0x821ce288
	ctx.lr = 0x82207798;
	sub_821CE288(ctx, base);
loc_82207798:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822077fc
	if (!ctx.cr6.eq) goto loc_822077FC;
	// lfs f0,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,368
	ctx.r11.s64 = ctx.r31.s64 + 368;
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f16
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f16.f64));
	// fmuls f11,f15,f0
	ctx.f11.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// lfs f10,372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f10,f8,f12
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f1,f7,f10,f11
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f0,f14,f10,f9
	ctx.f0.f64 = double(float(ctx.f14.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fmadds f13,f6,f5,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f2.f64));
	// stfs f13,368(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// fmadds f12,f4,f6,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f1.f64));
	// stfs f12,372(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// fmadds f11,f3,f6,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f0.f64));
	// stfs f11,376(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
loc_822077FC:
	// lis r10,-32019
	ctx.r10.s64 = -2098397184;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27112);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,27112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27112, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de03c
	ctx.lr = 0x8220781C;
	__restfpr_14(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82207820:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de03c
	ctx.lr = 0x82207830;
	__restfpr_14(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822071F0) {
	__imp__sub_822071F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82207834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82207834) {
	__imp__sub_82207834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82207838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x82207840;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de018
	ctx.lr = 0x82207848;
	__savefpr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16768(r1)
	ea = -16768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r21,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r21.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// addi r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 + 176;
loc_82207888:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82207888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82207888;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x822079b0
	if (!ctx.cr6.eq) goto loc_822079B0;
	// lhz r3,604(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822079b0
	if (ctx.cr6.eq) goto loc_822079B0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x8222e320
	ctx.lr = 0x822078B4;
	sub_8222E320(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822079b0
	if (ctx.cr6.eq) goto loc_822079B0;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lvrx128 v63,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lvrx128 v61,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// lvlx128 v60,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r11,r6
	temp.u32 = ctx.r11.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v58,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r9,r10,-30336
	ctx.r9.s64 = ctx.r10.s64 + -30336;
	// lvlx128 v57,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v56,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v55,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v54,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v53,v57,v59
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vor128 v52,v54,v56
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r8,-5792
	ctx.r6.s64 = ctx.r8.s64 + -5792;
	// vand128 v51,v58,v63
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// li r9,4
	ctx.r9.s64 = 4;
	// vand128 v50,v55,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// vand128 v49,v53,v63
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// li r10,8
	ctx.r10.s64 = 8;
	// vand128 v48,v52,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// vsubfp128 v47,v51,v50
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v47.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v50.f32)));
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// vaddfp128 v46,v51,v50
	simde_mm_store_ps(ctx.v46.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v50.f32)));
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// vsubfp128 v45,v49,v48
	simde_mm_store_ps(ctx.v45.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vaddfp128 v44,v49,v48
	simde_mm_store_ps(ctx.v44.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vminfp128 v43,v45,v47
	simde_mm_store_ps(ctx.v43.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vmaxfp128 v42,v44,v46
	simde_mm_store_ps(ctx.v42.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vaddfp128 v41,v43,v42
	simde_mm_store_ps(ctx.v41.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vmulfp128 v40,v41,v63
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v39,v40,v43
	simde_mm_store_ps(ctx.v39.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vspltw128 v38,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xFF));
	// vspltw128 v37,v40,1
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xAA));
	// vspltw128 v36,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0x55));
	// stvewx128 v38,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v37,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// vspltw128 v35,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xFF));
	// vspltw128 v34,v39,1
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xAA));
	// vspltw128 v33,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0x55));
	// stvewx128 v35,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v35.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v34,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v33,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v33.u32[3 - ((ea & 0xF) >> 2)]);
loc_822079B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82207a4c
	if (!ctx.cr6.eq) goto loc_82207A4C;
	// lfs f0,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82207a4c
	if (!ctx.cr6.eq) goto loc_82207A4C;
	// lfs f0,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82207a4c
	if (!ctx.cr6.eq) goto loc_82207A4C;
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82207a4c
	if (!ctx.cr6.eq) goto loc_82207A4C;
	// lfs f0,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82207a4c
	if (!ctx.cr6.eq) goto loc_82207A4C;
	// lfs f0,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82207a4c
	if (!ctx.cr6.eq) goto loc_82207A4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f5,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f10,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f4,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f4.f64 = double(temp.f32);
	// fadds f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// lfs f3,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f3.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fadds f11,f4,f7
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f10,f3,f6
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// b 0x82207ab0
	goto loc_82207AB0;
loc_82207A4C:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// fabs f8,f12
	ctx.f8.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fabs f5,f7
	ctx.f5.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfs f4,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f10,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// fadds f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fadds f2,f8,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fadds f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fmuls f0,f3,f3
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f13,f2,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f9,f1,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fadds f0,f8,f31
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
loc_82207AB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f28,f12,f7
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// lfs f5,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f27,f11,f6
	ctx.f27.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f26,f10,f5
	ctx.f26.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r30,232
	ctx.r31.s64 = ctx.r30.s64 + 232;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// lfs f13,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmr f25,f9
	ctx.f25.f64 = ctx.f9.f64;
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmr f24,f8
	ctx.f24.f64 = ctx.f8.f64;
	// fabs f1,f4
	ctx.f1.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fabs f7,f2
	ctx.f7.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fabs f13,f3
	ctx.f13.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fadds f6,f12,f4
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f5,f11,f3
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f4,f10,f2
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f3,156(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f1,f7,f8
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f2,160(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82340cf0
	ctx.lr = 0x82207B30;
	sub_82340CF0(ctx, base);
	// lis r6,512
	ctx.r6.s64 = 33554432;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// ori r6,r6,384
	ctx.r6.u64 = ctx.r6.u64 | 384;
	// addi r4,r1,8400
	ctx.r4.s64 = ctx.r1.s64 + 8400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8227bff0
	ctx.lr = 0x82207B48;
	sub_8227BFF0(ctx, base);
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f10,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f5,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,244(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 244, temp.u32);
	// lfs f2,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f0,248(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 248, temp.u32);
	// lfs f13,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,252(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 252, temp.u32);
	// bl 0x82340d30
	ctx.lr = 0x82207BB4;
	sub_82340D30(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r25,r11,26552
	ctx.r25.s64 = ctx.r11.s64 + 26552;
	// ble cr6,0x82207cc0
	if (!ctx.cr6.gt) goto loc_82207CC0;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r31,r1,8400
	ctx.r31.s64 = ctx.r1.s64 + 8400;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82207BD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82207c18
	if (ctx.cr6.eq) goto loc_82207C18;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82207c18
	if (ctx.cr6.eq) goto loc_82207C18;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82207c18
	if (ctx.cr6.eq) goto loc_82207C18;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82207c18
	if (ctx.cr6.eq) goto loc_82207C18;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82207c18
	if (ctx.cr6.eq) goto loc_82207C18;
	// lbz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207cb4
	if (ctx.cr6.eq) goto loc_82207CB4;
loc_82207C18:
	// lhz r11,130(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 130);
	// lhz r10,126(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82207ca8
	if (ctx.cr6.eq) goto loc_82207CA8;
	// lfs f0,208(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f12,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// fsubs f9,f11,f27
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f27.f64));
	// lfs f8,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f25
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f25.f64));
	// fsubs f5,f7,f26
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f26.f64));
	// lfs f4,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f24
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f24.f64));
	// fabs f2,f13
	ctx.f2.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f1,f9
	ctx.f1.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f0,f5
	ctx.f0.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fsubs f13,f2,f10
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fsubs f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fsubs f11,f0,f3
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsel f10,f13,f30,f31
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f31.f64;
	// fsel f9,f12,f30,f10
	ctx.f9.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f10.f64;
	// fsel f8,f11,f30,f9
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f30.f64 : ctx.f9.f64;
	// fcmpu cr6,f8,f30
	ctx.cr6.compare(ctx.f8.f64, ctx.f30.f64);
	// bne cr6,0x82207c8c
	if (!ctx.cr6.eq) goto loc_82207C8C;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82207C8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207cb4
	if (ctx.cr6.eq) goto loc_82207CB4;
	// addi r4,r3,232
	ctx.r4.s64 = ctx.r3.s64 + 232;
	// bl 0x82206ff8
	ctx.lr = 0x82207CA0;
	sub_82206FF8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82207cb4
	if (!ctx.cr6.eq) goto loc_82207CB4;
loc_82207CA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
loc_82207CB4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82207bd4
	if (!ctx.cr0.eq) goto loc_82207BD4;
loc_82207CC0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82207cec
	if (!ctx.cr6.gt) goto loc_82207CEC;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82207CD4:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82340cf0
	ctx.lr = 0x82207CE4;
	sub_82340CF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82207cd4
	if (!ctx.cr0.eq) goto loc_82207CD4;
loc_82207CEC:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82207e44
	if (!ctx.cr6.gt) goto loc_82207E44;
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
	// li r26,-1
	ctx.r26.s64 = -1;
	// lis r28,-32019
	ctx.r28.s64 = -2098397184;
loc_82207D04:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,27112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27112);
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// add r31,r10,r25
	ctx.r31.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f11,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lbzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r25.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x82207d5c
	if (!ctx.cr6.eq) goto loc_82207D5C;
	// lfs f0,368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f13,372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f12,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_82207D5C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822071f0
	ctx.lr = 0x82207D70;
	sub_822071F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82207df4
	if (!ctx.cr6.eq) goto loc_82207DF4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82207df4
	if (ctx.cr6.eq) goto loc_82207DF4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82207df4
	if (ctx.cr6.eq) goto loc_82207DF4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82207df4
	if (ctx.cr6.eq) goto loc_82207DF4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82207db8
	if (ctx.cr6.eq) goto loc_82207DB8;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82207db8
	if (ctx.cr6.eq) goto loc_82207DB8;
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82207e10
	if (ctx.cr6.eq) goto loc_82207E10;
loc_82207DB8:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// ori r8,r8,34463
	ctx.r8.u64 = ctx.r8.u64 | 34463;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f1080
	ctx.lr = 0x82207DF0;
	sub_821F1080(ctx, base);
	// b 0x82207dfc
	goto loc_82207DFC;
loc_82207DF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x82207DFC;
	sub_82340D30(ctx, base);
loc_82207DFC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82207d04
	if (ctx.cr6.lt) goto loc_82207D04;
	// b 0x82207e18
	goto loc_82207E18;
loc_82207E10:
	// stw r31,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r31.u32);
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
loc_82207E18:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82207e44
	if (!ctx.cr6.gt) goto loc_82207E44;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82207E2C:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82340d30
	ctx.lr = 0x82207E3C;
	sub_82340D30(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82207e2c
	if (!ctx.cr0.eq) goto loc_82207E2C;
loc_82207E44:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,16768
	ctx.r1.s64 = ctx.r1.s64 + 16768;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de064
	ctx.lr = 0x82207E54;
	__restfpr_24(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82207838) {
	__imp__sub_82207838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82207E58) {
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
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lhz r9,126(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r5,r3,232
	ctx.r5.s64 = ctx.r3.s64 + 232;
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// addi r7,r10,9624
	ctx.r7.s64 = ctx.r10.s64 + 9624;
	// addi r4,r3,376
	ctx.r4.s64 = ctx.r3.s64 + 376;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r6,-32206
	ctx.r6.s64 = -2110652416;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// lwz r10,56(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// addi r6,r6,10424
	ctx.r6.s64 = ctx.r6.s64 + 10424;
	// lwz r9,52(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,5804(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r10,641
	ctx.r10.s64 = 42008576;
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// ori r10,r10,32785
	ctx.r10.u64 = ctx.r10.u64 | 32785;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x82207f0c
	if (ctx.cr6.eq) goto loc_82207F0C;
loc_82207EF0:
	// lwz r9,204(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r8,468(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82207ef0
	if (!ctx.cr6.eq) goto loc_82207EF0;
loc_82207F0C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8222b7c8
	ctx.lr = 0x82207F14;
	sub_8222B7C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82207E58) {
	__imp__sub_82207E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82207F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82207F24) {
	__imp__sub_82207F24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82207F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82207F30;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r23,r3,16
	ctx.r23.s64 = ctx.r3.s64 + 16;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x8220838c
	if (ctx.cr6.eq) goto loc_8220838C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82207f68
	if (ctx.cr6.lt) goto loc_82207F68;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// ble cr6,0x82207f6c
	if (!ctx.cr6.gt) goto loc_82207F6C;
loc_82207F68:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82207F6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220838c
	if (!ctx.cr6.eq) goto loc_8220838C;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82207fac
	if (ctx.cr6.eq) goto loc_82207FAC;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// bl 0x822555d8
	ctx.lr = 0x82207F90;
	sub_822555D8(ctx, base);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822d7c78
	ctx.lr = 0x82207F9C;
	sub_822D7C78(ctx, base);
	// addi r22,r31,52
	ctx.r22.s64 = ctx.r31.s64 + 52;
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// b 0x82207fdc
	goto loc_82207FDC;
loc_82207FAC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82207fc8
	if (!ctx.cr6.eq) goto loc_82207FC8;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82207fc8
	if (!ctx.cr6.eq) goto loc_82207FC8;
	// stw r25,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r25.u32);
loc_82207FC8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r22,r31,52
	ctx.r22.s64 = ctx.r31.s64 + 52;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82207fdc
	if (!ctx.cr6.eq) goto loc_82207FDC;
	// stw r25,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r25.u32);
loc_82207FDC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82207ff4
	if (!ctx.cr6.eq) goto loc_82207FF4;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220838c
	if (ctx.cr6.eq) goto loc_8220838C;
loc_82207FF4:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82208014
	if (ctx.cr6.eq) goto loc_82208014;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207e58
	ctx.lr = 0x8220800C;
	sub_82207E58(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82208014:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lis r30,-32019
	ctx.r30.s64 = -2098397184;
	// addi r24,r11,27112
	ctx.r24.s64 = ctx.r11.s64 + 27112;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r28,r11,9624
	ctx.r28.s64 = ctx.r11.s64 + 9624;
	// stw r24,27112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27112, ctx.r24.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,52(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x8231f840
	ctx.lr = 0x82208040;
	sub_8231F840(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,52(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x8231f840
	ctx.lr = 0x82208050;
	sub_8231F840(ctx, base);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lfs f8,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// lfs f5,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// addi r27,r31,232
	ctx.r27.s64 = ctx.r31.s64 + 232;
	// lfs f2,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f3,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r26,r31,244
	ctx.r26.s64 = ctx.r31.s64 + 244;
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f5
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fsubs f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82207838
	ctx.lr = 0x822080CC;
	sub_82207838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,27112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27112);
	// bne cr6,0x82208268
	if (!ctx.cr6.eq) goto loc_82208268;
	// addi r25,r11,-32
	ctx.r25.s64 = ctx.r11.s64 + -32;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x822081d8
	if (ctx.cr6.lt) goto loc_822081D8;
	// addi r30,r25,12
	ctx.r30.s64 = ctx.r25.s64 + 12;
loc_822080EC:
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 232, temp.u32);
	// lfs f13,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 236, temp.u32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 240, temp.u32);
	// lfs f11,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// lfs f10,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208160
	if (ctx.cr6.eq) goto loc_82208160;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,100(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f11,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f10,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// b 0x8220819c
	goto loc_8220819C;
loc_82208160:
	// lwz r11,268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220819c
	if (ctx.cr6.eq) goto loc_8220819C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,308
	ctx.r3.s64 = ctx.r11.s64 + 308;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x821ce288
	ctx.lr = 0x82208184;
	sub_821CE288(ctx, base);
	// lwz r11,268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// lfs f12,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r11,324
	ctx.r3.s64 = ctx.r11.s64 + 324;
	// lfs f11,336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// bl 0x821ce288
	ctx.lr = 0x8220819C;
	sub_821CE288(ctx, base);
loc_8220819C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822081c0
	if (!ctx.cr6.eq) goto loc_822081C0;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 368, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,372(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 372, temp.u32);
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,376(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 376, temp.u32);
loc_822081C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82340d30
	ctx.lr = 0x822081C8;
	sub_82340D30(ctx, base);
	// addi r25,r25,-32
	ctx.r25.s64 = ctx.r25.s64 + -32;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x822080ec
	if (!ctx.cr6.lt) goto loc_822080EC;
loc_822081D8:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// lwz r4,52(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x8231f840
	ctx.lr = 0x82208218;
	sub_8231F840(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,52(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x8231f840
	ctx.lr = 0x82208228;
	sub_8231F840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x82208230;
	sub_82340D30(ctx, base);
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// lbz r4,291(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r11,r6,8272
	ctx.r11.s64 = ctx.r6.s64 + 8272;
	// mulli r3,r4,44
	ctx.r3.s64 = ctx.r4.s64 * 44;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220838c
	if (ctx.cr6.eq) goto loc_8220838C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82208268:
	// addi r30,r11,-32
	ctx.r30.s64 = ctx.r11.s64 + -32;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x822082a0
	if (ctx.cr6.lt) goto loc_822082A0;
loc_82208274:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,268(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82208294
	if (ctx.cr6.eq) goto loc_82208294;
	// bl 0x821aba40
	ctx.lr = 0x82208288;
	sub_821ABA40(ctx, base);
	// lwz r11,268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8223fcb0
	ctx.lr = 0x82208294;
	sub_8223FCB0(ctx, base);
loc_82208294:
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82208274
	if (!ctx.cr6.lt) goto loc_82208274;
loc_822082A0:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822082f4
	if (ctx.cr6.eq) goto loc_822082F4;
	// bl 0x822578d0
	ctx.lr = 0x822082B0;
	sub_822578D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220838c
	if (ctx.cr6.eq) goto loc_8220838C;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x82259630
	ctx.lr = 0x822082C8;
	sub_82259630(ctx, base);
	// stw r25,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r25.u32);
	// stw r25,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r25.u32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stw r25,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 132);
	// bl 0x82229da8
	ctx.lr = 0x822082EC;
	sub_82229DA8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822082F4:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,8272
	ctx.r30.s64 = ctx.r11.s64 + 8272;
	// beq cr6,0x82208344
	if (ctx.cr6.eq) goto loc_82208344;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,52(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82208344
	if (ctx.cr6.lt) goto loc_82208344;
	// lbz r11,291(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// mulli r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 * 44;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208344
	if (ctx.cr6.eq) goto loc_82208344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82208344:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220838c
	if (ctx.cr6.eq) goto loc_8220838C;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,52(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8220838c
	if (ctx.cr6.lt) goto loc_8220838C;
	// lbz r11,291(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// mulli r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 * 44;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220838c
	if (ctx.cr6.eq) goto loc_8220838C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220838C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220838C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82207F28) {
	__imp__sub_82207F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82208394) {
	__imp__sub_82208394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208398) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220849c
	if (!ctx.cr6.eq) goto loc_8220849C;
	// bl 0x822846c0
	ctx.lr = 0x822083C4;
	sub_822846C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220849c
	if (ctx.cr6.eq) goto loc_8220849C;
	// bl 0x822ef118
	ctx.lr = 0x822083D4;
	sub_822EF118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220849c
	if (ctx.cr6.eq) goto loc_8220849C;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f4370
	ctx.lr = 0x822083F4;
	sub_822F4370(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x82208400;
	sub_822DA650(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// beq cr6,0x8220845c
	if (ctx.cr6.eq) goto loc_8220845C;
	// lfs f0,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f12,188(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x822d67f0
	ctx.lr = 0x82208450;
	sub_822D67F0(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x8220845C;
	sub_8222FB90(ctx, base);
loc_8220845C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d6f10
	ctx.lr = 0x82208464;
	sub_822D6F10(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8220849c
	if (ctx.cr6.eq) goto loc_8220849C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x822d7bf0
	ctx.lr = 0x82208474;
	sub_822D7BF0(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822d5c30
	ctx.lr = 0x82208484;
	sub_822D5C30(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822d7c78
	ctx.lr = 0x82208490;
	sub_822D7C78(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x8220849C;
	sub_8222FBE8(ctx, base);
loc_8220849C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

PPC_WEAK_FUNC(sub_82208398) {
	__imp__sub_82208398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822084B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822084C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208578
	if (ctx.cr6.eq) goto loc_82208578;
	// bl 0x821e5e70
	ctx.lr = 0x822084D8;
	sub_821E5E70(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x822084f8
	if (ctx.cr6.lt) goto loc_822084F8;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// ble cr6,0x822084fc
	if (!ctx.cr6.gt) goto loc_822084FC;
loc_822084F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822084FC:
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8222fb90
	ctx.lr = 0x8220850C;
	sub_8222FB90(ctx, base);
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x82208518;
	sub_8222FBE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x82208520;
	sub_82340D30(ctx, base);
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220855c
	if (ctx.cr6.eq) goto loc_8220855C;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// bl 0x821fd350
	ctx.lr = 0x8220853C;
	sub_821FD350(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822085ac
	if (ctx.cr6.eq) goto loc_822085AC;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8220855C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220857c
	if (ctx.cr6.eq) goto loc_8220857C;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x8220857c
	goto loc_8220857C;
loc_82208578:
	// bl 0x82208398
	ctx.lr = 0x8220857C;
	sub_82208398(ctx, base);
loc_8220857C:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822085a0
	if (ctx.cr6.eq) goto loc_822085A0;
	// bl 0x822334c0
	ctx.lr = 0x82208590;
	sub_822334C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd350
	ctx.lr = 0x82208598;
	sub_821FD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822085A0:
	// bl 0x82207f28
	ctx.lr = 0x822085A4;
	sub_82207F28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd350
	ctx.lr = 0x822085AC;
	sub_821FD350(ctx, base);
loc_822085AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822084B8) {
	__imp__sub_822084B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822085B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822085B4) {
	__imp__sub_822085B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822085B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13368
	ctx.r3.s64 = ctx.r11.s64 + 13368;
	// b 0x8223d030
	sub_8223D030(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822085B8) {
	__imp__sub_822085B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822085C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,12664
	ctx.r3.s64 = ctx.r11.s64 + 12664;
	// b 0x8223d030
	sub_8223D030(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822085C8) {
	__imp__sub_822085C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822085D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,14400
	ctx.r3.s64 = ctx.r11.s64 + 14400;
	// b 0x8223d030
	sub_8223D030(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822085D8) {
	__imp__sub_822085D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822085E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13432
	ctx.r3.s64 = ctx.r11.s64 + 13432;
	// b 0x8223d030
	sub_8223D030(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822085E8) {
	__imp__sub_822085E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822085F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,14136
	ctx.r3.s64 = ctx.r11.s64 + 14136;
	// b 0x8223d030
	sub_8223D030(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822085F8) {
	__imp__sub_822085F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208608) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220862c
	if (ctx.cr6.eq) goto loc_8220862C;
	// bl 0x82332b28
	ctx.lr = 0x82208628;
	sub_82332B28(ctx, base);
	// b 0x82208634
	goto loc_82208634;
loc_8220862C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82208634:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8223cf38
	ctx.lr = 0x82208640;
	sub_8223CF38(ctx, base);
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

PPC_WEAK_FUNC(sub_82208608) {
	__imp__sub_82208608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82208654) {
	__imp__sub_82208654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8223c4d8
	ctx.lr = 0x82208668;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82208678;
	sub_8223CFB0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82208698
	if (!ctx.cr6.eq) goto loc_82208698;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82208698:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82232100
	ctx.lr = 0x822086A0;
	sub_82232100(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82208658) {
	__imp__sub_82208658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822086B0) {
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
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,34079
	ctx.r10.u64 = ctx.r11.u64 | 34079;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mulhw r9,r3,r10
	ctx.r9.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r7,r8,200
	ctx.r7.s64 = ctx.r8.s64 * 200;
	// subf. r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822086f8
	if (ctx.cr0.eq) goto loc_822086F8;
	// bl 0x82332b28
	ctx.lr = 0x822086F4;
	sub_82332B28(ctx, base);
	// b 0x82208700
	goto loc_82208700;
loc_822086F8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82208700:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8223cf38
	ctx.lr = 0x8220870C;
	sub_8223CF38(ctx, base);
	// li r11,200
	ctx.r11.s64 = 200;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// divw r10,r31,r11
	ctx.r10.s32 = ctx.r31.s32 / ctx.r11.s32;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82208728;
	sub_822E40F0(ctx, base);
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

PPC_WEAK_FUNC(sub_822086B0) {
	__imp__sub_822086B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82208758;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8223cfb0
	ctx.lr = 0x82208768;
	sub_8223CFB0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220878c
	if (!ctx.cr6.eq) goto loc_8220878C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8220878C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8220879C;
	sub_8223E078(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8231f488
	ctx.lr = 0x822087A8;
	sub_8231F488(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82208740) {
	__imp__sub_82208740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822087BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822087BC) {
	__imp__sub_822087BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822087C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822087C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32019
	ctx.r11.s64 = -2098397184;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,27192
	ctx.r31.s64 = ctx.r11.s64 + 27192;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,45016
	ctx.r5.u64 = ctx.r5.u64 | 45016;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822087F0;
	sub_823DE1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r3,r10,13368
	ctx.r3.s64 = ctx.r10.s64 + 13368;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// ori r6,r6,45016
	ctx.r6.u64 = ctx.r6.u64 | 45016;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// addi r11,r31,240
	ctx.r11.s64 = ctx.r31.s64 + 240;
	// bl 0x8223dc88
	ctx.lr = 0x82208878;
	sub_8223DC88(ctx, base);
	// addis r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 65536;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,-21332
	ctx.r5.s64 = ctx.r5.s64 + -21332;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8220888C;
	sub_822E40F0(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// ori r8,r9,44220
	ctx.r8.u64 = ctx.r9.u64 | 44220;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
	// lhzx r3,r30,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r8.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822088b0
	if (ctx.cr6.eq) goto loc_822088B0;
	// bl 0x82332b28
	ctx.lr = 0x822088AC;
	sub_82332B28(ctx, base);
	// b 0x822088b4
	goto loc_822088B4;
loc_822088B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822088B4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8223cf38
	ctx.lr = 0x822088C0;
	sub_8223CF38(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44224
	ctx.r10.u64 = ctx.r11.u64 | 44224;
	// lhzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822088ec
	if (ctx.cr6.eq) goto loc_822088EC;
	// bl 0x82332b28
	ctx.lr = 0x822088D8;
	sub_82332B28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8223cf38
	ctx.lr = 0x822088E4;
	sub_8223CF38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822088EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8223cf38
	ctx.lr = 0x822088FC;
	sub_8223CF38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822087C0) {
	__imp__sub_822087C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82208904) {
	__imp__sub_82208904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82208910;
	__savegprlr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13368
	ctx.r3.s64 = ctx.r11.s64 + 13368;
	// ori r5,r5,45016
	ctx.r5.u64 = ctx.r5.u64 | 45016;
	// bl 0x8223dd20
	ctx.lr = 0x82208938;
	sub_8223DD20(ctx, base);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r27,r27,-21332
	ctx.r27.s64 = ctx.r27.s64 + -21332;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r29,256(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x8223e078
	ctx.lr = 0x82208954;
	sub_8223E078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8220895C;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x8220896C;
	sub_8223CFB0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82208980
	if (!ctx.cr6.eq) goto loc_82208980;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82208988
	goto loc_82208988;
loc_82208980:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82232100
	ctx.lr = 0x82208988;
	sub_82232100(ctx, base);
loc_82208988:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r28,r28,-21316
	ctx.r28.s64 = ctx.r28.s64 + -21316;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// bl 0x8223c4d8
	ctx.lr = 0x822089A0;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x822089B0;
	sub_8223CFB0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822089c4
	if (!ctx.cr6.eq) goto loc_822089C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822089cc
	goto loc_822089CC;
loc_822089C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82232100
	ctx.lr = 0x822089CC;
	sub_82232100(ctx, base);
loc_822089CC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// ori r7,r11,44224
	ctx.r7.u64 = ctx.r11.u64 | 44224;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,9240
	ctx.r10.s64 = ctx.r11.s64 + 9240;
	// sthx r8,r31,r7
	PPC_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u16);
	// lbz r9,29088(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82208a14
	if (!ctx.cr6.eq) goto loc_82208A14;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r11,-32312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32312);
	// subfc r7,r11,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r29.s64 - ctx.r11.s64;
	// eqv r6,r11,r29
	ctx.r6.u64 = ~(ctx.r11.u64 ^ ctx.r29.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// b 0x82208a2c
	goto loc_82208A2C;
loc_82208A14:
	// mulli r11,r29,9780
	ctx.r11.s64 = ctx.r29.s64 * 9780;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
loc_82208A2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208a64
	if (ctx.cr6.eq) goto loc_82208A64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82208a48
	if (!ctx.cr6.eq) goto loc_82208A48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82208a54
	goto loc_82208A54;
loc_82208A48:
	// mulli r11,r29,9780
	ctx.r11.s64 = ctx.r29.s64 * 9780;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
loc_82208A54:
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// lhz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8233cee8
	ctx.lr = 0x82208A64;
	sub_8233CEE8(ctx, base);
loc_82208A64:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82208908) {
	__imp__sub_82208908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82208A6C) {
	__imp__sub_82208A6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208A70) {
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
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,624
	ctx.r5.s64 = 624;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82208A9C;
	sub_823DE1F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,12664
	ctx.r3.s64 = ctx.r11.s64 + 12664;
	// li r6,624
	ctx.r6.s64 = 624;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223dc88
	ctx.lr = 0x82208AB8;
	sub_8223DC88(ctx, base);
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82208ae4
	if (ctx.cr6.eq) goto loc_82208AE4;
	// bl 0x82332b28
	ctx.lr = 0x82208AC8;
	sub_82332B28(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8223cf38
	ctx.lr = 0x82208AD4;
	sub_8223CF38(ctx, base);
	// addi r5,r31,168
	ctx.r5.s64 = ctx.r31.s64 + 168;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82208AE4;
	sub_822E40F0(ctx, base);
loc_82208AE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82237608
	ctx.lr = 0x82208AF0;
	sub_82237608(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
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

PPC_WEAK_FUNC(sub_82208A70) {
	__imp__sub_82208A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208B08) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r11,12664
	ctx.r3.s64 = ctx.r11.s64 + 12664;
	// li r5,624
	ctx.r5.s64 = 624;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223dd20
	ctx.lr = 0x82208B3C;
	sub_8223DD20(ctx, base);
	// lhz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82208b90
	if (ctx.cr6.eq) goto loc_82208B90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82208B50;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8223cfb0
	ctx.lr = 0x82208B60;
	sub_8223CFB0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82208b74
	if (!ctx.cr6.eq) goto loc_82208B74;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82208b7c
	goto loc_82208B7C;
loc_82208B74:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82232100
	ctx.lr = 0x82208B7C;
	sub_82232100(ctx, base);
loc_82208B7C:
	// sth r3,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r3.u16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x82208B90;
	sub_8223E078(ctx, base);
loc_82208B90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82237660
	ctx.lr = 0x82208B9C;
	sub_82237660(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

PPC_WEAK_FUNC(sub_82208B08) {
	__imp__sub_82208B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82208BB4) {
	__imp__sub_82208BB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208BB8) {
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
	// stwu r1,-5232(r1)
	ea = -5232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r3,5039
	ctx.r5.s64 = ctx.r3.s64 + 5039;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82208BE8;
	sub_822E40F0(ctx, base);
	// lbz r11,5039(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5039);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208c20
	if (ctx.cr6.eq) goto loc_82208C20;
	// li r5,5124
	ctx.r5.s64 = 5124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de1f0
	ctx.lr = 0x82208C04;
	sub_823DE1F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,13432
	ctx.r3.s64 = ctx.r11.s64 + 13432;
	// li r6,5124
	ctx.r6.s64 = 5124;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223dc88
	ctx.lr = 0x82208C20;
	sub_8223DC88(ctx, base);
loc_82208C20:
	// addi r1,r1,5232
	ctx.r1.s64 = ctx.r1.s64 + 5232;
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

PPC_WEAK_FUNC(sub_82208BB8) {
	__imp__sub_82208BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208C38) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r3,5039
	ctx.r3.s64 = ctx.r3.s64 + 5039;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223e078
	ctx.lr = 0x82208C64;
	sub_8223E078(ctx, base);
	// lbz r11,5039(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5039);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208c94
	if (ctx.cr6.eq) goto loc_82208C94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r11,13432
	ctx.r3.s64 = ctx.r11.s64 + 13432;
	// li r5,5124
	ctx.r5.s64 = 5124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223dd20
	ctx.lr = 0x82208C88;
	sub_8223DD20(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,-28736
	ctx.r9.s64 = ctx.r10.s64 + -28736;
	// stw r9,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r9.u32);
loc_82208C94:
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

PPC_WEAK_FUNC(sub_82208C38) {
	__imp__sub_82208C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82208CAC) {
	__imp__sub_82208CAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208CB0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r3,106
	ctx.r5.s64 = ctx.r3.s64 + 106;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82208CDC;
	sub_822E40F0(ctx, base);
	// lbz r11,106(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 106);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208d14
	if (ctx.cr6.eq) goto loc_82208D14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82208CF8;
	sub_823DE1F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,14136
	ctx.r3.s64 = ctx.r11.s64 + 14136;
	// li r6,112
	ctx.r6.s64 = 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223dc88
	ctx.lr = 0x82208D14;
	sub_8223DC88(ctx, base);
loc_82208D14:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

PPC_WEAK_FUNC(sub_82208CB0) {
	__imp__sub_82208CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82208D2C) {
	__imp__sub_82208D2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208D30) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r3,106
	ctx.r3.s64 = ctx.r3.s64 + 106;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223e078
	ctx.lr = 0x82208D5C;
	sub_8223E078(ctx, base);
	// lbz r11,106(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 106);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208d80
	if (ctx.cr6.eq) goto loc_82208D80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r11,14136
	ctx.r3.s64 = ctx.r11.s64 + 14136;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223dd20
	ctx.lr = 0x82208D80;
	sub_8223DD20(ctx, base);
loc_82208D80:
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

PPC_WEAK_FUNC(sub_82208D30) {
	__imp__sub_82208D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208D98) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,252
	ctx.r5.s64 = 252;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82208DC4;
	sub_823DE1F0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822e40f0
	ctx.lr = 0x82208DDC;
	sub_822E40F0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82208e04
	if (ctx.cr6.eq) goto loc_82208E04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r11,14400
	ctx.r3.s64 = ctx.r11.s64 + 14400;
	// li r6,252
	ctx.r6.s64 = 252;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223dc88
	ctx.lr = 0x82208E04;
	sub_8223DC88(ctx, base);
loc_82208E04:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

PPC_WEAK_FUNC(sub_82208D98) {
	__imp__sub_82208D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82208E1C) {
	__imp__sub_82208E1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208E20) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x82208E54;
	sub_8223E078(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82208e78
	if (ctx.cr6.eq) goto loc_82208E78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r11,14400
	ctx.r3.s64 = ctx.r11.s64 + 14400;
	// li r5,252
	ctx.r5.s64 = 252;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223dd20
	ctx.lr = 0x82208E78;
	sub_8223DD20(ctx, base);
loc_82208E78:
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

PPC_WEAK_FUNC(sub_82208E20) {
	__imp__sub_82208E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82208E98;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82236018
	ctx.lr = 0x82208EA8;
	sub_82236018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82208f5c
	if (ctx.cr6.eq) goto loc_82208F5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,14208
	ctx.r27.s64 = ctx.r11.s64 + 14208;
loc_82208EBC:
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823de1f0
	ctx.lr = 0x82208ED0;
	sub_823DE1F0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223dc88
	ctx.lr = 0x82208EE8;
	sub_8223DC88(ctx, base);
	// lhz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 56);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// lhz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 100);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82208f44
	if (ctx.cr6.lt) goto loc_82208F44;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82208F0C:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822e40f0
	ctx.lr = 0x82208F2C;
	sub_822E40F0(ctx, base);
	// lhz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 100);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r29,r29,-12
	ctx.r29.s64 = ctx.r29.s64 + -12;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82208f0c
	if (!ctx.cr6.lt) goto loc_82208F0C;
loc_82208F44:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82236080
	ctx.lr = 0x82208F50;
	sub_82236080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82208ebc
	if (!ctx.cr6.eq) goto loc_82208EBC;
loc_82208F5C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82208E90) {
	__imp__sub_82208E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82208F64) {
	__imp__sub_82208F64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82208F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82208F70;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82236018
	ctx.lr = 0x82208F80;
	sub_82236018(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822090cc
	if (ctx.cr6.eq) goto loc_822090CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r21,r11,14208
	ctx.r21.s64 = ctx.r11.s64 + 14208;
loc_82208F94:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r4,r23,64
	ctx.r4.s64 = ctx.r23.s64 + 64;
	// bl 0x8223dd20
	ctx.lr = 0x82208FA8;
	sub_8223DD20(ctx, base);
	// lhz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 56);
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// lhz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 100);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822090b4
	if (ctx.cr6.lt) goto loc_822090B4;
loc_82208FC0:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x82208FD0;
	sub_8223E078(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,60(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 60);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82209004
	if (ctx.cr6.eq) goto loc_82209004;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82208FEC:
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82208fec
	if (!ctx.cr6.eq) goto loc_82208FEC;
loc_82209004:
	// lwz r25,4(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r24,8(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bge cr6,0x82209044
	if (!ctx.cr6.lt) goto loc_82209044;
	// subf r29,r30,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r30.s64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x823de678
	ctx.lr = 0x8220903C;
	sub_823DE678(ctx, base);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
loc_82209044:
	// lhz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 56);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82209094
	if (!ctx.cr6.lt) goto loc_82209094;
	// lhz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
loc_8220905C:
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82209094
	if (ctx.cr6.gt) goto loc_82209094;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// blt cr6,0x8220905c
	if (ctx.cr6.lt) goto loc_8220905C;
loc_82209094:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// lhz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 100);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82208fc0
	if (!ctx.cr6.lt) goto loc_82208FC0;
loc_822090B4:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82236080
	ctx.lr = 0x822090C0;
	sub_82236080(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82208f94
	if (!ctx.cr6.eq) goto loc_82208F94;
loc_822090CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82208F68) {
	__imp__sub_82208F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822090D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822090D4) {
	__imp__sub_822090D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822090D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// beq cr6,0x822090f0
	if (ctx.cr6.eq) goto loc_822090F0;
	// addi r3,r11,14240
	ctx.r3.s64 = ctx.r11.s64 + 14240;
	// blr 
	return;
loc_822090F0:
	// addi r11,r11,14240
	ctx.r11.s64 = ctx.r11.s64 + 14240;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822090D8) {
	__imp__sub_822090D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822090FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822090FC) {
	__imp__sub_822090FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82209108;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-464
	ctx.r31.s64 = ctx.r11.s64 + -464;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r28,32
	ctx.r28.s64 = 32;
	// addi r30,r11,14240
	ctx.r30.s64 = ctx.r11.s64 + 14240;
loc_82209124:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82209134:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82209134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82209134;
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223dc88
	ctx.lr = 0x82209158;
	sub_8223DC88(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8220916C:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8220916c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220916C;
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8220918c
	if (!ctx.cr6.eq) goto loc_8220918C;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
loc_8220918C:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8223dc88
	ctx.lr = 0x8220919C;
	sub_8223DC88(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x82209124
	if (!ctx.cr0.eq) goto loc_82209124;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82209100) {
	__imp__sub_82209100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822091B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822091B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-464
	ctx.r11.s64 = ctx.r11.s64 + -464;
	// li r27,32
	ctx.r27.s64 = 32;
	// addi r31,r11,10
	ctx.r31.s64 = ctx.r11.s64 + 10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,14240
	ctx.r30.s64 = ctx.r11.s64 + 14240;
loc_822091D8:
	// addi r29,r31,-10
	ctx.r29.s64 = ctx.r31.s64 + -10;
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8223dd20
	ctx.lr = 0x822091F0;
	sub_8223DD20(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82209204
	if (!ctx.cr6.eq) goto loc_82209204;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
loc_82209204:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r31,2
	ctx.r4.s64 = ctx.r31.s64 + 2;
	// bl 0x8223dd20
	ctx.lr = 0x82209214;
	sub_8223DD20(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220922c
	if (ctx.cr6.eq) goto loc_8220922C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b5cc8
	ctx.lr = 0x8220922C;
	sub_821B5CC8(ctx, base);
loc_8220922C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x822091d8
	if (!ctx.cr0.eq) goto loc_822091D8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822091B0) {
	__imp__sub_822091B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209240) {
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
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,8672
	ctx.r30.s64 = ctx.r11.s64 + 8672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1060
	ctx.r5.s64 = 1060;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82209270;
	sub_823DE1F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r10,14264
	ctx.r3.s64 = ctx.r10.s64 + 14264;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,1060
	ctx.r6.s64 = 1060;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8223dc88
	ctx.lr = 0x8220928C;
	sub_8223DC88(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
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

PPC_WEAK_FUNC(sub_82209240) {
	__imp__sub_82209240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822092A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822092A4) {
	__imp__sub_822092A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822092A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,8672
	ctx.r4.s64 = ctx.r11.s64 + 8672;
	// addi r3,r10,14264
	ctx.r3.s64 = ctx.r10.s64 + 14264;
	// li r5,1060
	ctx.r5.s64 = 1060;
	// b 0x8223dd20
	sub_8223DD20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822092A8) {
	__imp__sub_822092A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822092C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822092C4) {
	__imp__sub_822092C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822092C8) {
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
	// bl 0x821bcf08
	ctx.lr = 0x822092E0;
	sub_821BCF08(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822092F4;
	sub_822E40F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82209314
	if (ctx.cr6.eq) goto loc_82209314;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r10,1032
	ctx.r5.s64 = ctx.r10.s64 + 1032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82209314;
	sub_822E40F0(ctx, base);
loc_82209314:
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

PPC_WEAK_FUNC(sub_822092C8) {
	__imp__sub_822092C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209328) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8220934C;
	sub_8223E078(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821bcef8
	ctx.lr = 0x82209354;
	sub_821BCEF8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82209374
	if (ctx.cr6.eq) goto loc_82209374;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r10,1032
	ctx.r3.s64 = ctx.r10.s64 + 1032;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8223e078
	ctx.lr = 0x82209374;
	sub_8223E078(ctx, base);
loc_82209374:
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

PPC_WEAK_FUNC(sub_82209328) {
	__imp__sub_82209328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd6b0
	ctx.lr = 0x8220939C;
	sub_822DD6B0(ctx, base);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r11,9400
	ctx.r9.s64 = ctx.r11.s64 + 9400;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r7,1900
	ctx.r6.s64 = ctx.r7.s64 + 1900;
	// addi r3,r10,14432
	ctx.r3.s64 = ctx.r10.s64 + 14432;
	// lwzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822093C8;
	sub_822E84F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82209388) {
	__imp__sub_82209388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822093D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822093E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82209420
	if (!ctx.cr6.gt) goto loc_82209420;
loc_822093FC:
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x8233dd98
	ctx.lr = 0x82209404;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82209408;
	sub_822A13A0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x82209414;
	sub_8223CF38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x822093fc
	if (ctx.cr6.lt) goto loc_822093FC;
loc_82209420:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822093D8) {
	__imp__sub_822093D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82209430;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8220947c
	if (!ctx.cr6.gt) goto loc_8220947C;
loc_8220944C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209454;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209464;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x82209470;
	sub_8233E7D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8220944c
	if (ctx.cr6.lt) goto loc_8220944C;
loc_8220947C:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82209428) {
	__imp__sub_82209428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82209484) {
	__imp__sub_82209484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82209490;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// addi r31,r30,15292
	ctx.r31.s64 = ctx.r30.s64 + 15292;
loc_822094A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x822094AC;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x822094BC;
	sub_8223CFB0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822094d4
	if (ctx.cr6.eq) goto loc_822094D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222e230
	ctx.lr = 0x822094D0;
	sub_8222E230(ctx, base);
	// b 0x822094d8
	goto loc_822094D8;
loc_822094D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822094D8:
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// addi r10,r30,16316
	ctx.r10.s64 = ctx.r30.s64 + 16316;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822094a4
	if (ctx.cr6.lt) goto loc_822094A4;
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82209488) {
	__imp__sub_82209488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822094F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822094F4) {
	__imp__sub_822094F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822094F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82209500;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82209538
	if (!ctx.cr6.gt) goto loc_82209538;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r11,-28736
	ctx.r29.s64 = ctx.r11.s64 + -28736;
loc_82209520:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r31,r28
	ctx.r3.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x8220952C;
	sub_8233E7D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82209520
	if (ctx.cr6.lt) goto loc_82209520;
loc_82209538:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822094F8) {
	__imp__sub_822094F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209540) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
loc_82209560:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,1720
	ctx.r3.s64 = ctx.r30.s64 + 1720;
	// bl 0x8233e7d8
	ctx.lr = 0x8220956C;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x82209560
	if (ctx.cr6.lt) goto loc_82209560;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8220957C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,2264
	ctx.r3.s64 = ctx.r30.s64 + 2264;
	// bl 0x8233e7d8
	ctx.lr = 0x82209588;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x8220957c
	if (ctx.cr6.lt) goto loc_8220957C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82209598:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,2520
	ctx.r3.s64 = ctx.r30.s64 + 2520;
	// bl 0x8233e7d8
	ctx.lr = 0x822095A4;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x82209598
	if (ctx.cr6.lt) goto loc_82209598;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822095B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,1752
	ctx.r3.s64 = ctx.r30.s64 + 1752;
	// bl 0x8233e7d8
	ctx.lr = 0x822095C0;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,512
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 512, ctx.xer);
	// blt cr6,0x822095b4
	if (ctx.cr6.lt) goto loc_822095B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822095D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,2824
	ctx.r3.s64 = ctx.r30.s64 + 2824;
	// bl 0x8233e7d8
	ctx.lr = 0x822095DC;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 128, ctx.xer);
	// blt cr6,0x822095d0
	if (ctx.cr6.lt) goto loc_822095D0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822095EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x8233e7d8
	ctx.lr = 0x822095F8;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,1023
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1023, ctx.xer);
	// blt cr6,0x822095ec
	if (ctx.cr6.lt) goto loc_822095EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1167
	ctx.r3.s64 = 1167;
	// bl 0x8233e7d8
	ctx.lr = 0x82209610;
	sub_8233E7D8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82209614:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8233e7d8
	ctx.lr = 0x82209620;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x82209614
	if (ctx.cr6.lt) goto loc_82209614;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82209630:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x8233e7d8
	ctx.lr = 0x8220963C;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x82209630
	if (ctx.cr6.lt) goto loc_82209630;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8233e7d8
	ctx.lr = 0x82209654;
	sub_8233E7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8233e7d8
	ctx.lr = 0x82209660;
	sub_8233E7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8233e7d8
	ctx.lr = 0x8220966C;
	sub_8233E7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8233e7d8
	ctx.lr = 0x82209678;
	sub_8233E7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8233e7d8
	ctx.lr = 0x82209684;
	sub_8233E7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8233e7d8
	ctx.lr = 0x82209690;
	sub_8233E7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1202
	ctx.r3.s64 = 1202;
	// bl 0x8233e7d8
	ctx.lr = 0x8220969C;
	sub_8233E7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1203
	ctx.r3.s64 = 1203;
	// bl 0x8233e7d8
	ctx.lr = 0x822096A8;
	sub_8233E7D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1204
	ctx.r3.s64 = 1204;
	// bl 0x8233e7d8
	ctx.lr = 0x822096B4;
	sub_8233E7D8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_822096B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x8233e7d8
	ctx.lr = 0x822096C4;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x822096b8
	if (ctx.cr6.lt) goto loc_822096B8;
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

PPC_WEAK_FUNC(sub_82209540) {
	__imp__sub_82209540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822096E8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
loc_82209704:
	// addi r3,r30,1208
	ctx.r3.s64 = ctx.r30.s64 + 1208;
	// bl 0x8233dd98
	ctx.lr = 0x8220970C;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82209710;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x8220971C;
	sub_8223CF38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,512
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 512, ctx.xer);
	// blt cr6,0x82209704
	if (ctx.cr6.lt) goto loc_82209704;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8220972C:
	// addi r3,r30,1720
	ctx.r3.s64 = ctx.r30.s64 + 1720;
	// bl 0x8233dd98
	ctx.lr = 0x82209734;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82209738;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x82209744;
	sub_8223CF38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x8220972c
	if (ctx.cr6.lt) goto loc_8220972C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82209754:
	// addi r3,r30,2264
	ctx.r3.s64 = ctx.r30.s64 + 2264;
	// bl 0x8233dd98
	ctx.lr = 0x8220975C;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82209760;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x8220976C;
	sub_8223CF38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x82209754
	if (ctx.cr6.lt) goto loc_82209754;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8220977C:
	// addi r3,r30,2520
	ctx.r3.s64 = ctx.r30.s64 + 2520;
	// bl 0x8233dd98
	ctx.lr = 0x82209784;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82209788;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x82209794;
	sub_8223CF38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x8220977c
	if (ctx.cr6.lt) goto loc_8220977C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822097A4:
	// addi r3,r30,1752
	ctx.r3.s64 = ctx.r30.s64 + 1752;
	// bl 0x8233dd98
	ctx.lr = 0x822097AC;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822097B0;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x822097BC;
	sub_8223CF38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,512
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 512, ctx.xer);
	// blt cr6,0x822097a4
	if (ctx.cr6.lt) goto loc_822097A4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822097CC:
	// addi r3,r30,2824
	ctx.r3.s64 = ctx.r30.s64 + 2824;
	// bl 0x8233dd98
	ctx.lr = 0x822097D4;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822097D8;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x822097E4;
	sub_8223CF38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 128, ctx.xer);
	// blt cr6,0x822097cc
	if (ctx.cr6.lt) goto loc_822097CC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822097F4:
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x8233dd98
	ctx.lr = 0x822097FC;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82209800;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x8220980C;
	sub_8223CF38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,1023
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1023, ctx.xer);
	// blt cr6,0x822097f4
	if (ctx.cr6.lt) goto loc_822097F4;
	// li r3,1167
	ctx.r3.s64 = 1167;
	// bl 0x8233dd98
	ctx.lr = 0x82209820;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82209824;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x82209830;
	sub_8223CF38(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8233dd98
	ctx.lr = 0x82209838;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x8220983C;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x82209848;
	sub_8223CF38(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8233dd98
	ctx.lr = 0x82209850;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82209854;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x82209860;
	sub_8223CF38(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8233dd98
	ctx.lr = 0x82209868;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x8220986C;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x82209878;
	sub_8223CF38(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8233dd98
	ctx.lr = 0x82209880;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82209884;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x82209890;
	sub_8223CF38(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8233dd98
	ctx.lr = 0x82209898;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x8220989C;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x822098A8;
	sub_8223CF38(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8233dd98
	ctx.lr = 0x822098B0;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822098B4;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x822098C0;
	sub_8223CF38(ctx, base);
	// li r3,1202
	ctx.r3.s64 = 1202;
	// bl 0x8233dd98
	ctx.lr = 0x822098C8;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822098CC;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x822098D8;
	sub_8223CF38(ctx, base);
	// li r3,1203
	ctx.r3.s64 = 1203;
	// bl 0x8233dd98
	ctx.lr = 0x822098E0;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822098E4;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x822098F0;
	sub_8223CF38(ctx, base);
	// li r3,1204
	ctx.r3.s64 = 1204;
	// bl 0x8233dd98
	ctx.lr = 0x822098F8;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822098FC;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x82209908;
	sub_8223CF38(ctx, base);
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

PPC_WEAK_FUNC(sub_822096E8) {
	__imp__sub_822096E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209920) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82209488
	ctx.lr = 0x8220993C;
	sub_82209488(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82209940:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209948;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209958;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,1720
	ctx.r3.s64 = ctx.r30.s64 + 1720;
	// bl 0x8233e7d8
	ctx.lr = 0x82209964;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x82209940
	if (ctx.cr6.lt) goto loc_82209940;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82209974:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8220997C;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x8220998C;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,2264
	ctx.r3.s64 = ctx.r30.s64 + 2264;
	// bl 0x8233e7d8
	ctx.lr = 0x82209998;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x82209974
	if (ctx.cr6.lt) goto loc_82209974;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822099A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x822099B0;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x822099C0;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,2520
	ctx.r3.s64 = ctx.r30.s64 + 2520;
	// bl 0x8233e7d8
	ctx.lr = 0x822099CC;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x822099a8
	if (ctx.cr6.lt) goto loc_822099A8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822099DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x822099E4;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x822099F4;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,1752
	ctx.r3.s64 = ctx.r30.s64 + 1752;
	// bl 0x8233e7d8
	ctx.lr = 0x82209A00;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,512
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 512, ctx.xer);
	// blt cr6,0x822099dc
	if (ctx.cr6.lt) goto loc_822099DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82209A10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209A18;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209A28;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,2824
	ctx.r3.s64 = ctx.r30.s64 + 2824;
	// bl 0x8233e7d8
	ctx.lr = 0x82209A34;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 128, ctx.xer);
	// blt cr6,0x82209a10
	if (ctx.cr6.lt) goto loc_82209A10;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82209A44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209A4C;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209A5C;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x8233e7d8
	ctx.lr = 0x82209A68;
	sub_8233E7D8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,1023
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1023, ctx.xer);
	// blt cr6,0x82209a44
	if (ctx.cr6.lt) goto loc_82209A44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209A7C;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209A8C;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1167
	ctx.r3.s64 = 1167;
	// bl 0x8233e7d8
	ctx.lr = 0x82209A98;
	sub_8233E7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209AA0;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209AB0;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8233e7d8
	ctx.lr = 0x82209ABC;
	sub_8233E7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209AC4;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209AD4;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8233e7d8
	ctx.lr = 0x82209AE0;
	sub_8233E7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209AE8;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209AF8;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8233e7d8
	ctx.lr = 0x82209B04;
	sub_8233E7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209B0C;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209B1C;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8233e7d8
	ctx.lr = 0x82209B28;
	sub_8233E7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209B30;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209B40;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8233e7d8
	ctx.lr = 0x82209B4C;
	sub_8233E7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209B54;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209B64;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8233e7d8
	ctx.lr = 0x82209B70;
	sub_8233E7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209B78;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209B88;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1202
	ctx.r3.s64 = 1202;
	// bl 0x8233e7d8
	ctx.lr = 0x82209B94;
	sub_8233E7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209B9C;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209BAC;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1203
	ctx.r3.s64 = 1203;
	// bl 0x8233e7d8
	ctx.lr = 0x82209BB8;
	sub_8233E7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82209BC0;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223cfb0
	ctx.lr = 0x82209BD0;
	sub_8223CFB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1204
	ctx.r3.s64 = 1204;
	// bl 0x8233e7d8
	ctx.lr = 0x82209BDC;
	sub_8233E7D8(ctx, base);
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

PPC_WEAK_FUNC(sub_82209920) {
	__imp__sub_82209920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82209BF4) {
	__imp__sub_82209BF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82209C00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x82332c40
	ctx.lr = 0x82209C18;
	sub_82332C40(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82209ca0
	if (!ctx.cr6.gt) goto loc_82209CA0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// li r27,200
	ctx.r27.s64 = 200;
	// ori r29,r10,34079
	ctx.r29.u64 = ctx.r10.u64 | 34079;
	// addi r28,r11,-28736
	ctx.r28.s64 = ctx.r11.s64 + -28736;
loc_82209C34:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82209C44;
	sub_822E40F0(ctx, base);
	// mulhw r11,r31,r29
	ctx.r11.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r9,r10,200
	ctx.r9.s64 = ctx.r10.s64 * 200;
	// subf. r3,r9,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82209c68
	if (ctx.cr0.eq) goto loc_82209C68;
	// bl 0x82332b28
	ctx.lr = 0x82209C64;
	sub_82332B28(ctx, base);
	// b 0x82209c6c
	goto loc_82209C6C;
loc_82209C68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82209C6C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8223cf38
	ctx.lr = 0x82209C78;
	sub_8223CF38(ctx, base);
	// divw r11,r31,r27
	ctx.r11.s32 = ctx.r31.s32 / ctx.r27.s32;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82209C90;
	sub_822E40F0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82332c40
	ctx.lr = 0x82209C98;
	sub_82332C40(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82209c34
	if (ctx.cr6.lt) goto loc_82209C34;
loc_82209CA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82209CB8;
	sub_822E40F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82209BF8) {
	__imp__sub_82209BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82209CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// addi r31,r30,2660
	ctx.r31.s64 = ctx.r30.s64 + 2660;
loc_82209CDC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822e40f0
	ctx.lr = 0x82209CF4;
	sub_822E40F0(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r10,r30,2788
	ctx.r10.s64 = ctx.r30.s64 + 2788;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82209cdc
	if (ctx.cr6.lt) goto loc_82209CDC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82209CC0) {
	__imp__sub_82209CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82209D0C) {
	__imp__sub_82209D0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82209D18;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r28,r11,9624
	ctx.r28.s64 = ctx.r11.s64 + 9624;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r28,2660
	ctx.r31.s64 = ctx.r28.s64 + 2660;
	// addi r30,r10,26552
	ctx.r30.s64 = ctx.r10.s64 + 26552;
	// addi r29,r11,14444
	ctx.r29.s64 = ctx.r11.s64 + 14444;
loc_82209D3C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x82209D4C;
	sub_8223E078(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r5,2048
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2048, ctx.xer);
	// bgt cr6,0x82209d60
	if (ctx.cr6.gt) goto loc_82209D60;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82209d74
	if (!ctx.cr6.lt) goto loc_82209D74;
loc_82209D60:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82209D6C;
	sub_822830E8(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
loc_82209D74:
	// beq cr6,0x82209d8c
	if (ctx.cr6.eq) goto loc_82209D8C;
	// mulli r11,r5,624
	ctx.r11.s64 = ctx.r5.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-624
	ctx.r4.s64 = ctx.r11.s64 + -624;
	// bl 0x821e2e18
	ctx.lr = 0x82209D8C;
	sub_821E2E18(ctx, base);
loc_82209D8C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r28,2788
	ctx.r11.s64 = ctx.r28.s64 + 2788;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82209d3c
	if (ctx.cr6.lt) goto loc_82209D3C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82209D10) {
	__imp__sub_82209D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82209DA4) {
	__imp__sub_82209DA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209DA8) {
	PPC_FUNC_PROLOGUE();
	// li r4,64
	ctx.r4.s64 = 64;
	// b 0x822e2b00
	sub_822E2B00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82209DA8) {
	__imp__sub_82209DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209DB0) {
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
	// bl 0x8223c4d8
	ctx.lr = 0x82209DC0;
	sub_8223C4D8(ctx, base);
	// bl 0x822e2e20
	ctx.lr = 0x82209DC4;
	sub_822E2E20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82209DB0) {
	__imp__sub_82209DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82209DD4) {
	__imp__sub_82209DD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209DD8) {
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
	// lhz r3,604(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82209e48
	if (ctx.cr6.eq) goto loc_82209E48;
	// bl 0x8222e398
	ctx.lr = 0x82209DFC;
	sub_8222E398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82209e48
	if (ctx.cr6.eq) goto loc_82209E48;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x82209e18
	if (ctx.cr6.eq) goto loc_82209E18;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82209e48
	if (!ctx.cr6.eq) goto loc_82209E48;
loc_82209E18:
	// lhz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// bl 0x8222e3b0
	ctx.lr = 0x82209E20;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82209E24;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,14504
	ctx.r4.s64 = ctx.r11.s64 + 14504;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280c30
	ctx.lr = 0x82209E38;
	sub_82280C30(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lhz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// addi r4,r10,14488
	ctx.r4.s64 = ctx.r10.s64 + 14488;
	// bl 0x8222ebf0
	ctx.lr = 0x82209E48;
	sub_8222EBF0(ctx, base);
loc_82209E48:
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

PPC_WEAK_FUNC(sub_82209DD8) {
	__imp__sub_82209DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82209E5C) {
	__imp__sub_82209E5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82209E68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// addi r31,r10,26552
	ctx.r31.s64 = ctx.r10.s64 + 26552;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82209ec8
	if (!ctx.cr6.gt) goto loc_82209EC8;
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// addi r28,r10,11296
	ctx.r28.s64 = ctx.r10.s64 + 11296;
loc_82209E94:
	// lbzx r10,r30,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82209eb8
	if (ctx.cr6.eq) goto loc_82209EB8;
	// lbz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82209eb8
	if (ctx.cr6.eq) goto loc_82209EB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x82209EB4;
	sub_82340D30(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_82209EB8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82209e94
	if (ctx.cr6.lt) goto loc_82209E94;
loc_82209EC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82209E60) {
	__imp__sub_82209E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209ED0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e4b00
	ctx.lr = 0x82209EF0;
	sub_822E4B00(ctx, base);
	// bl 0x82332c40
	ctx.lr = 0x82209EF4;
	sub_82332C40(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82209F08;
	sub_822E40F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82209f3c
	if (!ctx.cr6.gt) goto loc_82209F3C;
loc_82209F18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x82209F20;
	sub_82332B28(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8223cf38
	ctx.lr = 0x82209F2C;
	sub_8223CF38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82209f18
	if (ctx.cr6.lt) goto loc_82209F18;
loc_82209F3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82209bf8
	ctx.lr = 0x82209F44;
	sub_82209BF8(ctx, base);
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

PPC_WEAK_FUNC(sub_82209ED0) {
	__imp__sub_82209ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82209F5C) {
	__imp__sub_82209F5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82209F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x82209F68;
	__savegprlr_20(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6800(r1)
	ea = -6800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822e4b00
	ctx.lr = 0x82209F84;
	sub_822E4B00(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,52
	ctx.r5.s64 = ctx.r29.s64 + 52;
	// bl 0x822e40f0
	ctx.lr = 0x82209F9C;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,48
	ctx.r5.s64 = ctx.r29.s64 + 48;
	// bl 0x822e40f0
	ctx.lr = 0x82209FAC;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,2928
	ctx.r5.s64 = ctx.r29.s64 + 2928;
	// bl 0x822e40f0
	ctx.lr = 0x82209FBC;
	sub_822E40F0(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-4904
	ctx.r5.s64 = ctx.r11.s64 + -4904;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x822e40f0
	ctx.lr = 0x82209FD0;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r29,3052
	ctx.r5.s64 = ctx.r29.s64 + 3052;
	// bl 0x822e40f0
	ctx.lr = 0x82209FE0;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r29,3054
	ctx.r5.s64 = ctx.r29.s64 + 3054;
	// bl 0x822e40f0
	ctx.lr = 0x82209FF0;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,2788
	ctx.r5.s64 = ctx.r29.s64 + 2788;
	// bl 0x822e40f0
	ctx.lr = 0x8220A000;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,2800
	ctx.r5.s64 = ctx.r29.s64 + 2800;
	// bl 0x822e40f0
	ctx.lr = 0x8220A010;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,2804
	ctx.r5.s64 = ctx.r29.s64 + 2804;
	// bl 0x822e40f0
	ctx.lr = 0x8220A020;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,2792
	ctx.r5.s64 = ctx.r29.s64 + 2792;
	// bl 0x822e40f0
	ctx.lr = 0x8220A030;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,2796
	ctx.r5.s64 = ctx.r29.s64 + 2796;
	// bl 0x822e40f0
	ctx.lr = 0x8220A040;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,16320
	ctx.r5.s64 = ctx.r29.s64 + 16320;
	// bl 0x822e40f0
	ctx.lr = 0x8220A050;
	sub_822E40F0(ctx, base);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,-19056
	ctx.r5.s64 = ctx.r10.s64 + -19056;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822e40f0
	ctx.lr = 0x8220A064;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r29,16324
	ctx.r5.s64 = ctx.r29.s64 + 16324;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822e40f0
	ctx.lr = 0x8220A074;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r29,16332
	ctx.r5.s64 = ctx.r29.s64 + 16332;
	// bl 0x822e40f0
	ctx.lr = 0x8220A084;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r29,16340
	ctx.r5.s64 = ctx.r29.s64 + 16340;
	// bl 0x822e40f0
	ctx.lr = 0x8220A094;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,16372
	ctx.r5.s64 = ctx.r29.s64 + 16372;
	// bl 0x822e40f0
	ctx.lr = 0x8220A0A4;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,2904
	ctx.r5.s64 = ctx.r29.s64 + 2904;
	// bl 0x822e40f0
	ctx.lr = 0x8220A0B4;
	sub_822E40F0(ctx, base);
	// lis r9,-32076
	ctx.r9.s64 = -2102132736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r9,30208
	ctx.r30.s64 = ctx.r9.s64 + 30208;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8220A0CC;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// bl 0x822e40f0
	ctx.lr = 0x8220A0DC;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822096e8
	ctx.lr = 0x8220A0E4;
	sub_822096E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x822e2b00
	ctx.lr = 0x8220A0F0;
	sub_822E2B00(ctx, base);
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r8,-17544
	ctx.r5.s64 = ctx.r8.s64 + -17544;
	// ori r4,r4,44032
	ctx.r4.u64 = ctx.r4.u64 | 44032;
	// bl 0x822e40f0
	ctx.lr = 0x8220A108;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,2872
	ctx.r5.s64 = ctx.r29.s64 + 2872;
	// bl 0x822e40f0
	ctx.lr = 0x8220A118;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,2876
	ctx.r5.s64 = ctx.r29.s64 + 2876;
	// bl 0x822e40f0
	ctx.lr = 0x8220A128;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,60
	ctx.r5.s64 = ctx.r29.s64 + 60;
	// bl 0x822e40f0
	ctx.lr = 0x8220A138;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r29,2896
	ctx.r5.s64 = ctx.r29.s64 + 2896;
	// bl 0x822e40f0
	ctx.lr = 0x8220A148;
	sub_822E40F0(ctx, base);
	// lis r7,-32032
	ctx.r7.s64 = -2099249152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,-5900(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -5900);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// bl 0x822e40f0
	ctx.lr = 0x8220A160;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82240538
	ctx.lr = 0x8220A168;
	sub_82240538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d8e68
	ctx.lr = 0x8220A170;
	sub_820D8E68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a0ea8
	ctx.lr = 0x8220A178;
	sub_822A0EA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822a0960
	ctx.lr = 0x8220A180;
	sub_822A0960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822e4b00
	ctx.lr = 0x8220A18C;
	sub_822E4B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208e90
	ctx.lr = 0x8220A194;
	sub_82208E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257b38
	ctx.lr = 0x8220A19C;
	sub_82257B38(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 8;
	// bl 0x822e40f0
	ctx.lr = 0x8220A1AC;
	sub_822E40F0(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r21,r10,11296
	ctx.r21.s64 = ctx.r10.s64 + 11296;
	// addi r27,r9,26552
	ctx.r27.s64 = ctx.r9.s64 + 26552;
loc_8220A1C8:
	// lbzx r9,r11,r21
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r30,r10,r27
	ctx.r30.u64 = ctx.r10.u64 + ctx.r27.u64;
	// beq cr6,0x8220a1fc
	if (ctx.cr6.eq) goto loc_8220A1FC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8220A1EC;
	sub_822E40F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82208a70
	ctx.lr = 0x8220A1F8;
	sub_82208A70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8220A1FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// blt cr6,0x8220a1c8
	if (ctx.cr6.lt) goto loc_8220A1C8;
	// li r23,-1
	ctx.r23.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8220A224;
	sub_822E40F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235fc50
	ctx.lr = 0x8220A22C;
	sub_8235FC50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209100
	ctx.lr = 0x8220A234;
	sub_82209100(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// ori r25,r10,44196
	ctx.r25.u64 = ctx.r10.u64 | 44196;
	// lis r10,-32076
	ctx.r10.s64 = -2102132736;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// ori r26,r9,45016
	ctx.r26.u64 = ctx.r9.u64 | 45016;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r28,r10,32576
	ctx.r28.s64 = ctx.r10.s64 + 32576;
loc_8220A25C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mullw r9,r11,r26
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r30,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8220a310
	if (!ctx.cr6.eq) goto loc_8220A310;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8220A284;
	sub_822E40F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822087c0
	ctx.lr = 0x8220A290;
	sub_822087C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r27,232
	ctx.r9.s64 = ctx.r27.s64 + 232;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r8,r11,624
	ctx.r8.s64 = ctx.r11.s64 * 624;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r28,84
	ctx.r7.s64 = ctx.r28.s64 + 84;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r28,108
	ctx.r5.s64 = ctx.r28.s64 + 108;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r28,112
	ctx.r3.s64 = ctx.r28.s64 + 112;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r7,692(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// sthx r7,r4,r5
	PPC_STORE_U16(ctx.r4.u32 + ctx.r5.u32, ctx.r7.u16);
	// stwx r22,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r22.u32);
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220a308
	if (ctx.cr6.eq) goto loc_8220A308;
	// bl 0x8222e308
	ctx.lr = 0x8220A2F8;
	sub_8222E308(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r28,112
	ctx.r10.s64 = ctx.r28.s64 + 112;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
loc_8220A308:
	// addi r10,r28,80
	ctx.r10.s64 = ctx.r28.s64 + 80;
	// stbx r24,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r24.u8);
loc_8220A310:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8220a25c
	if (ctx.cr6.lt) goto loc_8220A25C;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8220A338;
	sub_822E40F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r28,r11,14264
	ctx.r28.s64 = ctx.r11.s64 + 14264;
loc_8220A348:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mulli r10,r10,5128
	ctx.r10.s64 = ctx.r10.s64 * 5128;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r30,5039
	ctx.r5.s64 = ctx.r30.s64 + 5039;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8220A364;
	sub_822E40F0(ctx, base);
	// lbz r11,5039(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5039);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a398
	if (ctx.cr6.eq) goto loc_8220A398;
	// li r5,5124
	ctx.r5.s64 = 5124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,1568
	ctx.r3.s64 = ctx.r1.s64 + 1568;
	// bl 0x823de1f0
	ctx.lr = 0x8220A380;
	sub_823DE1F0(ctx, base);
	// addi r3,r28,-832
	ctx.r3.s64 = ctx.r28.s64 + -832;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,5124
	ctx.r6.s64 = 5124;
	// addi r5,r1,1568
	ctx.r5.s64 = ctx.r1.s64 + 1568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223dc88
	ctx.lr = 0x8220A398;
	sub_8223DC88(ctx, base);
loc_8220A398:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x8220a348
	if (ctx.cr6.lt) goto loc_8220A348;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r29,76
	ctx.r5.s64 = ctx.r29.s64 + 76;
	// bl 0x822e40f0
	ctx.lr = 0x8220A3BC;
	sub_822E40F0(ctx, base);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
loc_8220A3C4:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r30,106
	ctx.r5.s64 = ctx.r30.s64 + 106;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8220A3E0;
	sub_822E40F0(ctx, base);
	// lbz r11,106(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 106);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a414
	if (ctx.cr6.eq) goto loc_8220A414;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8220A3FC;
	sub_823DE1F0(ctx, base);
	// addi r3,r28,-128
	ctx.r3.s64 = ctx.r28.s64 + -128;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,112
	ctx.r6.s64 = 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223dc88
	ctx.lr = 0x8220A414;
	sub_8223DC88(ctx, base);
loc_8220A414:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// blt cr6,0x8220a3c4
	if (ctx.cr6.lt) goto loc_8220A3C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823433c0
	ctx.lr = 0x8220A430;
	sub_823433C0(ctx, base);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
loc_8220A438:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mulli r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 * 252;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// li r5,252
	ctx.r5.s64 = 252;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8220A454;
	sub_823DE1F0(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822e40f0
	ctx.lr = 0x8220A46C;
	sub_822E40F0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8220a490
	if (ctx.cr6.eq) goto loc_8220A490;
	// addi r3,r28,136
	ctx.r3.s64 = ctx.r28.s64 + 136;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,252
	ctx.r6.s64 = 252;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8223dc88
	ctx.lr = 0x8220A490;
	sub_8223DC88(ctx, base);
loc_8220A490:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x8220a438
	if (ctx.cr6.lt) goto loc_8220A438;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r30,r10,6688
	ctx.r30.s64 = ctx.r10.s64 + 6688;
loc_8220A4B4:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r30,7968
	ctx.r10.s64 = ctx.r30.s64 + 7968;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8220A4CC;
	sub_822E40F0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r30,7968
	ctx.r10.s64 = ctx.r30.s64 + 7968;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8220a4f8
	if (ctx.cr6.eq) goto loc_8220A4F8;
	// addi r10,r30,7972
	ctx.r10.s64 = ctx.r30.s64 + 7972;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8220A4F8;
	sub_822E40F0(ctx, base);
loc_8220A4F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8220a4b4
	if (ctx.cr6.lt) goto loc_8220A4B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182638
	ctx.lr = 0x8220A514;
	sub_82182638(ctx, base);
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r30,r11,8672
	ctx.r30.s64 = ctx.r11.s64 + 8672;
	// li r5,1060
	ctx.r5.s64 = 1060;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8220A52C;
	sub_823DE1F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,1060
	ctx.r6.s64 = 1060;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// bl 0x8223dc88
	ctx.lr = 0x8220A544;
	sub_8223DC88(ctx, base);
	// bl 0x821bcf08
	ctx.lr = 0x8220A548;
	sub_821BCF08(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8220A55C;
	sub_822E40F0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220a57c
	if (ctx.cr6.eq) goto loc_8220A57C;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r10,1032
	ctx.r5.s64 = ctx.r10.s64 + 1032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8220A57C;
	sub_822E40F0(ctx, base);
loc_8220A57C:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r29,9200
	ctx.r5.s64 = ctx.r29.s64 + 9200;
	// bl 0x822e40f0
	ctx.lr = 0x8220A58C;
	sub_822E40F0(ctx, base);
	// lwz r11,9200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r29,3056
	ctx.r5.s64 = ctx.r29.s64 + 3056;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822e40f0
	ctx.lr = 0x8220A5A8;
	sub_822E40F0(ctx, base);
	// addi r30,r29,2660
	ctx.r30.s64 = ctx.r29.s64 + 2660;
loc_8220A5AC:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822e40f0
	ctx.lr = 0x8220A5C4;
	sub_822E40F0(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r10,r29,2788
	ctx.r10.s64 = ctx.r29.s64 + 2788;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8220a5ac
	if (ctx.cr6.lt) goto loc_8220A5AC;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8220A5D8:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8233dd98
	ctx.lr = 0x8220A5E0;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x8220A5E4;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x8220A5F0;
	sub_8223CF38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x8220a5d8
	if (ctx.cr6.lt) goto loc_8220A5D8;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8220A600:
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x8233dd98
	ctx.lr = 0x8220A608;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x8220A60C;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x8220A618;
	sub_8223CF38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x8220a600
	if (ctx.cr6.lt) goto loc_8220A600;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8220A628:
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x8233dd98
	ctx.lr = 0x8220A630;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x8220A634;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x8220A640;
	sub_8223CF38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x8220a628
	if (ctx.cr6.lt) goto loc_8220A628;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8220A650:
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x8233dd98
	ctx.lr = 0x8220A658;
	sub_8233DD98(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x8220A65C;
	sub_822A13A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8223cf38
	ctx.lr = 0x8220A668;
	sub_8223CF38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x8220a650
	if (ctx.cr6.lt) goto loc_8220A650;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82202e48
	ctx.lr = 0x8220A67C;
	sub_82202E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227dba0
	ctx.lr = 0x8220A684;
	sub_8227DBA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4488
	ctx.lr = 0x8220A68C;
	sub_821F4488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1fd8
	ctx.lr = 0x8220A694;
	sub_820F1FD8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4b00
	ctx.lr = 0x8220A6A0;
	sub_822E4B00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a0a60
	ctx.lr = 0x8220A6AC;
	sub_822A0A60(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4b00
	ctx.lr = 0x8220A6B8;
	sub_822E4B00(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
loc_8220A6C0:
	// lbzx r11,r3,r21
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a720
	if (ctx.cr6.eq) goto loc_8220A720;
	// bl 0x82284688
	ctx.lr = 0x8220A6D0;
	sub_82284688(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220a71c
	if (ctx.cr6.eq) goto loc_8220A71C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ff488
	ctx.lr = 0x8220A6E4;
	sub_822FF488(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f2368
	ctx.lr = 0x8220A6F0;
	sub_822F2368(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_8220A6FC:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822e40f0
	ctx.lr = 0x8220A714;
	sub_822E40F0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8220a6fc
	if (!ctx.cr0.eq) goto loc_8220A6FC;
loc_8220A71C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8220A720:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,2048
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2048, ctx.xer);
	// blt cr6,0x8220a6c0
	if (ctx.cr6.lt) goto loc_8220A6C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8229fa50
	ctx.lr = 0x8220A73C;
	sub_8229FA50(ctx, base);
	// bl 0x8233fd20
	ctx.lr = 0x8220A740;
	sub_8233FD20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820eda48
	ctx.lr = 0x8220A748;
	sub_820EDA48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235f050
	ctx.lr = 0x8220A750;
	sub_8235F050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120d70
	ctx.lr = 0x8220A758;
	sub_82120D70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f088
	ctx.lr = 0x8220A760;
	sub_8233F088(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r26,-32190
	ctx.r26.s64 = -2109603840;
	// addi r27,r11,9240
	ctx.r27.s64 = ctx.r11.s64 + 9240;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r29,r27,24
	ctx.r29.s64 = ctx.r27.s64 + 24;
	// lis r25,-32166
	ctx.r25.s64 = -2108030976;
	// lwz r10,-32312(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
loc_8220A77C:
	// lbz r9,29088(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8220a7a0
	if (!ctx.cr6.eq) goto loc_8220A7A0;
	// subfc r11,r10,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r10.s64;
	// eqv r8,r10,r28
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r28.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x8220a7b0
	goto loc_8220A7B0;
loc_8220A7A0:
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8220A7B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a7e8
	if (ctx.cr6.eq) goto loc_8220A7E8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// beq cr6,0x8220a7cc
	if (ctx.cr6.eq) goto loc_8220A7CC;
	// lhz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
loc_8220A7CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82117948
	ctx.lr = 0x8220A7D8;
	sub_82117948(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82117780
	ctx.lr = 0x8220A7E4;
	sub_82117780(ctx, base);
	// lwz r10,-32312(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
loc_8220A7E8:
	// addi r29,r29,9780
	ctx.r29.s64 = ctx.r29.s64 + 9780;
	// addi r11,r27,19584
	ctx.r11.s64 = ctx.r27.s64 + 19584;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8220a77c
	if (ctx.cr6.lt) goto loc_8220A77C;
	// bl 0x8233fd88
	ctx.lr = 0x8220A800;
	sub_8233FD88(ctx, base);
	// addi r1,r1,6800
	ctx.r1.s64 = ctx.r1.s64 + 6800;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82209F60) {
	__imp__sub_82209F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220A808) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82209ed0
	ctx.lr = 0x8220A82C;
	sub_82209ED0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209f60
	ctx.lr = 0x8220A838;
	sub_82209F60(ctx, base);
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

PPC_WEAK_FUNC(sub_8220A808) {
	__imp__sub_8220A808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220A850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// orc r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 | ~ctx.r9.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// beq cr6,0x8220a880
	if (ctx.cr6.eq) goto loc_8220A880;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8220A880:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220A850) {
	__imp__sub_8220A850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220A888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8220A888) {
	__imp__sub_8220A888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8220A88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8220A88C) {
	__imp__sub_8220A88C(ctx, base);
}

