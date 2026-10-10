#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8214D104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214D104) {
	__imp__sub_8214D104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D108) {
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
	// lwz r4,25880(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25880);
	// bl 0x821778d8
	ctx.lr = 0x8214D12C;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8214D134;
	sub_82177758(ctx, base);
	// lwz r3,25880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25880);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214d1b8
	if (ctx.cr6.eq) goto loc_8214D1B8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8214d15c
	if (ctx.cr6.eq) goto loc_8214D15C;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8214d15c
	if (ctx.cr6.eq) goto loc_8214D15C;
	// bl 0x82177950
	ctx.lr = 0x8214D158;
	sub_82177950(ctx, base);
	// b 0x8214d1b8
	goto loc_8214D1B8;
loc_8214D15C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214D164;
	sub_82177868(ctx, base);
	// lwz r11,25880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25880);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,25880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25880);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28628, ctx.r11.u32);
	// bne cr6,0x8214d190
	if (!ctx.cr6.eq) goto loc_8214D190;
	// bl 0x82177898
	ctx.lr = 0x8214D188;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8214d194
	goto loc_8214D194;
loc_8214D190:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8214D194:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214cfa8
	ctx.lr = 0x8214D19C;
	sub_8214CFA8(ctx, base);
	// lwz r3,25880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25880);
	// bl 0x82175570
	ctx.lr = 0x8214D1A4;
	sub_82175570(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214d1b8
	if (ctx.cr6.eq) goto loc_8214D1B8;
	// lwz r11,25880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25880);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8214D1B8:
	// bl 0x821777e0
	ctx.lr = 0x8214D1BC;
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

PPC_WEAK_FUNC(sub_8214D108) {
	__imp__sub_8214D108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214D1D4) {
	__imp__sub_8214D1D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D1D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214D1D8) {
	__imp__sub_8214D1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214D1E8;
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
	// lwz r4,25880(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25880);
	// bl 0x821778d8
	ctx.lr = 0x8214D200;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25880(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25880);
	// ble cr6,0x8214d224
	if (!ctx.cr6.gt) goto loc_8214D224;
loc_8214D20C:
	// stw r30,25880(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25880, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214d108
	ctx.lr = 0x8214D218;
	sub_8214D108(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8214d20c
	if (!ctx.cr0.eq) goto loc_8214D20C;
loc_8214D224:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214D1E0) {
	__imp__sub_8214D1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214D22C) {
	__imp__sub_8214D22C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D230) {
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
	// ble cr6,0x8214d26c
	if (!ctx.cr6.gt) goto loc_8214D26C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214D254:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214d108
	ctx.lr = 0x8214D25C;
	sub_8214D108(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214D260;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25880(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25880, ctx.r3.u32);
	// bne 0x8214d254
	if (!ctx.cr0.eq) goto loc_8214D254;
loc_8214D26C:
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

PPC_WEAK_FUNC(sub_8214D230) {
	__imp__sub_8214D230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214D284) {
	__imp__sub_8214D284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D288) {
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
	// lwz r4,27172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x821778d8
	ctx.lr = 0x8214D2A8;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8214D2B0;
	sub_822DD938(ctx, base);
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

PPC_WEAK_FUNC(sub_8214D288) {
	__imp__sub_8214D288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214D2C4) {
	__imp__sub_8214D2C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D2C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214D2C8) {
	__imp__sub_8214D2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214D2D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,27172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27172);
	// bl 0x821778d8
	ctx.lr = 0x8214D2F0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,27172(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27172);
	// ble cr6,0x8214d324
	if (!ctx.cr6.gt) goto loc_8214D324;
loc_8214D2FC:
	// stw r31,27172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27172, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214D310;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8214D318;
	sub_822DD938(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8214d2fc
	if (!ctx.cr0.eq) goto loc_8214D2FC;
loc_8214D324:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214D2D0) {
	__imp__sub_8214D2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214D32C) {
	__imp__sub_8214D32C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D330) {
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
	// ble cr6,0x8214d380
	if (!ctx.cr6.gt) goto loc_8214D380;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27172);
loc_8214D358:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214D364;
	sub_821778D8(ctx, base);
	// lwz r3,27172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27172);
	// bl 0x822dd938
	ctx.lr = 0x8214D36C;
	sub_822DD938(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214D370;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27172, ctx.r3.u32);
	// bne 0x8214d358
	if (!ctx.cr0.eq) goto loc_8214D358;
loc_8214D380:
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

PPC_WEAK_FUNC(sub_8214D330) {
	__imp__sub_8214D330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D398) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D398) {
	__imp__sub_8214D398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D3A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D3A0) {
	__imp__sub_8214D3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D3A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D3A8) {
	__imp__sub_8214D3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D3B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D3B0) {
	__imp__sub_8214D3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D3B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D3B8) {
	__imp__sub_8214D3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D3C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D3C0) {
	__imp__sub_8214D3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D3C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D3C8) {
	__imp__sub_8214D3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D3D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D3D0) {
	__imp__sub_8214D3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D3D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D3D8) {
	__imp__sub_8214D3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D3E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D3E0) {
	__imp__sub_8214D3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D3E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D3E8) {
	__imp__sub_8214D3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D3F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D3F0) {
	__imp__sub_8214D3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D3F8) {
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
	// lwz r11,27004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27004);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214d450
	if (ctx.cr6.eq) goto loc_8214D450;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26620, ctx.r3.u32);
	// bl 0x82175710
	ctx.lr = 0x8214D430;
	sub_82175710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214d450
	if (!ctx.cr6.eq) goto loc_8214D450;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26620);
	// bl 0x82175710
	ctx.lr = 0x8214D444;
	sub_82175710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8214d454
	if (ctx.cr6.eq) goto loc_8214D454;
loc_8214D450:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214D454:
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

PPC_WEAK_FUNC(sub_8214D3F8) {
	__imp__sub_8214D3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8214D470;
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
	// lwz r31,27004(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27004);
	// ble cr6,0x8214d4dc
	if (!ctx.cr6.gt) goto loc_8214D4DC;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8214D490:
	// stw r31,27004(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27004, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d4cc
	if (ctx.cr6.eq) goto loc_8214D4CC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26620(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26620, ctx.r3.u32);
	// bl 0x82175710
	ctx.lr = 0x8214D4B0;
	sub_82175710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214d4cc
	if (!ctx.cr6.eq) goto loc_8214D4CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26620);
	// bl 0x82175710
	ctx.lr = 0x8214D4C4;
	sub_82175710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214d4e8
	if (ctx.cr6.eq) goto loc_8214D4E8;
loc_8214D4CC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8214d490
	if (ctx.cr6.lt) goto loc_8214D490;
loc_8214D4DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8214D4E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214D468) {
	__imp__sub_8214D468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214D4F4) {
	__imp__sub_8214D4F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D4F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D4F8) {
	__imp__sub_8214D4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D500) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D500) {
	__imp__sub_8214D500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D508) {
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
	// lwz r11,26064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26064);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8214d554
	if (!ctx.cr6.eq) goto loc_8214D554;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28152);
	// stw r11,27004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27004, ctx.r11.u32);
	// bl 0x8214d3f8
	ctx.lr = 0x8214D53C;
	sub_8214D3F8(ctx, base);
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
loc_8214D554:
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

PPC_WEAK_FUNC(sub_8214D508) {
	__imp__sub_8214D508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8214D570;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// lwz r31,28152(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28152);
	// ble cr6,0x8214d5f8
	if (!ctx.cr6.gt) goto loc_8214D5F8;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
loc_8214D598:
	// lwz r11,26064(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26064);
	// stw r31,28152(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28152, ctx.r31.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8214d5e8
	if (!ctx.cr6.eq) goto loc_8214D5E8;
	// stw r31,27004(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27004, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d5e8
	if (ctx.cr6.eq) goto loc_8214D5E8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26620(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26620, ctx.r3.u32);
	// bl 0x82175710
	ctx.lr = 0x8214D5CC;
	sub_82175710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214d5e8
	if (!ctx.cr6.eq) goto loc_8214D5E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26620);
	// bl 0x82175710
	ctx.lr = 0x8214D5E0;
	sub_82175710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214d604
	if (ctx.cr6.eq) goto loc_8214D604;
loc_8214D5E8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8214d598
	if (ctx.cr6.lt) goto loc_8214D598;
loc_8214D5F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8214D604:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214D568) {
	__imp__sub_8214D568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D610) {
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
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lwz r11,26064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26064);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,28152(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28152, ctx.r10.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8214d654
	if (!ctx.cr6.eq) goto loc_8214D654;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// stw r10,27004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27004, ctx.r10.u32);
	// bl 0x8214d3f8
	ctx.lr = 0x8214D648;
	sub_8214D3F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8214d658
	if (ctx.cr6.eq) goto loc_8214D658;
loc_8214D654:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214D658:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D610) {
	__imp__sub_8214D610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8214D670;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r30,26064(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26064);
	// ble cr6,0x8214d700
	if (!ctx.cr6.gt) goto loc_8214D700;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r24,-32142
	ctx.r24.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
loc_8214D69C:
	// stw r30,26064(r25)
	PPC_STORE_U32(ctx.r25.u32 + 26064, ctx.r30.u32);
	// stw r31,28152(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28152, ctx.r31.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8214d6ec
	if (!ctx.cr6.eq) goto loc_8214D6EC;
	// stw r31,27004(r24)
	PPC_STORE_U32(ctx.r24.u32 + 27004, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d6ec
	if (ctx.cr6.eq) goto loc_8214D6EC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26620(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26620, ctx.r3.u32);
	// bl 0x82175710
	ctx.lr = 0x8214D6D0;
	sub_82175710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214d6ec
	if (!ctx.cr6.eq) goto loc_8214D6EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26620(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26620);
	// bl 0x82175710
	ctx.lr = 0x8214D6E4;
	sub_82175710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214d70c
	if (ctx.cr6.eq) goto loc_8214D70C;
loc_8214D6EC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8214d69c
	if (ctx.cr6.lt) goto loc_8214D69C;
loc_8214D700:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8214D70C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214D668) {
	__imp__sub_8214D668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D718) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D718) {
	__imp__sub_8214D718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D720) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D720) {
	__imp__sub_8214D720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D728) {
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
	// lwz r11,27060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27060);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214d780
	if (ctx.cr6.eq) goto loc_8214D780;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25600, ctx.r3.u32);
	// bl 0x82175680
	ctx.lr = 0x8214D760;
	sub_82175680(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214d780
	if (!ctx.cr6.eq) goto loc_8214D780;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25600);
	// bl 0x82175680
	ctx.lr = 0x8214D774;
	sub_82175680(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8214d784
	if (ctx.cr6.eq) goto loc_8214D784;
loc_8214D780:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214D784:
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

PPC_WEAK_FUNC(sub_8214D728) {
	__imp__sub_8214D728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8214D7A0;
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
	// lwz r31,27060(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27060);
	// ble cr6,0x8214d80c
	if (!ctx.cr6.gt) goto loc_8214D80C;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8214D7C0:
	// stw r31,27060(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27060, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d7fc
	if (ctx.cr6.eq) goto loc_8214D7FC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25600(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25600, ctx.r3.u32);
	// bl 0x82175680
	ctx.lr = 0x8214D7E0;
	sub_82175680(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214d7fc
	if (!ctx.cr6.eq) goto loc_8214D7FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25600(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25600);
	// bl 0x82175680
	ctx.lr = 0x8214D7F4;
	sub_82175680(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214d818
	if (ctx.cr6.eq) goto loc_8214D818;
loc_8214D7FC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8214d7c0
	if (ctx.cr6.lt) goto loc_8214D7C0;
loc_8214D80C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8214D818:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214D798) {
	__imp__sub_8214D798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214D824) {
	__imp__sub_8214D824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D828) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D828) {
	__imp__sub_8214D828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D830) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D830) {
	__imp__sub_8214D830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D838) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D838) {
	__imp__sub_8214D838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D840) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D840) {
	__imp__sub_8214D840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D848) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D848) {
	__imp__sub_8214D848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D850) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D850) {
	__imp__sub_8214D850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D858) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D858) {
	__imp__sub_8214D858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D860) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D860) {
	__imp__sub_8214D860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D868) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D868) {
	__imp__sub_8214D868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D870) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D870) {
	__imp__sub_8214D870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D878) {
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
	// lwz r11,26236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26236);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214d8d0
	if (ctx.cr6.eq) goto loc_8214D8D0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r11,26064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26064, ctx.r11.u32);
	// bl 0x82171e28
	ctx.lr = 0x8214D8AC;
	sub_82171E28(ctx, base);
	// bl 0x8214d668
	ctx.lr = 0x8214D8B0;
	sub_8214D668(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214d8cc
	if (!ctx.cr6.eq) goto loc_8214D8CC;
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
loc_8214D8CC:
	// lwz r11,26236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26236);
loc_8214D8D0:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r11,27060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27060, ctx.r11.u32);
	// bl 0x8214d728
	ctx.lr = 0x8214D8E0;
	sub_8214D728(ctx, base);
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

