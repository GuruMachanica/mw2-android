#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82158D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82158D9C) {
	__imp__sub_82158D9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158DA0) {
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
	// ble cr6,0x82158ddc
	if (!ctx.cr6.gt) goto loc_82158DDC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82158DC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82158c48
	ctx.lr = 0x82158DCC;
	sub_82158C48(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82158DD0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28216, ctx.r3.u32);
	// bne 0x82158dc4
	if (!ctx.cr0.eq) goto loc_82158DC4;
loc_82158DDC:
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

PPC_WEAK_FUNC(sub_82158DA0) {
	__imp__sub_82158DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82158DF4) {
	__imp__sub_82158DF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82158E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,252
	ctx.r5.s64 = 252;
	// lwz r4,27400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
	// bl 0x821778d8
	ctx.lr = 0x82158E14;
	sub_821778D8(ctx, base);
	// lwz r11,27400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82158e68
	if (ctx.cr6.eq) goto loc_82158E68;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82158E2C;
	sub_82177868(ctx, base);
	// lwz r11,27400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// lwz r11,27400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
	// lwz r4,180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// stw r4,28472(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28472, ctx.r4.u32);
	// lbz r11,178(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 178);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821778d8
	ctx.lr = 0x82158E64;
	sub_821778D8(ctx, base);
	// lwz r11,27400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
loc_82158E68:
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82158eb8
	if (ctx.cr6.eq) goto loc_82158EB8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82158E7C;
	sub_82177868(ctx, base);
	// lwz r11,27400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// lwz r11,27400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
	// lwz r4,184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r4,28564(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28564, ctx.r4.u32);
	// lbz r11,179(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 179);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x821778d8
	ctx.lr = 0x82158EB4;
	sub_821778D8(ctx, base);
	// lwz r11,27400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
loc_82158EB8:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25172, ctx.r11.u32);
	// bl 0x82158810
	ctx.lr = 0x82158ECC;
	sub_82158810(ctx, base);
	// lwz r11,27400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// addi r11,r11,216
	ctx.r11.s64 = ctx.r11.s64 + 216;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26240, ctx.r11.u32);
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82158EEC;
	sub_82147188(ctx, base);
	// lwz r3,26240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26240);
	// bl 0x82177670
	ctx.lr = 0x82158EF4;
	sub_82177670(ctx, base);
	// lwz r11,27400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,220
	ctx.r11.s64 = ctx.r11.s64 + 220;
	// stw r11,26240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26240, ctx.r11.u32);
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82158F0C;
	sub_82147188(ctx, base);
	// lwz r3,26240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26240);
	// bl 0x82177670
	ctx.lr = 0x82158F14;
	sub_82177670(ctx, base);
	// lwz r11,27400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// stw r11,26240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26240, ctx.r11.u32);
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82158F2C;
	sub_82147188(ctx, base);
	// lwz r3,26240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26240);
	// bl 0x82177670
	ctx.lr = 0x82158F34;
	sub_82177670(ctx, base);
	// lwz r11,27400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,244
	ctx.r11.s64 = ctx.r11.s64 + 244;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28216(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28216, ctx.r11.u32);
	// bl 0x82158c48
	ctx.lr = 0x82158F4C;
	sub_82158C48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158DF8) {
	__imp__sub_82158DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82158F54) {
	__imp__sub_82158F54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158F58) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158F58) {
	__imp__sub_82158F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82158F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,252
	ctx.r5.s64 = ctx.r4.s64 * 252;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27400(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27400);
	// bl 0x821778d8
	ctx.lr = 0x82158F80;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27400(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27400);
	// ble cr6,0x82158fa4
	if (!ctx.cr6.gt) goto loc_82158FA4;
loc_82158F8C:
	// stw r30,27400(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27400, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82158df8
	ctx.lr = 0x82158F98;
	sub_82158DF8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,252
	ctx.r30.s64 = ctx.r30.s64 + 252;
	// bne 0x82158f8c
	if (!ctx.cr0.eq) goto loc_82158F8C;
loc_82158FA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158F60) {
	__imp__sub_82158F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82158FAC) {
	__imp__sub_82158FAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158FB0) {
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
	// ble cr6,0x82158fec
	if (!ctx.cr6.gt) goto loc_82158FEC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82158FD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82158df8
	ctx.lr = 0x82158FDC;
	sub_82158DF8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82158FE0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27400, ctx.r3.u32);
	// bne 0x82158fd4
	if (!ctx.cr0.eq) goto loc_82158FD4;
loc_82158FEC:
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

PPC_WEAK_FUNC(sub_82158FB0) {
	__imp__sub_82158FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82159004) {
	__imp__sub_82159004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159008) {
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
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,26696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26696);
	// bl 0x821778d8
	ctx.lr = 0x82159028;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82159030;
	sub_82177758(ctx, base);
	// lwz r11,26696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26696);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82159044;
	sub_82147188(ctx, base);
	// lwz r11,26696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26696);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82159094
	if (ctx.cr6.eq) goto loc_82159094;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215905C;
	sub_82177868(ctx, base);
	// lwz r11,26696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26696);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,26696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26696);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,27400(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27400, ctx.r10.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x82158f60
	ctx.lr = 0x82159094;
	sub_82158F60(ctx, base);
loc_82159094:
	// bl 0x821777e0
	ctx.lr = 0x82159098;
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

PPC_WEAK_FUNC(sub_82159008) {
	__imp__sub_82159008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821590AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821590AC) {
	__imp__sub_821590AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821590B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821590B0) {
	__imp__sub_821590B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821590B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821590C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26696(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26696);
	// bl 0x821778d8
	ctx.lr = 0x821590D8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26696(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26696);
	// ble cr6,0x821590fc
	if (!ctx.cr6.gt) goto loc_821590FC;
loc_821590E4:
	// stw r30,26696(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26696, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82159008
	ctx.lr = 0x821590F0;
	sub_82159008(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x821590e4
	if (!ctx.cr0.eq) goto loc_821590E4;
loc_821590FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821590B8) {
	__imp__sub_821590B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82159104) {
	__imp__sub_82159104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159108) {
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
	// ble cr6,0x82159144
	if (!ctx.cr6.gt) goto loc_82159144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215912C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82159008
	ctx.lr = 0x82159134;
	sub_82159008(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82159138;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26696, ctx.r3.u32);
	// bne 0x8215912c
	if (!ctx.cr0.eq) goto loc_8215912C;
loc_82159144:
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

PPC_WEAK_FUNC(sub_82159108) {
	__imp__sub_82159108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215915C) {
	__imp__sub_8215915C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r4,25480(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25480);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159160) {
	__imp__sub_82159160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159170) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159170) {
	__imp__sub_82159170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,28
	ctx.r5.s64 = ctx.r4.s64 * 28;
	// lwz r4,25480(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25480);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159178) {
	__imp__sub_82159178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159188) {
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
	// ble cr6,0x821591d0
	if (!ctx.cr6.gt) goto loc_821591D0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25480(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25480);
loc_821591B0:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821591BC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821591C0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25480, ctx.r3.u32);
	// bne 0x821591b0
	if (!ctx.cr0.eq) goto loc_821591B0;
loc_821591D0:
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

PPC_WEAK_FUNC(sub_82159188) {
	__imp__sub_82159188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821591E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821591E8) {
	__imp__sub_821591E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821591F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821591F0) {
	__imp__sub_821591F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821591F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821591F8) {
	__imp__sub_821591F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159200) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159200) {
	__imp__sub_82159200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159208) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159208) {
	__imp__sub_82159208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159210) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159210) {
	__imp__sub_82159210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159218) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159218) {
	__imp__sub_82159218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159220) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159220) {
	__imp__sub_82159220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159228) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159228) {
	__imp__sub_82159228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159230) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159230) {
	__imp__sub_82159230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82159240;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r31,26924(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26924);
loc_82159254:
	// stw r31,28604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28604, ctx.r31.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215925C;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82159280
	if (ctx.cr6.eq) goto loc_82159280;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82159254
	if (ctx.cr6.lt) goto loc_82159254;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82159280:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159238) {
	__imp__sub_82159238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215928C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215928C) {
	__imp__sub_8215928C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82159298;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r28,26924(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26924);
	// ble cr6,0x8215936c
	if (!ctx.cr6.gt) goto loc_8215936C;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r23,-32142
	ctx.r23.s64 = -2106458112;
loc_821592C4:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,26924(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26924, ctx.r28.u32);
	// li r29,0
	ctx.r29.s64 = 0;
loc_821592D0:
	// stw r31,28604(r23)
	PPC_STORE_U32(ctx.r23.u32 + 28604, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215934c
	if (ctx.cr6.eq) goto loc_8215934C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25792, ctx.r3.u32);
	// bl 0x821752f8
	ctx.lr = 0x821592F0;
	sub_821752F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215934c
	if (!ctx.cr6.eq) goto loc_8215934C;
	// lwz r11,25792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25792);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,27544(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27544, ctx.r11.u32);
	// bl 0x82152c98
	ctx.lr = 0x82159308;
	sub_82152C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82159378
	if (ctx.cr6.eq) goto loc_82159378;
	// lwz r3,25792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25792);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215933c
	if (ctx.cr6.eq) goto loc_8215933C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,25244(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25244, ctx.r11.u32);
	// lbz r3,57(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// bl 0x82152a78
	ctx.lr = 0x82159330;
	sub_82152A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82159378
	if (ctx.cr6.eq) goto loc_82159378;
	// lwz r3,25792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25792);
loc_8215933C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821752f8
	ctx.lr = 0x82159344;
	sub_821752F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82159378
	if (ctx.cr6.eq) goto loc_82159378;
loc_8215934C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x821592d0
	if (ctx.cr6.lt) goto loc_821592D0;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x821592c4
	if (ctx.cr6.lt) goto loc_821592C4;
loc_8215936C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82159378:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159290) {
	__imp__sub_82159290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82159384) {
	__imp__sub_82159384(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159388) {
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
	// lwz r11,28608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28608);
	// lbz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x821593d4
	if (!ctx.cr6.eq) goto loc_821593D4;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26180);
	// stw r11,26052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26052, ctx.r11.u32);
	// bl 0x821562c0
	ctx.lr = 0x821593BC;
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
loc_821593D4:
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82159420
	if (ctx.cr6.eq) goto loc_82159420;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82159420
	if (ctx.cr6.eq) goto loc_82159420;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82159420
	if (ctx.cr6.eq) goto loc_82159420;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82159420
	if (ctx.cr6.eq) goto loc_82159420;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26180);
	// stw r11,28604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82159408;
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
loc_82159420:
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

