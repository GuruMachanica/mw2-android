#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8222F680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8222F688;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82234d70
	ctx.lr = 0x8222F694;
	sub_82234D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222f6a4
	if (ctx.cr6.eq) goto loc_8222F6A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82236af0
	ctx.lr = 0x8222F6A4;
	sub_82236AF0(ctx, base);
loc_8222F6A4:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222f6bc
	if (ctx.cr6.eq) goto loc_8222F6BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b61f8
	ctx.lr = 0x8222F6BC;
	sub_821B61F8(ctx, base);
loc_8222F6BC:
	// lwz r3,476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f6d8
	if (ctx.cr6.eq) goto loc_8222F6D8;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8229e118
	ctx.lr = 0x8222F6D4;
	sub_8229E118(ctx, base);
	// stw r27,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r27.u32);
loc_8222F6D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822340e0
	ctx.lr = 0x8222F6E0;
	sub_822340E0(ctx, base);
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f71c
	if (ctx.cr6.eq) goto loc_8222F71C;
loc_8222F6EC:
	// lwz r30,472(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// lwz r3,476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f708
	if (ctx.cr6.eq) goto loc_8222F708;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8229e118
	ctx.lr = 0x8222F704;
	sub_8229E118(ctx, base);
	// stw r27,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r27.u32);
loc_8222F708:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822340e0
	ctx.lr = 0x8222F710;
	sub_822340E0(ctx, base);
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222f6ec
	if (!ctx.cr6.eq) goto loc_8222F6EC;