PPC_WEAK_FUNC(sub_8214D878) {
	__imp__sub_8214D878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214D8FC) {
	__imp__sub_8214D8FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8214D908;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,26236(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26236);
	// ble cr6,0x8214d9b0
	if (!ctx.cr6.gt) goto loc_8214D9B0;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
loc_8214D930:
	// stw r31,26236(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26236, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214d960
	if (ctx.cr6.eq) goto loc_8214D960;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,26064(r26)
	PPC_STORE_U32(ctx.r26.u32 + 26064, ctx.r11.u32);
	// bl 0x82171e28
	ctx.lr = 0x8214D950;
	sub_82171E28(ctx, base);
	// bl 0x8214d668
	ctx.lr = 0x8214D954;
	sub_8214D668(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214d9bc
	if (ctx.cr6.eq) goto loc_8214D9BC;
	// lwz r11,26236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26236);
loc_8214D960:
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// stw r11,27060(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27060, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214d9a0
	if (ctx.cr6.eq) goto loc_8214D9A0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25600(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25600, ctx.r3.u32);
	// bl 0x82175680
	ctx.lr = 0x8214D984;
	sub_82175680(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214d9a0
	if (!ctx.cr6.eq) goto loc_8214D9A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25600(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25600);
	// bl 0x82175680
	ctx.lr = 0x8214D998;
	sub_82175680(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214d9bc
	if (ctx.cr6.eq) goto loc_8214D9BC;
loc_8214D9A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8214d930
	if (ctx.cr6.lt) goto loc_8214D930;
loc_8214D9B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8214D9BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214D900) {
	__imp__sub_8214D900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214D9C8) {
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
	// lwz r11,27380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27380);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214da08
	if (ctx.cr6.eq) goto loc_8214DA08;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,26236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26236, ctx.r10.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8214d900
	ctx.lr = 0x8214D9FC;
	sub_8214D900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8214da0c
	if (ctx.cr6.eq) goto loc_8214DA0C;
loc_8214DA08:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214DA0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214D9C8) {
	__imp__sub_8214D9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214DA1C) {
	__imp__sub_8214DA1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8214DA28;
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
	// lwz r31,27380(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27380);
	// ble cr6,0x8214da80
	if (!ctx.cr6.gt) goto loc_8214DA80;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8214DA48:
	// stw r31,27380(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27380, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214da70
	if (ctx.cr6.eq) goto loc_8214DA70;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,26236(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26236, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8214d900
	ctx.lr = 0x8214DA68;
	sub_8214D900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214da8c
	if (ctx.cr6.eq) goto loc_8214DA8C;
loc_8214DA70:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8214da48
	if (ctx.cr6.lt) goto loc_8214DA48;
loc_8214DA80:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8214DA8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DA20) {
	__imp__sub_8214DA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DA98) {
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
	// lwz r11,28076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28076);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214db10
	if (ctx.cr6.eq) goto loc_8214DB10;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27380, ctx.r3.u32);
	// bl 0x821755f0
	ctx.lr = 0x8214DAD0;
	sub_821755F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214db10
	if (!ctx.cr6.eq) goto loc_8214DB10;
	// bl 0x8214d9c8
	ctx.lr = 0x8214DADC;
	sub_8214D9C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8214daf8
	if (!ctx.cr6.eq) goto loc_8214DAF8;
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
loc_8214DAF8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27380);
	// bl 0x821755f0
	ctx.lr = 0x8214DB04;
	sub_821755F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8214db14
	if (ctx.cr6.eq) goto loc_8214DB14;
loc_8214DB10:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214DB14:
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

PPC_WEAK_FUNC(sub_8214DA98) {
	__imp__sub_8214DA98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8214DB30;
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
	// lwz r31,28076(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28076);
	// ble cr6,0x8214db6c
	if (!ctx.cr6.gt) goto loc_8214DB6C;
loc_8214DB4C:
	// stw r31,28076(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28076, ctx.r31.u32);
	// bl 0x8214da98
	ctx.lr = 0x8214DB54;
	sub_8214DA98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214db78
	if (ctx.cr6.eq) goto loc_8214DB78;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8214db4c
	if (ctx.cr6.lt) goto loc_8214DB4C;
loc_8214DB6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8214DB78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DB28) {
	__imp__sub_8214DB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214DB84) {
	__imp__sub_8214DB84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DB88) {
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
	// lwz r4,28136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28136);
	// stw r4,25184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25184, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DB88) {
	__imp__sub_8214DB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DBAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214DBAC) {
	__imp__sub_8214DBAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DBB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DBB0) {
	__imp__sub_8214DBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28136);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DBB8) {
	__imp__sub_8214DBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214DBD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214dc10
	if (!ctx.cr6.gt) goto loc_8214DC10;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,28136(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28136);
loc_8214DBEC:
	// stw r4,25184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25184, ctx.r4.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214DBFC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214DC00;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28136, ctx.r3.u32);
	// bne 0x8214dbec
	if (!ctx.cr0.eq) goto loc_8214DBEC;
loc_8214DC10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DBC8) {
	__imp__sub_8214DBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27304);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DC18) {
	__imp__sub_8214DC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DC28) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DC28) {
	__imp__sub_8214DC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27304);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DC30) {
	__imp__sub_8214DC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DC40) {
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
	// ble cr6,0x8214dc88
	if (!ctx.cr6.gt) goto loc_8214DC88;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27304(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27304);
loc_8214DC68:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214DC74;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214DC78;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27304, ctx.r3.u32);
	// bne 0x8214dc68
	if (!ctx.cr0.eq) goto loc_8214DC68;