PPC_WEAK_FUNC(sub_82159388) {
	__imp__sub_82159388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82159434) {
	__imp__sub_82159434(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82159440;
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
	// lwz r31,26180(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26180);
	// ble cr6,0x8215947c
	if (!ctx.cr6.gt) goto loc_8215947C;
loc_8215945C:
	// stw r31,26180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26180, ctx.r31.u32);
	// bl 0x82159388
	ctx.lr = 0x82159464;
	sub_82159388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82159488
	if (ctx.cr6.eq) goto loc_82159488;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8215945c
	if (ctx.cr6.lt) goto loc_8215945C;
loc_8215947C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82159488:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159438) {
	__imp__sub_82159438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82159494) {
	__imp__sub_82159494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159498) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159498) {
	__imp__sub_82159498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821594A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821594A0) {
	__imp__sub_821594A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821594A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821594A8) {
	__imp__sub_821594A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821594B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821594B0) {
	__imp__sub_821594B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821594B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821594B8) {
	__imp__sub_821594B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821594C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821594C0) {
	__imp__sub_821594C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821594C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821594C8) {
	__imp__sub_821594C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821594D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821594D0) {
	__imp__sub_821594D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821594D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821594D8) {
	__imp__sub_821594D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821594E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821594E0) {
	__imp__sub_821594E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821594E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821594E8) {
	__imp__sub_821594E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821594F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821594F0) {
	__imp__sub_821594F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821594F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821594F8) {
	__imp__sub_821594F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159500) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159500) {
	__imp__sub_82159500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159508) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159508) {
	__imp__sub_82159508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159510) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159510) {
	__imp__sub_82159510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159518) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159518) {
	__imp__sub_82159518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159520) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159520) {
	__imp__sub_82159520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159528) {
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
	// lwz r11,28608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28608);
	// lbz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x82159574
	if (!ctx.cr6.eq) goto loc_82159574;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r10,26980(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26980);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821595e0
	if (ctx.cr6.eq) goto loc_821595E0;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r10,26924(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26924, ctx.r10.u32);
	// lbz r3,177(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// bl 0x82159290
	ctx.lr = 0x82159570;
	sub_82159290(ctx, base);
	// b 0x821595d4
	goto loc_821595D4;
loc_82159574:
	// lbz r10,177(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x821595ac
	if (ctx.cr6.gt) goto loc_821595AC;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26980);
	// stw r11,26180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26180, ctx.r11.u32);
	// bl 0x82159388
	ctx.lr = 0x82159594;
	sub_82159388(ctx, base);
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
loc_821595AC:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r10,26980(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26980);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821595e0
	if (ctx.cr6.eq) goto loc_821595E0;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r10,26180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26180, ctx.r10.u32);
	// lbz r3,177(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// bl 0x82159438
	ctx.lr = 0x821595D4;
	sub_82159438(ctx, base);
loc_821595D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x821595e4
	if (ctx.cr6.eq) goto loc_821595E4;
loc_821595E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821595E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159528) {
	__imp__sub_82159528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821595F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821595F4) {
	__imp__sub_821595F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821595F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82159600;
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
	// lwz r31,26980(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26980);
	// ble cr6,0x8215963c
	if (!ctx.cr6.gt) goto loc_8215963C;
loc_8215961C:
	// stw r31,26980(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26980, ctx.r31.u32);
	// bl 0x82159528
	ctx.lr = 0x82159624;
	sub_82159528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82159648
	if (ctx.cr6.eq) goto loc_82159648;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8215961c
	if (ctx.cr6.lt) goto loc_8215961C;
loc_8215963C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82159648:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821595F8) {
	__imp__sub_821595F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82159654) {
	__imp__sub_82159654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159658) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159658) {
	__imp__sub_82159658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159660) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159660) {
	__imp__sub_82159660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159668) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159668) {
	__imp__sub_82159668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159670) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159670) {
	__imp__sub_82159670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159678) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159678) {
	__imp__sub_82159678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159680) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159680) {
	__imp__sub_82159680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28608);
	// lbz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159688) {
	__imp__sub_82159688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821596A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821596A0) {
	__imp__sub_821596A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821596A8) {
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
	// lwz r11,28608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28608);
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
	// stw r11,26980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26980, ctx.r11.u32);
	// bl 0x82159528
	ctx.lr = 0x821596CC;
	sub_82159528(ctx, base);
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

PPC_WEAK_FUNC(sub_821596A8) {
	__imp__sub_821596A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821596E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821596E4) {
	__imp__sub_821596E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821596E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821596F0;
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
	// lwz r31,28608(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28608);
	// ble cr6,0x82159738
	if (!ctx.cr6.gt) goto loc_82159738;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_82159710:
	// addi r11,r31,188
	ctx.r11.s64 = ctx.r31.s64 + 188;
	// stw r31,28608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28608, ctx.r31.u32);
	// stw r11,26980(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26980, ctx.r11.u32);
	// bl 0x82159528
	ctx.lr = 0x82159720;
	sub_82159528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82159744
	if (ctx.cr6.eq) goto loc_82159744;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,252
	ctx.r31.s64 = ctx.r31.s64 + 252;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82159710
	if (ctx.cr6.lt) goto loc_82159710;
loc_82159738:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82159744:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821596E8) {
	__imp__sub_821596E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159750) {
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
	// lwz r11,24944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24944);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821597a0
	if (ctx.cr6.eq) goto loc_821597A0;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,28608(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28608, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821596e8
	ctx.lr = 0x82159794;
	sub_821596E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x821597a4
	if (ctx.cr6.eq) goto loc_821597A4;
loc_821597A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821597A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159750) {
	__imp__sub_82159750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821597B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821597B4) {
	__imp__sub_821597B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821597B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821597C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,24944(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24944);
	// ble cr6,0x82159828
	if (!ctx.cr6.gt) goto loc_82159828;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821597E0:
	// stw r31,24944(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24944, ctx.r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159818
	if (ctx.cr6.eq) goto loc_82159818;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,28608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28608, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821596e8
	ctx.lr = 0x82159810;
	sub_821596E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82159834
	if (ctx.cr6.eq) goto loc_82159834;
loc_82159818:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821597e0
	if (ctx.cr6.lt) goto loc_821597E0;
loc_82159828:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82159834:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821597B8) {
	__imp__sub_821597B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159840) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159840) {
	__imp__sub_82159840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159848) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159848) {
	__imp__sub_82159848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159850) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25500(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25500);
	// stw r4,28596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28596, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159850) {
	__imp__sub_82159850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159874) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82159874) {
	__imp__sub_82159874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159878) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159878) {
	__imp__sub_82159878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25500(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25500);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159880) {
	__imp__sub_82159880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82159898;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821598d8
	if (!ctx.cr6.gt) goto loc_821598D8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25500(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25500);
loc_821598B4:
	// stw r4,28596(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28596, ctx.r4.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821598C4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821598C8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25500, ctx.r3.u32);
	// bne 0x821598b4
	if (!ctx.cr0.eq) goto loc_821598B4;
loc_821598D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159890) {
	__imp__sub_82159890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821598E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27348(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27348);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821598E0) {
	__imp__sub_821598E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821598F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821598F0) {
	__imp__sub_821598F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821598F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27348(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27348);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821598F8) {
	__imp__sub_821598F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159908) {
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
	// ble cr6,0x82159950
	if (!ctx.cr6.gt) goto loc_82159950;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27348(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27348);
loc_82159930:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215993C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82159940;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27348, ctx.r3.u32);
	// bne 0x82159930
	if (!ctx.cr0.eq) goto loc_82159930;
