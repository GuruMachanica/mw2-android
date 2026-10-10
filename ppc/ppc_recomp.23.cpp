#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82152730) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152730) {
	__imp__sub_82152730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152738) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152738) {
	__imp__sub_82152738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152740) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152740) {
	__imp__sub_82152740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152748) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152748) {
	__imp__sub_82152748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152750) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152750) {
	__imp__sub_82152750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152758) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152758) {
	__imp__sub_82152758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26364);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152760) {
	__imp__sub_82152760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152774) {
	__imp__sub_82152774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152778) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152778) {
	__imp__sub_82152778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152780) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152780) {
	__imp__sub_82152780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152788) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152788) {
	__imp__sub_82152788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152790) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152790) {
	__imp__sub_82152790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152798) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152798) {
	__imp__sub_82152798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821527A0) {
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
	// lwz r11,26940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26940);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// stw r11,25236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25236, ctx.r11.u32);
	// bl 0x82152630
	ctx.lr = 0x821527C4;
	sub_82152630(ctx, base);
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

PPC_WEAK_FUNC(sub_821527A0) {
	__imp__sub_821527A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821527DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821527DC) {
	__imp__sub_821527DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821527E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821527E8;
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
	// lwz r31,26940(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26940);
	// ble cr6,0x82152860
	if (!ctx.cr6.gt) goto loc_82152860;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
loc_8215280C:
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// stw r31,26940(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26940, ctx.r31.u32);
	// stw r11,25236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25236, ctx.r11.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82152850
	if (ctx.cr6.eq) goto loc_82152850;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28012(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28012, ctx.r3.u32);
	// bl 0x821753d8
	ctx.lr = 0x82152834;
	sub_821753D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82152850
	if (!ctx.cr6.eq) goto loc_82152850;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28012(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28012);
	// bl 0x821753d8
	ctx.lr = 0x82152848;
	sub_821753D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215286c
	if (ctx.cr6.eq) goto loc_8215286C;
loc_82152850:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8215280c
	if (ctx.cr6.lt) goto loc_8215280C;
loc_82152860:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8215286C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821527E0) {
	__imp__sub_821527E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152878) {
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
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lwz r11,25724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25724);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,26940(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26940, ctx.r10.u32);
	// lhz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// bl 0x821527e0
	ctx.lr = 0x821528A0;
	sub_821527E0(ctx, base);
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// subfe r3,r8,r3
	temp.u8 = (~ctx.r8.u32 + ctx.r3.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82152878) {
	__imp__sub_82152878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821528B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821528C0;
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
	// lwz r31,25724(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25724);
	// ble cr6,0x8215290c
	if (!ctx.cr6.gt) goto loc_8215290C;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_821528E0:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,25724(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25724, ctx.r31.u32);
	// stw r11,26940(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26940, ctx.r11.u32);
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// bl 0x821527e0
	ctx.lr = 0x821528F4;
	sub_821527E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82152918
	if (ctx.cr6.eq) goto loc_82152918;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821528e0
	if (ctx.cr6.lt) goto loc_821528E0;
loc_8215290C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82152918:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821528B8) {
	__imp__sub_821528B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152924) {
	__imp__sub_82152924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152928) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152928) {
	__imp__sub_82152928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152930) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152930) {
	__imp__sub_82152930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152938) {
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
	// lwz r11,25244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25244);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// bne cr6,0x821529b4
	if (!ctx.cr6.eq) goto loc_821529B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821529a0
	if (ctx.cr6.eq) goto loc_821529A0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// stw r11,27136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27136, ctx.r11.u32);
	// stw r10,27756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27756, ctx.r10.u32);
	// bl 0x8214fb88
	ctx.lr = 0x82152988;
	sub_8214FB88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821529a0
	if (!ctx.cr6.eq) goto loc_821529A0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821529A0:
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
loc_821529B4:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r11,27756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27756, ctx.r11.u32);
	// bl 0x8214fb88
	ctx.lr = 0x821529C0;
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

PPC_WEAK_FUNC(sub_82152938) {
	__imp__sub_82152938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821529D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821529E0;
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
	// lwz r31,26568(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26568);
	// ble cr6,0x82152a1c
	if (!ctx.cr6.gt) goto loc_82152A1C;
loc_821529FC:
	// stw r31,26568(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26568, ctx.r31.u32);
	// bl 0x82152938
	ctx.lr = 0x82152A04;
	sub_82152938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82152a28
	if (ctx.cr6.eq) goto loc_82152A28;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821529fc
	if (ctx.cr6.lt) goto loc_821529FC;
loc_82152A1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82152A28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821529D8) {
	__imp__sub_821529D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152A34) {
	__imp__sub_82152A34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152A38) {
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
	// lwz r11,25244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25244);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,26568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26568, ctx.r11.u32);
	// bl 0x82152938
	ctx.lr = 0x82152A5C;
	sub_82152938(ctx, base);
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

PPC_WEAK_FUNC(sub_82152A38) {
	__imp__sub_82152A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152A74) {
	__imp__sub_82152A74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82152A80;
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
	// lwz r31,25244(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25244);
	// ble cr6,0x82152ac8
	if (!ctx.cr6.gt) goto loc_82152AC8;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_82152AA0:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,25244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25244, ctx.r31.u32);
	// stw r11,26568(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26568, ctx.r11.u32);
	// bl 0x82152938
	ctx.lr = 0x82152AB0;
	sub_82152938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82152ad4
	if (ctx.cr6.eq) goto loc_82152AD4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82152aa0
	if (ctx.cr6.lt) goto loc_82152AA0;
loc_82152AC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82152AD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82152A78) {
	__imp__sub_82152A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152AE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152AE0) {
	__imp__sub_82152AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152AE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152AE8) {
	__imp__sub_82152AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152AF0) {
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
	// lwz r11,25696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25696);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82152b3c
	if (ctx.cr6.eq) goto loc_82152B3C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,25724(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25724, ctx.r11.u32);
	// stw r10,26940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26940, ctx.r10.u32);
	// lhz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// bl 0x821527e0
	ctx.lr = 0x82152B30;
	sub_821527E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82152b40
	if (ctx.cr6.eq) goto loc_82152B40;
loc_82152B3C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82152B40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152AF0) {
	__imp__sub_82152AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82152B58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,25696(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25696);
	// ble cr6,0x82152bbc
	if (!ctx.cr6.gt) goto loc_82152BBC;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82152B7C:
	// stw r31,25696(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25696, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152bac
	if (ctx.cr6.eq) goto loc_82152BAC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,25724(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25724, ctx.r11.u32);
	// stw r10,26940(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26940, ctx.r10.u32);
	// lhz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// bl 0x821527e0
	ctx.lr = 0x82152BA4;
	sub_821527E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82152bc8
	if (ctx.cr6.eq) goto loc_82152BC8;
loc_82152BAC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82152b7c
	if (ctx.cr6.lt) goto loc_82152B7C;
loc_82152BBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82152BC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82152B50) {
	__imp__sub_82152B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152BD4) {
	__imp__sub_82152BD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152BD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152BD8) {
	__imp__sub_82152BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152BE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82152BE0) {
	__imp__sub_82152BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152BE8) {
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
	// li r3,33
	ctx.r3.s64 = 33;
	// lwz r11,25072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25072);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,25696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25696, ctx.r11.u32);
	// bl 0x82152b50
	ctx.lr = 0x82152C10;
	sub_82152B50(ctx, base);
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

PPC_WEAK_FUNC(sub_82152BE8) {
	__imp__sub_82152BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82152C30;
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
	// lwz r31,25072(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25072);
	// ble cr6,0x82152c7c
	if (!ctx.cr6.gt) goto loc_82152C7C;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_82152C50:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r31,25072(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25072, ctx.r31.u32);
	// li r3,33
	ctx.r3.s64 = 33;
	// stw r11,25696(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25696, ctx.r11.u32);
	// bl 0x82152b50
	ctx.lr = 0x82152C64;
	sub_82152B50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82152c88
	if (ctx.cr6.eq) goto loc_82152C88;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82152c50
	if (ctx.cr6.lt) goto loc_82152C50;
loc_82152C7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82152C88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82152C28) {
	__imp__sub_82152C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152C94) {
	__imp__sub_82152C94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152C98) {
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
	// lwz r11,27544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27544);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82152d24
	if (ctx.cr6.eq) goto loc_82152D24;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25072, ctx.r3.u32);
	// bl 0x82175480
	ctx.lr = 0x82152CD0;
	sub_82175480(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82152d24
	if (!ctx.cr6.eq) goto loc_82152D24;
	// lwz r11,25072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25072);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,25696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25696, ctx.r11.u32);
	// bl 0x82152b50
	ctx.lr = 0x82152CF0;
	sub_82152B50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82152d0c
	if (!ctx.cr6.eq) goto loc_82152D0C;
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
loc_82152D0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25072);
	// bl 0x82175480
	ctx.lr = 0x82152D18;
	sub_82175480(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82152d28
	if (ctx.cr6.eq) goto loc_82152D28;
loc_82152D24:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82152D28:
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

PPC_WEAK_FUNC(sub_82152C98) {
	__imp__sub_82152C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152D3C) {
	__imp__sub_82152D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82152D48;
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
	// lwz r31,27544(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27544);
	// ble cr6,0x82152d84
	if (!ctx.cr6.gt) goto loc_82152D84;
loc_82152D64:
	// stw r31,27544(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27544, ctx.r31.u32);
	// bl 0x82152c98
	ctx.lr = 0x82152D6C;
	sub_82152C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82152d90
	if (ctx.cr6.eq) goto loc_82152D90;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82152d64
	if (ctx.cr6.lt) goto loc_82152D64;
loc_82152D84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82152D90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82152D40) {
	__imp__sub_82152D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152D9C) {
	__imp__sub_82152D9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152DA0) {
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
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,25792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25792);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,27544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27544, ctx.r11.u32);
	// bl 0x82152c98
	ctx.lr = 0x82152DC8;
	sub_82152C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82152de4
	if (!ctx.cr6.eq) goto loc_82152DE4;
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
loc_82152DE4:
	// lwz r11,25792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25792);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82152e14
	if (ctx.cr6.eq) goto loc_82152E14;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,25244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25244, ctx.r10.u32);
	// lbz r3,57(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// bl 0x82152a78
	ctx.lr = 0x82152E08;
	sub_82152A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82152e18
	if (ctx.cr6.eq) goto loc_82152E18;