loc_8214DC88:
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

PPC_WEAK_FUNC(sub_8214DC40) {
	__imp__sub_8214DC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DCA0) {
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
	// lwz r4,27532(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27532);
	// stw r4,25184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25184, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DCA0) {
	__imp__sub_8214DCA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DCC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214DCC4) {
	__imp__sub_8214DCC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DCC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DCC8) {
	__imp__sub_8214DCC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27532(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27532);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DCD0) {
	__imp__sub_8214DCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214DCE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214dd28
	if (!ctx.cr6.gt) goto loc_8214DD28;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27532(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27532);
loc_8214DD04:
	// stw r4,25184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25184, ctx.r4.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214DD14;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214DD18;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27532, ctx.r3.u32);
	// bne 0x8214dd04
	if (!ctx.cr0.eq) goto loc_8214DD04;
loc_8214DD28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DCE0) {
	__imp__sub_8214DCE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DD30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214DD30) {
	__imp__sub_8214DD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DD38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214DD38) {
	__imp__sub_8214DD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DD40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214DD40) {
	__imp__sub_8214DD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DD48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214DD48) {
	__imp__sub_8214DD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DD50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214DD50) {
	__imp__sub_8214DD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DD58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214DD58) {
	__imp__sub_8214DD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DD60) {
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
	// lwz r4,26660(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26660);
	// bl 0x821778d8
	ctx.lr = 0x8214DD80;
	sub_821778D8(ctx, base);
	// lwz r11,26660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26660);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8214DD94;
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

PPC_WEAK_FUNC(sub_8214DD60) {
	__imp__sub_8214DD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DDA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DDA8) {
	__imp__sub_8214DDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8214DDB8;
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
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26660(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26660);
	// bl 0x821778d8
	ctx.lr = 0x8214DDD8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26660(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26660);
	// ble cr6,0x8214de64
	if (!ctx.cr6.gt) goto loc_8214DE64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8214DDF0:
	// stw r30,26660(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26660, ctx.r30.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214DE04;
	sub_821778D8(ctx, base);
	// lwz r4,26660(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26660);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214DE18;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214de58
	if (ctx.cr6.eq) goto loc_8214DE58;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214de54
	if (!ctx.cr6.eq) goto loc_8214DE54;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214DE38;
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
	ctx.lr = 0x8214DE50;
	sub_821779A0(ctx, base);
	// b 0x8214de58
	goto loc_8214DE58;
loc_8214DE54:
	// bl 0x82177978
	ctx.lr = 0x8214DE58;
	sub_82177978(ctx, base);
loc_8214DE58:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x8214ddf0
	if (!ctx.cr0.eq) goto loc_8214DDF0;
loc_8214DE64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DDB0) {
	__imp__sub_8214DDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214DE6C) {
	__imp__sub_8214DE6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8214DE78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214df0c
	if (!ctx.cr6.gt) goto loc_8214DF0C;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,26660(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26660);
loc_8214DE98:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214DEA4;
	sub_821778D8(ctx, base);
	// lwz r4,26660(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26660);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214DEB8;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214def8
	if (ctx.cr6.eq) goto loc_8214DEF8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214def4
	if (!ctx.cr6.eq) goto loc_8214DEF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214DED8;
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
	ctx.lr = 0x8214DEF0;
	sub_821779A0(ctx, base);
	// b 0x8214def8
	goto loc_8214DEF8;
loc_8214DEF4:
	// bl 0x82177978
	ctx.lr = 0x8214DEF8;
	sub_82177978(ctx, base);
loc_8214DEF8:
	// bl 0x82177858
	ctx.lr = 0x8214DEFC;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26660, ctx.r3.u32);
	// bne 0x8214de98
	if (!ctx.cr0.eq) goto loc_8214DE98;
loc_8214DF0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DE70) {
	__imp__sub_8214DE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214DF14) {
	__imp__sub_8214DF14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DF18) {
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
	// lwz r4,27056(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27056);
	// stw r4,26260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26260, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DF18) {
	__imp__sub_8214DF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DF3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214DF3C) {
	__imp__sub_8214DF3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DF40) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DF40) {
	__imp__sub_8214DF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27056(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27056);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DF48) {
	__imp__sub_8214DF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214DF60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214dfa0
	if (!ctx.cr6.gt) goto loc_8214DFA0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27056(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27056);
loc_8214DF7C:
	// stw r4,26260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26260, ctx.r4.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214DF8C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214DF90;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27056(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27056, ctx.r3.u32);
	// bne 0x8214df7c
	if (!ctx.cr0.eq) goto loc_8214DF7C;
loc_8214DFA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DF58) {
	__imp__sub_8214DF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r4,26972(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26972);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DFA8) {
	__imp__sub_8214DFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DFB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DFB8) {
	__imp__sub_8214DFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,44
	ctx.r5.s64 = ctx.r4.s64 * 44;
	// lwz r4,26972(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26972);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214DFC0) {
	__imp__sub_8214DFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214DFD0) {
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
	// ble cr6,0x8214e018
	if (!ctx.cr6.gt) goto loc_8214E018;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26972(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26972);
loc_8214DFF8:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E004;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E008;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26972(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26972, ctx.r3.u32);
	// bne 0x8214dff8
	if (!ctx.cr0.eq) goto loc_8214DFF8;
loc_8214E018:
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

PPC_WEAK_FUNC(sub_8214DFD0) {
	__imp__sub_8214DFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r4,28484(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28484);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E030) {
	__imp__sub_8214E030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E040) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E040) {
	__imp__sub_8214E040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,44
	ctx.r5.s64 = ctx.r4.s64 * 44;
	// lwz r4,28484(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28484);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E048) {
	__imp__sub_8214E048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E058) {
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
	// ble cr6,0x8214e0a0
	if (!ctx.cr6.gt) goto loc_8214E0A0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28484(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28484);
loc_8214E080:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E08C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E090;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28484, ctx.r3.u32);
	// bne 0x8214e080
	if (!ctx.cr0.eq) goto loc_8214E080;
