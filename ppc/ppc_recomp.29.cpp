#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_821637E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821637E4) {
	__imp__sub_821637E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821637E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821637F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82163840
	if (!ctx.cr6.gt) goto loc_82163840;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27564(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27564);
loc_8216380C:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82163818;
	sub_821778D8(ctx, base);
	// lwz r11,27564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27564);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,25568(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x8216382C;
	sub_82155DF0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82163830;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27564, ctx.r3.u32);
	// bne 0x8216380c
	if (!ctx.cr0.eq) goto loc_8216380C;
loc_82163840:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821637E8) {
	__imp__sub_821637E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r4,28204(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28204);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163848) {
	__imp__sub_82163848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163858) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163858) {
	__imp__sub_82163858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163860) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28204(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28204);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163860) {
	__imp__sub_82163860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163878) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821638c0
	if (!ctx.cr6.gt) goto loc_821638C0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28204(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28204);
loc_821638A0:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821638AC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821638B0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28204, ctx.r3.u32);
	// bne 0x821638a0
	if (!ctx.cr0.eq) goto loc_821638A0;
loc_821638C0:
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

PPC_WEAK_FUNC(sub_82163878) {
	__imp__sub_82163878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821638D8) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27412);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,26052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26052, ctx.r11.u32);
	// bl 0x821562c0
	ctx.lr = 0x821638FC;
	sub_821562C0(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r3,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_821638D8) {
	__imp__sub_821638D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82163914) {
	__imp__sub_82163914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82163920;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27412(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27412);
	// ble cr6,0x82163968
	if (!ctx.cr6.gt) goto loc_82163968;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_82163940:
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stw r31,27412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27412, ctx.r31.u32);
	// stw r11,26052(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26052, ctx.r11.u32);
	// bl 0x821562c0
	ctx.lr = 0x82163950;
	sub_821562C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82163974
	if (ctx.cr6.eq) goto loc_82163974;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82163940
	if (ctx.cr6.lt) goto loc_82163940;
loc_82163968:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82163974:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163918) {
	__imp__sub_82163918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163980) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82163980) {
	__imp__sub_82163980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163988) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82163988) {
	__imp__sub_82163988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163990) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,96
	ctx.r5.s64 = 96;
	// lwz r4,25324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25324);
	// bl 0x821778d8
	ctx.lr = 0x821639B4;
	sub_821778D8(ctx, base);
	// lwz r11,25324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25324);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,25372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x821639CC;
	sub_82152400(ctx, base);
	// lwz r11,25324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25324);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,25372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x821639E0;
	sub_82152400(ctx, base);
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

PPC_WEAK_FUNC(sub_82163990) {
	__imp__sub_82163990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821639F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821639F8) {
	__imp__sub_821639F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82163A08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,25324(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25324);
	// bl 0x821778d8
	ctx.lr = 0x82163A28;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,25324(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25324);
	// ble cr6,0x82163a80
	if (!ctx.cr6.gt) goto loc_82163A80;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82163A38:
	// stw r31,25324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25324, ctx.r31.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82163A4C;
	sub_821778D8(ctx, base);
	// lwz r11,25324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25324);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82163A60;
	sub_82152400(ctx, base);
	// lwz r11,25324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25324);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82163A74;
	sub_82152400(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// bne 0x82163a38
	if (!ctx.cr0.eq) goto loc_82163A38;
loc_82163A80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163A00) {
	__imp__sub_82163A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82163A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82163af4
	if (!ctx.cr6.gt) goto loc_82163AF4;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25324);
loc_82163AAC:
	// li r5,96
	ctx.r5.s64 = 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82163AB8;
	sub_821778D8(ctx, base);
	// lwz r11,25324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25324);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82163ACC;
	sub_82152400(ctx, base);
	// lwz r11,25324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25324);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82163AE0;
	sub_82152400(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82163AE4;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25324, ctx.r3.u32);
	// bne 0x82163aac
	if (!ctx.cr0.eq) goto loc_82163AAC;
loc_82163AF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163A88) {
	__imp__sub_82163A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82163AFC) {
	__imp__sub_82163AFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163B00) {
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
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r11,27724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27724);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82163B2C;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82163b4c
	if (ctx.cr6.eq) goto loc_82163B4C;
	// lwz r11,27724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27724);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,28604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82163B44;
	sub_82152EC8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82163B4C:
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

PPC_WEAK_FUNC(sub_82163B00) {
	__imp__sub_82163B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82163B64) {
	__imp__sub_82163B64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82163B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27724(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27724);
	// ble cr6,0x82163bd0
	if (!ctx.cr6.gt) goto loc_82163BD0;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82163B90:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r31,27724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27724, ctx.r31.u32);
	// stw r11,28604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82163BA0;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82163bdc
	if (ctx.cr6.eq) goto loc_82163BDC;
	// lwz r11,27724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27724);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,28604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82163BB8;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82163bdc
	if (ctx.cr6.eq) goto loc_82163BDC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82163b90
	if (ctx.cr6.lt) goto loc_82163B90;
loc_82163BD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82163BDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163B68) {
	__imp__sub_82163B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,28200(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28200);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163BE8) {
	__imp__sub_82163BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163BF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163BF8) {
	__imp__sub_82163BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163C00) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28200(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28200);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163C00) {
	__imp__sub_82163C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163C18) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82163c60
	if (!ctx.cr6.gt) goto loc_82163C60;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28200);
loc_82163C40:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82163C4C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82163C50;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28200, ctx.r3.u32);
	// bne 0x82163c40
	if (!ctx.cr0.eq) goto loc_82163C40;
loc_82163C60:
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

PPC_WEAK_FUNC(sub_82163C18) {
	__imp__sub_82163C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163C78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82163C78) {
	__imp__sub_82163C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163C80) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82163C80) {
	__imp__sub_82163C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r4,25692(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25692);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163C88) {
	__imp__sub_82163C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163C98) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163C98) {
	__imp__sub_82163C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,56
	ctx.r5.s64 = ctx.r4.s64 * 56;
	// lwz r4,25692(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25692);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163CA0) {
	__imp__sub_82163CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163CB0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82163cf8
	if (!ctx.cr6.gt) goto loc_82163CF8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25692(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25692);
loc_82163CD8:
	// li r5,56
	ctx.r5.s64 = 56;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82163CE4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82163CE8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25692, ctx.r3.u32);
	// bne 0x82163cd8
	if (!ctx.cr0.eq) goto loc_82163CD8;
loc_82163CF8:
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

PPC_WEAK_FUNC(sub_82163CB0) {
	__imp__sub_82163CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163D10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82163D10) {
	__imp__sub_82163D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163D18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82163D18) {
	__imp__sub_82163D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,26396(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26396);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163D20) {
	__imp__sub_82163D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163D30) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163D30) {
	__imp__sub_82163D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,26396(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26396);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163D38) {
	__imp__sub_82163D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163D48) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82163d90
	if (!ctx.cr6.gt) goto loc_82163D90;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26396(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26396);
loc_82163D70:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82163D7C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82163D80;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26396, ctx.r3.u32);
	// bne 0x82163d70
	if (!ctx.cr0.eq) goto loc_82163D70;
loc_82163D90:
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

PPC_WEAK_FUNC(sub_82163D48) {
	__imp__sub_82163D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25144);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163DA8) {
	__imp__sub_82163DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163DB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163DB8) {
	__imp__sub_82163DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25144);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163DC0) {
	__imp__sub_82163DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163DD0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82163e18
	if (!ctx.cr6.gt) goto loc_82163E18;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25144);
loc_82163DF8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82163E04;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82163E08;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25144, ctx.r3.u32);
	// bne 0x82163df8
	if (!ctx.cr0.eq) goto loc_82163DF8;
loc_82163E18:
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

PPC_WEAK_FUNC(sub_82163DD0) {
	__imp__sub_82163DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,27552(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27552);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163E30) {
	__imp__sub_82163E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163E40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163E40) {
	__imp__sub_82163E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,27552(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27552);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163E48) {
	__imp__sub_82163E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163E58) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82163ea0
	if (!ctx.cr6.gt) goto loc_82163EA0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27552(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27552);
loc_82163E80:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82163E8C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82163E90;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27552, ctx.r3.u32);
	// bne 0x82163e80
	if (!ctx.cr0.eq) goto loc_82163E80;
loc_82163EA0:
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