loc_82152E14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82152E18:
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

PPC_WEAK_FUNC(sub_82152DA0) {
	__imp__sub_82152DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152E2C) {
	__imp__sub_82152E2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82152E38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,25792(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25792);
	// ble cr6,0x82152eac
	if (!ctx.cr6.gt) goto loc_82152EAC;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_82152E5C:
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stw r31,25792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25792, ctx.r31.u32);
	// stw r11,27544(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27544, ctx.r11.u32);
	// bl 0x82152c98
	ctx.lr = 0x82152E6C;
	sub_82152C98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82152eb8
	if (ctx.cr6.eq) goto loc_82152EB8;
	// lwz r11,25792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25792);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82152e9c
	if (ctx.cr6.eq) goto loc_82152E9C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,25244(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25244, ctx.r10.u32);
	// lbz r3,57(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// bl 0x82152a78
	ctx.lr = 0x82152E94;
	sub_82152A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82152eb8
	if (ctx.cr6.eq) goto loc_82152EB8;
loc_82152E9C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82152e5c
	if (ctx.cr6.lt) goto loc_82152E5C;
loc_82152EAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82152EB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82152E30) {
	__imp__sub_82152E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152EC4) {
	__imp__sub_82152EC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152EC8) {
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
	// lwz r11,28604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28604);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82152f40
	if (ctx.cr6.eq) goto loc_82152F40;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25792, ctx.r3.u32);
	// bl 0x821752f8
	ctx.lr = 0x82152F00;
	sub_821752F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82152f40
	if (!ctx.cr6.eq) goto loc_82152F40;
	// bl 0x82152da0
	ctx.lr = 0x82152F0C;
	sub_82152DA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82152f28
	if (!ctx.cr6.eq) goto loc_82152F28;
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
loc_82152F28:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25792);
	// bl 0x821752f8
	ctx.lr = 0x82152F34;
	sub_821752F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82152f44
	if (ctx.cr6.eq) goto loc_82152F44;
loc_82152F40:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82152F44:
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