loc_8214E0A0:
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

PPC_WEAK_FUNC(sub_8214E058) {
	__imp__sub_8214E058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,24952(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24952);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E0B8) {
	__imp__sub_8214E0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E0C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E0C8) {
	__imp__sub_8214E0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,24952(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24952);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E0D0) {
	__imp__sub_8214E0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E0E0) {
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
	// ble cr6,0x8214e128
	if (!ctx.cr6.gt) goto loc_8214E128;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,24952(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24952);
loc_8214E108:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E114;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E118;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,24952(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24952, ctx.r3.u32);
	// bne 0x8214e108
	if (!ctx.cr0.eq) goto loc_8214E108;
loc_8214E128:
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

PPC_WEAK_FUNC(sub_8214E0E0) {
	__imp__sub_8214E0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,26188(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26188);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E140) {
	__imp__sub_8214E140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E150) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E150) {
	__imp__sub_8214E150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,26188(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26188);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E158) {
	__imp__sub_8214E158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E168) {
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
	// ble cr6,0x8214e1b0
	if (!ctx.cr6.gt) goto loc_8214E1B0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26188);
loc_8214E190:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E19C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E1A0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26188, ctx.r3.u32);
	// bne 0x8214e190
	if (!ctx.cr0.eq) goto loc_8214E190;