PPC_WEAK_FUNC(sub_82163E58) {
	__imp__sub_82163E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163EB8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,26896(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26896);
	// bl 0x821778d8
	ctx.lr = 0x82163ED8;
	sub_821778D8(ctx, base);
	// lwz r11,26896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26896);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82163f40
	if (ctx.cr6.eq) goto loc_82163F40;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82163f3c
	if (!ctx.cr6.eq) goto loc_82163F3C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82163EFC;
	sub_82177868(ctx, base);
	// lwz r11,26896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26896);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,26896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26896);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r4,27552(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27552, ctx.r4.u32);
	// lhz r8,30(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// bl 0x821778d8
	ctx.lr = 0x82163F28;
	sub_821778D8(ctx, base);
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
loc_82163F3C:
	// bl 0x82177978
	ctx.lr = 0x82163F40;
	sub_82177978(ctx, base);
loc_82163F40:
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

PPC_WEAK_FUNC(sub_82163EB8) {
	__imp__sub_82163EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82163F54) {
	__imp__sub_82163F54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163F58) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163F58) {
	__imp__sub_82163F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82163F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26896(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26896);
	// bl 0x821778d8
	ctx.lr = 0x82163F88;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26896(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26896);
	// ble cr6,0x82163fac
	if (!ctx.cr6.gt) goto loc_82163FAC;
loc_82163F94:
	// stw r30,26896(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26896, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82163eb8
	ctx.lr = 0x82163FA0;
	sub_82163EB8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x82163f94
	if (!ctx.cr0.eq) goto loc_82163F94;
loc_82163FAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82163F60) {
	__imp__sub_82163F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82163FB4) {
	__imp__sub_82163FB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82163FB8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82163ff4
	if (!ctx.cr6.gt) goto loc_82163FF4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82163FDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82163eb8
	ctx.lr = 0x82163FE4;
	sub_82163EB8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82163FE8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26896(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26896, ctx.r3.u32);
	// bne 0x82163fdc
	if (!ctx.cr0.eq) goto loc_82163FDC;
loc_82163FF4:
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

PPC_WEAK_FUNC(sub_82163FB8) {
	__imp__sub_82163FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216400C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216400C) {
	__imp__sub_8216400C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26584(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26584);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164010) {
	__imp__sub_82164010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164020) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164020) {
	__imp__sub_82164020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26584(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26584);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164028) {
	__imp__sub_82164028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164038) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82164080
	if (!ctx.cr6.gt) goto loc_82164080;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26584(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26584);
loc_82164060:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216406C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82164070;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26584, ctx.r3.u32);
	// bne 0x82164060
	if (!ctx.cr0.eq) goto loc_82164060;
loc_82164080:
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

PPC_WEAK_FUNC(sub_82164038) {
	__imp__sub_82164038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164098) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25288);
	// bl 0x821778d8
	ctx.lr = 0x821640B8;
	sub_821778D8(ctx, base);
	// lwz r11,25288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25288);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82164110
	if (ctx.cr6.eq) goto loc_82164110;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821640D0;
	sub_82177868(ctx, base);
	// lwz r11,25288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25288);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25288);
	// lwz r10,25232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25232);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,26896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26896, ctx.r9.u32);
	// lwz r7,68(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r6,72(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// bl 0x82163f60
	ctx.lr = 0x82164110;
	sub_82163F60(ctx, base);
loc_82164110:
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

PPC_WEAK_FUNC(sub_82164098) {
	__imp__sub_82164098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82164124) {
	__imp__sub_82164124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164128) {
	PPC_FUNC_PROLOGUE();
	// li r3,127
	ctx.r3.s64 = 127;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164128) {
	__imp__sub_82164128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82164138;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25288(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25288);
	// bl 0x821778d8
	ctx.lr = 0x82164150;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r26,25288(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25288);
	// ble cr6,0x82164208
	if (!ctx.cr6.gt) goto loc_82164208;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82164168:
	// stw r26,25288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25288, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216417C;
	sub_821778D8(ctx, base);
	// lwz r11,25288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25288);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821641fc
	if (ctx.cr6.eq) goto loc_821641FC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82164194;
	sub_82177868(ctx, base);
	// lwz r11,25288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25288);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25288);
	// lwz r10,25232(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25232);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26896(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26896, ctx.r4.u32);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r5,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821778d8
	ctx.lr = 0x821641D8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26896(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26896);
	// ble cr6,0x821641fc
	if (!ctx.cr6.gt) goto loc_821641FC;
loc_821641E4:
	// stw r30,26896(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26896, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82163eb8
	ctx.lr = 0x821641F0;
	sub_82163EB8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x821641e4
	if (!ctx.cr0.eq) goto loc_821641E4;
loc_821641FC:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82164168
	if (!ctx.cr0.eq) goto loc_82164168;
loc_82164208:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164130) {
	__imp__sub_82164130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82164218;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821642d8
	if (!ctx.cr6.gt) goto loc_821642D8;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lwz r4,25288(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25288);
loc_82164238:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82164244;
	sub_821778D8(ctx, base);
	// lwz r11,25288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25288);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821642c4
	if (ctx.cr6.eq) goto loc_821642C4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216425C;
	sub_82177868(ctx, base);
	// lwz r11,25288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25288);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25288);
	// lwz r10,25232(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25232);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26896(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26896, ctx.r4.u32);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r5,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821778d8
	ctx.lr = 0x821642A0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26896(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26896);
	// ble cr6,0x821642c4
	if (!ctx.cr6.gt) goto loc_821642C4;
loc_821642AC:
	// stw r30,26896(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26896, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82163eb8
	ctx.lr = 0x821642B8;
	sub_82163EB8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x821642ac
	if (!ctx.cr0.eq) goto loc_821642AC;
loc_821642C4:
	// bl 0x82177858
	ctx.lr = 0x821642C8;
	sub_82177858(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25288, ctx.r3.u32);
	// bne 0x82164238
	if (!ctx.cr0.eq) goto loc_82164238;
loc_821642D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164210) {
	__imp__sub_82164210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821642E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821642E0) {
	__imp__sub_821642E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821642E8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,60
	ctx.r5.s64 = 60;
	// lwz r4,25240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
	// bl 0x821778d8
	ctx.lr = 0x82164308;
	sub_821778D8(ctx, base);
	// lwz r11,25240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82164354
	if (ctx.cr6.eq) goto loc_82164354;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82164320;
	sub_82177868(ctx, base);
	// lwz r11,25240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,25240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r4,26616(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26616, ctx.r4.u32);
	// lbz r11,34(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 34);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82164354;
	sub_821778D8(ctx, base);
loc_82164354:
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

PPC_WEAK_FUNC(sub_821642E8) {
	__imp__sub_821642E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164368) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164368) {
	__imp__sub_82164368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82164378;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mulli r5,r4,60
	ctx.r5.s64 = ctx.r4.s64 * 60;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,25240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
	// bl 0x821778d8
	ctx.lr = 0x82164390;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,25240(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
	// ble cr6,0x82164408
	if (!ctx.cr6.gt) goto loc_82164408;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_821643A0:
	// stw r29,25240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25240, ctx.r29.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821643B4;
	sub_821778D8(ctx, base);
	// lwz r11,25240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821643fc
	if (ctx.cr6.eq) goto loc_821643FC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821643CC;
	sub_82177868(ctx, base);
	// lwz r11,25240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,25240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r4,26616(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26616, ctx.r4.u32);
	// lbz r11,34(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 34);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x821643FC;
	sub_821778D8(ctx, base);
loc_821643FC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// bne 0x821643a0
	if (!ctx.cr0.eq) goto loc_821643A0;
loc_82164408:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164370) {
	__imp__sub_82164370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82164418;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216449c
	if (!ctx.cr6.gt) goto loc_8216449C;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,25240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
loc_82164434:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82164440;
	sub_821778D8(ctx, base);
	// lwz r11,25240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82164488
	if (ctx.cr6.eq) goto loc_82164488;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82164458;
	sub_82177868(ctx, base);
	// lwz r11,25240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,25240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25240);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r4,26616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26616, ctx.r4.u32);
	// lbz r11,34(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 34);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82164488;
	sub_821778D8(ctx, base);
loc_82164488:
	// bl 0x82177858
	ctx.lr = 0x8216448C;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25240, ctx.r3.u32);
	// bne 0x82164434
	if (!ctx.cr0.eq) goto loc_82164434;
loc_8216449C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164410) {
	__imp__sub_82164410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821644A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821644A4) {
	__imp__sub_821644A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821644A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26156(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26156);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821644A8) {
	__imp__sub_821644A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821644B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821644B8) {
	__imp__sub_821644B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821644C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26156(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26156);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821644C0) {
	__imp__sub_821644C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821644D0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82164518
	if (!ctx.cr6.gt) goto loc_82164518;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26156(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26156);
loc_821644F8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82164504;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82164508;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26156, ctx.r3.u32);
	// bne 0x821644f8
	if (!ctx.cr0.eq) goto loc_821644F8;
loc_82164518:
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

PPC_WEAK_FUNC(sub_821644D0) {
	__imp__sub_821644D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,168
	ctx.r5.s64 = 168;
	// lwz r4,26344(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26344);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164530) {
	__imp__sub_82164530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164540) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164540) {
	__imp__sub_82164540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,168
	ctx.r5.s64 = ctx.r4.s64 * 168;
	// lwz r4,26344(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26344);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164548) {
	__imp__sub_82164548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164558) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821645a0
	if (!ctx.cr6.gt) goto loc_821645A0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26344(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26344);
loc_82164580:
	// li r5,168
	ctx.r5.s64 = 168;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216458C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82164590;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26344, ctx.r3.u32);
	// bne 0x82164580
	if (!ctx.cr0.eq) goto loc_82164580;
loc_821645A0:
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

PPC_WEAK_FUNC(sub_82164558) {
	__imp__sub_82164558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821645B8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,27384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27384);
	// bl 0x821778d8
	ctx.lr = 0x821645D8;
	sub_821778D8(ctx, base);
	// lwz r11,27384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27384);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x821645EC;
	sub_82152400(ctx, base);
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