PPC_WEAK_FUNC(sub_82152EC8) {
	__imp__sub_82152EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82152F60;
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
	// lwz r31,28604(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28604);
	// ble cr6,0x82152f9c
	if (!ctx.cr6.gt) goto loc_82152F9C;
loc_82152F7C:
	// stw r31,28604(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28604, ctx.r31.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82152F84;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82152fa8
	if (ctx.cr6.eq) goto loc_82152FA8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82152f7c
	if (ctx.cr6.lt) goto loc_82152F7C;
loc_82152F9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82152FA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82152F58) {
	__imp__sub_82152F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82152FB4) {
	__imp__sub_82152FB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82152FB8) {
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
	// lwz r4,26864(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26864);
	// bl 0x821778d8
	ctx.lr = 0x82152FD8;
	sub_821778D8(ctx, base);
	// lwz r11,26864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26864);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x82152FEC;
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

PPC_WEAK_FUNC(sub_82152FB8) {
	__imp__sub_82152FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153000) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153000) {
	__imp__sub_82153000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82153010;
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
	// lwz r4,26864(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26864);
	// bl 0x821778d8
	ctx.lr = 0x82153028;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,26864(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26864);
	// ble cr6,0x82153068
	if (!ctx.cr6.gt) goto loc_82153068;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82153038:
	// stw r31,26864(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26864, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215304C;
	sub_821778D8(ctx, base);
	// lwz r11,26864(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26864);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x8215305C;
	sub_8214F968(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82153038
	if (!ctx.cr0.eq) goto loc_82153038;
loc_82153068:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153008) {
	__imp__sub_82153008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82153078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821530c4
	if (!ctx.cr6.gt) goto loc_821530C4;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,26864(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26864);
loc_82153094:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821530A0;
	sub_821778D8(ctx, base);
	// lwz r11,26864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26864);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x821530B0;
	sub_8214F968(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821530B4;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26864(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26864, ctx.r3.u32);
	// bne 0x82153094
	if (!ctx.cr0.eq) goto loc_82153094;
loc_821530C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153070) {
	__imp__sub_82153070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821530CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821530CC) {
	__imp__sub_821530CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821530D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26700(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26700);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821530D0) {
	__imp__sub_821530D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821530E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821530E0) {
	__imp__sub_821530E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821530E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26700(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26700);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821530E8) {
	__imp__sub_821530E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821530F8) {
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
	// ble cr6,0x82153140
	if (!ctx.cr6.gt) goto loc_82153140;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26700(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26700);
loc_82153120:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215312C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82153130;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26700(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26700, ctx.r3.u32);
	// bne 0x82153120
	if (!ctx.cr0.eq) goto loc_82153120;
loc_82153140:
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

PPC_WEAK_FUNC(sub_821530F8) {
	__imp__sub_821530F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153158) {
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
	// lwz r4,27608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27608);
	// bl 0x821778d8
	ctx.lr = 0x82153178;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82153180;
	sub_82177758(ctx, base);
	// lwz r11,27608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27608);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82153194;
	sub_82147188(ctx, base);
	// lwz r11,27608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27608);
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,26864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26864, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821531B0;
	sub_821778D8(ctx, base);
	// lwz r11,26864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26864);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x821531C4;
	sub_8214F968(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x821531C8;
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

PPC_WEAK_FUNC(sub_82153158) {
	__imp__sub_82153158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821531DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821531DC) {
	__imp__sub_821531DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821531E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821531E0) {
	__imp__sub_821531E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821531E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821531F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,27608(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27608);
	// bl 0x821778d8
	ctx.lr = 0x82153208;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r31,27608(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27608);
	// ble cr6,0x821532cc
	if (!ctx.cr6.gt) goto loc_821532CC;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82153224:
	// stw r31,27608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27608, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82153238;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82153240;
	sub_82177758(ctx, base);
	// lwz r4,27608(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27608);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82153254;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153294
	if (ctx.cr6.eq) goto loc_82153294;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82153290
	if (!ctx.cr6.eq) goto loc_82153290;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82153274;
	sub_82177868(ctx, base);
	// lwz r11,28244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8215328C;
	sub_821779A0(ctx, base);
	// b 0x82153294
	goto loc_82153294;
loc_82153290:
	// bl 0x82177978
	ctx.lr = 0x82153294;
	sub_82177978(ctx, base);
loc_82153294:
	// lwz r11,27608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27608);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26864(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26864, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821532AC;
	sub_821778D8(ctx, base);
	// lwz r11,26864(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26864);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x821532BC;
	sub_8214F968(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x821532C0;
	sub_821777E0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x82153224
	if (!ctx.cr0.eq) goto loc_82153224;
loc_821532CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821531E8) {
	__imp__sub_821531E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821532D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821532D4) {
	__imp__sub_821532D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821532D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821532E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821533b0
	if (!ctx.cr6.gt) goto loc_821533B0;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lwz r4,27608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27608);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82153308:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82153314;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8215331C;
	sub_82177758(ctx, base);
	// lwz r4,27608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27608);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82153330;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153370
	if (ctx.cr6.eq) goto loc_82153370;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215336c
	if (!ctx.cr6.eq) goto loc_8215336C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82153350;
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
	ctx.lr = 0x82153368;
	sub_821779A0(ctx, base);
	// b 0x82153370
	goto loc_82153370;
loc_8215336C:
	// bl 0x82177978
	ctx.lr = 0x82153370;
	sub_82177978(ctx, base);
loc_82153370:
	// lwz r11,27608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27608);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,26864(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26864, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82153388;
	sub_821778D8(ctx, base);
	// lwz r11,26864(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26864);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x82153398;
	sub_8214F968(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8215339C;
	sub_821777E0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821533A0;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27608, ctx.r3.u32);
	// bne 0x82153308
	if (!ctx.cr0.eq) goto loc_82153308;
loc_821533B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821532D8) {
	__imp__sub_821532D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821533B8) {
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
	// lwz r4,25032(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25032);
	// bl 0x821778d8
	ctx.lr = 0x821533DC;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x821533E4;
	sub_82177758(ctx, base);
	// lwz r3,25032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25032);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82153468
	if (ctx.cr6.eq) goto loc_82153468;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8215340c
	if (ctx.cr6.eq) goto loc_8215340C;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8215340c
	if (ctx.cr6.eq) goto loc_8215340C;
	// bl 0x82177950
	ctx.lr = 0x82153408;
	sub_82177950(ctx, base);
	// b 0x82153468
	goto loc_82153468;
loc_8215340C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82153414;
	sub_82177868(ctx, base);
	// lwz r11,25032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25032);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,25032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25032);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27608, ctx.r11.u32);
	// bne cr6,0x82153440
	if (!ctx.cr6.eq) goto loc_82153440;
	// bl 0x82177898
	ctx.lr = 0x82153438;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82153444
	goto loc_82153444;
loc_82153440:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82153444:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82153158
	ctx.lr = 0x8215344C;
	sub_82153158(ctx, base);
	// lwz r3,25032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25032);
	// bl 0x82175b20
	ctx.lr = 0x82153454;
	sub_82175B20(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82153468
	if (ctx.cr6.eq) goto loc_82153468;
	// lwz r11,25032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25032);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82153468:
	// bl 0x821777e0
	ctx.lr = 0x8215346C;
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

PPC_WEAK_FUNC(sub_821533B8) {
	__imp__sub_821533B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82153484) {
	__imp__sub_82153484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153488) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153488) {
	__imp__sub_82153488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82153498;
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
	// lwz r4,25032(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25032);
	// bl 0x821778d8
	ctx.lr = 0x821534B0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25032(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25032);
	// ble cr6,0x821534d4
	if (!ctx.cr6.gt) goto loc_821534D4;
loc_821534BC:
	// stw r30,25032(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25032, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821533b8
	ctx.lr = 0x821534C8;
	sub_821533B8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821534bc
	if (!ctx.cr0.eq) goto loc_821534BC;
loc_821534D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153490) {
	__imp__sub_82153490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821534DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821534DC) {
	__imp__sub_821534DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821534E0) {
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
	// ble cr6,0x8215351c
	if (!ctx.cr6.gt) goto loc_8215351C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82153504:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821533b8
	ctx.lr = 0x8215350C;
	sub_821533B8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82153510;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25032(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25032, ctx.r3.u32);
	// bne 0x82153504
	if (!ctx.cr0.eq) goto loc_82153504;
loc_8215351C:
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

PPC_WEAK_FUNC(sub_821534E0) {
	__imp__sub_821534E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82153534) {
	__imp__sub_82153534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153538) {
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
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,27232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27232);
	// bl 0x821778d8
	ctx.lr = 0x82153558;
	sub_821778D8(ctx, base);
	// lwz r11,27232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27232);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,25032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25032, ctx.r11.u32);
	// bl 0x821533b8
	ctx.lr = 0x82153570;
	sub_821533B8(ctx, base);
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

PPC_WEAK_FUNC(sub_82153538) {
	__imp__sub_82153538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82153584) {
	__imp__sub_82153584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153588) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153588) {
	__imp__sub_82153588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82153598;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,27232(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27232);
	// bl 0x821778d8
	ctx.lr = 0x821535B0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,27232(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27232);
	// ble cr6,0x821535f4
	if (!ctx.cr6.gt) goto loc_821535F4;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_821535C0:
	// stw r31,27232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27232, ctx.r31.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821535D4;
	sub_821778D8(ctx, base);
	// lwz r11,27232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27232);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,25032(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25032, ctx.r11.u32);
	// bl 0x821533b8
	ctx.lr = 0x821535E8;
	sub_821533B8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne 0x821535c0
	if (!ctx.cr0.eq) goto loc_821535C0;
loc_821535F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153590) {
	__imp__sub_82153590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821535FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821535FC) {
	__imp__sub_821535FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82153608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82153658
	if (!ctx.cr6.gt) goto loc_82153658;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27232(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27232);
loc_82153624:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82153630;
	sub_821778D8(ctx, base);
	// lwz r11,27232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27232);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,25032(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25032, ctx.r11.u32);
	// bl 0x821533b8
	ctx.lr = 0x82153644;
	sub_821533B8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82153648;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27232, ctx.r3.u32);
	// bne 0x82153624
	if (!ctx.cr0.eq) goto loc_82153624;
loc_82153658:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153600) {
	__imp__sub_82153600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153660) {
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
	// lwz r11,26960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26960);
	// stw r11,27756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27756, ctx.r11.u32);
	// bl 0x8214fb88
	ctx.lr = 0x82153680;
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

PPC_WEAK_FUNC(sub_82153660) {
	__imp__sub_82153660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821536A0;
	__savegprlr_26(ctx, base);
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
	// lwz r31,26960(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26960);
	// ble cr6,0x82153714
	if (!ctx.cr6.gt) goto loc_82153714;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
loc_821536C4:
	// stw r31,26960(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26960, ctx.r31.u32);
	// stw r31,27756(r26)
	PPC_STORE_U32(ctx.r26.u32 + 27756, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153704
	if (ctx.cr6.eq) goto loc_82153704;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25740(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25740, ctx.r3.u32);
	// bl 0x82175518
	ctx.lr = 0x821536E8;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82153704
	if (!ctx.cr6.eq) goto loc_82153704;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25740(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25740);
	// bl 0x82175518
	ctx.lr = 0x821536FC;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82153720
	if (ctx.cr6.eq) goto loc_82153720;
loc_82153704:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821536c4
	if (ctx.cr6.lt) goto loc_821536C4;
loc_82153714:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82153720:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153698) {
	__imp__sub_82153698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215372C) {
	__imp__sub_8215372C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153730) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82153730) {
	__imp__sub_82153730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153738) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82153738) {
	__imp__sub_82153738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153740) {
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
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lwz r11,27520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27520);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26960, ctx.r11.u32);
	// stw r11,27756(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27756, ctx.r11.u32);
	// bl 0x8214fb88
	ctx.lr = 0x8215376C;
	sub_8214FB88(ctx, base);
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// subfe r3,r8,r3
	temp.u8 = (~ctx.r8.u32 + ctx.r3.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82153740) {
	__imp__sub_82153740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82153784) {
	__imp__sub_82153784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82153790;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r30,27520(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27520);
	// ble cr6,0x82153814
	if (!ctx.cr6.gt) goto loc_82153814;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_821537BC:
	// stw r30,27520(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27520, ctx.r30.u32);
	// stw r31,26960(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26960, ctx.r31.u32);
	// stw r31,27756(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27756, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153800
	if (ctx.cr6.eq) goto loc_82153800;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25740(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25740, ctx.r3.u32);
	// bl 0x82175518
	ctx.lr = 0x821537E4;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82153800
	if (!ctx.cr6.eq) goto loc_82153800;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25740(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 25740);
	// bl 0x82175518
	ctx.lr = 0x821537F8;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82153820
	if (ctx.cr6.eq) goto loc_82153820;
loc_82153800:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x821537bc
	if (ctx.cr6.lt) goto loc_821537BC;
loc_82153814:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82153820:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153788) {
	__imp__sub_82153788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215382C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215382C) {
	__imp__sub_8215382C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153830) {
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
	// lwz r11,27000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27000);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821538c0
	if (ctx.cr6.eq) goto loc_821538C0;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27520, ctx.r3.u32);
	// bl 0x82175ba0
	ctx.lr = 0x82153868;
	sub_82175BA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821538c0
	if (!ctx.cr6.eq) goto loc_821538C0;
	// lwz r11,27520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27520);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26960, ctx.r11.u32);
	// stw r11,27756(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27756, ctx.r11.u32);
	// bl 0x8214fb88
	ctx.lr = 0x8215388C;
	sub_8214FB88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821538a8
	if (!ctx.cr6.eq) goto loc_821538A8;
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
loc_821538A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27520);
	// bl 0x82175ba0
	ctx.lr = 0x821538B4;
	sub_82175BA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x821538c4
	if (ctx.cr6.eq) goto loc_821538C4;
loc_821538C0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821538C4:
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

PPC_WEAK_FUNC(sub_82153830) {
	__imp__sub_82153830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821538D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821538E0;
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
	// lwz r31,27000(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27000);
	// ble cr6,0x8215391c
	if (!ctx.cr6.gt) goto loc_8215391C;
loc_821538FC:
	// stw r31,27000(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27000, ctx.r31.u32);
	// bl 0x82153830
	ctx.lr = 0x82153904;
	sub_82153830(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82153928
	if (ctx.cr6.eq) goto loc_82153928;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821538fc
	if (ctx.cr6.lt) goto loc_821538FC;
loc_8215391C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82153928:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821538D8) {
	__imp__sub_821538D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82153934) {
	__imp__sub_82153934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153938) {
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
	// lwz r11,27164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27164);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,27000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27000, ctx.r11.u32);
	// bl 0x82153830
	ctx.lr = 0x8215395C;
	sub_82153830(ctx, base);
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

PPC_WEAK_FUNC(sub_82153938) {
	__imp__sub_82153938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82153974) {
	__imp__sub_82153974(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82153980;
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
	// lwz r31,27164(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27164);
	// ble cr6,0x821539c8
	if (!ctx.cr6.gt) goto loc_821539C8;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_821539A0:
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// stw r31,27164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27164, ctx.r31.u32);
	// stw r11,27000(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27000, ctx.r11.u32);
	// bl 0x82153830
	ctx.lr = 0x821539B0;
	sub_82153830(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821539d4
	if (ctx.cr6.eq) goto loc_821539D4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821539a0
	if (ctx.cr6.lt) goto loc_821539A0;
loc_821539C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821539D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153978) {
	__imp__sub_82153978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821539E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,25176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25176);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821539E0) {
	__imp__sub_821539E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821539F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821539F0) {
	__imp__sub_821539F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821539F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,25176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25176);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821539F8) {
	__imp__sub_821539F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153A08) {
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
	// ble cr6,0x82153a50
	if (!ctx.cr6.gt) goto loc_82153A50;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25176(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25176);
loc_82153A30:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82153A3C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82153A40;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25176, ctx.r3.u32);
	// bne 0x82153a30
	if (!ctx.cr0.eq) goto loc_82153A30;
loc_82153A50:
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

PPC_WEAK_FUNC(sub_82153A08) {
	__imp__sub_82153A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,27184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27184);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153A68) {
	__imp__sub_82153A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153A78) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153A78) {
	__imp__sub_82153A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,27184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27184);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153A80) {
	__imp__sub_82153A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153A90) {
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
	// ble cr6,0x82153ad8
	if (!ctx.cr6.gt) goto loc_82153AD8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27184);
loc_82153AB8:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82153AC4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82153AC8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27184, ctx.r3.u32);
	// bne 0x82153ab8
	if (!ctx.cr0.eq) goto loc_82153AB8;
loc_82153AD8:
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

PPC_WEAK_FUNC(sub_82153A90) {
	__imp__sub_82153A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153AF0) {
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
	// lwz r4,27876(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27876);
	// bl 0x821778d8
	ctx.lr = 0x82153B10;
	sub_821778D8(ctx, base);
	// lwz r11,27876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27876);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,25372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82153B28;
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

PPC_WEAK_FUNC(sub_82153AF0) {
	__imp__sub_82153AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82153B3C) {
	__imp__sub_82153B3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153B40) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153B40) {
	__imp__sub_82153B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82153B50;
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
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,27876(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27876);
	// bl 0x821778d8
	ctx.lr = 0x82153B70;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,27876(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27876);
	// ble cr6,0x82153bb4
	if (!ctx.cr6.gt) goto loc_82153BB4;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82153B80:
	// stw r31,27876(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27876, ctx.r31.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82153B94;
	sub_821778D8(ctx, base);
	// lwz r11,27876(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27876);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82153BA8;
	sub_82152400(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x82153b80
	if (!ctx.cr0.eq) goto loc_82153B80;
loc_82153BB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153B48) {
	__imp__sub_82153B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82153BBC) {
	__imp__sub_82153BBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82153BC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82153c18
	if (!ctx.cr6.gt) goto loc_82153C18;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27876(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27876);
loc_82153BE4:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82153BF0;
	sub_821778D8(ctx, base);
	// lwz r11,27876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27876);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82153C04;
	sub_82152400(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82153C08;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27876(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27876, ctx.r3.u32);
	// bne 0x82153be4
	if (!ctx.cr0.eq) goto loc_82153BE4;
loc_82153C18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153BC0) {
	__imp__sub_82153BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153C20) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,25040(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25040);
	// bl 0x821778d8
	ctx.lr = 0x82153C44;
	sub_821778D8(ctx, base);
	// lwz r11,25040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25040);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x82153C58;
	sub_8214F968(ctx, base);
	// lwz r11,25040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25040);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x82153C6C;
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

PPC_WEAK_FUNC(sub_82153C20) {
	__imp__sub_82153C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82153C84) {
	__imp__sub_82153C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153C88) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153C88) {
	__imp__sub_82153C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82153C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,25040(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25040);
	// bl 0x821778d8
	ctx.lr = 0x82153CB0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,25040(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25040);
	// ble cr6,0x82153d04
	if (!ctx.cr6.gt) goto loc_82153D04;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82153CC0:
	// stw r31,25040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25040, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82153CD4;
	sub_821778D8(ctx, base);
	// lwz r11,25040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25040);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x82153CE4;
	sub_8214F968(ctx, base);
	// lwz r11,25040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25040);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28624(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x82153CF8;
	sub_8214F968(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82153cc0
	if (!ctx.cr0.eq) goto loc_82153CC0;
loc_82153D04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153C90) {
	__imp__sub_82153C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82153D0C) {
	__imp__sub_82153D0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82153D18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82153d78
	if (!ctx.cr6.gt) goto loc_82153D78;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25040(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25040);
loc_82153D34:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82153D40;
	sub_821778D8(ctx, base);
	// lwz r11,25040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25040);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x82153D50;
	sub_8214F968(ctx, base);
	// lwz r11,25040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25040);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28624, ctx.r11.u32);
	// bl 0x8214f968
	ctx.lr = 0x82153D64;
	sub_8214F968(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82153D68;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25040, ctx.r3.u32);
	// bne 0x82153d34
	if (!ctx.cr0.eq) goto loc_82153D34;
loc_82153D78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153D10) {
	__imp__sub_82153D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153D80) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82153D80) {
	__imp__sub_82153D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153D88) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82153D88) {
	__imp__sub_82153D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153D90) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82153D90) {
	__imp__sub_82153D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153D98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82153D98) {
	__imp__sub_82153D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153DA0) {
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
	// lwz r11,25972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25972);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,28604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82153DC4;
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

PPC_WEAK_FUNC(sub_82153DA0) {
	__imp__sub_82153DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82153DDC) {
	__imp__sub_82153DDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82153DE8;
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
	// lwz r31,25972(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25972);
	// ble cr6,0x82153e30
	if (!ctx.cr6.gt) goto loc_82153E30;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_82153E08:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r31,25972(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25972, ctx.r31.u32);
	// stw r11,28604(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82153E18;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82153e3c
	if (ctx.cr6.eq) goto loc_82153E3C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82153e08
	if (ctx.cr6.lt) goto loc_82153E08;
loc_82153E30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82153E3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153DE0) {
	__imp__sub_82153DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153E48) {
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
	// lwz r11,27168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27168);
	// stw r11,27756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27756, ctx.r11.u32);
	// bl 0x8214fb88
	ctx.lr = 0x82153E70;
	sub_8214FB88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82153e90
	if (ctx.cr6.eq) goto loc_82153E90;
	// lwz r11,27168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27168);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,27756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27756, ctx.r11.u32);
	// bl 0x8214fb88
	ctx.lr = 0x82153E88;
	sub_8214FB88(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82153E90:
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

PPC_WEAK_FUNC(sub_82153E48) {
	__imp__sub_82153E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82153EB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27168(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27168);
	// ble cr6,0x82153f6c
	if (!ctx.cr6.gt) goto loc_82153F6C;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82153ED4:
	// stw r31,27756(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27756, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,27168(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27168, ctx.r31.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82153f1c
	if (ctx.cr6.eq) goto loc_82153F1C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25740, ctx.r3.u32);
	// bl 0x82175518
	ctx.lr = 0x82153EFC;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82153f18
	if (!ctx.cr6.eq) goto loc_82153F18;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25740);
	// bl 0x82175518
	ctx.lr = 0x82153F10;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82153f78
	if (ctx.cr6.eq) goto loc_82153F78;
loc_82153F18:
	// lwz r11,27168(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27168);
loc_82153F1C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,27756(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27756, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82153f5c
	if (ctx.cr6.eq) goto loc_82153F5C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25740, ctx.r3.u32);
	// bl 0x82175518
	ctx.lr = 0x82153F40;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82153f5c
	if (!ctx.cr6.eq) goto loc_82153F5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25740(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25740);
	// bl 0x82175518
	ctx.lr = 0x82153F54;
	sub_82175518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82153f78
	if (ctx.cr6.eq) goto loc_82153F78;
loc_82153F5C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82153ed4
	if (ctx.cr6.lt) goto loc_82153ED4;
loc_82153F6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82153F78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153EA8) {
	__imp__sub_82153EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82153F84) {
	__imp__sub_82153F84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r4,26424(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26424);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153F88) {
	__imp__sub_82153F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153F98) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153F98) {
	__imp__sub_82153F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153FA0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26424(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26424);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82153FA0) {
	__imp__sub_82153FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82153FB8) {
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
	// ble cr6,0x82154000
	if (!ctx.cr6.gt) goto loc_82154000;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26424(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26424);
loc_82153FE0:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82153FEC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82153FF0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26424, ctx.r3.u32);
	// bne 0x82153fe0
	if (!ctx.cr0.eq) goto loc_82153FE0;