loc_82159950:
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

PPC_WEAK_FUNC(sub_82159908) {
	__imp__sub_82159908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159968) {
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
	// lwz r4,25312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
	// bl 0x821778d8
	ctx.lr = 0x8215998C;
	sub_821778D8(ctx, base);
	// lwz r11,25312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,28300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28300, ctx.r11.u32);
	// bl 0x82154b30
	ctx.lr = 0x821599A4;
	sub_82154B30(ctx, base);
	// lwz r11,25312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x821599BC;
	sub_82152400(ctx, base);
	// lwz r11,25312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,25372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x821599D0;
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

PPC_WEAK_FUNC(sub_82159968) {
	__imp__sub_82159968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821599E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821599E8) {
	__imp__sub_821599E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821599F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821599F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mulli r5,r4,44
	ctx.r5.s64 = ctx.r4.s64 * 44;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,25312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
	// bl 0x821778d8
	ctx.lr = 0x82159A10;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r30,25312(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
	// ble cr6,0x82159a80
	if (!ctx.cr6.gt) goto loc_82159A80;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_82159A24:
	// stw r30,25312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25312, ctx.r30.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82159A38;
	sub_821778D8(ctx, base);
	// lwz r11,25312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,28300(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28300, ctx.r11.u32);
	// bl 0x82154b30
	ctx.lr = 0x82159A4C;
	sub_82154B30(ctx, base);
	// lwz r11,25312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82159A60;
	sub_82152400(ctx, base);
	// lwz r11,25312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82159A74;
	sub_82152400(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// bne 0x82159a24
	if (!ctx.cr0.eq) goto loc_82159A24;
loc_82159A80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821599F0) {
	__imp__sub_821599F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82159A90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82159b0c
	if (!ctx.cr6.gt) goto loc_82159B0C;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lwz r4,25312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
loc_82159AB0:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82159ABC;
	sub_821778D8(ctx, base);
	// lwz r11,25312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,28300(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28300, ctx.r11.u32);
	// bl 0x82154b30
	ctx.lr = 0x82159AD0;
	sub_82154B30(ctx, base);
	// lwz r11,25312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82159AE4;
	sub_82152400(ctx, base);
	// lwz r11,25312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25312);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82159AF8;
	sub_82152400(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82159AFC;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25312, ctx.r3.u32);
	// bne 0x82159ab0
	if (!ctx.cr0.eq) goto loc_82159AB0;
loc_82159B0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159A88) {
	__imp__sub_82159A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82159B14) {
	__imp__sub_82159B14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,27432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27432);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159B18) {
	__imp__sub_82159B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159B28) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159B28) {
	__imp__sub_82159B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,27432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27432);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159B30) {
	__imp__sub_82159B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159B40) {
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
	// ble cr6,0x82159b88
	if (!ctx.cr6.gt) goto loc_82159B88;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27432(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27432);
loc_82159B68:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82159B74;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82159B78;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27432, ctx.r3.u32);
	// bne 0x82159b68
	if (!ctx.cr0.eq) goto loc_82159B68;
loc_82159B88:
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

PPC_WEAK_FUNC(sub_82159B40) {
	__imp__sub_82159B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,27672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27672);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159BA0) {
	__imp__sub_82159BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159BB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159BB0) {
	__imp__sub_82159BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,27672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27672);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159BB8) {
	__imp__sub_82159BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159BC8) {
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
	// ble cr6,0x82159c10
	if (!ctx.cr6.gt) goto loc_82159C10;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27672(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27672);
loc_82159BF0:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82159BFC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82159C00;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27672, ctx.r3.u32);
	// bne 0x82159bf0
	if (!ctx.cr0.eq) goto loc_82159BF0;
loc_82159C10:
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

PPC_WEAK_FUNC(sub_82159BC8) {
	__imp__sub_82159BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,26492(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26492);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159C28) {
	__imp__sub_82159C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159C38) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159C38) {
	__imp__sub_82159C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,26492(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26492);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159C40) {
	__imp__sub_82159C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159C50) {
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
	// ble cr6,0x82159c98
	if (!ctx.cr6.gt) goto loc_82159C98;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26492(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26492);
loc_82159C78:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82159C84;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82159C88;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26492, ctx.r3.u32);
	// bne 0x82159c78
	if (!ctx.cr0.eq) goto loc_82159C78;
loc_82159C98:
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

PPC_WEAK_FUNC(sub_82159C50) {
	__imp__sub_82159C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r4,28636(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28636);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159CB0) {
	__imp__sub_82159CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159CC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159CC0) {
	__imp__sub_82159CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,52
	ctx.r5.s64 = ctx.r4.s64 * 52;
	// lwz r4,28636(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28636);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159CC8) {
	__imp__sub_82159CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159CD8) {
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
	// ble cr6,0x82159d20
	if (!ctx.cr6.gt) goto loc_82159D20;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28636(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28636);
loc_82159D00:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82159D0C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82159D10;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28636, ctx.r3.u32);
	// bne 0x82159d00
	if (!ctx.cr0.eq) goto loc_82159D00;
loc_82159D20:
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

PPC_WEAK_FUNC(sub_82159CD8) {
	__imp__sub_82159CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r4,25168(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25168);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159D38) {
	__imp__sub_82159D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159D48) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159D48) {
	__imp__sub_82159D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159D50) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25168(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25168);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82159D50) {
	__imp__sub_82159D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159D68) {
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
	// ble cr6,0x82159db0
	if (!ctx.cr6.gt) goto loc_82159DB0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25168);
loc_82159D90:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82159D9C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82159DA0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25168, ctx.r3.u32);
	// bne 0x82159d90
	if (!ctx.cr0.eq) goto loc_82159D90;
loc_82159DB0:
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