PPC_WEAK_FUNC(sub_821645B8) {
	__imp__sub_821645B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164600) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164600) {
	__imp__sub_82164600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82164610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,27384(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27384);
	// bl 0x821778d8
	ctx.lr = 0x82164628;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,27384(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27384);
	// ble cr6,0x82164668
	if (!ctx.cr6.gt) goto loc_82164668;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82164638:
	// stw r31,27384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27384, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216464C;
	sub_821778D8(ctx, base);
	// lwz r11,27384(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27384);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216465C;
	sub_82152400(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82164638
	if (!ctx.cr0.eq) goto loc_82164638;
loc_82164668:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164608) {
	__imp__sub_82164608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82164678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821646c4
	if (!ctx.cr6.gt) goto loc_821646C4;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27384(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27384);
loc_82164694:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821646A0;
	sub_821778D8(ctx, base);
	// lwz r11,27384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27384);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x821646B0;
	sub_82152400(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821646B4;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27384, ctx.r3.u32);
	// bne 0x82164694
	if (!ctx.cr0.eq) goto loc_82164694;
loc_821646C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164670) {
	__imp__sub_82164670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821646CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821646CC) {
	__imp__sub_821646CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821646D0) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r4,27508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27508);
	// bl 0x821778d8
	ctx.lr = 0x821646F4;
	sub_821778D8(ctx, base);
	// lwz r11,27508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27508);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82164740
	if (ctx.cr6.eq) goto loc_82164740;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82164710;
	sub_82177868(ctx, base);
	// lwz r11,27508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27508);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27508);
	// lwz r10,25464(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25464);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,28484(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28484, ctx.r4.u32);
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mulli r5,r8,44
	ctx.r5.s64 = ctx.r8.s64 * 44;
	// bl 0x821778d8
	ctx.lr = 0x8216473C;
	sub_821778D8(ctx, base);
	// lwz r11,27508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27508);
loc_82164740:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28364, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82164758;
	sub_821778D8(ctx, base);
	// lwz r11,25464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25464);
	// lwz r10,27508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27508);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mulli r5,r9,44
	ctx.r5.s64 = ctx.r9.s64 * 44;
	// bl 0x823b08b8
	ctx.lr = 0x82164774;
	sub_823B08B8(ctx, base);
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

PPC_WEAK_FUNC(sub_821646D0) {
	__imp__sub_821646D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216478C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216478C) {
	__imp__sub_8216478C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164790) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164790) {
	__imp__sub_82164790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821647A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27508(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27508);
	// bl 0x821778d8
	ctx.lr = 0x821647C0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27508(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27508);
	// ble cr6,0x821647e4
	if (!ctx.cr6.gt) goto loc_821647E4;
loc_821647CC:
	// stw r30,27508(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27508, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821646d0
	ctx.lr = 0x821647D8;
	sub_821646D0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x821647cc
	if (!ctx.cr0.eq) goto loc_821647CC;
loc_821647E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164798) {
	__imp__sub_82164798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821647EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821647EC) {
	__imp__sub_821647EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821647F0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216482c
	if (!ctx.cr6.gt) goto loc_8216482C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82164814:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821646d0
	ctx.lr = 0x8216481C;
	sub_821646D0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82164820;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27508, ctx.r3.u32);
	// bne 0x82164814
	if (!ctx.cr0.eq) goto loc_82164814;
loc_8216482C:
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

PPC_WEAK_FUNC(sub_821647F0) {
	__imp__sub_821647F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82164844) {
	__imp__sub_82164844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164848) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r4,28416(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28416);
	// bl 0x821778d8
	ctx.lr = 0x8216486C;
	sub_821778D8(ctx, base);
	// lwz r11,28416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28416);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821648b4
	if (ctx.cr6.eq) goto loc_821648B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82164888;
	sub_82177868(ctx, base);
	// lwz r11,28416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28416);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28416);
	// lwz r10,25464(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25464);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26260, ctx.r4.u32);
	// lwz r5,80(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// bl 0x821778d8
	ctx.lr = 0x821648B0;
	sub_821778D8(ctx, base);
	// lwz r11,28416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28416);
loc_821648B4:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28364, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821648CC;
	sub_821778D8(ctx, base);
	// lwz r11,25464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25464);
	// lwz r10,28416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28416);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x823b08b8
	ctx.lr = 0x821648E4;
	sub_823B08B8(ctx, base);
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

PPC_WEAK_FUNC(sub_82164848) {
	__imp__sub_82164848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821648FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821648FC) {
	__imp__sub_821648FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164900) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164900) {
	__imp__sub_82164900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82164910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28416(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28416);
	// bl 0x821778d8
	ctx.lr = 0x82164930;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28416(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28416);
	// ble cr6,0x82164954
	if (!ctx.cr6.gt) goto loc_82164954;
loc_8216493C:
	// stw r30,28416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28416, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82164848
	ctx.lr = 0x82164948;
	sub_82164848(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x8216493c
	if (!ctx.cr0.eq) goto loc_8216493C;
loc_82164954:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164908) {
	__imp__sub_82164908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216495C) {
	__imp__sub_8216495C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164960) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216499c
	if (!ctx.cr6.gt) goto loc_8216499C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82164984:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82164848
	ctx.lr = 0x8216498C;
	sub_82164848(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82164990;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28416, ctx.r3.u32);
	// bne 0x82164984
	if (!ctx.cr0.eq) goto loc_82164984;
loc_8216499C:
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

PPC_WEAK_FUNC(sub_82164960) {
	__imp__sub_82164960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821649B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821649B4) {
	__imp__sub_821649B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821649B8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r4,26976(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
	// bl 0x821778d8
	ctx.lr = 0x821649D8;
	sub_821778D8(ctx, base);
	// lwz r11,26976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82164a40
	if (ctx.cr6.eq) goto loc_82164A40;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x821649F0;
	sub_82177868(ctx, base);
	// lwz r11,26976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,26976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r4,25460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25460, ctx.r4.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// lhzx r9,r5,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x82164A3C;
	sub_821778D8(ctx, base);
	// lwz r11,26976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
loc_82164A40:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82164a80
	if (ctx.cr6.eq) goto loc_82164A80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82164A54;
	sub_82177868(ctx, base);
	// lwz r11,26976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,26976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r4,26260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26260, ctx.r4.u32);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821778d8
	ctx.lr = 0x82164A7C;
	sub_821778D8(ctx, base);
	// lwz r11,26976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
loc_82164A80:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82164ac4
	if (ctx.cr6.eq) goto loc_82164AC4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82164A94;
	sub_82177868(ctx, base);
	// lwz r11,26976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,26976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r4,26156(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26156, ctx.r4.u32);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82164AC0;
	sub_821778D8(ctx, base);
	// lwz r11,26976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
loc_82164AC4:
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82164b04
	if (ctx.cr6.eq) goto loc_82164B04;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82164AD8;
	sub_82177868(ctx, base);
	// lwz r11,26976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,26976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26976);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r4,26344(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26344, ctx.r4.u32);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mulli r5,r8,168
	ctx.r5.s64 = ctx.r8.s64 * 168;
	// bl 0x821778d8
	ctx.lr = 0x82164B04;
	sub_821778D8(ctx, base);
loc_82164B04:
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

PPC_WEAK_FUNC(sub_821649B8) {
	__imp__sub_821649B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164B18) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164B18) {
	__imp__sub_82164B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82164B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,56
	ctx.r5.s64 = ctx.r4.s64 * 56;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26976(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26976);
	// bl 0x821778d8
	ctx.lr = 0x82164B40;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26976(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26976);
	// ble cr6,0x82164b64
	if (!ctx.cr6.gt) goto loc_82164B64;
loc_82164B4C:
	// stw r30,26976(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26976, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821649b8
	ctx.lr = 0x82164B58;
	sub_821649B8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// bne 0x82164b4c
	if (!ctx.cr0.eq) goto loc_82164B4C;
loc_82164B64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164B20) {
	__imp__sub_82164B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82164B6C) {
	__imp__sub_82164B6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164B70) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82164bac
	if (!ctx.cr6.gt) goto loc_82164BAC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82164B94:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821649b8
	ctx.lr = 0x82164B9C;
	sub_821649B8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82164BA0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26976(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26976, ctx.r3.u32);
	// bne 0x82164b94
	if (!ctx.cr0.eq) goto loc_82164B94;
loc_82164BAC:
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

PPC_WEAK_FUNC(sub_82164B70) {
	__imp__sub_82164B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82164BC4) {
	__imp__sub_82164BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,27808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27808);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164BC8) {
	__imp__sub_82164BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164BD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164BD8) {
	__imp__sub_82164BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164BE0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,27808(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27808);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164BE0) {
	__imp__sub_82164BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164BF8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82164c40
	if (!ctx.cr6.gt) goto loc_82164C40;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27808(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27808);
loc_82164C20:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82164C2C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82164C30;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27808(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27808, ctx.r3.u32);
	// bne 0x82164c20
	if (!ctx.cr0.eq) goto loc_82164C20;
loc_82164C40:
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

PPC_WEAK_FUNC(sub_82164BF8) {
	__imp__sub_82164BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25684(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25684);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164C58) {
	__imp__sub_82164C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164C68) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164C68) {
	__imp__sub_82164C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25684(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25684);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164C70) {
	__imp__sub_82164C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164C80) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82164cc8
	if (!ctx.cr6.gt) goto loc_82164CC8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25684(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25684);
loc_82164CA8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82164CB4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82164CB8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25684, ctx.r3.u32);
	// bne 0x82164ca8
	if (!ctx.cr0.eq) goto loc_82164CA8;
loc_82164CC8:
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

PPC_WEAK_FUNC(sub_82164C80) {
	__imp__sub_82164C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,27452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27452);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164CE0) {
	__imp__sub_82164CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164CF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164CF0) {
	__imp__sub_82164CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,27452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27452);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164CF8) {
	__imp__sub_82164CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164D08) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82164d50
	if (!ctx.cr6.gt) goto loc_82164D50;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27452(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27452);