loc_8214E1B0:
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

PPC_WEAK_FUNC(sub_8214E168) {
	__imp__sub_8214E168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,28172(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28172);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E1C8) {
	__imp__sub_8214E1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E1D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E1D8) {
	__imp__sub_8214E1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,28172(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28172);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E1E0) {
	__imp__sub_8214E1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E1F0) {
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
	// ble cr6,0x8214e238
	if (!ctx.cr6.gt) goto loc_8214E238;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28172);
loc_8214E218:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E224;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E228;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28172, ctx.r3.u32);
	// bne 0x8214e218
	if (!ctx.cr0.eq) goto loc_8214E218;
loc_8214E238:
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

PPC_WEAK_FUNC(sub_8214E1F0) {
	__imp__sub_8214E1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r4,28148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28148);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E250) {
	__imp__sub_8214E250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E260) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E260) {
	__imp__sub_8214E260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E268) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28148(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28148);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E268) {
	__imp__sub_8214E268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E280) {
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
	// ble cr6,0x8214e2c8
	if (!ctx.cr6.gt) goto loc_8214E2C8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28148(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28148);
loc_8214E2A8:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E2B4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E2B8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28148, ctx.r3.u32);
	// bne 0x8214e2a8
	if (!ctx.cr0.eq) goto loc_8214E2A8;
loc_8214E2C8:
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

PPC_WEAK_FUNC(sub_8214E280) {
	__imp__sub_8214E280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r4,26856(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26856);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E2E0) {
	__imp__sub_8214E2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E2F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E2F0) {
	__imp__sub_8214E2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,28
	ctx.r5.s64 = ctx.r4.s64 * 28;
	// lwz r4,26856(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26856);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E2F8) {
	__imp__sub_8214E2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E308) {
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
	// ble cr6,0x8214e350
	if (!ctx.cr6.gt) goto loc_8214E350;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26856(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26856);
loc_8214E330:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E33C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E340;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26856, ctx.r3.u32);
	// bne 0x8214e330
	if (!ctx.cr0.eq) goto loc_8214E330;
loc_8214E350:
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

PPC_WEAK_FUNC(sub_8214E308) {
	__imp__sub_8214E308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,25200(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E368) {
	__imp__sub_8214E368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E378) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E378) {
	__imp__sub_8214E378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,25200(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25200);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E380) {
	__imp__sub_8214E380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E390) {
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
	// ble cr6,0x8214e3d8
	if (!ctx.cr6.gt) goto loc_8214E3D8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25200);
loc_8214E3B8:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E3C4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E3C8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25200, ctx.r3.u32);
	// bne 0x8214e3b8
	if (!ctx.cr0.eq) goto loc_8214E3B8;
loc_8214E3D8:
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

PPC_WEAK_FUNC(sub_8214E390) {
	__imp__sub_8214E390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r4,26560(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26560);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E3F0) {
	__imp__sub_8214E3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E400) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E400) {
	__imp__sub_8214E400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,28
	ctx.r5.s64 = ctx.r4.s64 * 28;
	// lwz r4,26560(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26560);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E408) {
	__imp__sub_8214E408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E418) {
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
	// ble cr6,0x8214e460
	if (!ctx.cr6.gt) goto loc_8214E460;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26560(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26560);
loc_8214E440:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E44C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E450;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26560, ctx.r3.u32);
	// bne 0x8214e440
	if (!ctx.cr0.eq) goto loc_8214E440;
loc_8214E460:
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

PPC_WEAK_FUNC(sub_8214E418) {
	__imp__sub_8214E418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r4,26764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26764);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E478) {
	__imp__sub_8214E478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E488) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E488) {
	__imp__sub_8214E488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,56
	ctx.r5.s64 = ctx.r4.s64 * 56;
	// lwz r4,26764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26764);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E490) {
	__imp__sub_8214E490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E4A0) {
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
	// ble cr6,0x8214e4e8
	if (!ctx.cr6.gt) goto loc_8214E4E8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26764(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26764);
loc_8214E4C8:
	// li r5,56
	ctx.r5.s64 = 56;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E4D4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E4D8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26764(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26764, ctx.r3.u32);
	// bne 0x8214e4c8
	if (!ctx.cr0.eq) goto loc_8214E4C8;
loc_8214E4E8:
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

PPC_WEAK_FUNC(sub_8214E4A0) {
	__imp__sub_8214E4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E500) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E500) {
	__imp__sub_8214E500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E508) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E508) {
	__imp__sub_8214E508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E510) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E510) {
	__imp__sub_8214E510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E518) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E518) {
	__imp__sub_8214E518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E520) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E520) {
	__imp__sub_8214E520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E528) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E528) {
	__imp__sub_8214E528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E530) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E530) {
	__imp__sub_8214E530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E538) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E538) {
	__imp__sub_8214E538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E540) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E540) {
	__imp__sub_8214E540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E548) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E548) {
	__imp__sub_8214E548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E550) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E550) {
	__imp__sub_8214E550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E558) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E558) {
	__imp__sub_8214E558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E560) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E560) {
	__imp__sub_8214E560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E568) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E568) {
	__imp__sub_8214E568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E570) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E570) {
	__imp__sub_8214E570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E578) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E578) {
	__imp__sub_8214E578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E580) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E580) {
	__imp__sub_8214E580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E588) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E588) {
	__imp__sub_8214E588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E590) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E590) {
	__imp__sub_8214E590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E598) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E598) {
	__imp__sub_8214E598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E5A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E5A0) {
	__imp__sub_8214E5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E5A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E5A8) {
	__imp__sub_8214E5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E5B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E5B0) {
	__imp__sub_8214E5B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E5B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214E5B8) {
	__imp__sub_8214E5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,27292(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27292);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E5C0) {
	__imp__sub_8214E5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E5D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E5D0) {
	__imp__sub_8214E5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E5D8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27292(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27292);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E5D8) {
	__imp__sub_8214E5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E5F0) {
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
	// ble cr6,0x8214e638
	if (!ctx.cr6.gt) goto loc_8214E638;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27292(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27292);
loc_8214E618:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E624;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E628;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27292, ctx.r3.u32);
	// bne 0x8214e618
	if (!ctx.cr0.eq) goto loc_8214E618;
loc_8214E638:
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