loc_8222F71C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340cf0
	ctx.lr = 0x8222F724;
	sub_82340CF0(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// lhz r28,126(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lwz r11,2936(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2936);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8222f744
	if (!ctx.cr6.eq) goto loc_8222F744;
	// li r11,2047
	ctx.r11.s64 = 2047;
	// stw r11,2936(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2936, ctx.r11.u32);
loc_8222F744:
	// lwz r11,2996(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2996);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8222f758
	if (!ctx.cr6.eq) goto loc_8222F758;
	// li r11,2047
	ctx.r11.s64 = 2047;
	// stw r11,2996(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2996, ctx.r11.u32);
loc_8222F758:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d440
	ctx.lr = 0x8222F760;
	sub_8233D440(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f76c
	if (ctx.cr6.eq) goto loc_8222F76C;
	// bl 0x822f4f68
	ctx.lr = 0x8222F76C;
	sub_822F4F68(ctx, base);
loc_8222F76C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82284b78
	ctx.lr = 0x8222F774;
	sub_82284B78(ctx, base);
	// lwz r3,616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f788
	if (ctx.cr6.eq) goto loc_8222F788;
	// bl 0x82282dd0
	ctx.lr = 0x8222F784;
	sub_82282DD0(ctx, base);
	// stw r27,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r27.u32);
loc_8222F788:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f798
	if (ctx.cr6.eq) goto loc_8222F798;
	// bl 0x821ad608
	ctx.lr = 0x8222F798;
	sub_821AD608(ctx, base);
loc_8222F798:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f7ac
	if (ctx.cr6.eq) goto loc_8222F7AC;
	// bl 0x82240950
	ctx.lr = 0x8222F7A8;
	sub_82240950(ctx, base);
	// b 0x8222f7b4
	goto loc_8222F7B4;
loc_8222F7AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f490
	ctx.lr = 0x8222F7B4;
	sub_8222F490(ctx, base);
loc_8222F7B4:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222f7f0
	if (ctx.cr6.eq) goto loc_8222F7F0;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r11,r11,5560
	ctx.r11.s64 = ctx.r11.s64 + 5560;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8222F7D8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8222f7e8
	if (!ctx.cr6.eq) goto loc_8222F7E8;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_8222F7E8:
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// bdnz 0x8222f7d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222F7D8;
loc_8222F7F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821bd230
	ctx.lr = 0x8222F7F8;
	sub_821BD230(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8222f848
	if (ctx.cr6.eq) goto loc_8222F848;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821a9b38
	ctx.lr = 0x8222F810;
	sub_821A9B38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222f848
	if (ctx.cr6.eq) goto loc_8222F848;
loc_8222F81C:
	// lwz r11,3356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3356);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8222f830
	if (!ctx.cr6.eq) goto loc_8222F830;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e01b8
	ctx.lr = 0x8222F830;
	sub_821E01B8(ctx, base);
loc_8222F830:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a9b98
	ctx.lr = 0x8222F83C;
	sub_821A9B98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222f81c
	if (!ctx.cr6.eq) goto loc_8222F81C;
loc_8222F848:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8222f85c
	if (!ctx.cr6.eq) goto loc_8222F85C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b7e60
	ctx.lr = 0x8222F85C;
	sub_821B7E60(ctx, base);
loc_8222F85C:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f870
	if (ctx.cr6.eq) goto loc_8222F870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82247458
	ctx.lr = 0x8222F870;
	sub_82247458(ctx, base);
loc_8222F870:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f888
	if (ctx.cr6.eq) goto loc_8222F888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823434b0
	ctx.lr = 0x8222F884;
	sub_823434B0(ctx, base);
	// b 0x8222f8b4
	goto loc_8222F8B4;
loc_8222F888:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8222f89c
	if (ctx.cr6.eq) goto loc_8222F89C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8222f8b4
	if (!ctx.cr6.eq) goto loc_8222F8B4;
loc_8222F89C:
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8222f8b4
	if (ctx.cr6.eq) goto loc_8222F8B4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82259630
	ctx.lr = 0x8222F8B0;
	sub_82259630(ctx, base);
	// stw r27,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r27.u32);
loc_8222F8B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2c98
	ctx.lr = 0x8222F8BC;
	sub_821E2C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229b10
	ctx.lr = 0x8222F8C4;
	sub_82229B10(ctx, base);
	// li r5,624
	ctx.r5.s64 = 624;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,120(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x823de090
	ctx.lr = 0x8222F8D8;
	sub_823DE090(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,624
	ctx.r10.s64 = 624;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// divw r8,r9,r10
	ctx.r8.s32 = ctx.r9.s32 / ctx.r10.s32;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// blt cr6,0x8222f910
	if (ctx.cr6.lt) goto loc_8222F910;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f904
	if (ctx.cr6.eq) goto loc_8222F904;
	// stw r31,620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 620, ctx.r31.u32);
	// b 0x8222f908
	goto loc_8222F908;
loc_8222F904:
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
loc_8222F908:
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stw r27,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r27.u32);
loc_8222F910:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// addi r9,r11,11296
	ctx.r9.s64 = ctx.r11.s64 + 11296;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stbx r27,r28,r9
	PPC_STORE_U8(ctx.r28.u32 + ctx.r9.u32, ctx.r27.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222F680) {
	__imp__sub_8222F680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222F92C) {
	__imp__sub_8222F92C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F930) {
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
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,6688
	ctx.r10.s64 = ctx.r11.s64 + 6688;
	// lwz r4,7824(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7824);
	// bl 0x82229d78
	ctx.lr = 0x8222F950;
	sub_82229D78(ctx, base);
	// bl 0x822ac730
	ctx.lr = 0x8222F954;
	sub_822AC730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222F930) {
	__imp__sub_8222F930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222F964) {
	__imp__sub_8222F964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F968) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,175(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 175);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,175(r3)
	PPC_STORE_U8(ctx.r3.u32 + 175, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222F968) {
	__imp__sub_8222F968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F978) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,264(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222f9b8
	if (ctx.cr6.eq) goto loc_8222F9B8;
	// bl 0x82322380
	ctx.lr = 0x8222F9A8;
	sub_82322380(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// b 0x8222f9d0
	goto loc_8222F9D0;
loc_8222F9B8:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823223b8
	ctx.lr = 0x8222F9CC;
	sub_823223B8(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
loc_8222F9D0:
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8222F978) {
	__imp__sub_8222F978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222F9EC) {
	__imp__sub_8222F9EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222F9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8222F9F8;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-2288(r1)
	ea = -2288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r25,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r25.u16);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x822a24e0
	ctx.lr = 0x8222FA28;
	sub_822A24E0(ctx, base);
	// lhz r4,460(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 460);
	// addi r30,r31,460
	ctx.r30.s64 = ctx.r31.s64 + 460;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222fb40
	if (ctx.cr6.eq) goto loc_8222FB40;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229da8
	ctx.lr = 0x8222FA44;
	sub_82229DA8(ctx, base);
	// lbz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222fa58
	if (ctx.cr6.eq) goto loc_8222FA58;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8222fb40
	if (!ctx.cr6.eq) goto loc_8222FB40;
loc_8222FA58:
	// lhz r11,462(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 462);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,1752
	ctx.r3.s64 = ctx.r11.s64 + 1752;
	// bl 0x8233dd38
	ctx.lr = 0x8222FA6C;
	sub_8233DD38(ctx, base);
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,1152
	ctx.r4.s64 = ctx.r1.s64 + 1152;
	// addi r3,r11,1752
	ctx.r3.s64 = ctx.r11.s64 + 1752;
	// bl 0x8233dd38
	ctx.lr = 0x8222FA80;
	sub_8233DD38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822a24e0
	ctx.lr = 0x8222FA8C;
	sub_822A24E0(ctx, base);
	// lhz r3,302(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222faa4
	if (ctx.cr6.eq) goto loc_8222FAA4;
	// bl 0x822a13a0
	ctx.lr = 0x8222FA9C;
	sub_822A13A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8222faac
	goto loc_8222FAAC;
loc_8222FAA4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,-32360
	ctx.r28.s64 = ctx.r11.s64 + -32360;
loc_8222FAAC:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lhz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r29,52(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// bl 0x822a13a0
	ctx.lr = 0x8222FAC0;
	sub_822A13A0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x8222FACC;
	sub_822A13A0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lfs f31,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f31.f64 = double(temp.f32);
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// lfs f30,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x822a13a0
	ctx.lr = 0x8222FAE4;
	sub_822A13A0(ctx, base);
	// stfd f29,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f29.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f30,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f30.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f31,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f31.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r10,r1,1152
	ctx.r10.s64 = ctx.r1.s64 + 1152;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r6,-9104
	ctx.r3.s64 = ctx.r6.s64 + -9104;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x822e84f0
	ctx.lr = 0x8222FB3C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222FB40;
	sub_822AD350(ctx, base);
loc_8222FB40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// bl 0x822a24e0
	ctx.lr = 0x8222FB4C;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822a24e0
	ctx.lr = 0x8222FB58;
	sub_822A24E0(ctx, base);
	// sth r27,462(r31)
	PPC_STORE_U16(ctx.r31.u32 + 462, ctx.r27.u16);
	// stb r25,465(r31)
	PPC_STORE_U8(ctx.r31.u32 + 465, ctx.r25.u8);
	// stb r26,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r26.u8);
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222F9F0) {
	__imp__sub_8222F9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FB78) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8222f978
	sub_8222F978(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222FB78) {
	__imp__sub_8222FB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FB8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222FB8C) {
	__imp__sub_8222FB8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,232(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,236(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,240(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222FB90) {
	__imp__sub_8222FB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,244(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,248(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,252(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222FBE8) {
	__imp__sub_8222FBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FC40) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a24e0
	ctx.lr = 0x8222FC64;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1d50
	ctx.lr = 0x8222FC70;
	sub_822A1D50(ctx, base);
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
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

PPC_WEAK_FUNC(sub_8222FC40) {
	__imp__sub_8222FC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222FC8C) {
	__imp__sub_8222FC8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FC90) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r10,13480
	ctx.r9.s64 = ctx.r10.s64 + 13480;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222FC90) {
	__imp__sub_8222FC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FCA8) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// addi r7,r11,548
	ctx.r7.s64 = ctx.r11.s64 + 548;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r6,r11,566
	ctx.r6.s64 = ctx.r11.s64 + 566;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
loc_8222FCEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8222fd38
	if (ctx.cr6.eq) goto loc_8222FD38;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x8222fcec
	if (ctx.cr6.lt) goto loc_8222FCEC;
	// bl 0x822a13a0
	ctx.lr = 0x8222FD10;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8908
	ctx.r3.s64 = ctx.r11.s64 + -8908;
	// bl 0x822e84f0
	ctx.lr = 0x8222FD20;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8222FD24;
	sub_822AD350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222FD38:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222FCA8) {
	__imp__sub_8222FCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222FD4C) {
	__imp__sub_8222FD4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r3,r11,13544
	ctx.r3.s64 = ctx.r11.s64 + 13544;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222FD50) {
	__imp__sub_8222FD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222FD5C) {
	__imp__sub_8222FD5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FD60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r8,r9,17405
	ctx.r8.u64 = ctx.r9.u64 | 17405;
	// lwz r11,13544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13544);
	// mullw r7,r11,r8
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addis r11,r7,39
	ctx.r11.s64 = ctx.r7.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// stw r11,13544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13544, ctx.r11.u32);
	// rlwinm r3,r11,15,17,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222FD60) {
	__imp__sub_8222FD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// fsubs f13,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// ori r7,r9,17405
	ctx.r7.u64 = ctx.r9.u64 | 17405;
	// lwz r11,13544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13544);
	// mullw r6,r11,r7
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lfs f0,24340(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24340);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r6,39
	ctx.r11.s64 = ctx.r6.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// rlwinm r4,r11,15,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// stw r11,13544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13544, ctx.r11.u32);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f1,f9,f0,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f1.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222FD88) {
	__imp__sub_8222FD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222FDD4) {
	__imp__sub_8222FDD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// ori r7,r9,17405
	ctx.r7.u64 = ctx.r9.u64 | 17405;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lwz r11,13544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13544);
	// mullw r5,r11,r7
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addis r11,r5,39
	ctx.r11.s64 = ctx.r5.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// rlwinm r4,r11,15,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// stw r11,13544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13544, ctx.r11.u32);
	// mulld r10,r4,r6
	ctx.r10.s64 = ctx.r4.s64 * ctx.r6.s64;
	// sradi r9,r10,15
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r10.s64 >> 15;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222FDD8) {
	__imp__sub_8222FDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222FE1C) {
	__imp__sub_8222FE1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// ori r7,r9,17405
	ctx.r7.u64 = ctx.r9.u64 | 17405;
	// lwz r11,13544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13544);
	// mullw r6,r11,r7
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lfs f0,24340(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24340);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r6,39
	ctx.r11.s64 = ctx.r6.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// rlwinm r4,r11,15,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// stw r11,13544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13544, ctx.r11.u32);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222FE20) {
	__imp__sub_8222FE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222FE64) {
	__imp__sub_8222FE64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// ori r7,r9,17405
	ctx.r7.u64 = ctx.r9.u64 | 17405;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,13544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13544);
	// mullw r5,r11,r7
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lfs f0,15092(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15092);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// addis r11,r5,39
	ctx.r11.s64 = ctx.r5.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// rlwinm r3,r11,15,17,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// stw r11,13544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13544, ctx.r11.u32);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f1,f10,f0,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8222FE68) {
	__imp__sub_8222FE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222FEB4) {
	__imp__sub_8222FEB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8222FEC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lhz r9,126(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,2936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2936);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8222feec
	if (!ctx.cr6.eq) goto loc_8222FEEC;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stw r10,2936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2936, ctx.r10.u32);
loc_8222FEEC:
	// lhz r9,126(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lwz r10,2996(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2996);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8222ff04
	if (!ctx.cr6.eq) goto loc_8222FF04;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stw r10,2996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2996, ctx.r10.u32);
loc_8222FF04:
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x82284b78
	ctx.lr = 0x8222FF0C;
	sub_82284B78(ctx, base);
	// lhz r30,604(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8222ff30
	if (!ctx.cr6.eq) goto loc_8222FF30;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ff28
	if (ctx.cr6.eq) goto loc_8222FF28;
	// bl 0x82348478
	ctx.lr = 0x8222FF28;
	sub_82348478(ctx, base);
loc_8222FF28:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8222ffd4
	goto loc_8222FFD4;
loc_8222FF30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ea68
	ctx.lr = 0x8222FF38;
	sub_8222EA68(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,16432
	ctx.r4.s64 = ctx.r11.s64 + 16432;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// sth r10,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r7,r8,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// addi r11,r1,86
	ctx.r11.s64 = ctx.r1.s64 + 86;
	// addi r8,r31,540
	ctx.r8.s64 = ctx.r31.s64 + 540;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_8222FF6C:
	// lhz r7,-60(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + -60);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8222ffb0
	if (ctx.cr6.eq) goto loc_8222FFB0;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lhzu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 & ctx.r9.u64;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addic r30,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r30.s64 = ctx.r3.s64 + -1;
	// lwzx r28,r6,r4
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// subfe r6,r30,r3
	temp.u8 = (~ctx.r30.u32 + ctx.r3.u32 < ~ctx.r30.u32) | (~ctx.r30.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r30.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// sth r7,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r7.u16);
	// stw r28,2(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2, ctx.r28.u32);
	// stbu r6,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// blt cr6,0x8222ff6c
	if (ctx.cr6.lt) goto loc_8222FF6C;
loc_8222FFB0:
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r6,126(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822849a8
	ctx.lr = 0x8222FFC0;
	sub_822849A8(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222ffd0
	if (ctx.cr6.eq) goto loc_8222FFD0;
	// bl 0x82348478
	ctx.lr = 0x8222FFD0;
	sub_82348478(ctx, base);
loc_8222FFD0:
	// li r4,1
	ctx.r4.s64 = 1;
loc_8222FFD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822341a8
	ctx.lr = 0x8222FFDC;
	sub_822341A8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8222ffec
	if (ctx.cr6.eq) goto loc_8222FFEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x8222FFEC;
	sub_82340D30(ctx, base);
loc_8222FFEC:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222FEB8) {
	__imp__sub_8222FEB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8222FFF4) {
	__imp__sub_8222FFF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8222FFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82230000;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r3,480
	ctx.r11.s64 = ctx.r3.s64 + 480;
loc_82230018:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82230040
	if (ctx.cr6.eq) goto loc_82230040;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// blt cr6,0x82230018
	if (ctx.cr6.lt) goto loc_82230018;
loc_82230034:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82230040:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8222e230
	ctx.lr = 0x82230048;
	sub_8222E230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82230034
	if (ctx.cr6.eq) goto loc_82230034;
	// addi r11,r31,240
	ctx.r11.s64 = ctx.r31.s64 + 240;
	// addi r8,r31,271
	ctx.r8.s64 = ctx.r31.s64 + 271;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sthx r3,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + ctx.r30.u32, ctx.r3.u16);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822a24e0
	ctx.lr = 0x82230070;
	sub_822A24E0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8223008c
	if (ctx.cr6.eq) goto loc_8223008C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// slw r9,r11,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r8.u32);
loc_8223008C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822846c0
	ctx.lr = 0x82230094;
	sub_822846C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822300a8
	if (ctx.cr6.eq) goto loc_822300A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822f2368
	ctx.lr = 0x822300A8;
	sub_822F2368(ctx, base);
loc_822300A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 172);
	// bl 0x8222feb8
	ctx.lr = 0x822300B4;
	sub_8222FEB8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822300d4
	if (ctx.cr6.eq) goto loc_822300D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822846c0
	ctx.lr = 0x822300C4;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822300d4
	if (ctx.cr6.eq) goto loc_822300D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0330
	ctx.lr = 0x822300D4;
	sub_822F0330(ctx, base);
loc_822300D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8222FFF8) {
	__imp__sub_8222FFF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822300E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822300E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x822a1838
	ctx.lr = 0x822300FC;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230154
	if (ctx.cr6.eq) goto loc_82230154;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,-25976(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -25976);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82230154
	if (ctx.cr6.eq) goto loc_82230154;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r28,480
	ctx.r30.s64 = ctx.r28.s64 + 480;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82230124:
	// lhz r10,62(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 62);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82230144
	if (!ctx.cr6.eq) goto loc_82230144;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r3,r11,1208
	ctx.r3.s64 = ctx.r11.s64 + 1208;
	// bl 0x8233dd98
	ctx.lr = 0x8223013C;
	sub_8233DD98(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82230160
	if (ctx.cr6.eq) goto loc_82230160;
loc_82230144:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// blt cr6,0x82230124
	if (ctx.cr6.lt) goto loc_82230124;
loc_82230154:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82230160:
	// addi r11,r31,240
	ctx.r11.s64 = ctx.r31.s64 + 240;
	// addi r10,r31,271
	ctx.r10.s64 = ctx.r31.s64 + 271;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r26,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r26.u16);
	// bl 0x822a24e0
	ctx.lr = 0x8223018C;
	sub_822A24E0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r31,30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 30, ctx.xer);
	// rotlw r10,r7,r31
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, ctx.r31.u8 & 0x1F);
	// bge cr6,0x822301ec
	if (!ctx.cr6.lt) goto loc_822301EC;
	// subfic r9,r31,30
	ctx.xer.ca = ctx.r31.u32 <= 30;
	ctx.r9.s64 = 30 - ctx.r31.s64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822301AC:
	// lhz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r9,62(r11)
	PPC_STORE_U16(ctx.r11.u32 + 62, ctx.r9.u16);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// lwz r9,304(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	// and r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822301d8
	if (ctx.cr6.eq) goto loc_822301D8;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x822301dc
	goto loc_822301DC;
loc_822301D8:
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_822301DC:
	// stw r10,304(r28)
	PPC_STORE_U32(ctx.r28.u32 + 304, ctx.r10.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bdnz 0x822301ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822301AC;
loc_822301EC:
	// addi r11,r31,240
	ctx.r11.s64 = ctx.r31.s64 + 240;
	// addi r10,r31,271
	ctx.r10.s64 = ctx.r31.s64 + 271;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r9,r28
	PPC_STORE_U16(ctx.r9.u32 + ctx.r28.u32, ctx.r26.u16);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r8,r28
	PPC_STORE_U16(ctx.r8.u32 + ctx.r28.u32, ctx.r26.u16);
	// slw r7,r7,r31
	ctx.r7.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r31.u8 & 0x3F));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,304(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stw r5,304(r28)
	PPC_STORE_U32(ctx.r28.u32 + 304, ctx.r5.u32);
	// bl 0x822846c0
	ctx.lr = 0x8223021C;
	sub_822846C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223031c
	if (ctx.cr6.eq) goto loc_8223031C;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// rlwinm r10,r27,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3FFFC;
	// addi r9,r11,16432
	ctx.r9.s64 = ctx.r11.s64 + 16432;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82300b38
	ctx.lr = 0x8223023C;
	sub_82300B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f0200
	ctx.lr = 0x8223024C;
	sub_822F0200(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f2368
	ctx.lr = 0x8223025C;
	sub_822F2368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1d00
	ctx.lr = 0x82230264;
	sub_822F1D00(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r9,17280
	ctx.r8.s64 = ctx.r9.s64 + 17280;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x822302e0
	if (!ctx.cr6.lt) goto loc_822302E0;
	// subf r6,r10,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r9,r10,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8223028C:
	// srawi r6,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 5;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r9,r4,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// and r7,r5,r9
	ctx.r7.u64 = ctx.r5.u64 & ctx.r9.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// or r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 | ctx.r5.u64;
	// bne cr6,0x822302c8
	if (!ctx.cr6.eq) goto loc_822302C8;
	// andc r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 & ~ctx.r4.u64;
loc_822302C8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r6,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bdnz 0x8223028c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223028C;
loc_822302E0:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8223031c
	if (!ctx.cr6.lt) goto loc_8223031C;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r7,r11,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822302F4:
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// andc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// bdnz 0x822302f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822302F4;
loc_8223031C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 172);
	// bl 0x8222feb8
	ctx.lr = 0x82230328;
	sub_8222FEB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82230348
	if (ctx.cr6.eq) goto loc_82230348;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822846c0
	ctx.lr = 0x82230338;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82230348
	if (ctx.cr6.eq) goto loc_82230348;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0330
	ctx.lr = 0x82230348;
	sub_822F0330(ctx, base);
loc_82230348:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822300E0) {
	__imp__sub_822300E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82230354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82230354) {
	__imp__sub_82230354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82230358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82230360;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x822a1838
	ctx.lr = 0x82230378;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822303cc
	if (ctx.cr6.eq) goto loc_822303CC;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,-25976(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -25976);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822303cc
	if (ctx.cr6.eq) goto loc_822303CC;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,480
	ctx.r31.s64 = ctx.r28.s64 + 480;
loc_8223039C:
	// lhz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x822303bc
	if (!ctx.cr6.eq) goto loc_822303BC;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r3,r11,1208
	ctx.r3.s64 = ctx.r11.s64 + 1208;
	// bl 0x8233dd98
	ctx.lr = 0x822303B4;
	sub_8233DD98(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822303d8
	if (ctx.cr6.eq) goto loc_822303D8;
loc_822303BC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r30,31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 31, ctx.xer);
	// blt cr6,0x8223039c
	if (ctx.cr6.lt) goto loc_8223039C;
loc_822303CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822303D8:
	// addi r11,r30,271
	ctx.r11.s64 = ctx.r30.s64 + 271;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x822a24e0
	ctx.lr = 0x822303EC;
	sub_822A24E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 172);
	// bl 0x8222feb8
	ctx.lr = 0x822303F8;
	sub_8222FEB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82230358) {
	__imp__sub_82230358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82230404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82230404) {
	__imp__sub_82230404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82230408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82230410;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,542
	ctx.r31.s64 = ctx.r3.s64 + 542;
	// li r30,31
	ctx.r30.s64 = 31;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82230424:
	// sth r29,-62(r31)
	PPC_STORE_U16(ctx.r31.u32 + -62, ctx.r29.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a24e0
	ctx.lr = 0x82230434;
	sub_822A24E0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x82230424
	if (!ctx.cr0.eq) goto loc_82230424;
	// stw r29,304(r28)
	PPC_STORE_U32(ctx.r28.u32 + 304, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822846c0
	ctx.lr = 0x8223044C;
	sub_822846C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822304c0
	if (ctx.cr6.eq) goto loc_822304C0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822f2368
	ctx.lr = 0x82230460;
	sub_822F2368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1d00
	ctx.lr = 0x82230468;
	sub_822F1D00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x82230478;
	sub_822F1EB8(ctx, base);
	// bl 0x82300b38
	ctx.lr = 0x8223047C;
	sub_82300B38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x822304c0
	if (!ctx.cr6.lt) goto loc_822304C0;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// rlwinm r9,r3,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r8,r11,17280
	ctx.r8.s64 = ctx.r11.s64 + 17280;
loc_82230498:
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm r9,r3,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// bdnz 0x82230498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82230498;
loc_822304C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 172);
	// bl 0x8222feb8
	ctx.lr = 0x822304CC;
	sub_8222FEB8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822304ec
	if (ctx.cr6.eq) goto loc_822304EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822846c0
	ctx.lr = 0x822304DC;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822304ec
	if (ctx.cr6.eq) goto loc_822304EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0330
	ctx.lr = 0x822304EC;
	sub_822F0330(ctx, base);
loc_822304EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82230408) {
	__imp__sub_82230408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822304F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822304F4) {
	__imp__sub_822304F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822304F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82230500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8222f3a8
	ctx.lr = 0x82230510;
	sub_8222F3A8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stb r8,175(r3)
	PPC_STORE_U8(ctx.r3.u32 + 175, ctx.r8.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r10,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r10.u32);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,232(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// stfs f12,236(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f11,240(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// bl 0x82340d30
	ctx.lr = 0x82230580;
	sub_82340D30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822304F8) {
	__imp__sub_822304F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223058C) {
	__imp__sub_8223058C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82230590) {
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
	// clrlwi r31,r4,16
	ctx.r31.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822305b8
	if (ctx.cr6.eq) goto loc_822305B8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822304f8
	ctx.lr = 0x822305B4;
	sub_822304F8(ctx, base);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
loc_822305B8:
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

PPC_WEAK_FUNC(sub_82230590) {
	__imp__sub_82230590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822305CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822305CC) {
	__imp__sub_822305CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822305D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r9,38
	ctx.r9.s64 = 2490368;
	// ori r10,r11,17405
	ctx.r10.u64 = ctx.r11.u64 | 17405;
	// ori r11,r9,40643
	ctx.r11.u64 = ctx.r9.u64 | 40643;
	// mullw r8,r3,r10
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// mullw r5,r7,r10
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mullw r3,r4,r10
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,13544(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13544, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822305D0) {
	__imp__sub_822305D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223060C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223060C) {
	__imp__sub_8223060C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82230610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// ori r9,r11,26215
	ctx.r9.u64 = ctx.r11.u64 | 26215;
	// addi r10,r10,-29824
	ctx.r10.s64 = ctx.r10.s64 + -29824;
	// mulhw r8,r3,r9
	ctx.r8.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// addi r10,r10,11568
	ctx.r10.s64 = ctx.r10.s64 + 11568;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r6,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r6.s64;
	// mulli r11,r5,832
	ctx.r11.s64 = ctx.r5.s64 * 832;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82230610) {
	__imp__sub_82230610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82230650) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82230714
	if (!ctx.cr6.gt) goto loc_82230714;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r8,50
	ctx.r8.s64 = 50;
	// addi r9,r11,-29824
	ctx.r9.s64 = ctx.r11.s64 + -29824;
	// divw r7,r10,r8
	ctx.r7.s32 = ctx.r10.s32 / ctx.r8.s32;
	// lwz r8,28208(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28208);
	// addi r10,r8,-20
	ctx.r10.s64 = ctx.r8.s64 + -20;
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82230698
	if (!ctx.cr6.lt) goto loc_82230698;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mulli r7,r8,50
	ctx.r7.s64 = ctx.r8.s64 * 50;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwz r8,28208(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28208);
loc_82230698:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822306b0
	if (!ctx.cr6.lt) goto loc_822306B0;
	// mulli r11,r8,50
	ctx.r11.s64 = ctx.r8.s64 * 50;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r8,28208(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28208);
	// li r11,0
	ctx.r11.s64 = 0;
loc_822306B0:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8223070c
	if (!ctx.cr6.lt) goto loc_8223070C;
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// ori r5,r10,26215
	ctx.r5.u64 = ctx.r10.u64 | 26215;
loc_822306C0:
	// mulhw r10,r11,r5
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32)) >> 32;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addi r7,r9,11568
	ctx.r7.s64 = ctx.r9.s64 + 11568;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mulli r10,r10,832
	ctx.r10.s64 = ctx.r10.s64 * 832;
	// add. r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// mulli r8,r10,50
	ctx.r8.s64 = ctx.r10.s64 * 50;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwz r8,28208(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28208);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822306c0
	if (ctx.cr6.lt) goto loc_822306C0;
loc_8223070C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82230714:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82230650) {
	__imp__sub_82230650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223071C) {
	__imp__sub_8223071C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82230720) {
	PPC_FUNC_PROLOGUE();
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// addi r8,r3,384
	ctx.r8.s64 = ctx.r3.s64 + 384;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r7,r10,9624
	ctx.r7.s64 = ctx.r10.s64 + 9624;
loc_8223074C:
	// lwz r10,24(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r4,5039(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5039);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82230768
	if (!ctx.cr6.eq) goto loc_82230768;
	// stbx r9,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// b 0x822307a4
	goto loc_822307A4;
loc_82230768:
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r4,800(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 800);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82230780
	if (!ctx.cr6.eq) goto loc_82230780;
	// stbx r9,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// b 0x822307a4
	goto loc_822307A4;
loc_82230780:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r4,768(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 768);
	// lwz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822307a0
	if (ctx.cr6.eq) goto loc_822307A0;
	// stbx r9,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// b 0x822307a4
	goto loc_822307A4;
loc_822307A0:
	// stbx r5,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u8);
loc_822307A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,5128
	ctx.r8.s64 = ctx.r8.s64 + 5128;
	// bdnz 0x8223074c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223074C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82230720) {
	__imp__sub_82230720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822307B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822307B4) {
	__imp__sub_822307B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822307B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x822307C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// subf r22,r3,r11
	ctx.r22.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// divw r8,r22,r10
	ctx.r8.s32 = ctx.r22.s32 / ctx.r10.s32;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mulli r11,r8,50
	ctx.r11.s64 = ctx.r8.s64 * 50;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r7,r11,50
	ctx.r7.s64 = ctx.r11.s64 + 50;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x82230650
	ctx.lr = 0x82230824;
	sub_82230650(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82230650
	ctx.lr = 0x82230830;
	sub_82230650(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82230844
	if (!ctx.cr6.eq) goto loc_82230844;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// b 0x8223084c
	goto loc_8223084C;
loc_82230844:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82230874
	if (!ctx.cr6.eq) goto loc_82230874;
loc_8223084C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82230874
	if (!ctx.cr6.eq) goto loc_82230874;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r11,-8888
	ctx.r4.s64 = ctx.r11.s64 + -8888;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x82230868;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82230874:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addic r8,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r8.s64 = ctx.r25.s64 + -1;
	// subfe r11,r8,r25
	temp.u8 = (~ctx.r8.u32 + ctx.r25.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r25.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r25.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// std r23,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r23.u64);
	// addic r7,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r7.s64 = ctx.r24.s64 + -1;
	// std r23,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r23.u64);
	// clrlwi r20,r11,24
	ctx.r20.u64 = ctx.r11.u32 & 0xFF;
	// std r23,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r23.u64);
	// subfe r19,r7,r24
	temp.u8 = (~ctx.r7.u32 + ctx.r24.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r24.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r19.u64 = ~ctx.r7.u64 + ctx.r24.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// std r23,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r23.u64);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// std r23,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r23.u64);
	// std r23,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r23.u64);
	// std r23,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r23.u64);
	// std r23,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r23.u64);
	// beq cr6,0x822308d4
	if (ctx.cr6.eq) goto loc_822308D4;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82230720
	ctx.lr = 0x822308CC;
	sub_82230720(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_822308D4:
	// clrlwi r25,r19,24
	ctx.r25.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822308fc
	if (ctx.cr6.eq) goto loc_822308FC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82230720
	ctx.lr = 0x822308F4;
	sub_82230720(ctx, base);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_822308FC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8223094c
	if (ctx.cr6.eq) goto loc_8223094C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8223094c
	if (ctx.cr6.eq) goto loc_8223094C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r9,r22,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r22.s64;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// b 0x82230954
	goto loc_82230954;
loc_8223094C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_82230954:
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// subf r23,r30,r28
	ctx.r23.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// subf r20,r31,r30
	ctx.r20.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r22,r30,r27
	ctx.r22.s64 = ctx.r27.s64 - ctx.r30.s64;
	// subf r4,r30,r26
	ctx.r4.s64 = ctx.r26.s64 - ctx.r30.s64;
	// subf r30,r29,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r29.s64;
	// subf r25,r31,r28
	ctx.r25.s64 = ctx.r28.s64 - ctx.r31.s64;
	// subf r7,r31,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// subf r3,r29,r26
	ctx.r3.s64 = ctx.r26.s64 - ctx.r29.s64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// subf r24,r31,r27
	ctx.r24.s64 = ctx.r27.s64 - ctx.r31.s64;
	// subf r6,r31,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r31.s64;
	// subf r29,r29,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r29.s64;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// li r31,1
	ctx.r31.s64 = 1;
loc_822309A4:
	// lbzx r28,r8,r28
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82230a7c
	if (ctx.cr6.eq) goto loc_82230A7C;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// lbzx r27,r8,r27
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82230a40
	if (ctx.cr6.eq) goto loc_82230A40;
	// stbx r31,r8,r21
	PPC_STORE_U8(ctx.r8.u32 + ctx.r21.u32, ctx.r31.u8);
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r9,r30
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r10,r23
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f6,f7,f0,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfsx f6,r10,r5
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r25,r11
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmadds f2,f3,f0,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfsx f2,r7,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lfs f1,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f13,r9,r29
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fmadds f11,f12,f0,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfsx f11,r9,r3
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r10,r22
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f8,f0,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfsx f7,r10,r4
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// lfsx f6,r20,r11
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r11,r24
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f0,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfsx f3,r11,r6
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// b 0x82230ac0
	goto loc_82230AC0;
loc_82230A40:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82230a7c
	if (ctx.cr6.eq) goto loc_82230A7C;
	// stbx r31,r8,r21
	PPC_STORE_U8(ctx.r8.u32 + ctx.r21.u32, ctx.r31.u8);
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r10,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r7,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lfs f10,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f10,r9,r3
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r10,r4
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// lfsx f8,r20,r11
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// b 0x82230abc
	goto loc_82230ABC;
loc_82230A7C:
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// lbzx r28,r8,r28
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82230ac0
	if (ctx.cr6.eq) goto loc_82230AC0;
	// stbx r31,r8,r21
	PPC_STORE_U8(ctx.r8.u32 + ctx.r21.u32, ctx.r31.u8);
	// lfsx f13,r9,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfsx f12,r10,r23
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r10,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lfsx f11,r25,r11
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r7,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lfsx f10,r9,r29
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f10,r9,r3
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// lfsx f9,r10,r22
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r10,r4
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// lfsx f8,r11,r24
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	ctx.f8.f64 = double(temp.f32);
loc_82230ABC:
	// stfsx f8,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
loc_82230AC0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// bdnz 0x822309a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822309A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822307B8) {
	__imp__sub_822307B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82230AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82230AE4) {
	__imp__sub_82230AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82230AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82230AF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,800
	ctx.r5.s64 = 800;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823de090
	ctx.lr = 0x82230B0C;
	sub_823DE090(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r25,r11,9624
	ctx.r25.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpwi cr6,r10,1000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1000, ctx.xer);
	// ble cr6,0x82230b28
	if (!ctx.cr6.gt) goto loc_82230B28;
	// addi r31,r11,-1000
	ctx.r31.s64 = ctx.r11.s64 + -1000;
loc_82230B28:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// ble cr6,0x82230c48
	if (!ctx.cr6.gt) goto loc_82230C48;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r24,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// std r24,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r24.u64);
	// std r24,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r24.u64);
	// bl 0x822307b8
	ctx.lr = 0x82230B60;
	sub_822307B8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82230c48
	if (ctx.cr6.eq) goto loc_82230C48;
	// addi r31,r27,392
	ctx.r31.s64 = ctx.r27.s64 + 392;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r27,r27,768
	ctx.r27.s64 = ctx.r27.s64 + 768;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82230B88:
	// lbzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82230c28
	if (ctx.cr6.eq) goto loc_82230C28;
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r11,r1,504
	ctx.r11.s64 = ctx.r1.s64 + 504;
	// addi r9,r1,496
	ctx.r9.s64 = ctx.r1.s64 + 496;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// lwzx r3,r28,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lfsx f0,r30,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,232
	ctx.r10.s64 = ctx.r3.s64 + 232;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,244
	ctx.r11.s64 = ctx.r3.s64 + 244;
	// lfsx f11,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,-392(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + -392, temp.u32);
	// lfs f9,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-388(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + -388, temp.u32);
	// lfs f8,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,-384(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + -384, temp.u32);
	// lfs f7,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,-8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// lfs f6,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,-4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f5,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfsx f4,r30,r7
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r30,r6
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// stfs f13,236(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f12,240(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f11,244(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f4,248(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f3,252(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// bl 0x82340d30
	ctx.lr = 0x82230C20;
	sub_82340D30(ctx, base);
	// stbx r26,r27,r29
	PPC_STORE_U8(ctx.r27.u32 + ctx.r29.u32, ctx.r26.u8);
	// b 0x82230c2c
	goto loc_82230C2C;
loc_82230C28:
	// stbx r24,r27,r29
	PPC_STORE_U8(ctx.r27.u32 + ctx.r29.u32, ctx.r24.u8);
loc_82230C2C:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,5128
	ctx.r28.s64 = ctx.r28.s64 + 5128;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r30,384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 384, ctx.xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x82230b88
	if (ctx.cr6.lt) goto loc_82230B88;
loc_82230C48:
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82230AE8) {
	__imp__sub_82230AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82230C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82230C58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r30,r3,768
	ctx.r30.s64 = ctx.r3.s64 + 768;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r31,r3,392
	ctx.r31.s64 = ctx.r3.s64 + 392;
	// li r28,32
	ctx.r28.s64 = 32;
	// addi r27,r11,9624
	ctx.r27.s64 = ctx.r11.s64 + 9624;
loc_82230C78:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82230cc4
	if (ctx.cr6.eq) goto loc_82230CC4;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lfs f0,-392(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -392);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lfs f13,-388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -388);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lfs f12,-384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -384);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lfs f11,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,244(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lfs f10,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,248(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,252(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// bl 0x82340d30
	ctx.lr = 0x82230CC0;
	sub_82340D30(ctx, base);
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
loc_82230CC4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,5128
	ctx.r29.s64 = ctx.r29.s64 + 5128;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82230c78
	if (!ctx.cr0.eq) goto loc_82230C78;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82230C50) {
	__imp__sub_82230C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82230CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x82230CE8;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de028
	ctx.lr = 0x82230CF0;
	__savefpr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// lfs f28,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// stfs f28,0(r9)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bgt cr6,0x82230d3c
	if (ctx.cr6.gt) goto loc_82230D3C;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// li r19,1
	ctx.r19.s64 = 1;
	// ble cr6,0x82230d40
	if (!ctx.cr6.gt) goto loc_82230D40;
loc_82230D3C:
	// li r19,9
	ctx.r19.s64 = 9;
loc_82230D40:
	// lwz r11,264(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 264);
	// addi r23,r30,36
	ctx.r23.s64 = ctx.r30.s64 + 36;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82230d8c
	if (ctx.cr6.eq) goto loc_82230D8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,5876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f7,f13,f0,f10
	ctx.f7.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// fnmsubs f6,f12,f0,f9
	ctx.f6.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fnmsubs f5,f11,f0,f8
	ctx.f5.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f8.f64)));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82230da4
	goto loc_82230DA4;
loc_82230D8C:
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
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
loc_82230DA4:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8223100c
	if (ctx.cr6.eq) goto loc_8223100C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r25,-32032
	ctx.r25.s64 = -2099249152;
	// lis r24,-32052
	ctx.r24.s64 = -2100559872;
	// addi r20,r11,-2232
	ctx.r20.s64 = ctx.r11.s64 + -2232;
	// addi r27,r10,26552
	ctx.r27.s64 = ctx.r10.s64 + 26552;
	// addi r21,r9,-2280
	ctx.r21.s64 = ctx.r9.s64 + -2280;
	// addi r26,r8,7856
	ctx.r26.s64 = ctx.r8.s64 + 7856;
	// addi r28,r7,-8824
	ctx.r28.s64 = ctx.r7.s64 + -8824;
loc_82230DE0:
	// lfs f13,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// lfs f11,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f12,f31,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f11.f64));
	// lfs f9,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f10,f31,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f9.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ble cr6,0x82230e6c
	if (!ctx.cr6.gt) goto loc_82230E6C;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r11,r28
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f30
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// lfsx f4,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f29
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// lfs f2,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f11,f5,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fmadds f0,f10,f5,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f13,f9,f5,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fmadds f12,f3,f8,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f1.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f11,f7,f3,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f0.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f10,f2,f3,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f13.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82230E6C:
	// lis r7,640
	ctx.r7.s64 = 41943040;
	// lhz r6,126(r22)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r22.u32 + 126);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// ori r7,r7,57489
	ctx.r7.u64 = ctx.r7.u64 | 57489;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821fe6a8
	ctx.lr = 0x82230E8C;
	sub_821FE6A8(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f8,f0,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f3,f6,f0,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f2,f5,f0,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bne cr6,0x82230f20
	if (!ctx.cr6.eq) goto loc_82230F20;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8222d808
	ctx.lr = 0x82230EF0;
	sub_8222D808(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82276118
	ctx.lr = 0x82230EF8;
	sub_82276118(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82230f1c
	if (ctx.cr6.eq) goto loc_82230F1C;
	// lwz r10,-17556(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17556);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x821f3cc8
	ctx.lr = 0x82230F1C;
	sub_821F3CC8(ctx, base);
loc_82230F1C:
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
loc_82230F20:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x82230fc8
	if (ctx.cr6.eq) goto loc_82230FC8;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82230fc8
	if (!ctx.cr6.eq) goto loc_82230FC8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82276090
	ctx.lr = 0x82230F40;
	sub_82276090(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r10,264(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 264);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// beq cr6,0x82230f64
	if (ctx.cr6.eq) goto loc_82230F64;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231024
	if (!ctx.cr6.eq) goto loc_82231024;
loc_82230F64:
	// lwz r11,-5916(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5916);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82230f8c
	if (ctx.cr6.eq) goto loc_82230F8C;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r7,200
	ctx.r7.s64 = 200;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f2d18
	ctx.lr = 0x82230F8C;
	sub_821F2D18(ctx, base);
loc_82230F8C:
	// lfs f0,0(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82230ff0
	if (ctx.cr6.gt) goto loc_82230FF0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82230FAC;
	sub_823DE1F0(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r17)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r17.u32 + 0, temp.u32);
	// stfs f13,4(r17)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r17.u32 + 4, temp.u32);
	// stfs f12,8(r17)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r17.u32 + 8, temp.u32);
	// b 0x82230ff0
	goto loc_82230FF0;
loc_82230FC8:
	// lwz r11,-5916(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5916);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82230ff0
	if (ctx.cr6.eq) goto loc_82230FF0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r7,200
	ctx.r7.s64 = 200;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f2d18
	ctx.lr = 0x82230FF0;
	sub_821F2D18(ctx, base);
loc_82230FF0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82230de0
	if (ctx.cr6.lt) goto loc_82230DE0;
	// lfs f0,0(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82231010
	if (ctx.cr6.lt) goto loc_82231010;
loc_8223100C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82231010:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de074
	ctx.lr = 0x82231020;
	__restfpr_28(ctx, base);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
loc_82231024:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lhz r10,126(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lwz r11,-6116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6116);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822310c4
	if (!ctx.cr6.eq) goto loc_822310C4;
	// lhz r10,198(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 198);
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// beq cr6,0x822310c4
	if (ctx.cr6.eq) goto loc_822310C4;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// bl 0x8222ec90
	ctx.lr = 0x82231068;
	sub_8222EC90(ctx, base);
	// lis r30,-32024
	ctx.r30.s64 = -2098724864;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-2200
	ctx.r4.s64 = ctx.r9.s64 + -2200;
	// lwz r11,5544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5544);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8233d480
	ctx.lr = 0x82231084;
	sub_8233D480(ctx, base);
	// lwz r11,5544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5544);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r7,-2264
	ctx.r5.s64 = ctx.r7.s64 + -2264;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82127ea8
	ctx.lr = 0x822310A8;
	sub_82127EA8(ctx, base);
	// lwz r11,5544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5544);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82128080
	ctx.lr = 0x822310C0;
	sub_82128080(ctx, base);
	// b 0x822310f0
	goto loc_822310F0;
loc_822310C4:
	// lwz r11,-5916(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5916);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822310f0
	if (ctx.cr6.eq) goto loc_822310F0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,200
	ctx.r7.s64 = 200;
	// addi r5,r11,-2264
	ctx.r5.s64 = ctx.r11.s64 + -2264;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f2d18
	ctx.lr = 0x822310F0;
	sub_821F2D18(ctx, base);
loc_822310F0:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82231100;
	sub_823DE1F0(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r17)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r17.u32 + 0, temp.u32);
	// stfs f13,4(r17)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r17.u32 + 4, temp.u32);
	// stfs f12,8(r17)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r17.u32 + 8, temp.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de074
	ctx.lr = 0x82231128;
	__restfpr_28(ctx, base);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82230CE0) {
	__imp__sub_82230CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223112C) {
	__imp__sub_8223112C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82231130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82231138;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,64(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r26,568(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82230ce0
	ctx.lr = 0x8223115C;
	sub_82230CE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223139c
	if (ctx.cr6.eq) goto loc_8223139C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82276090
	ctx.lr = 0x82231170;
	sub_82276090(ctx, base);
	// lhz r11,182(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 182);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r9,264(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// addi r7,r11,-19
	ctx.r7.s64 = ctx.r11.s64 + -19;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// addi r11,r8,26552
	ctx.r11.s64 = ctx.r8.s64 + 26552;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r27,r6,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822311c8
	if (!ctx.cr6.eq) goto loc_822311C8;
	// lwz r10,272(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822311c8
	if (ctx.cr6.eq) goto loc_822311C8;
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822311c8
	if (ctx.cr6.eq) goto loc_822311C8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8223139c
	if (ctx.cr6.eq) goto loc_8223139C;
loc_822311C8:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231210
	if (ctx.cr6.eq) goto loc_82231210;
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231210
	if (ctx.cr6.eq) goto loc_82231210;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231210
	if (ctx.cr6.eq) goto loc_82231210;
	// lbz r11,174(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 174);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,174(r30)
	PPC_STORE_U8(ctx.r30.u32 + 174, ctx.r10.u8);
	// lwz r3,1468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// bl 0x8222e9c0
	ctx.lr = 0x82231200;
	sub_8222E9C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222f978
	ctx.lr = 0x82231210;
	sub_8222F978(ctx, base);
loc_82231210:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231244
	if (ctx.cr6.eq) goto loc_82231244;
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231244
	if (ctx.cr6.eq) goto loc_82231244;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231244
	if (!ctx.cr6.eq) goto loc_82231244;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222f978
	ctx.lr = 0x82231244;
	sub_8222F978(ctx, base);
loc_82231244:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231260
	if (!ctx.cr6.eq) goto loc_82231260;
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// li r4,44
	ctx.r4.s64 = 44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231264
	if (ctx.cr6.eq) goto loc_82231264;
loc_82231260:
	// li r4,43
	ctx.r4.s64 = 43;
loc_82231264:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822304f8
	ctx.lr = 0x8223126C;
	sub_822304F8(ctx, base);
	// lhz r11,126(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,128(r3)
	PPC_STORE_U16(ctx.r3.u32 + 128, ctx.r11.u16);
	// lhz r9,124(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 124);
	// sth r9,124(r3)
	PPC_STORE_U16(ctx.r3.u32 + 124, ctx.r9.u16);
	// lbz r8,168(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 168);
	// stb r8,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r8.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r7,484(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822312ac
	if (ctx.cr6.eq) goto loc_822312AC;
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822312ac
	if (ctx.cr6.eq) goto loc_822312AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_822312AC:
	// clrlwi r31,r27,24
	ctx.r31.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822312c4
	if (ctx.cr6.eq) goto loc_822312C4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_822312C4:
	// lhz r11,126(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// cmplwi cr6,r11,2046
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2046, ctx.xer);
	// beq cr6,0x8223139c
	if (ctx.cr6.eq) goto loc_8223139C;
	// lbz r11,289(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 289);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223139c
	if (ctx.cr6.eq) goto loc_8223139C;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f13,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,13552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13552);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8222fd60
	ctx.lr = 0x82231304;
	sub_8222FD60(ctx, base);
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// ori r9,r10,26215
	ctx.r9.u64 = ctx.r10.u64 | 26215;
	// mulhw r8,r3,r9
	ctx.r8.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r7,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r7.s64;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// beq cr6,0x8223134c
	if (ctx.cr6.eq) goto loc_8223134C;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r10,122(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// b 0x82231358
	goto loc_82231358;
loc_8223134C:
	// lhz r11,182(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 182);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
loc_82231358:
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lhz r4,178(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 178);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f1080
	ctx.lr = 0x82231390;
	sub_821F1080(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8223139C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82231130) {
	__imp__sub_82231130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822313A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822313B0;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32032
	ctx.r31.s64 = -2099249152;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r11,-6032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6032);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822313f4
	if (ctx.cr6.eq) goto loc_822313F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82230ae8
	ctx.lr = 0x822313F4;
	sub_82230AE8(ctx, base);
loc_822313F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82231130
	ctx.lr = 0x8223140C;
	sub_82231130(ctx, base);
	// lwz r11,-6032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6032);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231428
	if (ctx.cr6.eq) goto loc_82231428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82230c50
	ctx.lr = 0x82231428;
	sub_82230C50(ctx, base);
loc_82231428:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
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

PPC_WEAK_FUNC(sub_822313A8) {
	__imp__sub_822313A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82231440) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8222fe20
	ctx.lr = 0x8223146C;
	sub_8222FE20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x8222fe20
	ctx.lr = 0x8223147C;
	sub_8222FE20(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f0,5524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x82231494;
	sub_823DE720(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x822314A0;
	sub_823DE800(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f29,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
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

PPC_WEAK_FUNC(sub_82231440) {
	__imp__sub_82231440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822314D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,64(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,1028(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1028);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f10,f13,f9
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r6,1032(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1032);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fadds f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,1036(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1036);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822315a4
	if (ctx.cr6.eq) goto loc_822315A4;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,1036(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1036);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmadds f9,f13,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsqrte f7,f9
	ctx.f7.f64 = 1.0 / sqrt(ctx.f9.f64);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmadds f1,f4,f3,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f2,f4,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f10.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_822315A4:
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// beq cr6,0x822315bc
	if (ctx.cr6.eq) goto loc_822315BC;
	// lwz r9,728(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 728);
	// b 0x822315c0
	goto loc_822315C0;
loc_822315BC:
	// lwz r9,732(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 732);
loc_822315C0:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822067b8
	ctx.lr = 0x822315D8;
	sub_822067B8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// lfs f11,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f5,f6,f11,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f7.f64;
	// fdivs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 / ctx.f5.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f9,f3,f13,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f2,f12,f9
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f7,f0,f8,f1
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f1.f64));
	// stfs f7,40(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f6,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f5,f8,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f6.f64));
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f3,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f8,f2,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f3.f64));
	// stfs f1,48(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822314D8) {
	__imp__sub_822314D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82231680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,64(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// lwz r3,1028(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1028);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,1032(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1032);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fadds f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x822067b8
	ctx.lr = 0x82231718;
	sub_822067B8(ctx, base);
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// oris r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 131072;
	// stw r9,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822317c0
	if (ctx.cr6.eq) goto loc_822317C0;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// lfs f11,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f5,f6,f11,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f7.f64;
	// fdivs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 / ctx.f5.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f9,f3,f13,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f2,f12,f9
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f7,f0,f8,f1
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f1.f64));
	// stfs f7,40(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f6,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f8,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f3,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f8,f2,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f3.f64));
	// stfs f1,48(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
loc_822317C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82231680) {
	__imp__sub_82231680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822317D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822317D4) {
	__imp__sub_822317D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822317D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822317E0;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de000
	ctx.lr = 0x822317E8;
	__savefpr_18(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82231a68
	if (ctx.cr6.eq) goto loc_82231A68;
	// lfs f9,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// lfs f8,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fsubs f1,f12,f9
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f6,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f11,f8
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f0,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fadds f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// lfs f31,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f8,f10,f6
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// lfs f29,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f29.f64 = double(temp.f32);
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// lfs f30,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f26,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f26.f64 = double(temp.f32);
	// fmr f6,f4
	ctx.f6.f64 = ctx.f4.f64;
	// lfs f25,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f25.f64 = double(temp.f32);
	// fadds f31,f31,f12
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f12.f64));
	// lfs f12,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmr f4,f2
	ctx.f4.f64 = ctx.f2.f64;
	// lfs f24,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f24.f64 = double(temp.f32);
	// fadds f28,f12,f10
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f12,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fadds f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// lfs f12,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f29,f7
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f7.f64));
	// lfs f29,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// fadds f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// lfs f12,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f3,f29,f3
	ctx.f3.f64 = double(float(ctx.f29.f64 + ctx.f3.f64));
	// lfs f29,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f29.f64 = double(temp.f32);
	// fadds f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfs f27,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fadds f9,f29,f9
	ctx.f9.f64 = double(float(ctx.f29.f64 + ctx.f9.f64));
	// lfs f29,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f6,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f30,f30,f11
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f11.f64));
	// lfs f11,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r5,24
	ctx.r11.s64 = ctx.r5.s64 + 24;
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 + 12;
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f29,f13,f29
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f23,f25
	ctx.f23.f64 = ctx.f25.f64;
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f22,f24
	ctx.f22.f64 = ctx.f24.f64;
	// stfs f28,124(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f21,f26
	ctx.f21.f64 = ctx.f26.f64;
	// stfs f27,80(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f20,f25
	ctx.f20.f64 = ctx.f25.f64;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f19,f24
	ctx.f19.f64 = ctx.f24.f64;
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f18,f27
	ctx.f18.f64 = ctx.f27.f64;
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f9,f26
	ctx.f9.f64 = ctx.f26.f64;
	// stfs f26,104(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f8,f13,f26
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f7,f25
	ctx.f7.f64 = ctx.f25.f64;
	// stfs f25,108(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f24,112(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// li r11,6
	ctx.r11.s64 = 6;
	// fadds f6,f25,f12
	ctx.f6.f64 = double(float(ctx.f25.f64 + ctx.f12.f64));
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f4,f24,f0
	ctx.f4.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// fadds f3,f26,f13
	ctx.f3.f64 = double(float(ctx.f26.f64 + ctx.f13.f64));
	// fadds f2,f25,f12
	ctx.f2.f64 = double(float(ctx.f25.f64 + ctx.f12.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fadds f13,f24,f0
	ctx.f13.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// fadds f7,f25,f12
	ctx.f7.f64 = double(float(ctx.f25.f64 + ctx.f12.f64));
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f12,f8,f27
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f27.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmr f5,f24
	ctx.f5.f64 = ctx.f24.f64;
	// fadds f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f8,f1,f6
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmr f10,f27
	ctx.f10.f64 = ctx.f27.f64;
	// fadds f7,f11,f4
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsubs f6,f3,f27
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f27.f64));
	// stfs f6,176(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f4,f2,f1
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f4,180(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fsubs f3,f13,f11
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f3,184(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmr f9,f1
	ctx.f9.f64 = ctx.f1.f64;
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
loc_822319D0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822319d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822319D0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// li r30,9
	ctx.r30.s64 = 9;
	// lfs f30,-14540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-14544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14544);
	ctx.f31.f64 = double(temp.f32);
loc_822319F4:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8222fd88
	ctx.lr = 0x82231A00;
	sub_8222FD88(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8222fd88
	ctx.lr = 0x82231A18;
	sub_8222FD88(ctx, base);
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8222fd88
	ctx.lr = 0x82231A30;
	sub_8222FD88(ctx, base);
	// lfs f10,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// stfs f9,208(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82206980
	ctx.lr = 0x82231A5C;
	sub_82206980(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x822319f4
	if (!ctx.cr0.eq) goto loc_822319F4;
loc_82231A68:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de04c
	ctx.lr = 0x82231A74;
	__restfpr_18(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822317D8) {
	__imp__sub_822317D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82231A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82231A80;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x823dde60
	ctx.lr = 0x82231AB0;
	sub_823DDE60(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,6056(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82231440
	ctx.lr = 0x82231ACC;
	sub_82231440(ctx, base);
	// lfs f0,6056(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f2,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmadds f3,f7,f9,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f7,f2,f9,f6
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f6.f64));
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f3,f0,f4,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f5,f12,f9,f1
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f1.f64));
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f2,f11,f4,f7
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f7.f64));
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f6,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f3,f3
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f1,f8,f4,f5
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fmadds f12,f2,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f11,f1,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f9,f13,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fdivs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fmuls f6,f7,f3
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f5,f7,f1
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f4,f2,f7
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82206980
	ctx.lr = 0x82231B9C;
	sub_82206980(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,27056(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27056);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82231bd4
	if (ctx.cr6.eq) goto loc_82231BD4;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822317d8
	ctx.lr = 0x82231BD4;
	sub_822317D8(ctx, base);
loc_82231BD4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82231A78) {
	__imp__sub_82231A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82231BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82231BE4) {
	__imp__sub_82231BE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82231BE8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,289(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 289);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231bfc
	if (!ctx.cr6.eq) goto loc_82231BFC;
loc_82231BF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82231BFC:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82231bf4
	if (ctx.cr6.eq) goto loc_82231BF4;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231bf4
	if (ctx.cr6.eq) goto loc_82231BF4;
	// lwz r10,264(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82231bf4
	if (ctx.cr6.eq) goto loc_82231BF4;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82231BE8) {
	__imp__sub_82231BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82231C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82231C38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82231c94
	if (!ctx.cr6.eq) goto loc_82231C94;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,44392
	ctx.r8.u64 = ctx.r11.u64 | 44392;
	// ori r7,r9,44396
	ctx.r7.u64 = ctx.r9.u64 | 44396;
	// lfsx f0,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfsx f13,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82231C94:
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822da518
	ctx.lr = 0x82231CA8;
	sub_822DA518(ctx, base);
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82231ce0
	if (ctx.cr6.eq) goto loc_82231CE0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r10,468(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r4,222(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 222);
	// bl 0x8222f0a8
	ctx.lr = 0x82231CDC;
	sub_8222F0A8(ctx, base);
	// b 0x82231ce8
	goto loc_82231CE8;
loc_82231CE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821e6bc0
	ctx.lr = 0x82231CE8;
	sub_821E6BC0(ctx, base);
loc_82231CE8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,44400
	ctx.r8.u64 = ctx.r11.u64 | 44400;
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// ori r7,r9,44404
	ctx.r7.u64 = ctx.r9.u64 | 44404;
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r6,44408
	ctx.r5.u64 = ctx.r6.u64 | 44408;
	// lfsx f11,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r4,264(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lfsx f9,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,40(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lfsx f7,r3,r5
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82231C30) {
	__imp__sub_82231C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82231D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82231D44) {
	__imp__sub_82231D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82231D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82231D50;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,264(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// rlwinm r10,r11,0,11,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFC00;
	// rlwinm r10,r10,0,20,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82231d84
	if (ctx.cr6.eq) goto loc_82231D84;
	// lbz r11,290(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 290);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82231fac
	if (!ctx.cr6.eq) goto loc_82231FAC;
loc_82231D84:
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// bl 0x82332af8
	ctx.lr = 0x82231D90;
	sub_82332AF8(ctx, base);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332b10
	ctx.lr = 0x82231D9C;
	sub_82332B10(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332b28
	ctx.lr = 0x82231DA8;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x82231DAC;
	sub_822ACED0(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,278(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 278);
	// bl 0x82229da8
	ctx.lr = 0x82231DC4;
	sub_82229DA8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231c30
	ctx.lr = 0x82231DD0;
	sub_82231C30(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r8,r9,44436
	ctx.r8.u64 = ctx.r9.u64 | 44436;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfsx f31,r3,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82333c60
	ctx.lr = 0x82231DF0;
	sub_82333C60(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,704(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lfs f0,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x82231e14
	if (!ctx.cr6.eq) goto loc_82231E14;
	// lfs f0,1216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1216);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82231e18
	goto loc_82231E18;
loc_82231E14:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_82231E18:
	// fsubs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmadds f31,f12,f31,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// bne cr6,0x82231e50
	if (!ctx.cr6.eq) goto loc_82231E50;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2978
	ctx.lr = 0x82231E44;
	sub_821E2978(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82231E50:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82231e78
	if (!ctx.cr6.eq) goto loc_82231E78;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lbz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x822314d8
	ctx.lr = 0x82231E6C;
	sub_822314D8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82231E78:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82231f88
	if (!ctx.cr6.eq) goto loc_82231F88;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82231eac
	if (!ctx.cr6.eq) goto loc_82231EAC;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lbz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82231680
	ctx.lr = 0x82231EA0;
	sub_82231680(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82231EAC:
	// lwz r10,1028(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1028);
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82231f54
	if (ctx.cr6.eq) goto loc_82231F54;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// beq cr6,0x82231f08
	if (ctx.cr6.eq) goto loc_82231F08;
	// lfs f0,1036(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1036);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f13,1040(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1040);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1044(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1044);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x82231f3c
	goto loc_82231F3C;
loc_82231F08:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,1032(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1032);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lbz r8,176(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r5,r30
	ctx.r30.u64 = ctx.r5.u64 & ctx.r30.u64;
	// bl 0x8222c958
	ctx.lr = 0x82231F3C;
	sub_8222C958(ctx, base);
loc_82231F3C:
	// lwz r11,1028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1028);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82231f58
	if (ctx.cr6.eq) goto loc_82231F58;
	// stb r28,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r28.u8);
	// b 0x82231f58
	goto loc_82231F58;
loc_82231F54:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82231F58:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lhz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r11,-5928
	ctx.r7.s64 = ctx.r11.s64 + -5928;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231a78
	ctx.lr = 0x82231F7C;
	sub_82231A78(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82231F88:
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332b28
	ctx.lr = 0x82231F90;
	sub_82332B28(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,-8752
	ctx.r4.s64 = ctx.r10.s64 + -8752;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x822830e8
	ctx.lr = 0x82231FAC;
	sub_822830E8(ctx, base);
loc_82231FAC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82231D48) {
	__imp__sub_82231D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82231FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,680(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 680);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r3,680(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 680);
	// bl 0x82332af8
	ctx.lr = 0x82231FE0;
	sub_82332AF8(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r3,680(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 680);
	// bl 0x82332b10
	ctx.lr = 0x82231FF0;
	sub_82332B10(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82231c30
	ctx.lr = 0x82232000;
	sub_82231C30(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r4,680(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// bl 0x82333718
	ctx.lr = 0x8223200C;
	sub_82333718(ctx, base);
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,680(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 680);
	// bl 0x822314d8
	ctx.lr = 0x82232024;
	sub_822314D8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82231FB8) {
	__imp__sub_82231FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232038) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,11,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFC00;
	// rlwinm r9,r9,0,20,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82232078
	if (ctx.cr6.eq) goto loc_82232078;
	// lbz r11,290(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 290);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822320e8
	if (!ctx.cr6.eq) goto loc_822320E8;
loc_82232078:
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// bl 0x82332af8
	ctx.lr = 0x82232084;
	sub_82332AF8(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332b10
	ctx.lr = 0x82232090;
	sub_82332B10(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x821e6bc0
	ctx.lr = 0x822320A0;
	sub_821E6BC0(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82321048
	ctx.lr = 0x822320B4;
	sub_82321048(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-16956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16956);
	// lwz r10,-6484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6484);
	// lwz r9,-6720(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6720);
	// lfs f3,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822313a8
	ctx.lr = 0x822320E8;
	sub_822313A8(ctx, base);
loc_822320E8:
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

PPC_WEAK_FUNC(sub_82232038) {
	__imp__sub_82232038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82232120
	if (ctx.cr6.eq) goto loc_82232120;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r11,-30736
	ctx.r4.s64 = ctx.r11.s64 + -30736;
	// b 0x82333200
	sub_82333200(ctx, base);
	return;
loc_82232120:
	// b 0x82332b40
	sub_82332B40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82232100) {
	__imp__sub_82232100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82232124) {
	__imp__sub_82232124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232128) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-8720
	ctx.r3.s64 = ctx.r11.s64 + -8720;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82232150;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233cae8
	ctx.lr = 0x8223215C;
	sub_8233CAE8(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r9,45016
	ctx.r7.u64 = ctx.r9.u64 | 45016;
	// ori r6,r8,45012
	ctx.r6.u64 = ctx.r8.u64 | 45012;
	// lwz r11,9624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9624);
	// mullw r10,r31,r7
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r30,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_82232128) {
	__imp__sub_82232128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232198) {
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
	// bl 0x82333f60
	ctx.lr = 0x822321BC;
	sub_82333F60(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-8712
	ctx.r3.s64 = ctx.r11.s64 + -8712;
	// bl 0x822e84f0
	ctx.lr = 0x822321CC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233cae8
	ctx.lr = 0x822321D8;
	sub_8233CAE8(ctx, base);
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

PPC_WEAK_FUNC(sub_82232198) {
	__imp__sub_82232198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822321F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d6770
	ctx.lr = 0x82232250;
	sub_822D6770(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8223226c
	if (ctx.cr6.gt) goto loc_8223226C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822322e0
	goto loc_822322E0;
loc_8223226C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5524);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f8,f31,f13
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f9,f11
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f30,f9,f10
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bl 0x823dde60
	ctx.lr = 0x822322A4;
	sub_823DDE60(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,8336(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14060(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14060);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,14056(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14056);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fdivs f5,f31,f7
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fdivs f4,f30,f6
	ctx.f4.f64 = double(float(ctx.f30.f64 / ctx.f6.f64));
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_822322E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822321F0) {
	__imp__sub_822321F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822322FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822322FC) {
	__imp__sub_822322FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-14536
	ctx.r3.s64 = ctx.r11.s64 + -14536;
	// b 0x8222e9c0
	sub_8222E9C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82232300) {
	__imp__sub_82232300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223230C) {
	__imp__sub_8223230C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223232c
	if (ctx.cr6.eq) goto loc_8223232C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,45000
	ctx.r9.u64 = ctx.r10.u64 | 45000;
	// lhzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
loc_8223232C:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,226(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 226);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82232310) {
	__imp__sub_82232310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223233C) {
	__imp__sub_8223233C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232340) {
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
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r3,692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// bl 0x82332af8
	ctx.lr = 0x82232358;
	sub_82332AF8(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
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

PPC_WEAK_FUNC(sub_82232340) {
	__imp__sub_82232340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// blt cr6,0x82232394
	if (ctx.cr6.lt) goto loc_82232394;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82232394:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82232378) {
	__imp__sub_82232378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223239C) {
	__imp__sub_8223239C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822323A0) {
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
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822323d8
	if (ctx.cr6.eq) goto loc_822323D8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,45000
	ctx.r9.u64 = ctx.r10.u64 | 45000;
	// lhzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// b 0x822323e4
	goto loc_822323E4;
loc_822323D8:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r31,226(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 226);
loc_822323E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222efb8
	ctx.lr = 0x822323F0;
	sub_8222EFB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82232424
	if (!ctx.cr6.eq) goto loc_82232424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r31,126(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// bl 0x822a13a0
	ctx.lr = 0x82232404;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-8700
	ctx.r4.s64 = ctx.r11.s64 + -8700;
	// li r3,15
	ctx.r3.s64 = 15;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82280c30
	ctx.lr = 0x8223241C;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82232428
	goto loc_82232428;
loc_82232424:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82232428:
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

PPC_WEAK_FUNC(sub_822323A0) {
	__imp__sub_822323A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232440) {
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
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82232488
	if (!ctx.cr6.eq) goto loc_82232488;
	// bl 0x822323a0
	ctx.lr = 0x82232470;
	sub_822323A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822324a4
	if (!ctx.cr6.eq) goto loc_822324A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82232510
	goto loc_82232510;
loc_82232488:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x822da518
	ctx.lr = 0x82232498;
	sub_822DA518(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x821e6b40
	ctx.lr = 0x822324A4;
	sub_821E6B40(ctx, base);
loc_822324A4:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f1,f9,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f13,f6,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fsqrts f11,f13
	ctx.f11.f64 = double(float(sqrt(ctx.f13.f64)));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f0,f11
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fmuls f6,f7,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f2,f7,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f1,f9,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f0,f5,f6
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmadds f13,f4,f2,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f1,f3,f1,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f13.f64));
loc_82232510:
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

PPC_WEAK_FUNC(sub_82232440) {
	__imp__sub_82232440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232528) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822323a0
	ctx.lr = 0x82232544;
	sub_822323A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223256c
	if (!ctx.cr6.eq) goto loc_8223256C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82232580
	goto loc_82232580;
loc_8223256C:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82232580:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

PPC_WEAK_FUNC(sub_82232528) {
	__imp__sub_82232528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822325A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82332b28
	ctx.lr = 0x822325C8;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x822325CC;
	sub_822ACED0(ctx, base);
	// lis r8,-31961
	ctx.r8.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r7,r8,-25976
	ctx.r7.s64 = ctx.r8.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,282(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + 282);
	// bl 0x82229da8
	ctx.lr = 0x822325E4;
	sub_82229DA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333928
	ctx.lr = 0x822325F0;
	sub_82333928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82232598) {
	__imp__sub_82232598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822325F8) {
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
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223262c
	if (!ctx.cr6.eq) goto loc_8223262C;
loc_82232620:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822326f8
	goto loc_822326F8;
loc_8223262C:
	// lwz r3,692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// bl 0x82332af8
	ctx.lr = 0x82232634;
	sub_82332AF8(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82232620
	if (ctx.cr6.eq) goto loc_82232620;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// blt cr6,0x82232668
	if (ctx.cr6.lt) goto loc_82232668;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x8223266c
	if (!ctx.cr6.gt) goto loc_8223266C;
loc_82232668:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8223266C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82232620
	if (ctx.cr6.eq) goto loc_82232620;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232440
	ctx.lr = 0x82232684;
	sub_82232440(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,-8652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8652);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x822326a4
	if (!ctx.cr6.gt) goto loc_822326A4;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5964);
	// b 0x822326f4
	goto loc_822326F4;
loc_822326A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-30980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30980);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822326c0
	if (!ctx.cr6.gt) goto loc_822326C0;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-6080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6080);
	// b 0x822326f4
	goto loc_822326F4;
loc_822326C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822326dc
	if (!ctx.cr6.gt) goto loc_822326DC;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11180);
	// b 0x822326f4
	goto loc_822326F4;
loc_822326DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x822326f8
	if (!ctx.cr6.gt) goto loc_822326F8;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11264);
loc_822326F4:
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
loc_822326F8:
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

PPC_WEAK_FUNC(sub_822325F8) {
	__imp__sub_822325F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232710) {
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
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// fmuls f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,11184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11184);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82232774
	if (ctx.cr6.eq) goto loc_82232774;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-8648
	ctx.r4.s64 = ctx.r10.s64 + -8648;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f0,-14540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82280900
	ctx.lr = 0x82232774;
	sub_82280900(ctx, base);
loc_82232774:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82232784
	if (!ctx.cr6.gt) goto loc_82232784;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82232784:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222f978
	ctx.lr = 0x82232794;
	sub_8222F978(ctx, base);
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

PPC_WEAK_FUNC(sub_82232710) {
	__imp__sub_82232710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822327AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822327AC) {
	__imp__sub_822327AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822327B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822327B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x820da5b0
	ctx.lr = 0x822327D0;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82232a04
	if (!ctx.cr6.eq) goto loc_82232A04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x822327E0;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82232814
	if (ctx.cr6.eq) goto loc_82232814;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82232814
	if (ctx.cr6.eq) goto loc_82232814;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82232820
	if (!ctx.cr6.eq) goto loc_82232820;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r4,r11,-8480
	ctx.r4.s64 = ctx.r11.s64 + -8480;
	// bl 0x82280c30
	ctx.lr = 0x82232814;
	sub_82280C30(ctx, base);
loc_82232814:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82232820:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r26,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82232814
	if (ctx.cr6.eq) goto loc_82232814;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82334738
	ctx.lr = 0x82232840;
	sub_82334738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223286c
	if (!ctx.cr6.eq) goto loc_8223286C;
loc_8223284C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,-8552
	ctx.r4.s64 = ctx.r11.s64 + -8552;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280c30
	ctx.lr = 0x82232860;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8223286C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821eec90
	ctx.lr = 0x82232878;
	sub_821EEC90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82232814
	if (ctx.cr6.eq) goto loc_82232814;
	// lis r29,-31834
	ctx.r29.s64 = -2086273024;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x822328ac
	if (!ctx.cr6.eq) goto loc_822328AC;
	// lbz r11,1643(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1643);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822328b0
	if (!ctx.cr6.eq) goto loc_822328B0;
	// lwz r11,-6572(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -6572);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822328b0
	if (ctx.cr6.eq) goto loc_822328B0;
loc_822328AC:
	// stb r27,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r27.u8);
loc_822328B0:
	// stb r26,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r26.u8);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82232a04
	if (ctx.cr6.eq) goto loc_82232A04;
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82232970
	if (ctx.cr6.eq) goto loc_82232970;
	// lwz r4,680(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822328f4
	if (!ctx.cr6.eq) goto loc_822328F4;
	// stw r31,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x82232198
	ctx.lr = 0x822328E8;
	sub_82232198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822328F4:
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x82232908
	if (ctx.cr6.lt) goto loc_82232908;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// ble cr6,0x82232a04
	if (!ctx.cr6.gt) goto loc_82232A04;
loc_82232908:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332008
	ctx.lr = 0x82232910;
	sub_82332008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82232a04
	if (ctx.cr6.gt) goto loc_82232A04;
	// lwz r3,680(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// bl 0x82332af8
	ctx.lr = 0x82232920;
	sub_82332AF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82334778
	ctx.lr = 0x82232930;
	sub_82334778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82232954
	if (ctx.cr6.eq) goto loc_82232954;
	// stw r3,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r3.u32);
	// rotlwi r4,r3,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x82232198
	ctx.lr = 0x82232948;
	sub_82232198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82232954:
	// stw r31,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r31.u32);
	// rotlwi r4,r31,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x82232198
	ctx.lr = 0x82232964;
	sub_82232198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82232970:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b10
	ctx.lr = 0x82232978;
	sub_82332B10(ctx, base);
	// lwz r31,64(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82232a04
	if (ctx.cr6.eq) goto loc_82232A04;
loc_82232984:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da5b0
	ctx.lr = 0x82232990;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82232a04
	if (!ctx.cr6.eq) goto loc_82232A04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82334738
	ctx.lr = 0x822329A4;
	sub_82334738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223284c
	if (ctx.cr6.eq) goto loc_8223284C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821eec90
	ctx.lr = 0x822329BC;
	sub_821EEC90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82232814
	if (ctx.cr6.eq) goto loc_82232814;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x822329e8
	if (!ctx.cr6.eq) goto loc_822329E8;
	// lbz r11,1643(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1643);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822329ec
	if (!ctx.cr6.eq) goto loc_822329EC;
	// lwz r11,-6572(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -6572);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822329ec
	if (ctx.cr6.eq) goto loc_822329EC;
loc_822329E8:
	// stb r27,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r27.u8);
loc_822329EC:
	// stb r26,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b10
	ctx.lr = 0x822329F8;
	sub_82332B10(ctx, base);
	// lwz r31,64(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82232984
	if (!ctx.cr6.eq) goto loc_82232984;
loc_82232A04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822327B0) {
	__imp__sub_822327B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232A10) {
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
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r31,r11,-8368
	ctx.r31.s64 = ctx.r11.s64 + -8368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82280a68
	ctx.lr = 0x82232A34;
	sub_82280A68(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r4,r11,-8392
	ctx.r4.s64 = ctx.r11.s64 + -8392;
	// bl 0x82280a68
	ctx.lr = 0x82232A44;
	sub_82280A68(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lwz r11,-1412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82232aa8
	if (!ctx.cr6.eq) goto loc_82232AA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82282de0
	ctx.lr = 0x82232A5C;
	sub_82282DE0(ctx, base);
	// bl 0x82332a48
	ctx.lr = 0x82232A60;
	sub_82332A48(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82232a94
	if (ctx.cr6.eq) goto loc_82232A94;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r11,-30736
	ctx.r4.s64 = ctx.r11.s64 + -30736;
	// addi r3,r10,13500
	ctx.r3.s64 = ctx.r10.s64 + 13500;
	// bl 0x82333200
	ctx.lr = 0x82232A88;
	sub_82333200(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// stw r3,-5120(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5120, ctx.r3.u32);
	// b 0x82232aa8
	goto loc_82232AA8;
loc_82232A94:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,13500
	ctx.r3.s64 = ctx.r11.s64 + 13500;
	// bl 0x82332b40
	ctx.lr = 0x82232AA0;
	sub_82332B40(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// stw r3,-5120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5120, ctx.r3.u32);
loc_82232AA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280a68
	ctx.lr = 0x82232AB4;
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
}

PPC_WEAK_FUNC(sub_82232A10) {
	__imp__sub_82232A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232AC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82232AC8) {
	__imp__sub_82232AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82232ACC) {
	__imp__sub_82232ACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232AD0) {
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
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r11,10424
	ctx.r4.s64 = ctx.r11.s64 + 10424;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r7,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r7.u8);
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// bl 0x8222b7c8
	ctx.lr = 0x82232B14;
	sub_8222B7C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82232AD0) {
	__imp__sub_82232AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82232B24) {
	__imp__sub_82232B24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82232b44
	if (ctx.cr6.eq) goto loc_82232B44;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82232B44:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82232B28) {
	__imp__sub_82232B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82232B4C) {
	__imp__sub_82232B4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82232b6c
	if (ctx.cr6.eq) goto loc_82232B6C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82232B6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82232B50) {
	__imp__sub_82232B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82232B74) {
	__imp__sub_82232B74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,468(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// addi r11,r3,468
	ctx.r11.s64 = ctx.r3.s64 + 468;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82232ba8
	if (ctx.cr6.eq) goto loc_82232BA8;
loc_82232B88:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82232bb0
	if (ctx.cr6.eq) goto loc_82232BB0;
	// addi r11,r11,468
	ctx.r11.s64 = ctx.r11.s64 + 468;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82232b88
	if (!ctx.cr6.eq) goto loc_82232B88;
loc_82232BA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82232BB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82232B78) {
	__imp__sub_82232B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82232BC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,468(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// blt cr6,0x82232ce8
	if (ctx.cr6.lt) goto loc_82232CE8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822da650
	ctx.lr = 0x82232BE8;
	sub_822DA650(ctx, base);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8222ed00
	ctx.lr = 0x82232C0C;
	sub_8222ED00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d2e8
	ctx.lr = 0x82232C14;
	sub_8233D2E8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r31,r3,r9
	ctx.r31.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfs f4,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f11,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f2,f9,f6
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f13,f9,f5
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f7,f4,f6
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f9,f11,f6
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f10,f4,f5
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f12,f11,f5
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f6,f4,f8
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fadds f5,f3,f2
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fadds f4,f3,f1
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// fadds f3,f2,f1
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fadds f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f1,f12,f7
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f8,f13,f6
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f6,f0,f5
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f5,f0,f4
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f4,f0,f3
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x822d5c30
	ctx.lr = 0x82232CD0;
	sub_822D5C30(ctx, base);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x822d67f0
	ctx.lr = 0x82232CE0;
	sub_822D67F0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82232CE8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822da650
	ctx.lr = 0x82232CF0;
	sub_822DA650(ctx, base);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82232BB8) {
	__imp__sub_82232BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232D10) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,468(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82232bb8
	ctx.lr = 0x82232D34;
	sub_82232BB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x822d60b8
	ctx.lr = 0x82232D44;
	sub_822D60B8(ctx, base);
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

PPC_WEAK_FUNC(sub_82232D10) {
	__imp__sub_82232D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82232D5C) {
	__imp__sub_82232D5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232D60) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232bb8
	ctx.lr = 0x82232D84;
	sub_82232BB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x82232D90;
	sub_822DA650(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r30,468(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// beq cr6,0x82232dbc
	if (ctx.cr6.eq) goto loc_82232DBC;
	// bl 0x822d6378
	ctx.lr = 0x82232DA8;
	sub_822D6378(ctx, base);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d5c30
	ctx.lr = 0x82232DB8;
	sub_822D5C30(ctx, base);
	// b 0x82232de8
	goto loc_82232DE8;
loc_82232DBC:
	// bl 0x822d6588
	ctx.lr = 0x82232DC0;
	sub_822D6588(ctx, base);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822d60b8
	ctx.lr = 0x82232DE8;
	sub_822D60B8(ctx, base);
loc_82232DE8:
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

PPC_WEAK_FUNC(sub_82232D60) {
	__imp__sub_82232D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232E00) {
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
	// lwz r10,468(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82232e38
	if (!ctx.cr6.eq) goto loc_82232E38;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82232E38:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f11,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f10,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// lfs f9,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lhz r7,126(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// lfs f8,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x82232E8C;
	sub_821FE618(ctx, base);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82232E00) {
	__imp__sub_82232E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232EA8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,468(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82232bb8
	ctx.lr = 0x82232ECC;
	sub_82232BB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x822d60b8
	ctx.lr = 0x82232EDC;
	sub_822D60B8(ctx, base);
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

PPC_WEAK_FUNC(sub_82232EA8) {
	__imp__sub_82232EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82232EF4) {
	__imp__sub_82232EF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82232F00;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r30,468(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82232bb8
	ctx.lr = 0x82232F20;
	sub_82232BB8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x822d60b8
	ctx.lr = 0x82232F30;
	sub_822D60B8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232e00
	ctx.lr = 0x82232F40;
	sub_82232E00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82232f64
	if (ctx.cr6.eq) goto loc_82232F64;
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
loc_82232F64:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82232f7c
	if (ctx.cr6.eq) goto loc_82232F7C;
	// bl 0x822d4ed0
	ctx.lr = 0x82232F74;
	sub_822D4ED0(ctx, base);
	// stfs f1,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// b 0x82232f84
	goto loc_82232F84;
loc_82232F7C:
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// bl 0x822d7c78
	ctx.lr = 0x82232F84;
	sub_822D7C78(ctx, base);
loc_82232F84:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82232fa8
	if (ctx.cr6.eq) goto loc_82232FA8;
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_82232FA8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82232EF8) {
	__imp__sub_82232EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-8344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8344);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5812(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5812);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82232FB0) {
	__imp__sub_82232FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82232FD4) {
	__imp__sub_82232FD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82232FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f11,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82232FD8) {
	__imp__sub_82232FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bgt cr6,0x8223302c
	if (ctx.cr6.gt) goto loc_8223302C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8223302C:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,5488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// fmsubs f12,f4,f13,f2
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 - ctx.f2.f64));
	// lfs f11,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsubs f7,f12,f3
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmsubs f0,f8,f0,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f1.f64));
	// fdivs f9,f13,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x82233084
	if (!ctx.cr6.lt) goto loc_82233084;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x822330b4
	goto loc_822330B4;
loc_82233084:
	// fsubs f13,f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8223309c
	if (!ctx.cr6.lt) goto loc_8223309C;
	// fsubs f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x822330b0
	goto loc_822330B0;
loc_8223309C:
	// fsubs f0,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fsubs f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// fsel f0,f8,f10,f3
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f3.f64;
loc_822330B0:
	// fmr f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f2.f64;
loc_822330B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f2,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// lfs f10,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x822330d8
	if (ctx.cr6.eq) goto loc_822330D8;
	// fdivs f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f2.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f8,f6,f10
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// b 0x822330dc
	goto loc_822330DC;
loc_822330D8:
	// fmr f8,f11
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f11.f64;
loc_822330DC:
	// fmuls f12,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// beq cr6,0x82233108
	if (ctx.cr6.eq) goto loc_82233108;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f5,f6,f10,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// b 0x8223310c
	goto loc_8223310C;
loc_82233108:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_8223310C:
	// fadds f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f0,f12
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsel f1,f9,f11,f8
	ctx.f1.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f8.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82233010) {
	__imp__sub_82233010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233130) {
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
	// lfs f4,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82233010
	ctx.lr = 0x82233150;
	sub_82233010(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f11,f12,f1,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f8,f1,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f1,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfs f3,32(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f2,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fmadds f12,f13,f1,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82233130) {
	__imp__sub_82233130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822331B0) {
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
	// addis r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r6,-21064
	ctx.r6.s64 = ctx.r6.s64 + -21064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f4,56(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,52(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,60(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82233010
	ctx.lr = 0x822331EC;
	sub_82233010(ctx, base);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lfs f13,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// ori r3,r5,44504
	ctx.r3.u64 = ctx.r5.u64 | 44504;
	// ori r11,r4,44480
	ctx.r11.u64 = ctx.r4.u64 | 44480;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f11,f12,f1,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f8,f1,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f7,12(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f6,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f1,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfs f3,32(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lfs f2,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fmadds f12,f13,f1,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f12,36(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 36, temp.u32);
	// lfsx f11,r31,r3
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,304(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f6,296(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// fsubs f1,f6,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// bl 0x822d77c0
	ctx.lr = 0x8223327C;
	sub_822D77C0(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// stfs f1,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// ori r7,r9,44508
	ctx.r7.u64 = ctx.r9.u64 | 44508;
	// ori r6,r8,44484
	ctx.r6.u64 = ctx.r8.u64 | 44484;
	// lfsx f5,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r31,r6
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f2,308(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f5
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// fsubs f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// bl 0x822d77c0
	ctx.lr = 0x822332B8;
	sub_822D77C0(ctx, base);
	// stfs f1,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

PPC_WEAK_FUNC(sub_822331B0) {
	__imp__sub_822331B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822332D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44640
	ctx.r10.u64 = ctx.r11.u64 | 44640;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x82233304
	if (!ctx.cr6.eq) goto loc_82233304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,404(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// stfs f0,408(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// stfs f0,412(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// blr 
	return;
loc_82233304:
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,176(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,404(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// lfs f13,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,408(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// lfs f12,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,412(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822332D8) {
	__imp__sub_822332D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223333C) {
	__imp__sub_8223333C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233340) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-5928
	ctx.r11.s64 = ctx.r11.s64 + -5928;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822333e0
	if (!ctx.cr6.eq) goto loc_822333E0;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822333e0
	if (!ctx.cr6.eq) goto loc_822333E0;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822333e0
	if (!ctx.cr6.eq) goto loc_822333E0;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// b 0x82233404
	goto loc_82233404;
loc_822333E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822da650
	ctx.lr = 0x822333E8;
	sub_822DA650(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6378
	ctx.lr = 0x822333F4;
	sub_822D6378(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d5c30
	ctx.lr = 0x82233404;
	sub_822D5C30(ctx, base);
loc_82233404:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_82233340) {
	__imp__sub_82233340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223341C) {
	__imp__sub_8223341C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,44467
	ctx.r9.u64 = ctx.r11.u64 | 44467;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82233484
	if (ctx.cr6.eq) goto loc_82233484;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82232bb8
	ctx.lr = 0x82233454;
	sub_82232BB8(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,404
	ctx.r3.s64 = ctx.r11.s64 + 404;
	// bl 0x82233340
	ctx.lr = 0x82233468;
	sub_82233340(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,368
	ctx.r4.s64 = ctx.r11.s64 + 368;
	// bl 0x822d7c78
	ctx.lr = 0x82233478;
	sub_822D7C78(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r4,r3,368
	ctx.r4.s64 = ctx.r3.s64 + 368;
	// b 0x822334a8
	goto loc_822334A8;
loc_82233484:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f0,368(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// stfs f0,372(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 372, temp.u32);
	// addi r4,r11,244
	ctx.r4.s64 = ctx.r11.s64 + 244;
	// stfs f0,376(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 376, temp.u32);
loc_822334A8:
	// bl 0x822331b0
	ctx.lr = 0x822334AC;
	sub_822331B0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82233420) {
	__imp__sub_82233420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822334C0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r30,468(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232bb8
	ctx.lr = 0x822334E4;
	sub_82232BB8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x822d60b8
	ctx.lr = 0x822334F4;
	sub_822D60B8(ctx, base);
	// li r5,2065
	ctx.r5.s64 = 2065;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232e00
	ctx.lr = 0x82233504;
	sub_82232E00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82233524
	if (ctx.cr6.eq) goto loc_82233524;
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
loc_82233524:
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822d7c78
	ctx.lr = 0x82233534;
	sub_822D7C78(ctx, base);
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x82233540;
	sub_8222FB90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x8223354C;
	sub_8222FBE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x82340d30
	ctx.lr = 0x82233560;
	sub_82340D30(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

PPC_WEAK_FUNC(sub_822334C0) {
	__imp__sub_822334C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82233580;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de028
	ctx.lr = 0x82233588;
	__savefpr_28(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r31,264(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// bl 0x822d7c78
	ctx.lr = 0x822335A8;
	sub_822D7C78(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822331b0
	ctx.lr = 0x822335B4;
	sub_822331B0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d9618
	ctx.lr = 0x822335C0;
	sub_822D9618(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82233690
	if (ctx.cr6.eq) goto loc_82233690;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r27,376
	ctx.r3.s64 = ctx.r27.s64 + 376;
	// bl 0x822d97a8
	ctx.lr = 0x822335E4;
	sub_822D97A8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822d6a38
	ctx.lr = 0x822335F0;
	sub_822D6A38(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822d7c78
	ctx.lr = 0x822335FC;
	sub_822D7C78(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// stfs f12,376(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// addi r30,r31,260
	ctx.r30.s64 = ctx.r31.s64 + 260;
	// lfs f29,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// li r29,2
	ctx.r29.s64 = 2;
	// lfs f31,2420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
loc_8223363C:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,4(r28)
	ea = 4 + ctx.r28.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r28.u32 = ea;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f28,f12,f31
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82233654;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,-164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fsubs f8,f28,f11
	ctx.f8.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fmuls f7,f8,f29
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fadds f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f6,-164(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + -164, temp.u32);
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfsu f5,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// bne 0x8223363c
	if (!ctx.cr0.eq) goto loc_8223363C;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x8223368C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82233690:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-21072
	ctx.r11.s64 = ctx.r11.s64 + -21072;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82233708
	if (ctx.cr6.eq) goto loc_82233708;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r30,r30,-21088
	ctx.r30.s64 = ctx.r30.s64 + -21088;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d8f88
	ctx.lr = 0x822336BC;
	sub_820D8F88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d6a08
	ctx.lr = 0x822336C8;
	sub_822D6A08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r8,r9,44468
	ctx.r8.u64 = ctx.r9.u64 | 44468;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfsx f1,r31,r8
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d97a8
	ctx.lr = 0x82233704;
	sub_822D97A8(ctx, base);
	// b 0x82233740
	goto loc_82233740;
loc_82233708:
	// li r10,1
	ctx.r10.s64 = 1;
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r4,-21088
	ctx.r4.s64 = ctx.r4.s64 + -21088;
	// bl 0x822d6a08
	ctx.lr = 0x82233720;
	sub_822D6A08(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_82233740:
	// addi r30,r31,264
	ctx.r30.s64 = ctx.r31.s64 + 264;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822da650
	ctx.lr = 0x82233750;
	sub_822DA650(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822d9618
	ctx.lr = 0x8223375C;
	sub_822D9618(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820d8f88
	ctx.lr = 0x8223376C;
	sub_820D8F88(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822d6a38
	ctx.lr = 0x82233778;
	sub_822D6A38(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822d7c78
	ctx.lr = 0x82233784;
	sub_822D7C78(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// lfs f30,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// li r29,2
	ctx.r29.s64 = 2;
	// lfs f29,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,2420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
loc_822337AC:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,4(r28)
	ea = 4 + ctx.r28.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r28.u32 = ea;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f28,f12,f31
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x822337C4;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,-164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fsubs f8,f28,f11
	ctx.f8.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fmuls f7,f8,f29
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fadds f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f6,-164(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + -164, temp.u32);
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfsu f5,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// bne 0x822337ac
	if (!ctx.cr0.eq) goto loc_822337AC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// ori r9,r11,44467
	ctx.r9.u64 = ctx.r11.u64 | 44467;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82233830
	if (ctx.cr6.eq) goto loc_82233830;
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,376(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x8223382C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82233830:
	// addi r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 + 368;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822da650
	ctx.lr = 0x82233840;
	sub_822DA650(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822d9618
	ctx.lr = 0x8223384C;
	sub_822D9618(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820d8f88
	ctx.lr = 0x8223385C;
	sub_820D8F88(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d6a38
	ctx.lr = 0x82233868;
	sub_822D6A38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822d7c78
	ctx.lr = 0x82233874;
	sub_822D7C78(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x82233880;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82233578) {
	__imp__sub_82233578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82233884) {
	__imp__sub_82233884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233888) {
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
	// bl 0x823de028
	ctx.lr = 0x822338A0;
	__savefpr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r30,264(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lfs f13,404(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lfs f12,364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f12.f64 = double(temp.f32);
	// ori r7,r8,44465
	ctx.r7.u64 = ctx.r8.u64 | 44465;
	// lfs f11,352(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,368(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	ctx.f10.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f9,356(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,372(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	ctx.f8.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lfs f7,360(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	ctx.f7.f64 = double(temp.f32);
	// lbzx r5,r30,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// addi r6,r11,50
	ctx.r6.s64 = ctx.r11.s64 + 50;
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmsubs f3,f4,f0,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fmadds f30,f12,f3,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f29,f10,f3,f9
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f28,f8,f3,f7
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f7.f64));
	// beq cr6,0x82233980
	if (ctx.cr6.eq) goto loc_82233980;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x822d67f0
	ctx.lr = 0x82233940;
	sub_822D67F0(ctx, base);
	// lfs f13,280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fsubs f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f7,f0,f28
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fmadds f6,f9,f31,f30
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f30.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f5,f8,f31,f29
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f29.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f4,f7,f31,f28
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f28.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82233abc
	goto loc_82233ABC;
loc_82233980:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// ori r10,r11,44466
	ctx.r10.u64 = ctx.r11.u64 | 44466;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82233a94
	if (ctx.cr6.eq) goto loc_82233A94;
	// li r9,6
	ctx.r9.s64 = 6;
	// lfs f12,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// lfs f10,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 + 176;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822339D8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822339d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822339D8;
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// lhz r8,126(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lis r7,-32206
	ctx.r7.s64 = -2110652416;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// lfs f12,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// rlwinm r4,r9,0,18,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// addi r10,r7,10424
	ctx.r10.s64 = ctx.r7.s64 + 10424;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r5,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r11,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r11.u8);
	// stb r11,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r11.u8);
	// fsel f9,f10,f0,f13
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsel f7,f8,f9,f11
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x8222b7c8
	ctx.lr = 0x82233A60;
	sub_8222B7C8(ctx, base);
	// lfs f6,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f30
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f30.f64));
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f29
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f29.f64));
	// fsubs f1,f3,f28
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// fmadds f0,f4,f31,f30
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f13,f2,f31,f29
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f29.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f12,f1,f31,f28
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f28.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82233abc
	goto loc_82233ABC;
loc_82233A94:
	// lfs f11,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fsubs f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// fsubs f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f28.f64));
	// fmadds f8,f12,f31,f30
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f30.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f7,f10,f31,f29
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f29.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f6,f9,f31,f28
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f28.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82233ABC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x82233AC8;
	sub_8222FB90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de074
	ctx.lr = 0x82233ADC;
	__restfpr_28(ctx, base);
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

PPC_WEAK_FUNC(sub_82233888) {
	__imp__sub_82233888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82233AF8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,264(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,468(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82233b38
	if (ctx.cr6.eq) goto loc_82233B38;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82232bb8
	ctx.lr = 0x82233B24;
	sub_82232BB8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x822d60b8
	ctx.lr = 0x82233B34;
	sub_822D60B8(ctx, base);
	// b 0x82233b40
	goto loc_82233B40;
loc_82233B38:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82232bb8
	ctx.lr = 0x82233B40;
	sub_82232BB8(ctx, base);
loc_82233B40:
	// lbz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233b68
	if (ctx.cr6.eq) goto loc_82233B68;
	// lfs f4,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,396(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82233010
	ctx.lr = 0x82233B60;
	sub_82233010(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x82233b70
	goto loc_82233B70;
loc_82233B68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_82233B70:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,404
	ctx.r3.s64 = ctx.r30.s64 + 404;
	// bl 0x82233340
	ctx.lr = 0x82233B80;
	sub_82233340(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82233578
	ctx.lr = 0x82233B90;
	sub_82233578(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82233bb8
	if (!ctx.cr6.eq) goto loc_82233BB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82233888
	ctx.lr = 0x82233BB0;
	sub_82233888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x82233BB8;
	sub_82340D30(ctx, base);
loc_82233BB8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82233AF0) {
	__imp__sub_82233AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82233BC4) {
	__imp__sub_82233BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82233BD0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,476(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r27,468(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82233cf0
	if (ctx.cr6.eq) goto loc_82233CF0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x82232bb8
	ctx.lr = 0x82233BF4;
	sub_82232BB8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r27,68
	ctx.r3.s64 = ctx.r27.s64 + 68;
	// bl 0x822d60b8
	ctx.lr = 0x82233C04;
	sub_822D60B8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d6378
	ctx.lr = 0x82233C10;
	sub_822D6378(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d60b8
	ctx.lr = 0x82233C20;
	sub_822D60B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d7a78
	ctx.lr = 0x82233C2C;
	sub_822D7A78(ctx, base);
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// lfs f12,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f7,f13,f10,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f13,236(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f12,228(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmadds f6,f12,f9,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f7.f64));
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f5,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmadds f1,f13,f5,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f11,f12,f4,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmadds f6,f13,f10,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f5,f12,f9,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f5,56(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x82233CC4;
	sub_822DA650(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822d5c30
	ctx.lr = 0x82233CD4;
	sub_822D5C30(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d5c30
	ctx.lr = 0x82233CE4;
	sub_822D5C30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822d7d90
	ctx.lr = 0x82233CF0;
	sub_822D7D90(ctx, base);
loc_82233CF0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82233d10
	if (ctx.cr6.lt) goto loc_82233D10;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// ble cr6,0x82233d14
	if (!ctx.cr6.gt) goto loc_82233D14;
loc_82233D10:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82233D14:
	// addi r4,r30,232
	ctx.r4.s64 = ctx.r30.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222fb90
	ctx.lr = 0x82233D20;
	sub_8222FB90(ctx, base);
	// addi r31,r30,244
	ctx.r31.s64 = ctx.r30.s64 + 244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x82233D30;
	sub_8222FBE8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233d44
	if (ctx.cr6.eq) goto loc_82233D44;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82233D44:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233d7c
	if (ctx.cr6.eq) goto loc_82233D7C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821e6960
	ctx.lr = 0x82233D78;
	sub_821E6960(ctx, base);
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82233D7C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82233db0
	if (ctx.cr6.eq) goto loc_82233DB0;
loc_82233D8C:
	// lwz r9,468(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// addi r10,r11,468
	ctx.r10.s64 = ctx.r11.s64 + 468;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82233d8c
	if (!ctx.cr6.eq) goto loc_82233D8C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82233db8
	goto loc_82233DB8;
loc_82233DB0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 472, ctx.r11.u32);
loc_82233DB8:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r26,468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 468, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233e38
	if (ctx.cr6.eq) goto loc_82233E38;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82233e00
	if (ctx.cr6.eq) goto loc_82233E00;
	// addi r4,r11,380
	ctx.r4.s64 = ctx.r11.s64 + 380;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6960
	ctx.lr = 0x82233DE4;
	sub_821E6960(ctx, base);
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r8,r9,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r7,264(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r10,392(r7)
	PPC_STORE_U32(ctx.r7.u32 + 392, ctx.r10.u32);
loc_82233E00:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,31,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82233e34
	if (ctx.cr6.eq) goto loc_82233E34;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82233e38
	if (!ctx.cr6.eq) goto loc_82233E38;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82233e38
	goto loc_82233E38;
loc_82233E34:
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82233E38:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x822a24e0
	ctx.lr = 0x82233E44;
	sub_822A24E0(ctx, base);
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8229e118
	ctx.lr = 0x82233E50;
	sub_8229E118(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82233BC8) {
	__imp__sub_82233BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82233E5C) {
	__imp__sub_82233E5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82233E68;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233e88
	if (ctx.cr6.eq) goto loc_82233E88;
	// bl 0x82233bc8
	ctx.lr = 0x82233E88;
	sub_82233BC8(ctx, base);
loc_82233E88:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82233ec4
	if (ctx.cr6.eq) goto loc_82233EC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233d878
	ctx.lr = 0x82233E98;
	sub_8233D878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82233eb8
	if (ctx.cr6.eq) goto loc_82233EB8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233d278
	ctx.lr = 0x82233EAC;
	sub_8233D278(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82233ec8
	if (!ctx.cr6.lt) goto loc_82233EC8;
loc_82233EB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82233EC4:
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82233EC8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82233eec
	if (ctx.cr6.eq) goto loc_82233EEC;
loc_82233ED4:
	// lwz r11,468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233ef8
	if (ctx.cr6.eq) goto loc_82233EF8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82233ed4
	if (!ctx.cr6.eq) goto loc_82233ED4;
loc_82233EEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82233EF8:
	// li r4,18
	ctx.r4.s64 = 18;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8229e0e8
	ctx.lr = 0x82233F04;
	sub_8229E0E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// sth r28,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r28.u16);
	// stb r28,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r28.u8);
	// bl 0x822a24e0
	ctx.lr = 0x82233F24;
	sub_822A24E0(ctx, base);
	// lwz r11,472(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x823de090
	ctx.lr = 0x82233F40;
	sub_823DE090(ctx, base);
	// stw r30,472(r29)
	PPC_STORE_U32(ctx.r29.u32 + 472, ctx.r30.u32);
	// stw r31,468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 468, ctx.r31.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// lwz r10,476(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82233f74
	if (ctx.cr6.eq) goto loc_82233F74;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82232bb8
	ctx.lr = 0x82233F64;
	sub_82232BB8(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6588
	ctx.lr = 0x82233F70;
	sub_822D6588(ctx, base);
	// b 0x82233f84
	goto loc_82233F84;
loc_82233F74:
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x823de090
	ctx.lr = 0x82233F84;
	sub_823DE090(ctx, base);
loc_82233F84:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233fe0
	if (ctx.cr6.eq) goto loc_82233FE0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82233fe0
	if (!ctx.cr6.eq) goto loc_82233FE0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82233fd8
	if (ctx.cr6.eq) goto loc_82233FD8;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82233fe0
	if (!ctx.cr6.eq) goto loc_82233FE0;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82233FD8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82233FE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82233E60) {
	__imp__sub_82233E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82233FEC) {
	__imp__sub_82233FEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82233FF0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82233e60
	ctx.lr = 0x8223400C;
	sub_82233E60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82234068
	if (ctx.cr6.eq) goto loc_82234068;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232bb8
	ctx.lr = 0x82234020;
	sub_82232BB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x8223402C;
	sub_822DA650(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r30,468(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// bl 0x822d6588
	ctx.lr = 0x8223403C;
	sub_822D6588(ctx, base);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822d60b8
	ctx.lr = 0x82234064;
	sub_822D60B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82234068:
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

PPC_WEAK_FUNC(sub_82233FF0) {
	__imp__sub_82233FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82234088;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82233e60
	ctx.lr = 0x8223409C;
	sub_82233E60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822340ac
	if (!ctx.cr6.eq) goto loc_822340AC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822340AC:
	// lwz r31,468(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// bl 0x822da650
	ctx.lr = 0x822340BC;
	sub_822DA650(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82234080) {
	__imp__sub_82234080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822340E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82233bc8
	sub_82233BC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822340E0) {
	__imp__sub_822340E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822340F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822340F0) {
	__imp__sub_822340F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822340F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822340F4) {
	__imp__sub_822340F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822340F8) {
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
	// lwz r31,468(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223417c
	if (ctx.cr6.eq) goto loc_8223417C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82234150
	if (ctx.cr6.eq) goto loc_82234150;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8233d278
	ctx.lr = 0x82234134;
	sub_8233D278(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82234150
	if (ctx.cr6.lt) goto loc_82234150;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82234190
	if (ctx.cr6.eq) goto loc_82234190;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// b 0x82234190
	goto loc_82234190;
loc_82234150:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82234164
	if (ctx.cr6.eq) goto loc_82234164;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82234164:
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82234190
	if (ctx.cr6.eq) goto loc_82234190;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82233bc8
	ctx.lr = 0x82234178;
	sub_82233BC8(ctx, base);
	// b 0x82234190
	goto loc_82234190;
loc_8223417C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82234190
	if (ctx.cr6.eq) goto loc_82234190;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82234190:
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

PPC_WEAK_FUNC(sub_822340F8) {
	__imp__sub_822340F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822341A8) {
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
	// lwz r3,472(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822341e8
	if (ctx.cr6.eq) goto loc_822341E8;
loc_822341CC:
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822340f8
	ctx.lr = 0x822341DC;
	sub_822340F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822341cc
	if (!ctx.cr6.eq) goto loc_822341CC;
loc_822341E8:
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

PPC_WEAK_FUNC(sub_822341A8) {
	__imp__sub_822341A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82234208;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8233d878
	ctx.lr = 0x8223421C;
	sub_8233D878(ctx, base);
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82234268
	if (ctx.cr6.eq) goto loc_82234268;
loc_8223422C:
	// lwz r3,472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 472, ctx.r10.u32);
	// lwz r9,468(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// lwz r8,468(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// lwz r7,472(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r3,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r3.u32);
	// bl 0x822340f8
	ctx.lr = 0x8223425C;
	sub_822340F8(ctx, base);
	// lwz r6,472(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8223422c
	if (!ctx.cr6.eq) goto loc_8223422C;
loc_82234268:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82234200) {
	__imp__sub_82234200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234270) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,13564
	ctx.r9.s64 = ctx.r10.s64 + 13564;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x822e8620
	ctx.lr = 0x822342A4;
	sub_822E8620(ctx, base);
	// lis r7,-32052
	ctx.r7.s64 = -2100559872;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,-32191
	ctx.r5.s64 = -2109669376;
	// addi r4,r7,-18804
	ctx.r4.s64 = ctx.r7.s64 + -18804;
	// addi r10,r5,13600
	ctx.r10.s64 = ctx.r5.s64 + 13600;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,136
	ctx.r8.s64 = 136;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r6,-7144
	ctx.r4.s64 = ctx.r6.s64 + -7144;
	// subf r5,r11,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r11.s64;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// divw r5,r5,r8
	ctx.r5.s32 = ctx.r5.s32 / ctx.r8.s32;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x82280b08
	ctx.lr = 0x822342E8;
	sub_82280B08(ctx, base);
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

PPC_WEAK_FUNC(sub_82234270) {
	__imp__sub_82234270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234300) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// b 0x82234270
	sub_82234270(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82234300) {
	__imp__sub_82234300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82234314) {
	__imp__sub_82234314(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,13888
	ctx.r11.s64 = ctx.r11.s64 + 13888;
loc_82234324:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82234348
	if (ctx.cr6.eq) goto loc_82234348;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,72
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 72, ctx.xer);
	// blt cr6,0x82234324
	if (ctx.cr6.lt) goto loc_82234324;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82234348:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82234318) {
	__imp__sub_82234318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82234358;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 104);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82234394
	if (!ctx.cr6.lt) goto loc_82234394;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-7108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6028);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82234394:
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lfs f1,16(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d77c0
	ctx.lr = 0x822343B0;
	sub_822D77C0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r7,280(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lfs f1,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d77c0
	ctx.lr = 0x822343C0;
	sub_822D77C0(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82234350) {
	__imp__sub_82234350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822343CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822343CC) {
	__imp__sub_822343CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822343D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 104);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822343e8
	if (!ctx.cr6.lt) goto loc_822343E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822343E8:
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r9,r11,624
	ctx.r9.s64 = ctx.r11.s64 * 624;
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// addi r8,r11,280
	ctx.r8.s64 = ctx.r11.s64 + 280;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822343D0) {
	__imp__sub_822343D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234408) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,13680
	ctx.r9.s64 = ctx.r11.s64 + 13680;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-7104
	ctx.r3.s64 = ctx.r8.s64 + -7104;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822e84f0
	ctx.lr = 0x82234430;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82234434;
	sub_822AD350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82234408) {
	__imp__sub_82234408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82234444) {
	__imp__sub_82234444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82234450;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822b1fb0
	ctx.lr = 0x82234468;
	sub_822B1FB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r30,r11,13680
	ctx.r30.s64 = ctx.r11.s64 + 13680;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822344d4
	if (!ctx.cr6.lt) goto loc_822344D4;
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822344ac
	if (ctx.cr6.eq) goto loc_822344AC;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7004
	ctx.r3.s64 = ctx.r10.s64 + -7004;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822344A8;
	sub_822E84F0(ctx, base);
	// b 0x822344d0
	goto loc_822344D0;
loc_822344AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822a13a0
	ctx.lr = 0x822344B4;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,-7068
	ctx.r9.s64 = ctx.r11.s64 + -7068;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x822e84f0
	ctx.lr = 0x822344D0;
	sub_822E84F0(ctx, base);
loc_822344D0:
	// bl 0x822ad350
	ctx.lr = 0x822344D4;
	sub_822AD350(ctx, base);
loc_822344D4:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfsx f31,r9,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82234448) {
	__imp__sub_82234448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822344F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r10,13600
	ctx.r9.s64 = ctx.r10.s64 + 13600;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x822aced0
	sub_822ACED0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822344F0) {
	__imp__sub_822344F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234508) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,13680
	ctx.r9.s64 = ctx.r11.s64 + 13680;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-7104
	ctx.r3.s64 = ctx.r8.s64 + -7104;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822e84f0
	ctx.lr = 0x82234530;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82234534;
	sub_822AD350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82234508) {
	__imp__sub_82234508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82234544) {
	__imp__sub_82234544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// addi r11,r11,13680
	ctx.r11.s64 = ctx.r11.s64 + 13680;
	// addi r7,r9,-18804
	ctx.r7.s64 = ctx.r9.s64 + -18804;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r8,r3,136
	ctx.r8.s64 = ctx.r3.s64 * 136;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82234580
	if (ctx.cr6.eq) goto loc_82234580;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82234580:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8222ac08
	sub_8222AC08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82234548) {
	__imp__sub_82234548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223458C) {
	__imp__sub_8223458C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82234598;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-18804
	ctx.r29.s64 = ctx.r11.s64 + -18804;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822345dc
	if (ctx.cr6.eq) goto loc_822345DC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822345BC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822345D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,136
	ctx.r30.s64 = ctx.r30.s64 + 136;
	// bne 0x822345bc
	if (!ctx.cr0.eq) goto loc_822345BC;
loc_822345DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82234590) {
	__imp__sub_82234590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822345E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822345E4) {
	__imp__sub_822345E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822345E8) {
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
	// addi r30,r11,13680
	ctx.r30.s64 = ctx.r11.s64 + 13680;
	// lwz r4,13680(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13680);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82234634
	if (ctx.cr6.eq) goto loc_82234634;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82234614:
	// srawi r11,r31,4
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 4;
	// li r3,2
	ctx.r3.s64 = 2;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822a8a78
	ctx.lr = 0x82234624;
	sub_822A8A78(ctx, base);
	// lwzu r4,16(r30)
	ea = 16 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82234614
	if (!ctx.cr6.eq) goto loc_82234614;
loc_82234634:
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

PPC_WEAK_FUNC(sub_822345E8) {
	__imp__sub_822345E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223464C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223464C) {
	__imp__sub_8223464C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234650) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x822346f0
	if (!ctx.cr6.eq) goto loc_822346F0;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lhz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// mulli r10,r8,136
	ctx.r10.s64 = ctx.r8.s64 * 136;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822ad190
	ctx.lr = 0x82234690;
	sub_822AD190(ctx, base);
	// lhz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// rlwinm r6,r7,0,22,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200;
	// addi r31,r11,-25976
	ctx.r31.s64 = ctx.r11.s64 + -25976;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822346b4
	if (ctx.cr6.eq) goto loc_822346B4;
	// lhz r3,550(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 550);
	// bl 0x822acff0
	ctx.lr = 0x822346B0;
	sub_822ACFF0(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x822346B4;
	sub_822AD208(ctx, base);
loc_822346B4:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822346d0
	if (ctx.cr6.eq) goto loc_822346D0;
	// lhz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 112);
	// bl 0x822acff0
	ctx.lr = 0x822346CC;
	sub_822ACFF0(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x822346D0;
	sub_822AD208(ctx, base);
loc_822346D0:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822346fc
	if (ctx.cr6.eq) goto loc_822346FC;
	// lhz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 140);
	// bl 0x822acff0
	ctx.lr = 0x822346E8;
	sub_822ACFF0(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x822346EC;
	sub_822AD208(ctx, base);
	// b 0x822346fc
	goto loc_822346FC;
loc_822346F0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6956
	ctx.r3.s64 = ctx.r11.s64 + -6956;
	// bl 0x822ad350
	ctx.lr = 0x822346FC;
	sub_822AD350(ctx, base);
loc_822346FC:
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

PPC_WEAK_FUNC(sub_82234650) {
	__imp__sub_82234650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82234714) {
	__imp__sub_82234714(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234718) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x822347f0
	if (!ctx.cr6.eq) goto loc_822347F0;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// mulli r10,r8,136
	ctx.r10.s64 = ctx.r8.s64 * 136;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822b20b8
	ctx.lr = 0x82234758;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r7,176(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 176);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82234790
	if (!ctx.cr6.eq) goto loc_82234790;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// bl 0x822acb78
	ctx.lr = 0x8223477C;
	sub_822ACB78(ctx, base);
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
loc_82234790:
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822347c0
	if (!ctx.cr6.eq) goto loc_822347C0;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// bl 0x822acb78
	ctx.lr = 0x822347AC;
	sub_822ACB78(ctx, base);
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
loc_822347C0:
	// lhz r11,138(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 138);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822347fc
	if (!ctx.cr6.eq) goto loc_822347FC;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// bl 0x822acb78
	ctx.lr = 0x822347DC;
	sub_822ACB78(ctx, base);
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
loc_822347F0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6908
	ctx.r3.s64 = ctx.r11.s64 + -6908;
	// bl 0x822ad350
	ctx.lr = 0x822347FC;
	sub_822AD350(ctx, base);
loc_822347FC:
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

PPC_WEAK_FUNC(sub_82234718) {
	__imp__sub_82234718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234810) {
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
	// bl 0x822b2678
	ctx.lr = 0x82234828;
	sub_822B2678(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82234864
	if (!ctx.cr6.eq) goto loc_82234864;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// mulli r10,r8,136
	ctx.r10.s64 = ctx.r8.s64 * 136;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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
loc_82234864:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6864
	ctx.r4.s64 = ctx.r11.s64 + -6864;
	// bl 0x822ad4e0
	ctx.lr = 0x82234874;
	sub_822AD4E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82234810) {
	__imp__sub_82234810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223488C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223488C) {
	__imp__sub_8223488C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234890) {
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
	// bl 0x821b65a0
	ctx.lr = 0x822348A8;
	sub_821B65A0(ctx, base);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,18560
	ctx.r30.s64 = ctx.r11.s64 + 18560;
	// lwz r11,16388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822348dc
	if (ctx.cr6.eq) goto loc_822348DC;
loc_822348C0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a88e0
	ctx.lr = 0x822348CC;
	sub_822A88E0(ctx, base);
	// lwz r11,16388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16388);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822348c0
	if (ctx.cr6.lt) goto loc_822348C0;
loc_822348DC:
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

PPC_WEAK_FUNC(sub_82234890) {
	__imp__sub_82234890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822348F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822348F4) {
	__imp__sub_822348F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822348F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 100);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 100);
	// bne cr6,0x82234920
	if (!ctx.cr6.eq) goto loc_82234920;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82234930
	if (ctx.cr6.eq) goto loc_82234930;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82234920:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82234930
	if (!ctx.cr6.eq) goto loc_82234930;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82234930:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82234948
	if (ctx.cr6.lt) goto loc_82234948;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82234948:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822348F8) {
	__imp__sub_822348F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,136
	ctx.r10.s64 = 136;
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82234950) {
	__imp__sub_82234950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223496C) {
	__imp__sub_8223496C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r3,136
	ctx.r10.s64 = ctx.r3.s64 * 136;
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82234970) {
	__imp__sub_82234970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r10,r11,18560
	ctx.r10.s64 = ctx.r11.s64 + 18560;
	// lwz r3,16388(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16388);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82234988) {
	__imp__sub_82234988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234998) {
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
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r5,16512
	ctx.r5.s64 = 16512;
	// addi r31,r11,18560
	ctx.r31.s64 = ctx.r11.s64 + 18560;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x822349C0;
	sub_823DE090(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,17028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17028, ctx.r11.u32);
	// bl 0x821b6588
	ctx.lr = 0x822349CC;
	sub_821B6588(ctx, base);
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

PPC_WEAK_FUNC(sub_82234998) {
	__imp__sub_82234998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822349E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r10,r11,18560
	ctx.r10.s64 = ctx.r11.s64 + 18560;
	// lwz r11,16388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16388);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822349E0) {
	__imp__sub_822349E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822349F8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r10,18560
	ctx.r31.s64 = ctx.r10.s64 + 18560;
	// blt cr6,0x82234a78
	if (ctx.cr6.lt) goto loc_82234A78;
	// lfs f13,16416(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16416);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82234A2C:
	// addi r10,r31,16392
	ctx.r10.s64 = ctx.r31.s64 + 16392;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82234a64
	if (ctx.cr6.gt) goto loc_82234A64;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82234a58
	if (!ctx.cr6.lt) goto loc_82234A58;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82234a68
	goto loc_82234A68;
loc_82234A58:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x822349f8
	ctx.lr = 0x82234A60;
	sub_822349F8(ctx, base);
	// lfs f13,16416(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16416);
	ctx.f13.f64 = double(temp.f32);
loc_82234A64:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_82234A68:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bge cr6,0x82234a2c
	if (!ctx.cr6.lt) goto loc_82234A2C;
loc_82234A78:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82234bc0
	if (!ctx.cr6.gt) goto loc_82234BC0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r8,16440(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16440);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r7,16428(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r6,r11,-18804
	ctx.r6.s64 = ctx.r11.s64 + -18804;
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
loc_82234AA8:
	// lhz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lfs f0,16392(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16392);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lfs f12,16396(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16396);
	ctx.f12.f64 = double(temp.f32);
	// rotlwi r10,r3,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 4);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lfs f11,16420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16420);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r10,r3,136
	ctx.r10.s64 = ctx.r3.s64 * 136;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fmuls f6,f9,f9
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f0,f7,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82234bac
	if (ctx.cr6.gt) goto loc_82234BAC;
	// lwz r9,16412(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16412);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82234b2c
	if (ctx.cr6.eq) goto loc_82234B2C;
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16404);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16408(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16408);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f5,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmadds f3,f5,f6,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// blt cr6,0x82234bac
	if (ctx.cr6.lt) goto loc_82234BAC;
loc_82234B2C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// and r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82234bac
	if (ctx.cr6.eq) goto loc_82234BAC;
	// rlwinm r9,r9,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82234b54
	if (ctx.cr6.eq) goto loc_82234B54;
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82234bac
	if (ctx.cr6.eq) goto loc_82234BAC;
loc_82234B54:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16400);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,16424(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16424);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x82234bac
	if (ctx.cr6.gt) goto loc_82234BAC;
	// lwz r11,16436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16436);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82234bc0
	if (ctx.cr6.eq) goto loc_82234BC0;
	// lwz r11,16432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16432);
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r10,16432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16432);
	// lwz r11,16440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16440);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r11,16440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16440);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r7,16428(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// stw r8,16440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16440, ctx.r8.u32);
loc_82234BAC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82234aa8
	if (ctx.cr6.lt) goto loc_82234AA8;
loc_82234BC0:
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

PPC_WEAK_FUNC(sub_822349F8) {
	__imp__sub_822349F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234BD8) {
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
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r10,-18804
	ctx.r6.s64 = ctx.r10.s64 + -18804;
	// lwz r3,40(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82234c14
	if (!ctx.cr6.eq) goto loc_82234C14;
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
loc_82234C14:
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r10,18560
	ctx.r31.s64 = ctx.r10.s64 + 18560;
	// stfs f0,16392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16392, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16396, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16400, temp.u32);
	// beq cr6,0x82234c50
	if (ctx.cr6.eq) goto loc_82234C50;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,16404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16404, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82234c60
	goto loc_82234C60;
loc_82234C50:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16404, temp.u32);
loc_82234C60:
	// stw r11,16412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16412, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,16408(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16408, temp.u32);
	// fmuls f0,f1,f1
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmuls f13,f2,f2
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// stfs f1,16416(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16416, temp.u32);
	// stfs f0,16420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16420, temp.u32);
	// stw r11,16440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16440, ctx.r11.u32);
	// stfs f13,16424(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16424, temp.u32);
	// stw r9,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r9.u32);
	// stw r7,16432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16432, ctx.r7.u32);
	// stw r8,16436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16436, ctx.r8.u32);
	// bl 0x822349f8
	ctx.lr = 0x82234C94;
	sub_822349F8(ctx, base);
	// lwz r3,16440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16440);
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

PPC_WEAK_FUNC(sub_82234BD8) {
	__imp__sub_82234BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82234CAC) {
	__imp__sub_82234CAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234CB0) {
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
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-18804
	ctx.r9.s64 = ctx.r10.s64 + -18804;
	// lwz r3,40(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82234cec
	if (!ctx.cr6.eq) goto loc_82234CEC;
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
loc_82234CEC:
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f12,f1,f1
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// addi r31,r10,18560
	ctx.r31.s64 = ctx.r10.s64 + 18560;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,16392(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16392, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16396(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16396, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,16440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16440, ctx.r9.u32);
	// lfs f11,-6848(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -6848);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,16412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16412, ctx.r10.u32);
	// stfs f13,16400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16400, temp.u32);
	// stw r7,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r7.u32);
	// stfs f0,16404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16404, temp.u32);
	// stw r5,16432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16432, ctx.r5.u32);
	// stfs f0,16408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16408, temp.u32);
	// stw r6,16436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16436, ctx.r6.u32);
	// stfs f1,16416(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16416, temp.u32);
	// stfs f12,16420(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16420, temp.u32);
	// stfs f11,16424(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16424, temp.u32);
	// bl 0x822349f8
	ctx.lr = 0x82234D54;
	sub_822349F8(ctx, base);
	// lwz r3,16440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16440);
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

PPC_WEAK_FUNC(sub_82234CB0) {
	__imp__sub_82234CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82234D6C) {
	__imp__sub_82234D6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234D70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm r3,r11,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82234D70) {
	__imp__sub_82234D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82234D7C) {
	__imp__sub_82234D7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r9,r3,136
	ctx.r9.s64 = ctx.r3.s64 * 136;
	// addi r10,r11,-18804
	ctx.r10.s64 = ctx.r11.s64 + -18804;
	// addi r7,r5,-1
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 56);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82234dcc
	if (ctx.cr6.eq) goto loc_82234DCC;
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
loc_82234DB0:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82234dd4
	if (ctx.cr6.eq) goto loc_82234DD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82234db0
	if (ctx.cr6.lt) goto loc_82234DB0;
loc_82234DCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82234DD4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r9,9(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82234D80) {
	__imp__sub_82234D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234DF8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82234DF8) {
	__imp__sub_82234DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82234E10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-18804
	ctx.r29.s64 = ctx.r11.s64 + -18804;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82234eb8
	if (ctx.cr6.eq) goto loc_82234EB8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82234E34:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r10,100(r11)
	PPC_STORE_U16(ctx.r11.u32 + 100, ctx.r10.u16);
	// beq cr6,0x82234e8c
	if (ctx.cr6.eq) goto loc_82234E8C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82234E54:
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stb r31,9(r8)
	PPC_STORE_U8(ctx.r8.u32 + 9, ctx.r31.u8);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stb r31,10(r7)
	PPC_STORE_U8(ctx.r7.u32 + 10, ctx.r31.u8);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stb r31,11(r6)
	PPC_STORE_U8(ctx.r6.u32 + 11, ctx.r31.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lhz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82234e54
	if (ctx.cr6.lt) goto loc_82234E54;
loc_82234E8C:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lhz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r6,r10,19960
	ctx.r6.s64 = ctx.r10.s64 + 19960;
	// bl 0x823def18
	ctx.lr = 0x82234EA4;
	sub_823DEF18(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,136
	ctx.r30.s64 = ctx.r30.s64 + 136;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82234e34
	if (ctx.cr6.lt) goto loc_82234E34;
loc_82234EB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82234E08) {
	__imp__sub_82234E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r11,18560
	ctx.r8.s64 = ctx.r11.s64 + 18560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,16384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16384, ctx.r10.u32);
loc_82234ED4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82234ee4
	if (!ctx.cr6.eq) goto loc_82234EE4;
	// li r10,2047
	ctx.r10.s64 = 2047;
loc_82234EE4:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// sthx r10,r9,r7
	PPC_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u16);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82234f00
	if (!ctx.cr6.eq) goto loc_82234F00;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82234F00:
	// addi r7,r8,6
	ctx.r7.s64 = ctx.r8.s64 + 6;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// sthx r10,r9,r7
	PPC_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u16);
	// blt cr6,0x82234ed4
	if (ctx.cr6.lt) goto loc_82234ED4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82234EC0) {
	__imp__sub_82234EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234F18) {
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
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x823de090
	ctx.lr = 0x82234F3C;
	sub_823DE090(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82234F4C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82234f4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82234F4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822d52c8
	ctx.lr = 0x82234F64;
	sub_822D52C8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// sth r11,104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 104, ctx.r11.u16);
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

PPC_WEAK_FUNC(sub_82234F18) {
	__imp__sub_82234F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82234F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82234F98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-18804
	ctx.r29.s64 = ctx.r11.s64 + -18804;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82235024
	if (ctx.cr6.eq) goto loc_82235024;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82234FBC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x823de090
	ctx.lr = 0x82234FD4;
	sub_823DE090(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82234FE4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82234fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82234FE4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822d52c8
	ctx.lr = 0x82234FFC;
	sub_822D52C8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r30,136
	ctx.r30.s64 = ctx.r30.s64 + 136;
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// sth r27,104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 104, ctx.r27.u16);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82234fbc
	if (ctx.cr6.lt) goto loc_82234FBC;
loc_82235024:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82234F90) {
	__imp__sub_82234F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223502C) {
	__imp__sub_8223502C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235030) {
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
	// bl 0x82234f90
	ctx.lr = 0x82235040;
	sub_82234F90(ctx, base);
	// bl 0x82234e08
	ctx.lr = 0x82235044;
	sub_82234E08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82235030) {
	__imp__sub_82235030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82235054) {
	__imp__sub_82235054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235058) {
	PPC_FUNC_PROLOGUE();
	// b 0x82234ec0
	sub_82234EC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82235058) {
	__imp__sub_82235058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223505C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223505C) {
	__imp__sub_8223505C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235060) {
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
	// bl 0x823de024
	ctx.lr = 0x82235078;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f28,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f31,-6844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6844);
	ctx.f31.f64 = double(temp.f32);
	// fadds f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f30,7540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7540);
	ctx.f30.f64 = double(temp.f32);
	// fadds f12,f29,f31
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// fadds f11,f28,f30
	ctx.f11.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f10,f29,f31
	ctx.f10.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f9,f28,f30
	ctx.f9.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// stfs f27,104(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f2d18
	ctx.lr = 0x822350EC;
	sub_821F2D18(ctx, base);
	// fsubs f8,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fadds f7,f28,f31
	ctx.f7.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f6,f29,f30
	ctx.f6.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f5,f28,f31
	ctx.f5.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// stfs f27,104(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f2d18
	ctx.lr = 0x8223512C;
	sub_821F2D18(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de070
	ctx.lr = 0x82235138;
	__restfpr_27(ctx, base);
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

PPC_WEAK_FUNC(sub_82235060) {
	__imp__sub_82235060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223514C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223514C) {
	__imp__sub_8223514C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82235158;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r9,-18804
	ctx.r8.s64 = ctx.r9.s64 + -18804;
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lhz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mulli r11,r29,136
	ctx.r11.s64 = ctx.r29.s64 * 136;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,6056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x822351e0
	if (ctx.cr6.eq) goto loc_822351E0;
	// lhz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// b 0x822351e8
	goto loc_822351E8;
loc_822351E0:
	// lhz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 100);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
loc_822351E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82235220
	if (!ctx.cr6.gt) goto loc_82235220;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
loc_822351FC:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mulli r9,r9,136
	ctx.r9.s64 = ctx.r9.s64 * 136;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82235250
	if (ctx.cr6.eq) goto loc_82235250;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822351fc
	if (ctx.cr6.lt) goto loc_822351FC;
loc_82235220:
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
loc_82235228:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r31,r10,-2280
	ctx.r31.s64 = ctx.r10.s64 + -2280;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82235454
	if (!ctx.cr6.eq) goto loc_82235454;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bge 0x82235228
	if (!ctx.cr0.lt) goto loc_82235228;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x8223546c
	goto loc_8223546C;
loc_82235250:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82235558
	if (!ctx.cr6.gt) goto loc_82235558;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
loc_82235264:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82235280
	if (!ctx.cr6.eq) goto loc_82235280;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bge 0x82235264
	if (!ctx.cr0.lt) goto loc_82235264;
	// b 0x82235284
	goto loc_82235284;
loc_82235280:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82235284:
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,2
	ctx.r11.s64 = 2;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
loc_8223529C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822352b8
	if (!ctx.cr6.eq) goto loc_822352B8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bge 0x8223529c
	if (!ctx.cr0.lt) goto loc_8223529C;
	// b 0x822352bc
	goto loc_822352BC;
loc_822352B8:
	// ori r30,r30,2
	ctx.r30.u64 = ctx.r30.u64 | 2;
loc_822352BC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82235330
	if (!ctx.cr6.eq) goto loc_82235330;
	// lbz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822352dc
	if (ctx.cr6.eq) goto loc_822352DC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-2264
	ctx.r31.s64 = ctx.r11.s64 + -2264;
	// b 0x822352e4
	goto loc_822352E4;
loc_822352DC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-2136
	ctx.r31.s64 = ctx.r11.s64 + -2136;
loc_822352E4:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
loc_822352EC:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82235310
	if (ctx.cr6.eq) goto loc_82235310;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x822352ec
	if (ctx.cr6.lt) goto loc_822352EC;
	// b 0x8223534c
	goto loc_8223534C;
loc_82235310:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82235324
	if (ctx.cr6.eq) goto loc_82235324;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-1992
	ctx.r31.s64 = ctx.r11.s64 + -1992;
	// b 0x8223534c
	goto loc_8223534C;
loc_82235324:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-2152
	ctx.r31.s64 = ctx.r11.s64 + -2152;
	// b 0x8223534c
	goto loc_8223534C;
loc_82235330:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82235344
	if (!ctx.cr6.eq) goto loc_82235344;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-2200
	ctx.r31.s64 = ctx.r11.s64 + -2200;
	// b 0x8223534c
	goto loc_8223534C;
loc_82235344:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-2232
	ctx.r31.s64 = ctx.r11.s64 + -2232;
loc_8223534C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f2d08
	ctx.lr = 0x82235360;
	sub_821F2D08(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82235370
	if (ctx.cr6.eq) goto loc_82235370;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82235558
	if (!ctx.cr6.eq) goto loc_82235558;
loc_82235370:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fadds f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fadds f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fadds f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// fmuls f1,f7,f7
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f5,f5,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fmadds f12,f3,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fneg f6,f11
	ctx.f6.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f4,f6,f13,f11
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// fdivs f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// fmuls f12,f2,f3
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f11,f7,f2
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f13,f5,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// bne cr6,0x82235404
	if (!ctx.cr6.eq) goto loc_82235404;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_82235404:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,-6840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6840);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f12,f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f11,f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x8223544C;
	sub_821F2D08(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82235548
	goto loc_82235548;
loc_82235454:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82235464
	if (!ctx.cr6.lt) goto loc_82235464;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x8223546c
	goto loc_8223546C;
loc_82235464:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-2152
	ctx.r5.s64 = ctx.r11.s64 + -2152;
loc_8223546C:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f2d08
	ctx.lr = 0x8223547C;
	sub_821F2D08(ctx, base);
	// lfs f11,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fadds f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fsubs f4,f9,f8
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fadds f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fadds f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f7,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmuls f8,f5,f5
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// lfs f12,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f0,-6840(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -6840);
	ctx.f0.f64 = double(temp.f32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f7,f4,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f8.f64));
	// fmadds f6,f2,f2,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f7.f64));
	// fsqrts f3,f6
	ctx.f3.f64 = double(float(sqrt(ctx.f6.f64)));
	// fneg f1,f3
	ctx.f1.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f13,f1,f12,f3
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f12.f64 : ctx.f3.f64;
	// fdivs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f8,f4,f12
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f6,f5,f12
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f7,f12,f2
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmadds f13,f8,f0,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f6,f0,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f12,f7,f0,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x82235544;
	sub_821F2D08(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
loc_82235548:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821f2d08
	ctx.lr = 0x82235558;
	sub_821F2D08(ctx, base);
loc_82235558:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82235150) {
	__imp__sub_82235150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235560) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,292
	ctx.r4.s64 = 292;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lhz r5,130(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 130);
	// bl 0x8222f160
	ctx.lr = 0x822355A0;
	sub_8222F160(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822355f8
	if (ctx.cr6.eq) goto loc_822355F8;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f5,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,-6836(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6836);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fadds f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fmadds f2,f8,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f1,f3,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fsqrts f13,f1
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x822355fc
	goto loc_822355FC;
loc_822355F8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_822355FC:
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

PPC_WEAK_FUNC(sub_82235560) {
	__imp__sub_82235560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82235620;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lfs f1,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r11,-7464
	ctx.r29.s64 = ctx.r11.s64 + -7464;
	// lfs f13,-6840(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -6840);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,6056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6056);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x821f2d40
	ctx.lr = 0x82235690;
	sub_821F2D40(ctx, base);
	// lhz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r5,r6,0,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82235738
	if (ctx.cr6.eq) goto loc_82235738;
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x822356E8;
	sub_823DE720(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x822356F4;
	sub_823DE800(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f0,f30,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f2.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f11,f0,f3,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f1.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x82235738;
	sub_821F2D08(ctx, base);
loc_82235738:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82235618) {
	__imp__sub_82235618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82235750;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x82235758;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,7036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x822357d0
	if (ctx.cr6.eq) goto loc_822357D0;
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// mulli r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 * 112;
	// addi r11,r9,5560
	ctx.r11.s64 = ctx.r9.s64 + 5560;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r8,-6748
	ctx.r3.s64 = ctx.r8.s64 + -6748;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// lwz r7,-112(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -112);
	// lhz r4,126(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + 126);
	// bl 0x822e84f0
	ctx.lr = 0x822357B8;
	sub_822E84F0(ctx, base);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r5,-2264
	ctx.r4.s64 = ctx.r5.s64 + -2264;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821fe7d8
	ctx.lr = 0x822357D0;
	sub_821FE7D8(ctx, base);
loc_822357D0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lbz r4,106(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 106);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r27,r11,-2200
	ctx.r27.s64 = ctx.r11.s64 + -2200;
	// lfs f0,13904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f31,f0
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fadds f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x82235828
	if (ctx.cr6.eq) goto loc_82235828;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6760
	ctx.r3.s64 = ctx.r11.s64 + -6760;
	// bl 0x822e84f0
	ctx.lr = 0x82235808;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821fe7d8
	ctx.lr = 0x8223581C;
	sub_821FE7D8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82235828:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-6780
	ctx.r29.s64 = ctx.r11.s64 + -6780;
	// lfs f29,5804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f29.f64 = double(temp.f32);
	// addi r28,r26,72
	ctx.r28.s64 = ctx.r26.s64 + 72;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
loc_8223584C:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822358b8
	if (!ctx.cr6.lt) goto loc_822358B8;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f28,f12,f29
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// bl 0x82240058
	ctx.lr = 0x8223587C;
	sub_82240058(ctx, base);
	// stfd f28,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f28.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82235894;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821fe7d8
	ctx.lr = 0x822358A8;
	sub_821FE7D8(ctx, base);
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f11.f64));
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_822358B8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x8223584c
	if (ctx.cr6.lt) goto loc_8223584C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r26,84
	ctx.r29.s64 = ctx.r26.s64 + 84;
	// addi r28,r10,-6800
	ctx.r28.s64 = ctx.r10.s64 + -6800;
loc_822358D8:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82235944
	if (!ctx.cr6.lt) goto loc_82235944;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f28,f12,f29
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// bl 0x82240058
	ctx.lr = 0x82235908;
	sub_82240058(ctx, base);
	// stfd f28,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f28.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82235920;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821fe7d8
	ctx.lr = 0x82235934;
	sub_821FE7D8(ctx, base);
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f11.f64));
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82235944:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x822358d8
	if (ctx.cr6.lt) goto loc_822358D8;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lwz r10,68(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822359c0
	if (ctx.cr6.eq) goto loc_822359C0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822359c0
	if (!ctx.cr6.lt) goto loc_822359C0;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// addi r3,r10,-6816
	ctx.r3.s64 = ctx.r10.s64 + -6816;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x822359A0;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821fe7d8
	ctx.lr = 0x822359B4;
	sub_821FE7D8(ctx, base);
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f11.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_822359C0:
	// lbz r11,107(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 107);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822359e8
	if (ctx.cr6.eq) goto loc_822359E8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-6832
	ctx.r6.s64 = ctx.r11.s64 + -6832;
	// addi r4,r10,-2280
	ctx.r4.s64 = ctx.r10.s64 + -2280;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821fe7d8
	ctx.lr = 0x822359E8;
	sub_821FE7D8(ctx, base);
loc_822359E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x822359F4;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82235748) {
	__imp__sub_82235748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822359F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r9,-7464
	ctx.r11.s64 = ctx.r9.s64 + -7464;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822359F8) {
	__imp__sub_822359F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235A10) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82235618
	ctx.lr = 0x82235A38;
	sub_82235618(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,-6840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6840);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82235560
	ctx.lr = 0x82235A6C;
	sub_82235560(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,-6056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6056);
	// lfs f0,8336(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82235c04
	if (ctx.cr6.gt) goto loc_82235C04;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82235b10
	if (ctx.cr6.eq) goto loc_82235B10;
	// bdz 0x82235aa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82235AA8;
	// bdz 0x82235b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82235B50;
	// bdz 0x82235b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82235B9C;
	// b 0x82235bf8
	goto loc_82235BF8;
loc_82235AA8:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,13600
	ctx.r8.s64 = ctx.r10.s64 + 13600;
	// beq cr6,0x82235af4
	if (ctx.cr6.eq) goto loc_82235AF4;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r3,r9,-6696
	ctx.r3.s64 = ctx.r9.s64 + -6696;
	// bl 0x822e84f0
	ctx.lr = 0x82235AD8;
	sub_822E84F0(ctx, base);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r5,-2200
	ctx.r4.s64 = ctx.r5.s64 + -2200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7d8
	ctx.lr = 0x82235AF0;
	sub_821FE7D8(ctx, base);
	// b 0x82235c04
	goto loc_82235C04;
loc_82235AF4:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r9,-2200
	ctx.r4.s64 = ctx.r9.s64 + -2200;
	// bl 0x821fe7d8
	ctx.lr = 0x82235B0C;
	sub_821FE7D8(ctx, base);
	// b 0x82235c04
	goto loc_82235C04;
loc_82235B10:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,136
	ctx.r10.s64 = 136;
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,20464
	ctx.r3.s64 = ctx.r8.s64 + 20464;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r7,r11,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r11.s64;
	// divw r4,r7,r10
	ctx.r4.s32 = ctx.r7.s32 / ctx.r10.s32;
	// bl 0x822e84f0
	ctx.lr = 0x82235B34;
	sub_822E84F0(ctx, base);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r5,-2200
	ctx.r4.s64 = ctx.r5.s64 + -2200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7d8
	ctx.lr = 0x82235B4C;
	sub_821FE7D8(ctx, base);
	// b 0x82235c04
	goto loc_82235C04;
loc_82235B50:
	// lfs f3,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,-6716
	ctx.r3.s64 = ctx.r11.s64 + -6716;
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x82235B80;
	sub_822E84F0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-2200
	ctx.r4.s64 = ctx.r10.s64 + -2200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7d8
	ctx.lr = 0x82235B98;
	sub_821FE7D8(ctx, base);
	// b 0x82235c04
	goto loc_82235C04;
loc_82235B9C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r10,-2200
	ctx.r4.s64 = ctx.r10.s64 + -2200;
	// beq cr6,0x82235bcc
	if (ctx.cr6.eq) goto loc_82235BCC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,-6720
	ctx.r6.s64 = ctx.r11.s64 + -6720;
	// bl 0x821fe7d8
	ctx.lr = 0x82235BC8;
	sub_821FE7D8(ctx, base);
	// b 0x82235c04
	goto loc_82235C04;
loc_82235BCC:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82235be8
	if (ctx.cr6.eq) goto loc_82235BE8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,-6732
	ctx.r6.s64 = ctx.r11.s64 + -6732;
	// bl 0x821fe7d8
	ctx.lr = 0x82235BE4;
	sub_821FE7D8(ctx, base);
	// b 0x82235c04
	goto loc_82235C04;
loc_82235BE8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,-6736
	ctx.r6.s64 = ctx.r11.s64 + -6736;
	// bl 0x821fe7d8
	ctx.lr = 0x82235BF4;
	sub_821FE7D8(ctx, base);
	// b 0x82235c04
	goto loc_82235C04;
loc_82235BF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82235748
	ctx.lr = 0x82235C04;
	sub_82235748(ctx, base);
loc_82235C04:
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

PPC_WEAK_FUNC(sub_82235A10) {
	__imp__sub_82235A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82235C28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r27,r11,18560
	ctx.r27.s64 = ctx.r11.s64 + 18560;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,16388(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82235c90
	if (ctx.cr6.eq) goto loc_82235C90;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r9,9624
	ctx.r29.s64 = ctx.r9.s64 + 9624;
	// addi r28,r11,-18804
	ctx.r28.s64 = ctx.r11.s64 + -18804;
loc_82235C5C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,2888(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2888);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r8,108(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82235c80
	if (!ctx.cr6.eq) goto loc_82235C80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82235a10
	ctx.lr = 0x82235C7C;
	sub_82235A10(ctx, base);
	// lwz r10,16388(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16388);
loc_82235C80:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,136
	ctx.r31.s64 = ctx.r31.s64 + 136;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82235c5c
	if (ctx.cr6.lt) goto loc_82235C5C;
loc_82235C90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82235C20) {
	__imp__sub_82235C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82235CA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-7464
	ctx.r30.s64 = ctx.r11.s64 + -7464;
	// addi r28,r10,9624
	ctx.r28.s64 = ctx.r10.s64 + 9624;
loc_82235CBC:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,106(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 106);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82235d14
	if (ctx.cr6.eq) goto loc_82235D14;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82235d14
	if (ctx.cr6.eq) goto loc_82235D14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223fb10
	ctx.lr = 0x82235CE8;
	sub_8223FB10(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821f2d08
	ctx.lr = 0x82235D08;
	sub_821F2D08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82235a10
	ctx.lr = 0x82235D14;
	sub_82235A10(ctx, base);
loc_82235D14:
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// cmpwi cr6,r29,5600
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5600, ctx.xer);
	// blt cr6,0x82235cbc
	if (ctx.cr6.lt) goto loc_82235CBC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82235C98) {
	__imp__sub_82235C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82235D30;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r25,r9,33024
	ctx.r25.u64 = ctx.r9.u64 | 33024;
	// lis r26,-32032
	ctx.r26.s64 = -2099249152;
	// addi r29,r10,-7464
	ctx.r29.s64 = ctx.r10.s64 + -7464;
	// addi r28,r11,9624
	ctx.r28.s64 = ctx.r11.s64 + 9624;
loc_82235D58:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r10,5039(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5039);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82235dcc
	if (ctx.cr6.eq) goto loc_82235DCC;
	// lwz r10,-5908(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5908);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82235d8c
	if (ctx.cr6.lt) goto loc_82235D8C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,126(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 126);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82235dcc
	if (!ctx.cr6.eq) goto loc_82235DCC;
loc_82235D8C:
	// lwz r31,804(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82235dcc
	if (ctx.cr6.eq) goto loc_82235DCC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8223fb10
	ctx.lr = 0x82235DA4;
	sub_8223FB10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x821f2d08
	ctx.lr = 0x82235DC0;
	sub_821F2D08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82235a10
	ctx.lr = 0x82235DCC;
	sub_82235A10(ctx, base);
loc_82235DCC:
	// addi r30,r30,5128
	ctx.r30.s64 = ctx.r30.s64 + 5128;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82235d58
	if (ctx.cr6.lt) goto loc_82235D58;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82235D28) {
	__imp__sub_82235D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,18560
	ctx.r9.s64 = ctx.r10.s64 + 18560;
	// lwz r9,16388(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16388);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82235e1c
	if (ctx.cr6.eq) goto loc_82235E1C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r8,r10,-18804
	ctx.r8.s64 = ctx.r10.s64 + -18804;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
loc_82235E04:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82235e1c
	if (ctx.cr6.eq) goto loc_82235E1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 + 136;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82235e04
	if (ctx.cr6.lt) goto loc_82235E04;
loc_82235E1C:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82235DE0) {
	__imp__sub_82235DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82235E2C) {
	__imp__sub_82235E2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f5,f7,f8,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82235E30) {
	__imp__sub_82235E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82235E74) {
	__imp__sub_82235E74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r9,r11,0,24,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82235e98
	if (!ctx.cr6.eq) goto loc_82235E98;
	// lfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82235E98:
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82235eb8
	if (ctx.cr6.eq) goto loc_82235EB8;
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
loc_82235EB8:
	// fsubs f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82235E78) {
	__imp__sub_82235E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,136
	ctx.r10.s64 = 136;
	// addi r8,r11,-18804
	ctx.r8.s64 = ctx.r11.s64 + -18804;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r7,r11,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r11.s64;
	// divw r11,r9,r10
	ctx.r11.s32 = ctx.r9.s32 / ctx.r10.s32;
	// divw r10,r7,r10
	ctx.r10.s32 = ctx.r7.s32 / ctx.r10.s32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82235f00
	if (!ctx.cr6.lt) goto loc_82235F00;
	// lis r9,-32018
	ctx.r9.s64 = -2098331648;
	// addi r7,r9,18560
	ctx.r7.s64 = ctx.r9.s64 + 18560;
	// lwz r9,16388(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16388);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82235f18
	goto loc_82235F18;
loc_82235F00:
	// ble cr6,0x82235f4c
	if (!ctx.cr6.gt) goto loc_82235F4C;
	// lis r9,-32018
	ctx.r9.s64 = -2098331648;
	// addi r7,r9,18560
	ctx.r7.s64 = ctx.r9.s64 + 18560;
	// lwz r9,16388(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16388);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82235F18:
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82235f44
	if (ctx.cr6.eq) goto loc_82235F44;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// slw r7,r3,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82235F44:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82235F4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82235EC0) {
	__imp__sub_82235EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82235F54) {
	__imp__sub_82235F54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82235F58) {
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
	// bl 0x82235ec0
	ctx.lr = 0x82235F70;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82235f90
	if (!ctx.cr6.eq) goto loc_82235F90;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82235F90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r8,r9,0,13,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFFC;
	// rlwinm r8,r8,0,24,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFC00FF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82236000
	if (ctx.cr6.eq) goto loc_82236000;
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
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
	ctx.lr = 0x82235FD4;
	sub_822D4AC8(ctx, base);
	// lfs f8,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f5,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f5,f4,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x82236004
	if (ctx.cr6.gt) goto loc_82236004;
loc_82236000:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82236004:
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

PPC_WEAK_FUNC(sub_82235F58) {
	__imp__sub_82235F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,18560
	ctx.r9.s64 = ctx.r11.s64 + 18560;
	// lwz r9,16388(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16388);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82236068
	if (ctx.cr6.eq) goto loc_82236068;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r8,r11,-18804
	ctx.r8.s64 = ctx.r11.s64 + -18804;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82236044:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// slw r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// and r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 & ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82236070
	if (!ctx.cr6.eq) goto loc_82236070;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82236044
	if (ctx.cr6.lt) goto loc_82236044;
loc_82236068:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82236070:
	// mulli r11,r10,136
	ctx.r11.s64 = ctx.r10.s64 * 136;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82236018) {
	__imp__sub_82236018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223607C) {
	__imp__sub_8223607C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r10,18560
	ctx.r6.s64 = ctx.r10.s64 + 18560;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r5,r8,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r8.s64;
	// lwz r9,16388(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16388);
	// divw r11,r5,r7
	ctx.r11.s32 = ctx.r5.s32 / ctx.r7.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822360e0
	if (!ctx.cr6.lt) goto loc_822360E0;
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r7,1
	ctx.r7.s64 = 1;
loc_822360BC:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r5,r7,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822360e8
	if (!ctx.cr6.eq) goto loc_822360E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 + 136;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822360bc
	if (ctx.cr6.lt) goto loc_822360BC;
loc_822360E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822360E8:
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82236080) {
	__imp__sub_82236080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822360F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822360F4) {
	__imp__sub_822360F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822360F8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223611c
	if (ctx.cr6.eq) goto loc_8223611C;
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// mulli r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 * 112;
	// addi r11,r9,5560
	ctx.r11.s64 = ctx.r9.s64 + 5560;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// blr 
	return;
loc_8223611C:
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82236188
	if (ctx.cr6.lt) goto loc_82236188;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// addi r9,r10,-18804
	ctx.r9.s64 = ctx.r10.s64 + -18804;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236164
	if (ctx.cr6.eq) goto loc_82236164;
loc_8223614C:
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// addi r10,r10,5560
	ctx.r10.s64 = ctx.r10.s64 + 5560;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// blr 
	return;
loc_82236164:
	// lhz r11,54(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 54);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82236188
	if (ctx.cr6.lt) goto loc_82236188;
	// mulli r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 * 136;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223614c
	if (!ctx.cr6.eq) goto loc_8223614C;
loc_82236188:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822360F8) {
	__imp__sub_822360F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82236198;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822360f8
	ctx.lr = 0x822361B0;
	sub_822360F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822361d0
	if (!ctx.cr6.eq) goto loc_822361D0;
loc_822361BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822361D0:
	// lhz r11,102(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 102);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x82236260
	if (ctx.cr6.gt) goto loc_82236260;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82236260
	if (ctx.cr6.eq) goto loc_82236260;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822361bc
	if (ctx.cr6.eq) goto loc_822361BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82236260
	if (!ctx.cr6.eq) goto loc_82236260;
	// bl 0x821aa310
	ctx.lr = 0x8223620C;
	sub_821AA310(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822361bc
	if (!ctx.cr6.eq) goto loc_822361BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x822d4918
	ctx.lr = 0x8223622C;
	sub_822D4918(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f30,24828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24828);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x82236260
	if (ctx.cr6.lt) goto loc_82236260;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x822d4918
	ctx.lr = 0x82236250;
	sub_822D4918(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82236264
	if (ctx.cr6.lt) goto loc_82236264;
loc_82236260:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82236264:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82236190) {
	__imp__sub_82236190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82236274) {
	__imp__sub_82236274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82236280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822360f8
	ctx.lr = 0x82236290;
	sub_822360F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822362a8
	if (!ctx.cr6.eq) goto loc_822362A8;
loc_8223629C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822362A8:
	// lhz r11,102(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 102);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x82236338
	if (ctx.cr6.gt) goto loc_82236338;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82236338
	if (ctx.cr6.eq) goto loc_82236338;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8223629c
	if (ctx.cr6.eq) goto loc_8223629C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82236338
	if (ctx.cr6.eq) goto loc_82236338;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82236338
	if (!ctx.cr6.eq) goto loc_82236338;
	// bl 0x821ad288
	ctx.lr = 0x822362F0;
	sub_821AD288(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82236338
	if (!ctx.cr6.eq) goto loc_82236338;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aad88
	ctx.lr = 0x8223630C;
	sub_821AAD88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236338
	if (ctx.cr6.eq) goto loc_82236338;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aad88
	ctx.lr = 0x82236328;
	sub_821AAD88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223633c
	if (ctx.cr6.eq) goto loc_8223633C;
loc_82236338:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223633C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82236278) {
	__imp__sub_82236278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82236344) {
	__imp__sub_82236344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236348) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r11.u32);
	// b 0x822401e8
	sub_822401E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82236348) {
	__imp__sub_82236348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223635C) {
	__imp__sub_8223635C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236360) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x821e2ec8
	ctx.lr = 0x82236380;
	sub_821E2EC8(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lhz r11,102(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 102);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,102(r31)
	PPC_STORE_U16(ctx.r31.u32 + 102, ctx.r8.u16);
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

PPC_WEAK_FUNC(sub_82236360) {
	__imp__sub_82236360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822363AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822363AC) {
	__imp__sub_822363AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822363B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822363B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x821e2ec8
	ctx.lr = 0x822363CC;
	sub_821E2EC8(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r29,r26,52
	ctx.r29.s64 = ctx.r26.s64 + 52;
	// stw r28,68(r26)
	PPC_STORE_U32(ctx.r26.u32 + 68, ctx.r28.u32);
	// addi r27,r11,-18804
	ctx.r27.s64 = ctx.r11.s64 + -18804;
loc_822363E8:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82236430
	if (ctx.cr6.lt) goto loc_82236430;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x821e2ec8
	ctx.lr = 0x82236410;
	sub_821E2EC8(ctx, base);
	// lhz r11,102(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 102);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// sth r10,102(r31)
	PPC_STORE_U16(ctx.r31.u32 + 102, ctx.r10.u16);
	// blt cr6,0x822363e8
	if (ctx.cr6.lt) goto loc_822363E8;
loc_82236430:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,92(r25)
	PPC_STORE_U32(ctx.r25.u32 + 92, ctx.r26.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,108(r25)
	PPC_STORE_U32(ctx.r25.u32 + 108, ctx.r11.u32);
	// bl 0x822401e8
	ctx.lr = 0x82236444;
	sub_822401E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822363B0) {
	__imp__sub_822363B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223644C) {
	__imp__sub_8223644C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236450) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// mulli r9,r10,112
	ctx.r9.s64 = ctx.r10.s64 * 112;
	// addi r11,r11,5560
	ctx.r11.s64 = ctx.r11.s64 + 5560;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r9,-112
	ctx.r8.s64 = ctx.r9.s64 + -112;
	// lwz r9,-112(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -112);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82236488
	if (ctx.cr6.eq) goto loc_82236488;
	// lwz r9,268(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82236488:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulli r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 * 112;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x822401b0
	sub_822401B0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82236450) {
	__imp__sub_82236450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822364BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822364BC) {
	__imp__sub_822364BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822364C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822364C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,92(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r4,576(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 576);
	// bl 0x82229da8
	ctx.lr = 0x822364F8;
	sub_82229DA8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,268(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236510
	if (ctx.cr6.eq) goto loc_82236510;
	// stb r29,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r29.u8);
	// stw r29,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r29.u32);
loc_82236510:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x82236520
	if (ctx.cr6.gt) goto loc_82236520;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// b 0x82236530
	goto loc_82236530;
loc_82236520:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82236530:
	// stw r27,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x821e2ec8
	ctx.lr = 0x82236540;
	sub_821E2EC8(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// addi r30,r11,-18804
	ctx.r30.s64 = ctx.r11.s64 + -18804;
loc_8223654C:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822365a0
	if (ctx.cr6.lt) goto loc_822365A0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,102(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 102);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,102(r31)
	PPC_STORE_U16(ctx.r31.u32 + 102, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82236590
	if (!ctx.cr6.eq) goto loc_82236590;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x821e2ec8
	ctx.lr = 0x8223658C;
	sub_821E2EC8(ctx, base);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
loc_82236590:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x8223654c
	if (ctx.cr6.lt) goto loc_8223654C;
loc_822365A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822364C0) {
	__imp__sub_822364C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822365A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// lwz r9,52(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// addi r7,r9,15000
	ctx.r7.s64 = ctx.r9.s64 + 15000;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// stwx r7,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u32);
	// addi r6,r9,-18804
	ctx.r6.s64 = ctx.r9.s64 + -18804;
loc_822365D4:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mulli r8,r9,34
	ctx.r8.s64 = ctx.r9.s64 * 34;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stwx r7,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r7.u32);
	// blt cr6,0x822365d4
	if (ctx.cr6.lt) goto loc_822365D4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822365A8) {
	__imp__sub_822365A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// subfc r6,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// eqv r5,r7,r11
	ctx.r5.u64 = ~(ctx.r7.u64 ^ ctx.r11.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82236610) {
	__imp__sub_82236610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// addi r11,r11,15000
	ctx.r11.s64 = ctx.r11.s64 + 15000;
	// subfc r6,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// eqv r5,r7,r11
	ctx.r5.u64 = ~(ctx.r7.u64 ^ ctx.r11.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82236640) {
	__imp__sub_82236640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82236674) {
	__imp__sub_82236674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236678) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82236678) {
	__imp__sub_82236678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236688) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r3,7
	ctx.r3.s64 = 7;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822366a0
	if (ctx.cr6.eq) goto loc_822366A0;
	// li r3,6
	ctx.r3.s64 = 6;
loc_822366A0:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822366b0
	if (ctx.cr6.eq) goto loc_822366B0;
	// rlwinm r3,r3,0,31,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_822366B0:
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r3,r3,0,30,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82236688) {
	__imp__sub_82236688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822366C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822366C4) {
	__imp__sub_822366C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822366C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822366d4
	if (!ctx.cr6.eq) goto loc_822366D4;
	// blr 
	return;
loc_822366D4:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,136
	ctx.r10.s64 = 136;
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r11,r8,r10
	ctx.r11.s32 = ctx.r8.s32 / ctx.r10.s32;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822366C8) {
	__imp__sub_822366C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822366F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822366F4) {
	__imp__sub_822366F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822366F8) {
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
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,18560
	ctx.r10.s64 = ctx.r11.s64 + 18560;
	// lwz r11,16388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16388);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82236734
	if (!ctx.cr6.gt) goto loc_82236734;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-6684
	ctx.r4.s64 = ctx.r11.s64 + -6684;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82236734;
	sub_822830E8(ctx, base);
loc_82236734:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82236754
	if (!ctx.cr6.eq) goto loc_82236754;
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
loc_82236754:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r31,136
	ctx.r10.s64 = ctx.r31.s64 * 136;
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-136
	ctx.r3.s64 = ctx.r11.s64 + -136;
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

PPC_WEAK_FUNC(sub_822366F8) {
	__imp__sub_822366F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82236788;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822367cc
	if (!ctx.cr6.eq) goto loc_822367CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6640
	ctx.r3.s64 = ctx.r11.s64 + -6640;
	// bl 0x822ad350
	ctx.lr = 0x822367CC;
	sub_822AD350(ctx, base);
loc_822367CC:
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82236888
	if (ctx.cr6.gt) goto loc_82236888;
	// lhz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 100);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,100(r28)
	PPC_STORE_U16(ctx.r28.u32 + 100, ctx.r9.u16);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r25,4(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r24,8(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bge cr6,0x8223682c
	if (!ctx.cr6.lt) goto loc_8223682C;
	// subf r29,r30,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r30.s64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823de678
	ctx.lr = 0x82236824;
	sub_823DE678(ctx, base);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
loc_8223682C:
	// lhz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 56);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8223687c
	if (!ctx.cr6.lt) goto loc_8223687C;
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
loc_82236844:
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8223687c
	if (ctx.cr6.gt) goto loc_8223687C;
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
	// blt cr6,0x82236844
	if (ctx.cr6.lt) goto loc_82236844;
loc_8223687C:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
loc_82236888:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82236780) {
	__imp__sub_82236780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236890) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// addi r9,r10,255
	ctx.r9.s64 = ctx.r10.s64 + 255;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82236974
	if (!ctx.cr6.eq) goto loc_82236974;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 100);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r7.u32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82236918
	if (!ctx.cr6.gt) goto loc_82236918;
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_822368EC:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// bne 0x822368ec
	if (!ctx.cr0.eq) goto loc_822368EC;
loc_82236918:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223695c
	if (ctx.cr6.eq) goto loc_8223695C;
	// lhz r9,-28(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -28);
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
loc_82236928:
	// lhz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8223695c
	if (ctx.cr6.lt) goto loc_8223695C;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// bne 0x82236928
	if (!ctx.cr0.eq) goto loc_82236928;
loc_8223695C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lhz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 100);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,100(r3)
	PPC_STORE_U16(ctx.r3.u32 + 100, ctx.r10.u16);
loc_82236974:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82236890) {
	__imp__sub_82236890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236980) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 100);
	// lhz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_822369AC:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x822369cc
	if (ctx.cr6.eq) goto loc_822369CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822369ac
	if (ctx.cr6.lt) goto loc_822369AC;
	// blr 
	return;
loc_822369CC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82236890
	sub_82236890(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82236980) {
	__imp__sub_82236980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822369D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822369D4) {
	__imp__sub_822369D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822369D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822369E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,18560
	ctx.r31.s64 = ctx.r11.s64 + 18560;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82236a1c
	if (!ctx.cr6.eq) goto loc_82236A1C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-6564
	ctx.r4.s64 = ctx.r11.s64 + -6564;
	// bl 0x822830e8
	ctx.lr = 0x82236A1C;
	sub_822830E8(ctx, base);
loc_82236A1C:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r7,r10,-18804
	ctx.r7.s64 = ctx.r10.s64 + -18804;
	// li r6,136
	ctx.r6.s64 = 136;
	// rlwinm r8,r27,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r27,r8
	ctx.r3.u64 = ctx.r27.u64 + ctx.r8.u64;
	// subf r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// divw r9,r10,r6
	ctx.r9.s32 = ctx.r10.s32 / ctx.r6.s32;
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rotlwi r6,r7,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// sthx r4,r6,r5
	PPC_STORE_U16(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u16);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lhz r10,606(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 606);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82236aa4
	if (!ctx.cr6.eq) goto loc_82236AA4;
	// sth r26,606(r30)
	PPC_STORE_U16(ctx.r30.u32 + 606, ctx.r26.u16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// sth r26,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r26.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r26,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r26.u16);
	// bl 0x82236780
	ctx.lr = 0x82236A9C;
	sub_82236780(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82236AA4:
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
	// lhz r9,606(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 606);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lhzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// rotlwi r5,r7,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// sth r7,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r7.u16);
	// sthx r26,r5,r6
	PPC_STORE_U16(ctx.r5.u32 + ctx.r6.u32, ctx.r26.u16);
	// addi r4,r31,6
	ctx.r4.s64 = ctx.r31.s64 + 6;
	// lhz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r11,r3,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// sthx r26,r11,r4
	PPC_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r26.u16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82236780
	ctx.lr = 0x82236AE4;
	sub_82236780(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822369D8) {
	__imp__sub_822369D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82236AEC) {
	__imp__sub_82236AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82236AF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// lhz r7,606(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 606);
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r10,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82236be4
	if (ctx.cr6.eq) goto loc_82236BE4;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r10,18560
	ctx.r31.s64 = ctx.r10.s64 + 18560;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// sth r8,606(r3)
	PPC_STORE_U16(ctx.r3.u32 + 606, ctx.r8.u16);
	// addi r6,r31,6
	ctx.r6.s64 = ctx.r31.s64 + 6;
	// addi r5,r31,6
	ctx.r5.s64 = ctx.r31.s64 + 6;
	// lhzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// rotlwi r3,r4,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// sthx r8,r3,r6
	PPC_STORE_U16(ctx.r3.u32 + ctx.r6.u32, ctx.r8.u16);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rotlwi r8,r8,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// sthx r7,r8,r5
	PPC_STORE_U16(ctx.r8.u32 + ctx.r5.u32, ctx.r7.u16);
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// sthx r7,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u16);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r29,r10,-18804
	ctx.r29.s64 = ctx.r10.s64 + -18804;
loc_82236B68:
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// lhzx r9,r30,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r31.u32);
	// lhzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// mulli r11,r9,136
	ctx.r11.s64 = ctx.r9.s64 * 136;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 100);
	// lhz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82236bd4
	if (!ctx.cr6.lt) goto loc_82236BD4;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82236BB0:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82236bd0
	if (ctx.cr6.eq) goto loc_82236BD0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82236bb0
	if (ctx.cr6.lt) goto loc_82236BB0;
	// b 0x82236bd4
	goto loc_82236BD4;
loc_82236BD0:
	// bl 0x82236890
	ctx.lr = 0x82236BD4;
	sub_82236890(ctx, base);
loc_82236BD4:
	// addi r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 6;
	// lhzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82236b68
	if (!ctx.cr6.eq) goto loc_82236B68;
loc_82236BE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82236AF0) {
	__imp__sub_82236AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82236BEC) {
	__imp__sub_82236BEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82236BF8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82236af0
	ctx.lr = 0x82236C04;
	sub_82236AF0(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lwz r8,312(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 312);
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// addi r21,r11,18560
	ctx.r21.s64 = ctx.r11.s64 + 18560;
	// rlwinm r7,r8,0,22,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r7,312(r24)
	PPC_STORE_U32(ctx.r24.u32 + 312, ctx.r7.u32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r11,608(r24)
	PPC_STORE_U32(ctx.r24.u32 + 608, ctx.r11.u32);
	// lwz r9,16388(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16388);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lhz r26,126(r24)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r24.u32 + 126);
	// beq cr6,0x82236d00
	if (ctx.cr6.eq) goto loc_82236D00;
	// lis r8,642
	ctx.r8.s64 = 42074112;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r25,r8,21
	ctx.r25.u64 = ctx.r8.u64 | 21;
	// addi r27,r10,24548
	ctx.r27.s64 = ctx.r10.s64 + 24548;
	// addi r28,r11,-18804
	ctx.r28.s64 = ctx.r11.s64 + -18804;
loc_82236C58:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r31,r23,r11
	ctx.r31.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lhz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82236cf0
	if (ctx.cr6.eq) goto loc_82236CF0;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82236C94:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mulli r11,r9,136
	ctx.r11.s64 = ctx.r9.s64 * 136;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x82342410
	ctx.lr = 0x82236CC4;
	sub_82342410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82236cdc
	if (ctx.cr6.eq) goto loc_82236CDC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822369d8
	ctx.lr = 0x82236CDC;
	sub_822369D8(ctx, base);
loc_82236CDC:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82236c94
	if (!ctx.cr6.eq) goto loc_82236C94;
	// lwz r9,16388(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16388);
loc_82236CF0:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,136
	ctx.r23.s64 = ctx.r23.s64 + 136;
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82236c58
	if (ctx.cr6.lt) goto loc_82236C58;
loc_82236D00:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82236BF0) {
	__imp__sub_82236BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236D08) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82236d20
	if (ctx.cr6.eq) goto loc_82236D20;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
loc_82236D20:
	// rlwinm r11,r4,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82236d38
	if (ctx.cr6.eq) goto loc_82236D38;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
loc_82236D38:
	// rlwinm r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82236D08) {
	__imp__sub_82236D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82236D54) {
	__imp__sub_82236D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236D58) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236da0
	if (ctx.cr6.eq) goto loc_82236DA0;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
loc_82236D70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82236D74:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82236dac
	if (!ctx.cr6.eq) goto loc_82236DAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82236d74
	if (ctx.cr6.lt) goto loc_82236D74;
	// lhz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82236d70
	if (ctx.cr6.lt) goto loc_82236D70;
loc_82236DA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,107(r3)
	PPC_STORE_U8(ctx.r3.u32 + 107, ctx.r11.u8);
	// blr 
	return;
loc_82236DAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,107(r3)
	PPC_STORE_U8(ctx.r3.u32 + 107, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82236D58) {
	__imp__sub_82236D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82236DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x82236DC0;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823ddffc
	ctx.lr = 0x82236DC8;
	__savefpr_17(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4496(r1)
	ea = -4496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822d52c8
	ctx.lr = 0x82236DEC;
	sub_822D52C8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d52c8
	ctx.lr = 0x82236DFC;
	sub_822D52C8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f8,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f31,f8,f13
	ctx.f31.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f27,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
	// lfs f17,2412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2412);
	ctx.f17.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f4,f10,f6,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f7.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// fmadds f3,f11,f12,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bge cr6,0x82236e64
	if (!ctx.cr6.lt) goto loc_82236E64;
	// fadds f31,f31,f17
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f17.f64));
loc_82236E64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r16,1
	ctx.r16.s64 = 1;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// lfs f0,5812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82236e84
	if (ctx.cr6.lt) goto loc_82236E84;
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
loc_82236E84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f0,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f31,f0,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x822d52c8
	ctx.lr = 0x82236E9C;
	sub_822D52C8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-29220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29220);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x82236EAC;
	sub_823DE720(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r23,r11,-18804
	ctx.r23.s64 = ctx.r11.s64 + -18804;
	// lfs f9,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,-6476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -6476);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lfs f0,7932(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f6,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,-6480(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -6480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// lwz r3,40(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// fdivs f3,f12,f31
	ctx.f3.f64 = double(float(ctx.f12.f64 / ctx.f31.f64));
	// lfs f4,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f2,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,-6484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -6484);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmuls f19,f2,f2
	ctx.f19.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fadds f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// fmuls f22,f7,f7
	ctx.f22.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f1,f3,f11
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f11,f1,f10
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmadds f10,f8,f11,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f13.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f9,f5,f11,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f8,f4,f11,f6
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bne cr6,0x82236f44
	if (!ctx.cr6.eq) goto loc_82236F44;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// b 0x82236fc8
	goto loc_82236FC8;
loc_82236F44:
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// fmuls f11,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// addi r31,r10,18560
	ctx.r31.s64 = ctx.r10.s64 + 18560;
	// li r10,-2
	ctx.r10.s64 = -2;
	// li r8,512
	ctx.r8.s64 = 512;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// stfs f13,16392(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16392, temp.u32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16396(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16396, temp.u32);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stw r20,16440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16440, ctx.r20.u32);
	// stfs f13,16400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16400, temp.u32);
	// stw r20,16412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16412, ctx.r20.u32);
	// stfs f27,16404(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16404, temp.u32);
	// stw r10,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r10.u32);
	// stfs f27,16408(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16408, temp.u32);
	// stw r9,16432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16432, ctx.r9.u32);
	// stfs f0,16416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16416, temp.u32);
	// stw r8,16436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16436, ctx.r8.u32);
	// stfs f11,16420(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16420, temp.u32);
	// stfs f12,16424(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16424, temp.u32);
	// bl 0x822349f8
	ctx.lr = 0x82236FA8;
	sub_822349F8(ctx, base);
	// lwz r11,16440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16440);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bne cr6,0x82236fc8
	if (!ctx.cr6.eq) goto loc_82236FC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r11,-6520
	ctx.r4.s64 = ctx.r11.s64 + -6520;
	// bl 0x82280b08
	ctx.lr = 0x82236FC8;
	sub_82280B08(ctx, base);
loc_82236FC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82237314
	if (ctx.cr6.eq) goto loc_82237314;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r21,r1,144
	ctx.r21.s64 = ctx.r1.s64 + 144;
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// lfs f21,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f21.f64 = double(temp.f32);
loc_82236FE0:
	// lwz r26,0(r21)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r30,r26,20
	ctx.r30.s64 = ctx.r26.s64 + 20;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f11,20(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f24,f11,f0
	ctx.f24.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,24(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f23,f10,f13
	ctx.f23.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,28(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f25,f9,f12
	ctx.f25.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f8,f24,f24
	ctx.f8.f64 = double(float(ctx.f24.f64 * ctx.f24.f64));
	// fmadds f20,f23,f23,f8
	ctx.f20.f64 = double(float(ctx.f23.f64 * ctx.f23.f64 + ctx.f8.f64));
	// bl 0x822d4918
	ctx.lr = 0x82237024;
	sub_822D4918(ctx, base);
	// lhz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 56);
	// fmr f18,f1
	ctx.fpscr.disableFlushMode();
	ctx.f18.f64 = ctx.f1.f64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82237308
	if (ctx.cr6.eq) goto loc_82237308;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_8223703C:
	// lwz r10,60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r29,r10,r27
	ctx.r29.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f4,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// fsubs f29,f4,f12
	ctx.f29.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fsubs f31,f8,f11
	ctx.f31.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fsubs f30,f6,f10
	ctx.f30.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fsubs f26,f4,f9
	ctx.f26.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fmuls f0,f7,f7
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f28,f5,f5,f0
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f0.f64));
	// bl 0x822d4918
	ctx.lr = 0x822370B4;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f18.f64);
	// ble cr6,0x822370e0
	if (!ctx.cr6.gt) goto loc_822370E0;
	// fcmpu cr6,f20,f22
	ctx.cr6.compare(ctx.f20.f64, ctx.f22.f64);
	// bge cr6,0x822370cc
	if (!ctx.cr6.lt) goto loc_822370CC;
	// fcmpu cr6,f28,f22
	ctx.cr6.compare(ctx.f28.f64, ctx.f22.f64);
	// blt cr6,0x822372a4
	if (ctx.cr6.lt) goto loc_822372A4;
loc_822370CC:
	// fmuls f0,f31,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f24.f64));
	// fmadds f13,f30,f23,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f23.f64 + ctx.f0.f64));
	// fmadds f12,f26,f25,f13
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f25.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f27
	ctx.cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// bgt cr6,0x822372a4
	if (ctx.cr6.gt) goto loc_822372A4;
loc_822370E0:
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// blt cr6,0x822370f8
	if (ctx.cr6.lt) goto loc_822370F8;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x822372a4
	if (!ctx.cr6.lt) goto loc_822372A4;
	// b 0x8223710c
	goto loc_8223710C;
loc_822370F8:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// bgt cr6,0x8223710c
	if (ctx.cr6.gt) goto loc_8223710C;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x822372a4
	if (!ctx.cr6.gt) goto loc_822372A4;
loc_8223710C:
	// fcmpu cr6,f20,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f20.f64, ctx.f22.f64);
	// ble cr6,0x8223719c
	if (!ctx.cr6.gt) goto loc_8223719C;
	// fcmpu cr6,f28,f22
	ctx.cr6.compare(ctx.f28.f64, ctx.f22.f64);
	// ble cr6,0x8223719c
	if (!ctx.cr6.gt) goto loc_8223719C;
	// fmuls f0,f31,f24
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f24.f64));
	// fnmadds f0,f30,f23,f0
	ctx.f0.f64 = double(float(-(ctx.f30.f64 * ctx.f23.f64 + ctx.f0.f64)));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x822372a4
	if (!ctx.cr6.gt) goto loc_822372A4;
	// fmuls f13,f31,f31
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fsubs f12,f20,f22
	ctx.f12.f64 = double(float(ctx.f20.f64 - ctx.f22.f64));
	// fmadds f13,f30,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmsubs f12,f0,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f12,f27
	ctx.cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// ble cr6,0x822372a4
	if (!ctx.cr6.gt) goto loc_822372A4;
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f21,f13
	ctx.f12.f64 = double(float(ctx.f21.f64 / ctx.f13.f64));
	// fsubs f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f13,f21
	ctx.cr6.compare(ctx.f13.f64, ctx.f21.f64);
	// bge cr6,0x822372a4
	if (!ctx.cr6.lt) goto loc_822372A4;
	// fmadds f13,f26,f13,f25
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f25.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f10,f19
	ctx.cr6.compare(ctx.f10.f64, ctx.f19.f64);
	// ble cr6,0x8223719c
	if (!ctx.cr6.gt) goto loc_8223719C;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bge cr6,0x822372a4
	if (!ctx.cr6.lt) goto loc_822372A4;
	// fmadds f0,f0,f26,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f25.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f19
	ctx.cr6.compare(ctx.f12.f64, ctx.f19.f64);
	// ble cr6,0x8223719c
	if (!ctx.cr6.gt) goto loc_8223719C;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x822372a4
	if (!ctx.cr6.lt) goto loc_822372A4;
loc_8223719C:
	// lfs f0,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bne cr6,0x822371b4
	if (!ctx.cr6.eq) goto loc_822371B4;
	// lfs f0,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f17
	ctx.cr6.compare(ctx.f0.f64, ctx.f17.f64);
	// beq cr6,0x82237258
	if (ctx.cr6.eq) goto loc_82237258;
loc_822371B4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f5,f0,f11
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f4,f0,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f8,f4,f13,f6
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f9,f5,f13,f7
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fsubs f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fsubs f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fsubs f10,f9,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// beq cr6,0x82237238
	if (ctx.cr6.eq) goto loc_82237238;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82237248
	if (!ctx.cr6.lt) goto loc_82237248;
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// blt cr6,0x822372a4
	if (ctx.cr6.lt) goto loc_822372A4;
	// b 0x82237248
	goto loc_82237248;
loc_82237238:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x82237258
	if (!ctx.cr6.lt) goto loc_82237258;
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// bge cr6,0x82237258
	if (!ctx.cr6.lt) goto loc_82237258;
loc_82237248:
	// fcmpu cr6,f10,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f27.f64);
	// bge cr6,0x82237258
	if (!ctx.cr6.lt) goto loc_82237258;
	// fcmpu cr6,f12,f27
	ctx.cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// blt cr6,0x822372a4
	if (ctx.cr6.lt) goto loc_822372A4;
loc_82237258:
	// rlwinm r11,r18,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x2;
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82237274
	if (ctx.cr6.eq) goto loc_82237274;
	// lbz r11,9(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stb r11,9(r29)
	PPC_STORE_U8(ctx.r29.u32 + 9, ctx.r11.u8);
loc_82237274:
	// rlwinm r11,r18,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223728c
	if (ctx.cr6.eq) goto loc_8223728C;
	// lbz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stb r11,10(r29)
	PPC_STORE_U8(ctx.r29.u32 + 10, ctx.r11.u8);
loc_8223728C:
	// rlwinm r11,r18,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822372a4
	if (ctx.cr6.eq) goto loc_822372A4;
	// lbz r11,11(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stb r11,11(r29)
	PPC_STORE_U8(ctx.r29.u32 + 11, ctx.r11.u8);
loc_822372A4:
	// lhz r8,56(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 56);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8223703c
	if (ctx.cr6.lt) goto loc_8223703C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82237308
	if (ctx.cr6.eq) goto loc_82237308;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82237304
	if (ctx.cr6.eq) goto loc_82237304;
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
loc_822372D8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_822372DC:
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82237324
	if (!ctx.cr6.eq) goto loc_82237324;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822372dc
	if (ctx.cr6.lt) goto loc_822372DC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822372d8
	if (ctx.cr6.lt) goto loc_822372D8;
loc_82237304:
	// stb r20,107(r26)
	PPC_STORE_U8(ctx.r26.u32 + 107, ctx.r20.u8);
loc_82237308:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r21,r21,8
	ctx.r21.s64 = ctx.r21.s64 + 8;
	// bne 0x82236fe0
	if (!ctx.cr0.eq) goto loc_82236FE0;
loc_82237314:
	// addi r1,r1,4496
	ctx.r1.s64 = ctx.r1.s64 + 4496;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de048
	ctx.lr = 0x82237320;
	__restfpr_17(ctx, base);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
loc_82237324:
	// stb r16,107(r26)
	PPC_STORE_U8(ctx.r26.u32 + 107, ctx.r16.u8);
	// b 0x82237308
	goto loc_82237308;
}

PPC_WEAK_FUNC(sub_82236DB8) {
	__imp__sub_82236DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8223732C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8223732C) {
	__imp__sub_8223732C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82237338;
	__savegprlr_22(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12464(r1)
	ea = -12464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,4176
	ctx.r3.s64 = ctx.r1.s64 + 4176;
	// bl 0x823de090
	ctx.lr = 0x82237364;
	sub_823DE090(ctx, base);
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f11,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f8,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// addi r26,r11,-18804
	ctx.r26.s64 = ctx.r11.s64 + -18804;
	// lfs f7,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r3,40(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// lfs f13,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fadds f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f0,-6480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6480);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f7,f13,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f0.f64));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fadds f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f3,f5,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fadds f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// bne cr6,0x822373c8
	if (!ctx.cr6.eq) goto loc_822373C8;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8223745c
	goto loc_8223745C;
loc_822373C8:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lfs f12,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// addi r30,r11,18560
	ctx.r30.s64 = ctx.r11.s64 + 18560;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-2
	ctx.r10.s64 = -2;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f13,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// li r8,512
	ctx.r8.s64 = 512;
	// stfs f12,16392(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16392, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f12,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16396(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16396, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,16440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16440, ctx.r7.u32);
	// stfs f12,16400(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16400, temp.u32);
	// stw r11,16412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16412, ctx.r11.u32);
	// stfs f13,16404(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16404, temp.u32);
	// stw r10,16428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16428, ctx.r10.u32);
	// stfs f13,16408(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16408, temp.u32);
	// stw r9,16432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16432, ctx.r9.u32);
	// stfs f0,16416(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16416, temp.u32);
	// stw r8,16436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16436, ctx.r8.u32);
	// stfs f11,16420(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16420, temp.u32);
	// stfs f10,16424(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16424, temp.u32);
	// bl 0x822349f8
	ctx.lr = 0x82237438;
	sub_822349F8(ctx, base);
	// lwz r11,16440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16440);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// bne cr6,0x8223745c
	if (!ctx.cr6.eq) goto loc_8223745C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r11,-6472
	ctx.r4.s64 = ctx.r11.s64 + -6472;
	// bl 0x82280b08
	ctx.lr = 0x8223745C;
	sub_82280B08(ctx, base);
loc_8223745C:
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822374ac
	if (ctx.cr6.eq) goto loc_822374AC;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// li r28,136
	ctx.r28.s64 = 136;
loc_82237474:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x8233cd78
	ctx.lr = 0x82237484;
	sub_8233CD78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822374a0
	if (ctx.cr6.eq) goto loc_822374A0;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r10,r1,4176
	ctx.r10.s64 = ctx.r1.s64 + 4176;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = ctx.r9.s32 / ctx.r28.s32;
	// stbx r23,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r23.u8);
loc_822374A0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82237474
	if (!ctx.cr0.eq) goto loc_82237474;
loc_822374AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822375d0
	if (ctx.cr6.eq) goto loc_822375D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,4176
	ctx.r11.s64 = ctx.r1.s64 + 4176;
loc_822374C0:
	// lbzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822375bc
	if (!ctx.cr6.eq) goto loc_822375BC;
	// lhz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822375bc
	if (ctx.cr6.eq) goto loc_822375BC;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r1,4176
	ctx.r10.s64 = ctx.r1.s64 + 4176;
loc_822374EC:
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82237550
	if (ctx.cr6.eq) goto loc_82237550;
	// rlwinm r10,r22,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223751c
	if (ctx.cr6.eq) goto loc_8223751C;
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
loc_8223751C:
	// rlwinm r10,r22,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82237534
	if (ctx.cr6.eq) goto loc_82237534;
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stb r10,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r10.u8);
loc_82237534:
	// rlwinm r10,r22,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8223754c
	if (ctx.cr6.eq) goto loc_8223754C;
	// lbz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
loc_8223754C:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_82237550:
	// lhz r8,56(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 56);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// addi r10,r1,4176
	ctx.r10.s64 = ctx.r1.s64 + 4176;
	// blt cr6,0x822374ec
	if (ctx.cr6.lt) goto loc_822374EC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822375bc
	if (ctx.cr6.eq) goto loc_822375BC;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822375b4
	if (ctx.cr6.eq) goto loc_822375B4;
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
loc_82237588:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223758C:
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822375d8
	if (!ctx.cr6.eq) goto loc_822375D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8223758c
	if (ctx.cr6.lt) goto loc_8223758C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82237588
	if (ctx.cr6.lt) goto loc_82237588;
loc_822375B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,107(r5)
	PPC_STORE_U8(ctx.r5.u32 + 107, ctx.r11.u8);
loc_822375BC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// addi r11,r1,4176
	ctx.r11.s64 = ctx.r1.s64 + 4176;
	// blt cr6,0x822374c0
	if (ctx.cr6.lt) goto loc_822374C0;
loc_822375D0:
	// addi r1,r1,12464
	ctx.r1.s64 = ctx.r1.s64 + 12464;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_822375D8:
	// stb r23,107(r5)
	PPC_STORE_U8(ctx.r5.u32 + 107, ctx.r23.u8);
	// b 0x822375bc
	goto loc_822375BC;
}

PPC_WEAK_FUNC(sub_82237330) {
	__imp__sub_82237330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822375E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f5,f4
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f4.f64;
	// fmr f4,f3
	ctx.f4.f64 = ctx.f3.f64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// fmr f3,f2
	ctx.f3.f64 = ctx.f2.f64;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,7932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822d8f18
	sub_822D8F18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822375E0) {
	__imp__sub_822375E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82237604) {
	__imp__sub_82237604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82237610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,606(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 606);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82237658
	if (ctx.cr6.eq) goto loc_82237658;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// addi r30,r10,18560
	ctx.r30.s64 = ctx.r10.s64 + 18560;
loc_82237630:
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,8
	ctx.r4.s64 = 8;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82237644;
	sub_822E40F0(ctx, base);
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// lhz r10,606(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 606);
	// lhzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82237630
	if (!ctx.cr6.eq) goto loc_82237630;
loc_82237658:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82237608) {
	__imp__sub_82237608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82237668;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r30,606(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 606);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82237758
	if (ctx.cr6.eq) goto loc_82237758;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// addi r29,r11,-18804
	ctx.r29.s64 = ctx.r11.s64 + -18804;
	// addi r31,r10,18560
	ctx.r31.s64 = ctx.r10.s64 + 18560;
loc_82237690:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x822376A0;
	sub_8223E078(ctx, base);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r10,r8,136
	ctx.r10.s64 = ctx.r8.s64 * 136;
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,60(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lhz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lhz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822376f0
	if (ctx.cr6.eq) goto loc_822376F0;
loc_822376E0:
	// lhzu r7,-12(r8)
	ea = -12 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822376e0
	if (!ctx.cr6.eq) goto loc_822376E0;
loc_822376F0:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r31,6
	ctx.r9.s64 = ctx.r31.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r31,6
	ctx.r6.s64 = ctx.r31.s64 + 6;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// stb r4,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r4.u8);
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lhzx r7,r10,r7
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// rotlwi r4,r7,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// rotlwi r3,r11,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// sthx r11,r4,r6
	PPC_STORE_U16(ctx.r4.u32 + ctx.r6.u32, ctx.r11.u16);
	// sthx r7,r3,r5
	PPC_STORE_U16(ctx.r3.u32 + ctx.r5.u32, ctx.r7.u16);
	// stdx r8,r10,r31
	PPC_STORE_U64(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u64);
	// lhzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhz r11,606(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 606);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82237690
	if (!ctx.cr6.eq) goto loc_82237690;
loc_82237758:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82237660) {
	__imp__sub_82237660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8223788c
	if (ctx.cr6.lt) goto loc_8223788C;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r10,r6,24
	ctx.r10.s64 = ctx.r6.s64 + 24;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82237790:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-20(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-16(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -16, temp.u32);
	// lwz r9,-28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// stw r9,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r9.u32);
	// lhz r3,-24(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + -24);
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822377cc
	if (ctx.cr6.eq) goto loc_822377CC;
	// oris r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 1048576;
	// stw r9,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r9.u32);
loc_822377CC:
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f13,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f12,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lhz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 112);
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82237808
	if (ctx.cr6.eq) goto loc_82237808;
	// oris r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 1048576;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_82237808:
	// lfs f0,264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f13,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f12,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r9,244(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lhz r3,248(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 248);
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82237844
	if (ctx.cr6.eq) goto loc_82237844;
	// oris r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 1048576;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
loc_82237844:
	// lfs f0,400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f13,404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f12,408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r9,380(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lhz r3,384(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 384);
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82237880
	if (ctx.cr6.eq) goto loc_82237880;
	// oris r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 1048576;
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
loc_82237880:
	// addi r11,r11,544
	ctx.r11.s64 = ctx.r11.s64 + 544;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x82237790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82237790;
loc_8223788C:
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r10,r8,136
	ctx.r10.s64 = ctx.r8.s64 * 136;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 + 28;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822378B4:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r9,-28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lhz r8,-24(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -24);
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822378f0
	if (ctx.cr6.eq) goto loc_822378F0;
	// oris r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 1048576;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_822378F0:
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x822378b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822378B4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82237760) {
	__imp__sub_82237760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82237900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82237908;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82237910;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x8223792c
	if (ctx.cr6.eq) goto loc_8223792C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6332
	ctx.r3.s64 = ctx.r11.s64 + -6332;
	// bl 0x822ad350
	ctx.lr = 0x82237924;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8223792C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82234810
	ctx.lr = 0x82237934;
	sub_82234810(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x82237940;
	sub_822B1C50(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,13888
	ctx.r30.s64 = ctx.r11.s64 + 13888;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82237958:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822379c4
	if (ctx.cr6.eq) goto loc_822379C4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,72
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 72, ctx.xer);
	// blt cr6,0x82237958
	if (ctx.cr6.lt) goto loc_82237958;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82237978:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822379a8
	if (!ctx.cr6.eq) goto loc_822379A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-6416
	ctx.r3.s64 = ctx.r11.s64 + -6416;
	// bl 0x822ad350
	ctx.lr = 0x82237990;
	sub_822AD350(ctx, base);
	// li r31,9
	ctx.r31.s64 = 9;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82237998:
	// lwzu r3,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x822ad350
	ctx.lr = 0x822379A0;
	sub_822AD350(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82237998
	if (!ctx.cr0.eq) goto loc_82237998;
loc_822379A8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822379cc
	if (ctx.cr6.eq) goto loc_822379CC;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// sth r10,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822379C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82237978
	goto loc_82237978;
loc_822379CC:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// sth r10,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82237900) {
	__imp__sub_82237900(ctx, base);
}