loc_82164D30:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82164D3C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82164D40;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27452, ctx.r3.u32);
	// bne 0x82164d30
	if (!ctx.cr0.eq) goto loc_82164D30;
loc_82164D50:
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

PPC_WEAK_FUNC(sub_82164D08) {
	__imp__sub_82164D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164D68) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,26592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26592);
	// bl 0x821778d8
	ctx.lr = 0x82164D8C;
	sub_821778D8(ctx, base);
	// lwz r11,26592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26592);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82164dd4
	if (ctx.cr6.eq) goto loc_82164DD4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82164DA8;
	sub_82177868(ctx, base);
	// lwz r11,26592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26592);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26592);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,25460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25460, ctx.r4.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// bl 0x821778d8
	ctx.lr = 0x82164DD0;
	sub_821778D8(ctx, base);
	// lwz r11,26592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26592);
loc_82164DD4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82164e10
	if (ctx.cr6.eq) goto loc_82164E10;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82164DE8;
	sub_82177868(ctx, base);
	// lwz r11,26592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26592);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,26592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26592);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,25460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25460, ctx.r4.u32);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// bl 0x821778d8
	ctx.lr = 0x82164E10;
	sub_821778D8(ctx, base);
loc_82164E10:
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

PPC_WEAK_FUNC(sub_82164D68) {
	__imp__sub_82164D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164E28) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164E28) {
	__imp__sub_82164E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82164E38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26592(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26592);
	// bl 0x821778d8
	ctx.lr = 0x82164E58;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26592(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26592);
	// ble cr6,0x82164e7c
	if (!ctx.cr6.gt) goto loc_82164E7C;
loc_82164E64:
	// stw r30,26592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26592, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82164d68
	ctx.lr = 0x82164E70;
	sub_82164D68(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82164e64
	if (!ctx.cr0.eq) goto loc_82164E64;
loc_82164E7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164E30) {
	__imp__sub_82164E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82164E84) {
	__imp__sub_82164E84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164E88) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82164ec4
	if (!ctx.cr6.gt) goto loc_82164EC4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82164EAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82164d68
	ctx.lr = 0x82164EB4;
	sub_82164D68(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82164EB8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26592, ctx.r3.u32);
	// bne 0x82164eac
	if (!ctx.cr0.eq) goto loc_82164EAC;
loc_82164EC4:
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

PPC_WEAK_FUNC(sub_82164E88) {
	__imp__sub_82164E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82164EDC) {
	__imp__sub_82164EDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r4,27848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27848);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164EE0) {
	__imp__sub_82164EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164EF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164EF0) {
	__imp__sub_82164EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164EF8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27848(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27848);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164EF8) {
	__imp__sub_82164EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164F10) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82164f58
	if (!ctx.cr6.gt) goto loc_82164F58;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27848(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27848);
loc_82164F38:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82164F44;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82164F48;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27848, ctx.r3.u32);
	// bne 0x82164f38
	if (!ctx.cr0.eq) goto loc_82164F38;
loc_82164F58:
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

PPC_WEAK_FUNC(sub_82164F10) {
	__imp__sub_82164F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164F70) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,80
	ctx.r5.s64 = 80;
	// lwz r4,25548(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// bl 0x821778d8
	ctx.lr = 0x82164F90;
	sub_821778D8(ctx, base);
	// lwz r11,25548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82164fdc
	if (ctx.cr6.eq) goto loc_82164FDC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82164FA8;
	sub_82177868(ctx, base);
	// lwz r11,25548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,25548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r4,27848(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27848, ctx.r4.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82164FDC;
	sub_821778D8(ctx, base);
loc_82164FDC:
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

