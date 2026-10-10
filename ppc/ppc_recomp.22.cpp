#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8214F3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,52
	ctx.r5.s64 = ctx.r4.s64 * 52;
	// lwz r4,27084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27084);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F3D8) {
	__imp__sub_8214F3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F3E8) {
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
	// ble cr6,0x8214f430
	if (!ctx.cr6.gt) goto loc_8214F430;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27084(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27084);
loc_8214F410:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214F41C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214F420;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27084(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27084, ctx.r3.u32);
	// bne 0x8214f410
	if (!ctx.cr0.eq) goto loc_8214F410;
loc_8214F430:
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

PPC_WEAK_FUNC(sub_8214F3E8) {
	__imp__sub_8214F3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r4,26828(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26828);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F448) {
	__imp__sub_8214F448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F458) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F458) {
	__imp__sub_8214F458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,52
	ctx.r5.s64 = ctx.r4.s64 * 52;
	// lwz r4,26828(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26828);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F460) {
	__imp__sub_8214F460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F470) {
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
	// ble cr6,0x8214f4b8
	if (!ctx.cr6.gt) goto loc_8214F4B8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26828(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26828);
loc_8214F498:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214F4A4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214F4A8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26828, ctx.r3.u32);
	// bne 0x8214f498
	if (!ctx.cr0.eq) goto loc_8214F498;
loc_8214F4B8:
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

PPC_WEAK_FUNC(sub_8214F470) {
	__imp__sub_8214F470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,25320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25320);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F4D0) {
	__imp__sub_8214F4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F4E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F4E0) {
	__imp__sub_8214F4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,25320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25320);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F4E8) {
	__imp__sub_8214F4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F4F8) {
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
	// ble cr6,0x8214f540
	if (!ctx.cr6.gt) goto loc_8214F540;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25320(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25320);
loc_8214F520:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214F52C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214F530;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25320, ctx.r3.u32);
	// bne 0x8214f520
	if (!ctx.cr0.eq) goto loc_8214F520;
loc_8214F540:
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

PPC_WEAK_FUNC(sub_8214F4F8) {
	__imp__sub_8214F4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F558) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,26648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26648);
	// lbz r11,57(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x8214f588
	if (ctx.cr6.eq) goto loc_8214F588;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214F588:
	// bl 0x82177758
	ctx.lr = 0x8214F58C;
	sub_82177758(ctx, base);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r11,25904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25904);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214f5d0
	if (ctx.cr6.eq) goto loc_8214F5D0;
	// li r3,4095
	ctx.r3.s64 = 4095;
	// bl 0x82177868
	ctx.lr = 0x8214F5A8;
	sub_82177868(ctx, base);
	// lwz r11,25904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25904);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25904);
	// lwz r10,26648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26648);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25508(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25508, ctx.r4.u32);
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x821778d8
	ctx.lr = 0x8214F5D0;
	sub_821778D8(ctx, base);
loc_8214F5D0:
	// bl 0x821777e0
	ctx.lr = 0x8214F5D4;
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

