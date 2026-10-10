#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82166F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25576(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25576);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166F40) {
	__imp__sub_82166F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166F50) {
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
	// ble cr6,0x82166f98
	if (!ctx.cr6.gt) goto loc_82166F98;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25576(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25576);
loc_82166F78:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82166F84;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82166F88;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25576, ctx.r3.u32);
	// bne 0x82166f78
	if (!ctx.cr0.eq) goto loc_82166F78;
loc_82166F98:
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

PPC_WEAK_FUNC(sub_82166F50) {
	__imp__sub_82166F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166FB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166FB0) {
	__imp__sub_82166FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166FB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166FB8) {
	__imp__sub_82166FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166FC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166FC0) {
	__imp__sub_82166FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166FC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82166FC8) {
	__imp__sub_82166FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// stw r3,28076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28076, ctx.r3.u32);
	// b 0x8214da98
	sub_8214DA98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82166FD0) {
	__imp__sub_82166FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82166FDC) {
	__imp__sub_82166FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82166FE0) {
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
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,28476(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28476);
	// bl 0x821778d8
	ctx.lr = 0x82167000;
	sub_821778D8(ctx, base);
	// lwz r11,28476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28476);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216703c
	if (ctx.cr6.eq) goto loc_8216703C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82167018;
	sub_82177868(ctx, base);
	// lwz r11,28476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28476);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28476);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25416, ctx.r11.u32);
	// bl 0x82148ff0
	ctx.lr = 0x82167038;
	sub_82148FF0(ctx, base);
	// lwz r11,28476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28476);
loc_8216703C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82167078
	if (ctx.cr6.eq) goto loc_82167078;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82167050;
	sub_82177868(ctx, base);
	// lwz r11,28476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28476);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28476);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,27272(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27272, ctx.r11.u32);
	// bl 0x82148180
	ctx.lr = 0x82167074;
	sub_82148180(ctx, base);
	// lwz r11,28476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28476);
loc_82167078:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821670b0
	if (ctx.cr6.eq) goto loc_821670B0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216708C;
	sub_82177868(ctx, base);
	// lwz r11,28476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28476);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28476);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,25056(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25056, ctx.r11.u32);
	// bl 0x82148710
	ctx.lr = 0x821670B0;
	sub_82148710(ctx, base);
loc_821670B0:
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

PPC_WEAK_FUNC(sub_82166FE0) {
	__imp__sub_82166FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821670C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821670C4) {
	__imp__sub_821670C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821670C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821670D0;
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
	// lwz r4,28476(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28476);
	// bl 0x821778d8
	ctx.lr = 0x821670F0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28476(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28476);
	// ble cr6,0x82167114
	if (!ctx.cr6.gt) goto loc_82167114;
loc_821670FC:
	// stw r30,28476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28476, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82166fe0
	ctx.lr = 0x82167108;
	sub_82166FE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x821670fc
	if (!ctx.cr0.eq) goto loc_821670FC;
loc_82167114:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821670C8) {
	__imp__sub_821670C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216711C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216711C) {
	__imp__sub_8216711C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167120) {
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
	// ble cr6,0x8216715c
	if (!ctx.cr6.gt) goto loc_8216715C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82167144:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82166fe0
	ctx.lr = 0x8216714C;
	sub_82166FE0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82167150;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28476, ctx.r3.u32);
	// bne 0x82167144
	if (!ctx.cr0.eq) goto loc_82167144;
loc_8216715C:
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

PPC_WEAK_FUNC(sub_82167120) {
	__imp__sub_82167120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167174) {
	__imp__sub_82167174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82167180;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,88
	ctx.r5.s64 = 88;
	// lwz r4,28580(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// bl 0x821778d8
	ctx.lr = 0x82167194;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8216719C;
	sub_82177758(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821671B0;
	sub_82147188(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821671f4
	if (ctx.cr6.eq) goto loc_821671F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x821671C8;
	sub_82177868(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,28440(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28440, ctx.r10.u32);
	// lbz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// bl 0x82146e80
	ctx.lr = 0x821671F0;
	sub_82146E80(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
loc_821671F4:
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82167234
	if (ctx.cr6.eq) goto loc_82167234;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82167208;
	sub_82177868(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,27200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27200, ctx.r10.u32);
	// lbz r4,29(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// bl 0x82149278
	ctx.lr = 0x82167230;
	sub_82149278(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
loc_82167234:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82167270
	if (ctx.cr6.eq) goto loc_82167270;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82167248;
	sub_82177868(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r11,28476(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28476, ctx.r11.u32);
	// bl 0x82166fe0
	ctx.lr = 0x8216726C;
	sub_82166FE0(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
loc_82167270:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821672b0
	if (ctx.cr6.eq) goto loc_821672B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82167288;
	sub_82177868(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r4,26260(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26260, ctx.r4.u32);
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x821778d8
	ctx.lr = 0x821672AC;
	sub_821778D8(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
loc_821672B0:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821672f4
	if (ctx.cr6.eq) goto loc_821672F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x821672C8;
	sub_82177868(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r4,28596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28596, ctx.r4.u32);
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// bl 0x821778d8
	ctx.lr = 0x821672F0;
	sub_821778D8(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
loc_821672F4:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82167338
	if (ctx.cr6.eq) goto loc_82167338;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216730C;
	sub_82177868(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r4,27108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27108, ctx.r4.u32);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x821778d8
	ctx.lr = 0x82167334;
	sub_821778D8(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
loc_82167338:
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82167378
	if (ctx.cr6.eq) goto loc_82167378;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x8216734C;
	sub_82177868(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r4,28596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28596, ctx.r4.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x82167374;
	sub_821778D8(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
loc_82167378:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821673b4
	if (ctx.cr6.eq) goto loc_821673B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8216738C;
	sub_82177868(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r4,26260(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26260, ctx.r4.u32);
	// lhz r5,10(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// bl 0x821778d8
	ctx.lr = 0x821673B0;
	sub_821778D8(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
loc_821673B4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821673f4
	if (ctx.cr6.eq) goto loc_821673F4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821673C8;
	sub_82177868(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r4,27108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27108, ctx.r4.u32);
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x821778d8
	ctx.lr = 0x821673F0;
	sub_821778D8(ctx, base);
	// lwz r11,28580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28580);
loc_821673F4:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25856, ctx.r11.u32);
	// bl 0x82147c38
	ctx.lr = 0x82167408;
	sub_82147C38(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8216740C;
	sub_821777E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82167178) {
	__imp__sub_82167178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167414) {
	__imp__sub_82167414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82167420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,88
	ctx.r5.s64 = ctx.r4.s64 * 88;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28580(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28580);
	// bl 0x821778d8
	ctx.lr = 0x82167438;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28580(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28580);
	// ble cr6,0x8216745c
	if (!ctx.cr6.gt) goto loc_8216745C;
loc_82167444:
	// stw r30,28580(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28580, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82167178
	ctx.lr = 0x82167450;
	sub_82167178(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// bne 0x82167444
	if (!ctx.cr0.eq) goto loc_82167444;
loc_8216745C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82167418) {
	__imp__sub_82167418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167464) {
	__imp__sub_82167464(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167468) {
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
	// ble cr6,0x821674a4
	if (!ctx.cr6.gt) goto loc_821674A4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216748C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82167178
	ctx.lr = 0x82167494;
	sub_82167178(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82167498;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28580, ctx.r3.u32);
	// bne 0x8216748c
	if (!ctx.cr0.eq) goto loc_8216748C;
loc_821674A4:
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

PPC_WEAK_FUNC(sub_82167468) {
	__imp__sub_82167468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821674BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821674BC) {
	__imp__sub_821674BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821674C0) {
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
	// lwz r4,26704(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26704);
	// bl 0x821778d8
	ctx.lr = 0x821674E4;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x821674EC;
	sub_82177758(ctx, base);
	// lwz r3,26704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26704);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82167570
	if (ctx.cr6.eq) goto loc_82167570;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82167514
	if (ctx.cr6.eq) goto loc_82167514;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82167514
	if (ctx.cr6.eq) goto loc_82167514;
	// bl 0x82177950
	ctx.lr = 0x82167510;
	sub_82177950(ctx, base);
	// b 0x82167570
	goto loc_82167570;
loc_82167514:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216751C;
	sub_82177868(ctx, base);
	// lwz r11,26704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26704);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,26704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26704);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28580, ctx.r11.u32);
	// bne cr6,0x82167548
	if (!ctx.cr6.eq) goto loc_82167548;
	// bl 0x82177898
	ctx.lr = 0x82167540;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8216754c
	goto loc_8216754C;
loc_82167548:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8216754C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82167178
	ctx.lr = 0x82167554;
	sub_82167178(ctx, base);
	// lwz r3,26704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26704);
	// bl 0x82175070
	ctx.lr = 0x8216755C;
	sub_82175070(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82167570
	if (ctx.cr6.eq) goto loc_82167570;
	// lwz r11,26704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26704);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82167570:
	// bl 0x821777e0
	ctx.lr = 0x82167574;
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

PPC_WEAK_FUNC(sub_821674C0) {
	__imp__sub_821674C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216758C) {
	__imp__sub_8216758C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82167598;
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
	// lwz r4,26704(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26704);
	// bl 0x821778d8
	ctx.lr = 0x821675B0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26704(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26704);
	// ble cr6,0x821675d4
	if (!ctx.cr6.gt) goto loc_821675D4;
loc_821675BC:
	// stw r30,26704(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26704, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821674c0
	ctx.lr = 0x821675C8;
	sub_821674C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821675bc
	if (!ctx.cr0.eq) goto loc_821675BC;
loc_821675D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82167590) {
	__imp__sub_82167590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821675DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821675DC) {
	__imp__sub_821675DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821675E0) {
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
	// ble cr6,0x8216761c
	if (!ctx.cr6.gt) goto loc_8216761C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82167604:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821674c0
	ctx.lr = 0x8216760C;
	sub_821674C0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82167610;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26704, ctx.r3.u32);
	// bne 0x82167604
	if (!ctx.cr0.eq) goto loc_82167604;
loc_8216761C:
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

PPC_WEAK_FUNC(sub_821675E0) {
	__imp__sub_821675E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167634) {
	__imp__sub_82167634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167638) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28468);
	// stw r11,28076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x82167658;
	sub_8214DA98(ctx, base);
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

PPC_WEAK_FUNC(sub_82167638) {
	__imp__sub_82167638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216766C) {
	__imp__sub_8216766C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82167678;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,28468(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28468);
	// ble cr6,0x821676ac
	if (!ctx.cr6.gt) goto loc_821676AC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82167694:
	// stw r31,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r31.u32);
	// stw r31,28076(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28076, ctx.r31.u32);
	// bl 0x8214da98
	ctx.lr = 0x821676A0;
	sub_8214DA98(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82167694
	if (!ctx.cr0.eq) goto loc_82167694;
loc_821676AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82167670) {
	__imp__sub_82167670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821676B8) {
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
	// lwz r4,25920(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
	// bl 0x821778d8
	ctx.lr = 0x821676D8;
	sub_821778D8(ctx, base);
	// lwz r3,25920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167730
	if (ctx.cr6.eq) goto loc_82167730;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216772c
	if (!ctx.cr6.eq) goto loc_8216772C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821676F8;
	sub_82177868(ctx, base);
	// lwz r11,25920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27652, ctx.r11.u32);
	// bl 0x82167a40
	ctx.lr = 0x82167718;
	sub_82167A40(ctx, base);
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
loc_8216772C:
	// bl 0x82177978
	ctx.lr = 0x82167730;
	sub_82177978(ctx, base);
loc_82167730:
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

PPC_WEAK_FUNC(sub_821676B8) {
	__imp__sub_821676B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167744) {
	__imp__sub_82167744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82167750;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,25920(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
	// bl 0x821778d8
	ctx.lr = 0x82167768;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,25920(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
	// ble cr6,0x821677dc
	if (!ctx.cr6.gt) goto loc_821677DC;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82167778:
	// stw r29,25920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25920, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216778C;
	sub_821778D8(ctx, base);
	// lwz r3,25920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821677d0
	if (ctx.cr6.eq) goto loc_821677D0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821677cc
	if (!ctx.cr6.eq) goto loc_821677CC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821677AC;
	sub_82177868(ctx, base);
	// lwz r11,25920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27652(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27652, ctx.r11.u32);
	// bl 0x82167a40
	ctx.lr = 0x821677C8;
	sub_82167A40(ctx, base);
	// b 0x821677d0
	goto loc_821677D0;
loc_821677CC:
	// bl 0x82177978
	ctx.lr = 0x821677D0;
	sub_82177978(ctx, base);
loc_821677D0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82167778
	if (!ctx.cr0.eq) goto loc_82167778;
loc_821677DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82167748) {
	__imp__sub_82167748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821677E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821677E4) {
	__imp__sub_821677E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821677E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821677F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82167870
	if (!ctx.cr6.gt) goto loc_82167870;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25920(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
loc_8216780C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82167818;
	sub_821778D8(ctx, base);
	// lwz r3,25920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216785c
	if (ctx.cr6.eq) goto loc_8216785C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82167858
	if (!ctx.cr6.eq) goto loc_82167858;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82167838;
	sub_82177868(ctx, base);
	// lwz r11,25920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25920);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27652, ctx.r11.u32);
	// bl 0x82167a40
	ctx.lr = 0x82167854;
	sub_82167A40(ctx, base);
	// b 0x8216785c
	goto loc_8216785C;
loc_82167858:
	// bl 0x82177978
	ctx.lr = 0x8216785C;
	sub_82177978(ctx, base);
loc_8216785C:
	// bl 0x82177858
	ctx.lr = 0x82167860;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25920, ctx.r3.u32);
	// bne 0x8216780c
	if (!ctx.cr0.eq) goto loc_8216780C;
loc_82167870:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821677E8) {
	__imp__sub_821677E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,27652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27652);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,27676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27676);
	// blt cr6,0x821678a4
	if (ctx.cr6.lt) goto loc_821678A4;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,25920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25920, ctx.r11.u32);
	// b 0x82167748
	sub_82167748(ctx, base);
	return;
loc_821678A4:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r11,28028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28028, ctx.r11.u32);
	// b 0x82156848
	sub_82156848(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82167878) {
	__imp__sub_82167878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821678B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821678B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,27676(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27676);
	// bl 0x821778d8
	ctx.lr = 0x821678D0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,27676(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27676);
	// ble cr6,0x82167974
	if (!ctx.cr6.gt) goto loc_82167974;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_821678F0:
	// lwz r11,27652(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27652);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,27676(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27676, ctx.r31.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82167918
	if (ctx.cr6.lt) goto loc_82167918;
	// stw r31,25920(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25920, ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82167748
	ctx.lr = 0x82167914;
	sub_82167748(ctx, base);
	// b 0x82167968
	goto loc_82167968;
loc_82167918:
	// stw r31,28028(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28028, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821778d8
	ctx.lr = 0x82167928;
	sub_821778D8(ctx, base);
	// lwz r11,28028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28028);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167968
	if (ctx.cr6.eq) goto loc_82167968;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82167940;
	sub_82177868(ctx, base);
	// lwz r11,28028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28028);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28028);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,25460(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25460, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x82167968;
	sub_821778D8(ctx, base);
loc_82167968:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x821678f0
	if (!ctx.cr0.eq) goto loc_821678F0;
loc_82167974:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821678B0) {
	__imp__sub_821678B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216797C) {
	__imp__sub_8216797C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82167988;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82167a38
	if (!ctx.cr6.gt) goto loc_82167A38;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lwz r3,27676(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27676);
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_821679B0:
	// lwz r11,27652(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27652);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821679d4
	if (ctx.cr6.lt) goto loc_821679D4;
	// stw r3,25920(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25920, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82167748
	ctx.lr = 0x821679D0;
	sub_82167748(ctx, base);
	// b 0x82167a28
	goto loc_82167A28;
loc_821679D4:
	// stw r3,28028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28028, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821679E8;
	sub_821778D8(ctx, base);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167a28
	if (ctx.cr6.eq) goto loc_82167A28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82167A00;
	sub_82177868(ctx, base);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,25460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25460, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x82167A28;
	sub_821778D8(ctx, base);
loc_82167A28:
	// bl 0x82177858
	ctx.lr = 0x82167A2C;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r3,27676(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27676, ctx.r3.u32);
	// bne 0x821679b0
	if (!ctx.cr0.eq) goto loc_821679B0;
loc_82167A38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82167980) {
	__imp__sub_82167980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167A40) {
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
	// lwz r4,27652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27652);
	// bl 0x821778d8
	ctx.lr = 0x82167A60;
	sub_821778D8(ctx, base);
	// lwz r11,27652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27652);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,27676(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27676, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x82167aa4
	if (ctx.cr6.lt) goto loc_82167AA4;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,25920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25920, ctx.r10.u32);
	// bl 0x82167748
	ctx.lr = 0x82167A90;
	sub_82167748(ctx, base);
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
loc_82167AA4:
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// stw r10,28028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28028, ctx.r10.u32);
	// bl 0x82156848
	ctx.lr = 0x82167AB0;
	sub_82156848(ctx, base);
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

PPC_WEAK_FUNC(sub_82167A40) {
	__imp__sub_82167A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167AC4) {
	__imp__sub_82167AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82167AD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27652(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27652);
	// bl 0x821778d8
	ctx.lr = 0x82167AE8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27652(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27652);
	// ble cr6,0x82167ba4
	if (!ctx.cr6.gt) goto loc_82167BA4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82167B08:
	// stw r30,27652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27652, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82167B1C;
	sub_821778D8(ctx, base);
	// lwz r10,27652(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27652);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// stw r11,27676(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27676, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82167b48
	if (ctx.cr6.lt) goto loc_82167B48;
	// stw r11,25920(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25920, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82167748
	ctx.lr = 0x82167B44;
	sub_82167748(ctx, base);
	// b 0x82167b98
	goto loc_82167B98;
loc_82167B48:
	// stw r11,28028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28028, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x821778d8
	ctx.lr = 0x82167B58;
	sub_821778D8(ctx, base);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167b98
	if (ctx.cr6.eq) goto loc_82167B98;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82167B70;
	sub_82177868(ctx, base);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,25460(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25460, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x82167B98;
	sub_821778D8(ctx, base);
loc_82167B98:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82167b08
	if (!ctx.cr0.eq) goto loc_82167B08;
loc_82167BA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82167AC8) {
	__imp__sub_82167AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167BAC) {
	__imp__sub_82167BAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82167BB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82167c7c
	if (!ctx.cr6.gt) goto loc_82167C7C;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lwz r4,27652(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27652);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82167BE0:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82167BEC;
	sub_821778D8(ctx, base);
	// lwz r10,27652(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27652);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// stw r11,27676(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27676, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82167c18
	if (ctx.cr6.lt) goto loc_82167C18;
	// stw r11,25920(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25920, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82167748
	ctx.lr = 0x82167C14;
	sub_82167748(ctx, base);
	// b 0x82167c68
	goto loc_82167C68;
loc_82167C18:
	// stw r11,28028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28028, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x821778d8
	ctx.lr = 0x82167C28;
	sub_821778D8(ctx, base);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167c68
	if (ctx.cr6.eq) goto loc_82167C68;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82167C40;
	sub_82177868(ctx, base);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,25460(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25460, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x82167C68;
	sub_821778D8(ctx, base);
loc_82167C68:
	// bl 0x82177858
	ctx.lr = 0x82167C6C;
	sub_82177858(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27652, ctx.r3.u32);
	// bne 0x82167be0
	if (!ctx.cr0.eq) goto loc_82167BE0;
loc_82167C7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82167BB0) {
	__imp__sub_82167BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167C84) {
	__imp__sub_82167C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167C88) {
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
	// lwz r4,27556(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
	// bl 0x821778d8
	ctx.lr = 0x82167CA8;
	sub_821778D8(ctx, base);
	// lwz r3,27556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167d00
	if (ctx.cr6.eq) goto loc_82167D00;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82167cfc
	if (!ctx.cr6.eq) goto loc_82167CFC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82167CC8;
	sub_82177868(ctx, base);
	// lwz r11,27556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28060, ctx.r11.u32);
	// bl 0x82167e48
	ctx.lr = 0x82167CE8;
	sub_82167E48(ctx, base);
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
loc_82167CFC:
	// bl 0x82177978
	ctx.lr = 0x82167D00;
	sub_82177978(ctx, base);
loc_82167D00:
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

PPC_WEAK_FUNC(sub_82167C88) {
	__imp__sub_82167C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167D14) {
	__imp__sub_82167D14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82167D20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,27556(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
	// bl 0x821778d8
	ctx.lr = 0x82167D38;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,27556(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
	// ble cr6,0x82167dac
	if (!ctx.cr6.gt) goto loc_82167DAC;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82167D48:
	// stw r29,27556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27556, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82167D5C;
	sub_821778D8(ctx, base);
	// lwz r3,27556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167da0
	if (ctx.cr6.eq) goto loc_82167DA0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82167d9c
	if (!ctx.cr6.eq) goto loc_82167D9C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82167D7C;
	sub_82177868(ctx, base);
	// lwz r11,27556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28060(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28060, ctx.r11.u32);
	// bl 0x82167e48
	ctx.lr = 0x82167D98;
	sub_82167E48(ctx, base);
	// b 0x82167da0
	goto loc_82167DA0;
loc_82167D9C:
	// bl 0x82177978
	ctx.lr = 0x82167DA0;
	sub_82177978(ctx, base);
loc_82167DA0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82167d48
	if (!ctx.cr0.eq) goto loc_82167D48;
loc_82167DAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82167D18) {
	__imp__sub_82167D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167DB4) {
	__imp__sub_82167DB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82167DC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82167e40
	if (!ctx.cr6.gt) goto loc_82167E40;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27556(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
loc_82167DDC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82167DE8;
	sub_821778D8(ctx, base);
	// lwz r3,27556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167e2c
	if (ctx.cr6.eq) goto loc_82167E2C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82167e28
	if (!ctx.cr6.eq) goto loc_82167E28;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82167E08;
	sub_82177868(ctx, base);
	// lwz r11,27556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27556);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28060(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28060, ctx.r11.u32);
	// bl 0x82167e48
	ctx.lr = 0x82167E24;
	sub_82167E48(ctx, base);
	// b 0x82167e2c
	goto loc_82167E2C;
loc_82167E28:
	// bl 0x82177978
	ctx.lr = 0x82167E2C;
	sub_82177978(ctx, base);
loc_82167E2C:
	// bl 0x82177858
	ctx.lr = 0x82167E30;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27556, ctx.r3.u32);
	// bne 0x82167ddc
	if (!ctx.cr0.eq) goto loc_82167DDC;
loc_82167E40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82167DB8) {
	__imp__sub_82167DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167E48) {
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
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r4,28060(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28060);
	// bl 0x821778d8
	ctx.lr = 0x82167E6C;
	sub_821778D8(ctx, base);
	// lwz r11,28060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28060);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82167E80;
	sub_82147188(ctx, base);
	// lwz r11,28060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28060);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82167ec4
	if (ctx.cr6.eq) goto loc_82167EC4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82167E98;
	sub_82177868(ctx, base);
	// lwz r11,28060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28060);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,26564(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26564, ctx.r10.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82156d88
	ctx.lr = 0x82167EC0;
	sub_82156D88(ctx, base);
	// lwz r11,28060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28060);
loc_82167EC4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82167f04
	if (ctx.cr6.eq) goto loc_82167F04;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82167EDC;
	sub_82177868(ctx, base);
	// lwz r11,28060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,28060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28060);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,27556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27556, ctx.r10.u32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82167d18
	ctx.lr = 0x82167F00;
	sub_82167D18(ctx, base);
	// lwz r11,28060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28060);
loc_82167F04:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167f3c
	if (ctx.cr6.eq) goto loc_82167F3C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82167F18;
	sub_82177868(ctx, base);
	// lwz r11,28060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,28060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28060);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,27556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27556, ctx.r10.u32);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82167d18
	ctx.lr = 0x82167F3C;
	sub_82167D18(ctx, base);
loc_82167F3C:
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

PPC_WEAK_FUNC(sub_82167E48) {
	__imp__sub_82167E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167F54) {
	__imp__sub_82167F54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82167F60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,44
	ctx.r5.s64 = ctx.r4.s64 * 44;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28060(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28060);
	// bl 0x821778d8
	ctx.lr = 0x82167F78;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28060(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28060);
	// ble cr6,0x82167f9c
	if (!ctx.cr6.gt) goto loc_82167F9C;
loc_82167F84:
	// stw r30,28060(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28060, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82167e48
	ctx.lr = 0x82167F90;
	sub_82167E48(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// bne 0x82167f84
	if (!ctx.cr0.eq) goto loc_82167F84;
loc_82167F9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82167F58) {
	__imp__sub_82167F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167FA4) {
	__imp__sub_82167FA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167FA8) {
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
	// ble cr6,0x82167fe4
	if (!ctx.cr6.gt) goto loc_82167FE4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82167FCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82167e48
	ctx.lr = 0x82167FD4;
	sub_82167E48(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82167FD8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28060(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28060, ctx.r3.u32);
	// bne 0x82167fcc
	if (!ctx.cr0.eq) goto loc_82167FCC;
loc_82167FE4:
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

PPC_WEAK_FUNC(sub_82167FA8) {
	__imp__sub_82167FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82167FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82167FFC) {
	__imp__sub_82167FFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168000) {
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
	// lwz r4,25248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25248);
	// bl 0x821778d8
	ctx.lr = 0x82168020;
	sub_821778D8(ctx, base);
	// lwz r3,25248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25248);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216807c
	if (ctx.cr6.eq) goto loc_8216807C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82168078
	if (!ctx.cr6.eq) goto loc_82168078;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82168040;
	sub_82177868(ctx, base);
	// lwz r11,25248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25248);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25248);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,28060(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28060, ctx.r10.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82167f58
	ctx.lr = 0x82168064;
	sub_82167F58(ctx, base);
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
loc_82168078:
	// bl 0x82177978
	ctx.lr = 0x8216807C;
	sub_82177978(ctx, base);
loc_8216807C:
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

PPC_WEAK_FUNC(sub_82168000) {
	__imp__sub_82168000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82168098;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25248);
	// bl 0x821778d8
	ctx.lr = 0x821680B0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r27,25248(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25248);
	// ble cr6,0x82168154
	if (!ctx.cr6.gt) goto loc_82168154;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_821680C4:
	// stw r27,25248(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25248, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821680D8;
	sub_821778D8(ctx, base);
	// lwz r3,25248(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25248);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168148
	if (ctx.cr6.eq) goto loc_82168148;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82168144
	if (!ctx.cr6.eq) goto loc_82168144;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821680F8;
	sub_82177868(ctx, base);
	// lwz r11,25248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25248);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25248);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,28060(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28060, ctx.r4.u32);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 * 44;
	// bl 0x821778d8
	ctx.lr = 0x8216811C;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,28060(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28060);
	// ble cr6,0x82168148
	if (!ctx.cr6.gt) goto loc_82168148;
loc_82168128:
	// stw r31,28060(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28060, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82167e48
	ctx.lr = 0x82168134;
	sub_82167E48(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bne 0x82168128
	if (!ctx.cr0.eq) goto loc_82168128;
	// b 0x82168148
	goto loc_82168148;
loc_82168144:
	// bl 0x82177978
	ctx.lr = 0x82168148;
	sub_82177978(ctx, base);
loc_82168148:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x821680c4
	if (!ctx.cr0.eq) goto loc_821680C4;
loc_82168154:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168090) {
	__imp__sub_82168090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216815C) {
	__imp__sub_8216815C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82168168;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82168214
	if (!ctx.cr6.gt) goto loc_82168214;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lwz r4,25248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25248);
loc_82168184:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82168190;
	sub_821778D8(ctx, base);
	// lwz r3,25248(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25248);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168200
	if (ctx.cr6.eq) goto loc_82168200;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821681fc
	if (!ctx.cr6.eq) goto loc_821681FC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821681B0;
	sub_82177868(ctx, base);
	// lwz r11,25248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25248);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25248);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,28060(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28060, ctx.r4.u32);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 * 44;
	// bl 0x821778d8
	ctx.lr = 0x821681D4;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,28060(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28060);
	// ble cr6,0x82168200
	if (!ctx.cr6.gt) goto loc_82168200;
loc_821681E0:
	// stw r31,28060(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28060, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82167e48
	ctx.lr = 0x821681EC;
	sub_82167E48(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bne 0x821681e0
	if (!ctx.cr0.eq) goto loc_821681E0;
	// b 0x82168200
	goto loc_82168200;
loc_821681FC:
	// bl 0x82177978
	ctx.lr = 0x82168200;
	sub_82177978(ctx, base);
loc_82168200:
	// bl 0x82177858
	ctx.lr = 0x82168204;
	sub_82177858(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25248(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25248, ctx.r3.u32);
	// bne 0x82168184
	if (!ctx.cr0.eq) goto loc_82168184;
loc_82168214:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168160) {
	__imp__sub_82168160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216821C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216821C) {
	__imp__sub_8216821C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168220) {
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
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,26716(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// bl 0x821778d8
	ctx.lr = 0x82168244;
	sub_821778D8(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168284
	if (ctx.cr6.eq) goto loc_82168284;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216825C;
	sub_82177868(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,25388(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25388, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821566f8
	ctx.lr = 0x82168284;
	sub_821566F8(ctx, base);
loc_82168284:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216828C;
	sub_82177758(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821682e4
	if (ctx.cr6.eq) goto loc_821682E4;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x821682A4;
	sub_82177868(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,28112(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28112, ctx.r4.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x821778d8
	ctx.lr = 0x821682D0;
	sub_821778D8(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82237760
	ctx.lr = 0x821682E4;
	sub_82237760(ctx, base);
loc_821682E4:
	// bl 0x821777e0
	ctx.lr = 0x821682E8;
	sub_821777E0(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82168330
	if (ctx.cr6.eq) goto loc_82168330;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82168304;
	sub_82177868(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r4,25984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25984, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x8216832C;
	sub_821778D8(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
loc_82168330:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82168370
	if (ctx.cr6.eq) goto loc_82168370;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82168344;
	sub_82177868(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r4,25984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25984, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x8216836C;
	sub_821778D8(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
loc_82168370:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821683b0
	if (ctx.cr6.eq) goto loc_821683B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82168384;
	sub_82177868(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r4,26260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26260, ctx.r4.u32);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x821778d8
	ctx.lr = 0x821683AC;
	sub_821778D8(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
loc_821683B0:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821683ec
	if (ctx.cr6.eq) goto loc_821683EC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821683C4;
	sub_82177868(ctx, base);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,26716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26716);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,27652(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27652, ctx.r10.u32);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82167ac8
	ctx.lr = 0x821683EC;
	sub_82167AC8(ctx, base);
loc_821683EC:
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

PPC_WEAK_FUNC(sub_82168220) {
	__imp__sub_82168220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82168404) {
	__imp__sub_82168404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82168410;
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
	// lwz r4,26716(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26716);
	// bl 0x821778d8
	ctx.lr = 0x82168430;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26716(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26716);
	// ble cr6,0x82168454
	if (!ctx.cr6.gt) goto loc_82168454;
loc_8216843C:
	// stw r30,26716(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26716, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82168220
	ctx.lr = 0x82168448;
	sub_82168220(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x8216843c
	if (!ctx.cr0.eq) goto loc_8216843C;
loc_82168454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168408) {
	__imp__sub_82168408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216845C) {
	__imp__sub_8216845C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168460) {
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
	// ble cr6,0x8216849c
	if (!ctx.cr6.gt) goto loc_8216849C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82168484:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82168220
	ctx.lr = 0x8216848C;
	sub_82168220(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82168490;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26716, ctx.r3.u32);
	// bne 0x82168484
	if (!ctx.cr0.eq) goto loc_82168484;
loc_8216849C:
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

PPC_WEAK_FUNC(sub_82168460) {
	__imp__sub_82168460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821684B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821684B4) {
	__imp__sub_821684B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821684B8) {
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
	// lwz r4,27032(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27032);
	// bl 0x821778d8
	ctx.lr = 0x821684D8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x821684E0;
	sub_82177758(ctx, base);
	// lwz r11,27032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27032);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821684F4;
	sub_82147188(ctx, base);
	// lwz r11,27032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27032);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26716(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26716, ctx.r11.u32);
	// bl 0x82168220
	ctx.lr = 0x8216850C;
	sub_82168220(ctx, base);
	// lwz r11,27032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27032);
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25248, ctx.r11.u32);
	// bl 0x82168000
	ctx.lr = 0x82168524;
	sub_82168000(ctx, base);
	// lwz r11,27032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27032);
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82168560
	if (ctx.cr6.eq) goto loc_82168560;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216853C;
	sub_82177868(ctx, base);
	// lwz r11,27032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27032);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,27032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27032);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,28140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28140, ctx.r11.u32);
	// bl 0x82157238
	ctx.lr = 0x82168560;
	sub_82157238(ctx, base);
loc_82168560:
	// bl 0x821777e0
	ctx.lr = 0x82168564;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_821684B8) {
	__imp__sub_821684B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82168580;
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
	// lwz r4,27032(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27032);
	// bl 0x821778d8
	ctx.lr = 0x82168598;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27032(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27032);
	// ble cr6,0x821685bc
	if (!ctx.cr6.gt) goto loc_821685BC;
loc_821685A4:
	// stw r30,27032(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27032, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821684b8
	ctx.lr = 0x821685B0;
	sub_821684B8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// bne 0x821685a4
	if (!ctx.cr0.eq) goto loc_821685A4;
loc_821685BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168578) {
	__imp__sub_82168578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821685C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821685C4) {
	__imp__sub_821685C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821685C8) {
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
	// ble cr6,0x82168604
	if (!ctx.cr6.gt) goto loc_82168604;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821685EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821684b8
	ctx.lr = 0x821685F4;
	sub_821684B8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821685F8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27032(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27032, ctx.r3.u32);
	// bne 0x821685ec
	if (!ctx.cr0.eq) goto loc_821685EC;
loc_82168604:
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

PPC_WEAK_FUNC(sub_821685C8) {
	__imp__sub_821685C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216861C) {
	__imp__sub_8216861C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168620) {
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
	// lwz r4,25052(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25052);
	// bl 0x821778d8
	ctx.lr = 0x82168644;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8216864C;
	sub_82177758(ctx, base);
	// lwz r3,25052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25052);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821686d0
	if (ctx.cr6.eq) goto loc_821686D0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82168674
	if (ctx.cr6.eq) goto loc_82168674;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82168674
	if (ctx.cr6.eq) goto loc_82168674;
	// bl 0x82177950
	ctx.lr = 0x82168670;
	sub_82177950(ctx, base);
	// b 0x821686d0
	goto loc_821686D0;
loc_82168674:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216867C;
	sub_82177868(ctx, base);
	// lwz r11,25052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25052);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,25052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25052);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27032, ctx.r11.u32);
	// bne cr6,0x821686a8
	if (!ctx.cr6.eq) goto loc_821686A8;
	// bl 0x82177898
	ctx.lr = 0x821686A0;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821686ac
	goto loc_821686AC;
loc_821686A8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821686AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821684b8
	ctx.lr = 0x821686B4;
	sub_821684B8(ctx, base);
	// lwz r3,25052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25052);
	// bl 0x82175850
	ctx.lr = 0x821686BC;
	sub_82175850(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821686d0
	if (ctx.cr6.eq) goto loc_821686D0;
	// lwz r11,25052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25052);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821686D0:
	// bl 0x821777e0
	ctx.lr = 0x821686D4;
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

PPC_WEAK_FUNC(sub_82168620) {
	__imp__sub_82168620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821686EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821686EC) {
	__imp__sub_821686EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821686F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821686F8;
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
	// lwz r4,25052(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25052);
	// bl 0x821778d8
	ctx.lr = 0x82168710;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25052(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25052);
	// ble cr6,0x82168734
	if (!ctx.cr6.gt) goto loc_82168734;
loc_8216871C:
	// stw r30,25052(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25052, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82168620
	ctx.lr = 0x82168728;
	sub_82168620(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8216871c
	if (!ctx.cr0.eq) goto loc_8216871C;
loc_82168734:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821686F0) {
	__imp__sub_821686F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216873C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216873C) {
	__imp__sub_8216873C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168740) {
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
	// ble cr6,0x8216877c
	if (!ctx.cr6.gt) goto loc_8216877C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82168764:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82168620
	ctx.lr = 0x8216876C;
	sub_82168620(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82168770;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25052(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25052, ctx.r3.u32);
	// bne 0x82168764
	if (!ctx.cr0.eq) goto loc_82168764;
loc_8216877C:
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

PPC_WEAK_FUNC(sub_82168740) {
	__imp__sub_82168740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82168794) {
	__imp__sub_82168794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168798) {
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
	// lwz r4,26528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26528);
	// bl 0x821778d8
	ctx.lr = 0x821687BC;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x821687C4;
	sub_82177758(ctx, base);
	// lwz r3,26528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26528);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82168848
	if (ctx.cr6.eq) goto loc_82168848;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x821687ec
	if (ctx.cr6.eq) goto loc_821687EC;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x821687ec
	if (ctx.cr6.eq) goto loc_821687EC;
	// bl 0x82177950
	ctx.lr = 0x821687E8;
	sub_82177950(ctx, base);
	// b 0x82168848
	goto loc_82168848;
loc_821687EC:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821687F4;
	sub_82177868(ctx, base);
	// lwz r11,26528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26528);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,26528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26528);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26696, ctx.r11.u32);
	// bne cr6,0x82168820
	if (!ctx.cr6.eq) goto loc_82168820;
	// bl 0x82177898
	ctx.lr = 0x82168818;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82168824
	goto loc_82168824;
loc_82168820:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82168824:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82159008
	ctx.lr = 0x8216882C;
	sub_82159008(ctx, base);
	// lwz r3,26528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26528);
	// bl 0x82175f50
	ctx.lr = 0x82168834;
	sub_82175F50(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82168848
	if (ctx.cr6.eq) goto loc_82168848;
	// lwz r11,26528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26528);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82168848:
	// bl 0x821777e0
	ctx.lr = 0x8216884C;
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

PPC_WEAK_FUNC(sub_82168798) {
	__imp__sub_82168798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82168864) {
	__imp__sub_82168864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82168870;
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
	// lwz r4,26528(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26528);
	// bl 0x821778d8
	ctx.lr = 0x82168888;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26528(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26528);
	// ble cr6,0x821688ac
	if (!ctx.cr6.gt) goto loc_821688AC;
loc_82168894:
	// stw r30,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82168798
	ctx.lr = 0x821688A0;
	sub_82168798(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82168894
	if (!ctx.cr0.eq) goto loc_82168894;
loc_821688AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168868) {
	__imp__sub_82168868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821688B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821688B4) {
	__imp__sub_821688B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821688B8) {
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
	// ble cr6,0x821688f4
	if (!ctx.cr6.gt) goto loc_821688F4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821688DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82168798
	ctx.lr = 0x821688E4;
	sub_82168798(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821688E8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26528, ctx.r3.u32);
	// bne 0x821688dc
	if (!ctx.cr0.eq) goto loc_821688DC;
loc_821688F4:
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

PPC_WEAK_FUNC(sub_821688B8) {
	__imp__sub_821688B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216890C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216890C) {
	__imp__sub_8216890C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168910) {
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
	// lwz r11,27976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27976);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82168988
	if (ctx.cr6.eq) goto loc_82168988;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,24944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24944, ctx.r3.u32);
	// bl 0x82175fd0
	ctx.lr = 0x82168948;
	sub_82175FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82168988
	if (!ctx.cr6.eq) goto loc_82168988;
	// bl 0x82159750
	ctx.lr = 0x82168954;
	sub_82159750(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82168970
	if (!ctx.cr6.eq) goto loc_82168970;
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
loc_82168970:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,24944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24944);
	// bl 0x82175fd0
	ctx.lr = 0x8216897C;
	sub_82175FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8216898c
	if (ctx.cr6.eq) goto loc_8216898C;
loc_82168988:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8216898C:
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

PPC_WEAK_FUNC(sub_82168910) {
	__imp__sub_82168910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821689A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821689A8;
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
	// lwz r31,27976(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27976);
	// ble cr6,0x821689e4
	if (!ctx.cr6.gt) goto loc_821689E4;
loc_821689C4:
	// stw r31,27976(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27976, ctx.r31.u32);
	// bl 0x82168910
	ctx.lr = 0x821689CC;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821689f0
	if (ctx.cr6.eq) goto loc_821689F0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821689c4
	if (ctx.cr6.lt) goto loc_821689C4;
loc_821689E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821689F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821689A0) {
	__imp__sub_821689A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821689FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821689FC) {
	__imp__sub_821689FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168A00) {
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
	// li r5,92
	ctx.r5.s64 = 92;
	// lwz r4,27176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
	// bl 0x821778d8
	ctx.lr = 0x82168A20;
	sub_821778D8(ctx, base);
	// lwz r11,27176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,25568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x82168A38;
	sub_82155DF0(ctx, base);
	// lwz r11,27176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26528(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x82168A50;
	sub_82168798(ctx, base);
	// lwz r11,27176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28300(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28300, ctx.r11.u32);
	// bl 0x82154b30
	ctx.lr = 0x82168A68;
	sub_82154B30(ctx, base);
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

PPC_WEAK_FUNC(sub_82168A00) {
	__imp__sub_82168A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82168A7C) {
	__imp__sub_82168A7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82168A88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mulli r5,r4,92
	ctx.r5.s64 = ctx.r4.s64 * 92;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,27176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
	// bl 0x821778d8
	ctx.lr = 0x82168AA0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r30,27176(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
	// ble cr6,0x82168b14
	if (!ctx.cr6.gt) goto loc_82168B14;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82168AB8:
	// stw r30,27176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27176, ctx.r30.u32);
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82168ACC;
	sub_821778D8(ctx, base);
	// lwz r11,27176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,25568(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x82168AE0;
	sub_82155DF0(ctx, base);
	// lwz r11,27176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,26528(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x82168AF4;
	sub_82168798(ctx, base);
	// lwz r11,27176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// stw r11,28300(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28300, ctx.r11.u32);
	// bl 0x82154b30
	ctx.lr = 0x82168B08;
	sub_82154B30(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// bne 0x82168ab8
	if (!ctx.cr0.eq) goto loc_82168AB8;
loc_82168B14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168A80) {
	__imp__sub_82168A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82168B1C) {
	__imp__sub_82168B1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82168B28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82168ba8
	if (!ctx.cr6.gt) goto loc_82168BA8;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
loc_82168B4C:
	// li r5,92
	ctx.r5.s64 = 92;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82168B58;
	sub_821778D8(ctx, base);
	// lwz r11,27176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,25568(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x82168B6C;
	sub_82155DF0(ctx, base);
	// lwz r11,27176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,26528(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x82168B80;
	sub_82168798(ctx, base);
	// lwz r11,27176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27176);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// stw r11,28300(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28300, ctx.r11.u32);
	// bl 0x82154b30
	ctx.lr = 0x82168B94;
	sub_82154B30(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82168B98;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27176, ctx.r3.u32);
	// bne 0x82168b4c
	if (!ctx.cr0.eq) goto loc_82168B4C;
loc_82168BA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168B20) {
	__imp__sub_82168B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168BB0) {
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
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27320);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,26052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26052, ctx.r11.u32);
	// bl 0x821562c0
	ctx.lr = 0x82168BD8;
	sub_821562C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82168bf8
	if (!ctx.cr6.eq) goto loc_82168BF8;
loc_82168BE0:
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
loc_82168BF8:
	// lwz r11,27320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27320);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,27976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x82168C0C;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82168be0
	if (ctx.cr6.eq) goto loc_82168BE0;
	// lwz r11,27320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27320);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// stw r11,26348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26348, ctx.r11.u32);
	// bl 0x821551a8
	ctx.lr = 0x82168C28;
	sub_821551A8(ctx, base);
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

PPC_WEAK_FUNC(sub_82168BB0) {
	__imp__sub_82168BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82168C44) {
	__imp__sub_82168C44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82168C50;
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
	// lwz r31,27320(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27320);
	// ble cr6,0x82168c8c
	if (!ctx.cr6.gt) goto loc_82168C8C;
loc_82168C6C:
	// stw r31,27320(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27320, ctx.r31.u32);
	// bl 0x82168bb0
	ctx.lr = 0x82168C74;
	sub_82168BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82168c98
	if (ctx.cr6.eq) goto loc_82168C98;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82168c6c
	if (ctx.cr6.lt) goto loc_82168C6C;
loc_82168C8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82168C98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168C48) {
	__imp__sub_82168C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82168CA4) {
	__imp__sub_82168CA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168CA8) {
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
	// lwz r4,26380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26380);
	// bl 0x821778d8
	ctx.lr = 0x82168CC8;
	sub_821778D8(ctx, base);
	// lwz r3,26380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26380);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82168d34
	if (ctx.cr6.eq) goto loc_82168D34;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82168d30
	if (!ctx.cr6.eq) goto loc_82168D30;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82168CE8;
	sub_82177868(ctx, base);
	// lwz r11,26380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26380);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26380);
	// lwz r10,27700(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27700);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26072(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26072, ctx.r4.u32);
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x82168D1C;
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
loc_82168D30:
	// bl 0x82177978
	ctx.lr = 0x82168D34;
	sub_82177978(ctx, base);
loc_82168D34:
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

PPC_WEAK_FUNC(sub_82168CA8) {
	__imp__sub_82168CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82168D50;
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
	// lwz r4,26380(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26380);
	// bl 0x821778d8
	ctx.lr = 0x82168D68;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26380(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26380);
	// ble cr6,0x82168d8c
	if (!ctx.cr6.gt) goto loc_82168D8C;
loc_82168D74:
	// stw r30,26380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26380, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82168ca8
	ctx.lr = 0x82168D80;
	sub_82168CA8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82168d74
	if (!ctx.cr0.eq) goto loc_82168D74;
loc_82168D8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168D48) {
	__imp__sub_82168D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82168D94) {
	__imp__sub_82168D94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168D98) {
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
	// ble cr6,0x82168dd4
	if (!ctx.cr6.gt) goto loc_82168DD4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82168DBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82168ca8
	ctx.lr = 0x82168DC4;
	sub_82168CA8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82168DC8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26380, ctx.r3.u32);
	// bne 0x82168dbc
	if (!ctx.cr0.eq) goto loc_82168DBC;
loc_82168DD4:
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

PPC_WEAK_FUNC(sub_82168D98) {
	__imp__sub_82168D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82168DEC) {
	__imp__sub_82168DEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,27700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27700);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82168e1c
	if (!ctx.cr6.gt) goto loc_82168E1C;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27408);
	// stw r11,26380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26380, ctx.r11.u32);
	// b 0x82168ca8
	sub_82168CA8(ctx, base);
	return;
loc_82168E1C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,27408(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27408);
	// stw r4,28632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28632, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168DF0) {
	__imp__sub_82168DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82168E40) {
	__imp__sub_82168E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82168E44) {
	__imp__sub_82168E44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82168E50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lwz r4,27408(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27408);
	// bl 0x821778d8
	ctx.lr = 0x82168E70;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27408(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27408);
	// ble cr6,0x82168eb4
	if (!ctx.cr6.gt) goto loc_82168EB4;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82168E84:
	// lwz r11,27700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27700);
	// stw r30,27408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27408, ctx.r30.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82168ea8
	if (!ctx.cr6.gt) goto loc_82168EA8;
	// stw r30,26380(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26380, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82168ca8
	ctx.lr = 0x82168EA8;
	sub_82168CA8(ctx, base);
loc_82168EA8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82168e84
	if (!ctx.cr0.eq) goto loc_82168E84;
loc_82168EB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168E48) {
	__imp__sub_82168E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82168EBC) {
	__imp__sub_82168EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82168EC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82168f30
	if (!ctx.cr6.gt) goto loc_82168F30;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27408);
loc_82168EEC:
	// lwz r11,27700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27700);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82168f10
	if (!ctx.cr6.gt) goto loc_82168F10;
	// stw r4,26380(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26380, ctx.r4.u32);
	// bl 0x82168ca8
	ctx.lr = 0x82168F0C;
	sub_82168CA8(ctx, base);
	// b 0x82168f1c
	goto loc_82168F1C;
loc_82168F10:
	// stw r4,28632(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28632, ctx.r4.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x821778d8
	ctx.lr = 0x82168F1C;
	sub_821778D8(ctx, base);
loc_82168F1C:
	// bl 0x82177858
	ctx.lr = 0x82168F20;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27408, ctx.r3.u32);
	// bne 0x82168eec
	if (!ctx.cr0.eq) goto loc_82168EEC;
loc_82168F30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168EC0) {
	__imp__sub_82168EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168F38) {
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
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r4,27700(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27700);
	// bl 0x821778d8
	ctx.lr = 0x82168F58;
	sub_821778D8(ctx, base);
	// lwz r11,27700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27700);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,27408(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27408, ctx.r10.u32);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82168f88
	if (!ctx.cr6.gt) goto loc_82168F88;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,26380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26380, ctx.r10.u32);
	// bl 0x82168ca8
	ctx.lr = 0x82168F88;
	sub_82168CA8(ctx, base);
loc_82168F88:
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

PPC_WEAK_FUNC(sub_82168F38) {
	__imp__sub_82168F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82168F9C) {
	__imp__sub_82168F9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82168FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82168FA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27700(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27700);
	// bl 0x821778d8
	ctx.lr = 0x82168FC8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,27700(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27700);
	// ble cr6,0x82169024
	if (!ctx.cr6.gt) goto loc_82169024;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82168FDC:
	// stw r31,27700(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27700, ctx.r31.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82168FF0;
	sub_821778D8(ctx, base);
	// lwz r11,27700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27700);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,27408(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27408, ctx.r10.u32);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82169018
	if (!ctx.cr6.gt) goto loc_82169018;
	// stw r10,26380(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26380, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82168ca8
	ctx.lr = 0x82169018;
	sub_82168CA8(ctx, base);
loc_82169018:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x82168fdc
	if (!ctx.cr0.eq) goto loc_82168FDC;
loc_82169024:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82168FA0) {
	__imp__sub_82168FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216902C) {
	__imp__sub_8216902C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82169038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821690a0
	if (!ctx.cr6.gt) goto loc_821690A0;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,27700(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27700);
loc_82169058:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82169064;
	sub_821778D8(ctx, base);
	// lwz r11,27700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27700);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,27408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27408, ctx.r10.u32);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8216908c
	if (!ctx.cr6.gt) goto loc_8216908C;
	// stw r10,26380(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26380, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82168ca8
	ctx.lr = 0x8216908C;
	sub_82168CA8(ctx, base);
loc_8216908C:
	// bl 0x82177858
	ctx.lr = 0x82169090;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27700, ctx.r3.u32);
	// bne 0x82169058
	if (!ctx.cr0.eq) goto loc_82169058;
loc_821690A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82169030) {
	__imp__sub_82169030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821690A8) {
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
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r4,25060(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// bl 0x821778d8
	ctx.lr = 0x821690CC;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x821690D4;
	sub_82177758(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821690E8;
	sub_82147188(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169148
	if (ctx.cr6.eq) goto loc_82169148;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82169144
	if (!ctx.cr6.eq) goto loc_82169144;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216910C;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,26424(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26424, ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82169140;
	sub_821778D8(ctx, base);
	// b 0x82169148
	goto loc_82169148;
loc_82169144:
	// bl 0x82177978
	ctx.lr = 0x82169148;
	sub_82177978(ctx, base);
loc_82169148:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169188
	if (ctx.cr6.eq) goto loc_82169188;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82169160;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,27624(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27624, ctx.r10.u32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8215bcd8
	ctx.lr = 0x82169188;
	sub_8215BCD8(ctx, base);
loc_82169188:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821691c8
	if (ctx.cr6.eq) goto loc_821691C8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821691A0;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,25604(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25604, ctx.r10.u32);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8215c6a8
	ctx.lr = 0x821691C8;
	sub_8215C6A8(ctx, base);
loc_821691C8:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169208
	if (ctx.cr6.eq) goto loc_82169208;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821691E0;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,28240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28240, ctx.r10.u32);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821540b0
	ctx.lr = 0x82169208;
	sub_821540B0(ctx, base);
loc_82169208:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169248
	if (ctx.cr6.eq) goto loc_82169248;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82169220;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r4,28104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28104, ctx.r4.u32);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x821778d8
	ctx.lr = 0x82169248;
	sub_821778D8(ctx, base);
loc_82169248:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169288
	if (ctx.cr6.eq) goto loc_82169288;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82169260;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,27864(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27864, ctx.r10.u32);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8215be38
	ctx.lr = 0x82169288;
	sub_8215BE38(ctx, base);
loc_82169288:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821692d4
	if (ctx.cr6.eq) goto loc_821692D4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821692A0;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r4,26224(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26224, ctx.r4.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821778d8
	ctx.lr = 0x821692D4;
	sub_821778D8(ctx, base);
loc_821692D4:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169318
	if (ctx.cr6.eq) goto loc_82169318;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x821692EC;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r4,26072(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26072, ctx.r4.u32);
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x82169318;
	sub_821778D8(ctx, base);
loc_82169318:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169358
	if (ctx.cr6.eq) goto loc_82169358;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82169330;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r10,27700(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27700, ctx.r10.u32);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82168fa0
	ctx.lr = 0x82169358;
	sub_82168FA0(ctx, base);
loc_82169358:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216939c
	if (ctx.cr6.eq) goto loc_8216939C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82169370;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r4,25184(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25184, ctx.r4.u32);
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8216939C;
	sub_821778D8(ctx, base);
loc_8216939C:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821693e8
	if (ctx.cr6.eq) goto loc_821693E8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821693B4;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r4,26616(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26616, ctx.r4.u32);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x821693E8;
	sub_821778D8(ctx, base);
loc_821693E8:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169434
	if (ctx.cr6.eq) goto loc_82169434;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82169400;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r4,25984(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25984, ctx.r4.u32);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x82169434;
	sub_821778D8(ctx, base);
loc_82169434:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169488
	if (ctx.cr6.eq) goto loc_82169488;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8216944C;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r4,26260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26260, ctx.r4.u32);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r5,r7,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82169488;
	sub_821778D8(ctx, base);
loc_82169488:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821694cc
	if (ctx.cr6.eq) goto loc_821694CC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821694A0;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r4,28460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28460, ctx.r4.u32);
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mulli r5,r8,28
	ctx.r5.s64 = ctx.r8.s64 * 28;
	// bl 0x821778d8
	ctx.lr = 0x821694CC;
	sub_821778D8(ctx, base);
loc_821694CC:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216950c
	if (ctx.cr6.eq) goto loc_8216950C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821694E4;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// stw r10,25844(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25844, ctx.r10.u32);
	// lwz r4,116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// bl 0x8215c1d0
	ctx.lr = 0x8216950C;
	sub_8215C1D0(ctx, base);
loc_8216950C:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169550
	if (ctx.cr6.eq) goto loc_82169550;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x82169524;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,128(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// stw r4,26420(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26420, ctx.r4.u32);
	// lwz r8,124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r5,r8,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821778d8
	ctx.lr = 0x82169550;
	sub_821778D8(ctx, base);
loc_82169550:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169594
	if (ctx.cr6.eq) goto loc_82169594;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82169568;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// stw r4,25716(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25716, ctx.r4.u32);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mulli r5,r8,68
	ctx.r5.s64 = ctx.r8.s64 * 68;
	// bl 0x821778d8
	ctx.lr = 0x82169594;
	sub_821778D8(ctx, base);
loc_82169594:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821695d4
	if (ctx.cr6.eq) goto loc_821695D4;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x82177868
	ctx.lr = 0x821695AC;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// stw r10,28100(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28100, ctx.r10.u32);
	// lhz r4,140(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 140);
	// bl 0x8215c470
	ctx.lr = 0x821695D4;
	sub_8215C470(ctx, base);
loc_821695D4:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169620
	if (ctx.cr6.eq) goto loc_82169620;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x82177868
	ctx.lr = 0x821695EC;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r4,26204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26204, ctx.r4.u32);
	// lhz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 140);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821778d8
	ctx.lr = 0x82169620;
	sub_821778D8(ctx, base);
loc_82169620:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169664
	if (ctx.cr6.eq) goto loc_82169664;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82169638;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,152(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stw r4,27108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27108, ctx.r4.u32);
	// lhz r8,140(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 140);
	// rotlwi r5,r8,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// bl 0x821778d8
	ctx.lr = 0x82169664;
	sub_821778D8(ctx, base);
loc_82169664:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821696a8
	if (ctx.cr6.eq) goto loc_821696A8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216967C;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,164(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// stw r4,25776(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25776, ctx.r4.u32);
	// lhz r8,160(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 160);
	// mulli r5,r8,28
	ctx.r5.s64 = ctx.r8.s64 * 28;
	// bl 0x821778d8
	ctx.lr = 0x821696A8;
	sub_821778D8(ctx, base);
loc_821696A8:
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 + 156;
	// stw r11,28324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28324, ctx.r11.u32);
	// bl 0x8215b528
	ctx.lr = 0x821696C0;
	sub_8215B528(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82169704
	if (ctx.cr6.eq) goto loc_82169704;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821696DC;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// stw r10,27176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27176, ctx.r10.u32);
	// lhz r4,168(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 168);
	// bl 0x82168a80
	ctx.lr = 0x82169700;
	sub_82168A80(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
loc_82169704:
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216973c
	if (ctx.cr6.eq) goto loc_8216973C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82169718;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// stw r10,27176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27176, ctx.r10.u32);
	// lhz r4,170(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 170);
	// bl 0x82168a80
	ctx.lr = 0x8216973C;
	sub_82168A80(ctx, base);
loc_8216973C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82169744;
	sub_82177758(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169788
	if (ctx.cr6.eq) goto loc_82169788;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82169760;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// stw r4,28316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28316, ctx.r4.u32);
	// lhz r9,168(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 168);
	// rotlwi r5,r9,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// bl 0x821778d8
	ctx.lr = 0x82169788;
	sub_821778D8(ctx, base);
loc_82169788:
	// bl 0x821777e0
	ctx.lr = 0x8216978C;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82169794;
	sub_82177758(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821697d4
	if (ctx.cr6.eq) goto loc_821697D4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821697AC;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r4,28316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28316, ctx.r4.u32);
	// lhz r9,170(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 170);
	// rotlwi r5,r9,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// bl 0x821778d8
	ctx.lr = 0x821697D4;
	sub_821778D8(ctx, base);
loc_821697D4:
	// bl 0x821777e0
	ctx.lr = 0x821697D8;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x821697E0;
	sub_82177758(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216982c
	if (ctx.cr6.eq) goto loc_8216982C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821697FC;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,188(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// stw r4,27456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27456, ctx.r4.u32);
	// lhz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 168);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8216982C;
	sub_821778D8(ctx, base);
loc_8216982C:
	// bl 0x821777e0
	ctx.lr = 0x82169830;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82169838;
	sub_82177758(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169880
	if (ctx.cr6.eq) goto loc_82169880;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82169850;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,192(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// stw r4,27456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27456, ctx.r4.u32);
	// lhz r11,170(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 170);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82169880;
	sub_821778D8(ctx, base);
loc_82169880:
	// bl 0x821777e0
	ctx.lr = 0x82169884;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216988C;
	sub_82177758(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821698d8
	if (ctx.cr6.eq) goto loc_821698D8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821698A8;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// stw r4,26576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26576, ctx.r4.u32);
	// lhz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 168);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x821698D8;
	sub_821778D8(ctx, base);
loc_821698D8:
	// bl 0x821777e0
	ctx.lr = 0x821698DC;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x821698E4;
	sub_82177758(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216992c
	if (ctx.cr6.eq) goto loc_8216992C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821698FC;
	sub_82177868(ctx, base);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// lwz r11,25060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25060);
	// lwz r4,200(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r4,26576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26576, ctx.r4.u32);
	// lhz r11,170(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 170);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8216992C;
	sub_821778D8(ctx, base);
loc_8216992C:
	// bl 0x821777e0
	ctx.lr = 0x82169930;
	sub_821777E0(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x82169934;
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

PPC_WEAK_FUNC(sub_821690A8) {
	__imp__sub_821690A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216994C) {
	__imp__sub_8216994C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82169958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25060(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25060);
	// bl 0x821778d8
	ctx.lr = 0x82169970;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25060(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25060);
	// ble cr6,0x82169994
	if (!ctx.cr6.gt) goto loc_82169994;
loc_8216997C:
	// stw r30,25060(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25060, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821690a8
	ctx.lr = 0x82169988;
	sub_821690A8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// bne 0x8216997c
	if (!ctx.cr0.eq) goto loc_8216997C;
loc_82169994:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82169950) {
	__imp__sub_82169950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216999C) {
	__imp__sub_8216999C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821699A0) {
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
	// ble cr6,0x821699dc
	if (!ctx.cr6.gt) goto loc_821699DC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821699C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821690a8
	ctx.lr = 0x821699CC;
	sub_821690A8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821699D0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25060(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25060, ctx.r3.u32);
	// bne 0x821699c4
	if (!ctx.cr0.eq) goto loc_821699C4;
loc_821699DC:
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

PPC_WEAK_FUNC(sub_821699A0) {
	__imp__sub_821699A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821699F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821699F4) {
	__imp__sub_821699F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821699F8) {
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
	// lwz r4,25520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25520);
	// bl 0x821778d8
	ctx.lr = 0x82169A1C;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x82169A24;
	sub_82177758(ctx, base);
	// lwz r3,25520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25520);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82169aa8
	if (ctx.cr6.eq) goto loc_82169AA8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82169a4c
	if (ctx.cr6.eq) goto loc_82169A4C;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82169a4c
	if (ctx.cr6.eq) goto loc_82169A4C;
	// bl 0x82177950
	ctx.lr = 0x82169A48;
	sub_82177950(ctx, base);
	// b 0x82169aa8
	goto loc_82169AA8;
loc_82169A4C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82169A54;
	sub_82177868(ctx, base);
	// lwz r11,25520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25520);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,25520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25520);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25060, ctx.r11.u32);
	// bne cr6,0x82169a80
	if (!ctx.cr6.eq) goto loc_82169A80;
	// bl 0x82177898
	ctx.lr = 0x82169A78;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82169a84
	goto loc_82169A84;
loc_82169A80:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82169A84:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821690a8
	ctx.lr = 0x82169A8C;
	sub_821690A8(ctx, base);
	// lwz r3,25520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25520);
	// bl 0x82175720
	ctx.lr = 0x82169A94;
	sub_82175720(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82169aa8
	if (ctx.cr6.eq) goto loc_82169AA8;
	// lwz r11,25520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25520);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82169AA8:
	// bl 0x821777e0
	ctx.lr = 0x82169AAC;
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

PPC_WEAK_FUNC(sub_821699F8) {
	__imp__sub_821699F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82169AC4) {
	__imp__sub_82169AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82169AD0;
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
	// lwz r4,25520(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25520);
	// bl 0x821778d8
	ctx.lr = 0x82169AE8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25520(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25520);
	// ble cr6,0x82169b0c
	if (!ctx.cr6.gt) goto loc_82169B0C;
loc_82169AF4:
	// stw r30,25520(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25520, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821699f8
	ctx.lr = 0x82169B00;
	sub_821699F8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82169af4
	if (!ctx.cr0.eq) goto loc_82169AF4;
loc_82169B0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82169AC8) {
	__imp__sub_82169AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82169B14) {
	__imp__sub_82169B14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169B18) {
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
	// ble cr6,0x82169b54
	if (!ctx.cr6.gt) goto loc_82169B54;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82169B3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821699f8
	ctx.lr = 0x82169B44;
	sub_821699F8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82169B48;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25520, ctx.r3.u32);
	// bne 0x82169b3c
	if (!ctx.cr0.eq) goto loc_82169B3C;
loc_82169B54:
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

PPC_WEAK_FUNC(sub_82169B18) {
	__imp__sub_82169B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82169B6C) {
	__imp__sub_82169B6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169B70) {
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
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r11,27468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27468);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169bc0
	if (ctx.cr6.eq) goto loc_82169BC0;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,28556(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28556, ctx.r10.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8215c868
	ctx.lr = 0x82169BAC;
	sub_8215C868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82169bbc
	if (!ctx.cr6.eq) goto loc_82169BBC;
loc_82169BB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82169c34
	goto loc_82169C34;
loc_82169BBC:
	// lwz r11,27468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27468);
loc_82169BC0:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 + 156;
	// stw r11,28008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28008, ctx.r11.u32);
	// bl 0x8215b9f0
	ctx.lr = 0x82169BD0;
	sub_8215B9F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82169bb4
	if (ctx.cr6.eq) goto loc_82169BB4;
	// lwz r11,27468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27468);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169c08
	if (ctx.cr6.eq) goto loc_82169C08;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,27320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27320, ctx.r10.u32);
	// lhz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 168);
	// bl 0x82168c48
	ctx.lr = 0x82169BFC;
	sub_82168C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82169bb4
	if (ctx.cr6.eq) goto loc_82169BB4;
	// lwz r11,27468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27468);
loc_82169C08:
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169c30
	if (ctx.cr6.eq) goto loc_82169C30;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,27320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27320, ctx.r10.u32);
	// lhz r3,170(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 170);
	// bl 0x82168c48
	ctx.lr = 0x82169C24;
	sub_82168C48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82169c34
	if (ctx.cr6.eq) goto loc_82169C34;
loc_82169C30:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82169C34:
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

PPC_WEAK_FUNC(sub_82169B70) {
	__imp__sub_82169B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82169C4C) {
	__imp__sub_82169C4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82169C58;
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
	// lwz r31,27468(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27468);
	// ble cr6,0x82169c94
	if (!ctx.cr6.gt) goto loc_82169C94;
loc_82169C74:
	// stw r31,27468(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27468, ctx.r31.u32);
	// bl 0x82169b70
	ctx.lr = 0x82169C7C;
	sub_82169B70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82169ca0
	if (ctx.cr6.eq) goto loc_82169CA0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82169c74
	if (ctx.cr6.lt) goto loc_82169C74;
loc_82169C94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82169CA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82169C50) {
	__imp__sub_82169C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82169CAC) {
	__imp__sub_82169CAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169CB0) {
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
	// lwz r11,27216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27216);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82169d28
	if (ctx.cr6.eq) goto loc_82169D28;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27468, ctx.r3.u32);
	// bl 0x821757b0
	ctx.lr = 0x82169CE8;
	sub_821757B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82169d28
	if (!ctx.cr6.eq) goto loc_82169D28;
	// bl 0x82169b70
	ctx.lr = 0x82169CF4;
	sub_82169B70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82169d10
	if (!ctx.cr6.eq) goto loc_82169D10;
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
loc_82169D10:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27468);
	// bl 0x821757b0
	ctx.lr = 0x82169D1C;
	sub_821757B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82169d2c
	if (ctx.cr6.eq) goto loc_82169D2C;
loc_82169D28:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82169D2C:
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

PPC_WEAK_FUNC(sub_82169CB0) {
	__imp__sub_82169CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82169D48;
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
	// lwz r31,27216(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27216);
	// ble cr6,0x82169d84
	if (!ctx.cr6.gt) goto loc_82169D84;
loc_82169D64:
	// stw r31,27216(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27216, ctx.r31.u32);
	// bl 0x82169cb0
	ctx.lr = 0x82169D6C;
	sub_82169CB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82169d90
	if (ctx.cr6.eq) goto loc_82169D90;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82169d64
	if (ctx.cr6.lt) goto loc_82169D64;
loc_82169D84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82169D90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82169D40) {
	__imp__sub_82169D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82169D9C) {
	__imp__sub_82169D9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169DA0) {
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
	// lwz r4,25120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25120);
	// bl 0x821778d8
	ctx.lr = 0x82169DC0;
	sub_821778D8(ctx, base);
	// lwz r11,25120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25120);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26440, ctx.r11.u32);
	// bl 0x8215d9c8
	ctx.lr = 0x82169DD8;
	sub_8215D9C8(ctx, base);
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

PPC_WEAK_FUNC(sub_82169DA0) {
	__imp__sub_82169DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82169DEC) {
	__imp__sub_82169DEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82169DF8;
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
	// lwz r4,25120(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25120);
	// bl 0x821778d8
	ctx.lr = 0x82169E10;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,25120(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25120);
	// ble cr6,0x82169e54
	if (!ctx.cr6.gt) goto loc_82169E54;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82169E20:
	// stw r31,25120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25120, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82169E34;
	sub_821778D8(ctx, base);
	// lwz r11,25120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25120);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26440(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26440, ctx.r11.u32);
	// bl 0x8215d9c8
	ctx.lr = 0x82169E48;
	sub_8215D9C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82169e20
	if (!ctx.cr0.eq) goto loc_82169E20;
loc_82169E54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82169DF0) {
	__imp__sub_82169DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82169E5C) {
	__imp__sub_82169E5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82169E68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82169eb8
	if (!ctx.cr6.gt) goto loc_82169EB8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25120);
loc_82169E84:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82169E90;
	sub_821778D8(ctx, base);
	// lwz r11,25120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25120);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26440(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26440, ctx.r11.u32);
	// bl 0x8215d9c8
	ctx.lr = 0x82169EA4;
	sub_8215D9C8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82169EA8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25120, ctx.r3.u32);
	// bne 0x82169e84
	if (!ctx.cr0.eq) goto loc_82169E84;
loc_82169EB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82169E60) {
	__imp__sub_82169E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169EC0) {
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
	// lwz r11,26456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26456);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82169f1c
	if (!ctx.cr6.eq) goto loc_82169F1C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169f4c
	if (ctx.cr6.eq) goto loc_82169F4C;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,28224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28224);
	// stw r4,26360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26360, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82169F08;
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
loc_82169F1C:
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,28224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28224);
	// stw r4,25120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25120, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82169F34;
	sub_821778D8(ctx, base);
	// lwz r11,25120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25120);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26440, ctx.r11.u32);
	// bl 0x8215d9c8
	ctx.lr = 0x82169F4C;
	sub_8215D9C8(ctx, base);
loc_82169F4C:
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

PPC_WEAK_FUNC(sub_82169EC0) {
	__imp__sub_82169EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82169F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28224(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28224);
	// bl 0x821778d8
	ctx.lr = 0x82169F80;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28224(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28224);
	// ble cr6,0x82169fa4
	if (!ctx.cr6.gt) goto loc_82169FA4;
loc_82169F8C:
	// stw r30,28224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28224, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82169ec0
	ctx.lr = 0x82169F98;
	sub_82169EC0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82169f8c
	if (!ctx.cr0.eq) goto loc_82169F8C;
loc_82169FA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82169F60) {
	__imp__sub_82169F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82169FAC) {
	__imp__sub_82169FAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82169FB0) {
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
	// ble cr6,0x82169fec
	if (!ctx.cr6.gt) goto loc_82169FEC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82169FD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82169ec0
	ctx.lr = 0x82169FDC;
	sub_82169EC0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82169FE0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28224, ctx.r3.u32);
	// bne 0x82169fd4
	if (!ctx.cr0.eq) goto loc_82169FD4;
loc_82169FEC:
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

PPC_WEAK_FUNC(sub_82169FB0) {
	__imp__sub_82169FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A004) {
	__imp__sub_8216A004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A008) {
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
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,26456(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26456);
	// bl 0x821778d8
	ctx.lr = 0x8216A028;
	sub_821778D8(ctx, base);
	// lwz r11,26456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26456);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28224, ctx.r11.u32);
	// bl 0x82169ec0
	ctx.lr = 0x8216A040;
	sub_82169EC0(ctx, base);
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

PPC_WEAK_FUNC(sub_8216A008) {
	__imp__sub_8216A008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A054) {
	__imp__sub_8216A054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216A060;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26456(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26456);
	// bl 0x821778d8
	ctx.lr = 0x8216A080;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,26456(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26456);
	// ble cr6,0x8216a0c4
	if (!ctx.cr6.gt) goto loc_8216A0C4;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8216A090:
	// stw r31,26456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26456, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216A0A4;
	sub_821778D8(ctx, base);
	// lwz r11,26456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26456);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28224(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28224, ctx.r11.u32);
	// bl 0x82169ec0
	ctx.lr = 0x8216A0B8;
	sub_82169EC0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x8216a090
	if (!ctx.cr0.eq) goto loc_8216A090;
loc_8216A0C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A058) {
	__imp__sub_8216A058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A0CC) {
	__imp__sub_8216A0CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216A0D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216a128
	if (!ctx.cr6.gt) goto loc_8216A128;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,26456(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26456);
loc_8216A0F4:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216A100;
	sub_821778D8(ctx, base);
	// lwz r11,26456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26456);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28224, ctx.r11.u32);
	// bl 0x82169ec0
	ctx.lr = 0x8216A114;
	sub_82169EC0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216A118;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26456, ctx.r3.u32);
	// bne 0x8216a0f4
	if (!ctx.cr0.eq) goto loc_8216A0F4;
loc_8216A128:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A0D0) {
	__imp__sub_8216A0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A130) {
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
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r4,26116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
	// bl 0x821778d8
	ctx.lr = 0x8216A150;
	sub_821778D8(ctx, base);
	// lwz r11,26116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216a194
	if (ctx.cr6.eq) goto loc_8216A194;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216A168;
	sub_82177868(ctx, base);
	// lwz r11,26116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,26456(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26456, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216a058
	ctx.lr = 0x8216A190;
	sub_8216A058(ctx, base);
	// lwz r11,26116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
loc_8216A194:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25872, ctx.r11.u32);
	// bl 0x8216ea78
	ctx.lr = 0x8216A1A8;
	sub_8216EA78(ctx, base);
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

PPC_WEAK_FUNC(sub_8216A130) {
	__imp__sub_8216A130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A1BC) {
	__imp__sub_8216A1BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8216A1C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
	// bl 0x821778d8
	ctx.lr = 0x8216A1E8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,26116(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
	// ble cr6,0x8216a26c
	if (!ctx.cr6.gt) goto loc_8216A26C;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8216A1FC:
	// stw r29,26116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26116, ctx.r29.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216A210;
	sub_821778D8(ctx, base);
	// lwz r11,26116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216a250
	if (ctx.cr6.eq) goto loc_8216A250;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216A228;
	sub_82177868(ctx, base);
	// lwz r11,26116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,26456(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26456, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216a058
	ctx.lr = 0x8216A24C;
	sub_8216A058(ctx, base);
	// lwz r11,26116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
loc_8216A250:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25872(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25872, ctx.r11.u32);
	// bl 0x8216ea78
	ctx.lr = 0x8216A260;
	sub_8216EA78(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x8216a1fc
	if (!ctx.cr0.eq) goto loc_8216A1FC;
loc_8216A26C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A1C0) {
	__imp__sub_8216A1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A274) {
	__imp__sub_8216A274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216A280;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216a310
	if (!ctx.cr6.gt) goto loc_8216A310;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,26116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
loc_8216A2A0:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216A2AC;
	sub_821778D8(ctx, base);
	// lwz r11,26116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216a2ec
	if (ctx.cr6.eq) goto loc_8216A2EC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216A2C4;
	sub_82177868(ctx, base);
	// lwz r11,26116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,26456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26456, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216a058
	ctx.lr = 0x8216A2E8;
	sub_8216A058(ctx, base);
	// lwz r11,26116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26116);
loc_8216A2EC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25872(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25872, ctx.r11.u32);
	// bl 0x8216ea78
	ctx.lr = 0x8216A2FC;
	sub_8216EA78(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216A300;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26116, ctx.r3.u32);
	// bne 0x8216a2a0
	if (!ctx.cr0.eq) goto loc_8216A2A0;
loc_8216A310:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A278) {
	__imp__sub_8216A278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216A320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// li r5,140
	ctx.r5.s64 = 140;
	// lwz r4,27236(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27236);
	// bl 0x821778d8
	ctx.lr = 0x8216A334;
	sub_821778D8(ctx, base);
	// lwz r4,27236(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27236);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,26528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26528, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216A34C;
	sub_821778D8(ctx, base);
	// li r30,31
	ctx.r30.s64 = 31;
	// lwz r29,26528(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26528);
loc_8216A354:
	// stw r29,26528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26528, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82168798
	ctx.lr = 0x8216A360;
	sub_82168798(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8216a354
	if (!ctx.cr0.eq) goto loc_8216A354;
	// lwz r11,27236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27236);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// stw r4,26528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26528, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216A384;
	sub_821778D8(ctx, base);
	// li r30,4
	ctx.r30.s64 = 4;
	// lwz r29,26528(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26528);
loc_8216A38C:
	// stw r29,26528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26528, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82168798
	ctx.lr = 0x8216A398;
	sub_82168798(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8216a38c
	if (!ctx.cr0.eq) goto loc_8216A38C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A318) {
	__imp__sub_8216A318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A3AC) {
	__imp__sub_8216A3AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216A3B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,140
	ctx.r5.s64 = ctx.r4.s64 * 140;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27236(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27236);
	// bl 0x821778d8
	ctx.lr = 0x8216A3D0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27236(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27236);
	// ble cr6,0x8216a3f4
	if (!ctx.cr6.gt) goto loc_8216A3F4;
loc_8216A3DC:
	// stw r30,27236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27236, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216a318
	ctx.lr = 0x8216A3E8;
	sub_8216A318(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// bne 0x8216a3dc
	if (!ctx.cr0.eq) goto loc_8216A3DC;
loc_8216A3F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A3B0) {
	__imp__sub_8216A3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A3FC) {
	__imp__sub_8216A3FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A400) {
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
	// ble cr6,0x8216a43c
	if (!ctx.cr6.gt) goto loc_8216A43C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216A424:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216a318
	ctx.lr = 0x8216A42C;
	sub_8216A318(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216A430;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27236, ctx.r3.u32);
	// bne 0x8216a424
	if (!ctx.cr0.eq) goto loc_8216A424;
loc_8216A43C:
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

PPC_WEAK_FUNC(sub_8216A400) {
	__imp__sub_8216A400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A454) {
	__imp__sub_8216A454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216A460;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,28344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28344);
	// bl 0x821778d8
	ctx.lr = 0x8216A474;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8216A47C;
	sub_82177758(ctx, base);
	// lwz r11,28344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28344);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216A490;
	sub_82147188(ctx, base);
	// lwz r11,28344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28344);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216a4ec
	if (ctx.cr6.eq) goto loc_8216A4EC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216A4A8;
	sub_82177868(ctx, base);
	// lwz r11,28344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28344);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r5,2100
	ctx.r5.s64 = 2100;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28344);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,27236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27236, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216A4CC;
	sub_821778D8(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
	// lwz r29,27236(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27236);
loc_8216A4D4:
	// stw r29,27236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27236, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216a318
	ctx.lr = 0x8216A4E0;
	sub_8216A318(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// bne 0x8216a4d4
	if (!ctx.cr0.eq) goto loc_8216A4D4;
loc_8216A4EC:
	// bl 0x821777e0
	ctx.lr = 0x8216A4F0;
	sub_821777E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A458) {
	__imp__sub_8216A458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216A500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28344(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28344);
	// bl 0x821778d8
	ctx.lr = 0x8216A518;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28344(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28344);
	// ble cr6,0x8216a53c
	if (!ctx.cr6.gt) goto loc_8216A53C;
loc_8216A524:
	// stw r30,28344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28344, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216a458
	ctx.lr = 0x8216A530;
	sub_8216A458(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8216a524
	if (!ctx.cr0.eq) goto loc_8216A524;
loc_8216A53C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A4F8) {
	__imp__sub_8216A4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A544) {
	__imp__sub_8216A544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A548) {
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
	// ble cr6,0x8216a584
	if (!ctx.cr6.gt) goto loc_8216A584;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216A56C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216a458
	ctx.lr = 0x8216A574;
	sub_8216A458(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216A578;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28344, ctx.r3.u32);
	// bne 0x8216a56c
	if (!ctx.cr0.eq) goto loc_8216A56C;
loc_8216A584:
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

PPC_WEAK_FUNC(sub_8216A548) {
	__imp__sub_8216A548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A59C) {
	__imp__sub_8216A59C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A5A0) {
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
	// lwz r4,25784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25784);
	// bl 0x821778d8
	ctx.lr = 0x8216A5C4;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8216A5CC;
	sub_82177758(ctx, base);
	// lwz r3,25784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25784);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216a650
	if (ctx.cr6.eq) goto loc_8216A650;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8216a5f4
	if (ctx.cr6.eq) goto loc_8216A5F4;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8216a5f4
	if (ctx.cr6.eq) goto loc_8216A5F4;
	// bl 0x82177950
	ctx.lr = 0x8216A5F0;
	sub_82177950(ctx, base);
	// b 0x8216a650
	goto loc_8216A650;
loc_8216A5F4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216A5FC;
	sub_82177868(ctx, base);
	// lwz r11,25784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25784);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,25784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25784);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28344, ctx.r11.u32);
	// bne cr6,0x8216a628
	if (!ctx.cr6.eq) goto loc_8216A628;
	// bl 0x82177898
	ctx.lr = 0x8216A620;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8216a62c
	goto loc_8216A62C;
loc_8216A628:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8216A62C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216a458
	ctx.lr = 0x8216A634;
	sub_8216A458(ctx, base);
	// lwz r3,25784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25784);
	// bl 0x82175fe0
	ctx.lr = 0x8216A63C;
	sub_82175FE0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216a650
	if (ctx.cr6.eq) goto loc_8216A650;
	// lwz r11,25784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25784);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8216A650:
	// bl 0x821777e0
	ctx.lr = 0x8216A654;
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

PPC_WEAK_FUNC(sub_8216A5A0) {
	__imp__sub_8216A5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A66C) {
	__imp__sub_8216A66C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216A678;
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
	// lwz r4,25784(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25784);
	// bl 0x821778d8
	ctx.lr = 0x8216A690;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25784(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25784);
	// ble cr6,0x8216a6b4
	if (!ctx.cr6.gt) goto loc_8216A6B4;
loc_8216A69C:
	// stw r30,25784(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25784, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216a5a0
	ctx.lr = 0x8216A6A8;
	sub_8216A5A0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8216a69c
	if (!ctx.cr0.eq) goto loc_8216A69C;
loc_8216A6B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A670) {
	__imp__sub_8216A670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A6BC) {
	__imp__sub_8216A6BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A6C0) {
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
	// ble cr6,0x8216a6fc
	if (!ctx.cr6.gt) goto loc_8216A6FC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216A6E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216a5a0
	ctx.lr = 0x8216A6EC;
	sub_8216A5A0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216A6F0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25784, ctx.r3.u32);
	// bne 0x8216a6e4
	if (!ctx.cr0.eq) goto loc_8216A6E4;
loc_8216A6FC:
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

PPC_WEAK_FUNC(sub_8216A6C0) {
	__imp__sub_8216A6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A714) {
	__imp__sub_8216A714(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216A720;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lwz r31,27600(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27600);
loc_8216A734:
	// stw r31,27976(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27976, ctx.r31.u32);
	// bl 0x82168910
	ctx.lr = 0x8216A73C;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216a78c
	if (ctx.cr6.eq) goto loc_8216A78C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 31, ctx.xer);
	// blt cr6,0x8216a734
	if (ctx.cr6.lt) goto loc_8216A734;
	// lwz r11,27600(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27600);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,124
	ctx.r31.s64 = ctx.r11.s64 + 124;
loc_8216A760:
	// stw r31,27976(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27976, ctx.r31.u32);
	// bl 0x82168910
	ctx.lr = 0x8216A768;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216a78c
	if (ctx.cr6.eq) goto loc_8216A78C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8216a760
	if (ctx.cr6.lt) goto loc_8216A760;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8216A78C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A718) {
	__imp__sub_8216A718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216A7A0;
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
	// lwz r31,27600(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27600);
	// ble cr6,0x8216a7dc
	if (!ctx.cr6.gt) goto loc_8216A7DC;
loc_8216A7BC:
	// stw r31,27600(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27600, ctx.r31.u32);
	// bl 0x8216a718
	ctx.lr = 0x8216A7C4;
	sub_8216A718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216a7e8
	if (ctx.cr6.eq) goto loc_8216A7E8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216a7bc
	if (ctx.cr6.lt) goto loc_8216A7BC;
loc_8216A7DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8216A7E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A798) {
	__imp__sub_8216A798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A7F4) {
	__imp__sub_8216A7F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216A800;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,27324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27324);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216a844
	if (ctx.cr6.eq) goto loc_8216A844;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8216A824:
	// stw r31,27600(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27600, ctx.r31.u32);
	// bl 0x8216a718
	ctx.lr = 0x8216A82C;
	sub_8216A718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216a850
	if (ctx.cr6.eq) goto loc_8216A850;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// blt cr6,0x8216a824
	if (ctx.cr6.lt) goto loc_8216A824;
loc_8216A844:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8216A850:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A7F8) {
	__imp__sub_8216A7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A85C) {
	__imp__sub_8216A85C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216A868;
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
	// lwz r31,27324(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27324);
	// ble cr6,0x8216a8a4
	if (!ctx.cr6.gt) goto loc_8216A8A4;
loc_8216A884:
	// stw r31,27324(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27324, ctx.r31.u32);
	// bl 0x8216a7f8
	ctx.lr = 0x8216A88C;
	sub_8216A7F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216a8b0
	if (ctx.cr6.eq) goto loc_8216A8B0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216a884
	if (ctx.cr6.lt) goto loc_8216A884;
loc_8216A8A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8216A8B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A860) {
	__imp__sub_8216A860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A8BC) {
	__imp__sub_8216A8BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A8C0) {
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
	// lwz r11,26732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26732);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216a938
	if (ctx.cr6.eq) goto loc_8216A938;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27324, ctx.r3.u32);
	// bl 0x82176060
	ctx.lr = 0x8216A8F8;
	sub_82176060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216a938
	if (!ctx.cr6.eq) goto loc_8216A938;
	// bl 0x8216a7f8
	ctx.lr = 0x8216A904;
	sub_8216A7F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216a920
	if (!ctx.cr6.eq) goto loc_8216A920;
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
loc_8216A920:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27324);
	// bl 0x82176060
	ctx.lr = 0x8216A92C;
	sub_82176060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8216a93c
	if (ctx.cr6.eq) goto loc_8216A93C;
loc_8216A938:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8216A93C:
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

PPC_WEAK_FUNC(sub_8216A8C0) {
	__imp__sub_8216A8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216A958;
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
	// lwz r31,26732(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26732);
	// ble cr6,0x8216a994
	if (!ctx.cr6.gt) goto loc_8216A994;
loc_8216A974:
	// stw r31,26732(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26732, ctx.r31.u32);
	// bl 0x8216a8c0
	ctx.lr = 0x8216A97C;
	sub_8216A8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216a9a0
	if (ctx.cr6.eq) goto loc_8216A9A0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216a974
	if (ctx.cr6.lt) goto loc_8216A974;
loc_8216A994:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8216A9A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A950) {
	__imp__sub_8216A950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216A9AC) {
	__imp__sub_8216A9AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216A9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8216A9B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r5,1668
	ctx.r5.s64 = 1668;
	// lwz r4,25932(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// bl 0x821778d8
	ctx.lr = 0x8216A9CC;
	sub_821778D8(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lis r24,-32142
	ctx.r24.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216A9E0;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aa50
	if (ctx.cr6.eq) goto loc_8216AA50;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216aa4c
	if (!ctx.cr6.eq) goto loc_8216AA4C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216AA08;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,25568(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25568, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AA28;
	sub_821778D8(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// lwz r29,25568(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25568);
loc_8216AA30:
	// stw r29,25568(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25568, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155df0
	ctx.lr = 0x8216AA3C;
	sub_82155DF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8216aa30
	if (!ctx.cr0.eq) goto loc_8216AA30;
	// b 0x8216aa50
	goto loc_8216AA50;
loc_8216AA4C:
	// bl 0x82177978
	ctx.lr = 0x8216AA50;
	sub_82177978(ctx, base);
loc_8216AA50:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,25568(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x8216AA64;
	sub_82155DF0(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aab0
	if (ctx.cr6.eq) goto loc_8216AAB0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216aaac
	if (!ctx.cr6.eq) goto loc_8216AAAC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216AA88;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r4,37
	ctx.r4.s64 = 37;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8216AAA8;
	sub_82147218(ctx, base);
	// b 0x8216aab0
	goto loc_8216AAB0;
loc_8216AAAC:
	// bl 0x82177978
	ctx.lr = 0x8216AAB0;
	sub_82177978(ctx, base);
loc_8216AAB0:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216aafc
	if (ctx.cr6.eq) goto loc_8216AAFC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216aaf8
	if (!ctx.cr6.eq) goto loc_8216AAF8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216AAD4;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r4,37
	ctx.r4.s64 = 37;
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8216AAF4;
	sub_82147218(ctx, base);
	// b 0x8216aafc
	goto loc_8216AAFC;
loc_8216AAF8:
	// bl 0x82177978
	ctx.lr = 0x8216AAFC;
	sub_82177978(ctx, base);
loc_8216AAFC:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216AB10;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ab90
	if (ctx.cr6.eq) goto loc_8216AB90;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216ab8c
	if (!ctx.cr6.eq) goto loc_8216AB8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x8216AB38;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r4,28440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28440, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AB58;
	sub_821778D8(ctx, base);
	// li r28,16
	ctx.r28.s64 = 16;
	// lwz r29,28440(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28440);
loc_8216AB60:
	// stw r29,28440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28440, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216AB74;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x8216AB7C;
	sub_8217E550(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bne 0x8216ab60
	if (!ctx.cr0.eq) goto loc_8216AB60;
	// b 0x8216ab90
	goto loc_8216AB90;
loc_8216AB8C:
	// bl 0x82177978
	ctx.lr = 0x8216AB90;
	sub_82177978(ctx, base);
loc_8216AB90:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ac0c
	if (ctx.cr6.eq) goto loc_8216AC0C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216ac08
	if (!ctx.cr6.eq) goto loc_8216AC08;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x8216ABB4;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r4,28440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28440, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216ABD4;
	sub_821778D8(ctx, base);
	// li r28,16
	ctx.r28.s64 = 16;
	// lwz r29,28440(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28440);
loc_8216ABDC:
	// stw r29,28440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28440, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216ABF0;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x8216ABF8;
	sub_8217E550(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bne 0x8216abdc
	if (!ctx.cr0.eq) goto loc_8216ABDC;
	// b 0x8216ac0c
	goto loc_8216AC0C;
loc_8216AC08:
	// bl 0x82177978
	ctx.lr = 0x8216AC0C;
	sub_82177978(ctx, base);
loc_8216AC0C:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ac88
	if (ctx.cr6.eq) goto loc_8216AC88;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216ac84
	if (!ctx.cr6.eq) goto loc_8216AC84;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x8216AC30;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r4,28440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28440, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AC50;
	sub_821778D8(ctx, base);
	// li r28,16
	ctx.r28.s64 = 16;
	// lwz r29,28440(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28440);
loc_8216AC58:
	// stw r29,28440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28440, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216AC6C;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x8216AC74;
	sub_8217E550(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bne 0x8216ac58
	if (!ctx.cr0.eq) goto loc_8216AC58;
	// b 0x8216ac88
	goto loc_8216AC88;
loc_8216AC84:
	// bl 0x82177978
	ctx.lr = 0x8216AC88;
	sub_82177978(ctx, base);
loc_8216AC88:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216ad04
	if (ctx.cr6.eq) goto loc_8216AD04;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216ad00
	if (!ctx.cr6.eq) goto loc_8216AD00;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x8216ACAC;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r4,28440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28440, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216ACCC;
	sub_821778D8(ctx, base);
	// li r28,16
	ctx.r28.s64 = 16;
	// lwz r29,28440(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28440);
loc_8216ACD4:
	// stw r29,28440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28440, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216ACE8;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x8216ACF0;
	sub_8217E550(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bne 0x8216acd4
	if (!ctx.cr0.eq) goto loc_8216ACD4;
	// b 0x8216ad04
	goto loc_8216AD04;
loc_8216AD00:
	// bl 0x82177978
	ctx.lr = 0x8216AD04;
	sub_82177978(ctx, base);
loc_8216AD04:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// stw r11,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x8216AD1C;
	sub_82168798(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// stw r11,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x8216AD30;
	sub_82168798(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// addi r4,r11,80
	ctx.r4.s64 = ctx.r11.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AD4C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AD54;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,84
	ctx.r4.s64 = ctx.r11.s64 + 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AD6C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AD74;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AD8C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AD94;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216ADAC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216ADB4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216ADCC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216ADD4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,100
	ctx.r4.s64 = ctx.r11.s64 + 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216ADEC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216ADF4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,104
	ctx.r4.s64 = ctx.r11.s64 + 104;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AE0C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AE14;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,108
	ctx.r4.s64 = ctx.r11.s64 + 108;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AE2C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AE34;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AE4C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AE54;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,116
	ctx.r4.s64 = ctx.r11.s64 + 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AE6C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AE74;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AE8C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AE94;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AEAC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AEB4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AECC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AED4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,132
	ctx.r4.s64 = ctx.r11.s64 + 132;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AEEC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AEF4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,136
	ctx.r4.s64 = ctx.r11.s64 + 136;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AF0C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AF14;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,140
	ctx.r4.s64 = ctx.r11.s64 + 140;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AF2C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AF34;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,144
	ctx.r4.s64 = ctx.r11.s64 + 144;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AF4C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AF54;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,148
	ctx.r4.s64 = ctx.r11.s64 + 148;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AF6C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AF74;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,152
	ctx.r4.s64 = ctx.r11.s64 + 152;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AF8C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AF94;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,156
	ctx.r4.s64 = ctx.r11.s64 + 156;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AFAC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AFB4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,160
	ctx.r4.s64 = ctx.r11.s64 + 160;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AFCC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AFD4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,164
	ctx.r4.s64 = ctx.r11.s64 + 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216AFEC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216AFF4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,168
	ctx.r4.s64 = ctx.r11.s64 + 168;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B00C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B014;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,172
	ctx.r4.s64 = ctx.r11.s64 + 172;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B02C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B034;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B04C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B054;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,180
	ctx.r4.s64 = ctx.r11.s64 + 180;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B06C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B074;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,184
	ctx.r4.s64 = ctx.r11.s64 + 184;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B08C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B094;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,188
	ctx.r4.s64 = ctx.r11.s64 + 188;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B0AC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B0B4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,192
	ctx.r4.s64 = ctx.r11.s64 + 192;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B0CC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B0D4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,196
	ctx.r4.s64 = ctx.r11.s64 + 196;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B0EC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B0F4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B10C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B114;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,204
	ctx.r4.s64 = ctx.r11.s64 + 204;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B12C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B134;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,208
	ctx.r4.s64 = ctx.r11.s64 + 208;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B14C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B154;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,212
	ctx.r4.s64 = ctx.r11.s64 + 212;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B16C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B174;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,216
	ctx.r4.s64 = ctx.r11.s64 + 216;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B18C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B194;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,220
	ctx.r4.s64 = ctx.r11.s64 + 220;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B1AC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B1B4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B1CC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B1D4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,228
	ctx.r4.s64 = ctx.r11.s64 + 228;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B1EC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B1F4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B20C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B214;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,236
	ctx.r4.s64 = ctx.r11.s64 + 236;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B22C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B234;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B24C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B254;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,244
	ctx.r4.s64 = ctx.r11.s64 + 244;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B26C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B274;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,248
	ctx.r4.s64 = ctx.r11.s64 + 248;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B28C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B294;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,252
	ctx.r4.s64 = ctx.r11.s64 + 252;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B2AC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B2B4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B2CC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B2D4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,260
	ctx.r4.s64 = ctx.r11.s64 + 260;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B2EC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B2F4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,264
	ctx.r4.s64 = ctx.r11.s64 + 264;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B30C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B314;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// addi r3,r11,268
	ctx.r3.s64 = ctx.r11.s64 + 268;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b390
	if (ctx.cr6.eq) goto loc_8216B390;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216b38c
	if (!ctx.cr6.eq) goto loc_8216B38C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216B338;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,124
	ctx.r5.s64 = 124;
	// stw r3,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r4,268(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B358;
	sub_821778D8(ctx, base);
	// li r27,31
	ctx.r27.s64 = 31;
	// lwz r28,27172(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
loc_8216B360:
	// stw r28,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216B374;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B37C;
	sub_822DD938(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8216b360
	if (!ctx.cr0.eq) goto loc_8216B360;
	// b 0x8216b390
	goto loc_8216B390;
loc_8216B38C:
	// bl 0x82177978
	ctx.lr = 0x8216B390;
	sub_82177978(ctx, base);
loc_8216B390:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// stw r11,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x8216B3A4;
	sub_82168798(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 + 276;
	// stw r11,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x8216B3B8;
	sub_82168798(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// stw r11,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x8216B3CC;
	sub_82168798(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// stw r11,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x8216B3E0;
	sub_82168798(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// addi r11,r11,288
	ctx.r11.s64 = ctx.r11.s64 + 288;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216B3F8;
	sub_82152400(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216B40C;
	sub_82152400(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// addi r3,r11,472
	ctx.r3.s64 = ctx.r11.s64 + 472;
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b478
	if (ctx.cr6.eq) goto loc_8216B478;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216b474
	if (!ctx.cr6.eq) goto loc_8216B474;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216B430;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 472, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r4,472(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// stw r4,25568(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25568, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B450;
	sub_821778D8(ctx, base);
	// li r27,16
	ctx.r27.s64 = 16;
	// lwz r26,25568(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 25568);
loc_8216B458:
	// stw r26,25568(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25568, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155df0
	ctx.lr = 0x8216B464;
	sub_82155DF0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x8216b458
	if (!ctx.cr0.eq) goto loc_8216B458;
	// b 0x8216b478
	goto loc_8216B478;
loc_8216B474:
	// bl 0x82177978
	ctx.lr = 0x8216B478;
	sub_82177978(ctx, base);
loc_8216B478:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 + 476;
	// stw r11,25568(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x8216B48C;
	sub_82155DF0(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,480
	ctx.r11.s64 = ctx.r11.s64 + 480;
	// stw r11,25568(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x8216B4A0;
	sub_82155DF0(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,484
	ctx.r11.s64 = ctx.r11.s64 + 484;
	// stw r11,25568(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x8216B4B4;
	sub_82155DF0(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,488
	ctx.r11.s64 = ctx.r11.s64 + 488;
	// stw r11,25568(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x8216B4C8;
	sub_82155DF0(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216B4DC;
	sub_82152400(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,500
	ctx.r11.s64 = ctx.r11.s64 + 500;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216B4F0;
	sub_82152400(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,508
	ctx.r11.s64 = ctx.r11.s64 + 508;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216B504;
	sub_82152400(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,524
	ctx.r11.s64 = ctx.r11.s64 + 524;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216B518;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,532
	ctx.r11.s64 = ctx.r11.s64 + 532;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216B52C;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,548
	ctx.r11.s64 = ctx.r11.s64 + 548;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216B540;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,776
	ctx.r11.s64 = ctx.r11.s64 + 776;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216B554;
	sub_82152400(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,780
	ctx.r11.s64 = ctx.r11.s64 + 780;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216B568;
	sub_82152400(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,784
	ctx.r11.s64 = ctx.r11.s64 + 784;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216B57C;
	sub_82152400(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,788
	ctx.r11.s64 = ctx.r11.s64 + 788;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216B590;
	sub_82152400(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,968
	ctx.r11.s64 = ctx.r11.s64 + 968;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28520, ctx.r11.u32);
	// bl 0x82155018
	ctx.lr = 0x8216B5A8;
	sub_82155018(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// stw r11,25568(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x8216B5BC;
	sub_82155DF0(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1064
	ctx.r11.s64 = ctx.r11.s64 + 1064;
	// stw r11,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x8216B5D0;
	sub_82168798(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1068
	ctx.r11.s64 = ctx.r11.s64 + 1068;
	// stw r11,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x8216B5E4;
	sub_82168798(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,1072
	ctx.r4.s64 = ctx.r11.s64 + 1072;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B5FC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B604;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,1076
	ctx.r4.s64 = ctx.r11.s64 + 1076;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B61C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B624;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// addi r3,r11,1092
	ctx.r3.s64 = ctx.r11.s64 + 1092;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b674
	if (ctx.cr6.eq) goto loc_8216B674;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216b670
	if (!ctx.cr6.eq) goto loc_8216B670;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216B64C;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,124
	ctx.r5.s64 = 124;
	// stw r3,1092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1092, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r4,1092(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// stw r4,24988(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24988, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B66C;
	sub_821778D8(ctx, base);
	// b 0x8216b674
	goto loc_8216B674;
loc_8216B670:
	// bl 0x82177978
	ctx.lr = 0x8216B674;
	sub_82177978(ctx, base);
loc_8216B674:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// addi r3,r11,1096
	ctx.r3.s64 = ctx.r11.s64 + 1096;
	// lwz r11,1096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b6c0
	if (ctx.cr6.eq) goto loc_8216B6C0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216b6bc
	if (!ctx.cr6.eq) goto loc_8216B6BC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216B698;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,124
	ctx.r5.s64 = 124;
	// stw r3,1096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1096, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r4,1096(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1096);
	// stw r4,24988(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24988, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B6B8;
	sub_821778D8(ctx, base);
	// b 0x8216b6c0
	goto loc_8216B6C0;
loc_8216B6BC:
	// bl 0x82177978
	ctx.lr = 0x8216B6C0;
	sub_82177978(ctx, base);
loc_8216B6C0:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1100
	ctx.r11.s64 = ctx.r11.s64 + 1100;
	// stw r11,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x8216B6D4;
	sub_82168798(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 + 1104;
	// stw r11,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x8216B6E8;
	sub_82168798(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1132
	ctx.r11.s64 = ctx.r11.s64 + 1132;
	// stw r11,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x8216B6FC;
	sub_82168798(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,1136
	ctx.r4.s64 = ctx.r11.s64 + 1136;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B714;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B71C;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1292
	ctx.r11.s64 = ctx.r11.s64 + 1292;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216B730;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// addi r3,r11,1300
	ctx.r3.s64 = ctx.r11.s64 + 1300;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lwz r11,1300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b790
	if (ctx.cr6.eq) goto loc_8216B790;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216b78c
	if (!ctx.cr6.eq) goto loc_8216B78C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216B75C;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,1300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1300, ctx.r10.u32);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r10,25764(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25764);
	// lwz r4,1300(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1300);
	// stw r4,25820(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25820, ctx.r4.u32);
	// lhz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 100);
	// rotlwi r5,r9,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// bl 0x821778d8
	ctx.lr = 0x8216B788;
	sub_821778D8(ctx, base);
	// b 0x8216b790
	goto loc_8216B790;
loc_8216B78C:
	// bl 0x82177978
	ctx.lr = 0x8216B790;
	sub_82177978(ctx, base);
loc_8216B790:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1296
	ctx.r11.s64 = ctx.r11.s64 + 1296;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216B7A4;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// addi r3,r11,1304
	ctx.r3.s64 = ctx.r11.s64 + 1304;
	// lwz r11,1304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b7fc
	if (ctx.cr6.eq) goto loc_8216B7FC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216b7f8
	if (!ctx.cr6.eq) goto loc_8216B7F8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216B7C8;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,1304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1304, ctx.r10.u32);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r10,25764(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25764);
	// lwz r4,1304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1304);
	// stw r4,25820(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25820, ctx.r4.u32);
	// lhz r9,102(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 102);
	// rotlwi r5,r9,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// bl 0x821778d8
	ctx.lr = 0x8216B7F4;
	sub_821778D8(ctx, base);
	// b 0x8216b7fc
	goto loc_8216B7FC;
loc_8216B7F8:
	// bl 0x82177978
	ctx.lr = 0x8216B7FC;
	sub_82177978(ctx, base);
loc_8216B7FC:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1384
	ctx.r11.s64 = ctx.r11.s64 + 1384;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216B810;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1388
	ctx.r11.s64 = ctx.r11.s64 + 1388;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216B824;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1420
	ctx.r11.s64 = ctx.r11.s64 + 1420;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216B838;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// addi r3,r11,1460
	ctx.r3.s64 = ctx.r11.s64 + 1460;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216b884
	if (ctx.cr6.eq) goto loc_8216B884;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216b880
	if (!ctx.cr6.eq) goto loc_8216B880;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216B85C;
	sub_82177868(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,80
	ctx.r5.s64 = 80;
	// stw r3,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lwz r4,1460(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
	// stw r4,24988(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24988, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B87C;
	sub_821778D8(ctx, base);
	// b 0x8216b884
	goto loc_8216B884;
loc_8216B880:
	// bl 0x82177978
	ctx.lr = 0x8216B884;
	sub_82177978(ctx, base);
loc_8216B884:
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1464
	ctx.r11.s64 = ctx.r11.s64 + 1464;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216B898;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1468
	ctx.r11.s64 = ctx.r11.s64 + 1468;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216B8AC;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,1472
	ctx.r11.s64 = ctx.r11.s64 + 1472;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28376, ctx.r11.u32);
	// bl 0x82160150
	ctx.lr = 0x8216B8C4;
	sub_82160150(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,1500
	ctx.r4.s64 = ctx.r11.s64 + 1500;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B8DC;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B8E4;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1504
	ctx.r11.s64 = ctx.r11.s64 + 1504;
	// stw r11,26528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26528, ctx.r11.u32);
	// bl 0x82168798
	ctx.lr = 0x8216B8F8;
	sub_82168798(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1508
	ctx.r11.s64 = ctx.r11.s64 + 1508;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216B90C;
	sub_82147188(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,1524
	ctx.r4.s64 = ctx.r11.s64 + 1524;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B924;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B92C;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,1528
	ctx.r4.s64 = ctx.r11.s64 + 1528;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B944;
	sub_821778D8(ctx, base);
	// li r28,4
	ctx.r28.s64 = 4;
	// lwz r29,27172(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
loc_8216B94C:
	// stw r29,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216B960;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B968;
	sub_822DD938(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8216b94c
	if (!ctx.cr0.eq) goto loc_8216B94C;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,1544
	ctx.r4.s64 = ctx.r11.s64 + 1544;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B98C;
	sub_821778D8(ctx, base);
	// li r28,4
	ctx.r28.s64 = 4;
	// lwz r29,27172(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
loc_8216B994:
	// stw r29,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216B9A8;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B9B0;
	sub_822DD938(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8216b994
	if (!ctx.cr0.eq) goto loc_8216B994;
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,1560
	ctx.r4.s64 = ctx.r11.s64 + 1560;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B9D4;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B9DC;
	sub_822DD938(ctx, base);
	// lwz r11,25932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25932);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,1564
	ctx.r4.s64 = ctx.r11.s64 + 1564;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216B9F4;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216B9FC;
	sub_822DD938(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216A9B0) {
	__imp__sub_8216A9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216BA04) {
	__imp__sub_8216BA04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216BA10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,1668
	ctx.r5.s64 = ctx.r4.s64 * 1668;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25932(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25932);
	// bl 0x821778d8
	ctx.lr = 0x8216BA28;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25932(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25932);
	// ble cr6,0x8216ba4c
	if (!ctx.cr6.gt) goto loc_8216BA4C;
loc_8216BA34:
	// stw r30,25932(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25932, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216a9b0
	ctx.lr = 0x8216BA40;
	sub_8216A9B0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,1668
	ctx.r30.s64 = ctx.r30.s64 + 1668;
	// bne 0x8216ba34
	if (!ctx.cr0.eq) goto loc_8216BA34;
loc_8216BA4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216BA08) {
	__imp__sub_8216BA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216BA54) {
	__imp__sub_8216BA54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BA58) {
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
	// ble cr6,0x8216ba94
	if (!ctx.cr6.gt) goto loc_8216BA94;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216BA7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216a9b0
	ctx.lr = 0x8216BA84;
	sub_8216A9B0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216BA88;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25932(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25932, ctx.r3.u32);
	// bne 0x8216ba7c
	if (!ctx.cr0.eq) goto loc_8216BA7C;
loc_8216BA94:
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

PPC_WEAK_FUNC(sub_8216BA58) {
	__imp__sub_8216BA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216BAAC) {
	__imp__sub_8216BAAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8216BAB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,116
	ctx.r5.s64 = 116;
	// lwz r4,25764(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// bl 0x821778d8
	ctx.lr = 0x8216BACC;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8216BAD4;
	sub_82177758(ctx, base);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216BAE8;
	sub_82147188(ctx, base);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216bb38
	if (ctx.cr6.eq) goto loc_8216BB38;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216bb34
	if (!ctx.cr6.eq) goto loc_8216BB34;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216BB0C;
	sub_82177868(ctx, base);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,25932(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25932, ctx.r11.u32);
	// bl 0x8216a9b0
	ctx.lr = 0x8216BB30;
	sub_8216A9B0(ctx, base);
	// b 0x8216bb38
	goto loc_8216BB38;
loc_8216BB34:
	// bl 0x82177978
	ctx.lr = 0x8216BB38;
	sub_82177978(ctx, base);
loc_8216BB38:
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,28244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216BB4C;
	sub_82147188(ctx, base);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216bbcc
	if (ctx.cr6.eq) goto loc_8216BBCC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216bbc8
	if (!ctx.cr6.eq) goto loc_8216BBC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x8216BB70;
	sub_82177868(ctx, base);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,28440(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28440, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216BB94;
	sub_821778D8(ctx, base);
	// li r28,32
	ctx.r28.s64 = 32;
	// lwz r30,28440(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28440);
loc_8216BB9C:
	// stw r30,28440(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28440, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216BBB0;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x8216BBB8;
	sub_8217E550(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x8216bb9c
	if (!ctx.cr0.eq) goto loc_8216BB9C;
	// b 0x8216bbcc
	goto loc_8216BBCC;
loc_8216BBC8:
	// bl 0x82177978
	ctx.lr = 0x8216BBCC;
	sub_82177978(ctx, base);
loc_8216BBCC:
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216bc18
	if (ctx.cr6.eq) goto loc_8216BC18;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216bc14
	if (!ctx.cr6.eq) goto loc_8216BC14;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216BBF0;
	sub_82177868(ctx, base);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// li r4,37
	ctx.r4.s64 = 37;
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,28244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8216BC10;
	sub_82147218(ctx, base);
	// b 0x8216bc18
	goto loc_8216BC18;
loc_8216BC14:
	// bl 0x82177978
	ctx.lr = 0x8216BC18;
	sub_82177978(ctx, base);
loc_8216BC18:
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,28244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216BC2C;
	sub_82147188(ctx, base);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216BC44;
	sub_82152400(ctx, base);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// stw r11,25372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216BC58;
	sub_82152400(ctx, base);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216bcb0
	if (ctx.cr6.eq) goto loc_8216BCB0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216bcac
	if (!ctx.cr6.eq) goto loc_8216BCAC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216BC80;
	sub_82177868(ctx, base);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r4,25820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25820, ctx.r4.u32);
	// lhz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 100);
	// rotlwi r5,r9,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// bl 0x821778d8
	ctx.lr = 0x8216BCA8;
	sub_821778D8(ctx, base);
	// b 0x8216bcb0
	goto loc_8216BCB0;
loc_8216BCAC:
	// bl 0x82177978
	ctx.lr = 0x8216BCB0;
	sub_82177978(ctx, base);
loc_8216BCB0:
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216bd0c
	if (ctx.cr6.eq) goto loc_8216BD0C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216bd08
	if (!ctx.cr6.eq) goto loc_8216BD08;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216BCD4;
	sub_82177868(ctx, base);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r11,25764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25764);
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r4,25820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25820, ctx.r4.u32);
	// lhz r9,102(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 102);
	// rotlwi r5,r9,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// bl 0x821778d8
	ctx.lr = 0x8216BCFC;
	sub_821778D8(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8216BD00;
	sub_821777E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8216BD08:
	// bl 0x82177978
	ctx.lr = 0x8216BD0C;
	sub_82177978(ctx, base);
loc_8216BD0C:
	// bl 0x821777e0
	ctx.lr = 0x8216BD10;
	sub_821777E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216BAB0) {
	__imp__sub_8216BAB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216BD20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,116
	ctx.r5.s64 = ctx.r4.s64 * 116;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25764(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25764);
	// bl 0x821778d8
	ctx.lr = 0x8216BD38;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25764(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25764);
	// ble cr6,0x8216bd5c
	if (!ctx.cr6.gt) goto loc_8216BD5C;
loc_8216BD44:
	// stw r30,25764(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25764, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216bab0
	ctx.lr = 0x8216BD50;
	sub_8216BAB0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,116
	ctx.r30.s64 = ctx.r30.s64 + 116;
	// bne 0x8216bd44
	if (!ctx.cr0.eq) goto loc_8216BD44;
loc_8216BD5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216BD18) {
	__imp__sub_8216BD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216BD64) {
	__imp__sub_8216BD64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BD68) {
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
	// ble cr6,0x8216bda4
	if (!ctx.cr6.gt) goto loc_8216BDA4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216BD8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216bab0
	ctx.lr = 0x8216BD94;
	sub_8216BAB0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216BD98;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25764(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25764, ctx.r3.u32);
	// bne 0x8216bd8c
	if (!ctx.cr0.eq) goto loc_8216BD8C;
loc_8216BDA4:
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

PPC_WEAK_FUNC(sub_8216BD68) {
	__imp__sub_8216BD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216BDBC) {
	__imp__sub_8216BDBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BDC0) {
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
	// lwz r4,27196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27196);
	// bl 0x821778d8
	ctx.lr = 0x8216BDE4;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8216BDEC;
	sub_82177758(ctx, base);
	// lwz r3,27196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27196);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216be70
	if (ctx.cr6.eq) goto loc_8216BE70;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8216be14
	if (ctx.cr6.eq) goto loc_8216BE14;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8216be14
	if (ctx.cr6.eq) goto loc_8216BE14;
	// bl 0x82177950
	ctx.lr = 0x8216BE10;
	sub_82177950(ctx, base);
	// b 0x8216be70
	goto loc_8216BE70;
loc_8216BE14:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216BE1C;
	sub_82177868(ctx, base);
	// lwz r11,27196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27196);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,27196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27196);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25764, ctx.r11.u32);
	// bne cr6,0x8216be48
	if (!ctx.cr6.eq) goto loc_8216BE48;
	// bl 0x82177898
	ctx.lr = 0x8216BE40;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8216be4c
	goto loc_8216BE4C;
loc_8216BE48:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8216BE4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216bab0
	ctx.lr = 0x8216BE54;
	sub_8216BAB0(ctx, base);
	// lwz r3,27196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27196);
	// bl 0x82175e30
	ctx.lr = 0x8216BE5C;
	sub_82175E30(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216be70
	if (ctx.cr6.eq) goto loc_8216BE70;
	// lwz r11,27196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27196);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8216BE70:
	// bl 0x821777e0
	ctx.lr = 0x8216BE74;
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

PPC_WEAK_FUNC(sub_8216BDC0) {
	__imp__sub_8216BDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216BE8C) {
	__imp__sub_8216BE8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216BE98;
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
	// lwz r4,27196(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27196);
	// bl 0x821778d8
	ctx.lr = 0x8216BEB0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27196(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27196);
	// ble cr6,0x8216bed4
	if (!ctx.cr6.gt) goto loc_8216BED4;
loc_8216BEBC:
	// stw r30,27196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27196, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216bdc0
	ctx.lr = 0x8216BEC8;
	sub_8216BDC0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8216bebc
	if (!ctx.cr0.eq) goto loc_8216BEBC;
loc_8216BED4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216BE90) {
	__imp__sub_8216BE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216BEDC) {
	__imp__sub_8216BEDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BEE0) {
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
	// ble cr6,0x8216bf1c
	if (!ctx.cr6.gt) goto loc_8216BF1C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216BF04:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216bdc0
	ctx.lr = 0x8216BF0C;
	sub_8216BDC0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216BF10;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27196, ctx.r3.u32);
	// bne 0x8216bf04
	if (!ctx.cr0.eq) goto loc_8216BF04;
loc_8216BF1C:
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

PPC_WEAK_FUNC(sub_8216BEE0) {
	__imp__sub_8216BEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216BF34) {
	__imp__sub_8216BF34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216BF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8216BF40;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r24,-32142
	ctx.r24.s64 = -2106458112;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216bf88
	if (ctx.cr6.eq) goto loc_8216BF88;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r29,0
	ctx.r29.s64 = 0;
loc_8216BF64:
	// stw r30,26052(r24)
	PPC_STORE_U32(ctx.r24.u32 + 26052, ctx.r30.u32);
	// bl 0x821562c0
	ctx.lr = 0x8216BF6C;
	sub_821562C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x8216bf64
	if (ctx.cr6.lt) goto loc_8216BF64;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
loc_8216BF88:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,26052(r24)
	PPC_STORE_U32(ctx.r24.u32 + 26052, ctx.r11.u32);
	// bl 0x821562c0
	ctx.lr = 0x8216BF94;
	sub_821562C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216bfd4
	if (ctx.cr6.eq) goto loc_8216BFD4;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r29,16
	ctx.r29.s64 = 16;
loc_8216BFB8:
	// stw r30,25524(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25524, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217e570
	ctx.lr = 0x8216BFC4;
	sub_8217E570(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x8216bfb8
	if (!ctx.cr0.eq) goto loc_8216BFB8;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
loc_8216BFD4:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c004
	if (ctx.cr6.eq) goto loc_8216C004;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r29,16
	ctx.r29.s64 = 16;
loc_8216BFE8:
	// stw r30,25524(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25524, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217e570
	ctx.lr = 0x8216BFF4;
	sub_8217E570(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x8216bfe8
	if (!ctx.cr0.eq) goto loc_8216BFE8;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
loc_8216C004:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c034
	if (ctx.cr6.eq) goto loc_8216C034;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r29,16
	ctx.r29.s64 = 16;
loc_8216C018:
	// stw r30,25524(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25524, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217e570
	ctx.lr = 0x8216C024;
	sub_8217E570(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x8216c018
	if (!ctx.cr0.eq) goto loc_8216C018;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
loc_8216C034:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c064
	if (ctx.cr6.eq) goto loc_8216C064;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r29,16
	ctx.r29.s64 = 16;
loc_8216C048:
	// stw r30,25524(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25524, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217e570
	ctx.lr = 0x8216C054;
	sub_8217E570(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x8216c048
	if (!ctx.cr0.eq) goto loc_8216C048;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
loc_8216C064:
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// stw r11,27976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216C074;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// stw r11,27976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216C08C;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C0B0;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C0C4;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C0D8;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C0EC;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C100;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C114;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C128;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C13C;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C150;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C164;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C178;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,124
	ctx.r11.s64 = ctx.r11.s64 + 124;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C18C;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C1A0;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C1B4;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C1C8;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C1DC;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C1F0;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,148
	ctx.r11.s64 = ctx.r11.s64 + 148;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C204;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C218;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 + 156;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C22C;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C240;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,164
	ctx.r11.s64 = ctx.r11.s64 + 164;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C254;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C268;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C27C;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C290;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C2A4;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C2B8;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C2CC;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C2E0;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 + 196;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C2F4;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C308;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 + 204;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C31C;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C330;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,212
	ctx.r11.s64 = ctx.r11.s64 + 212;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C344;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,216
	ctx.r11.s64 = ctx.r11.s64 + 216;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C358;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,220
	ctx.r11.s64 = ctx.r11.s64 + 220;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C36C;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C380;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,228
	ctx.r11.s64 = ctx.r11.s64 + 228;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C394;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C3A8;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C3BC;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C3D0;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,244
	ctx.r11.s64 = ctx.r11.s64 + 244;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C3E4;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C3F8;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,252
	ctx.r11.s64 = ctx.r11.s64 + 252;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C40C;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C420;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,260
	ctx.r11.s64 = ctx.r11.s64 + 260;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C434;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 + 264;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C448;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c47c
	if (ctx.cr6.eq) goto loc_8216C47C;
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r27,31
	ctx.r27.s64 = 31;
loc_8216C460:
	// stw r28,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r28.u32);
	// stw r28,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r28.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C46C;
	sub_8214DA98(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8216c460
	if (!ctx.cr0.eq) goto loc_8216C460;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
loc_8216C47C:
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// stw r11,27976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216C488;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,276
	ctx.r11.s64 = ctx.r11.s64 + 276;
	// stw r11,27976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216C4A0;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// stw r11,27976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216C4B8;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// stw r11,27976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216C4D0;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// addi r11,r11,288
	ctx.r11.s64 = ctx.r11.s64 + 288;
	// stw r11,28604(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216C4EC;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,292
	ctx.r11.s64 = ctx.r11.s64 + 292;
	// stw r11,28604(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216C504;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// lwz r10,472(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c548
	if (ctx.cr6.eq) goto loc_8216C548;
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r27,0
	ctx.r27.s64 = 0;
loc_8216C524:
	// stw r28,26052(r24)
	PPC_STORE_U32(ctx.r24.u32 + 26052, ctx.r28.u32);
	// bl 0x821562c0
	ctx.lr = 0x8216C52C;
	sub_821562C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// blt cr6,0x8216c524
	if (ctx.cr6.lt) goto loc_8216C524;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
loc_8216C548:
	// addi r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 + 476;
	// stw r11,26052(r24)
	PPC_STORE_U32(ctx.r24.u32 + 26052, ctx.r11.u32);
	// bl 0x821562c0
	ctx.lr = 0x8216C554;
	sub_821562C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,480
	ctx.r11.s64 = ctx.r11.s64 + 480;
	// stw r11,26052(r24)
	PPC_STORE_U32(ctx.r24.u32 + 26052, ctx.r11.u32);
	// bl 0x821562c0
	ctx.lr = 0x8216C56C;
	sub_821562C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,484
	ctx.r11.s64 = ctx.r11.s64 + 484;
	// stw r11,26052(r24)
	PPC_STORE_U32(ctx.r24.u32 + 26052, ctx.r11.u32);
	// bl 0x821562c0
	ctx.lr = 0x8216C584;
	sub_821562C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,488
	ctx.r11.s64 = ctx.r11.s64 + 488;
	// stw r11,26052(r24)
	PPC_STORE_U32(ctx.r24.u32 + 26052, ctx.r11.u32);
	// bl 0x821562c0
	ctx.lr = 0x8216C59C;
	sub_821562C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// stw r11,28604(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216C5B4;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,500
	ctx.r11.s64 = ctx.r11.s64 + 500;
	// stw r11,28604(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216C5CC;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,508
	ctx.r11.s64 = ctx.r11.s64 + 508;
	// stw r11,28604(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216C5E4;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,776
	ctx.r11.s64 = ctx.r11.s64 + 776;
	// stw r11,28604(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216C5FC;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,780
	ctx.r11.s64 = ctx.r11.s64 + 780;
	// stw r11,28604(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216C614;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,784
	ctx.r11.s64 = ctx.r11.s64 + 784;
	// stw r11,28604(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216C62C;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,788
	ctx.r11.s64 = ctx.r11.s64 + 788;
	// stw r11,28604(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216C644;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,968
	ctx.r11.s64 = ctx.r11.s64 + 968;
	// stw r11,26308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26308, ctx.r11.u32);
	// bl 0x821552d8
	ctx.lr = 0x8216C660;
	sub_821552D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// stw r11,26052(r24)
	PPC_STORE_U32(ctx.r24.u32 + 26052, ctx.r11.u32);
	// bl 0x821562c0
	ctx.lr = 0x8216C678;
	sub_821562C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1064
	ctx.r11.s64 = ctx.r11.s64 + 1064;
	// stw r11,27976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216C690;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1068
	ctx.r11.s64 = ctx.r11.s64 + 1068;
	// stw r11,27976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216C6A8;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1072
	ctx.r11.s64 = ctx.r11.s64 + 1072;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C6C4;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1076
	ctx.r11.s64 = ctx.r11.s64 + 1076;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C6D8;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1100
	ctx.r11.s64 = ctx.r11.s64 + 1100;
	// stw r11,27976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216C6E8;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 + 1104;
	// stw r11,27976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216C700;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1132
	ctx.r11.s64 = ctx.r11.s64 + 1132;
	// stw r11,27976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216C718;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1136
	ctx.r11.s64 = ctx.r11.s64 + 1136;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C734;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,1472
	ctx.r11.s64 = ctx.r11.s64 + 1472;
	// stw r11,26484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26484, ctx.r11.u32);
	// bl 0x82160378
	ctx.lr = 0x8216C748;
	sub_82160378(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1500
	ctx.r11.s64 = ctx.r11.s64 + 1500;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C764;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1504
	ctx.r11.s64 = ctx.r11.s64 + 1504;
	// stw r11,27976(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216C774;
	sub_82168910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c80c
	if (ctx.cr6.eq) goto loc_8216C80C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1524
	ctx.r11.s64 = ctx.r11.s64 + 1524;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C790;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// li r27,4
	ctx.r27.s64 = 4;
	// addi r28,r11,1528
	ctx.r28.s64 = ctx.r11.s64 + 1528;
loc_8216C79C:
	// stw r28,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r28.u32);
	// stw r28,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r28.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C7A8;
	sub_8214DA98(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8216c79c
	if (!ctx.cr0.eq) goto loc_8216C79C;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// li r27,4
	ctx.r27.s64 = 4;
	// addi r28,r11,1544
	ctx.r28.s64 = ctx.r11.s64 + 1544;
loc_8216C7C0:
	// stw r28,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r28.u32);
	// stw r28,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r28.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C7CC;
	sub_8214DA98(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8216c7c0
	if (!ctx.cr0.eq) goto loc_8216C7C0;
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1560
	ctx.r11.s64 = ctx.r11.s64 + 1560;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C7EC;
	sub_8214DA98(ctx, base);
	// lwz r11,25488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
	// addi r11,r11,1564
	ctx.r11.s64 = ctx.r11.s64 + 1564;
	// stw r11,28468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216C800;
	sub_8214DA98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8216C80C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216BF38) {
	__imp__sub_8216BF38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216C818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216C820;
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
	// lwz r31,25488(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25488);
	// ble cr6,0x8216c85c
	if (!ctx.cr6.gt) goto loc_8216C85C;
loc_8216C83C:
	// stw r31,25488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25488, ctx.r31.u32);
	// bl 0x8216bf38
	ctx.lr = 0x8216C844;
	sub_8216BF38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c868
	if (ctx.cr6.eq) goto loc_8216C868;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1668
	ctx.r31.s64 = ctx.r31.s64 + 1668;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216c83c
	if (ctx.cr6.lt) goto loc_8216C83C;
loc_8216C85C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8216C868:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216C818) {
	__imp__sub_8216C818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216C874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216C874) {
	__imp__sub_8216C874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216C878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216C880;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lwz r11,26048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26048);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c8c0
	if (ctx.cr6.eq) goto loc_8216C8C0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r11,25488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25488, ctx.r11.u32);
	// bl 0x8216bf38
	ctx.lr = 0x8216C8A8;
	sub_8216BF38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216c8bc
	if (!ctx.cr6.eq) goto loc_8216C8BC;
loc_8216C8B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8216C8BC:
	// lwz r11,26048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26048);
loc_8216C8C0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216c8f4
	if (ctx.cr6.eq) goto loc_8216C8F4;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r30,32
	ctx.r30.s64 = 32;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8216C8D8:
	// stw r31,25524(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25524, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217e570
	ctx.lr = 0x8216C8E4;
	sub_8217E570(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x8216c8d8
	if (!ctx.cr0.eq) goto loc_8216C8D8;
	// lwz r11,26048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26048);
loc_8216C8F4:
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// stw r11,28604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216C904;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c8b0
	if (ctx.cr6.eq) goto loc_8216C8B0;
	// lwz r11,26048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26048);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// stw r11,28604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216C91C;
	sub_82152EC8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216C878) {
	__imp__sub_8216C878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216C92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216C92C) {
	__imp__sub_8216C92C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216C930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216C938;
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
	// lwz r31,26048(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26048);
	// ble cr6,0x8216c974
	if (!ctx.cr6.gt) goto loc_8216C974;
loc_8216C954:
	// stw r31,26048(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26048, ctx.r31.u32);
	// bl 0x8216c878
	ctx.lr = 0x8216C95C;
	sub_8216C878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216c980
	if (ctx.cr6.eq) goto loc_8216C980;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,116
	ctx.r31.s64 = ctx.r31.s64 + 116;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216c954
	if (ctx.cr6.lt) goto loc_8216C954;
loc_8216C974:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8216C980:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216C930) {
	__imp__sub_8216C930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216C98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216C98C) {
	__imp__sub_8216C98C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216C990) {
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
	// lwz r11,27832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27832);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216ca08
	if (ctx.cr6.eq) goto loc_8216CA08;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26048, ctx.r3.u32);
	// bl 0x82175eb0
	ctx.lr = 0x8216C9C8;
	sub_82175EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216ca08
	if (!ctx.cr6.eq) goto loc_8216CA08;
	// bl 0x8216c878
	ctx.lr = 0x8216C9D4;
	sub_8216C878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216c9f0
	if (!ctx.cr6.eq) goto loc_8216C9F0;
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
loc_8216C9F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26048);
	// bl 0x82175eb0
	ctx.lr = 0x8216C9FC;
	sub_82175EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8216ca0c
	if (ctx.cr6.eq) goto loc_8216CA0C;
loc_8216CA08:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8216CA0C:
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

PPC_WEAK_FUNC(sub_8216C990) {
	__imp__sub_8216C990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216CA28;
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
	// lwz r31,27832(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27832);
	// ble cr6,0x8216ca64
	if (!ctx.cr6.gt) goto loc_8216CA64;
loc_8216CA44:
	// stw r31,27832(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27832, ctx.r31.u32);
	// bl 0x8216c990
	ctx.lr = 0x8216CA4C;
	sub_8216C990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216ca70
	if (ctx.cr6.eq) goto loc_8216CA70;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216ca44
	if (ctx.cr6.lt) goto loc_8216CA44;
loc_8216CA64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8216CA70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216CA20) {
	__imp__sub_8216CA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216CA7C) {
	__imp__sub_8216CA7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8216CA88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r5,720
	ctx.r5.s64 = 720;
	// lwz r4,26708(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// bl 0x821778d8
	ctx.lr = 0x8216CA9C;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8216CAA4;
	sub_82177758(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216CAB8;
	sub_82147188(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216CACC;
	sub_82147188(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27816, ctx.r11.u32);
	// bl 0x821610e8
	ctx.lr = 0x8216CAE4;
	sub_821610E8(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,408
	ctx.r11.s64 = ctx.r11.s64 + 408;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216CAF8;
	sub_82147188(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,412
	ctx.r11.s64 = ctx.r11.s64 + 412;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27196, ctx.r11.u32);
	// bl 0x8216bdc0
	ctx.lr = 0x8216CB10;
	sub_8216BDC0(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// addi r4,r11,436
	ctx.r4.s64 = ctx.r11.s64 + 436;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CB2C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CB34;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,440
	ctx.r4.s64 = ctx.r11.s64 + 440;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CB4C;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CB54;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// addi r4,r11,464
	ctx.r4.s64 = ctx.r11.s64 + 464;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28440(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28440, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CB70;
	sub_821778D8(ctx, base);
	// li r26,4
	ctx.r26.s64 = 4;
	// lwz r27,28440(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28440);
loc_8216CB78:
	// stw r27,28440(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28440, ctx.r27.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216CB8C;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x8216CB94;
	sub_8217E550(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// bne 0x8216cb78
	if (!ctx.cr0.eq) goto loc_8216CB78;
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216CBB8;
	sub_82152400(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 + 476;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216CBCC;
	sub_82152400(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,488
	ctx.r4.s64 = ctx.r11.s64 + 488;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CBE4;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CBEC;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,492
	ctx.r4.s64 = ctx.r11.s64 + 492;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CC04;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CC0C;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,496
	ctx.r4.s64 = ctx.r11.s64 + 496;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CC24;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CC2C;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,500
	ctx.r4.s64 = ctx.r11.s64 + 500;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CC44;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CC4C;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,508
	ctx.r4.s64 = ctx.r11.s64 + 508;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CC64;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CC6C;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,516
	ctx.r4.s64 = ctx.r11.s64 + 516;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CC84;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CC8C;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,520
	ctx.r4.s64 = ctx.r11.s64 + 520;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CCA4;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CCAC;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,524
	ctx.r4.s64 = ctx.r11.s64 + 524;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CCC4;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CCCC;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,528
	ctx.r4.s64 = ctx.r11.s64 + 528;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CCE4;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CCEC;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CD04;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CD0C;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,544
	ctx.r4.s64 = ctx.r11.s64 + 544;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CD24;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CD2C;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,552
	ctx.r4.s64 = ctx.r11.s64 + 552;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CD44;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CD4C;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,560
	ctx.r4.s64 = ctx.r11.s64 + 560;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CD64;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CD6C;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,568
	ctx.r4.s64 = ctx.r11.s64 + 568;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CD84;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CD8C;
	sub_822DD938(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,576
	ctx.r11.s64 = ctx.r11.s64 + 576;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216CDA0;
	sub_82147188(ctx, base);
	// lwz r11,26708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26708);
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r4,r11,580
	ctx.r4.s64 = ctx.r11.s64 + 580;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216CDB8;
	sub_821778D8(ctx, base);
	// li r29,31
	ctx.r29.s64 = 31;
	// lwz r30,27172(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
loc_8216CDC0:
	// stw r30,27172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27172, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216CDD4;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8216CDDC;
	sub_822DD938(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8216cdc0
	if (!ctx.cr0.eq) goto loc_8216CDC0;
	// bl 0x821777e0
	ctx.lr = 0x8216CDEC;
	sub_821777E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216CA80) {
	__imp__sub_8216CA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216CDF4) {
	__imp__sub_8216CDF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216CE00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,720
	ctx.r5.s64 = ctx.r4.s64 * 720;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26708(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26708);
	// bl 0x821778d8
	ctx.lr = 0x8216CE18;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26708(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26708);
	// ble cr6,0x8216ce3c
	if (!ctx.cr6.gt) goto loc_8216CE3C;
loc_8216CE24:
	// stw r30,26708(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26708, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216ca80
	ctx.lr = 0x8216CE30;
	sub_8216CA80(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,720
	ctx.r30.s64 = ctx.r30.s64 + 720;
	// bne 0x8216ce24
	if (!ctx.cr0.eq) goto loc_8216CE24;
loc_8216CE3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216CDF8) {
	__imp__sub_8216CDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216CE44) {
	__imp__sub_8216CE44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CE48) {
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
	// ble cr6,0x8216ce84
	if (!ctx.cr6.gt) goto loc_8216CE84;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216CE6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216ca80
	ctx.lr = 0x8216CE74;
	sub_8216CA80(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216CE78;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26708(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26708, ctx.r3.u32);
	// bne 0x8216ce6c
	if (!ctx.cr0.eq) goto loc_8216CE6C;
loc_8216CE84:
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

PPC_WEAK_FUNC(sub_8216CE48) {
	__imp__sub_8216CE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216CE9C) {
	__imp__sub_8216CE9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CEA0) {
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
	// lwz r4,25760(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25760);
	// bl 0x821778d8
	ctx.lr = 0x8216CEC4;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8216CECC;
	sub_82177758(ctx, base);
	// lwz r3,25760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25760);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216cf50
	if (ctx.cr6.eq) goto loc_8216CF50;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8216cef4
	if (ctx.cr6.eq) goto loc_8216CEF4;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8216cef4
	if (ctx.cr6.eq) goto loc_8216CEF4;
	// bl 0x82177950
	ctx.lr = 0x8216CEF0;
	sub_82177950(ctx, base);
	// b 0x8216cf50
	goto loc_8216CF50;
loc_8216CEF4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216CEFC;
	sub_82177868(ctx, base);
	// lwz r11,25760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25760);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,25760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25760);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26708, ctx.r11.u32);
	// bne cr6,0x8216cf28
	if (!ctx.cr6.eq) goto loc_8216CF28;
	// bl 0x82177898
	ctx.lr = 0x8216CF20;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8216cf2c
	goto loc_8216CF2C;
loc_8216CF28:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8216CF2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216ca80
	ctx.lr = 0x8216CF34;
	sub_8216CA80(ctx, base);
	// lwz r3,25760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25760);
	// bl 0x82176340
	ctx.lr = 0x8216CF3C;
	sub_82176340(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216cf50
	if (ctx.cr6.eq) goto loc_8216CF50;
	// lwz r11,25760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25760);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8216CF50:
	// bl 0x821777e0
	ctx.lr = 0x8216CF54;
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

PPC_WEAK_FUNC(sub_8216CEA0) {
	__imp__sub_8216CEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216CF6C) {
	__imp__sub_8216CF6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216CF78;
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
	// lwz r4,25760(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25760);
	// bl 0x821778d8
	ctx.lr = 0x8216CF90;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25760(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25760);
	// ble cr6,0x8216cfb4
	if (!ctx.cr6.gt) goto loc_8216CFB4;
loc_8216CF9C:
	// stw r30,25760(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25760, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216cea0
	ctx.lr = 0x8216CFA8;
	sub_8216CEA0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8216cf9c
	if (!ctx.cr0.eq) goto loc_8216CF9C;
loc_8216CFB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216CF70) {
	__imp__sub_8216CF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216CFBC) {
	__imp__sub_8216CFBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216CFC0) {
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
	// ble cr6,0x8216cffc
	if (!ctx.cr6.gt) goto loc_8216CFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216CFE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216cea0
	ctx.lr = 0x8216CFEC;
	sub_8216CEA0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216CFF0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25760(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25760, ctx.r3.u32);
	// bne 0x8216cfe4
	if (!ctx.cr0.eq) goto loc_8216CFE4;
loc_8216CFFC:
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

PPC_WEAK_FUNC(sub_8216CFC0) {
	__imp__sub_8216CFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216D014) {
	__imp__sub_8216D014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8216D020;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,28588(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28588, ctx.r11.u32);
	// stw r10,26348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26348, ctx.r10.u32);
	// bl 0x821551a8
	ctx.lr = 0x8216D048;
	sub_821551A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216d05c
	if (!ctx.cr6.eq) goto loc_8216D05C;
loc_8216D050:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8216D05C:
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,412
	ctx.r11.s64 = ctx.r11.s64 + 412;
	// stw r11,27832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27832, ctx.r11.u32);
	// bl 0x8216c990
	ctx.lr = 0x8216D070;
	sub_8216C990(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216d050
	if (ctx.cr6.eq) goto loc_8216D050;
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// addi r11,r11,436
	ctx.r11.s64 = ctx.r11.s64 + 436;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D094;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,440
	ctx.r11.s64 = ctx.r11.s64 + 440;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D0A8;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// li r27,4
	ctx.r27.s64 = 4;
	// addi r28,r11,464
	ctx.r28.s64 = ctx.r11.s64 + 464;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
loc_8216D0B8:
	// stw r28,25524(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25524, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217e570
	ctx.lr = 0x8216D0C4;
	sub_8217E570(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// bne 0x8216d0b8
	if (!ctx.cr0.eq) goto loc_8216D0B8;
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// stw r11,28604(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216D0E4;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216d050
	if (ctx.cr6.eq) goto loc_8216D050;
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 + 476;
	// stw r11,28604(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216D0FC;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216d050
	if (ctx.cr6.eq) goto loc_8216D050;
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,488
	ctx.r11.s64 = ctx.r11.s64 + 488;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D118;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D12C;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,496
	ctx.r11.s64 = ctx.r11.s64 + 496;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D140;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,500
	ctx.r11.s64 = ctx.r11.s64 + 500;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D154;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,508
	ctx.r11.s64 = ctx.r11.s64 + 508;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D168;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,516
	ctx.r11.s64 = ctx.r11.s64 + 516;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D17C;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,520
	ctx.r11.s64 = ctx.r11.s64 + 520;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D190;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,524
	ctx.r11.s64 = ctx.r11.s64 + 524;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D1A4;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,528
	ctx.r11.s64 = ctx.r11.s64 + 528;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D1B8;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,536
	ctx.r11.s64 = ctx.r11.s64 + 536;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D1CC;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,544
	ctx.r11.s64 = ctx.r11.s64 + 544;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D1E0;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 + 552;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D1F4;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,560
	ctx.r11.s64 = ctx.r11.s64 + 560;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D208;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// addi r11,r11,568
	ctx.r11.s64 = ctx.r11.s64 + 568;
	// stw r11,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r11.u32);
	// stw r11,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D21C;
	sub_8214DA98(ctx, base);
	// lwz r11,27464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// li r28,31
	ctx.r28.s64 = 31;
	// addi r31,r11,580
	ctx.r31.s64 = ctx.r11.s64 + 580;
loc_8216D228:
	// stw r31,28468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28468, ctx.r31.u32);
	// stw r31,28076(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28076, ctx.r31.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216D234;
	sub_8214DA98(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8216d228
	if (!ctx.cr0.eq) goto loc_8216D228;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216D018) {
	__imp__sub_8216D018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216D24C) {
	__imp__sub_8216D24C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216D258;
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
	// lwz r31,27464(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27464);
	// ble cr6,0x8216d294
	if (!ctx.cr6.gt) goto loc_8216D294;
loc_8216D274:
	// stw r31,27464(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27464, ctx.r31.u32);
	// bl 0x8216d018
	ctx.lr = 0x8216D27C;
	sub_8216D018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216d2a0
	if (ctx.cr6.eq) goto loc_8216D2A0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,720
	ctx.r31.s64 = ctx.r31.s64 + 720;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216d274
	if (ctx.cr6.lt) goto loc_8216D274;
loc_8216D294:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8216D2A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216D250) {
	__imp__sub_8216D250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216D2AC) {
	__imp__sub_8216D2AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D2B0) {
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
	// lwz r11,27020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27020);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216d328
	if (ctx.cr6.eq) goto loc_8216D328;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27464, ctx.r3.u32);
	// bl 0x821763c0
	ctx.lr = 0x8216D2E8;
	sub_821763C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216d328
	if (!ctx.cr6.eq) goto loc_8216D328;
	// bl 0x8216d018
	ctx.lr = 0x8216D2F4;
	sub_8216D018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8216d310
	if (!ctx.cr6.eq) goto loc_8216D310;
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
loc_8216D310:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27464);
	// bl 0x821763c0
	ctx.lr = 0x8216D31C;
	sub_821763C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8216d32c
	if (ctx.cr6.eq) goto loc_8216D32C;
loc_8216D328:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8216D32C:
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

PPC_WEAK_FUNC(sub_8216D2B0) {
	__imp__sub_8216D2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216D348;
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
	// lwz r31,27020(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27020);
	// ble cr6,0x8216d384
	if (!ctx.cr6.gt) goto loc_8216D384;
loc_8216D364:
	// stw r31,27020(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27020, ctx.r31.u32);
	// bl 0x8216d2b0
	ctx.lr = 0x8216D36C;
	sub_8216D2B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216d390
	if (ctx.cr6.eq) goto loc_8216D390;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216d364
	if (ctx.cr6.lt) goto loc_8216D364;
loc_8216D384:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8216D390:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216D340) {
	__imp__sub_8216D340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216D39C) {
	__imp__sub_8216D39C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D3A0) {
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
	// lwz r4,25624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25624);
	// bl 0x821778d8
	ctx.lr = 0x8216D3C0;
	sub_821778D8(ctx, base);
	// lwz r11,25624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25624);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216d404
	if (ctx.cr6.eq) goto loc_8216D404;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D3D8;
	sub_82177868(ctx, base);
	// lwz r11,25624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25624);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,25624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25624);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,25240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25240, ctx.r10.u32);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82164370
	ctx.lr = 0x8216D400;
	sub_82164370(ctx, base);
	// lwz r11,25624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25624);
loc_8216D404:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d440
	if (ctx.cr6.eq) goto loc_8216D440;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8216D418;
	sub_82177868(ctx, base);
	// lwz r11,25624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25624);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,25624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25624);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r4,26260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26260, ctx.r4.u32);
	// lbz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// bl 0x821778d8
	ctx.lr = 0x8216D440;
	sub_821778D8(ctx, base);
loc_8216D440:
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

PPC_WEAK_FUNC(sub_8216D3A0) {
	__imp__sub_8216D3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216D454) {
	__imp__sub_8216D454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216D460;
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
	// lwz r4,25624(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25624);
	// bl 0x821778d8
	ctx.lr = 0x8216D480;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25624(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25624);
	// ble cr6,0x8216d4a4
	if (!ctx.cr6.gt) goto loc_8216D4A4;
loc_8216D48C:
	// stw r30,25624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25624, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216d3a0
	ctx.lr = 0x8216D498;
	sub_8216D3A0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x8216d48c
	if (!ctx.cr0.eq) goto loc_8216D48C;
loc_8216D4A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216D458) {
	__imp__sub_8216D458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216D4AC) {
	__imp__sub_8216D4AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D4B0) {
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
	// ble cr6,0x8216d4ec
	if (!ctx.cr6.gt) goto loc_8216D4EC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216D4D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216d3a0
	ctx.lr = 0x8216D4DC;
	sub_8216D3A0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216D4E0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25624, ctx.r3.u32);
	// bne 0x8216d4d4
	if (!ctx.cr0.eq) goto loc_8216D4D4;
loc_8216D4EC:
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

PPC_WEAK_FUNC(sub_8216D4B0) {
	__imp__sub_8216D4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216D504) {
	__imp__sub_8216D504(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216D508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216D510;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,712
	ctx.r5.s64 = 712;
	// lwz r4,25232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// bl 0x821778d8
	ctx.lr = 0x8216D524;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8216D52C;
	sub_82177758(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216D540;
	sub_82147188(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8216D554;
	sub_82147188(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216d598
	if (ctx.cr6.eq) goto loc_8216D598;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D56C;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,26672(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26672, ctx.r10.u32);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82165d68
	ctx.lr = 0x8216D594;
	sub_82165D68(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
loc_8216D598:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27088, ctx.r11.u32);
	// bl 0x82165ae0
	ctx.lr = 0x8216D5AC;
	sub_82165AE0(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216d5f4
	if (ctx.cr6.eq) goto loc_8216D5F4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D5C4;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r4,26584(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26584, ctx.r4.u32);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8216D5F0;
	sub_821778D8(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
loc_8216D5F4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216d634
	if (ctx.cr6.eq) goto loc_8216D634;
	// li r3,127
	ctx.r3.s64 = 127;
	// bl 0x82177868
	ctx.lr = 0x8216D608;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,25288(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25288, ctx.r10.u32);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82164130
	ctx.lr = 0x8216D630;
	sub_82164130(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
loc_8216D634:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216d674
	if (ctx.cr6.eq) goto loc_8216D674;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D648;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,25624(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25624, ctx.r10.u32);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8216d458
	ctx.lr = 0x8216D670;
	sub_8216D458(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
loc_8216D674:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25464, ctx.r11.u32);
	// bl 0x82165ec0
	ctx.lr = 0x8216D688;
	sub_82165EC0(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26976(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26976, ctx.r11.u32);
	// bl 0x821649b8
	ctx.lr = 0x8216D6A0;
	sub_821649B8(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r8,300(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8216d6e8
	if (ctx.cr6.eq) goto loc_8216D6E8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D6B8;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r4,300(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// stw r4,26764(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26764, ctx.r4.u32);
	// lwz r8,296(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mulli r5,r8,56
	ctx.r5.s64 = ctx.r8.s64 * 56;
	// bl 0x821778d8
	ctx.lr = 0x8216D6E4;
	sub_821778D8(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
loc_8216D6E8:
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216d728
	if (ctx.cr6.eq) goto loc_8216D728;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D6FC;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// stw r10,27384(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27384, ctx.r10.u32);
	// lwz r4,332(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// bl 0x82164608
	ctx.lr = 0x8216D724;
	sub_82164608(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
loc_8216D728:
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r4,r11,340
	ctx.r4.s64 = ctx.r11.s64 + 340;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25324, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216D740;
	sub_821778D8(ctx, base);
	// lwz r11,25324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25324);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216D758;
	sub_82152400(ctx, base);
	// lwz r11,25324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25324);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8216D76C;
	sub_82152400(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,500
	ctx.r11.s64 = ctx.r11.s64 + 500;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x8216D784;
	sub_8214F968(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216D78C;
	sub_82177758(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r9,504(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216d7dc
	if (ctx.cr6.eq) goto loc_8216D7DC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D7A8;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r4,504(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// stw r4,27008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27008, ctx.r4.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8216D7DC;
	sub_821778D8(ctx, base);
loc_8216D7DC:
	// bl 0x821777e0
	ctx.lr = 0x8216D7E0;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216D7E8;
	sub_82177758(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r11,508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d830
	if (ctx.cr6.eq) goto loc_8216D830;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D800;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r4,508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// stw r4,27008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27008, ctx.r4.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8216D830;
	sub_821778D8(ctx, base);
loc_8216D830:
	// bl 0x821777e0
	ctx.lr = 0x8216D834;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216D83C;
	sub_82177758(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r11,512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d888
	if (ctx.cr6.eq) goto loc_8216D888;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D854;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r4,512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// stw r4,27808(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27808, ctx.r4.u32);
	// lwz r11,656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x8216D888;
	sub_821778D8(ctx, base);
loc_8216D888:
	// bl 0x821777e0
	ctx.lr = 0x8216D88C;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216D894;
	sub_82177758(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r11,516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d8d8
	if (ctx.cr6.eq) goto loc_8216D8D8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D8AC;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r4,516(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// stw r4,25684(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25684, ctx.r4.u32);
	// lwz r8,660(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8216D8D8;
	sub_821778D8(ctx, base);
loc_8216D8D8:
	// bl 0x821777e0
	ctx.lr = 0x8216D8DC;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216D8E4;
	sub_82177758(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d930
	if (ctx.cr6.eq) goto loc_8216D930;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D8FC;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r4,520(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// stw r4,27008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27008, ctx.r4.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r7,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0xFFFF8000;
	// bl 0x821778d8
	ctx.lr = 0x8216D930;
	sub_821778D8(ctx, base);
loc_8216D930:
	// bl 0x821777e0
	ctx.lr = 0x8216D934;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216D93C;
	sub_82177758(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d990
	if (ctx.cr6.eq) goto loc_8216D990;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D954;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 524, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r4,524(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// stw r4,27008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27008, ctx.r4.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,656(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8216D990;
	sub_821778D8(ctx, base);
loc_8216D990:
	// bl 0x821777e0
	ctx.lr = 0x8216D994;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216D99C;
	sub_82177758(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r11,528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216d9f0
	if (ctx.cr6.eq) goto loc_8216D9F0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216D9B4;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 528, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r4,528(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// stw r4,27008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27008, ctx.r4.u32);
	// lwz r7,660(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8216D9F0;
	sub_821778D8(ctx, base);
loc_8216D9F0:
	// bl 0x821777e0
	ctx.lr = 0x8216D9F4;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8216D9FC;
	sub_82177758(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216da3c
	if (ctx.cr6.eq) goto loc_8216DA3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8216DA14;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r4,532(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// stw r4,27856(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27856, ctx.r4.u32);
	// lwz r5,656(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// bl 0x821778d8
	ctx.lr = 0x8216DA3C;
	sub_821778D8(ctx, base);
loc_8216DA3C:
	// bl 0x821777e0
	ctx.lr = 0x8216DA40;
	sub_821777E0(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r10,536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216da84
	if (ctx.cr6.eq) goto loc_8216DA84;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216DA58;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 536, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r10,536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// stw r10,26592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26592, ctx.r10.u32);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82164e30
	ctx.lr = 0x8216DA80;
	sub_82164E30(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
loc_8216DA84:
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216dac4
	if (ctx.cr6.eq) goto loc_8216DAC4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216DA98;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 540, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// stw r10,26556(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26556, ctx.r10.u32);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821651b8
	ctx.lr = 0x8216DAC0;
	sub_821651B8(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
loc_8216DAC4:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,544
	ctx.r11.s64 = ctx.r11.s64 + 544;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28572, ctx.r11.u32);
	// bl 0x82165638
	ctx.lr = 0x8216DAD8;
	sub_82165638(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,648
	ctx.r11.s64 = ctx.r11.s64 + 648;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28260, ctx.r11.u32);
	// bl 0x821652d8
	ctx.lr = 0x8216DAF0;
	sub_821652D8(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r8,704(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8216db34
	if (ctx.cr6.eq) goto loc_8216DB34;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216DB08;
	sub_82177868(ctx, base);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 704, ctx.r10.u32);
	// lwz r11,25232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25232);
	// lwz r4,704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// stw r4,25692(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25692, ctx.r4.u32);
	// lwz r8,700(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// mulli r5,r8,56
	ctx.r5.s64 = ctx.r8.s64 * 56;
	// bl 0x821778d8
	ctx.lr = 0x8216DB34;
	sub_821778D8(ctx, base);
loc_8216DB34:
	// bl 0x821777e0
	ctx.lr = 0x8216DB38;
	sub_821777E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216D508) {
	__imp__sub_8216D508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216DB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216DB48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,712
	ctx.r5.s64 = ctx.r4.s64 * 712;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25232(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25232);
	// bl 0x821778d8
	ctx.lr = 0x8216DB60;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25232(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25232);
	// ble cr6,0x8216db84
	if (!ctx.cr6.gt) goto loc_8216DB84;
loc_8216DB6C:
	// stw r30,25232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25232, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216d508
	ctx.lr = 0x8216DB78;
	sub_8216D508(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,712
	ctx.r30.s64 = ctx.r30.s64 + 712;
	// bne 0x8216db6c
	if (!ctx.cr0.eq) goto loc_8216DB6C;
loc_8216DB84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216DB40) {
	__imp__sub_8216DB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216DB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216DB8C) {
	__imp__sub_8216DB8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216DB90) {
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
	// ble cr6,0x8216dbcc
	if (!ctx.cr6.gt) goto loc_8216DBCC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216DBB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216d508
	ctx.lr = 0x8216DBBC;
	sub_8216D508(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216DBC0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25232, ctx.r3.u32);
	// bne 0x8216dbb4
	if (!ctx.cr0.eq) goto loc_8216DBB4;
loc_8216DBCC:
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

PPC_WEAK_FUNC(sub_8216DB90) {
	__imp__sub_8216DB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216DBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216DBE4) {
	__imp__sub_8216DBE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216DBE8) {
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
	// lwz r4,27908(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27908);
	// bl 0x821778d8
	ctx.lr = 0x8216DC0C;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8216DC14;
	sub_82177758(ctx, base);
	// lwz r3,27908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27908);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216dc98
	if (ctx.cr6.eq) goto loc_8216DC98;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8216dc3c
	if (ctx.cr6.eq) goto loc_8216DC3C;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8216dc3c
	if (ctx.cr6.eq) goto loc_8216DC3C;
	// bl 0x82177950
	ctx.lr = 0x8216DC38;
	sub_82177950(ctx, base);
	// b 0x8216dc98
	goto loc_8216DC98;
loc_8216DC3C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216DC44;
	sub_82177868(ctx, base);
	// lwz r11,27908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27908);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,27908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27908);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25232, ctx.r11.u32);
	// bne cr6,0x8216dc70
	if (!ctx.cr6.eq) goto loc_8216DC70;
	// bl 0x82177898
	ctx.lr = 0x8216DC68;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8216dc74
	goto loc_8216DC74;
loc_8216DC70:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8216DC74:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216d508
	ctx.lr = 0x8216DC7C;
	sub_8216D508(ctx, base);
	// lwz r3,27908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27908);
	// bl 0x82175a90
	ctx.lr = 0x8216DC84;
	sub_82175A90(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8216dc98
	if (ctx.cr6.eq) goto loc_8216DC98;
	// lwz r11,27908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27908);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8216DC98:
	// bl 0x821777e0
	ctx.lr = 0x8216DC9C;
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

PPC_WEAK_FUNC(sub_8216DBE8) {
	__imp__sub_8216DBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216DCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216DCB4) {
	__imp__sub_8216DCB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216DCB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216DCC0;
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
	// lwz r4,27908(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27908);
	// bl 0x821778d8
	ctx.lr = 0x8216DCD8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27908(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27908);
	// ble cr6,0x8216dcfc
	if (!ctx.cr6.gt) goto loc_8216DCFC;
loc_8216DCE4:
	// stw r30,27908(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27908, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216dbe8
	ctx.lr = 0x8216DCF0;
	sub_8216DBE8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8216dce4
	if (!ctx.cr0.eq) goto loc_8216DCE4;
loc_8216DCFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216DCB8) {
	__imp__sub_8216DCB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216DD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216DD04) {
	__imp__sub_8216DD04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216DD08) {
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
	// ble cr6,0x8216dd44
	if (!ctx.cr6.gt) goto loc_8216DD44;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216DD2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8216dbe8
	ctx.lr = 0x8216DD34;
	sub_8216DBE8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8216DD38;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27908(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27908, ctx.r3.u32);
	// bne 0x8216dd2c
	if (!ctx.cr0.eq) goto loc_8216DD2C;
loc_8216DD44:
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

PPC_WEAK_FUNC(sub_8216DD08) {
	__imp__sub_8216DD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216DD5C) {
	__imp__sub_8216DD5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216DD60) {
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
	// lwz r11,26056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26056);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8216dd98
	if (!ctx.cr6.eq) goto loc_8216DD98;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,26348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26348, ctx.r11.u32);
	// bl 0x821551a8
	ctx.lr = 0x8216DD94;
	sub_821551A8(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DD98:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8216ddb8
	if (!ctx.cr6.eq) goto loc_8216DDB8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,26308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26308, ctx.r11.u32);
	// bl 0x821552d8
	ctx.lr = 0x8216DDB4;
	sub_821552D8(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DDB8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8216ddd8
	if (!ctx.cr6.eq) goto loc_8216DDD8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,28092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28092, ctx.r11.u32);
	// bl 0x821495f0
	ctx.lr = 0x8216DDD4;
	sub_821495F0(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DDD8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8216ddf8
	if (!ctx.cr6.eq) goto loc_8216DDF8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,25080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25080, ctx.r11.u32);
	// bl 0x82155f80
	ctx.lr = 0x8216DDF4;
	sub_82155F80(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DDF8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8216de18
	if (!ctx.cr6.eq) goto loc_8216DE18;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,26052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26052, ctx.r11.u32);
	// bl 0x821562c0
	ctx.lr = 0x8216DE14;
	sub_821562C0(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DE18:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8216de38
	if (!ctx.cr6.eq) goto loc_8216DE38;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,28604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8216DE34;
	sub_82152EC8(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DE38:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8216de58
	if (!ctx.cr6.eq) goto loc_8216DE58;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,25236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25236, ctx.r11.u32);
	// bl 0x82152630
	ctx.lr = 0x8216DE54;
	sub_82152630(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DE58:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8216de78
	if (!ctx.cr6.eq) goto loc_8216DE78;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27544, ctx.r11.u32);
	// bl 0x82152c98
	ctx.lr = 0x8216DE74;
	sub_82152C98(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DE78:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8216de98
	if (!ctx.cr6.eq) goto loc_8216DE98;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27756, ctx.r11.u32);
	// bl 0x8214fb88
	ctx.lr = 0x8216DE94;
	sub_8214FB88(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DE98:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8216deb8
	if (!ctx.cr6.eq) goto loc_8216DEB8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,28076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8216DEB4;
	sub_8214DA98(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DEB8:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8216ded8
	if (!ctx.cr6.eq) goto loc_8216DED8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27060, ctx.r11.u32);
	// bl 0x8214d728
	ctx.lr = 0x8216DED4;
	sub_8214D728(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DED8:
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8216def8
	if (!ctx.cr6.eq) goto loc_8216DEF8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27004, ctx.r11.u32);
	// bl 0x8214d3f8
	ctx.lr = 0x8216DEF4;
	sub_8214D3F8(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DEF8:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8216e1dc
	if (ctx.cr6.eq) goto loc_8216E1DC;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8216e1dc
	if (ctx.cr6.eq) goto loc_8216E1DC;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8216df28
	if (!ctx.cr6.eq) goto loc_8216DF28;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27920, ctx.r11.u32);
	// bl 0x8215ce60
	ctx.lr = 0x8216DF24;
	sub_8215CE60(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DF28:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x8216df48
	if (!ctx.cr6.eq) goto loc_8216DF48;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27752, ctx.r11.u32);
	// bl 0x821579c0
	ctx.lr = 0x8216DF44;
	sub_821579C0(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DF48:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8216df68
	if (!ctx.cr6.eq) goto loc_8216DF68;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,26076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26076, ctx.r11.u32);
	// bl 0x82157ab0
	ctx.lr = 0x8216DF64;
	sub_82157AB0(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DF68:
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x8216df88
	if (!ctx.cr6.eq) goto loc_8216DF88;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,28008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28008, ctx.r11.u32);
	// bl 0x8215b9f0
	ctx.lr = 0x8216DF84;
	sub_8215B9F0(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DF88:
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x8216dfa8
	if (!ctx.cr6.eq) goto loc_8216DFA8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27228, ctx.r11.u32);
	// bl 0x8215a9d0
	ctx.lr = 0x8216DFA4;
	sub_8215A9D0(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DFA8:
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x8216dfc8
	if (!ctx.cr6.eq) goto loc_8216DFC8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27148, ctx.r11.u32);
	// bl 0x82166898
	ctx.lr = 0x8216DFC4;
	sub_82166898(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DFC8:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x8216dfe8
	if (!ctx.cr6.eq) goto loc_8216DFE8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27000, ctx.r11.u32);
	// bl 0x82153830
	ctx.lr = 0x8216DFE4;
	sub_82153830(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216DFE8:
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x8216e008
	if (!ctx.cr6.eq) goto loc_8216E008;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,25084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25084, ctx.r11.u32);
	// bl 0x82166e30
	ctx.lr = 0x8216E004;
	sub_82166E30(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E008:
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bne cr6,0x8216e028
	if (!ctx.cr6.eq) goto loc_8216E028;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,26324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26324, ctx.r11.u32);
	// bl 0x8215f908
	ctx.lr = 0x8216E024;
	sub_8215F908(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E028:
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x8216e048
	if (!ctx.cr6.eq) goto loc_8216E048;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,25896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25896, ctx.r11.u32);
	// bl 0x8215f748
	ctx.lr = 0x8216E044;
	sub_8215F748(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E048:
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x8216e068
	if (!ctx.cr6.eq) goto loc_8216E068;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,25000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25000, ctx.r11.u32);
	// bl 0x8215fe20
	ctx.lr = 0x8216E064;
	sub_8215FE20(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E068:
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x8216e088
	if (!ctx.cr6.eq) goto loc_8216E088;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27832, ctx.r11.u32);
	// bl 0x8216c990
	ctx.lr = 0x8216E084;
	sub_8216C990(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E088:
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x8216e0a8
	if (!ctx.cr6.eq) goto loc_8216E0A8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,25532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25532, ctx.r11.u32);
	// bl 0x8214b330
	ctx.lr = 0x8216E0A4;
	sub_8214B330(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E0A8:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x8216e0c8
	if (!ctx.cr6.eq) goto loc_8216E0C8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27976, ctx.r11.u32);
	// bl 0x82168910
	ctx.lr = 0x8216E0C4;
	sub_82168910(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E0C8:
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x8216e0e8
	if (!ctx.cr6.eq) goto loc_8216E0E8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,26732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26732, ctx.r11.u32);
	// bl 0x8216a8c0
	ctx.lr = 0x8216E0E4;
	sub_8216A8C0(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E0E8:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x8216e108
	if (!ctx.cr6.eq) goto loc_8216E108;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27248, ctx.r11.u32);
	// bl 0x821617a0
	ctx.lr = 0x8216E104;
	sub_821617A0(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E108:
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bne cr6,0x8216e128
	if (!ctx.cr6.eq) goto loc_8216E128;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27160, ctx.r11.u32);
	// bl 0x82161d40
	ctx.lr = 0x8216E124;
	sub_82161D40(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E128:
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x8216e148
	if (!ctx.cr6.eq) goto loc_8216E148;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,26264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26264, ctx.r11.u32);
	// bl 0x82163620
	ctx.lr = 0x8216E144;
	sub_82163620(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E148:
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// bne cr6,0x8216e168
	if (!ctx.cr6.eq) goto loc_8216E168;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27336, ctx.r11.u32);
	// bl 0x82162e80
	ctx.lr = 0x8216E164;
	sub_82162E80(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E168:
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// bne cr6,0x8216e188
	if (!ctx.cr6.eq) goto loc_8216E188;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,26484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26484, ctx.r11.u32);
	// bl 0x82160378
	ctx.lr = 0x8216E184;
	sub_82160378(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E188:
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// bne cr6,0x8216e1a8
	if (!ctx.cr6.eq) goto loc_8216E1A8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27020, ctx.r11.u32);
	// bl 0x8216d2b0
	ctx.lr = 0x8216E1A4;
	sub_8216D2B0(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E1A8:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bne cr6,0x8216e1c8
	if (!ctx.cr6.eq) goto loc_8216E1C8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27948, ctx.r11.u32);
	// bl 0x8215bb00
	ctx.lr = 0x8216E1C4;
	sub_8215BB00(ctx, base);
	// b 0x8216e1f0
	goto loc_8216E1F0;
loc_8216E1C8:
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
loc_8216E1DC:
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	// stw r11,27216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27216, ctx.r11.u32);
	// bl 0x82169cb0
	ctx.lr = 0x8216E1F0;
	sub_82169CB0(ctx, base);
loc_8216E1F0:
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

PPC_WEAK_FUNC(sub_8216DD60) {
	__imp__sub_8216DD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216E210;
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
	// lwz r31,28452(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28452);
	// ble cr6,0x8216e24c
	if (!ctx.cr6.gt) goto loc_8216E24C;
loc_8216E22C:
	// stw r31,28452(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28452, ctx.r31.u32);
	// bl 0x8216dd60
	ctx.lr = 0x8216E234;
	sub_8216DD60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216e258
	if (ctx.cr6.eq) goto loc_8216E258;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216e22c
	if (ctx.cr6.lt) goto loc_8216E22C;
loc_8216E24C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8216E258:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216E208) {
	__imp__sub_8216E208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216E264) {
	__imp__sub_8216E264(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E268) {
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
	// lwz r11,26056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26056);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28452, ctx.r11.u32);
	// bl 0x8216dd60
	ctx.lr = 0x8216E28C;
	sub_8216DD60(ctx, base);
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

PPC_WEAK_FUNC(sub_8216E268) {
	__imp__sub_8216E268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216E2A4) {
	__imp__sub_8216E2A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8216E2B0;
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
	// lwz r31,26056(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26056);
	// ble cr6,0x8216e2f8
	if (!ctx.cr6.gt) goto loc_8216E2F8;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8216E2D0:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r31,26056(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26056, ctx.r31.u32);
	// stw r11,28452(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28452, ctx.r11.u32);
	// bl 0x8216dd60
	ctx.lr = 0x8216E2E0;
	sub_8216DD60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216e304
	if (ctx.cr6.eq) goto loc_8216E304;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8216e2d0
	if (ctx.cr6.lt) goto loc_8216E2D0;
loc_8216E2F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8216E304:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216E2A8) {
	__imp__sub_8216E2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E310) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,26196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26196);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216e350
	if (ctx.cr6.eq) goto loc_8216E350;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,26056(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26056, ctx.r10.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8216e2a8
	ctx.lr = 0x8216E344;
	sub_8216E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8216e354
	if (ctx.cr6.eq) goto loc_8216E354;
loc_8216E350:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8216E354:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8216E310) {
	__imp__sub_8216E310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216E364) {
	__imp__sub_8216E364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8216E370;
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
	// lwz r31,26196(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26196);
	// ble cr6,0x8216e3c8
	if (!ctx.cr6.gt) goto loc_8216E3C8;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8216E390:
	// stw r31,26196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26196, ctx.r31.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e3b8
	if (ctx.cr6.eq) goto loc_8216E3B8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,26056(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26056, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8216e2a8
	ctx.lr = 0x8216E3B0;
	sub_8216E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216e3d4
	if (ctx.cr6.eq) goto loc_8216E3D4;
loc_8216E3B8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216e390
	if (ctx.cr6.lt) goto loc_8216E390;
loc_8216E3C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8216E3D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216E368) {
	__imp__sub_8216E368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E3E0) {
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
	// lwz r4,26752(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// bl 0x821778d8
	ctx.lr = 0x8216E400;
	sub_821778D8(ctx, base);
	// lwz r3,26752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e458
	if (ctx.cr6.eq) goto loc_8216E458;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216e454
	if (!ctx.cr6.eq) goto loc_8216E454;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216E420;
	sub_82177868(ctx, base);
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26116, ctx.r11.u32);
	// bl 0x8216a130
	ctx.lr = 0x8216E440;
	sub_8216A130(ctx, base);
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
loc_8216E454:
	// bl 0x82177978
	ctx.lr = 0x8216E458;
	sub_82177978(ctx, base);
loc_8216E458:
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

PPC_WEAK_FUNC(sub_8216E3E0) {
	__imp__sub_8216E3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216E46C) {
	__imp__sub_8216E46C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8216E478;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,26752(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// bl 0x821778d8
	ctx.lr = 0x8216E490;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,26752(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// ble cr6,0x8216e504
	if (!ctx.cr6.gt) goto loc_8216E504;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8216E4A0:
	// stw r29,26752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26752, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8216E4B4;
	sub_821778D8(ctx, base);
	// lwz r3,26752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e4f8
	if (ctx.cr6.eq) goto loc_8216E4F8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216e4f4
	if (!ctx.cr6.eq) goto loc_8216E4F4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216E4D4;
	sub_82177868(ctx, base);
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26116(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26116, ctx.r11.u32);
	// bl 0x8216a130
	ctx.lr = 0x8216E4F0;
	sub_8216A130(ctx, base);
	// b 0x8216e4f8
	goto loc_8216E4F8;
loc_8216E4F4:
	// bl 0x82177978
	ctx.lr = 0x8216E4F8;
	sub_82177978(ctx, base);
loc_8216E4F8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8216e4a0
	if (!ctx.cr0.eq) goto loc_8216E4A0;
loc_8216E504:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216E470) {
	__imp__sub_8216E470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216E50C) {
	__imp__sub_8216E50C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8216E518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8216e598
	if (!ctx.cr6.gt) goto loc_8216E598;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,26752(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
loc_8216E534:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216E540;
	sub_821778D8(ctx, base);
	// lwz r3,26752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e584
	if (ctx.cr6.eq) goto loc_8216E584;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8216e580
	if (!ctx.cr6.eq) goto loc_8216E580;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216E560;
	sub_82177868(ctx, base);
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26752);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26116, ctx.r11.u32);
	// bl 0x8216a130
	ctx.lr = 0x8216E57C;
	sub_8216A130(ctx, base);
	// b 0x8216e584
	goto loc_8216E584;
loc_8216E580:
	// bl 0x82177978
	ctx.lr = 0x8216E584;
	sub_82177978(ctx, base);
loc_8216E584:
	// bl 0x82177858
	ctx.lr = 0x8216E588;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26752, ctx.r3.u32);
	// bne 0x8216e534
	if (!ctx.cr0.eq) goto loc_8216E534;
loc_8216E598:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8216E510) {
	__imp__sub_8216E510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E5A0) {
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
	// lwz r4,27696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// bl 0x821778d8
	ctx.lr = 0x8216E5C0;
	sub_821778D8(ctx, base);
	// lwz r11,27696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216e600
	if (ctx.cr6.eq) goto loc_8216E600;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8216E5D8;
	sub_82177868(ctx, base);
	// lwz r11,27696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27696);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,26752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26752, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216e470
	ctx.lr = 0x8216E600;
	sub_8216E470(ctx, base);
loc_8216E600:
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

PPC_WEAK_FUNC(sub_8216E5A0) {
	__imp__sub_8216E5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216E614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216E614) {
	__imp__sub_8216E614(ctx, base);
}