loc_82154000:
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

PPC_WEAK_FUNC(sub_82153FB8) {
	__imp__sub_82153FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154018) {
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
	// lwz r4,28240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
	// bl 0x821778d8
	ctx.lr = 0x82154038;
	sub_821778D8(ctx, base);
	// lwz r3,28240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154094
	if (ctx.cr6.eq) goto loc_82154094;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82154090
	if (!ctx.cr6.eq) goto loc_82154090;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82154058;
	sub_82177868(ctx, base);
	// lwz r11,28240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26424, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215407C;
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
loc_82154090:
	// bl 0x82177978
	ctx.lr = 0x82154094;
	sub_82177978(ctx, base);
loc_82154094:
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

PPC_WEAK_FUNC(sub_82154018) {
	__imp__sub_82154018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821540A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821540A8) {
	__imp__sub_821540A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821540B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821540B8;
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
	// lwz r4,28240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
	// bl 0x821778d8
	ctx.lr = 0x821540D0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,28240(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
	// ble cr6,0x82154148
	if (!ctx.cr6.gt) goto loc_82154148;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_821540E0:
	// stw r29,28240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28240, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821540F4;
	sub_821778D8(ctx, base);
	// lwz r3,28240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215413c
	if (ctx.cr6.eq) goto loc_8215413C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82154138
	if (!ctx.cr6.eq) goto loc_82154138;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82154114;
	sub_82177868(ctx, base);
	// lwz r11,28240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26424(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26424, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82154134;
	sub_821778D8(ctx, base);
	// b 0x8215413c
	goto loc_8215413C;
loc_82154138:
	// bl 0x82177978
	ctx.lr = 0x8215413C;
	sub_82177978(ctx, base);
loc_8215413C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x821540e0
	if (!ctx.cr0.eq) goto loc_821540E0;
loc_82154148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821540B0) {
	__imp__sub_821540B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82154158;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821541dc
	if (!ctx.cr6.gt) goto loc_821541DC;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,28240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
loc_82154174:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82154180;
	sub_821778D8(ctx, base);
	// lwz r3,28240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821541c8
	if (ctx.cr6.eq) goto loc_821541C8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821541c4
	if (!ctx.cr6.eq) goto loc_821541C4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821541A0;
	sub_82177868(ctx, base);
	// lwz r11,28240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28240);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26424(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26424, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821541C0;
	sub_821778D8(ctx, base);
	// b 0x821541c8
	goto loc_821541C8;
loc_821541C4:
	// bl 0x82177978
	ctx.lr = 0x821541C8;
	sub_82177978(ctx, base);
loc_821541C8:
	// bl 0x82177858
	ctx.lr = 0x821541CC;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28240, ctx.r3.u32);
	// bne 0x82154174
	if (!ctx.cr0.eq) goto loc_82154174;
loc_821541DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154150) {
	__imp__sub_82154150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821541E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821541E4) {
	__imp__sub_821541E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821541E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,25360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25360);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821541E8) {
	__imp__sub_821541E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821541F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821541F8) {
	__imp__sub_821541F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154200) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r4,25360(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25360);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154200) {
	__imp__sub_82154200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82154214) {
	__imp__sub_82154214(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154218) {
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
	// ble cr6,0x82154260
	if (!ctx.cr6.gt) goto loc_82154260;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25360(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25360);
loc_82154240:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215424C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82154250;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25360, ctx.r3.u32);
	// bne 0x82154240
	if (!ctx.cr0.eq) goto loc_82154240;
loc_82154260:
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

PPC_WEAK_FUNC(sub_82154218) {
	__imp__sub_82154218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154278) {
	__imp__sub_82154278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154288) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154288) {
	__imp__sub_82154288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,28104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154290) {
	__imp__sub_82154290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821542A0) {
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
	// ble cr6,0x821542e8
	if (!ctx.cr6.gt) goto loc_821542E8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28104);