PPC_WEAK_FUNC(sub_8214F558) {
	__imp__sub_8214F558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214F5EC) {
	__imp__sub_8214F5EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F5F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F5F0) {
	__imp__sub_8214F5F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214F600;
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
	// lwz r4,25904(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25904);
	// bl 0x821778d8
	ctx.lr = 0x8214F618;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25904(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25904);
	// ble cr6,0x8214f63c
	if (!ctx.cr6.gt) goto loc_8214F63C;
loc_8214F624:
	// stw r30,25904(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25904, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214f558
	ctx.lr = 0x8214F630;
	sub_8214F558(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8214f624
	if (!ctx.cr0.eq) goto loc_8214F624;
loc_8214F63C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F5F8) {
	__imp__sub_8214F5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214F644) {
	__imp__sub_8214F644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F648) {
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
	// ble cr6,0x8214f684
	if (!ctx.cr6.gt) goto loc_8214F684;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214F66C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214f558
	ctx.lr = 0x8214F674;
	sub_8214F558(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214F678;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25904(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25904, ctx.r3.u32);
	// bne 0x8214f66c
	if (!ctx.cr0.eq) goto loc_8214F66C;
loc_8214F684:
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

PPC_WEAK_FUNC(sub_8214F648) {
	__imp__sub_8214F648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214F69C) {
	__imp__sub_8214F69C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,27076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27076);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F6A0) {
	__imp__sub_8214F6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F6B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F6B0) {
	__imp__sub_8214F6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,27076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27076);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F6B8) {
	__imp__sub_8214F6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F6C8) {
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
	// ble cr6,0x8214f710
	if (!ctx.cr6.gt) goto loc_8214F710;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27076(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27076);
loc_8214F6F0:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214F6FC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214F700;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27076, ctx.r3.u32);
	// bne 0x8214f6f0
	if (!ctx.cr0.eq) goto loc_8214F6F0;
loc_8214F710:
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

PPC_WEAK_FUNC(sub_8214F6C8) {
	__imp__sub_8214F6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F728) {
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
	// li r5,112
	ctx.r5.s64 = 112;
	// lwz r4,26648(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
	// bl 0x821778d8
	ctx.lr = 0x8214F748;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214F750;
	sub_82177758(ctx, base);
	// lwz r11,26648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214F768;
	sub_82147188(ctx, base);
	// lwz r11,26648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25904(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25904, ctx.r11.u32);
	// bl 0x8214f558
	ctx.lr = 0x8214F780;
	sub_8214F558(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8214F784;
	sub_821777E0(ctx, base);
	// lwz r3,26648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
	// bl 0x82171d78
	ctx.lr = 0x8214F78C;
	sub_82171D78(ctx, base);
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

PPC_WEAK_FUNC(sub_8214F728) {
	__imp__sub_8214F728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F7A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F7A0) {
	__imp__sub_8214F7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8214F7B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mulli r5,r4,112
	ctx.r5.s64 = ctx.r4.s64 * 112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,26648(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
	// bl 0x821778d8
	ctx.lr = 0x8214F7C8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r30,26648(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
	// ble cr6,0x8214f884
	if (!ctx.cr6.gt) goto loc_8214F884;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8214F7E4:
	// stw r30,26648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26648, ctx.r30.u32);
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214F7F8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214F800;
	sub_82177758(ctx, base);
	// lwz r11,26648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,108
	ctx.r4.s64 = ctx.r11.s64 + 108;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214F818;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214f858
	if (ctx.cr6.eq) goto loc_8214F858;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214f854
	if (!ctx.cr6.eq) goto loc_8214F854;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214F838;
	sub_82177868(ctx, base);
	// lwz r11,28244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8214F850;
	sub_821779A0(ctx, base);
	// b 0x8214f858
	goto loc_8214F858;
loc_8214F854:
	// bl 0x82177978
	ctx.lr = 0x8214F858;
	sub_82177978(ctx, base);
loc_8214F858:
	// lwz r11,26648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// stw r11,25904(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25904, ctx.r11.u32);
	// bl 0x8214f558
	ctx.lr = 0x8214F86C;
	sub_8214F558(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8214F870;
	sub_821777E0(ctx, base);
	// lwz r3,26648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
	// bl 0x82171d78
	ctx.lr = 0x8214F878;
	sub_82171D78(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// bne 0x8214f7e4
	if (!ctx.cr0.eq) goto loc_8214F7E4;
loc_8214F884:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F7A8) {
	__imp__sub_8214F7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214F88C) {
	__imp__sub_8214F88C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8214F898;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214f95c
	if (!ctx.cr6.gt) goto loc_8214F95C;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,26648(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
loc_8214F8BC:
	// li r5,112
	ctx.r5.s64 = 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214F8C8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8214F8D0;
	sub_82177758(ctx, base);
	// lwz r11,26648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,108
	ctx.r4.s64 = ctx.r11.s64 + 108;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214F8E8;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214f928
	if (ctx.cr6.eq) goto loc_8214F928;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214f924
	if (!ctx.cr6.eq) goto loc_8214F924;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214F908;
	sub_82177868(ctx, base);
	// lwz r11,28244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8214F920;
	sub_821779A0(ctx, base);
	// b 0x8214f928
	goto loc_8214F928;
loc_8214F924:
	// bl 0x82177978
	ctx.lr = 0x8214F928;
	sub_82177978(ctx, base);
loc_8214F928:
	// lwz r11,26648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// stw r11,25904(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25904, ctx.r11.u32);
	// bl 0x8214f558
	ctx.lr = 0x8214F93C;
	sub_8214F558(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8214F940;
	sub_821777E0(ctx, base);
	// lwz r3,26648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26648);
	// bl 0x82171d78
	ctx.lr = 0x8214F948;
	sub_82171D78(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214F94C;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26648, ctx.r3.u32);
	// bne 0x8214f8bc
	if (!ctx.cr0.eq) goto loc_8214F8BC;
loc_8214F95C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F890) {
	__imp__sub_8214F890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214F964) {
	__imp__sub_8214F964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F968) {
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
	// lwz r4,28624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28624);
	// bl 0x821778d8
	ctx.lr = 0x8214F98C;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8214F994;
	sub_82177758(ctx, base);
	// lwz r3,28624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28624);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214fa18
	if (ctx.cr6.eq) goto loc_8214FA18;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8214f9bc
	if (ctx.cr6.eq) goto loc_8214F9BC;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8214f9bc
	if (ctx.cr6.eq) goto loc_8214F9BC;
	// bl 0x82177950
	ctx.lr = 0x8214F9B8;
	sub_82177950(ctx, base);
	// b 0x8214fa18
	goto loc_8214FA18;
loc_8214F9BC:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214F9C4;
	sub_82177868(ctx, base);
	// lwz r11,28624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28624);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,28624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28624);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26648, ctx.r11.u32);
	// bne cr6,0x8214f9f0
	if (!ctx.cr6.eq) goto loc_8214F9F0;
	// bl 0x82177898
	ctx.lr = 0x8214F9E8;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8214f9f4
	goto loc_8214F9F4;
loc_8214F9F0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8214F9F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214f728
	ctx.lr = 0x8214F9FC;
	sub_8214F728(ctx, base);
	// lwz r3,28624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28624);
	// bl 0x82175490
	ctx.lr = 0x8214FA04;
	sub_82175490(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214fa18
	if (ctx.cr6.eq) goto loc_8214FA18;
	// lwz r11,28624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28624);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8214FA18:
	// bl 0x821777e0
	ctx.lr = 0x8214FA1C;
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

PPC_WEAK_FUNC(sub_8214F968) {
	__imp__sub_8214F968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214FA34) {
	__imp__sub_8214FA34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FA38) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214FA38) {
	__imp__sub_8214FA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214FA48;
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
	// lwz r4,28624(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28624);
	// bl 0x821778d8
	ctx.lr = 0x8214FA60;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28624(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28624);
	// ble cr6,0x8214fa84
	if (!ctx.cr6.gt) goto loc_8214FA84;
loc_8214FA6C:
	// stw r30,28624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28624, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214f968
	ctx.lr = 0x8214FA78;
	sub_8214F968(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8214fa6c
	if (!ctx.cr0.eq) goto loc_8214FA6C;
loc_8214FA84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214FA40) {
	__imp__sub_8214FA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214FA8C) {
	__imp__sub_8214FA8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FA90) {
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
	// ble cr6,0x8214facc
	if (!ctx.cr6.gt) goto loc_8214FACC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214FAB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214f968
	ctx.lr = 0x8214FABC;
	sub_8214F968(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214FAC0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28624, ctx.r3.u32);
	// bne 0x8214fab4
	if (!ctx.cr0.eq) goto loc_8214FAB4;
loc_8214FACC:
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

PPC_WEAK_FUNC(sub_8214FA90) {
	__imp__sub_8214FA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214FAE4) {
	__imp__sub_8214FAE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FAE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FAE8) {
	__imp__sub_8214FAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FAF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FAF0) {
	__imp__sub_8214FAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FAF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FAF8) {
	__imp__sub_8214FAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB00) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB00) {
	__imp__sub_8214FB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB08) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB08) {
	__imp__sub_8214FB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB10) {
	__imp__sub_8214FB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB18) {
	__imp__sub_8214FB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB20) {
	__imp__sub_8214FB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB28) {
	__imp__sub_8214FB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB30) {
	__imp__sub_8214FB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB38) {
	__imp__sub_8214FB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB40) {
	__imp__sub_8214FB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB48) {
	__imp__sub_8214FB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB50) {
	__imp__sub_8214FB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB58) {
	__imp__sub_8214FB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB60) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB60) {
	__imp__sub_8214FB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB68) {
	__imp__sub_8214FB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB70) {
	__imp__sub_8214FB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB78) {
	__imp__sub_8214FB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB80) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214FB80) {
	__imp__sub_8214FB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FB88) {
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
	// lwz r11,27756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27756);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214fbe0
	if (ctx.cr6.eq) goto loc_8214FBE0;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25740, ctx.r3.u32);
	// bl 0x82175518
	ctx.lr = 0x8214FBC0;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214fbe0
	if (!ctx.cr6.eq) goto loc_8214FBE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25740);
	// bl 0x82175518
	ctx.lr = 0x8214FBD4;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8214fbe4
	if (ctx.cr6.eq) goto loc_8214FBE4;
loc_8214FBE0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214FBE4:
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

PPC_WEAK_FUNC(sub_8214FB88) {
	__imp__sub_8214FB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8214FC00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27756(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27756);
	// ble cr6,0x8214fc6c
	if (!ctx.cr6.gt) goto loc_8214FC6C;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8214FC20:
	// stw r31,27756(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27756, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214fc5c
	if (ctx.cr6.eq) goto loc_8214FC5C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25740(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25740, ctx.r3.u32);
	// bl 0x82175518
	ctx.lr = 0x8214FC40;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214fc5c
	if (!ctx.cr6.eq) goto loc_8214FC5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25740(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25740);
	// bl 0x82175518
	ctx.lr = 0x8214FC54;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214fc78
	if (ctx.cr6.eq) goto loc_8214FC78;
loc_8214FC5C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8214fc20
	if (ctx.cr6.lt) goto loc_8214FC20;
loc_8214FC6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8214FC78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214FBF8) {
	__imp__sub_8214FBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214FC84) {
	__imp__sub_8214FC84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FC88) {
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
	// li r5,72
	ctx.r5.s64 = 72;
	// lwz r4,26968(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26968);
	// bl 0x821778d8
	ctx.lr = 0x8214FCAC;
	sub_821778D8(ctx, base);
	// lwz r11,26968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26968);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214fcfc
	if (ctx.cr6.eq) goto loc_8214FCFC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214FCC8;
	sub_82177868(ctx, base);
	// lwz r11,26968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26968);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26968);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,24988(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24988, ctx.r4.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8214FCF8;
	sub_821778D8(ctx, base);
	// lwz r11,26968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26968);
loc_8214FCFC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214fd44
	if (ctx.cr6.eq) goto loc_8214FD44;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214FD10;
	sub_82177868(ctx, base);
	// lwz r11,26968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26968);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,26968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26968);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,24988(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24988, ctx.r4.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8214FD40;
	sub_821778D8(ctx, base);
	// lwz r11,26968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26968);
loc_8214FD44:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214fd8c
	if (ctx.cr6.eq) goto loc_8214FD8C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214FD58;
	sub_82177868(ctx, base);
	// lwz r11,26968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26968);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,26968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26968);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,24988(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24988, ctx.r4.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x8214FD88;
	sub_821778D8(ctx, base);
	// lwz r11,26968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26968);
loc_8214FD8C:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x8214FDA0;
	sub_8214F968(ctx, base);
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

PPC_WEAK_FUNC(sub_8214FC88) {
	__imp__sub_8214FC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FDB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214FDB8) {
	__imp__sub_8214FDB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214FDC8;
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
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26968(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26968);
	// bl 0x821778d8
	ctx.lr = 0x8214FDE8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26968(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26968);
	// ble cr6,0x8214fe0c
	if (!ctx.cr6.gt) goto loc_8214FE0C;
loc_8214FDF4:
	// stw r30,26968(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26968, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214fc88
	ctx.lr = 0x8214FE00;
	sub_8214FC88(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// bne 0x8214fdf4
	if (!ctx.cr0.eq) goto loc_8214FDF4;
loc_8214FE0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214FDC0) {
	__imp__sub_8214FDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214FE14) {
	__imp__sub_8214FE14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FE18) {
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
	// ble cr6,0x8214fe54
	if (!ctx.cr6.gt) goto loc_8214FE54;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214FE3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214fc88
	ctx.lr = 0x8214FE44;
	sub_8214FC88(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214FE48;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26968(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26968, ctx.r3.u32);
	// bne 0x8214fe3c
	if (!ctx.cr0.eq) goto loc_8214FE3C;
loc_8214FE54:
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

PPC_WEAK_FUNC(sub_8214FE18) {
	__imp__sub_8214FE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214FE6C) {
	__imp__sub_8214FE6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FE70) {
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
	// lwz r11,27136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27136);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// stw r11,27756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27756, ctx.r11.u32);
	// bl 0x8214fb88
	ctx.lr = 0x8214FE94;
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

PPC_WEAK_FUNC(sub_8214FE70) {
	__imp__sub_8214FE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214FEAC) {
	__imp__sub_8214FEAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8214FEB8;
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
	// lwz r31,27136(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27136);
	// ble cr6,0x8214ff30
	if (!ctx.cr6.gt) goto loc_8214FF30;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
loc_8214FEDC:
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// stw r31,27136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27136, ctx.r31.u32);
	// stw r11,27756(r26)
	PPC_STORE_U32(ctx.r26.u32 + 27756, ctx.r11.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214ff20
	if (ctx.cr6.eq) goto loc_8214FF20;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25740(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25740, ctx.r3.u32);
	// bl 0x82175518
	ctx.lr = 0x8214FF04;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214ff20
	if (!ctx.cr6.eq) goto loc_8214FF20;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25740(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25740);
	// bl 0x82175518
	ctx.lr = 0x8214FF18;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214ff3c
	if (ctx.cr6.eq) goto loc_8214FF3C;
loc_8214FF20:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8214fedc
	if (ctx.cr6.lt) goto loc_8214FEDC;
loc_8214FF30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8214FF3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214FEB0) {
	__imp__sub_8214FEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,25196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214FF48) {
	__imp__sub_8214FF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FF58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214FF58) {
	__imp__sub_8214FF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,25196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25196);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214FF60) {
	__imp__sub_8214FF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FF70) {
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
	// ble cr6,0x8214ffb8
	if (!ctx.cr6.gt) goto loc_8214FFB8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25196);
loc_8214FF98:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214FFA4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214FFA8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25196, ctx.r3.u32);
	// bne 0x8214ff98
	if (!ctx.cr0.eq) goto loc_8214FF98;
loc_8214FFB8:
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

PPC_WEAK_FUNC(sub_8214FF70) {
	__imp__sub_8214FF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,27640(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27640);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214FFD0) {
	__imp__sub_8214FFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FFE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214FFE0) {
	__imp__sub_8214FFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,27640(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27640);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214FFE8) {
	__imp__sub_8214FFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214FFF8) {
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
	// ble cr6,0x82150040
	if (!ctx.cr6.gt) goto loc_82150040;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27640(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27640);
loc_82150020:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215002C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82150030;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27640, ctx.r3.u32);
	// bne 0x82150020
	if (!ctx.cr0.eq) goto loc_82150020;
loc_82150040:
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

PPC_WEAK_FUNC(sub_8214FFF8) {
	__imp__sub_8214FFF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,25400(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25400);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150058) {
	__imp__sub_82150058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150068) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150068) {
	__imp__sub_82150068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,25400(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25400);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150070) {
	__imp__sub_82150070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150080) {
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
	// ble cr6,0x821500c8
	if (!ctx.cr6.gt) goto loc_821500C8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25400(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25400);
loc_821500A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821500B4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821500B8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25400, ctx.r3.u32);
	// bne 0x821500a8
	if (!ctx.cr0.eq) goto loc_821500A8;
loc_821500C8:
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

PPC_WEAK_FUNC(sub_82150080) {
	__imp__sub_82150080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821500E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,26248(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26248);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821500E0) {
	__imp__sub_821500E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821500F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821500F0) {
	__imp__sub_821500F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821500F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,26248(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26248);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821500F8) {
	__imp__sub_821500F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150108) {
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
	// ble cr6,0x82150150
	if (!ctx.cr6.gt) goto loc_82150150;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26248);
loc_82150130:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215013C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82150140;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26248, ctx.r3.u32);
	// bne 0x82150130
	if (!ctx.cr0.eq) goto loc_82150130;
loc_82150150:
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

PPC_WEAK_FUNC(sub_82150108) {
	__imp__sub_82150108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150168) {
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
	// lwz r4,27328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27328);
	// bl 0x821778d8
	ctx.lr = 0x82150188;
	sub_821778D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177758
	ctx.lr = 0x82150190;
	sub_82177758(ctx, base);
	// lwz r11,27328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27328);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821501d0
	if (ctx.cr6.eq) goto loc_821501D0;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x82177868
	ctx.lr = 0x821501A8;
	sub_82177868(ctx, base);
	// lwz r11,27328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27328);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27328);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,26248(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26248, ctx.r4.u32);
	// lhz r5,10(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// bl 0x821778d8
	ctx.lr = 0x821501D0;
	sub_821778D8(ctx, base);
loc_821501D0:
	// bl 0x821777e0
	ctx.lr = 0x821501D4;
	sub_821777E0(ctx, base);
	// lwz r11,27328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27328);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150210
	if (ctx.cr6.eq) goto loc_82150210;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821501EC;
	sub_82177868(ctx, base);
	// lwz r11,27328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27328);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27328);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27640, ctx.r4.u32);
	// lhz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// bl 0x821778d8
	ctx.lr = 0x82150210;
	sub_821778D8(ctx, base);
loc_82150210:
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

PPC_WEAK_FUNC(sub_82150168) {
	__imp__sub_82150168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82150224) {
	__imp__sub_82150224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150228) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150228) {
	__imp__sub_82150228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82150238;
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
	// lwz r4,27328(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27328);
	// bl 0x821778d8
	ctx.lr = 0x82150258;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27328(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27328);
	// ble cr6,0x8215027c
	if (!ctx.cr6.gt) goto loc_8215027C;
loc_82150264:
	// stw r30,27328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27328, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82150168
	ctx.lr = 0x82150270;
	sub_82150168(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82150264
	if (!ctx.cr0.eq) goto loc_82150264;
loc_8215027C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150230) {
	__imp__sub_82150230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82150284) {
	__imp__sub_82150284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150288) {
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
	// ble cr6,0x821502c4
	if (!ctx.cr6.gt) goto loc_821502C4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821502AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82150168
	ctx.lr = 0x821502B4;
	sub_82150168(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821502B8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27328, ctx.r3.u32);
	// bne 0x821502ac
	if (!ctx.cr0.eq) goto loc_821502AC;
loc_821502C4:
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

PPC_WEAK_FUNC(sub_82150288) {
	__imp__sub_82150288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821502DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821502DC) {
	__imp__sub_821502DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821502E0) {
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
	// lwz r4,27528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27528);
	// bl 0x821778d8
	ctx.lr = 0x82150300;
	sub_821778D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177758
	ctx.lr = 0x82150308;
	sub_82177758(ctx, base);
	// lwz r11,27528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27528);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150348
	if (ctx.cr6.eq) goto loc_82150348;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x82177868
	ctx.lr = 0x82150320;
	sub_82177868(ctx, base);
	// lwz r11,27528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27528);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27528);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,26248(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26248, ctx.r4.u32);
	// lhz r5,10(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// bl 0x821778d8
	ctx.lr = 0x82150348;
	sub_821778D8(ctx, base);
loc_82150348:
	// bl 0x821777e0
	ctx.lr = 0x8215034C;
	sub_821777E0(ctx, base);
	// lwz r11,27528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27528);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150388
	if (ctx.cr6.eq) goto loc_82150388;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82150364;
	sub_82177868(ctx, base);
	// lwz r11,27528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27528);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27528);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27640, ctx.r4.u32);
	// lhz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// bl 0x821778d8
	ctx.lr = 0x82150388;
	sub_821778D8(ctx, base);
loc_82150388:
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

PPC_WEAK_FUNC(sub_821502E0) {
	__imp__sub_821502E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215039C) {
	__imp__sub_8215039C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821503A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821503A0) {
	__imp__sub_821503A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821503A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821503B0;
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
	// lwz r4,27528(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27528);
	// bl 0x821778d8
	ctx.lr = 0x821503D0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27528(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27528);
	// ble cr6,0x821503f4
	if (!ctx.cr6.gt) goto loc_821503F4;
loc_821503DC:
	// stw r30,27528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27528, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821502e0
	ctx.lr = 0x821503E8;
	sub_821502E0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x821503dc
	if (!ctx.cr0.eq) goto loc_821503DC;
loc_821503F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821503A8) {
	__imp__sub_821503A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821503FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821503FC) {
	__imp__sub_821503FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150400) {
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
	// ble cr6,0x8215043c
	if (!ctx.cr6.gt) goto loc_8215043C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82150424:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821502e0
	ctx.lr = 0x8215042C;
	sub_821502E0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82150430;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27528, ctx.r3.u32);
	// bne 0x82150424
	if (!ctx.cr0.eq) goto loc_82150424;
loc_8215043C:
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

PPC_WEAK_FUNC(sub_82150400) {
	__imp__sub_82150400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82150454) {
	__imp__sub_82150454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150458) {
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
	// lwz r4,27612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27612);
	// bl 0x821778d8
	ctx.lr = 0x82150478;
	sub_821778D8(ctx, base);
	// lwz r11,27612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27612);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27328, ctx.r11.u32);
	// bl 0x82150168
	ctx.lr = 0x8215048C;
	sub_82150168(ctx, base);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lwz r3,27612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27612);
	// lwz r4,28236(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28236);
	// bl 0x8238bb90
	ctx.lr = 0x8215049C;
	sub_8238BB90(ctx, base);
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

PPC_WEAK_FUNC(sub_82150458) {
	__imp__sub_82150458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821504B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821504B0) {
	__imp__sub_821504B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821504B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821504C0;
	__savegprlr_27(ctx, base);
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
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27612(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27612);
	// bl 0x821778d8
	ctx.lr = 0x821504E0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,27612(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27612);
	// ble cr6,0x82150530
	if (!ctx.cr6.gt) goto loc_82150530;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_821504F4:
	// stw r31,27612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27612, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82150508;
	sub_821778D8(ctx, base);
	// lwz r11,27612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27612);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27328(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27328, ctx.r11.u32);
	// bl 0x82150168
	ctx.lr = 0x82150518;
	sub_82150168(ctx, base);
	// lwz r4,28236(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28236);
	// lwz r3,27612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27612);
	// bl 0x8238bb90
	ctx.lr = 0x82150524;
	sub_8238BB90(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x821504f4
	if (!ctx.cr0.eq) goto loc_821504F4;
loc_82150530:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821504B8) {
	__imp__sub_821504B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82150540;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215059c
	if (!ctx.cr6.gt) goto loc_8215059C;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27612);
loc_82150560:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215056C;
	sub_821778D8(ctx, base);
	// lwz r11,27612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27612);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27328, ctx.r11.u32);
	// bl 0x82150168
	ctx.lr = 0x8215057C;
	sub_82150168(ctx, base);
	// lwz r4,28236(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28236);
	// lwz r3,27612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27612);
	// bl 0x8238bb90
	ctx.lr = 0x82150588;
	sub_8238BB90(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215058C;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27612, ctx.r3.u32);
	// bne 0x82150560
	if (!ctx.cr0.eq) goto loc_82150560;
loc_8215059C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150538) {
	__imp__sub_82150538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821505A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821505A4) {
	__imp__sub_821505A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821505A8) {
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
	// lwz r4,25076(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25076);
	// bl 0x821778d8
	ctx.lr = 0x821505C8;
	sub_821778D8(ctx, base);
	// lwz r11,25076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25076);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27528, ctx.r11.u32);
	// bl 0x821502e0
	ctx.lr = 0x821505DC;
	sub_821502E0(ctx, base);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lwz r3,25076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25076);
	// lwz r4,27096(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27096);
	// bl 0x8238bba0
	ctx.lr = 0x821505EC;
	sub_8238BBA0(ctx, base);
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

PPC_WEAK_FUNC(sub_821505A8) {
	__imp__sub_821505A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150600) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150600) {
	__imp__sub_82150600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82150610;
	__savegprlr_27(ctx, base);
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
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25076(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25076);
	// bl 0x821778d8
	ctx.lr = 0x82150630;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,25076(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25076);
	// ble cr6,0x82150680
	if (!ctx.cr6.gt) goto loc_82150680;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82150644:
	// stw r31,25076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25076, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82150658;
	sub_821778D8(ctx, base);
	// lwz r11,25076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25076);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27528(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27528, ctx.r11.u32);
	// bl 0x821502e0
	ctx.lr = 0x82150668;
	sub_821502E0(ctx, base);
	// lwz r4,27096(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27096);
	// lwz r3,25076(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25076);
	// bl 0x8238bba0
	ctx.lr = 0x82150674;
	sub_8238BBA0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x82150644
	if (!ctx.cr0.eq) goto loc_82150644;
loc_82150680:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150608) {
	__imp__sub_82150608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82150690;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821506ec
	if (!ctx.cr6.gt) goto loc_821506EC;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25076(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25076);
loc_821506B0:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821506BC;
	sub_821778D8(ctx, base);
	// lwz r11,25076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25076);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27528, ctx.r11.u32);
	// bl 0x821502e0
	ctx.lr = 0x821506CC;
	sub_821502E0(ctx, base);
	// lwz r4,27096(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27096);
	// lwz r3,25076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25076);
	// bl 0x8238bba0
	ctx.lr = 0x821506D8;
	sub_8238BBA0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821506DC;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25076, ctx.r3.u32);
	// bne 0x821506b0
	if (!ctx.cr0.eq) goto loc_821506B0;
loc_821506EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150688) {
	__imp__sub_82150688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821506F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821506F4) {
	__imp__sub_821506F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821506F8) {
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
	// lwz r4,28236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// bl 0x821778d8
	ctx.lr = 0x8215071C;
	sub_821778D8(ctx, base);
	// lwz r11,28236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82150730;
	sub_82147188(ctx, base);
	// lwz r11,28236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27612, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215074C;
	sub_821778D8(ctx, base);
	// lwz r11,27612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27612);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27328(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27328, ctx.r11.u32);
	// bl 0x82150168
	ctx.lr = 0x82150760;
	sub_82150168(ctx, base);
	// lwz r4,28236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// lwz r3,27612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27612);
	// bl 0x8238bb90
	ctx.lr = 0x8215076C;
	sub_8238BB90(ctx, base);
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

PPC_WEAK_FUNC(sub_821506F8) {
	__imp__sub_821506F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82150784) {
	__imp__sub_82150784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150788) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150788) {
	__imp__sub_82150788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82150798;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,28236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// bl 0x821778d8
	ctx.lr = 0x821507B0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r30,28236(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// ble cr6,0x82150874
	if (!ctx.cr6.gt) goto loc_82150874;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_821507CC:
	// stw r30,28236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28236, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821507E0;
	sub_821778D8(ctx, base);
	// lwz r4,28236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821507F4;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150834
	if (ctx.cr6.eq) goto loc_82150834;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82150830
	if (!ctx.cr6.eq) goto loc_82150830;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82150814;
	sub_82177868(ctx, base);
	// lwz r11,28244(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8215082C;
	sub_821779A0(ctx, base);
	// b 0x82150834
	goto loc_82150834;
loc_82150830:
	// bl 0x82177978
	ctx.lr = 0x82150834;
	sub_82177978(ctx, base);
loc_82150834:
	// lwz r11,28236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,27612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27612, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215084C;
	sub_821778D8(ctx, base);
	// lwz r11,27612(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27612);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27328(r26)
	PPC_STORE_U32(ctx.r26.u32 + 27328, ctx.r11.u32);
	// bl 0x82150168
	ctx.lr = 0x8215085C;
	sub_82150168(ctx, base);
	// lwz r4,28236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// lwz r3,27612(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27612);
	// bl 0x8238bb90
	ctx.lr = 0x82150868;
	sub_8238BB90(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x821507cc
	if (!ctx.cr0.eq) goto loc_821507CC;
loc_82150874:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150790) {
	__imp__sub_82150790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215087C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215087C) {
	__imp__sub_8215087C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82150888;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82150958
	if (!ctx.cr6.gt) goto loc_82150958;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,28236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_821508B0:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821508BC;
	sub_821778D8(ctx, base);
	// lwz r4,28236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821508D0;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150910
	if (ctx.cr6.eq) goto loc_82150910;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215090c
	if (!ctx.cr6.eq) goto loc_8215090C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821508F0;
	sub_82177868(ctx, base);
	// lwz r11,28244(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82150908;
	sub_821779A0(ctx, base);
	// b 0x82150910
	goto loc_82150910;
loc_8215090C:
	// bl 0x82177978
	ctx.lr = 0x82150910;
	sub_82177978(ctx, base);
loc_82150910:
	// lwz r11,28236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,27612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27612, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82150928;
	sub_821778D8(ctx, base);
	// lwz r11,27612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27612);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27328(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27328, ctx.r11.u32);
	// bl 0x82150168
	ctx.lr = 0x82150938;
	sub_82150168(ctx, base);
	// lwz r4,28236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28236);
	// lwz r3,27612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27612);
	// bl 0x8238bb90
	ctx.lr = 0x82150944;
	sub_8238BB90(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82150948;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28236, ctx.r3.u32);
	// bne 0x821508b0
	if (!ctx.cr0.eq) goto loc_821508B0;
loc_82150958:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150880) {
	__imp__sub_82150880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150960) {
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
	// lwz r4,27536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27536);
	// bl 0x821778d8
	ctx.lr = 0x82150980;
	sub_821778D8(ctx, base);
	// lwz r3,27536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27536);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821509e8
	if (ctx.cr6.eq) goto loc_821509E8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821509e4
	if (!ctx.cr6.eq) goto loc_821509E4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821509A0;
	sub_82177868(ctx, base);
	// lwz r11,27536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27536);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27536);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28236, ctx.r11.u32);
	// bl 0x821506f8
	ctx.lr = 0x821509C0;
	sub_821506F8(ctx, base);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lwz r3,27536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27536);
	// lwz r4,25612(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25612);
	// bl 0x8238bbc8
	ctx.lr = 0x821509D0;
	sub_8238BBC8(ctx, base);
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
loc_821509E4:
	// bl 0x82177978
	ctx.lr = 0x821509E8;
	sub_82177978(ctx, base);
loc_821509E8:
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

PPC_WEAK_FUNC(sub_82150960) {
	__imp__sub_82150960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821509FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821509FC) {
	__imp__sub_821509FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150A00) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150A00) {
	__imp__sub_82150A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82150A10;
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
	// lwz r4,27536(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27536);
	// bl 0x821778d8
	ctx.lr = 0x82150A28;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27536(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27536);
	// ble cr6,0x82150a4c
	if (!ctx.cr6.gt) goto loc_82150A4C;
loc_82150A34:
	// stw r30,27536(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27536, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82150960
	ctx.lr = 0x82150A40;
	sub_82150960(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82150a34
	if (!ctx.cr0.eq) goto loc_82150A34;
loc_82150A4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150A08) {
	__imp__sub_82150A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82150A54) {
	__imp__sub_82150A54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150A58) {
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
	// ble cr6,0x82150a94
	if (!ctx.cr6.gt) goto loc_82150A94;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82150A7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82150960
	ctx.lr = 0x82150A84;
	sub_82150960(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82150A88;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27536, ctx.r3.u32);
	// bne 0x82150a7c
	if (!ctx.cr0.eq) goto loc_82150A7C;
loc_82150A94:
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

PPC_WEAK_FUNC(sub_82150A58) {
	__imp__sub_82150A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82150AAC) {
	__imp__sub_82150AAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150AB0) {
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
	// lwz r4,27096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27096);
	// bl 0x821778d8
	ctx.lr = 0x82150AD4;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82150ADC;
	sub_82177758(ctx, base);
	// lwz r11,27096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27096);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82150AF0;
	sub_82147188(ctx, base);
	// lwz r11,27096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27096);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25076, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82150B0C;
	sub_821778D8(ctx, base);
	// lwz r11,25076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25076);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27528(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27528, ctx.r11.u32);
	// bl 0x821502e0
	ctx.lr = 0x82150B20;
	sub_821502E0(ctx, base);
	// lwz r4,27096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27096);
	// lwz r3,25076(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25076);
	// bl 0x8238bba0
	ctx.lr = 0x82150B2C;
	sub_8238BBA0(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x82150B30;
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

PPC_WEAK_FUNC(sub_82150AB0) {
	__imp__sub_82150AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150B48) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150B48) {
	__imp__sub_82150B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82150B58;
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
	// lwz r4,27096(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27096);
	// bl 0x821778d8
	ctx.lr = 0x82150B70;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27096(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27096);
	// ble cr6,0x82150b94
	if (!ctx.cr6.gt) goto loc_82150B94;
loc_82150B7C:
	// stw r30,27096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27096, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82150ab0
	ctx.lr = 0x82150B88;
	sub_82150AB0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82150b7c
	if (!ctx.cr0.eq) goto loc_82150B7C;
loc_82150B94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150B50) {
	__imp__sub_82150B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82150B9C) {
	__imp__sub_82150B9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150BA0) {
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
	// ble cr6,0x82150bdc
	if (!ctx.cr6.gt) goto loc_82150BDC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82150BC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82150ab0
	ctx.lr = 0x82150BCC;
	sub_82150AB0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82150BD0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27096, ctx.r3.u32);
	// bne 0x82150bc4
	if (!ctx.cr0.eq) goto loc_82150BC4;
loc_82150BDC:
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

PPC_WEAK_FUNC(sub_82150BA0) {
	__imp__sub_82150BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82150BF4) {
	__imp__sub_82150BF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150BF8) {
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
	// lwz r4,26508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26508);
	// bl 0x821778d8
	ctx.lr = 0x82150C1C;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x82150C24;
	sub_82177758(ctx, base);
	// lwz r3,26508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26508);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82150ca8
	if (ctx.cr6.eq) goto loc_82150CA8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82150c4c
	if (ctx.cr6.eq) goto loc_82150C4C;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82150c4c
	if (ctx.cr6.eq) goto loc_82150C4C;
	// bl 0x82177950
	ctx.lr = 0x82150C48;
	sub_82177950(ctx, base);
	// b 0x82150ca8
	goto loc_82150CA8;
loc_82150C4C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82150C54;
	sub_82177868(ctx, base);
	// lwz r11,26508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26508);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,26508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26508);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27096, ctx.r11.u32);
	// bne cr6,0x82150c80
	if (!ctx.cr6.eq) goto loc_82150C80;
	// bl 0x82177898
	ctx.lr = 0x82150C78;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82150c84
	goto loc_82150C84;
loc_82150C80:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82150C84:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82150ab0
	ctx.lr = 0x82150C8C;
	sub_82150AB0(ctx, base);
	// lwz r3,26508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26508);
	// bl 0x82175358
	ctx.lr = 0x82150C94;
	sub_82175358(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82150ca8
	if (ctx.cr6.eq) goto loc_82150CA8;
	// lwz r11,26508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26508);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82150CA8:
	// bl 0x821777e0
	ctx.lr = 0x82150CAC;
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

PPC_WEAK_FUNC(sub_82150BF8) {
	__imp__sub_82150BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82150CC4) {
	__imp__sub_82150CC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150CC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150CC8) {
	__imp__sub_82150CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82150CD8;
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
	// lwz r4,26508(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26508);
	// bl 0x821778d8
	ctx.lr = 0x82150CF0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26508(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26508);
	// ble cr6,0x82150d14
	if (!ctx.cr6.gt) goto loc_82150D14;
loc_82150CFC:
	// stw r30,26508(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26508, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82150bf8
	ctx.lr = 0x82150D08;
	sub_82150BF8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82150cfc
	if (!ctx.cr0.eq) goto loc_82150CFC;
loc_82150D14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150CD0) {
	__imp__sub_82150CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82150D1C) {
	__imp__sub_82150D1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150D20) {
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
	// ble cr6,0x82150d5c
	if (!ctx.cr6.gt) goto loc_82150D5C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82150D44:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82150bf8
	ctx.lr = 0x82150D4C;
	sub_82150BF8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82150D50;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26508, ctx.r3.u32);
	// bne 0x82150d44
	if (!ctx.cr0.eq) goto loc_82150D44;
loc_82150D5C:
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

PPC_WEAK_FUNC(sub_82150D20) {
	__imp__sub_82150D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82150D74) {
	__imp__sub_82150D74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,60
	ctx.r5.s64 = 60;
	// lwz r4,25836(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25836);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150D78) {
	__imp__sub_82150D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150D88) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150D88) {
	__imp__sub_82150D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,60
	ctx.r5.s64 = ctx.r4.s64 * 60;
	// lwz r4,25836(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25836);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150D90) {
	__imp__sub_82150D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150DA0) {
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
	// ble cr6,0x82150de8
	if (!ctx.cr6.gt) goto loc_82150DE8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25836(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25836);
loc_82150DC8:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82150DD4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82150DD8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25836(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25836, ctx.r3.u32);
	// bne 0x82150dc8
	if (!ctx.cr0.eq) goto loc_82150DC8;
loc_82150DE8:
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

PPC_WEAK_FUNC(sub_82150DA0) {
	__imp__sub_82150DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,27512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27512);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150E00) {
	__imp__sub_82150E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150E10) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150E10) {
	__imp__sub_82150E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r4,27512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27512);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150E18) {
	__imp__sub_82150E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150E28) {
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
	// ble cr6,0x82150e70
	if (!ctx.cr6.gt) goto loc_82150E70;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27512(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27512);
loc_82150E50:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82150E5C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82150E60;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27512, ctx.r3.u32);
	// bne 0x82150e50
	if (!ctx.cr0.eq) goto loc_82150E50;
loc_82150E70:
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

PPC_WEAK_FUNC(sub_82150E28) {
	__imp__sub_82150E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,28000(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28000);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150E88) {
	__imp__sub_82150E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150E98) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150E98) {
	__imp__sub_82150E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28000(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28000);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82150EA0) {
	__imp__sub_82150EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150EB0) {
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
	// ble cr6,0x82150ef8
	if (!ctx.cr6.gt) goto loc_82150EF8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28000(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28000);
loc_82150ED8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82150EE4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82150EE8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28000, ctx.r3.u32);
	// bne 0x82150ed8
	if (!ctx.cr0.eq) goto loc_82150ED8;
loc_82150EF8:
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

PPC_WEAK_FUNC(sub_82150EB0) {
	__imp__sub_82150EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82150F10) {
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
	// lwz r11,25924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25924);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82150fc0
	if (ctx.cr6.eq) goto loc_82150FC0;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82150fc0
	if (ctx.cr6.eq) goto loc_82150FC0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82150f88
	if (ctx.cr6.eq) goto loc_82150F88;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82150f88
	if (ctx.cr6.eq) goto loc_82150F88;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151020
	if (ctx.cr6.eq) goto loc_82151020;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25988);
	// stw r4,25184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25184, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82150F74;
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
loc_82150F88:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151020
	if (ctx.cr6.eq) goto loc_82151020;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25988);
	// stw r4,28000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28000, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82150FAC;
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
loc_82150FC0:
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r3,25988(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25988);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151020
	if (ctx.cr6.eq) goto loc_82151020;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215101c
	if (!ctx.cr6.eq) goto loc_8215101C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82150FE4;
	sub_82177868(ctx, base);
	// lwz r11,25988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25988);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25988);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,24988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24988, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82151008;
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
loc_8215101C:
	// bl 0x82177978
	ctx.lr = 0x82151020;
	sub_82177978(ctx, base);
loc_82151020:
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

PPC_WEAK_FUNC(sub_82150F10) {
	__imp__sub_82150F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82151034) {
	__imp__sub_82151034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151038) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151038) {
	__imp__sub_82151038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82151048;
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
	// lwz r4,25988(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25988);
	// bl 0x821778d8
	ctx.lr = 0x82151060;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25988(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25988);
	// ble cr6,0x82151084
	if (!ctx.cr6.gt) goto loc_82151084;
loc_8215106C:
	// stw r30,25988(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25988, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82150f10
	ctx.lr = 0x82151078;
	sub_82150F10(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8215106c
	if (!ctx.cr0.eq) goto loc_8215106C;
loc_82151084:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151040) {
	__imp__sub_82151040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215108C) {
	__imp__sub_8215108C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151090) {
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
	// ble cr6,0x821510cc
	if (!ctx.cr6.gt) goto loc_821510CC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821510B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82150f10
	ctx.lr = 0x821510BC;
	sub_82150F10(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821510C0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25988(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25988, ctx.r3.u32);
	// bne 0x821510b4
	if (!ctx.cr0.eq) goto loc_821510B4;
loc_821510CC:
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

PPC_WEAK_FUNC(sub_82151090) {
	__imp__sub_82151090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821510E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821510E4) {
	__imp__sub_821510E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821510E8) {
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
	// lwz r4,25924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25924);
	// bl 0x821778d8
	ctx.lr = 0x82151108;
	sub_821778D8(ctx, base);
	// lwz r11,25924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25924);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,25988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25988, ctx.r11.u32);
	// bl 0x82150f10
	ctx.lr = 0x82151120;
	sub_82150F10(ctx, base);
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

PPC_WEAK_FUNC(sub_821510E8) {
	__imp__sub_821510E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82151134) {
	__imp__sub_82151134(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151138) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151138) {
	__imp__sub_82151138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82151148;
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
	// lwz r4,25924(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25924);
	// bl 0x821778d8
	ctx.lr = 0x82151160;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,25924(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25924);
	// ble cr6,0x821511a4
	if (!ctx.cr6.gt) goto loc_821511A4;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82151170:
	// stw r31,25924(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25924, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82151184;
	sub_821778D8(ctx, base);
	// lwz r11,25924(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25924);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,25988(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25988, ctx.r11.u32);
	// bl 0x82150f10
	ctx.lr = 0x82151198;
	sub_82150F10(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82151170
	if (!ctx.cr0.eq) goto loc_82151170;
loc_821511A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151140) {
	__imp__sub_82151140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821511AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821511AC) {
	__imp__sub_821511AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821511B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821511B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82151208
	if (!ctx.cr6.gt) goto loc_82151208;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25924(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25924);
loc_821511D4:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821511E0;
	sub_821778D8(ctx, base);
	// lwz r11,25924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25924);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,25988(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25988, ctx.r11.u32);
	// bl 0x82150f10
	ctx.lr = 0x821511F4;
	sub_82150F10(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821511F8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25924(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25924, ctx.r3.u32);
	// bne 0x821511d4
	if (!ctx.cr0.eq) goto loc_821511D4;
loc_82151208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821511B0) {
	__imp__sub_821511B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,28116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28116);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151210) {
	__imp__sub_82151210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151220) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151220) {
	__imp__sub_82151220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,28116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28116);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151228) {
	__imp__sub_82151228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151238) {
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
	// ble cr6,0x82151280
	if (!ctx.cr6.gt) goto loc_82151280;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28116(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28116);
loc_82151260:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215126C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82151270;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28116, ctx.r3.u32);
	// bne 0x82151260
	if (!ctx.cr0.eq) goto loc_82151260;
loc_82151280:
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

PPC_WEAK_FUNC(sub_82151238) {
	__imp__sub_82151238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821512A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,84
	ctx.r5.s64 = 84;
	// lwz r4,25612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// bl 0x821778d8
	ctx.lr = 0x821512B4;
	sub_821778D8(ctx, base);
	// lwz r3,25612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215130c
	if (ctx.cr6.eq) goto loc_8215130C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82151304
	if (!ctx.cr6.eq) goto loc_82151304;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821512D4;
	sub_82177868(ctx, base);
	// lwz r11,25612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27512, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821512F8;
	sub_821778D8(ctx, base);
	// lwz r3,25612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// bl 0x823b1290
	ctx.lr = 0x82151300;
	sub_823B1290(ctx, base);
	// b 0x82151308
	goto loc_82151308;
loc_82151304:
	// bl 0x82177978
	ctx.lr = 0x82151308;
	sub_82177978(ctx, base);
loc_82151308:
	// lwz r3,25612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
loc_8215130C:
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27536, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82151324;
	sub_821778D8(ctx, base);
	// li r30,15
	ctx.r30.s64 = 15;
	// lwz r29,27536(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27536);
loc_8215132C:
	// stw r29,27536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27536, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82150960
	ctx.lr = 0x82151338;
	sub_82150960(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8215132c
	if (!ctx.cr0.eq) goto loc_8215132C;
	// lwz r11,25612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151394
	if (ctx.cr6.eq) goto loc_82151394;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82151390
	if (!ctx.cr6.eq) goto loc_82151390;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82151368;
	sub_82177868(ctx, base);
	// lwz r11,25612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,25612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r11,28236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28236, ctx.r11.u32);
	// bl 0x821506f8
	ctx.lr = 0x8215138C;
	sub_821506F8(ctx, base);
	// b 0x82151394
	goto loc_82151394;
loc_82151390:
	// bl 0x82177978
	ctx.lr = 0x82151394;
	sub_82177978(ctx, base);
loc_82151394:
	// lwz r11,25612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// stw r11,26508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26508, ctx.r11.u32);
	// bl 0x82150bf8
	ctx.lr = 0x821513AC;
	sub_82150BF8(ctx, base);
	// lwz r11,25612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821513fc
	if (ctx.cr6.eq) goto loc_821513FC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821513C4;
	sub_82177868(ctx, base);
	// lwz r11,25612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,25612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,25924(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25924, ctx.r10.u32);
	// lbz r9,74(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82151140
	ctx.lr = 0x821513FC;
	sub_82151140(ctx, base);
loc_821513FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151298) {
	__imp__sub_82151298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82151404) {
	__imp__sub_82151404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151408) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151408) {
	__imp__sub_82151408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82151418;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,84
	ctx.r5.s64 = ctx.r4.s64 * 84;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25612(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25612);
	// bl 0x821778d8
	ctx.lr = 0x82151430;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25612(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25612);
	// ble cr6,0x82151454
	if (!ctx.cr6.gt) goto loc_82151454;
loc_8215143C:
	// stw r30,25612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25612, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82151298
	ctx.lr = 0x82151448;
	sub_82151298(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// bne 0x8215143c
	if (!ctx.cr0.eq) goto loc_8215143C;
loc_82151454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151410) {
	__imp__sub_82151410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215145C) {
	__imp__sub_8215145C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151460) {
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
	// ble cr6,0x8215149c
	if (!ctx.cr6.gt) goto loc_8215149C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82151484:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82151298
	ctx.lr = 0x8215148C;
	sub_82151298(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82151490;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25612, ctx.r3.u32);
	// bne 0x82151484
	if (!ctx.cr0.eq) goto loc_82151484;
loc_8215149C:
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

PPC_WEAK_FUNC(sub_82151460) {
	__imp__sub_82151460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821514B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821514B4) {
	__imp__sub_821514B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821514B8) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,25316(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25316);
	// bl 0x821778d8
	ctx.lr = 0x821514DC;
	sub_821778D8(ctx, base);
	// lwz r11,25316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25316);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,25612(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25612, ctx.r10.u32);
	// lhz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// bl 0x82151410
	ctx.lr = 0x821514F8;
	sub_82151410(ctx, base);
	// lwz r11,25316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25316);
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215150C;
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

PPC_WEAK_FUNC(sub_821514B8) {
	__imp__sub_821514B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151520) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151520) {
	__imp__sub_82151520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82151530;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mulli r5,r4,92
	ctx.r5.s64 = ctx.r4.s64 * 92;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25316(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25316);
	// bl 0x821778d8
	ctx.lr = 0x82151548;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r26,25316(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25316);
	// ble cr6,0x82151618
	if (!ctx.cr6.gt) goto loc_82151618;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82151564:
	// stw r26,25316(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25316, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82151578;
	sub_821778D8(ctx, base);
	// lwz r11,25316(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25316);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,25612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25612, ctx.r4.u32);
	// lhz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// mulli r5,r30,84
	ctx.r5.s64 = ctx.r30.s64 * 84;
	// bl 0x821778d8
	ctx.lr = 0x82151594;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,25612(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25612);
	// ble cr6,0x821515b8
	if (!ctx.cr6.gt) goto loc_821515B8;
loc_821515A0:
	// stw r31,25612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25612, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82151298
	ctx.lr = 0x821515AC;
	sub_82151298(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// bne 0x821515a0
	if (!ctx.cr0.eq) goto loc_821515A0;
loc_821515B8:
	// lwz r4,25316(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25316);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821515CC;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215160c
	if (ctx.cr6.eq) goto loc_8215160C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82151608
	if (!ctx.cr6.eq) goto loc_82151608;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821515EC;
	sub_82177868(ctx, base);
	// lwz r11,28244(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82151604;
	sub_821779A0(ctx, base);
	// b 0x8215160c
	goto loc_8215160C;
loc_82151608:
	// bl 0x82177978
	ctx.lr = 0x8215160C;
	sub_82177978(ctx, base);
loc_8215160C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,92
	ctx.r26.s64 = ctx.r26.s64 + 92;
	// bne 0x82151564
	if (!ctx.cr0.eq) goto loc_82151564;
loc_82151618:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151528) {
	__imp__sub_82151528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82151628;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82151700
	if (!ctx.cr6.gt) goto loc_82151700;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25316(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25316);
loc_8215164C:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82151658;
	sub_821778D8(ctx, base);
	// lwz r11,25316(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25316);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,25612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25612, ctx.r4.u32);
	// lhz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// mulli r5,r30,84
	ctx.r5.s64 = ctx.r30.s64 * 84;
	// bl 0x821778d8
	ctx.lr = 0x82151674;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,25612(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25612);
	// ble cr6,0x82151698
	if (!ctx.cr6.gt) goto loc_82151698;
loc_82151680:
	// stw r31,25612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25612, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82151298
	ctx.lr = 0x8215168C;
	sub_82151298(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// bne 0x82151680
	if (!ctx.cr0.eq) goto loc_82151680;
loc_82151698:
	// lwz r4,25316(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25316);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821516AC;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821516ec
	if (ctx.cr6.eq) goto loc_821516EC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821516e8
	if (!ctx.cr6.eq) goto loc_821516E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821516CC;
	sub_82177868(ctx, base);
	// lwz r11,28244(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x821516E4;
	sub_821779A0(ctx, base);
	// b 0x821516ec
	goto loc_821516EC;
loc_821516E8:
	// bl 0x82177978
	ctx.lr = 0x821516EC;
	sub_82177978(ctx, base);
loc_821516EC:
	// bl 0x82177858
	ctx.lr = 0x821516F0;
	sub_82177858(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25316(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25316, ctx.r3.u32);
	// bne 0x8215164c
	if (!ctx.cr0.eq) goto loc_8215164C;
loc_82151700:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151620) {
	__imp__sub_82151620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,27960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27960);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151708) {
	__imp__sub_82151708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151718) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151718) {
	__imp__sub_82151718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,27960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27960);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151720) {
	__imp__sub_82151720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151730) {
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
	// ble cr6,0x82151778
	if (!ctx.cr6.gt) goto loc_82151778;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27960(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27960);
loc_82151758:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82151764;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82151768;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27960(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27960, ctx.r3.u32);
	// bne 0x82151758
	if (!ctx.cr0.eq) goto loc_82151758;
loc_82151778:
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

PPC_WEAK_FUNC(sub_82151730) {
	__imp__sub_82151730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151790) {
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
	// lwz r11,25964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25964);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x8215182c
	if (!ctx.cr6.eq) goto loc_8215182C;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r3,26656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26656);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151840
	if (ctx.cr6.eq) goto loc_82151840;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82151814
	if (!ctx.cr6.eq) goto loc_82151814;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821517D8;
	sub_82177868(ctx, base);
	// lwz r11,26656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26656);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26656);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26968, ctx.r11.u32);
	// bl 0x8214fc88
	ctx.lr = 0x821517F8;
	sub_8214FC88(ctx, base);
	// lwz r3,26656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26656);
	// bl 0x823b1940
	ctx.lr = 0x82151800;
	sub_823B1940(ctx, base);
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
loc_82151814:
	// bl 0x82177978
	ctx.lr = 0x82151818;
	sub_82177978(ctx, base);
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
loc_8215182C:
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26656);
	// stw r11,28624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x82151840;
	sub_8214F968(ctx, base);
loc_82151840:
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

PPC_WEAK_FUNC(sub_82151790) {
	__imp__sub_82151790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82151854) {
	__imp__sub_82151854(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151858) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151858) {
	__imp__sub_82151858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82151868;
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
	// lwz r4,26656(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26656);
	// bl 0x821778d8
	ctx.lr = 0x82151880;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26656(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26656);
	// ble cr6,0x821518a4
	if (!ctx.cr6.gt) goto loc_821518A4;
loc_8215188C:
	// stw r30,26656(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26656, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82151790
	ctx.lr = 0x82151898;
	sub_82151790(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8215188c
	if (!ctx.cr0.eq) goto loc_8215188C;
loc_821518A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151860) {
	__imp__sub_82151860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821518AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821518AC) {
	__imp__sub_821518AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821518B0) {
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
	// ble cr6,0x821518ec
	if (!ctx.cr6.gt) goto loc_821518EC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821518D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82151790
	ctx.lr = 0x821518DC;
	sub_82151790(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821518E0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26656, ctx.r3.u32);
	// bne 0x821518d4
	if (!ctx.cr0.eq) goto loc_821518D4;
loc_821518EC:
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

PPC_WEAK_FUNC(sub_821518B0) {
	__imp__sub_821518B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82151904) {
	__imp__sub_82151904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151908) {
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
	// lwz r4,25964(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25964);
	// bl 0x821778d8
	ctx.lr = 0x82151928;
	sub_821778D8(ctx, base);
	// lwz r11,25964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25964);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,26656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26656, ctx.r11.u32);
	// bl 0x82151790
	ctx.lr = 0x82151940;
	sub_82151790(ctx, base);
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

PPC_WEAK_FUNC(sub_82151908) {
	__imp__sub_82151908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82151954) {
	__imp__sub_82151954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151958) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151958) {
	__imp__sub_82151958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82151968;
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
	// lwz r4,25964(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25964);
	// bl 0x821778d8
	ctx.lr = 0x82151988;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,25964(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25964);
	// ble cr6,0x821519cc
	if (!ctx.cr6.gt) goto loc_821519CC;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82151998:
	// stw r31,25964(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25964, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821519AC;
	sub_821778D8(ctx, base);
	// lwz r11,25964(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25964);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,26656(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26656, ctx.r11.u32);
	// bl 0x82151790
	ctx.lr = 0x821519C0;
	sub_82151790(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x82151998
	if (!ctx.cr0.eq) goto loc_82151998;
loc_821519CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151960) {
	__imp__sub_82151960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821519D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821519D4) {
	__imp__sub_821519D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821519D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821519E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82151a30
	if (!ctx.cr6.gt) goto loc_82151A30;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25964(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25964);
loc_821519FC:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82151A08;
	sub_821778D8(ctx, base);
	// lwz r11,25964(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25964);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,26656(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26656, ctx.r11.u32);
	// bl 0x82151790
	ctx.lr = 0x82151A1C;
	sub_82151790(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82151A20;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25964(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25964, ctx.r3.u32);
	// bne 0x821519fc
	if (!ctx.cr0.eq) goto loc_821519FC;
loc_82151A30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821519D8) {
	__imp__sub_821519D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,28268(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28268);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151A38) {
	__imp__sub_82151A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151A48) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151A48) {
	__imp__sub_82151A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,28268(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28268);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151A50) {
	__imp__sub_82151A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151A60) {
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
	// ble cr6,0x82151aa8
	if (!ctx.cr6.gt) goto loc_82151AA8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28268(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28268);
loc_82151A88:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82151A94;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82151A98;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28268, ctx.r3.u32);
	// bne 0x82151a88
	if (!ctx.cr0.eq) goto loc_82151A88;
loc_82151AA8:
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

PPC_WEAK_FUNC(sub_82151A60) {
	__imp__sub_82151A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151AC0) {
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
	// lwz r4,27068(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27068);
	// bl 0x821778d8
	ctx.lr = 0x82151AE0;
	sub_821778D8(ctx, base);
	// lwz r3,27068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27068);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151b38
	if (ctx.cr6.eq) goto loc_82151B38;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82151b34
	if (!ctx.cr6.eq) goto loc_82151B34;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82151B00;
	sub_82177868(ctx, base);
	// lwz r11,27068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27068);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27068);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25316, ctx.r11.u32);
	// bl 0x821514b8
	ctx.lr = 0x82151B20;
	sub_821514B8(ctx, base);
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
loc_82151B34:
	// bl 0x82177978
	ctx.lr = 0x82151B38;
	sub_82177978(ctx, base);
loc_82151B38:
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

PPC_WEAK_FUNC(sub_82151AC0) {
	__imp__sub_82151AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82151B4C) {
	__imp__sub_82151B4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151B50) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151B50) {
	__imp__sub_82151B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82151B60;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27068(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27068);
	// bl 0x821778d8
	ctx.lr = 0x82151B78;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r26,27068(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27068);
	// ble cr6,0x82151c4c
	if (!ctx.cr6.gt) goto loc_82151C4C;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lis r24,-32142
	ctx.r24.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_82151B94:
	// stw r26,27068(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27068, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82151BA8;
	sub_821778D8(ctx, base);
	// lwz r3,27068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27068);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151c40
	if (ctx.cr6.eq) goto loc_82151C40;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82151c3c
	if (!ctx.cr6.eq) goto loc_82151C3C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82151BC8;
	sub_82177868(ctx, base);
	// lwz r11,27068(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27068);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27068(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27068);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25316(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25316, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82151BE8;
	sub_821778D8(ctx, base);
	// lwz r11,25316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25316);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,25612(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25612, ctx.r4.u32);
	// lhz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// mulli r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 * 84;
	// bl 0x821778d8
	ctx.lr = 0x82151C04;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25612(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25612);
	// ble cr6,0x82151c28
	if (!ctx.cr6.gt) goto loc_82151C28;
loc_82151C10:
	// stw r30,25612(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25612, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82151298
	ctx.lr = 0x82151C1C;
	sub_82151298(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// bne 0x82151c10
	if (!ctx.cr0.eq) goto loc_82151C10;
loc_82151C28:
	// lwz r11,25316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25316);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82151C38;
	sub_82147188(ctx, base);
	// b 0x82151c40
	goto loc_82151C40;
loc_82151C3C:
	// bl 0x82177978
	ctx.lr = 0x82151C40;
	sub_82177978(ctx, base);
loc_82151C40:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82151b94
	if (!ctx.cr0.eq) goto loc_82151B94;
loc_82151C4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151B58) {
	__imp__sub_82151B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82151C54) {
	__imp__sub_82151C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82151C60;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82151d3c
	if (!ctx.cr6.gt) goto loc_82151D3C;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lwz r4,27068(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27068);
loc_82151C84:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82151C90;
	sub_821778D8(ctx, base);
	// lwz r3,27068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27068);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151d28
	if (ctx.cr6.eq) goto loc_82151D28;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82151d24
	if (!ctx.cr6.eq) goto loc_82151D24;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82151CB0;
	sub_82177868(ctx, base);
	// lwz r11,27068(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27068);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27068(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27068);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25316(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25316, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82151CD0;
	sub_821778D8(ctx, base);
	// lwz r11,25316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25316);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,25612(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25612, ctx.r4.u32);
	// lhz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// mulli r5,r31,84
	ctx.r5.s64 = ctx.r31.s64 * 84;
	// bl 0x821778d8
	ctx.lr = 0x82151CEC;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25612(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25612);
	// ble cr6,0x82151d10
	if (!ctx.cr6.gt) goto loc_82151D10;
loc_82151CF8:
	// stw r30,25612(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25612, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82151298
	ctx.lr = 0x82151D04;
	sub_82151298(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// bne 0x82151cf8
	if (!ctx.cr0.eq) goto loc_82151CF8;
loc_82151D10:
	// lwz r11,25316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25316);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82151D20;
	sub_82147188(ctx, base);
	// b 0x82151d28
	goto loc_82151D28;
loc_82151D24:
	// bl 0x82177978
	ctx.lr = 0x82151D28;
	sub_82177978(ctx, base);
loc_82151D28:
	// bl 0x82177858
	ctx.lr = 0x82151D2C;
	sub_82177858(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27068(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27068, ctx.r3.u32);
	// bne 0x82151c84
	if (!ctx.cr0.eq) goto loc_82151C84;
loc_82151D3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151C58) {
	__imp__sub_82151C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82151D44) {
	__imp__sub_82151D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26504(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26504);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151D48) {
	__imp__sub_82151D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151D58) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151D58) {
	__imp__sub_82151D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26504(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26504);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151D60) {
	__imp__sub_82151D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151D70) {
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
	// ble cr6,0x82151db8
	if (!ctx.cr6.gt) goto loc_82151DB8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26504(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26504);
loc_82151D98:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82151DA4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82151DA8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26504, ctx.r3.u32);
	// bne 0x82151d98
	if (!ctx.cr0.eq) goto loc_82151D98;
loc_82151DB8:
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

PPC_WEAK_FUNC(sub_82151D70) {
	__imp__sub_82151D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151DD0) {
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
	// li r5,144
	ctx.r5.s64 = 144;
	// lwz r4,26984(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26984);
	// bl 0x821778d8
	ctx.lr = 0x82151DF0;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82151DF8;
	sub_82177758(ctx, base);
	// lwz r11,26984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26984);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82151E0C;
	sub_82147188(ctx, base);
	// lwz r11,26984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26984);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// li r4,33
	ctx.r4.s64 = 33;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27068(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27068, ctx.r11.u32);
	// bl 0x82151b58
	ctx.lr = 0x82151E28;
	sub_82151B58(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x82151E2C;
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

PPC_WEAK_FUNC(sub_82151DD0) {
	__imp__sub_82151DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151E40) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151E40) {
	__imp__sub_82151E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82151E50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,26984(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26984);
	// bl 0x821778d8
	ctx.lr = 0x82151E70;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,26984(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26984);
	// ble cr6,0x82151f24
	if (!ctx.cr6.gt) goto loc_82151F24;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82151E8C:
	// stw r31,26984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26984, ctx.r31.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82151EA0;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82151EA8;
	sub_82177758(ctx, base);
	// lwz r4,26984(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26984);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82151EBC;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151efc
	if (ctx.cr6.eq) goto loc_82151EFC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82151ef8
	if (!ctx.cr6.eq) goto loc_82151EF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82151EDC;
	sub_82177868(ctx, base);
	// lwz r11,28244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82151EF4;
	sub_821779A0(ctx, base);
	// b 0x82151efc
	goto loc_82151EFC;
loc_82151EF8:
	// bl 0x82177978
	ctx.lr = 0x82151EFC;
	sub_82177978(ctx, base);
loc_82151EFC:
	// lwz r11,26984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26984);
	// li r4,33
	ctx.r4.s64 = 33;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,27068(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27068, ctx.r11.u32);
	// bl 0x82151b58
	ctx.lr = 0x82151F14;
	sub_82151B58(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x82151F18;
	sub_821777E0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// bne 0x82151e8c
	if (!ctx.cr0.eq) goto loc_82151E8C;
loc_82151F24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151E48) {
	__imp__sub_82151E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82151F2C) {
	__imp__sub_82151F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82151F38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82151ff4
	if (!ctx.cr6.gt) goto loc_82151FF4;
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
	// lwz r4,26984(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26984);
loc_82151F5C:
	// li r5,144
	ctx.r5.s64 = 144;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82151F68;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82151F70;
	sub_82177758(ctx, base);
	// lwz r4,26984(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26984);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82151F84;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151fc4
	if (ctx.cr6.eq) goto loc_82151FC4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82151fc0
	if (!ctx.cr6.eq) goto loc_82151FC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82151FA4;
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
	ctx.lr = 0x82151FBC;
	sub_821779A0(ctx, base);
	// b 0x82151fc4
	goto loc_82151FC4;
loc_82151FC0:
	// bl 0x82177978
	ctx.lr = 0x82151FC4;
	sub_82177978(ctx, base);
loc_82151FC4:
	// lwz r11,26984(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26984);
	// li r4,33
	ctx.r4.s64 = 33;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,27068(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27068, ctx.r11.u32);
	// bl 0x82151b58
	ctx.lr = 0x82151FDC;
	sub_82151B58(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x82151FE0;
	sub_821777E0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82151FE4;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26984, ctx.r3.u32);
	// bne 0x82151f5c
	if (!ctx.cr0.eq) goto loc_82151F5C;
loc_82151FF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82151F30) {
	__imp__sub_82151F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82151FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82151FFC) {
	__imp__sub_82151FFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152000) {
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
	// lwz r4,27500(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27500);
	// bl 0x821778d8
	ctx.lr = 0x82152024;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8215202C;
	sub_82177758(ctx, base);
	// lwz r3,27500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27500);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821520b0
	if (ctx.cr6.eq) goto loc_821520B0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82152054
	if (ctx.cr6.eq) goto loc_82152054;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82152054
	if (ctx.cr6.eq) goto loc_82152054;
	// bl 0x82177950
	ctx.lr = 0x82152050;
	sub_82177950(ctx, base);
	// b 0x821520b0
	goto loc_821520B0;
loc_82152054:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215205C;
	sub_82177868(ctx, base);
	// lwz r11,27500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27500);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,27500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27500);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26984, ctx.r11.u32);
	// bne cr6,0x82152088
	if (!ctx.cr6.eq) goto loc_82152088;
	// bl 0x82177898
	ctx.lr = 0x82152080;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8215208c
	goto loc_8215208C;
loc_82152088:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8215208C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82151dd0
	ctx.lr = 0x82152094;
	sub_82151DD0(ctx, base);
	// lwz r3,27500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27500);
	// bl 0x821753e8
	ctx.lr = 0x8215209C;
	sub_821753E8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821520b0
	if (ctx.cr6.eq) goto loc_821520B0;
	// lwz r11,27500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27500);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821520B0:
	// bl 0x821777e0
	ctx.lr = 0x821520B4;
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

PPC_WEAK_FUNC(sub_82152000) {
	__imp__sub_82152000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821520CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821520CC) {
	__imp__sub_821520CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821520D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821520D0) {
	__imp__sub_821520D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821520D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821520E0;
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
	// lwz r4,27500(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27500);
	// bl 0x821778d8
	ctx.lr = 0x821520F8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27500(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27500);
	// ble cr6,0x8215211c
	if (!ctx.cr6.gt) goto loc_8215211C;
loc_82152104:
	// stw r30,27500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27500, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152000
	ctx.lr = 0x82152110;
	sub_82152000(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82152104
	if (!ctx.cr0.eq) goto loc_82152104;
loc_8215211C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821520D8) {
	__imp__sub_821520D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152124) {
	__imp__sub_82152124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152128) {
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
	// ble cr6,0x82152164
	if (!ctx.cr6.gt) goto loc_82152164;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215214C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82152000
	ctx.lr = 0x82152154;
	sub_82152000(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82152158;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27500, ctx.r3.u32);
	// bne 0x8215214c
	if (!ctx.cr0.eq) goto loc_8215214C;
loc_82152164:
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

PPC_WEAK_FUNC(sub_82152128) {
	__imp__sub_82152128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215217C) {
	__imp__sub_8215217C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152180) {
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
	// li r5,88
	ctx.r5.s64 = 88;
	// lwz r4,27152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// bl 0x821778d8
	ctx.lr = 0x821521A4;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x821521AC;
	sub_82177758(ctx, base);
	// lwz r4,27152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,26660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26660, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821521C4;
	sub_821778D8(ctx, base);
	// lwz r11,26660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26660);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821521D8;
	sub_82147188(ctx, base);
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27500, ctx.r11.u32);
	// bl 0x82152000
	ctx.lr = 0x821521F0;
	sub_82152000(ctx, base);
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152244
	if (ctx.cr6.eq) goto loc_82152244;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82152240
	if (!ctx.cr6.eq) goto loc_82152240;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82152214;
	sub_82177868(ctx, base);
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r10,25964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25964, ctx.r10.u32);
	// lbz r4,57(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// bl 0x82151960
	ctx.lr = 0x8215223C;
	sub_82151960(ctx, base);
	// b 0x82152244
	goto loc_82152244;
loc_82152240:
	// bl 0x82177978
	ctx.lr = 0x82152244;
	sub_82177978(ctx, base);
loc_82152244:
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215229c
	if (ctx.cr6.eq) goto loc_8215229C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82152298
	if (!ctx.cr6.eq) goto loc_82152298;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x82152268;
	sub_82177868(ctx, base);
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r4,28268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28268, ctx.r4.u32);
	// lbz r8,58(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// rotlwi r5,r8,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// bl 0x821778d8
	ctx.lr = 0x82152294;
	sub_821778D8(ctx, base);
	// b 0x8215229c
	goto loc_8215229C;
loc_82152298:
	// bl 0x82177978
	ctx.lr = 0x8215229C;
	sub_82177978(ctx, base);
loc_8215229C:
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821522f4
	if (ctx.cr6.eq) goto loc_821522F4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821522f0
	if (!ctx.cr6.eq) goto loc_821522F0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821522C0;
	sub_82177868(ctx, base);
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r4,28116(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28116, ctx.r4.u32);
	// lbz r8,59(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 59);
	// rotlwi r5,r8,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// bl 0x821778d8
	ctx.lr = 0x821522EC;
	sub_821778D8(ctx, base);
	// b 0x821522f4
	goto loc_821522F4;
loc_821522F0:
	// bl 0x82177978
	ctx.lr = 0x821522F4;
	sub_82177978(ctx, base);
loc_821522F4:
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82152330
	if (ctx.cr6.eq) goto loc_82152330;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215230C;
	sub_82177868(ctx, base);
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,27152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27152);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r10.u32);
	// lbz r4,62(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 62);
	// bl 0x82147218
	ctx.lr = 0x82152330;
	sub_82147218(ctx, base);
loc_82152330:
	// bl 0x821777e0
	ctx.lr = 0x82152334;
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

PPC_WEAK_FUNC(sub_82152180) {
	__imp__sub_82152180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215234C) {
	__imp__sub_8215234C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152350) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82152350) {
	__imp__sub_82152350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82152360;
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
	// lwz r4,27152(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27152);
	// bl 0x821778d8
	ctx.lr = 0x82152378;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27152(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27152);
	// ble cr6,0x8215239c
	if (!ctx.cr6.gt) goto loc_8215239C;
loc_82152384:
	// stw r30,27152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27152, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152180
	ctx.lr = 0x82152390;
	sub_82152180(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// bne 0x82152384
	if (!ctx.cr0.eq) goto loc_82152384;
loc_8215239C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82152358) {
	__imp__sub_82152358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821523A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821523A4) {
	__imp__sub_821523A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821523A8) {
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
	// ble cr6,0x821523e4
	if (!ctx.cr6.gt) goto loc_821523E4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821523CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82152180
	ctx.lr = 0x821523D4;
	sub_82152180(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821523D8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27152, ctx.r3.u32);
	// bne 0x821523cc
	if (!ctx.cr0.eq) goto loc_821523CC;
loc_821523E4:
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

PPC_WEAK_FUNC(sub_821523A8) {
	__imp__sub_821523A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821523FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821523FC) {
	__imp__sub_821523FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152400) {
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
	// lwz r4,25372(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25372);
	// bl 0x821778d8
	ctx.lr = 0x82152424;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8215242C;
	sub_82177758(ctx, base);
	// lwz r3,25372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25372);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821524b0
	if (ctx.cr6.eq) goto loc_821524B0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82152454
	if (ctx.cr6.eq) goto loc_82152454;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82152454
	if (ctx.cr6.eq) goto loc_82152454;
	// bl 0x82177950
	ctx.lr = 0x82152450;
	sub_82177950(ctx, base);
	// b 0x821524b0
	goto loc_821524B0;
loc_82152454:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215245C;
	sub_82177868(ctx, base);
	// lwz r11,25372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25372);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,25372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25372);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27152, ctx.r11.u32);
	// bne cr6,0x82152488
	if (!ctx.cr6.eq) goto loc_82152488;
	// bl 0x82177898
	ctx.lr = 0x82152480;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8215248c
	goto loc_8215248C;
loc_82152488:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8215248C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82152180
	ctx.lr = 0x82152494;
	sub_82152180(ctx, base);
	// lwz r3,25372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25372);
	// bl 0x82175278
	ctx.lr = 0x8215249C;
	sub_82175278(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821524b0
	if (ctx.cr6.eq) goto loc_821524B0;
	// lwz r11,25372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25372);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821524B0:
	// bl 0x821777e0
	ctx.lr = 0x821524B4;
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

PPC_WEAK_FUNC(sub_82152400) {
	__imp__sub_82152400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821524CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821524CC) {
	__imp__sub_821524CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821524D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821524D0) {
	__imp__sub_821524D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821524D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821524E0;
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
	// lwz r4,25372(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25372);
	// bl 0x821778d8
	ctx.lr = 0x821524F8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25372(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25372);
	// ble cr6,0x8215251c
	if (!ctx.cr6.gt) goto loc_8215251C;
loc_82152504:
	// stw r30,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152400
	ctx.lr = 0x82152510;
	sub_82152400(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82152504
	if (!ctx.cr0.eq) goto loc_82152504;
loc_8215251C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821524D8) {
	__imp__sub_821524D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152524) {
	__imp__sub_82152524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152528) {
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
	// ble cr6,0x82152564
	if (!ctx.cr6.gt) goto loc_82152564;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215254C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82152400
	ctx.lr = 0x82152554;
	sub_82152400(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82152558;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25372, ctx.r3.u32);
	// bne 0x8215254c
	if (!ctx.cr0.eq) goto loc_8215254C;
loc_82152564:
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

PPC_WEAK_FUNC(sub_82152528) {
	__imp__sub_82152528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215257C) {
	__imp__sub_8215257C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152580) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152580) {
	__imp__sub_82152580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152588) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152588) {
	__imp__sub_82152588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152590) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152590) {
	__imp__sub_82152590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152598) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152598) {
	__imp__sub_82152598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821525A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821525A0) {
	__imp__sub_821525A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821525A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821525A8) {
	__imp__sub_821525A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821525B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821525B0) {
	__imp__sub_821525B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821525B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821525B8) {
	__imp__sub_821525B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821525C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821525C0) {
	__imp__sub_821525C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821525C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821525C8) {
	__imp__sub_821525C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821525D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821525D0) {
	__imp__sub_821525D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821525D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821525D8) {
	__imp__sub_821525D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821525E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821525E0) {
	__imp__sub_821525E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821525E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821525E8) {
	__imp__sub_821525E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821525F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821525F0) {
	__imp__sub_821525F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821525F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821525F8) {
	__imp__sub_821525F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152600) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152600) {
	__imp__sub_82152600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152608) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152608) {
	__imp__sub_82152608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152610) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152610) {
	__imp__sub_82152610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152618) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152618) {
	__imp__sub_82152618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152620) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152620) {
	__imp__sub_82152620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152628) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152628) {
	__imp__sub_82152628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152630) {
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
	// lwz r11,25236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25236);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82152688
	if (ctx.cr6.eq) goto loc_82152688;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28012, ctx.r3.u32);
	// bl 0x821753d8
	ctx.lr = 0x82152668;
	sub_821753D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82152688
	if (!ctx.cr6.eq) goto loc_82152688;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28012);
	// bl 0x821753d8
	ctx.lr = 0x8215267C;
	sub_821753D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215268c
	if (ctx.cr6.eq) goto loc_8215268C;
loc_82152688:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215268C:
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

PPC_WEAK_FUNC(sub_82152630) {
	__imp__sub_82152630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821526A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821526A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,25236(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25236);
	// ble cr6,0x82152714
	if (!ctx.cr6.gt) goto loc_82152714;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_821526C8:
	// stw r31,25236(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25236, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152704
	if (ctx.cr6.eq) goto loc_82152704;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28012(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28012, ctx.r3.u32);
	// bl 0x821753d8
	ctx.lr = 0x821526E8;
	sub_821753D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82152704
	if (!ctx.cr6.eq) goto loc_82152704;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28012(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28012);
	// bl 0x821753d8
	ctx.lr = 0x821526FC;
	sub_821753D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82152720
	if (ctx.cr6.eq) goto loc_82152720;
loc_82152704:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821526c8
	if (ctx.cr6.lt) goto loc_821526C8;
loc_82152714:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82152720:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821526A0) {
	__imp__sub_821526A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215272C) {
	__imp__sub_8215272C(ctx, base);
}