PPC_WEAK_FUNC(sub_8214E5F0) {
	__imp__sub_8214E5F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,26788(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E650) {
	__imp__sub_8214E650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E660) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E660) {
	__imp__sub_8214E660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,26788(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E668) {
	__imp__sub_8214E668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E678) {
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
	// ble cr6,0x8214e6c0
	if (!ctx.cr6.gt) goto loc_8214E6C0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26788(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
loc_8214E6A0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E6AC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E6B0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26788, ctx.r3.u32);
	// bne 0x8214e6a0
	if (!ctx.cr0.eq) goto loc_8214E6A0;
loc_8214E6C0:
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

PPC_WEAK_FUNC(sub_8214E678) {
	__imp__sub_8214E678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,25680(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25680);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E6D8) {
	__imp__sub_8214E6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E6E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E6E8) {
	__imp__sub_8214E6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,25680(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25680);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E6F0) {
	__imp__sub_8214E6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E700) {
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
	// ble cr6,0x8214e748
	if (!ctx.cr6.gt) goto loc_8214E748;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25680(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25680);
loc_8214E728:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214E734;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E738;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25680, ctx.r3.u32);
	// bne 0x8214e728
	if (!ctx.cr0.eq) goto loc_8214E728;
loc_8214E748:
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

PPC_WEAK_FUNC(sub_8214E700) {
	__imp__sub_8214E700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E760) {
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
	// lwz r4,27276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27276);
	// bl 0x821778d8
	ctx.lr = 0x8214E780;
	sub_821778D8(ctx, base);
	// lwz r11,27276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27276);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214e7c8
	if (ctx.cr6.eq) goto loc_8214E7C8;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x8214E798;
	sub_82177868(ctx, base);
	// lwz r11,27276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27276);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,27276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27276);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r4,25680(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25680, ctx.r4.u32);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x821778d8
	ctx.lr = 0x8214E7C4;
	sub_821778D8(ctx, base);
	// lwz r11,27276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27276);
loc_8214E7C8:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e808
	if (ctx.cr6.eq) goto loc_8214E808;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x8214E7DC;
	sub_82177868(ctx, base);
	// lwz r11,27276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27276);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,27276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27276);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r4,26788(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26788, ctx.r4.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x8214E808;
	sub_821778D8(ctx, base);
loc_8214E808:
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

PPC_WEAK_FUNC(sub_8214E760) {
	__imp__sub_8214E760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214E81C) {
	__imp__sub_8214E81C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E820) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E820) {
	__imp__sub_8214E820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214E830;
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
	// lwz r4,27276(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27276);
	// bl 0x821778d8
	ctx.lr = 0x8214E850;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27276(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27276);
	// ble cr6,0x8214e874
	if (!ctx.cr6.gt) goto loc_8214E874;
loc_8214E85C:
	// stw r30,27276(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27276, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214e760
	ctx.lr = 0x8214E868;
	sub_8214E760(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x8214e85c
	if (!ctx.cr0.eq) goto loc_8214E85C;
loc_8214E874:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E828) {
	__imp__sub_8214E828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214E87C) {
	__imp__sub_8214E87C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E880) {
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
	// ble cr6,0x8214e8bc
	if (!ctx.cr6.gt) goto loc_8214E8BC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214E8A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214e760
	ctx.lr = 0x8214E8AC;
	sub_8214E760(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214E8B0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27276, ctx.r3.u32);
	// bne 0x8214e8a4
	if (!ctx.cr0.eq) goto loc_8214E8A4;
loc_8214E8BC:
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

PPC_WEAK_FUNC(sub_8214E880) {
	__imp__sub_8214E880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214E8D4) {
	__imp__sub_8214E8D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E8D8) {
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
	// lwz r4,26392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26392);
	// bl 0x821778d8
	ctx.lr = 0x8214E8F8;
	sub_821778D8(ctx, base);
	// lwz r11,26392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26392);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e958
	if (ctx.cr6.eq) goto loc_8214E958;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214e954
	if (!ctx.cr6.eq) goto loc_8214E954;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214E91C;
	sub_82177868(ctx, base);
	// lwz r11,26392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26392);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,26392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26392);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,27276(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27276, ctx.r11.u32);
	// bl 0x8214e760
	ctx.lr = 0x8214E940;
	sub_8214E760(ctx, base);
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
loc_8214E954:
	// bl 0x82177978
	ctx.lr = 0x8214E958;
	sub_82177978(ctx, base);
loc_8214E958:
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

PPC_WEAK_FUNC(sub_8214E8D8) {
	__imp__sub_8214E8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214E96C) {
	__imp__sub_8214E96C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E970) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E970) {
	__imp__sub_8214E970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214E980;
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
	// lwz r4,26392(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26392);
	// bl 0x821778d8
	ctx.lr = 0x8214E9A0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26392(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26392);
	// ble cr6,0x8214e9c4
	if (!ctx.cr6.gt) goto loc_8214E9C4;
loc_8214E9AC:
	// stw r30,26392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26392, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214e8d8
	ctx.lr = 0x8214E9B8;
	sub_8214E8D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8214e9ac
	if (!ctx.cr0.eq) goto loc_8214E9AC;
loc_8214E9C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214E978) {
	__imp__sub_8214E978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214E9CC) {
	__imp__sub_8214E9CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214E9D0) {
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
	// ble cr6,0x8214ea0c
	if (!ctx.cr6.gt) goto loc_8214EA0C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214E9F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214e8d8
	ctx.lr = 0x8214E9FC;
	sub_8214E8D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214EA00;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26392, ctx.r3.u32);
	// bne 0x8214e9f4
	if (!ctx.cr0.eq) goto loc_8214E9F4;
loc_8214EA0C:
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

PPC_WEAK_FUNC(sub_8214E9D0) {
	__imp__sub_8214E9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214EA24) {
	__imp__sub_8214EA24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,28364(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28364);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214EA28) {
	__imp__sub_8214EA28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EA38) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214EA38) {
	__imp__sub_8214EA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,28364(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28364);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214EA40) {
	__imp__sub_8214EA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EA50) {
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
	// ble cr6,0x8214ea98
	if (!ctx.cr6.gt) goto loc_8214EA98;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28364(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28364);
loc_8214EA78:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214EA84;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214EA88;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28364, ctx.r3.u32);
	// bne 0x8214ea78
	if (!ctx.cr0.eq) goto loc_8214EA78;
loc_8214EA98:
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

PPC_WEAK_FUNC(sub_8214EA50) {
	__imp__sub_8214EA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,26540(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26540);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214EAB0) {
	__imp__sub_8214EAB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EAC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214EAC0) {
	__imp__sub_8214EAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,26540(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26540);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214EAC8) {
	__imp__sub_8214EAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EAD8) {
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
	// ble cr6,0x8214eb20
	if (!ctx.cr6.gt) goto loc_8214EB20;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26540(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26540);
loc_8214EB00:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214EB0C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214EB10;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26540, ctx.r3.u32);
	// bne 0x8214eb00
	if (!ctx.cr0.eq) goto loc_8214EB00;
loc_8214EB20:
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

PPC_WEAK_FUNC(sub_8214EAD8) {
	__imp__sub_8214EAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EB38) {
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
	// lwz r4,27044(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27044);
	// bl 0x821778d8
	ctx.lr = 0x8214EB58;
	sub_821778D8(ctx, base);
	// lwz r11,27044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27044);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ec00
	if (ctx.cr6.eq) goto loc_8214EC00;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214ebfc
	if (!ctx.cr6.eq) goto loc_8214EBFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x8214EB7C;
	sub_82177868(ctx, base);
	// lwz r11,27044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27044);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,27044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27044);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,26540(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26540, ctx.r4.u32);
	// lhz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x8214EBE8;
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
loc_8214EBFC:
	// bl 0x82177978
	ctx.lr = 0x8214EC00;
	sub_82177978(ctx, base);
loc_8214EC00:
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

PPC_WEAK_FUNC(sub_8214EB38) {
	__imp__sub_8214EB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214EC14) {
	__imp__sub_8214EC14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EC18) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214EC18) {
	__imp__sub_8214EC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214EC28;
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
	// lwz r4,27044(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27044);
	// bl 0x821778d8
	ctx.lr = 0x8214EC48;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27044(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27044);
	// ble cr6,0x8214ec6c
	if (!ctx.cr6.gt) goto loc_8214EC6C;
loc_8214EC54:
	// stw r30,27044(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27044, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214eb38
	ctx.lr = 0x8214EC60;
	sub_8214EB38(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8214ec54
	if (!ctx.cr0.eq) goto loc_8214EC54;
loc_8214EC6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214EC20) {
	__imp__sub_8214EC20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214EC74) {
	__imp__sub_8214EC74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EC78) {
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
	// ble cr6,0x8214ecb4
	if (!ctx.cr6.gt) goto loc_8214ECB4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214EC9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214eb38
	ctx.lr = 0x8214ECA4;
	sub_8214EB38(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214ECA8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27044(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27044, ctx.r3.u32);
	// bne 0x8214ec9c
	if (!ctx.cr0.eq) goto loc_8214EC9C;
loc_8214ECB4:
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

PPC_WEAK_FUNC(sub_8214EC78) {
	__imp__sub_8214EC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214ECCC) {
	__imp__sub_8214ECCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ECD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,27944(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27944);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214ECD0) {
	__imp__sub_8214ECD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ECE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214ECE0) {
	__imp__sub_8214ECE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ECE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,27944(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27944);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214ECE8) {
	__imp__sub_8214ECE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ECF8) {
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
	// ble cr6,0x8214ed40
	if (!ctx.cr6.gt) goto loc_8214ED40;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27944(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27944);
loc_8214ED20:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214ED2C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214ED30;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27944(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27944, ctx.r3.u32);
	// bne 0x8214ed20
	if (!ctx.cr0.eq) goto loc_8214ED20;
loc_8214ED40:
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

PPC_WEAK_FUNC(sub_8214ECF8) {
	__imp__sub_8214ECF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ED58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,28160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28160);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214ED58) {
	__imp__sub_8214ED58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ED68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214ED68) {
	__imp__sub_8214ED68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ED70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,28160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28160);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214ED70) {
	__imp__sub_8214ED70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214ED80) {
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
	// ble cr6,0x8214edc8
	if (!ctx.cr6.gt) goto loc_8214EDC8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28160);
loc_8214EDA8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214EDB4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214EDB8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28160, ctx.r3.u32);
	// bne 0x8214eda8
	if (!ctx.cr0.eq) goto loc_8214EDA8;
loc_8214EDC8:
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

PPC_WEAK_FUNC(sub_8214ED80) {
	__imp__sub_8214ED80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,25108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25108);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214EDE0) {
	__imp__sub_8214EDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EDF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214EDF0) {
	__imp__sub_8214EDF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,25108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25108);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214EDF8) {
	__imp__sub_8214EDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EE08) {
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
	// ble cr6,0x8214ee50
	if (!ctx.cr6.gt) goto loc_8214EE50;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25108);
loc_8214EE30:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214EE3C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214EE40;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25108, ctx.r3.u32);
	// bne 0x8214ee30
	if (!ctx.cr0.eq) goto loc_8214EE30;
loc_8214EE50:
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

PPC_WEAK_FUNC(sub_8214EE08) {
	__imp__sub_8214EE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214EE68) {
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
	// li r5,124
	ctx.r5.s64 = 124;
	// lwz r4,27296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// bl 0x821778d8
	ctx.lr = 0x8214EE88;
	sub_821778D8(ctx, base);
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,27044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27044, ctx.r11.u32);
	// bl 0x8214eb38
	ctx.lr = 0x8214EEA0;
	sub_8214EB38(ctx, base);
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214eef8
	if (ctx.cr6.eq) goto loc_8214EEF8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214eef4
	if (!ctx.cr6.eq) goto loc_8214EEF4;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x8214EEC4;
	sub_82177868(ctx, base);
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r4,28172(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28172, ctx.r4.u32);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r5,r8,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// bl 0x821778d8
	ctx.lr = 0x8214EEF0;
	sub_821778D8(ctx, base);
	// b 0x8214eef8
	goto loc_8214EEF8;
loc_8214EEF4:
	// bl 0x82177978
	ctx.lr = 0x8214EEF8;
	sub_82177978(ctx, base);
loc_8214EEF8:
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28364, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214EF14;
	sub_821778D8(ctx, base);
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rotlwi r5,r9,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// bl 0x823b08b8
	ctx.lr = 0x8214EF2C;
	sub_823B08B8(ctx, base);
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ef80
	if (ctx.cr6.eq) goto loc_8214EF80;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214ef7c
	if (!ctx.cr6.eq) goto loc_8214EF7C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214EF50;
	sub_82177868(ctx, base);
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,26392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26392, ctx.r10.u32);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8214e978
	ctx.lr = 0x8214EF78;
	sub_8214E978(ctx, base);
	// b 0x8214ef80
	goto loc_8214EF80;