loc_821542C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821542D4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821542D8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28104, ctx.r3.u32);
	// bne 0x821542c8
	if (!ctx.cr0.eq) goto loc_821542C8;
loc_821542E8:
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

PPC_WEAK_FUNC(sub_821542A0) {
	__imp__sub_821542A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,26404(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26404);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154300) {
	__imp__sub_82154300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154310) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154310) {
	__imp__sub_82154310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154318) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,26404(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26404);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154318) {
	__imp__sub_82154318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154330) {
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
	// ble cr6,0x82154378
	if (!ctx.cr6.gt) goto loc_82154378;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26404(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26404);
loc_82154358:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82154364;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82154368;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26404, ctx.r3.u32);
	// bne 0x82154358
	if (!ctx.cr0.eq) goto loc_82154358;
loc_82154378:
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

PPC_WEAK_FUNC(sub_82154330) {
	__imp__sub_82154330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154390) {
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
	// lwz r4,28348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28348);
	// bl 0x821778d8
	ctx.lr = 0x821543B0;
	sub_821778D8(ctx, base);
	// lwz r11,28348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28348);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154400
	if (ctx.cr6.eq) goto loc_82154400;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821543fc
	if (!ctx.cr6.eq) goto loc_821543FC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821543D4;
	sub_82177868(ctx, base);
	// lwz r11,28348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28348);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28348);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,28240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28240, ctx.r11.u32);
	// bl 0x82154018
	ctx.lr = 0x821543F8;
	sub_82154018(ctx, base);
	// b 0x82154400
	goto loc_82154400;
loc_821543FC:
	// bl 0x82177978
	ctx.lr = 0x82154400;
	sub_82177978(ctx, base);
loc_82154400:
	// lwz r11,28348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28348);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154460
	if (ctx.cr6.eq) goto loc_82154460;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215445c
	if (!ctx.cr6.eq) goto loc_8215445C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82154424;
	sub_82177868(ctx, base);
	// lwz r11,28348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28348);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28348);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,28104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28104, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82154448;
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
loc_8215445C:
	// bl 0x82177978
	ctx.lr = 0x82154460;
	sub_82177978(ctx, base);
loc_82154460:
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

PPC_WEAK_FUNC(sub_82154390) {
	__imp__sub_82154390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82154474) {
	__imp__sub_82154474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154478) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154478) {
	__imp__sub_82154478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82154488;
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
	// lwz r4,28348(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28348);
	// bl 0x821778d8
	ctx.lr = 0x821544A8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28348(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28348);
	// ble cr6,0x821544cc
	if (!ctx.cr6.gt) goto loc_821544CC;
loc_821544B4:
	// stw r30,28348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28348, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82154390
	ctx.lr = 0x821544C0;
	sub_82154390(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x821544b4
	if (!ctx.cr0.eq) goto loc_821544B4;
loc_821544CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154480) {
	__imp__sub_82154480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821544D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821544D4) {
	__imp__sub_821544D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821544D8) {
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
	// ble cr6,0x82154514
	if (!ctx.cr6.gt) goto loc_82154514;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821544FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82154390
	ctx.lr = 0x82154504;
	sub_82154390(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82154508;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28348, ctx.r3.u32);
	// bne 0x821544fc
	if (!ctx.cr0.eq) goto loc_821544FC;
loc_82154514:
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

PPC_WEAK_FUNC(sub_821544D8) {
	__imp__sub_821544D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215452C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215452C) {
	__imp__sub_8215452C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154530) {
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
	// lwz r4,26476(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26476);
	// bl 0x821778d8
	ctx.lr = 0x82154550;
	sub_821778D8(ctx, base);
	// lwz r11,26476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26476);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82154594
	if (ctx.cr6.eq) goto loc_82154594;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82154568;
	sub_82177868(ctx, base);
	// lwz r11,26476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26476);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,26476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26476);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,28240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28240, ctx.r10.u32);
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x821540b0
	ctx.lr = 0x82154590;
	sub_821540B0(ctx, base);
	// lwz r11,26476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26476);
loc_82154594:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821545d8
	if (ctx.cr6.eq) goto loc_821545D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821545A8;
	sub_82177868(ctx, base);
	// lwz r11,26476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26476);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,26476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26476);
	// lwz r10,28168(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28168);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,28104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28104, ctx.r4.u32);
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x821778d8
	ctx.lr = 0x821545D8;
	sub_821778D8(ctx, base);
loc_821545D8:
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

PPC_WEAK_FUNC(sub_82154530) {
	__imp__sub_82154530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821545EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821545EC) {
	__imp__sub_821545EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821545F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821545F0) {
	__imp__sub_821545F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821545F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82154600;
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
	// lwz r4,26476(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26476);
	// bl 0x821778d8
	ctx.lr = 0x82154620;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26476(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26476);
	// ble cr6,0x82154644
	if (!ctx.cr6.gt) goto loc_82154644;
loc_8215462C:
	// stw r30,26476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26476, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82154530
	ctx.lr = 0x82154638;
	sub_82154530(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x8215462c
	if (!ctx.cr0.eq) goto loc_8215462C;
loc_82154644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821545F8) {
	__imp__sub_821545F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215464C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215464C) {
	__imp__sub_8215464C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154650) {
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
	// ble cr6,0x8215468c
	if (!ctx.cr6.gt) goto loc_8215468C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82154674:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82154530
	ctx.lr = 0x8215467C;
	sub_82154530(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82154680;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26476, ctx.r3.u32);
	// bne 0x82154674
	if (!ctx.cr0.eq) goto loc_82154674;
loc_8215468C:
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

PPC_WEAK_FUNC(sub_82154650) {
	__imp__sub_82154650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821546A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821546A4) {
	__imp__sub_821546A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821546A8) {
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
	// li r5,68
	ctx.r5.s64 = 68;
	// lwz r4,28168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28168);
	// bl 0x821778d8
	ctx.lr = 0x821546C8;
	sub_821778D8(ctx, base);
	// lwz r11,28168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28168);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,26476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26476, ctx.r11.u32);
	// bl 0x82154530
	ctx.lr = 0x821546E0;
	sub_82154530(ctx, base);
	// lwz r11,28168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28168);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154750
	if (ctx.cr6.eq) goto loc_82154750;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215474c
	if (!ctx.cr6.eq) goto loc_8215474C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82154704;
	sub_82177868(ctx, base);
	// lwz r11,28168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28168);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r11,28168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28168);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r4,26424(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26424, ctx.r4.u32);
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82154738;
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
loc_8215474C:
	// bl 0x82177978
	ctx.lr = 0x82154750;
	sub_82177978(ctx, base);
loc_82154750:
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

PPC_WEAK_FUNC(sub_821546A8) {
	__imp__sub_821546A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82154764) {
	__imp__sub_82154764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154768) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154768) {
	__imp__sub_82154768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82154778;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,68
	ctx.r5.s64 = ctx.r4.s64 * 68;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28168(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28168);
	// bl 0x821778d8
	ctx.lr = 0x82154790;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28168(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28168);
	// ble cr6,0x821547b4
	if (!ctx.cr6.gt) goto loc_821547B4;
loc_8215479C:
	// stw r30,28168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28168, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821546a8
	ctx.lr = 0x821547A8;
	sub_821546A8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// bne 0x8215479c
	if (!ctx.cr0.eq) goto loc_8215479C;
loc_821547B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154770) {
	__imp__sub_82154770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821547BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821547BC) {
	__imp__sub_821547BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821547C0) {
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
	// ble cr6,0x821547fc
	if (!ctx.cr6.gt) goto loc_821547FC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821547E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821546a8
	ctx.lr = 0x821547EC;
	sub_821546A8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821547F0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28168, ctx.r3.u32);
	// bne 0x821547e4
	if (!ctx.cr0.eq) goto loc_821547E4;
loc_821547FC:
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

PPC_WEAK_FUNC(sub_821547C0) {
	__imp__sub_821547C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82154814) {
	__imp__sub_82154814(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154818) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154818) {
	__imp__sub_82154818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154820) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154820) {
	__imp__sub_82154820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154828) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154828) {
	__imp__sub_82154828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154830) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154830) {
	__imp__sub_82154830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154838) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154838) {
	__imp__sub_82154838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154840) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154840) {
	__imp__sub_82154840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154848) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154848) {
	__imp__sub_82154848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154850) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154850) {
	__imp__sub_82154850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154858) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154858) {
	__imp__sub_82154858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154860) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154860) {
	__imp__sub_82154860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154868) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154868) {
	__imp__sub_82154868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154870) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154870) {
	__imp__sub_82154870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154878) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154878) {
	__imp__sub_82154878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154880) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154880) {
	__imp__sub_82154880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154888) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154888) {
	__imp__sub_82154888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154890) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82154890) {
	__imp__sub_82154890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154898) {
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
	// lwz r4,25328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25328);
	// bl 0x821778d8
	ctx.lr = 0x821548BC;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x821548C4;
	sub_82177758(ctx, base);
	// lwz r11,25328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25328);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821548D8;
	sub_82147188(ctx, base);
	// lwz r11,25328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25328);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821548EC;
	sub_82147188(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x821548F0;
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

PPC_WEAK_FUNC(sub_82154898) {
	__imp__sub_82154898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154908) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154908) {
	__imp__sub_82154908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82154918;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mulli r5,r4,44
	ctx.r5.s64 = ctx.r4.s64 * 44;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25328(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25328);
	// bl 0x821778d8
	ctx.lr = 0x82154930;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r29,25328(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25328);
	// ble cr6,0x82154a20
	if (!ctx.cr6.gt) goto loc_82154A20;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_82154948:
	// stw r29,25328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25328, ctx.r29.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215495C;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82154964;
	sub_82177758(ctx, base);
	// lwz r4,25328(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25328);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82154978;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821549b8
	if (ctx.cr6.eq) goto loc_821549B8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821549b4
	if (!ctx.cr6.eq) goto loc_821549B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82154998;
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
	ctx.lr = 0x821549B0;
	sub_821779A0(ctx, base);
	// b 0x821549b8
	goto loc_821549B8;
loc_821549B4:
	// bl 0x82177978
	ctx.lr = 0x821549B8;
	sub_82177978(ctx, base);
loc_821549B8:
	// lwz r11,25328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25328);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821549D0;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154a10
	if (ctx.cr6.eq) goto loc_82154A10;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82154a0c
	if (!ctx.cr6.eq) goto loc_82154A0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821549F0;
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
	ctx.lr = 0x82154A08;
	sub_821779A0(ctx, base);
	// b 0x82154a10
	goto loc_82154A10;
loc_82154A0C:
	// bl 0x82177978
	ctx.lr = 0x82154A10;
	sub_82177978(ctx, base);
loc_82154A10:
	// bl 0x821777e0
	ctx.lr = 0x82154A14;
	sub_821777E0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// bne 0x82154948
	if (!ctx.cr0.eq) goto loc_82154948;
loc_82154A20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154910) {
	__imp__sub_82154910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82154A30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82154b28
	if (!ctx.cr6.gt) goto loc_82154B28;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,25328(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25328);
loc_82154A50:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82154A5C;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82154A64;
	sub_82177758(ctx, base);
	// lwz r4,25328(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25328);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82154A78;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154ab8
	if (ctx.cr6.eq) goto loc_82154AB8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82154ab4
	if (!ctx.cr6.eq) goto loc_82154AB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82154A98;
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
	ctx.lr = 0x82154AB0;
	sub_821779A0(ctx, base);
	// b 0x82154ab8
	goto loc_82154AB8;
loc_82154AB4:
	// bl 0x82177978
	ctx.lr = 0x82154AB8;
	sub_82177978(ctx, base);
loc_82154AB8:
	// lwz r11,25328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25328);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82154AD0;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154b10
	if (ctx.cr6.eq) goto loc_82154B10;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82154b0c
	if (!ctx.cr6.eq) goto loc_82154B0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82154AF0;
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
	ctx.lr = 0x82154B08;
	sub_821779A0(ctx, base);
	// b 0x82154b10
	goto loc_82154B10;
loc_82154B0C:
	// bl 0x82177978
	ctx.lr = 0x82154B10;
	sub_82177978(ctx, base);
loc_82154B10:
	// bl 0x821777e0
	ctx.lr = 0x82154B14;
	sub_821777E0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82154B18;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25328, ctx.r3.u32);
	// bne 0x82154a50
	if (!ctx.cr0.eq) goto loc_82154A50;
loc_82154B28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154A28) {
	__imp__sub_82154A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154B30) {
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
	// lwz r4,28300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28300);
	// bl 0x821778d8
	ctx.lr = 0x82154B54;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x82154B5C;
	sub_82177758(ctx, base);
	// lwz r3,28300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28300);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82154be0
	if (ctx.cr6.eq) goto loc_82154BE0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82154b84
	if (ctx.cr6.eq) goto loc_82154B84;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82154b84
	if (ctx.cr6.eq) goto loc_82154B84;
	// bl 0x82177950
	ctx.lr = 0x82154B80;
	sub_82177950(ctx, base);
	// b 0x82154be0
	goto loc_82154BE0;
loc_82154B84:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82154B8C;
	sub_82177868(ctx, base);
	// lwz r11,28300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28300);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,28300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28300);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25328, ctx.r11.u32);
	// bne cr6,0x82154bb8
	if (!ctx.cr6.eq) goto loc_82154BB8;
	// bl 0x82177898
	ctx.lr = 0x82154BB0;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82154bbc
	goto loc_82154BBC;
loc_82154BB8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82154BBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82154898
	ctx.lr = 0x82154BC4;
	sub_82154898(ctx, base);
	// lwz r3,28300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28300);
	// bl 0x82174f50
	ctx.lr = 0x82154BCC;
	sub_82174F50(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82154be0
	if (ctx.cr6.eq) goto loc_82154BE0;
	// lwz r11,28300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28300);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82154BE0:
	// bl 0x821777e0
	ctx.lr = 0x82154BE4;
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

PPC_WEAK_FUNC(sub_82154B30) {
	__imp__sub_82154B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82154BFC) {
	__imp__sub_82154BFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154C00) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154C00) {
	__imp__sub_82154C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82154C10;
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
	// lwz r4,28300(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28300);
	// bl 0x821778d8
	ctx.lr = 0x82154C28;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28300(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28300);
	// ble cr6,0x82154c4c
	if (!ctx.cr6.gt) goto loc_82154C4C;
loc_82154C34:
	// stw r30,28300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28300, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82154b30
	ctx.lr = 0x82154C40;
	sub_82154B30(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82154c34
	if (!ctx.cr0.eq) goto loc_82154C34;
loc_82154C4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154C08) {
	__imp__sub_82154C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82154C54) {
	__imp__sub_82154C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154C58) {
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
	// ble cr6,0x82154c94
	if (!ctx.cr6.gt) goto loc_82154C94;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82154C7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82154b30
	ctx.lr = 0x82154C84;
	sub_82154B30(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82154C88;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28300, ctx.r3.u32);
	// bne 0x82154c7c
	if (!ctx.cr0.eq) goto loc_82154C7C;
loc_82154C94:
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

PPC_WEAK_FUNC(sub_82154C58) {
	__imp__sub_82154C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82154CAC) {
	__imp__sub_82154CAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r4,26948(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26948);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154CB0) {
	__imp__sub_82154CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154CC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154CC0) {
	__imp__sub_82154CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154CC8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26948(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26948);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154CC8) {
	__imp__sub_82154CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154CE0) {
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
	// ble cr6,0x82154d28
	if (!ctx.cr6.gt) goto loc_82154D28;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26948(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26948);
loc_82154D08:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82154D14;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82154D18;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26948, ctx.r3.u32);
	// bne 0x82154d08
	if (!ctx.cr0.eq) goto loc_82154D08;
loc_82154D28:
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

PPC_WEAK_FUNC(sub_82154CE0) {
	__imp__sub_82154CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154D40) {
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
	// li r5,68
	ctx.r5.s64 = 68;
	// lwz r4,28508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// bl 0x821778d8
	ctx.lr = 0x82154D60;
	sub_821778D8(ctx, base);
	// lwz r11,28508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154d98
	if (ctx.cr6.eq) goto loc_82154D98;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82154D78;
	sub_82177868(ctx, base);
	// lwz r11,28508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28168, ctx.r11.u32);
	// bl 0x821546a8
	ctx.lr = 0x82154D98;
	sub_821546A8(ctx, base);
loc_82154D98:
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

PPC_WEAK_FUNC(sub_82154D40) {
	__imp__sub_82154D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82154DAC) {
	__imp__sub_82154DAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154DB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154DB0) {
	__imp__sub_82154DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82154DC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mulli r5,r4,68
	ctx.r5.s64 = ctx.r4.s64 * 68;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,28508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// bl 0x821778d8
	ctx.lr = 0x82154DD8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,28508(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// ble cr6,0x82154e3c
	if (!ctx.cr6.gt) goto loc_82154E3C;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82154DE8:
	// stw r29,28508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28508, ctx.r29.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82154DFC;
	sub_821778D8(ctx, base);
	// lwz r11,28508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154e30
	if (ctx.cr6.eq) goto loc_82154E30;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82154E14;
	sub_82177868(ctx, base);
	// lwz r11,28508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28168(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28168, ctx.r11.u32);
	// bl 0x821546a8
	ctx.lr = 0x82154E30;
	sub_821546A8(ctx, base);
loc_82154E30:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// bne 0x82154de8
	if (!ctx.cr0.eq) goto loc_82154DE8;
loc_82154E3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154DB8) {
	__imp__sub_82154DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82154E44) {
	__imp__sub_82154E44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82154E50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82154ec0
	if (!ctx.cr6.gt) goto loc_82154EC0;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,28508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
loc_82154E6C:
	// li r5,68
	ctx.r5.s64 = 68;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82154E78;
	sub_821778D8(ctx, base);
	// lwz r11,28508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82154eac
	if (ctx.cr6.eq) goto loc_82154EAC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82154E90;
	sub_82177868(ctx, base);
	// lwz r11,28508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28508);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28168, ctx.r11.u32);
	// bl 0x821546a8
	ctx.lr = 0x82154EAC;
	sub_821546A8(ctx, base);
loc_82154EAC:
	// bl 0x82177858
	ctx.lr = 0x82154EB0;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28508, ctx.r3.u32);
	// bne 0x82154e6c
	if (!ctx.cr0.eq) goto loc_82154E6C;
loc_82154EC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154E48) {
	__imp__sub_82154E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154EC8) {
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
	// li r5,72
	ctx.r5.s64 = 72;
	// lwz r4,24948(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24948);
	// bl 0x821778d8
	ctx.lr = 0x82154EE8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82154EF0;
	sub_82177758(ctx, base);
	// lwz r11,24948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24948);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82154F04;
	sub_82147188(ctx, base);
	// lwz r11,24948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24948);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82154f44
	if (ctx.cr6.eq) goto loc_82154F44;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82154F1C;
	sub_82177868(ctx, base);
	// lwz r11,24948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24948);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,24948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24948);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,28508(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28508, ctx.r10.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82154db8
	ctx.lr = 0x82154F44;
	sub_82154DB8(ctx, base);
loc_82154F44:
	// bl 0x821777e0
	ctx.lr = 0x82154F48;
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

PPC_WEAK_FUNC(sub_82154EC8) {
	__imp__sub_82154EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82154F5C) {
	__imp__sub_82154F5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154F60) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154F60) {
	__imp__sub_82154F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82154F70;
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
	// lwz r4,24948(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24948);
	// bl 0x821778d8
	ctx.lr = 0x82154F90;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,24948(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24948);
	// ble cr6,0x82154fb4
	if (!ctx.cr6.gt) goto loc_82154FB4;
loc_82154F9C:
	// stw r30,24948(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24948, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82154ec8
	ctx.lr = 0x82154FA8;
	sub_82154EC8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// bne 0x82154f9c
	if (!ctx.cr0.eq) goto loc_82154F9C;
loc_82154FB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82154F68) {
	__imp__sub_82154F68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82154FBC) {
	__imp__sub_82154FBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82154FC0) {
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
	// ble cr6,0x82154ffc
	if (!ctx.cr6.gt) goto loc_82154FFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82154FE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82154ec8
	ctx.lr = 0x82154FEC;
	sub_82154EC8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82154FF0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,24948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24948, ctx.r3.u32);
	// bne 0x82154fe4
	if (!ctx.cr0.eq) goto loc_82154FE4;
loc_82154FFC:
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

PPC_WEAK_FUNC(sub_82154FC0) {
	__imp__sub_82154FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82155014) {
	__imp__sub_82155014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155018) {
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
	// lwz r4,28520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28520);
	// bl 0x821778d8
	ctx.lr = 0x8215503C;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x82155044;
	sub_82177758(ctx, base);
	// lwz r3,28520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28520);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821550c8
	if (ctx.cr6.eq) goto loc_821550C8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8215506c
	if (ctx.cr6.eq) goto loc_8215506C;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8215506c
	if (ctx.cr6.eq) goto loc_8215506C;
	// bl 0x82177950
	ctx.lr = 0x82155068;
	sub_82177950(ctx, base);
	// b 0x821550c8
	goto loc_821550C8;
loc_8215506C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82155074;
	sub_82177868(ctx, base);
	// lwz r11,28520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28520);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,28520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28520);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,24948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24948, ctx.r11.u32);
	// bne cr6,0x821550a0
	if (!ctx.cr6.eq) goto loc_821550A0;
	// bl 0x82177898
	ctx.lr = 0x82155098;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821550a4
	goto loc_821550A4;
loc_821550A0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821550A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82154ec8
	ctx.lr = 0x821550AC;
	sub_82154EC8(ctx, base);
	// lwz r3,28520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28520);
	// bl 0x82174fe0
	ctx.lr = 0x821550B4;
	sub_82174FE0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821550c8
	if (ctx.cr6.eq) goto loc_821550C8;
	// lwz r11,28520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28520);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821550C8:
	// bl 0x821777e0
	ctx.lr = 0x821550CC;
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

PPC_WEAK_FUNC(sub_82155018) {
	__imp__sub_82155018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821550E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821550E4) {
	__imp__sub_821550E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821550E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821550E8) {
	__imp__sub_821550E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821550F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821550F8;
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
	// lwz r4,28520(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28520);
	// bl 0x821778d8
	ctx.lr = 0x82155110;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28520(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28520);
	// ble cr6,0x82155134
	if (!ctx.cr6.gt) goto loc_82155134;
loc_8215511C:
	// stw r30,28520(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28520, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155018
	ctx.lr = 0x82155128;
	sub_82155018(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8215511c
	if (!ctx.cr0.eq) goto loc_8215511C;
loc_82155134:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821550F0) {
	__imp__sub_821550F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215513C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215513C) {
	__imp__sub_8215513C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155140) {
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
	// ble cr6,0x8215517c
	if (!ctx.cr6.gt) goto loc_8215517C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82155164:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82155018
	ctx.lr = 0x8215516C;
	sub_82155018(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82155170;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28520, ctx.r3.u32);
	// bne 0x82155164
	if (!ctx.cr0.eq) goto loc_82155164;
loc_8215517C:
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

PPC_WEAK_FUNC(sub_82155140) {
	__imp__sub_82155140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82155194) {
	__imp__sub_82155194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155198) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82155198) {
	__imp__sub_82155198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821551A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821551A0) {
	__imp__sub_821551A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821551A8) {
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
	// lwz r11,26348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26348);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82155200
	if (ctx.cr6.eq) goto loc_82155200;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27660, ctx.r3.u32);
	// bl 0x82174fd0
	ctx.lr = 0x821551E0;
	sub_82174FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82155200
	if (!ctx.cr6.eq) goto loc_82155200;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27660);
	// bl 0x82174fd0
	ctx.lr = 0x821551F4;
	sub_82174FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82155204
	if (ctx.cr6.eq) goto loc_82155204;
loc_82155200:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82155204:
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

PPC_WEAK_FUNC(sub_821551A8) {
	__imp__sub_821551A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82155220;
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
	// lwz r31,26348(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26348);
	// ble cr6,0x8215528c
	if (!ctx.cr6.gt) goto loc_8215528C;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82155240:
	// stw r31,26348(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26348, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215527c
	if (ctx.cr6.eq) goto loc_8215527C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27660(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27660, ctx.r3.u32);
	// bl 0x82174fd0
	ctx.lr = 0x82155260;
	sub_82174FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215527c
	if (!ctx.cr6.eq) goto loc_8215527C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27660(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27660);
	// bl 0x82174fd0
	ctx.lr = 0x82155274;
	sub_82174FD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82155298
	if (ctx.cr6.eq) goto loc_82155298;
loc_8215527C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82155240
	if (ctx.cr6.lt) goto loc_82155240;
loc_8215528C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82155298:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155218) {
	__imp__sub_82155218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821552A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821552A4) {
	__imp__sub_821552A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821552A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821552A8) {
	__imp__sub_821552A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821552B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821552B0) {
	__imp__sub_821552B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821552B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821552B8) {
	__imp__sub_821552B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821552C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821552C0) {
	__imp__sub_821552C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821552C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821552C8) {
	__imp__sub_821552C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821552D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821552D0) {
	__imp__sub_821552D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821552D8) {
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
	// lwz r11,26308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26308);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82155330
	if (ctx.cr6.eq) goto loc_82155330;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28536, ctx.r3.u32);
	// bl 0x82175060
	ctx.lr = 0x82155310;
	sub_82175060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82155330
	if (!ctx.cr6.eq) goto loc_82155330;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28536);
	// bl 0x82175060
	ctx.lr = 0x82155324;
	sub_82175060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82155334
	if (ctx.cr6.eq) goto loc_82155334;
loc_82155330:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82155334:
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

PPC_WEAK_FUNC(sub_821552D8) {
	__imp__sub_821552D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82155350;
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
	// lwz r31,26308(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26308);
	// ble cr6,0x821553bc
	if (!ctx.cr6.gt) goto loc_821553BC;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82155370:
	// stw r31,26308(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26308, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821553ac
	if (ctx.cr6.eq) goto loc_821553AC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28536(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28536, ctx.r3.u32);
	// bl 0x82175060
	ctx.lr = 0x82155390;
	sub_82175060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821553ac
	if (!ctx.cr6.eq) goto loc_821553AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28536(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28536);
	// bl 0x82175060
	ctx.lr = 0x821553A4;
	sub_82175060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821553c8
	if (ctx.cr6.eq) goto loc_821553C8;
loc_821553AC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82155370
	if (ctx.cr6.lt) goto loc_82155370;
loc_821553BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821553C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155348) {
	__imp__sub_82155348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821553D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821553D4) {
	__imp__sub_821553D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821553D8) {
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
	// lwz r4,25608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25608);
	// bl 0x821778d8
	ctx.lr = 0x821553F8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82155400;
	sub_82177758(ctx, base);
	// lwz r11,25608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25608);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82155414;
	sub_82147188(ctx, base);
	// lwz r11,25608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25608);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215545c
	if (ctx.cr6.eq) goto loc_8215545C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215542C;
	sub_82177868(ctx, base);
	// lwz r11,25608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25608);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,25608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25608);
	// lwz r10,26024(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26024);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,27296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27296, ctx.r11.u32);
	// lhz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// bl 0x8214f038
	ctx.lr = 0x8215545C;
	sub_8214F038(ctx, base);
loc_8215545C:
	// bl 0x821777e0
	ctx.lr = 0x82155460;
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

PPC_WEAK_FUNC(sub_821553D8) {
	__imp__sub_821553D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82155474) {
	__imp__sub_82155474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155478) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155478) {
	__imp__sub_82155478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82155488;
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
	// lwz r4,25608(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25608);
	// bl 0x821778d8
	ctx.lr = 0x821554A8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25608(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25608);
	// ble cr6,0x821554cc
	if (!ctx.cr6.gt) goto loc_821554CC;
loc_821554B4:
	// stw r30,25608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25608, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821553d8
	ctx.lr = 0x821554C0;
	sub_821553D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x821554b4
	if (!ctx.cr0.eq) goto loc_821554B4;
loc_821554CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155480) {
	__imp__sub_82155480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821554D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821554D4) {
	__imp__sub_821554D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821554D8) {
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
	// ble cr6,0x82155514
	if (!ctx.cr6.gt) goto loc_82155514;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821554FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821553d8
	ctx.lr = 0x82155504;
	sub_821553D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82155508;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25608, ctx.r3.u32);
	// bne 0x821554fc
	if (!ctx.cr0.eq) goto loc_821554FC;
loc_82155514:
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

PPC_WEAK_FUNC(sub_821554D8) {
	__imp__sub_821554D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215552C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215552C) {
	__imp__sub_8215552C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155530) {
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
	// lwz r4,28516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28516);
	// bl 0x821778d8
	ctx.lr = 0x82155554;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8215555C;
	sub_82177758(ctx, base);
	// lwz r3,28516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28516);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821555e0
	if (ctx.cr6.eq) goto loc_821555E0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82155584
	if (ctx.cr6.eq) goto loc_82155584;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82155584
	if (ctx.cr6.eq) goto loc_82155584;
	// bl 0x82177950
	ctx.lr = 0x82155580;
	sub_82177950(ctx, base);
	// b 0x821555e0
	goto loc_821555E0;
loc_82155584:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215558C;
	sub_82177868(ctx, base);
	// lwz r11,28516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28516);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,28516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28516);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25608, ctx.r11.u32);
	// bne cr6,0x821555b8
	if (!ctx.cr6.eq) goto loc_821555B8;
	// bl 0x82177898
	ctx.lr = 0x821555B0;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821555bc
	goto loc_821555BC;
loc_821555B8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821555BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821553d8
	ctx.lr = 0x821555C4;
	sub_821553D8(ctx, base);
	// lwz r3,28516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28516);
	// bl 0x82175100
	ctx.lr = 0x821555CC;
	sub_82175100(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821555e0
	if (ctx.cr6.eq) goto loc_821555E0;
	// lwz r11,28516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28516);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821555E0:
	// bl 0x821777e0
	ctx.lr = 0x821555E4;
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

PPC_WEAK_FUNC(sub_82155530) {
	__imp__sub_82155530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821555FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821555FC) {
	__imp__sub_821555FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155600) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155600) {
	__imp__sub_82155600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82155610;
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
	// lwz r4,28516(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28516);
	// bl 0x821778d8
	ctx.lr = 0x82155628;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28516(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28516);
	// ble cr6,0x8215564c
	if (!ctx.cr6.gt) goto loc_8215564C;
loc_82155634:
	// stw r30,28516(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28516, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155530
	ctx.lr = 0x82155640;
	sub_82155530(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82155634
	if (!ctx.cr0.eq) goto loc_82155634;
loc_8215564C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155608) {
	__imp__sub_82155608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82155654) {
	__imp__sub_82155654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155658) {
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
	// ble cr6,0x82155694
	if (!ctx.cr6.gt) goto loc_82155694;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215567C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82155530
	ctx.lr = 0x82155684;
	sub_82155530(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82155688;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28516, ctx.r3.u32);
	// bne 0x8215567c
	if (!ctx.cr0.eq) goto loc_8215567C;
loc_82155694:
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

PPC_WEAK_FUNC(sub_82155658) {
	__imp__sub_82155658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821556AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821556AC) {
	__imp__sub_821556AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821556B0) {
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
	// lwz r4,26024(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26024);
	// bl 0x821778d8
	ctx.lr = 0x821556D0;
	sub_821778D8(ctx, base);
	// lwz r11,26024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26024);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,28516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28516, ctx.r11.u32);
	// bl 0x82155530
	ctx.lr = 0x821556E8;
	sub_82155530(ctx, base);
	// lwz r4,26024(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26024);
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// bl 0x82171cc0
	ctx.lr = 0x821556F4;
	sub_82171CC0(ctx, base);
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

PPC_WEAK_FUNC(sub_821556B0) {
	__imp__sub_821556B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155708) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155708) {
	__imp__sub_82155708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82155718;
	__savegprlr_28(ctx, base);
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
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26024(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26024);
	// bl 0x821778d8
	ctx.lr = 0x82155738;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,26024(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26024);
	// ble cr6,0x82155788
	if (!ctx.cr6.gt) goto loc_82155788;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82155748:
	// stw r31,26024(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26024, ctx.r31.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215575C;
	sub_821778D8(ctx, base);
	// lwz r11,26024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26024);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,28516(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28516, ctx.r11.u32);
	// bl 0x82155530
	ctx.lr = 0x82155770;
	sub_82155530(ctx, base);
	// lwz r4,26024(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26024);
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// bl 0x82171cc0
	ctx.lr = 0x8215577C;
	sub_82171CC0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x82155748
	if (!ctx.cr0.eq) goto loc_82155748;
loc_82155788:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155710) {
	__imp__sub_82155710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82155798;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821557f4
	if (!ctx.cr6.gt) goto loc_821557F4;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,26024(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26024);
loc_821557B4:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821557C0;
	sub_821778D8(ctx, base);
	// lwz r11,26024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26024);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,28516(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28516, ctx.r11.u32);
	// bl 0x82155530
	ctx.lr = 0x821557D4;
	sub_82155530(ctx, base);
	// lwz r4,26024(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26024);
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// bl 0x82171cc0
	ctx.lr = 0x821557E0;
	sub_82171CC0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821557E4;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26024, ctx.r3.u32);
	// bne 0x821557b4
	if (!ctx.cr0.eq) goto loc_821557B4;
loc_821557F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155790) {
	__imp__sub_82155790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821557FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821557FC) {
	__imp__sub_821557FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r4,25180(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25180);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155800) {
	__imp__sub_82155800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155810) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155810) {
	__imp__sub_82155810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82155820;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25180(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25180);
	// bl 0x821778d8
	ctx.lr = 0x82155840;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,25180(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25180);
	// ble cr6,0x8215586c
	if (!ctx.cr6.gt) goto loc_8215586C;
loc_8215584C:
	// stw r31,25180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25180, ctx.r31.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82155860;
	sub_821778D8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bne 0x8215584c
	if (!ctx.cr0.eq) goto loc_8215584C;
loc_8215586C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155818) {
	__imp__sub_82155818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82155874) {
	__imp__sub_82155874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155878) {
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
	// ble cr6,0x821558c0
	if (!ctx.cr6.gt) goto loc_821558C0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25180);
loc_821558A0:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821558AC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821558B0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25180, ctx.r3.u32);
	// bne 0x821558a0
	if (!ctx.cr0.eq) goto loc_821558A0;
loc_821558C0:
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

PPC_WEAK_FUNC(sub_82155878) {
	__imp__sub_82155878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821558D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,26784(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26784);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821558D8) {
	__imp__sub_821558D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821558E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821558E8) {
	__imp__sub_821558E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821558F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,26784(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26784);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821558F0) {
	__imp__sub_821558F0(ctx, base);
}