PPC_WEAK_FUNC(sub_82164F70) {
	__imp__sub_82164F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164FF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164FF0) {
	__imp__sub_82164FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82164FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82165000;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,25548(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// bl 0x821778d8
	ctx.lr = 0x82165020;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,25548(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// ble cr6,0x82165098
	if (!ctx.cr6.gt) goto loc_82165098;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82165030:
	// stw r29,25548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25548, ctx.r29.u32);
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82165044;
	sub_821778D8(ctx, base);
	// lwz r11,25548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216508c
	if (ctx.cr6.eq) goto loc_8216508C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216505C;
	sub_82177868(ctx, base);
	// lwz r11,25548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,25548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r4,27848(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27848, ctx.r4.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8216508C;
	sub_821778D8(ctx, base);
loc_8216508C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// bne 0x82165030
	if (!ctx.cr0.eq) goto loc_82165030;
loc_82165098:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82164FF8) {
	__imp__sub_82164FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821650A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821650A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216512c
	if (!ctx.cr6.gt) goto loc_8216512C;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,25548(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
loc_821650C4:
	// li r5,80
	ctx.r5.s64 = 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821650D0;
	sub_821778D8(ctx, base);
	// lwz r11,25548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165118
	if (ctx.cr6.eq) goto loc_82165118;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821650E8;
	sub_82177868(ctx, base);
	// lwz r11,25548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,25548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r4,27848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27848, ctx.r4.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82165118;
	sub_821778D8(ctx, base);
loc_82165118:
	// bl 0x82177858
	ctx.lr = 0x8216511C;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25548, ctx.r3.u32);
	// bne 0x821650c4
	if (!ctx.cr0.eq) goto loc_821650C4;
loc_8216512C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821650A0) {
	__imp__sub_821650A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82165134) {
	__imp__sub_82165134(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165138) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,26556(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// bl 0x821778d8
	ctx.lr = 0x82165158;
	sub_821778D8(ctx, base);
	// lwz r11,26556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165198
	if (ctx.cr6.eq) goto loc_82165198;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165170;
	sub_82177868(ctx, base);
	// lwz r11,26556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,25548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25548, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82164ff8
	ctx.lr = 0x82165198;
	sub_82164FF8(ctx, base);
loc_82165198:
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

PPC_WEAK_FUNC(sub_82165138) {
	__imp__sub_82165138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821651AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821651AC) {
	__imp__sub_821651AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821651B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821651B0) {
	__imp__sub_821651B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821651B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821651C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,26556(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// bl 0x821778d8
	ctx.lr = 0x821651D8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,26556(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// ble cr6,0x82165244
	if (!ctx.cr6.gt) goto loc_82165244;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_821651E8:
	// stw r29,26556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26556, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821651FC;
	sub_821778D8(ctx, base);
	// lwz r11,26556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165238
	if (ctx.cr6.eq) goto loc_82165238;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165214;
	sub_82177868(ctx, base);
	// lwz r11,26556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,25548(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25548, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82164ff8
	ctx.lr = 0x82165238;
	sub_82164FF8(ctx, base);
loc_82165238:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x821651e8
	if (!ctx.cr0.eq) goto loc_821651E8;
loc_82165244:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821651B8) {
	__imp__sub_821651B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216524C) {
	__imp__sub_8216524C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82165258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821652d0
	if (!ctx.cr6.gt) goto loc_821652D0;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,26556(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
loc_82165274:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82165280;
	sub_821778D8(ctx, base);
	// lwz r11,26556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821652bc
	if (ctx.cr6.eq) goto loc_821652BC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165298;
	sub_82177868(ctx, base);
	// lwz r11,26556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26556);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,25548(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25548, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82164ff8
	ctx.lr = 0x821652BC;
	sub_82164FF8(ctx, base);
loc_821652BC:
	// bl 0x82177858
	ctx.lr = 0x821652C0;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26556, ctx.r3.u32);
	// bne 0x82165274
	if (!ctx.cr0.eq) goto loc_82165274;
loc_821652D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82165250) {
	__imp__sub_82165250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821652D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821652E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r4,28260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// bl 0x821778d8
	ctx.lr = 0x821652F4;
	sub_821778D8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x821652FC;
	sub_82177758(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165350
	if (ctx.cr6.eq) goto loc_82165350;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216531C;
	sub_82177868(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r10,25232(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25232);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r4,27008(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27008, ctx.r4.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82165350;
	sub_821778D8(ctx, base);
loc_82165350:
	// bl 0x821777e0
	ctx.lr = 0x82165354;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216535C;
	sub_82177758(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821653a8
	if (ctx.cr6.eq) goto loc_821653A8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165374;
	sub_82177868(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r10,25232(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25232);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r4,27008(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27008, ctx.r4.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x821653A8;
	sub_821778D8(ctx, base);
loc_821653A8:
	// bl 0x821777e0
	ctx.lr = 0x821653AC;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x821653B4;
	sub_82177758(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821653f8
	if (ctx.cr6.eq) goto loc_821653F8;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x821653D0;
	sub_82177868(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r4,27936(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27936, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821778d8
	ctx.lr = 0x821653F8;
	sub_821778D8(ctx, base);
loc_821653F8:
	// bl 0x821777e0
	ctx.lr = 0x821653FC;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82165404;
	sub_82177758(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165444
	if (ctx.cr6.eq) goto loc_82165444;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x8216541C;
	sub_82177868(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r4,27936(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27936, ctx.r4.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821778d8
	ctx.lr = 0x82165444;
	sub_821778D8(ctx, base);
loc_82165444:
	// bl 0x821777e0
	ctx.lr = 0x82165448;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82165450;
	sub_82177758(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165490
	if (ctx.cr6.eq) goto loc_82165490;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x82165468;
	sub_82177868(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r4,27936(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27936, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821778d8
	ctx.lr = 0x82165490;
	sub_821778D8(ctx, base);
loc_82165490:
	// bl 0x821777e0
	ctx.lr = 0x82165494;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216549C;
	sub_82177758(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821654dc
	if (ctx.cr6.eq) goto loc_821654DC;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x821654B4;
	sub_82177868(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r4,27936(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27936, ctx.r4.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821778d8
	ctx.lr = 0x821654DC;
	sub_821778D8(ctx, base);
loc_821654DC:
	// bl 0x821777e0
	ctx.lr = 0x821654E0;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x821654E8;
	sub_82177758(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165528
	if (ctx.cr6.eq) goto loc_82165528;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x82165500;
	sub_82177868(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r4,27936(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27936, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821778d8
	ctx.lr = 0x82165528;
	sub_821778D8(ctx, base);
loc_82165528:
	// bl 0x821777e0
	ctx.lr = 0x8216552C;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82165534;
	sub_82177758(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165574
	if (ctx.cr6.eq) goto loc_82165574;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x8216554C;
	sub_82177868(ctx, base);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,28260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28260);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r4,27936(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27936, ctx.r4.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821778d8
	ctx.lr = 0x82165574;
	sub_821778D8(ctx, base);
loc_82165574:
	// bl 0x821777e0
	ctx.lr = 0x82165578;
	sub_821777E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821652D8) {
	__imp__sub_821652D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165580) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82165580) {
	__imp__sub_82165580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82165590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,28260(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28260);
	// bl 0x821778d8
	ctx.lr = 0x821655B0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28260(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28260);
	// ble cr6,0x821655d4
	if (!ctx.cr6.gt) goto loc_821655D4;
loc_821655BC:
	// stw r30,28260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28260, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821652d8
	ctx.lr = 0x821655C8;
	sub_821652D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x821655bc
	if (!ctx.cr0.eq) goto loc_821655BC;
loc_821655D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82165588) {
	__imp__sub_82165588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821655DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821655DC) {
	__imp__sub_821655DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821655E0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216561c
	if (!ctx.cr6.gt) goto loc_8216561C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82165604:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821652d8
	ctx.lr = 0x8216560C;
	sub_821652D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82165610;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28260, ctx.r3.u32);
	// bne 0x82165604
	if (!ctx.cr0.eq) goto loc_82165604;
loc_8216561C:
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

PPC_WEAK_FUNC(sub_821655E0) {
	__imp__sub_821655E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82165634) {
	__imp__sub_82165634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165638) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,104
	ctx.r5.s64 = 104;
	// lwz r4,28572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// bl 0x821778d8
	ctx.lr = 0x8216565C;
	sub_821778D8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82165664;
	sub_82177758(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821656a4
	if (ctx.cr6.eq) goto loc_821656A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82165680;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r4,27856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27856, ctx.r4.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821778d8
	ctx.lr = 0x821656A4;
	sub_821778D8(ctx, base);
loc_821656A4:
	// bl 0x821777e0
	ctx.lr = 0x821656A8;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x821656B0;
	sub_82177758(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821656ec
	if (ctx.cr6.eq) goto loc_821656EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821656C8;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r4,27856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27856, ctx.r4.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821778d8
	ctx.lr = 0x821656EC;
	sub_821778D8(ctx, base);
loc_821656EC:
	// bl 0x821777e0
	ctx.lr = 0x821656F0;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x821656F8;
	sub_82177758(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165734
	if (ctx.cr6.eq) goto loc_82165734;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82165710;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r4,27856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27856, ctx.r4.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821778d8
	ctx.lr = 0x82165734;
	sub_821778D8(ctx, base);
loc_82165734:
	// bl 0x821777e0
	ctx.lr = 0x82165738;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82165740;
	sub_82177758(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216577c
	if (ctx.cr6.eq) goto loc_8216577C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82165758;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r4,27856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27856, ctx.r4.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821778d8
	ctx.lr = 0x8216577C;
	sub_821778D8(ctx, base);
loc_8216577C:
	// bl 0x821777e0
	ctx.lr = 0x82165780;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82165788;
	sub_82177758(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821657c4
	if (ctx.cr6.eq) goto loc_821657C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821657A0;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r4,27856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27856, ctx.r4.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821778d8
	ctx.lr = 0x821657C4;
	sub_821778D8(ctx, base);
loc_821657C4:
	// bl 0x821777e0
	ctx.lr = 0x821657C8;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x821657D0;
	sub_82177758(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216580c
	if (ctx.cr6.eq) goto loc_8216580C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821657E8;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r4,27856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27856, ctx.r4.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821778d8
	ctx.lr = 0x8216580C;
	sub_821778D8(ctx, base);
loc_8216580C:
	// bl 0x821777e0
	ctx.lr = 0x82165810;
	sub_821777E0(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165858
	if (ctx.cr6.eq) goto loc_82165858;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82165828;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r4,25460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25460, ctx.r4.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x82165854;
	sub_821778D8(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
loc_82165858:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821658a4
	if (ctx.cr6.eq) goto loc_821658A4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216586C;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r4,28204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28204, ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x821658A0;
	sub_821778D8(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
loc_821658A4:
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821658ec
	if (ctx.cr6.eq) goto loc_821658EC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821658BC;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r10,25232(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25232);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,27876(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27876, ctx.r11.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82153b48
	ctx.lr = 0x821658E8;
	sub_82153B48(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
loc_821658EC:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165934
	if (ctx.cr6.eq) goto loc_82165934;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165900;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r10,25232(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25232);
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r4,25176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25176, ctx.r4.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r5,r8,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821778d8
	ctx.lr = 0x82165930;
	sub_821778D8(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
loc_82165934:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165970
	if (ctx.cr6.eq) goto loc_82165970;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165948;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,27564(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27564, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82163778
	ctx.lr = 0x82165970;
	sub_82163778(ctx, base);
loc_82165970:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82165978;
	sub_82177758(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821659c0
	if (ctx.cr6.eq) goto loc_821659C0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82177868
	ctx.lr = 0x82165990;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r10,25232(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25232);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r4,27452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27452, ctx.r4.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821778d8
	ctx.lr = 0x821659C0;
	sub_821778D8(ctx, base);
loc_821659C0:
	// bl 0x821777e0
	ctx.lr = 0x821659C4;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x821659CC;
	sub_82177758(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165a10
	if (ctx.cr6.eq) goto loc_82165A10;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x82177868
	ctx.lr = 0x821659E4;
	sub_82177868(ctx, base);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,28572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28572);
	// lwz r4,96(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r4,27436(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27436, ctx.r4.u32);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82165A10;
	sub_821778D8(ctx, base);
loc_82165A10:
	// bl 0x821777e0
	ctx.lr = 0x82165A14;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82165638) {
	__imp__sub_82165638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82165A2C) {
	__imp__sub_82165A2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165A30) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82165A30) {
	__imp__sub_82165A30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82165A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,104
	ctx.r5.s64 = ctx.r4.s64 * 104;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28572(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28572);
	// bl 0x821778d8
	ctx.lr = 0x82165A58;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28572(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28572);
	// ble cr6,0x82165a7c
	if (!ctx.cr6.gt) goto loc_82165A7C;
loc_82165A64:
	// stw r30,28572(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28572, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82165638
	ctx.lr = 0x82165A70;
	sub_82165638(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,104
	ctx.r30.s64 = ctx.r30.s64 + 104;
	// bne 0x82165a64
	if (!ctx.cr0.eq) goto loc_82165A64;
loc_82165A7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82165A38) {
	__imp__sub_82165A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82165A84) {
	__imp__sub_82165A84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165A88) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82165ac4
	if (!ctx.cr6.gt) goto loc_82165AC4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82165AAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82165638
	ctx.lr = 0x82165AB4;
	sub_82165638(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82165AB8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28572(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28572, ctx.r3.u32);
	// bne 0x82165aac
	if (!ctx.cr0.eq) goto loc_82165AAC;
loc_82165AC4:
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

PPC_WEAK_FUNC(sub_82165A88) {
	__imp__sub_82165A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82165ADC) {
	__imp__sub_82165ADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165AE0) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,27088(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27088);
	// bl 0x821778d8
	ctx.lr = 0x82165B04;
	sub_821778D8(ctx, base);
	// lwz r11,27088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27088);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165b6c
	if (ctx.cr6.eq) goto loc_82165B6C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82165b68
	if (!ctx.cr6.eq) goto loc_82165B68;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165B2C;
	sub_82177868(ctx, base);
	// lwz r11,27088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27088);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27088);
	// lwz r10,25232(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25232);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,26424(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26424, ctx.r4.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82165B64;
	sub_821778D8(ctx, base);
	// b 0x82165b6c
	goto loc_82165B6C;
loc_82165B68:
	// bl 0x82177978
	ctx.lr = 0x82165B6C;
	sub_82177978(ctx, base);
loc_82165B6C:
	// lwz r11,27088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27088);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165bb4
	if (ctx.cr6.eq) goto loc_82165BB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82165B84;
	sub_82177868(ctx, base);
	// lwz r11,27088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27088);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,27088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27088);
	// lwz r10,25232(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25232);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,25460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25460, ctx.r4.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x82165BB4;
	sub_821778D8(ctx, base);
loc_82165BB4:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82165BBC;
	sub_82177758(ctx, base);
	// lwz r11,27088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27088);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165c00
	if (ctx.cr6.eq) goto loc_82165C00;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165BD4;
	sub_82177868(ctx, base);
	// lwz r11,27088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27088);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,27088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27088);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,27008(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27008, ctx.r4.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r8,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0xFFFFF800;
	// bl 0x821778d8
	ctx.lr = 0x82165C00;
	sub_821778D8(ctx, base);
loc_82165C00:
	// bl 0x821777e0
	ctx.lr = 0x82165C04;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82165AE0) {
	__imp__sub_82165AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82165C1C) {
	__imp__sub_82165C1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165C20) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82165C20) {
	__imp__sub_82165C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82165C30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27088(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27088);
	// bl 0x821778d8
	ctx.lr = 0x82165C48;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27088(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27088);
	// ble cr6,0x82165c6c
	if (!ctx.cr6.gt) goto loc_82165C6C;
loc_82165C54:
	// stw r30,27088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27088, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82165ae0
	ctx.lr = 0x82165C60;
	sub_82165AE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82165c54
	if (!ctx.cr0.eq) goto loc_82165C54;
loc_82165C6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82165C28) {
	__imp__sub_82165C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82165C74) {
	__imp__sub_82165C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165C78) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82165cb4
	if (!ctx.cr6.gt) goto loc_82165CB4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82165C9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82165ae0
	ctx.lr = 0x82165CA4;
	sub_82165AE0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82165CA8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27088, ctx.r3.u32);
	// bne 0x82165c9c
	if (!ctx.cr0.eq) goto loc_82165C9C;
loc_82165CB4:
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

PPC_WEAK_FUNC(sub_82165C78) {
	__imp__sub_82165C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82165CCC) {
	__imp__sub_82165CCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165CD0) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,26672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
	// bl 0x821778d8
	ctx.lr = 0x82165CF0;
	sub_821778D8(ctx, base);
	// lwz r11,26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165d38
	if (ctx.cr6.eq) goto loc_82165D38;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165D08;
	sub_82177868(ctx, base);
	// lwz r11,26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,27108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27108, ctx.r4.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82165D34;
	sub_821778D8(ctx, base);
	// lwz r11,26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
loc_82165D38:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x82165D4C;
	sub_8214F968(ctx, base);
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

PPC_WEAK_FUNC(sub_82165CD0) {
	__imp__sub_82165CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165D60) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82165D60) {
	__imp__sub_82165D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82165D70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,26672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
	// bl 0x821778d8
	ctx.lr = 0x82165D88;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r30,26672(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
	// ble cr6,0x82165e10
	if (!ctx.cr6.gt) goto loc_82165E10;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82165D9C:
	// stw r30,26672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26672, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82165DB0;
	sub_821778D8(ctx, base);
	// lwz r11,26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165df4
	if (ctx.cr6.eq) goto loc_82165DF4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165DC8;
	sub_82177868(ctx, base);
	// lwz r11,26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,27108(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27108, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82165DF0;
	sub_821778D8(ctx, base);
	// lwz r11,26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
loc_82165DF4:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x82165E04;
	sub_8214F968(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82165d9c
	if (!ctx.cr0.eq) goto loc_82165D9C;
loc_82165E10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82165D68) {
	__imp__sub_82165D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82165E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82165eb4
	if (!ctx.cr6.gt) goto loc_82165EB4;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,26672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
loc_82165E40:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82165E4C;
	sub_821778D8(ctx, base);
	// lwz r11,26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165e90
	if (ctx.cr6.eq) goto loc_82165E90;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165E64;
	sub_82177868(ctx, base);
	// lwz r11,26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,27108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27108, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82165E8C;
	sub_821778D8(ctx, base);
	// lwz r11,26672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26672);
loc_82165E90:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x82165EA0;
	sub_8214F968(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82165EA4;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26672, ctx.r3.u32);
	// bne 0x82165e40
	if (!ctx.cr0.eq) goto loc_82165E40;
loc_82165EB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82165E18) {
	__imp__sub_82165E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82165EBC) {
	__imp__sub_82165EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82165EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82165EC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,160
	ctx.r5.s64 = 160;
	// lwz r4,25464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// bl 0x821778d8
	ctx.lr = 0x82165EDC;
	sub_821778D8(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82165f20
	if (ctx.cr6.eq) goto loc_82165F20;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165EF8;
	sub_82177868(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,28624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28624, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8214fa40
	ctx.lr = 0x82165F1C;
	sub_8214FA40(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
loc_82165F20:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165f68
	if (ctx.cr6.eq) goto loc_82165F68;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165F34;
	sub_82177868(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,28200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28200, ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82165F68;
	sub_821778D8(ctx, base);
loc_82165F68:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82165F70;
	sub_82177758(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165fb4
	if (ctx.cr6.eq) goto loc_82165FB4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165F8C;
	sub_82177868(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,26828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26828, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r5,r9,52
	ctx.r5.s64 = ctx.r9.s64 * 52;
	// bl 0x821778d8
	ctx.lr = 0x82165FB4;
	sub_821778D8(ctx, base);
loc_82165FB4:
	// bl 0x821777e0
	ctx.lr = 0x82165FB8;
	sub_821777E0(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82165ff8
	if (ctx.cr6.eq) goto loc_82165FF8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82165FD0;
	sub_82177868(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,25040(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25040, ctx.r10.u32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82153c90
	ctx.lr = 0x82165FF8;
	sub_82153C90(ctx, base);
loc_82165FF8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82166000;
	sub_82177758(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166040
	if (ctx.cr6.eq) goto loc_82166040;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82166018;
	sub_82177868(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r4,26828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26828, ctx.r4.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mulli r5,r9,52
	ctx.r5.s64 = ctx.r9.s64 * 52;
	// bl 0x821778d8
	ctx.lr = 0x82166040;
	sub_821778D8(ctx, base);
loc_82166040:
	// bl 0x821777e0
	ctx.lr = 0x82166044;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216604C;
	sub_82177758(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216608c
	if (ctx.cr6.eq) goto loc_8216608C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82166064;
	sub_82177868(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r4,26828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26828, ctx.r4.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mulli r5,r9,52
	ctx.r5.s64 = ctx.r9.s64 * 52;
	// bl 0x821778d8
	ctx.lr = 0x8216608C;
	sub_821778D8(ctx, base);
loc_8216608C:
	// bl 0x821777e0
	ctx.lr = 0x82166090;
	sub_821777E0(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,28624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x821660A4;
	sub_8214F968(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r11,28624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x821660B8;
	sub_8214F968(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27508, ctx.r11.u32);
	// bl 0x821646d0
	ctx.lr = 0x821660D0;
	sub_821646D0(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28416(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28416, ctx.r11.u32);
	// bl 0x82164848
	ctx.lr = 0x821660E8;
	sub_82164848(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lwz r8,124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82166130
	if (ctx.cr6.eq) goto loc_82166130;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82166100;
	sub_82177868(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// stw r4,28160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28160, ctx.r4.u32);
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x8216612C;
	sub_821778D8(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
loc_82166130:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27944, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82166148;
	sub_821778D8(ctx, base);
	// lwz r11,25464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25464);
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// lwz r5,120(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x823b09f0
	ctx.lr = 0x8216615C;
	sub_823B09F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82165EC0) {
	__imp__sub_82165EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166164) {
	__imp__sub_82166164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166168) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166168) {
	__imp__sub_82166168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82166178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,25464(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25464);
	// bl 0x821778d8
	ctx.lr = 0x82166198;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25464(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25464);
	// ble cr6,0x821661bc
	if (!ctx.cr6.gt) goto loc_821661BC;
loc_821661A4:
	// stw r30,25464(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25464, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82165ec0
	ctx.lr = 0x821661B0;
	sub_82165EC0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bne 0x821661a4
	if (!ctx.cr0.eq) goto loc_821661A4;
loc_821661BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166170) {
	__imp__sub_82166170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821661C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821661C4) {
	__imp__sub_821661C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821661C8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82166204
	if (!ctx.cr6.gt) goto loc_82166204;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821661EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82165ec0
	ctx.lr = 0x821661F4;
	sub_82165EC0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821661F8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25464, ctx.r3.u32);
	// bne 0x821661ec
	if (!ctx.cr0.eq) goto loc_821661EC;
loc_82166204:
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

PPC_WEAK_FUNC(sub_821661C8) {
	__imp__sub_821661C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216621C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216621C) {
	__imp__sub_8216621C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166220) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166220) {
	__imp__sub_82166220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166228) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166228) {
	__imp__sub_82166228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166230) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166230) {
	__imp__sub_82166230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166238) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166238) {
	__imp__sub_82166238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166240) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166240) {
	__imp__sub_82166240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166248) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166248) {
	__imp__sub_82166248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166250) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166250) {
	__imp__sub_82166250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166258) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166258) {
	__imp__sub_82166258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166260) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166260) {
	__imp__sub_82166260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166268) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166268) {
	__imp__sub_82166268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166270) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166270) {
	__imp__sub_82166270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166278) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166278) {
	__imp__sub_82166278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166280) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166280) {
	__imp__sub_82166280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166288) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166288) {
	__imp__sub_82166288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166290) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166290) {
	__imp__sub_82166290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166298) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166298) {
	__imp__sub_82166298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821662A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821662A0) {
	__imp__sub_821662A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821662A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821662A8) {
	__imp__sub_821662A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821662B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821662B0) {
	__imp__sub_821662B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821662B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821662B8) {
	__imp__sub_821662B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821662C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821662C0) {
	__imp__sub_821662C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821662C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821662C8) {
	__imp__sub_821662C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821662D0) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,25472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25472);
	// stw r11,28604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x821662F0;
	sub_82152EC8(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r3,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_821662D0) {
	__imp__sub_821662D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82166310;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,25472(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25472);
	// ble cr6,0x82166354
	if (!ctx.cr6.gt) goto loc_82166354;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_82166330:
	// stw r31,25472(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25472, ctx.r31.u32);
	// stw r31,28604(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28604, ctx.r31.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216633C;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166360
	if (ctx.cr6.eq) goto loc_82166360;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82166330
	if (ctx.cr6.lt) goto loc_82166330;
loc_82166354:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82166360:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166308) {
	__imp__sub_82166308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216636C) {
	__imp__sub_8216636C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166370) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166370) {
	__imp__sub_82166370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166378) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166378) {
	__imp__sub_82166378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166380) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166380) {
	__imp__sub_82166380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166388) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166388) {
	__imp__sub_82166388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166390) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166390) {
	__imp__sub_82166390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166398) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166398) {
	__imp__sub_82166398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821663A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821663A0) {
	__imp__sub_821663A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821663A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821663A8) {
	__imp__sub_821663A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821663B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821663B0) {
	__imp__sub_821663B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821663B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821663B8) {
	__imp__sub_821663B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821663C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821663C0) {
	__imp__sub_821663C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821663C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821663C8) {
	__imp__sub_821663C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821663D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821663D0) {
	__imp__sub_821663D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821663D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821663D8) {
	__imp__sub_821663D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821663E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821663E0) {
	__imp__sub_821663E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821663E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821663E8) {
	__imp__sub_821663E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821663F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821663F0) {
	__imp__sub_821663F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821663F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821663F8) {
	__imp__sub_821663F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166400) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166400) {
	__imp__sub_82166400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166408) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166408) {
	__imp__sub_82166408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166410) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166410) {
	__imp__sub_82166410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166418) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166418) {
	__imp__sub_82166418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166420) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r11,26036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26036);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82166480
	if (ctx.cr6.eq) goto loc_82166480;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r11,25972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25972, ctx.r11.u32);
	// lwz r11,26436(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26436);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82153de0
	ctx.lr = 0x82166460;
	sub_82153DE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216647c
	if (!ctx.cr6.eq) goto loc_8216647C;
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
loc_8216647C:
	// lwz r11,26036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26036);
loc_82166480:
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821664ac
	if (ctx.cr6.eq) goto loc_821664AC;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,27412(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27412, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82163918
	ctx.lr = 0x821664A0;
	sub_82163918(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x821664b0
	if (ctx.cr6.eq) goto loc_821664B0;
loc_821664AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821664B0:
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

PPC_WEAK_FUNC(sub_82166420) {
	__imp__sub_82166420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821664C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821664C4) {
	__imp__sub_821664C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821664C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821664D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,26036(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26036);
	// ble cr6,0x8216650c
	if (!ctx.cr6.gt) goto loc_8216650C;
loc_821664EC:
	// stw r31,26036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26036, ctx.r31.u32);
	// bl 0x82166420
	ctx.lr = 0x821664F4;
	sub_82166420(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166518
	if (ctx.cr6.eq) goto loc_82166518;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821664ec
	if (ctx.cr6.lt) goto loc_821664EC;
loc_8216650C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82166518:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821664C8) {
	__imp__sub_821664C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166524) {
	__imp__sub_82166524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166528) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166528) {
	__imp__sub_82166528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166530) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166530) {
	__imp__sub_82166530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166538) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27116);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,27756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27756, ctx.r11.u32);
	// bl 0x8214fb88
	ctx.lr = 0x8216655C;
	sub_8214FB88(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r3,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82166538) {
	__imp__sub_82166538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166574) {
	__imp__sub_82166574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82166580;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27116(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27116);
	// ble cr6,0x821665f8
	if (!ctx.cr6.gt) goto loc_821665F8;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
loc_821665A4:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,27116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27116, ctx.r31.u32);
	// stw r11,27756(r26)
	PPC_STORE_U32(ctx.r26.u32 + 27756, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821665e8
	if (ctx.cr6.eq) goto loc_821665E8;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25740(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25740, ctx.r3.u32);
	// bl 0x82175518
	ctx.lr = 0x821665CC;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821665e8
	if (!ctx.cr6.eq) goto loc_821665E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25740(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25740);
	// bl 0x82175518
	ctx.lr = 0x821665E0;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166604
	if (ctx.cr6.eq) goto loc_82166604;
loc_821665E8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x821665a4
	if (ctx.cr6.lt) goto loc_821665A4;
loc_821665F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82166604:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166578) {
	__imp__sub_82166578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166610) {
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
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r11,25348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25348);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82166660
	if (ctx.cr6.eq) goto loc_82166660;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,27756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27756, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8214fbf8
	ctx.lr = 0x8216664C;
	sub_8214FBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216665c
	if (!ctx.cr6.eq) goto loc_8216665C;
loc_82166654:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821666b8
	goto loc_821666B8;
loc_8216665C:
	// lwz r11,25348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25348);
loc_82166660:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216668c
	if (ctx.cr6.eq) goto loc_8216668C;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,27168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27168, ctx.r10.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82153ea8
	ctx.lr = 0x82166680;
	sub_82153EA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166654
	if (ctx.cr6.eq) goto loc_82166654;
	// lwz r11,25348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25348);
loc_8216668C:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,27756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27756, ctx.r11.u32);
	// bl 0x8214fb88
	ctx.lr = 0x82166698;
	sub_8214FB88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166654
	if (ctx.cr6.eq) goto loc_82166654;
	// lwz r11,25348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25348);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r11,27756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27756, ctx.r11.u32);
	// bl 0x8214fb88
	ctx.lr = 0x821666B0;
	sub_8214FB88(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821666B8:
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

PPC_WEAK_FUNC(sub_82166610) {
	__imp__sub_82166610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821666D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821666D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,25348(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25348);
	// ble cr6,0x82166714
	if (!ctx.cr6.gt) goto loc_82166714;
loc_821666F4:
	// stw r31,25348(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25348, ctx.r31.u32);
	// bl 0x82166610
	ctx.lr = 0x821666FC;
	sub_82166610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166720
	if (ctx.cr6.eq) goto loc_82166720;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,160
	ctx.r31.s64 = ctx.r31.s64 + 160;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821666f4
	if (ctx.cr6.lt) goto loc_821666F4;
loc_82166714:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82166720:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821666D0) {
	__imp__sub_821666D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216672C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216672C) {
	__imp__sub_8216672C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166730) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r11,26436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26436);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216678c
	if (ctx.cr6.eq) goto loc_8216678C;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,27116(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27116, ctx.r10.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82166578
	ctx.lr = 0x82166768;
	sub_82166578(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82166788
	if (!ctx.cr6.eq) goto loc_82166788;
loc_82166770:
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
loc_82166788:
	// lwz r11,26436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26436);
loc_8216678C:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r11,25348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25348, ctx.r11.u32);
	// bl 0x82166610
	ctx.lr = 0x8216679C;
	sub_82166610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166770
	if (ctx.cr6.eq) goto loc_82166770;
	// lwz r11,26436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26436);
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821667d4
	if (ctx.cr6.eq) goto loc_821667D4;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,25472(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25472, ctx.r10.u32);
	// lwz r3,332(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x82166308
	ctx.lr = 0x821667C8;
	sub_82166308(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166770
	if (ctx.cr6.eq) goto loc_82166770;
	// lwz r11,26436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26436);
loc_821667D4:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 + 340;
	// stw r11,27724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27724, ctx.r11.u32);
	// bl 0x82163b00
	ctx.lr = 0x821667E4;
	sub_82163B00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166770
	if (ctx.cr6.eq) goto loc_82166770;
	// lwz r11,26436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26436);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,500
	ctx.r11.s64 = ctx.r11.s64 + 500;
	// stw r11,27756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27756, ctx.r11.u32);
	// bl 0x8214fb88
	ctx.lr = 0x82166800;
	sub_8214FB88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166770
	if (ctx.cr6.eq) goto loc_82166770;
	// lwz r11,26436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26436);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,544
	ctx.r11.s64 = ctx.r11.s64 + 544;
	// stw r11,26036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26036, ctx.r11.u32);
	// bl 0x82166420
	ctx.lr = 0x8216681C;
	sub_82166420(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r3,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82166730) {
	__imp__sub_82166730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82166840;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,26436(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26436);
	// ble cr6,0x8216687c
	if (!ctx.cr6.gt) goto loc_8216687C;
loc_8216685C:
	// stw r31,26436(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26436, ctx.r31.u32);
	// bl 0x82166730
	ctx.lr = 0x82166864;
	sub_82166730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166888
	if (ctx.cr6.eq) goto loc_82166888;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,712
	ctx.r31.s64 = ctx.r31.s64 + 712;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216685c
	if (ctx.cr6.lt) goto loc_8216685C;
loc_8216687C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82166888:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166838) {
	__imp__sub_82166838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166894) {
	__imp__sub_82166894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166898) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,27148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27148);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82166910
	if (ctx.cr6.eq) goto loc_82166910;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26436, ctx.r3.u32);
	// bl 0x82175b10
	ctx.lr = 0x821668D0;
	sub_82175B10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82166910
	if (!ctx.cr6.eq) goto loc_82166910;
	// bl 0x82166730
	ctx.lr = 0x821668DC;
	sub_82166730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821668f8
	if (!ctx.cr6.eq) goto loc_821668F8;
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
loc_821668F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26436);
	// bl 0x82175b10
	ctx.lr = 0x82166904;
	sub_82175B10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82166914
	if (ctx.cr6.eq) goto loc_82166914;
loc_82166910:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82166914:
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

PPC_WEAK_FUNC(sub_82166898) {
	__imp__sub_82166898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82166930;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27148(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27148);
	// ble cr6,0x8216696c
	if (!ctx.cr6.gt) goto loc_8216696C;
loc_8216694C:
	// stw r31,27148(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27148, ctx.r31.u32);
	// bl 0x82166898
	ctx.lr = 0x82166954;
	sub_82166898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166978
	if (ctx.cr6.eq) goto loc_82166978;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216694c
	if (ctx.cr6.lt) goto loc_8216694C;
loc_8216696C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82166978:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166928) {
	__imp__sub_82166928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166984) {
	__imp__sub_82166984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r4,25992(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25992);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166988) {
	__imp__sub_82166988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166998) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166998) {
	__imp__sub_82166998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821669A0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,25992(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25992);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821669A0) {
	__imp__sub_821669A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821669B8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82166a00
	if (!ctx.cr6.gt) goto loc_82166A00;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25992(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25992);
loc_821669E0:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821669EC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821669F0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25992(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25992, ctx.r3.u32);
	// bne 0x821669e0
	if (!ctx.cr0.eq) goto loc_821669E0;
loc_82166A00:
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

PPC_WEAK_FUNC(sub_821669B8) {
	__imp__sub_821669B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166A18) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r4,25652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25652);
	// bl 0x821778d8
	ctx.lr = 0x82166A3C;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82166A44;
	sub_82177758(ctx, base);
	// lwz r11,25652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25652);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82166A58;
	sub_82147188(ctx, base);
	// lwz r11,25652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25652);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82166A70;
	sub_82152400(ctx, base);
	// lwz r11,25652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25652);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,25372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82166A84;
	sub_82152400(ctx, base);
	// lwz r11,25652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25652);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82166ae4
	if (ctx.cr6.eq) goto loc_82166AE4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82166ae0
	if (!ctx.cr6.eq) goto loc_82166AE0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82166AA8;
	sub_82177868(ctx, base);
	// lwz r11,25652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25652);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,25652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25652);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r4,25992(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25992, ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821778d8
	ctx.lr = 0x82166ADC;
	sub_821778D8(ctx, base);
	// b 0x82166ae4
	goto loc_82166AE4;
loc_82166AE0:
	// bl 0x82177978
	ctx.lr = 0x82166AE4;
	sub_82177978(ctx, base);
loc_82166AE4:
	// bl 0x821777e0
	ctx.lr = 0x82166AE8;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82166A18) {
	__imp__sub_82166A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166B00) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166B00) {
	__imp__sub_82166B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82166B10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,25652(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25652);
	// bl 0x821778d8
	ctx.lr = 0x82166B30;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25652(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25652);
	// ble cr6,0x82166b54
	if (!ctx.cr6.gt) goto loc_82166B54;
loc_82166B3C:
	// stw r30,25652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25652, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82166a18
	ctx.lr = 0x82166B48;
	sub_82166A18(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x82166b3c
	if (!ctx.cr0.eq) goto loc_82166B3C;
loc_82166B54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166B08) {
	__imp__sub_82166B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166B5C) {
	__imp__sub_82166B5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166B60) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82166b9c
	if (!ctx.cr6.gt) goto loc_82166B9C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82166B84:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82166a18
	ctx.lr = 0x82166B8C;
	sub_82166A18(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82166B90;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25652, ctx.r3.u32);
	// bne 0x82166b84
	if (!ctx.cr0.eq) goto loc_82166B84;
loc_82166B9C:
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

PPC_WEAK_FUNC(sub_82166B60) {
	__imp__sub_82166B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166BB4) {
	__imp__sub_82166BB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166BB8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26628(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26628);
	// bl 0x821778d8
	ctx.lr = 0x82166BDC;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x82166BE4;
	sub_82177758(ctx, base);
	// lwz r3,26628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26628);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82166c68
	if (ctx.cr6.eq) goto loc_82166C68;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82166c0c
	if (ctx.cr6.eq) goto loc_82166C0C;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82166c0c
	if (ctx.cr6.eq) goto loc_82166C0C;
	// bl 0x82177950
	ctx.lr = 0x82166C08;
	sub_82177950(ctx, base);
	// b 0x82166c68
	goto loc_82166C68;
loc_82166C0C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82166C14;
	sub_82177868(ctx, base);
	// lwz r11,26628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26628);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,26628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26628);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25652, ctx.r11.u32);
	// bne cr6,0x82166c40
	if (!ctx.cr6.eq) goto loc_82166C40;
	// bl 0x82177898
	ctx.lr = 0x82166C38;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82166c44
	goto loc_82166C44;
loc_82166C40:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82166C44:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82166a18
	ctx.lr = 0x82166C4C;
	sub_82166A18(ctx, base);
	// lwz r3,26628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26628);
	// bl 0x82175bb0
	ctx.lr = 0x82166C54;
	sub_82175BB0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82166c68
	if (ctx.cr6.eq) goto loc_82166C68;
	// lwz r11,26628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26628);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82166C68:
	// bl 0x821777e0
	ctx.lr = 0x82166C6C;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82166BB8) {
	__imp__sub_82166BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166C84) {
	__imp__sub_82166C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166C88) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166C88) {
	__imp__sub_82166C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82166C98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26628(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26628);
	// bl 0x821778d8
	ctx.lr = 0x82166CB0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26628(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26628);
	// ble cr6,0x82166cd4
	if (!ctx.cr6.gt) goto loc_82166CD4;
loc_82166CBC:
	// stw r30,26628(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26628, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82166bb8
	ctx.lr = 0x82166CC8;
	sub_82166BB8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82166cbc
	if (!ctx.cr0.eq) goto loc_82166CBC;
loc_82166CD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166C90) {
	__imp__sub_82166C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166CDC) {
	__imp__sub_82166CDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166CE0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82166d1c
	if (!ctx.cr6.gt) goto loc_82166D1C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82166D04:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82166bb8
	ctx.lr = 0x82166D0C;
	sub_82166BB8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82166D10;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26628, ctx.r3.u32);
	// bne 0x82166d04
	if (!ctx.cr0.eq) goto loc_82166D04;
loc_82166D1C:
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

PPC_WEAK_FUNC(sub_82166CE0) {
	__imp__sub_82166CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166D34) {
	__imp__sub_82166D34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166D38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166D38) {
	__imp__sub_82166D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166D40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166D40) {
	__imp__sub_82166D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166D48) {
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
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r11,26644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26644);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,28604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82166D74;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166d94
	if (ctx.cr6.eq) goto loc_82166D94;
	// lwz r11,26644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26644);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,28604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82166D8C;
	sub_82152EC8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82166D94:
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

PPC_WEAK_FUNC(sub_82166D48) {
	__imp__sub_82166D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166DAC) {
	__imp__sub_82166DAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82166DB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,26644(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26644);
	// ble cr6,0x82166e18
	if (!ctx.cr6.gt) goto loc_82166E18;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82166DD8:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r31,26644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26644, ctx.r31.u32);
	// stw r11,28604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82166DE8;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166e24
	if (ctx.cr6.eq) goto loc_82166E24;
	// lwz r11,26644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26644);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,28604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82166E00;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166e24
	if (ctx.cr6.eq) goto loc_82166E24;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82166dd8
	if (ctx.cr6.lt) goto loc_82166DD8;
loc_82166E18:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82166E24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166DB0) {
	__imp__sub_82166DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166E30) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,25084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25084);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82166ea8
	if (ctx.cr6.eq) goto loc_82166EA8;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26644, ctx.r3.u32);
	// bl 0x82175c30
	ctx.lr = 0x82166E68;
	sub_82175C30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82166ea8
	if (!ctx.cr6.eq) goto loc_82166EA8;
	// bl 0x82166d48
	ctx.lr = 0x82166E74;
	sub_82166D48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82166e90
	if (!ctx.cr6.eq) goto loc_82166E90;
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
loc_82166E90:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26644);
	// bl 0x82175c30
	ctx.lr = 0x82166E9C;
	sub_82175C30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82166eac
	if (ctx.cr6.eq) goto loc_82166EAC;
loc_82166EA8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82166EAC:
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

PPC_WEAK_FUNC(sub_82166E30) {
	__imp__sub_82166E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82166EC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,25084(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25084);
	// ble cr6,0x82166f04
	if (!ctx.cr6.gt) goto loc_82166F04;
loc_82166EE4:
	// stw r31,25084(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25084, ctx.r31.u32);
	// bl 0x82166e30
	ctx.lr = 0x82166EEC;
	sub_82166E30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82166f10
	if (ctx.cr6.eq) goto loc_82166F10;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82166ee4
	if (ctx.cr6.lt) goto loc_82166EE4;
loc_82166F04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82166F10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166EC0) {
	__imp__sub_82166EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166F1C) {
	__imp__sub_82166F1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166F20) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166F20) {
	__imp__sub_82166F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25576(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25576);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166F28) {
	__imp__sub_82166F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166F38) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166F38) {
	__imp__sub_82166F38(ctx, base);
}