PPC_WEAK_FUNC(sub_82159D68) {
	__imp__sub_82159D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82159DC8) {
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
	// li r5,112
	ctx.r5.s64 = 112;
	// lwz r4,25948(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// bl 0x821778d8
	ctx.lr = 0x82159DEC;
	sub_821778D8(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159e2c
	if (ctx.cr6.eq) goto loc_82159E2C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82159E04;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,25312(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25312, ctx.r10.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821599f0
	ctx.lr = 0x82159E2C;
	sub_821599F0(ctx, base);
loc_82159E2C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82159E34;
	sub_82177758(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159e78
	if (ctx.cr6.eq) goto loc_82159E78;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82159E4C;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r4,27672(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27672, ctx.r4.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r8,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821778d8
	ctx.lr = 0x82159E78;
	sub_821778D8(ctx, base);
loc_82159E78:
	// bl 0x821777e0
	ctx.lr = 0x82159E7C;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82159E84;
	sub_82177758(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159ec8
	if (ctx.cr6.eq) goto loc_82159EC8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82159E9C;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r4,26492(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26492, ctx.r4.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r8,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821778d8
	ctx.lr = 0x82159EC8;
	sub_821778D8(ctx, base);
loc_82159EC8:
	// bl 0x821777e0
	ctx.lr = 0x82159ECC;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82159ED4;
	sub_82177758(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159f20
	if (ctx.cr6.eq) goto loc_82159F20;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82159EEC;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r4,25168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25168, ctx.r4.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82159F20;
	sub_821778D8(ctx, base);
loc_82159F20:
	// bl 0x821777e0
	ctx.lr = 0x82159F24;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82159F2C;
	sub_82177758(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159f70
	if (ctx.cr6.eq) goto loc_82159F70;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82159F44;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r4,27348(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27348, ctx.r4.u32);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82159F70;
	sub_821778D8(ctx, base);
loc_82159F70:
	// bl 0x821777e0
	ctx.lr = 0x82159F74;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82159F7C;
	sub_82177758(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159fc0
	if (ctx.cr6.eq) goto loc_82159FC0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82159F98;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r4,27008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27008, ctx.r4.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82159FC0;
	sub_821778D8(ctx, base);
loc_82159FC0:
	// bl 0x821777e0
	ctx.lr = 0x82159FC4;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x82159FCC;
	sub_82177758(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a014
	if (ctx.cr6.eq) goto loc_8215A014;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82159FE4;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r4,27008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27008, ctx.r4.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8215A014;
	sub_821778D8(ctx, base);
loc_8215A014:
	// bl 0x821777e0
	ctx.lr = 0x8215A018;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8215A020;
	sub_82177758(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a068
	if (ctx.cr6.eq) goto loc_8215A068;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x8215A038;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r4,27936(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27936, ctx.r4.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// rlwinm r5,r8,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x821778d8
	ctx.lr = 0x8215A068;
	sub_821778D8(ctx, base);
loc_8215A068:
	// bl 0x821777e0
	ctx.lr = 0x8215A06C;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8215A074;
	sub_82177758(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a0c0
	if (ctx.cr6.eq) goto loc_8215A0C0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215A08C;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r4,28328(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28328, ctx.r4.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8215A0C0;
	sub_821778D8(ctx, base);
loc_8215A0C0:
	// bl 0x821777e0
	ctx.lr = 0x8215A0C4;
	sub_821777E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82177758
	ctx.lr = 0x8215A0CC;
	sub_82177758(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a114
	if (ctx.cr6.eq) goto loc_8215A114;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x8215A0E4;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r4,27040(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27040, ctx.r4.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// rlwinm r5,r8,2,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFF0;
	// bl 0x821778d8
	ctx.lr = 0x8215A114;
	sub_821778D8(ctx, base);
loc_8215A114:
	// bl 0x821777e0
	ctx.lr = 0x8215A118;
	sub_821777E0(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215a160
	if (ctx.cr6.eq) goto loc_8215A160;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x8215A130;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r4,25984(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25984, ctx.r4.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x8215A15C;
	sub_821778D8(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
loc_8215A160:
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215a1a4
	if (ctx.cr6.eq) goto loc_8215A1A4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215A174;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r4,28636(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28636, ctx.r4.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r5,r8,52
	ctx.r5.s64 = ctx.r8.s64 * 52;
	// bl 0x821778d8
	ctx.lr = 0x8215A1A0;
	sub_821778D8(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
loc_8215A1A4:
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a1e4
	if (ctx.cr6.eq) goto loc_8215A1E4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215A1B8;
	sub_82177868(ctx, base);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,25948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25948);
	// lwz r4,96(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r4,25500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25500, ctx.r4.u32);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8215A1E4;
	sub_821778D8(ctx, base);
loc_8215A1E4:
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

PPC_WEAK_FUNC(sub_82159DC8) {
	__imp__sub_82159DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215A1FC) {
	__imp__sub_8215A1FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A200) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215A200) {
	__imp__sub_8215A200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215A210;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,112
	ctx.r5.s64 = ctx.r4.s64 * 112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25948(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25948);
	// bl 0x821778d8
	ctx.lr = 0x8215A228;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25948(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25948);
	// ble cr6,0x8215a24c
	if (!ctx.cr6.gt) goto loc_8215A24C;
loc_8215A234:
	// stw r30,25948(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25948, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82159dc8
	ctx.lr = 0x8215A240;
	sub_82159DC8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// bne 0x8215a234
	if (!ctx.cr0.eq) goto loc_8215A234;
loc_8215A24C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215A208) {
	__imp__sub_8215A208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215A254) {
	__imp__sub_8215A254(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A258) {
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
	// ble cr6,0x8215a294
	if (!ctx.cr6.gt) goto loc_8215A294;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215A27C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82159dc8
	ctx.lr = 0x8215A284;
	sub_82159DC8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215A288;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25948, ctx.r3.u32);
	// bne 0x8215a27c
	if (!ctx.cr0.eq) goto loc_8215A27C;
loc_8215A294:
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

PPC_WEAK_FUNC(sub_8215A258) {
	__imp__sub_8215A258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215A2AC) {
	__imp__sub_8215A2AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A2B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A2B0) {
	__imp__sub_8215A2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A2B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A2B8) {
	__imp__sub_8215A2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A2C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A2C0) {
	__imp__sub_8215A2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A2C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A2C8) {
	__imp__sub_8215A2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A2D0) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26916);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,26348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26348, ctx.r11.u32);
	// bl 0x821551a8
	ctx.lr = 0x8215A2FC;
	sub_821551A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215a30c
	if (!ctx.cr6.eq) goto loc_8215A30C;
loc_8215A304:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215a340
	goto loc_8215A340;
loc_8215A30C:
	// lwz r11,26916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26916);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,28604(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215A320;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215a304
	if (ctx.cr6.eq) goto loc_8215A304;
	// lwz r11,26916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26916);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,28604(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215A338;
	sub_82152EC8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8215A340:
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

PPC_WEAK_FUNC(sub_8215A2D0) {
	__imp__sub_8215A2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8215A360;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,26916(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26916);
	// ble cr6,0x8215a410
	if (!ctx.cr6.gt) goto loc_8215A410;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8215A388:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r31,26916(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26916, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r11,26348(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26348, ctx.r11.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215a3d4
	if (ctx.cr6.eq) goto loc_8215A3D4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27660(r26)
	PPC_STORE_U32(ctx.r26.u32 + 27660, ctx.r3.u32);
	// bl 0x82174fd0
	ctx.lr = 0x8215A3B4;
	sub_82174FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215a3d0
	if (!ctx.cr6.eq) goto loc_8215A3D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27660(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27660);
	// bl 0x82174fd0
	ctx.lr = 0x8215A3C8;
	sub_82174FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215a41c
	if (ctx.cr6.eq) goto loc_8215A41C;
loc_8215A3D0:
	// lwz r10,26916(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26916);
loc_8215A3D4:
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// stw r11,28604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215A3E0;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215a41c
	if (ctx.cr6.eq) goto loc_8215A41C;
	// lwz r11,26916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26916);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,28604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215A3F8;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215a41c
	if (ctx.cr6.eq) goto loc_8215A41C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8215a388
	if (ctx.cr6.lt) goto loc_8215A388;
loc_8215A410:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8215A41C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215A358) {
	__imp__sub_8215A358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A428) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A428) {
	__imp__sub_8215A428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A430) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A430) {
	__imp__sub_8215A430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A438) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A438) {
	__imp__sub_8215A438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A440) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A440) {
	__imp__sub_8215A440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A448) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A448) {
	__imp__sub_8215A448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A450) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A450) {
	__imp__sub_8215A450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A458) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A458) {
	__imp__sub_8215A458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A460) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A460) {
	__imp__sub_8215A460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A468) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A468) {
	__imp__sub_8215A468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A470) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A470) {
	__imp__sub_8215A470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A478) {
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
	// lwz r11,26092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26092);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215a4b8
	if (ctx.cr6.eq) goto loc_8215A4B8;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,26916(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26916, ctx.r10.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8215a358
	ctx.lr = 0x8215A4AC;
	sub_8215A358(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215a4bc
	if (ctx.cr6.eq) goto loc_8215A4BC;
loc_8215A4B8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215A4BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A478) {
	__imp__sub_8215A478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215A4CC) {
	__imp__sub_8215A4CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215A4D8;
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
	// lwz r31,26092(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26092);
	// ble cr6,0x8215a530
	if (!ctx.cr6.gt) goto loc_8215A530;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8215A4F8:
	// stw r31,26092(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26092, ctx.r31.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a520
	if (ctx.cr6.eq) goto loc_8215A520;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,26916(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26916, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8215a358
	ctx.lr = 0x8215A518;
	sub_8215A358(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215a53c
	if (ctx.cr6.eq) goto loc_8215A53C;
loc_8215A520:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8215a4f8
	if (ctx.cr6.lt) goto loc_8215A4F8;
loc_8215A530:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8215A53C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215A4D0) {
	__imp__sub_8215A4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A548) {
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
	// li r5,116
	ctx.r5.s64 = 116;
	// lwz r4,26428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26428);
	// bl 0x821778d8
	ctx.lr = 0x8215A568;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8215A570;
	sub_82177758(ctx, base);
	// lwz r11,26428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26428);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215A584;
	sub_82147188(ctx, base);
	// lwz r11,26428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26428);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25948(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25948, ctx.r11.u32);
	// bl 0x82159dc8
	ctx.lr = 0x8215A59C;
	sub_82159DC8(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8215A5A0;
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

PPC_WEAK_FUNC(sub_8215A548) {
	__imp__sub_8215A548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215A5B4) {
	__imp__sub_8215A5B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A5B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215A5B8) {
	__imp__sub_8215A5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8215A5C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,116
	ctx.r5.s64 = ctx.r4.s64 * 116;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,26428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26428);
	// bl 0x821778d8
	ctx.lr = 0x8215A5E0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,26428(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26428);
	// ble cr6,0x8215a690
	if (!ctx.cr6.gt) goto loc_8215A690;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215A5FC:
	// stw r31,26428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26428, ctx.r31.u32);
	// li r5,116
	ctx.r5.s64 = 116;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215A610;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8215A618;
	sub_82177758(ctx, base);
	// lwz r4,26428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26428);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215A62C;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a66c
	if (ctx.cr6.eq) goto loc_8215A66C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215a668
	if (!ctx.cr6.eq) goto loc_8215A668;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215A64C;
	sub_82177868(ctx, base);
	// lwz r11,28244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8215A664;
	sub_821779A0(ctx, base);
	// b 0x8215a66c
	goto loc_8215A66C;
loc_8215A668:
	// bl 0x82177978
	ctx.lr = 0x8215A66C;
	sub_82177978(ctx, base);
loc_8215A66C:
	// lwz r11,26428(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26428);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,25948(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25948, ctx.r11.u32);
	// bl 0x82159dc8
	ctx.lr = 0x8215A680;
	sub_82159DC8(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8215A684;
	sub_821777E0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,116
	ctx.r31.s64 = ctx.r31.s64 + 116;
	// bne 0x8215a5fc
	if (!ctx.cr0.eq) goto loc_8215A5FC;
loc_8215A690:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215A5C0) {
	__imp__sub_8215A5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215A6A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215a758
	if (!ctx.cr6.gt) goto loc_8215A758;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,26428(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26428);
loc_8215A6C4:
	// li r5,116
	ctx.r5.s64 = 116;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215A6D0;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8215A6D8;
	sub_82177758(ctx, base);
	// lwz r4,26428(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26428);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215A6EC;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a72c
	if (ctx.cr6.eq) goto loc_8215A72C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215a728
	if (!ctx.cr6.eq) goto loc_8215A728;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215A70C;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8215A724;
	sub_821779A0(ctx, base);
	// b 0x8215a72c
	goto loc_8215A72C;
loc_8215A728:
	// bl 0x82177978
	ctx.lr = 0x8215A72C;
	sub_82177978(ctx, base);
loc_8215A72C:
	// lwz r11,26428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26428);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,25948(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25948, ctx.r11.u32);
	// bl 0x82159dc8
	ctx.lr = 0x8215A740;
	sub_82159DC8(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8215A744;
	sub_821777E0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215A748;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26428, ctx.r3.u32);
	// bne 0x8215a6c4
	if (!ctx.cr0.eq) goto loc_8215A6C4;
loc_8215A758:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215A698) {
	__imp__sub_8215A698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A760) {
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
	// lwz r4,26804(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26804);
	// bl 0x821778d8
	ctx.lr = 0x8215A784;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8215A78C;
	sub_82177758(ctx, base);
	// lwz r3,26804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26804);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215a810
	if (ctx.cr6.eq) goto loc_8215A810;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8215a7b4
	if (ctx.cr6.eq) goto loc_8215A7B4;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8215a7b4
	if (ctx.cr6.eq) goto loc_8215A7B4;
	// bl 0x82177950
	ctx.lr = 0x8215A7B0;
	sub_82177950(ctx, base);
	// b 0x8215a810
	goto loc_8215A810;
loc_8215A7B4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215A7BC;
	sub_82177868(ctx, base);
	// lwz r11,26804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26804);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,26804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26804);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26428, ctx.r11.u32);
	// bne cr6,0x8215a7e8
	if (!ctx.cr6.eq) goto loc_8215A7E8;
	// bl 0x82177898
	ctx.lr = 0x8215A7E0;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8215a7ec
	goto loc_8215A7EC;
loc_8215A7E8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8215A7EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215a548
	ctx.lr = 0x8215A7F4;
	sub_8215A548(ctx, base);
	// lwz r3,26804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26804);
	// bl 0x82175a00
	ctx.lr = 0x8215A7FC;
	sub_82175A00(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215a810
	if (ctx.cr6.eq) goto loc_8215A810;
	// lwz r11,26804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26804);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8215A810:
	// bl 0x821777e0
	ctx.lr = 0x8215A814;
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

PPC_WEAK_FUNC(sub_8215A760) {
	__imp__sub_8215A760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215A82C) {
	__imp__sub_8215A82C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A830) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215A830) {
	__imp__sub_8215A830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215A840;
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
	// lwz r4,26804(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26804);
	// bl 0x821778d8
	ctx.lr = 0x8215A858;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26804(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26804);
	// ble cr6,0x8215a87c
	if (!ctx.cr6.gt) goto loc_8215A87C;
loc_8215A864:
	// stw r30,26804(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26804, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215a760
	ctx.lr = 0x8215A870;
	sub_8215A760(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8215a864
	if (!ctx.cr0.eq) goto loc_8215A864;
loc_8215A87C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215A838) {
	__imp__sub_8215A838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215A884) {
	__imp__sub_8215A884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A888) {
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
	// ble cr6,0x8215a8c4
	if (!ctx.cr6.gt) goto loc_8215A8C4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215A8AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215a760
	ctx.lr = 0x8215A8B4;
	sub_8215A760(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215A8B8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26804(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26804, ctx.r3.u32);
	// bne 0x8215a8ac
	if (!ctx.cr0.eq) goto loc_8215A8AC;
loc_8215A8C4:
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

PPC_WEAK_FUNC(sub_8215A888) {
	__imp__sub_8215A888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215A8DC) {
	__imp__sub_8215A8DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A8E0) {
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
	// lwz r11,26608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26608);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26092, ctx.r11.u32);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215a92c
	if (ctx.cr6.eq) goto loc_8215A92C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r10,26916(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26916, ctx.r10.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8215a358
	ctx.lr = 0x8215A920;
	sub_8215A358(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215a930
	if (ctx.cr6.eq) goto loc_8215A930;
loc_8215A92C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215A930:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215A8E0) {
	__imp__sub_8215A8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8215A948;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r30,26608(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26608);
	// ble cr6,0x8215a9b4
	if (!ctx.cr6.gt) goto loc_8215A9B4;
	// addi r31,r30,52
	ctx.r31.s64 = ctx.r30.s64 + 52;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8215A970:
	// addi r11,r31,-48
	ctx.r11.s64 = ctx.r31.s64 + -48;
	// stw r30,26608(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26608, ctx.r30.u32);
	// stw r11,26092(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26092, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a9a0
	if (ctx.cr6.eq) goto loc_8215A9A0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,26916(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26916, ctx.r11.u32);
	// lwz r3,-40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// bl 0x8215a358
	ctx.lr = 0x8215A998;
	sub_8215A358(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215a9c0
	if (ctx.cr6.eq) goto loc_8215A9C0;
loc_8215A9A0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,116
	ctx.r30.s64 = ctx.r30.s64 + 116;
	// addi r31,r31,116
	ctx.r31.s64 = ctx.r31.s64 + 116;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8215a970
	if (ctx.cr6.lt) goto loc_8215A970;
loc_8215A9B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8215A9C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215A940) {
	__imp__sub_8215A940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215A9CC) {
	__imp__sub_8215A9CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215A9D0) {
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
	// lwz r11,27228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27228);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215aa48
	if (ctx.cr6.eq) goto loc_8215AA48;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26608, ctx.r3.u32);
	// bl 0x82175a80
	ctx.lr = 0x8215AA08;
	sub_82175A80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215aa48
	if (!ctx.cr6.eq) goto loc_8215AA48;
	// bl 0x8215a8e0
	ctx.lr = 0x8215AA14;
	sub_8215A8E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215aa30
	if (!ctx.cr6.eq) goto loc_8215AA30;
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
loc_8215AA30:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26608);
	// bl 0x82175a80
	ctx.lr = 0x8215AA3C;
	sub_82175A80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215aa4c
	if (ctx.cr6.eq) goto loc_8215AA4C;
loc_8215AA48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215AA4C:
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

PPC_WEAK_FUNC(sub_8215A9D0) {
	__imp__sub_8215A9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215AA68;
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
	// lwz r31,27228(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27228);
	// ble cr6,0x8215aaa4
	if (!ctx.cr6.gt) goto loc_8215AAA4;
loc_8215AA84:
	// stw r31,27228(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27228, ctx.r31.u32);
	// bl 0x8215a9d0
	ctx.lr = 0x8215AA8C;
	sub_8215A9D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215aab0
	if (ctx.cr6.eq) goto loc_8215AAB0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8215aa84
	if (ctx.cr6.lt) goto loc_8215AA84;
loc_8215AAA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8215AAB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AA60) {
	__imp__sub_8215AA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215AABC) {
	__imp__sub_8215AABC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,25516(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25516);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AAC0) {
	__imp__sub_8215AAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AAD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AAD0) {
	__imp__sub_8215AAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,25516(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25516);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AAD8) {
	__imp__sub_8215AAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AAE8) {
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
	// ble cr6,0x8215ab30
	if (!ctx.cr6.gt) goto loc_8215AB30;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25516(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25516);
loc_8215AB10:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215AB1C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215AB20;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25516, ctx.r3.u32);
	// bne 0x8215ab10
	if (!ctx.cr0.eq) goto loc_8215AB10;
loc_8215AB30:
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

PPC_WEAK_FUNC(sub_8215AAE8) {
	__imp__sub_8215AAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27052(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27052);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AB48) {
	__imp__sub_8215AB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AB58) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AB58) {
	__imp__sub_8215AB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27052(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27052);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AB60) {
	__imp__sub_8215AB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AB70) {
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
	// ble cr6,0x8215abb8
	if (!ctx.cr6.gt) goto loc_8215ABB8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27052(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27052);
loc_8215AB98:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215ABA4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215ABA8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27052(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27052, ctx.r3.u32);
	// bne 0x8215ab98
	if (!ctx.cr0.eq) goto loc_8215AB98;
loc_8215ABB8:
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

PPC_WEAK_FUNC(sub_8215AB70) {
	__imp__sub_8215AB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215ABD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215ABD0) {
	__imp__sub_8215ABD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215ABD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r4,26576(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26576);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215ABD8) {
	__imp__sub_8215ABD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215ABE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215ABE8) {
	__imp__sub_8215ABE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215ABF0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26576(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26576);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215ABF0) {
	__imp__sub_8215ABF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AC08) {
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
	// ble cr6,0x8215ac50
	if (!ctx.cr6.gt) goto loc_8215AC50;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26576(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26576);
loc_8215AC30:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215AC3C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215AC40;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26576, ctx.r3.u32);
	// bne 0x8215ac30
	if (!ctx.cr0.eq) goto loc_8215AC30;
loc_8215AC50:
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

PPC_WEAK_FUNC(sub_8215AC08) {
	__imp__sub_8215AC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,28316(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28316);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AC68) {
	__imp__sub_8215AC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AC78) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AC78) {
	__imp__sub_8215AC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,28316(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28316);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AC80) {
	__imp__sub_8215AC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AC90) {
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
	// ble cr6,0x8215acd8
	if (!ctx.cr6.gt) goto loc_8215ACD8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28316(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28316);
loc_8215ACB8:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215ACC4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215ACC8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28316, ctx.r3.u32);
	// bne 0x8215acb8
	if (!ctx.cr0.eq) goto loc_8215ACB8;
loc_8215ACD8:
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

PPC_WEAK_FUNC(sub_8215AC90) {
	__imp__sub_8215AC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215ACF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,27456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27456);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215ACF0) {
	__imp__sub_8215ACF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AD00) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AD00) {
	__imp__sub_8215AD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AD08) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27456(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27456);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AD08) {
	__imp__sub_8215AD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AD20) {
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
	// ble cr6,0x8215ad68
	if (!ctx.cr6.gt) goto loc_8215AD68;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27456(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27456);
loc_8215AD48:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215AD54;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215AD58;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27456, ctx.r3.u32);
	// bne 0x8215ad48
	if (!ctx.cr0.eq) goto loc_8215AD48;
loc_8215AD68:
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

PPC_WEAK_FUNC(sub_8215AD20) {
	__imp__sub_8215AD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r4,25192(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25192);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AD80) {
	__imp__sub_8215AD80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AD90) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AD90) {
	__imp__sub_8215AD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AD98) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25192(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25192);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AD98) {
	__imp__sub_8215AD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215ADB0) {
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
	// ble cr6,0x8215adf8
	if (!ctx.cr6.gt) goto loc_8215ADF8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25192(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25192);
loc_8215ADD8:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215ADE4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215ADE8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25192, ctx.r3.u32);
	// bne 0x8215add8
	if (!ctx.cr0.eq) goto loc_8215ADD8;
loc_8215ADF8:
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

PPC_WEAK_FUNC(sub_8215ADB0) {
	__imp__sub_8215ADB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215AE10) {
	__imp__sub_8215AE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215AE18) {
	__imp__sub_8215AE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215AE20) {
	__imp__sub_8215AE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215AE28) {
	__imp__sub_8215AE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215AE30) {
	__imp__sub_8215AE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215AE38) {
	__imp__sub_8215AE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215AE40) {
	__imp__sub_8215AE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215AE48) {
	__imp__sub_8215AE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215AE50) {
	__imp__sub_8215AE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215AE58) {
	__imp__sub_8215AE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE60) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215AE60) {
	__imp__sub_8215AE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215AE68) {
	__imp__sub_8215AE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r4,28256(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28256);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AE70) {
	__imp__sub_8215AE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE80) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AE80) {
	__imp__sub_8215AE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AE88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28256(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28256);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AE88) {
	__imp__sub_8215AE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AEA0) {
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
	// ble cr6,0x8215aee8
	if (!ctx.cr6.gt) goto loc_8215AEE8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28256(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28256);
loc_8215AEC8:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215AED4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215AED8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28256, ctx.r3.u32);
	// bne 0x8215aec8
	if (!ctx.cr0.eq) goto loc_8215AEC8;
loc_8215AEE8:
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

PPC_WEAK_FUNC(sub_8215AEA0) {
	__imp__sub_8215AEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,26152(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26152);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AF00) {
	__imp__sub_8215AF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AF10) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AF10) {
	__imp__sub_8215AF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,26152(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26152);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AF18) {
	__imp__sub_8215AF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AF28) {
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
	// ble cr6,0x8215af70
	if (!ctx.cr6.gt) goto loc_8215AF70;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26152);
loc_8215AF50:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215AF5C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215AF60;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26152, ctx.r3.u32);
	// bne 0x8215af50
	if (!ctx.cr0.eq) goto loc_8215AF50;
loc_8215AF70:
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

PPC_WEAK_FUNC(sub_8215AF28) {
	__imp__sub_8215AF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,27064(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27064);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AF88) {
	__imp__sub_8215AF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AF98) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AF98) {
	__imp__sub_8215AF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,27064(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27064);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215AFA0) {
	__imp__sub_8215AFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215AFB0) {
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
	// ble cr6,0x8215aff8
	if (!ctx.cr6.gt) goto loc_8215AFF8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27064(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27064);
loc_8215AFD8:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215AFE4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215AFE8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27064(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27064, ctx.r3.u32);
	// bne 0x8215afd8
	if (!ctx.cr0.eq) goto loc_8215AFD8;
loc_8215AFF8:
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

PPC_WEAK_FUNC(sub_8215AFB0) {
	__imp__sub_8215AFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B010) {
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
	// lwz r4,26120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26120);
	// bl 0x821778d8
	ctx.lr = 0x8215B030;
	sub_821778D8(ctx, base);
	// lwz r11,26120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26120);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215b078
	if (ctx.cr6.eq) goto loc_8215B078;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215B048;
	sub_82177868(ctx, base);
	// lwz r11,26120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26120);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26120);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,27064(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27064, ctx.r4.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821778d8
	ctx.lr = 0x8215B074;
	sub_821778D8(ctx, base);
	// lwz r11,26120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26120);
loc_8215B078:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215b0bc
	if (ctx.cr6.eq) goto loc_8215B0BC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215B08C;
	sub_82177868(ctx, base);
	// lwz r11,26120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26120);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,26120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26120);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,26152(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26152, ctx.r4.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r8,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821778d8
	ctx.lr = 0x8215B0B8;
	sub_821778D8(ctx, base);
	// lwz r11,26120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26120);
loc_8215B0BC:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215b104
	if (ctx.cr6.eq) goto loc_8215B104;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215B0D0;
	sub_82177868(ctx, base);
	// lwz r11,26120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26120);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,26120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26120);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r4,28256(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28256, ctx.r4.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8215B104;
	sub_821778D8(ctx, base);
loc_8215B104:
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

PPC_WEAK_FUNC(sub_8215B010) {
	__imp__sub_8215B010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B118) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B118) {
	__imp__sub_8215B118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215B128;
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
	// lwz r4,26120(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26120);
	// bl 0x821778d8
	ctx.lr = 0x8215B148;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26120(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26120);
	// ble cr6,0x8215b16c
	if (!ctx.cr6.gt) goto loc_8215B16C;
loc_8215B154:
	// stw r30,26120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26120, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215b010
	ctx.lr = 0x8215B160;
	sub_8215B010(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x8215b154
	if (!ctx.cr0.eq) goto loc_8215B154;
loc_8215B16C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B120) {
	__imp__sub_8215B120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B174) {
	__imp__sub_8215B174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B178) {
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
	// ble cr6,0x8215b1b4
	if (!ctx.cr6.gt) goto loc_8215B1B4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215B19C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215b010
	ctx.lr = 0x8215B1A4;
	sub_8215B010(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215B1A8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26120, ctx.r3.u32);
	// bne 0x8215b19c
	if (!ctx.cr0.eq) goto loc_8215B19C;
loc_8215B1B4:
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

PPC_WEAK_FUNC(sub_8215B178) {
	__imp__sub_8215B178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B1CC) {
	__imp__sub_8215B1CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B1D0) {
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
	// lwz r4,25268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25268);
	// bl 0x821778d8
	ctx.lr = 0x8215B1F0;
	sub_821778D8(ctx, base);
	// lwz r11,25268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25268);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215B204;
	sub_82147188(ctx, base);
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

PPC_WEAK_FUNC(sub_8215B1D0) {
	__imp__sub_8215B1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B218) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B218) {
	__imp__sub_8215B218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215B228;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25268(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25268);
	// bl 0x821778d8
	ctx.lr = 0x8215B248;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25268(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25268);
	// ble cr6,0x8215b2d4
	if (!ctx.cr6.gt) goto loc_8215B2D4;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8215B260:
	// stw r30,25268(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25268, ctx.r30.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215B274;
	sub_821778D8(ctx, base);
	// lwz r4,25268(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25268);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215B288;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215b2c8
	if (ctx.cr6.eq) goto loc_8215B2C8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215b2c4
	if (!ctx.cr6.eq) goto loc_8215B2C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215B2A8;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8215B2C0;
	sub_821779A0(ctx, base);
	// b 0x8215b2c8
	goto loc_8215B2C8;
loc_8215B2C4:
	// bl 0x82177978
	ctx.lr = 0x8215B2C8;
	sub_82177978(ctx, base);
loc_8215B2C8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x8215b260
	if (!ctx.cr0.eq) goto loc_8215B260;
loc_8215B2D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B220) {
	__imp__sub_8215B220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B2DC) {
	__imp__sub_8215B2DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215B2E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215b37c
	if (!ctx.cr6.gt) goto loc_8215B37C;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,25268(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25268);
loc_8215B308:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215B314;
	sub_821778D8(ctx, base);
	// lwz r4,25268(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25268);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215B328;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215b368
	if (ctx.cr6.eq) goto loc_8215B368;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215b364
	if (!ctx.cr6.eq) goto loc_8215B364;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215B348;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8215B360;
	sub_821779A0(ctx, base);
	// b 0x8215b368
	goto loc_8215B368;
loc_8215B364:
	// bl 0x82177978
	ctx.lr = 0x8215B368;
	sub_82177978(ctx, base);
loc_8215B368:
	// bl 0x82177858
	ctx.lr = 0x8215B36C;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25268, ctx.r3.u32);
	// bne 0x8215b308
	if (!ctx.cr0.eq) goto loc_8215B308;
loc_8215B37C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B2E0) {
	__imp__sub_8215B2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B384) {
	__imp__sub_8215B384(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B388) {
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
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r4,28420(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28420);
	// bl 0x821778d8
	ctx.lr = 0x8215B3A8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8215B3B0;
	sub_82177758(ctx, base);
	// lwz r11,28420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28420);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215B3C4;
	sub_82147188(ctx, base);
	// lwz r11,28420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28420);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215b408
	if (ctx.cr6.eq) goto loc_8215B408;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215B3DC;
	sub_82177868(ctx, base);
	// lwz r11,28420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28420);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28420);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,26520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26520, ctx.r4.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821778d8
	ctx.lr = 0x8215B404;
	sub_821778D8(ctx, base);
	// lwz r11,28420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28420);
loc_8215B408:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26120, ctx.r11.u32);
	// bl 0x8215b010
	ctx.lr = 0x8215B41C;
	sub_8215B010(ctx, base);
	// lwz r11,28420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28420);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215b45c
	if (ctx.cr6.eq) goto loc_8215B45C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215B434;
	sub_82177868(ctx, base);
	// lwz r11,28420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28420);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,28420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28420);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,25268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25268, ctx.r10.u32);
	// lbz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// bl 0x8215b220
	ctx.lr = 0x8215B45C;
	sub_8215B220(ctx, base);
loc_8215B45C:
	// bl 0x821777e0
	ctx.lr = 0x8215B460;
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

PPC_WEAK_FUNC(sub_8215B388) {
	__imp__sub_8215B388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B474) {
	__imp__sub_8215B474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B478) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B478) {
	__imp__sub_8215B478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215B488;
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
	// lwz r4,28420(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28420);
	// bl 0x821778d8
	ctx.lr = 0x8215B4A0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28420(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28420);
	// ble cr6,0x8215b4c4
	if (!ctx.cr6.gt) goto loc_8215B4C4;
loc_8215B4AC:
	// stw r30,28420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28420, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215b388
	ctx.lr = 0x8215B4B8;
	sub_8215B388(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// bne 0x8215b4ac
	if (!ctx.cr0.eq) goto loc_8215B4AC;
loc_8215B4C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B480) {
	__imp__sub_8215B480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B4CC) {
	__imp__sub_8215B4CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B4D0) {
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
	// ble cr6,0x8215b50c
	if (!ctx.cr6.gt) goto loc_8215B50C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215B4F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215b388
	ctx.lr = 0x8215B4FC;
	sub_8215B388(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215B500;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28420, ctx.r3.u32);
	// bne 0x8215b4f4
	if (!ctx.cr0.eq) goto loc_8215B4F4;
loc_8215B50C:
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

PPC_WEAK_FUNC(sub_8215B4D0) {
	__imp__sub_8215B4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B524) {
	__imp__sub_8215B524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B528) {
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
	// lwz r4,28324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28324);
	// bl 0x821778d8
	ctx.lr = 0x8215B54C;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8215B554;
	sub_82177758(ctx, base);
	// lwz r3,28324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28324);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215b5d8
	if (ctx.cr6.eq) goto loc_8215B5D8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8215b57c
	if (ctx.cr6.eq) goto loc_8215B57C;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8215b57c
	if (ctx.cr6.eq) goto loc_8215B57C;
	// bl 0x82177950
	ctx.lr = 0x8215B578;
	sub_82177950(ctx, base);
	// b 0x8215b5d8
	goto loc_8215B5D8;
loc_8215B57C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215B584;
	sub_82177868(ctx, base);
	// lwz r11,28324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28324);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,28324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28324);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28420, ctx.r11.u32);
	// bne cr6,0x8215b5b0
	if (!ctx.cr6.eq) goto loc_8215B5B0;
	// bl 0x82177898
	ctx.lr = 0x8215B5A8;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8215b5b4
	goto loc_8215B5B4;
loc_8215B5B0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8215B5B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215b388
	ctx.lr = 0x8215B5BC;
	sub_8215B388(ctx, base);
	// lwz r3,28324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28324);
	// bl 0x82175970
	ctx.lr = 0x8215B5C4;
	sub_82175970(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215b5d8
	if (ctx.cr6.eq) goto loc_8215B5D8;
	// lwz r11,28324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28324);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8215B5D8:
	// bl 0x821777e0
	ctx.lr = 0x8215B5DC;
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

PPC_WEAK_FUNC(sub_8215B528) {
	__imp__sub_8215B528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B5F4) {
	__imp__sub_8215B5F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B5F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B5F8) {
	__imp__sub_8215B5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215B608;
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
	// lwz r4,28324(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28324);
	// bl 0x821778d8
	ctx.lr = 0x8215B620;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28324(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28324);
	// ble cr6,0x8215b644
	if (!ctx.cr6.gt) goto loc_8215B644;
loc_8215B62C:
	// stw r30,28324(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28324, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215b528
	ctx.lr = 0x8215B638;
	sub_8215B528(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8215b62c
	if (!ctx.cr0.eq) goto loc_8215B62C;
loc_8215B644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B600) {
	__imp__sub_8215B600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B64C) {
	__imp__sub_8215B64C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B650) {
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
	// ble cr6,0x8215b68c
	if (!ctx.cr6.gt) goto loc_8215B68C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215B674:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215b528
	ctx.lr = 0x8215B67C;
	sub_8215B528(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215B680;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28324, ctx.r3.u32);
	// bne 0x8215b674
	if (!ctx.cr0.eq) goto loc_8215B674;
loc_8215B68C:
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

PPC_WEAK_FUNC(sub_8215B650) {
	__imp__sub_8215B650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B6A4) {
	__imp__sub_8215B6A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B6A8) {
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
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r4,26820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26820);
	// bl 0x821778d8
	ctx.lr = 0x8215B6C8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8215B6D0;
	sub_82177758(ctx, base);
	// lwz r11,26820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26820);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215B6E4;
	sub_82147188(ctx, base);
	// lwz r11,26820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26820);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215b728
	if (ctx.cr6.eq) goto loc_8215B728;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215B6FC;
	sub_82177868(ctx, base);
	// lwz r11,26820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26820);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26820);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,26520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26520, ctx.r4.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821778d8
	ctx.lr = 0x8215B724;
	sub_821778D8(ctx, base);
	// lwz r11,26820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26820);
loc_8215B728:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26120, ctx.r11.u32);
	// bl 0x8215b010
	ctx.lr = 0x8215B73C;
	sub_8215B010(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8215B740;
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

PPC_WEAK_FUNC(sub_8215B6A8) {
	__imp__sub_8215B6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B754) {
	__imp__sub_8215B754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B758) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B758) {
	__imp__sub_8215B758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215B768;
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
	// lwz r4,26820(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26820);
	// bl 0x821778d8
	ctx.lr = 0x8215B788;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26820(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26820);
	// ble cr6,0x8215b7ac
	if (!ctx.cr6.gt) goto loc_8215B7AC;
loc_8215B794:
	// stw r30,26820(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26820, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215b6a8
	ctx.lr = 0x8215B7A0;
	sub_8215B6A8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x8215b794
	if (!ctx.cr0.eq) goto loc_8215B794;
loc_8215B7AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B760) {
	__imp__sub_8215B760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B7B4) {
	__imp__sub_8215B7B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B7B8) {
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
	// ble cr6,0x8215b7f4
	if (!ctx.cr6.gt) goto loc_8215B7F4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215B7DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215b6a8
	ctx.lr = 0x8215B7E4;
	sub_8215B6A8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215B7E8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26820, ctx.r3.u32);
	// bne 0x8215b7dc
	if (!ctx.cr0.eq) goto loc_8215B7DC;
loc_8215B7F4:
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

PPC_WEAK_FUNC(sub_8215B7B8) {
	__imp__sub_8215B7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B80C) {
	__imp__sub_8215B80C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B810) {
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
	// lwz r4,28056(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28056);
	// bl 0x821778d8
	ctx.lr = 0x8215B834;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8215B83C;
	sub_82177758(ctx, base);
	// lwz r3,28056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28056);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215b8c0
	if (ctx.cr6.eq) goto loc_8215B8C0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8215b864
	if (ctx.cr6.eq) goto loc_8215B864;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8215b864
	if (ctx.cr6.eq) goto loc_8215B864;
	// bl 0x82177950
	ctx.lr = 0x8215B860;
	sub_82177950(ctx, base);
	// b 0x8215b8c0
	goto loc_8215B8C0;
loc_8215B864:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215B86C;
	sub_82177868(ctx, base);
	// lwz r11,28056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28056);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,28056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28056);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26820(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26820, ctx.r11.u32);
	// bne cr6,0x8215b898
	if (!ctx.cr6.eq) goto loc_8215B898;
	// bl 0x82177898
	ctx.lr = 0x8215B890;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8215b89c
	goto loc_8215B89C;
loc_8215B898:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8215B89C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215b6a8
	ctx.lr = 0x8215B8A4;
	sub_8215B6A8(ctx, base);
	// lwz r3,28056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28056);
	// bl 0x821763d0
	ctx.lr = 0x8215B8AC;
	sub_821763D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215b8c0
	if (ctx.cr6.eq) goto loc_8215B8C0;
	// lwz r11,28056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28056);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8215B8C0:
	// bl 0x821777e0
	ctx.lr = 0x8215B8C4;
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

PPC_WEAK_FUNC(sub_8215B810) {
	__imp__sub_8215B810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B8DC) {
	__imp__sub_8215B8DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B8E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B8E0) {
	__imp__sub_8215B8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215B8F0;
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
	// lwz r4,28056(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28056);
	// bl 0x821778d8
	ctx.lr = 0x8215B908;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28056(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28056);
	// ble cr6,0x8215b92c
	if (!ctx.cr6.gt) goto loc_8215B92C;
loc_8215B914:
	// stw r30,28056(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28056, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215b810
	ctx.lr = 0x8215B920;
	sub_8215B810(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8215b914
	if (!ctx.cr0.eq) goto loc_8215B914;
loc_8215B92C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215B8E8) {
	__imp__sub_8215B8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B934) {
	__imp__sub_8215B934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B938) {
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
	// ble cr6,0x8215b974
	if (!ctx.cr6.gt) goto loc_8215B974;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215B95C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215b810
	ctx.lr = 0x8215B964;
	sub_8215B810(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215B968;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28056(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28056, ctx.r3.u32);
	// bne 0x8215b95c
	if (!ctx.cr0.eq) goto loc_8215B95C;
loc_8215B974:
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

PPC_WEAK_FUNC(sub_8215B938) {
	__imp__sub_8215B938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215B98C) {
	__imp__sub_8215B98C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B990) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215B990) {
	__imp__sub_8215B990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B998) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215B998) {
	__imp__sub_8215B998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B9A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215B9A0) {
	__imp__sub_8215B9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B9A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215B9A8) {
	__imp__sub_8215B9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B9B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215B9B0) {
	__imp__sub_8215B9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B9B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215B9B8) {
	__imp__sub_8215B9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B9C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215B9C0) {
	__imp__sub_8215B9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B9C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215B9C8) {
	__imp__sub_8215B9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B9D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215B9D0) {
	__imp__sub_8215B9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B9D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215B9D8) {
	__imp__sub_8215B9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B9E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215B9E0) {
	__imp__sub_8215B9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215B9E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215B9E8) {
	__imp__sub_8215B9E8(ctx, base);
}