loc_8214EF7C:
	// bl 0x82177978
	ctx.lr = 0x8214EF80;
	sub_82177978(ctx, base);
loc_8214EF80:
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214efe0
	if (ctx.cr6.eq) goto loc_8214EFE0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214efdc
	if (!ctx.cr6.eq) goto loc_8214EFDC;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82177868
	ctx.lr = 0x8214EFA4;
	sub_82177868(ctx, base);
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,25108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25108, ctx.r4.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x8214EFD8;
	sub_821778D8(ctx, base);
	// b 0x8214efe0
	goto loc_8214EFE0;
loc_8214EFDC:
	// bl 0x82177978
	ctx.lr = 0x8214EFE0;
	sub_82177978(ctx, base);
loc_8214EFE0:
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27944, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8214EFFC;
	sub_821778D8(ctx, base);
	// lwz r11,27296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27296);
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823b09f0
	ctx.lr = 0x8214F018;
	sub_823B09F0(ctx, base);
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

PPC_WEAK_FUNC(sub_8214EE68) {
	__imp__sub_8214EE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214F02C) {
	__imp__sub_8214F02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F030) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F030) {
	__imp__sub_8214F030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8214F040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,124
	ctx.r5.s64 = ctx.r4.s64 * 124;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27296(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27296);
	// bl 0x821778d8
	ctx.lr = 0x8214F058;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27296(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27296);
	// ble cr6,0x8214f07c
	if (!ctx.cr6.gt) goto loc_8214F07C;
loc_8214F064:
	// stw r30,27296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27296, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8214ee68
	ctx.lr = 0x8214F070;
	sub_8214EE68(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,124
	ctx.r30.s64 = ctx.r30.s64 + 124;
	// bne 0x8214f064
	if (!ctx.cr0.eq) goto loc_8214F064;
loc_8214F07C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F038) {
	__imp__sub_8214F038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214F084) {
	__imp__sub_8214F084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F088) {
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
	// ble cr6,0x8214f0c4
	if (!ctx.cr6.gt) goto loc_8214F0C4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8214F0AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8214ee68
	ctx.lr = 0x8214F0B4;
	sub_8214EE68(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214F0B8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27296, ctx.r3.u32);
	// bne 0x8214f0ac
	if (!ctx.cr0.eq) goto loc_8214F0AC;
loc_8214F0C4:
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

PPC_WEAK_FUNC(sub_8214F088) {
	__imp__sub_8214F088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214F0DC) {
	__imp__sub_8214F0DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F0E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F0E0) {
	__imp__sub_8214F0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F0E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F0E8) {
	__imp__sub_8214F0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F0F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F0F0) {
	__imp__sub_8214F0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F0F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F0F8) {
	__imp__sub_8214F0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F100) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F100) {
	__imp__sub_8214F100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F108) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F108) {
	__imp__sub_8214F108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F110) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F110) {
	__imp__sub_8214F110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F118) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F118) {
	__imp__sub_8214F118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F120) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F120) {
	__imp__sub_8214F120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F128) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F128) {
	__imp__sub_8214F128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F130) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F130) {
	__imp__sub_8214F130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F138) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F138) {
	__imp__sub_8214F138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F140) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F140) {
	__imp__sub_8214F140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F148) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F148) {
	__imp__sub_8214F148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F150) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F150) {
	__imp__sub_8214F150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F158) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F158) {
	__imp__sub_8214F158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F160) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F160) {
	__imp__sub_8214F160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F168) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F168) {
	__imp__sub_8214F168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F170) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F170) {
	__imp__sub_8214F170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F178) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F178) {
	__imp__sub_8214F178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F180) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F180) {
	__imp__sub_8214F180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F188) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F188) {
	__imp__sub_8214F188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F190) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F190) {
	__imp__sub_8214F190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F198) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8214F198) {
	__imp__sub_8214F198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28592(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28592);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F1A0) {
	__imp__sub_8214F1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F1B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F1B0) {
	__imp__sub_8214F1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,28592(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28592);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F1B8) {
	__imp__sub_8214F1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F1C8) {
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
	// ble cr6,0x8214f210
	if (!ctx.cr6.gt) goto loc_8214F210;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28592(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28592);
loc_8214F1F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214F1FC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214F200;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28592, ctx.r3.u32);
	// bne 0x8214f1f0
	if (!ctx.cr0.eq) goto loc_8214F1F0;
loc_8214F210:
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

PPC_WEAK_FUNC(sub_8214F1C8) {
	__imp__sub_8214F1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,27796(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27796);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F228) {
	__imp__sub_8214F228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F238) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F238) {
	__imp__sub_8214F238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,27796(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27796);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F240) {
	__imp__sub_8214F240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F250) {
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
	// ble cr6,0x8214f298
	if (!ctx.cr6.gt) goto loc_8214F298;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27796(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27796);
loc_8214F278:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214F284;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214F288;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27796, ctx.r3.u32);
	// bne 0x8214f278
	if (!ctx.cr0.eq) goto loc_8214F278;
loc_8214F298:
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

PPC_WEAK_FUNC(sub_8214F250) {
	__imp__sub_8214F250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,27112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27112);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F2B0) {
	__imp__sub_8214F2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F2C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F2C0) {
	__imp__sub_8214F2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,27112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27112);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F2C8) {
	__imp__sub_8214F2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F2D8) {
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
	// ble cr6,0x8214f320
	if (!ctx.cr6.gt) goto loc_8214F320;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27112);
loc_8214F300:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214F30C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214F310;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27112, ctx.r3.u32);
	// bne 0x8214f300
	if (!ctx.cr0.eq) goto loc_8214F300;
loc_8214F320:
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

PPC_WEAK_FUNC(sub_8214F2D8) {
	__imp__sub_8214F2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25252);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F338) {
	__imp__sub_8214F338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F348) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F348) {
	__imp__sub_8214F348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25252);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F350) {
	__imp__sub_8214F350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F360) {
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
	// ble cr6,0x8214f3a8
	if (!ctx.cr6.gt) goto loc_8214F3A8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25252(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25252);
loc_8214F388:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214F394;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8214F398;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25252, ctx.r3.u32);
	// bne 0x8214f388
	if (!ctx.cr0.eq) goto loc_8214F388;
loc_8214F3A8:
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

PPC_WEAK_FUNC(sub_8214F360) {
	__imp__sub_8214F360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r4,27084(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27084);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F3C0) {
	__imp__sub_8214F3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214F3D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8214F3D0) {
	__imp__sub_8214F3D0(ctx, base);
}

