#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8215B9F0) {
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
	// lwz r11,28008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28008);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215ba48
	if (ctx.cr6.eq) goto loc_8215BA48;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26636, ctx.r3.u32);
	// bl 0x821759f0
	ctx.lr = 0x8215BA28;
	sub_821759F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215ba48
	if (!ctx.cr6.eq) goto loc_8215BA48;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26636);
	// bl 0x821759f0
	ctx.lr = 0x8215BA3C;
	sub_821759F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215ba4c
	if (ctx.cr6.eq) goto loc_8215BA4C;
loc_8215BA48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215BA4C:
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

PPC_WEAK_FUNC(sub_8215B9F0) {
	__imp__sub_8215B9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215BA68;
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
	// lwz r31,28008(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28008);
	// ble cr6,0x8215bad4
	if (!ctx.cr6.gt) goto loc_8215BAD4;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8215BA88:
	// stw r31,28008(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28008, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215bac4
	if (ctx.cr6.eq) goto loc_8215BAC4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26636(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26636, ctx.r3.u32);
	// bl 0x821759f0
	ctx.lr = 0x8215BAA8;
	sub_821759F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215bac4
	if (!ctx.cr6.eq) goto loc_8215BAC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26636(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26636);
	// bl 0x821759f0
	ctx.lr = 0x8215BABC;
	sub_821759F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215bae0
	if (ctx.cr6.eq) goto loc_8215BAE0;
loc_8215BAC4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8215ba88
	if (ctx.cr6.lt) goto loc_8215BA88;
loc_8215BAD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8215BAE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BA60) {
	__imp__sub_8215BA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215BAEC) {
	__imp__sub_8215BAEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BAF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215BAF0) {
	__imp__sub_8215BAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BAF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215BAF8) {
	__imp__sub_8215BAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BB00) {
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
	// lwz r11,27948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27948);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215bb58
	if (ctx.cr6.eq) goto loc_8215BB58;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25828, ctx.r3.u32);
	// bl 0x82176450
	ctx.lr = 0x8215BB38;
	sub_82176450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215bb58
	if (!ctx.cr6.eq) goto loc_8215BB58;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25828);
	// bl 0x82176450
	ctx.lr = 0x8215BB4C;
	sub_82176450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215bb5c
	if (ctx.cr6.eq) goto loc_8215BB5C;
loc_8215BB58:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215BB5C:
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

PPC_WEAK_FUNC(sub_8215BB00) {
	__imp__sub_8215BB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215BB78;
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
	// lwz r31,27948(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27948);
	// ble cr6,0x8215bbe4
	if (!ctx.cr6.gt) goto loc_8215BBE4;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8215BB98:
	// stw r31,27948(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27948, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215bbd4
	if (ctx.cr6.eq) goto loc_8215BBD4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25828(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25828, ctx.r3.u32);
	// bl 0x82176450
	ctx.lr = 0x8215BBB8;
	sub_82176450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215bbd4
	if (!ctx.cr6.eq) goto loc_8215BBD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25828(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25828);
	// bl 0x82176450
	ctx.lr = 0x8215BBCC;
	sub_82176450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215bbf0
	if (ctx.cr6.eq) goto loc_8215BBF0;
loc_8215BBD4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8215bb98
	if (ctx.cr6.lt) goto loc_8215BB98;
loc_8215BBE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8215BBF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BB70) {
	__imp__sub_8215BB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215BBFC) {
	__imp__sub_8215BBFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r4,25776(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25776);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BC00) {
	__imp__sub_8215BC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BC10) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BC10) {
	__imp__sub_8215BC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,28
	ctx.r5.s64 = ctx.r4.s64 * 28;
	// lwz r4,25776(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25776);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BC18) {
	__imp__sub_8215BC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BC28) {
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
	// ble cr6,0x8215bc70
	if (!ctx.cr6.gt) goto loc_8215BC70;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25776(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25776);
loc_8215BC50:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215BC5C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215BC60;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25776(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25776, ctx.r3.u32);
	// bne 0x8215bc50
	if (!ctx.cr0.eq) goto loc_8215BC50;
loc_8215BC70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215BC28) {
	__imp__sub_8215BC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BC88) {
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
	// li r5,76
	ctx.r5.s64 = 76;
	// lwz r4,27624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27624);
	// bl 0x821778d8
	ctx.lr = 0x8215BCA8;
	sub_821778D8(ctx, base);
	// lwz r11,27624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27624);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x8215BCBC;
	sub_82155DF0(ctx, base);
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

PPC_WEAK_FUNC(sub_8215BC88) {
	__imp__sub_8215BC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BCD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BCD0) {
	__imp__sub_8215BCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215BCE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,76
	ctx.r5.s64 = ctx.r4.s64 * 76;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,27624(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27624);
	// bl 0x821778d8
	ctx.lr = 0x8215BCF8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,27624(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27624);
	// ble cr6,0x8215bd38
	if (!ctx.cr6.gt) goto loc_8215BD38;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8215BD08:
	// stw r31,27624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27624, ctx.r31.u32);
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215BD1C;
	sub_821778D8(ctx, base);
	// lwz r11,27624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27624);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25568(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x8215BD2C;
	sub_82155DF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// bne 0x8215bd08
	if (!ctx.cr0.eq) goto loc_8215BD08;
loc_8215BD38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BCD8) {
	__imp__sub_8215BCD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215BD48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215bd94
	if (!ctx.cr6.gt) goto loc_8215BD94;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27624(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27624);
loc_8215BD64:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215BD70;
	sub_821778D8(ctx, base);
	// lwz r11,27624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27624);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25568(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x8215BD80;
	sub_82155DF0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215BD84;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27624, ctx.r3.u32);
	// bne 0x8215bd64
	if (!ctx.cr0.eq) goto loc_8215BD64;
loc_8215BD94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BD40) {
	__imp__sub_8215BD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215BD9C) {
	__imp__sub_8215BD9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BDA0) {
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
	// lwz r4,27864(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
	// bl 0x821778d8
	ctx.lr = 0x8215BDC0;
	sub_821778D8(ctx, base);
	// lwz r3,27864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215be1c
	if (ctx.cr6.eq) goto loc_8215BE1C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215be18
	if (!ctx.cr6.eq) goto loc_8215BE18;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215BDE0;
	sub_82177868(ctx, base);
	// lwz r11,27864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26424, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215BE04;
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
loc_8215BE18:
	// bl 0x82177978
	ctx.lr = 0x8215BE1C;
	sub_82177978(ctx, base);
loc_8215BE1C:
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

PPC_WEAK_FUNC(sub_8215BDA0) {
	__imp__sub_8215BDA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BE30) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BE30) {
	__imp__sub_8215BE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215BE40;
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
	// lwz r4,27864(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
	// bl 0x821778d8
	ctx.lr = 0x8215BE58;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,27864(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
	// ble cr6,0x8215bed0
	if (!ctx.cr6.gt) goto loc_8215BED0;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8215BE68:
	// stw r29,27864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27864, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215BE7C;
	sub_821778D8(ctx, base);
	// lwz r3,27864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215bec4
	if (ctx.cr6.eq) goto loc_8215BEC4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215bec0
	if (!ctx.cr6.eq) goto loc_8215BEC0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215BE9C;
	sub_82177868(ctx, base);
	// lwz r11,27864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26424(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26424, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215BEBC;
	sub_821778D8(ctx, base);
	// b 0x8215bec4
	goto loc_8215BEC4;
loc_8215BEC0:
	// bl 0x82177978
	ctx.lr = 0x8215BEC4;
	sub_82177978(ctx, base);
loc_8215BEC4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8215be68
	if (!ctx.cr0.eq) goto loc_8215BE68;
loc_8215BED0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BE38) {
	__imp__sub_8215BE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215BEE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215bf64
	if (!ctx.cr6.gt) goto loc_8215BF64;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27864(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
loc_8215BEFC:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215BF08;
	sub_821778D8(ctx, base);
	// lwz r3,27864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215bf50
	if (ctx.cr6.eq) goto loc_8215BF50;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215bf4c
	if (!ctx.cr6.eq) goto loc_8215BF4C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215BF28;
	sub_82177868(ctx, base);
	// lwz r11,27864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27864);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26424(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26424, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215BF48;
	sub_821778D8(ctx, base);
	// b 0x8215bf50
	goto loc_8215BF50;
loc_8215BF4C:
	// bl 0x82177978
	ctx.lr = 0x8215BF50;
	sub_82177978(ctx, base);
loc_8215BF50:
	// bl 0x82177858
	ctx.lr = 0x8215BF54;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27864, ctx.r3.u32);
	// bne 0x8215befc
	if (!ctx.cr0.eq) goto loc_8215BEFC;
loc_8215BF64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BED8) {
	__imp__sub_8215BED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215BF6C) {
	__imp__sub_8215BF6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,26224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26224);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BF70) {
	__imp__sub_8215BF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BF80) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BF80) {
	__imp__sub_8215BF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BF88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26224(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26224);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215BF88) {
	__imp__sub_8215BF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215BFA0) {
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
	// ble cr6,0x8215bfe8
	if (!ctx.cr6.gt) goto loc_8215BFE8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26224(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26224);
loc_8215BFC8:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215BFD4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215BFD8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26224, ctx.r3.u32);
	// bne 0x8215bfc8
	if (!ctx.cr0.eq) goto loc_8215BFC8;
loc_8215BFE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215BFA0) {
	__imp__sub_8215BFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C000) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C000) {
	__imp__sub_8215C000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,28632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28632);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C008) {
	__imp__sub_8215C008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C018) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C018) {
	__imp__sub_8215C018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C020) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28632(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28632);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C020) {
	__imp__sub_8215C020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C038) {
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
	// ble cr6,0x8215c080
	if (!ctx.cr6.gt) goto loc_8215C080;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28632(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28632);
loc_8215C060:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215C06C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215C070;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28632, ctx.r3.u32);
	// bne 0x8215c060
	if (!ctx.cr0.eq) goto loc_8215C060;
loc_8215C080:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C038) {
	__imp__sub_8215C038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C098) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C098) {
	__imp__sub_8215C098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C0A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C0A0) {
	__imp__sub_8215C0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r4,28460(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28460);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C0A8) {
	__imp__sub_8215C0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C0B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C0B8) {
	__imp__sub_8215C0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,28
	ctx.r5.s64 = ctx.r4.s64 * 28;
	// lwz r4,28460(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28460);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C0C0) {
	__imp__sub_8215C0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C0D0) {
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
	// ble cr6,0x8215c118
	if (!ctx.cr6.gt) goto loc_8215C118;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28460(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28460);
loc_8215C0F8:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215C104;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215C108;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28460, ctx.r3.u32);
	// bne 0x8215c0f8
	if (!ctx.cr0.eq) goto loc_8215C0F8;
loc_8215C118:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C0D0) {
	__imp__sub_8215C0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C130) {
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
	// lwz r4,25844(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25844);
	// bl 0x821778d8
	ctx.lr = 0x8215C150;
	sub_821778D8(ctx, base);
	// lwz r11,25844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25844);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215c1b0
	if (ctx.cr6.eq) goto loc_8215C1B0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215c1ac
	if (!ctx.cr6.eq) goto loc_8215C1AC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215C174;
	sub_82177868(ctx, base);
	// lwz r11,25844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25844);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25844);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,28460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28460, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215C198;
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
loc_8215C1AC:
	// bl 0x82177978
	ctx.lr = 0x8215C1B0;
	sub_82177978(ctx, base);
loc_8215C1B0:
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

PPC_WEAK_FUNC(sub_8215C130) {
	__imp__sub_8215C130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215C1C4) {
	__imp__sub_8215C1C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C1C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C1C8) {
	__imp__sub_8215C1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215C1D8;
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
	// lwz r4,25844(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25844);
	// bl 0x821778d8
	ctx.lr = 0x8215C1F8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25844(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25844);
	// ble cr6,0x8215c21c
	if (!ctx.cr6.gt) goto loc_8215C21C;
loc_8215C204:
	// stw r30,25844(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25844, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215c130
	ctx.lr = 0x8215C210;
	sub_8215C130(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8215c204
	if (!ctx.cr0.eq) goto loc_8215C204;
loc_8215C21C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C1D0) {
	__imp__sub_8215C1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215C224) {
	__imp__sub_8215C224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C228) {
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
	// ble cr6,0x8215c264
	if (!ctx.cr6.gt) goto loc_8215C264;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215C24C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215c130
	ctx.lr = 0x8215C254;
	sub_8215C130(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215C258;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25844(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25844, ctx.r3.u32);
	// bne 0x8215c24c
	if (!ctx.cr0.eq) goto loc_8215C24C;
loc_8215C264:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C228) {
	__imp__sub_8215C228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215C27C) {
	__imp__sub_8215C27C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C280) {
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
	// lwz r4,27284(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27284);
	// stw r4,27108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27108, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C280) {
	__imp__sub_8215C280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C2A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C2A4) {
	__imp__sub_8215C2A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C2A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C2A8) {
	__imp__sub_8215C2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27284(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27284);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C2B0) {
	__imp__sub_8215C2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215C2C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215c308
	if (!ctx.cr6.gt) goto loc_8215C308;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27284(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27284);
loc_8215C2E4:
	// stw r4,27108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27108, ctx.r4.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215C2F4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215C2F8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27284, ctx.r3.u32);
	// bne 0x8215c2e4
	if (!ctx.cr0.eq) goto loc_8215C2E4;
loc_8215C308:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C2C0) {
	__imp__sub_8215C2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,26420(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26420);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C310) {
	__imp__sub_8215C310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C320) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C320) {
	__imp__sub_8215C320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,26420(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26420);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C328) {
	__imp__sub_8215C328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C338) {
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
	// ble cr6,0x8215c380
	if (!ctx.cr6.gt) goto loc_8215C380;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26420(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26420);
loc_8215C360:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215C36C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215C370;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26420, ctx.r3.u32);
	// bne 0x8215c360
	if (!ctx.cr0.eq) goto loc_8215C360;
loc_8215C380:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C338) {
	__imp__sub_8215C338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,68
	ctx.r5.s64 = 68;
	// lwz r4,25716(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25716);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C398) {
	__imp__sub_8215C398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C3A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C3A8) {
	__imp__sub_8215C3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,68
	ctx.r5.s64 = ctx.r4.s64 * 68;
	// lwz r4,25716(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25716);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C3B0) {
	__imp__sub_8215C3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C3C0) {
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
	// ble cr6,0x8215c408
	if (!ctx.cr6.gt) goto loc_8215C408;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25716(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25716);
loc_8215C3E8:
	// li r5,68
	ctx.r5.s64 = 68;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215C3F4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215C3F8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25716, ctx.r3.u32);
	// bne 0x8215c3e8
	if (!ctx.cr0.eq) goto loc_8215C3E8;
loc_8215C408:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C3C0) {
	__imp__sub_8215C3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C420) {
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
	// lwz r4,28100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28100);
	// bl 0x821778d8
	ctx.lr = 0x8215C440;
	sub_821778D8(ctx, base);
	// lwz r11,28100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28100);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28348, ctx.r11.u32);
	// bl 0x82154390
	ctx.lr = 0x8215C454;
	sub_82154390(ctx, base);
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

PPC_WEAK_FUNC(sub_8215C420) {
	__imp__sub_8215C420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C468) {
	PPC_FUNC_PROLOGUE();
	// li r3,127
	ctx.r3.s64 = 127;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C468) {
	__imp__sub_8215C468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215C478;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28100);
	// bl 0x821778d8
	ctx.lr = 0x8215C498;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,28100(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28100);
	// ble cr6,0x8215c4d8
	if (!ctx.cr6.gt) goto loc_8215C4D8;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8215C4A8:
	// stw r31,28100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28100, ctx.r31.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215C4BC;
	sub_821778D8(ctx, base);
	// lwz r11,28100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28100);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28348(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28348, ctx.r11.u32);
	// bl 0x82154390
	ctx.lr = 0x8215C4CC;
	sub_82154390(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// bne 0x8215c4a8
	if (!ctx.cr0.eq) goto loc_8215C4A8;
loc_8215C4D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C470) {
	__imp__sub_8215C470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215C4E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215c534
	if (!ctx.cr6.gt) goto loc_8215C534;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,28100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28100);
loc_8215C504:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215C510;
	sub_821778D8(ctx, base);
	// lwz r11,28100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28100);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28348, ctx.r11.u32);
	// bl 0x82154390
	ctx.lr = 0x8215C520;
	sub_82154390(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215C524;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28100, ctx.r3.u32);
	// bne 0x8215c504
	if (!ctx.cr0.eq) goto loc_8215C504;
loc_8215C534:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C4E0) {
	__imp__sub_8215C4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215C53C) {
	__imp__sub_8215C53C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r4,26204(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26204);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C540) {
	__imp__sub_8215C540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C550) {
	PPC_FUNC_PROLOGUE();
	// li r3,127
	ctx.r3.s64 = 127;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C550) {
	__imp__sub_8215C550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C558) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26204(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26204);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C558) {
	__imp__sub_8215C558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C570) {
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
	// ble cr6,0x8215c5b8
	if (!ctx.cr6.gt) goto loc_8215C5B8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26204(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26204);
loc_8215C598:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215C5A4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215C5A8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26204, ctx.r3.u32);
	// bne 0x8215c598
	if (!ctx.cr0.eq) goto loc_8215C598;
loc_8215C5B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C570) {
	__imp__sub_8215C570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,26072(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26072);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C5D0) {
	__imp__sub_8215C5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C5E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C5E0) {
	__imp__sub_8215C5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,26072(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26072);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C5E8) {
	__imp__sub_8215C5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C5F8) {
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
	// ble cr6,0x8215c640
	if (!ctx.cr6.gt) goto loc_8215C640;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26072(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26072);
loc_8215C620:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215C62C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215C630;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26072(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26072, ctx.r3.u32);
	// bne 0x8215c620
	if (!ctx.cr0.eq) goto loc_8215C620;
loc_8215C640:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C5F8) {
	__imp__sub_8215C5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C658) {
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
	// lwz r4,25604(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25604);
	// bl 0x821778d8
	ctx.lr = 0x8215C678;
	sub_821778D8(ctx, base);
	// lwz r11,25604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25604);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215C68C;
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

PPC_WEAK_FUNC(sub_8215C658) {
	__imp__sub_8215C658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C6A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C6A0) {
	__imp__sub_8215C6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215C6B0;
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
	// lwz r4,25604(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25604);
	// bl 0x821778d8
	ctx.lr = 0x8215C6D0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25604(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25604);
	// ble cr6,0x8215c75c
	if (!ctx.cr6.gt) goto loc_8215C75C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8215C6E8:
	// stw r30,25604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25604, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215C6FC;
	sub_821778D8(ctx, base);
	// lwz r4,25604(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25604);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215C710;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215c750
	if (ctx.cr6.eq) goto loc_8215C750;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215c74c
	if (!ctx.cr6.eq) goto loc_8215C74C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215C730;
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
	ctx.lr = 0x8215C748;
	sub_821779A0(ctx, base);
	// b 0x8215c750
	goto loc_8215C750;
loc_8215C74C:
	// bl 0x82177978
	ctx.lr = 0x8215C750;
	sub_82177978(ctx, base);
loc_8215C750:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8215c6e8
	if (!ctx.cr0.eq) goto loc_8215C6E8;
loc_8215C75C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C6A8) {
	__imp__sub_8215C6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215C764) {
	__imp__sub_8215C764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215C770;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215c804
	if (!ctx.cr6.gt) goto loc_8215C804;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,25604(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25604);
loc_8215C790:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215C79C;
	sub_821778D8(ctx, base);
	// lwz r4,25604(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25604);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215C7B0;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215c7f0
	if (ctx.cr6.eq) goto loc_8215C7F0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215c7ec
	if (!ctx.cr6.eq) goto loc_8215C7EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215C7D0;
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
	ctx.lr = 0x8215C7E8;
	sub_821779A0(ctx, base);
	// b 0x8215c7f0
	goto loc_8215C7F0;
loc_8215C7EC:
	// bl 0x82177978
	ctx.lr = 0x8215C7F0;
	sub_82177978(ctx, base);
loc_8215C7F0:
	// bl 0x82177858
	ctx.lr = 0x8215C7F4;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25604(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25604, ctx.r3.u32);
	// bne 0x8215c790
	if (!ctx.cr0.eq) goto loc_8215C790;
loc_8215C804:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C768) {
	__imp__sub_8215C768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215C80C) {
	__imp__sub_8215C80C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C810) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C810) {
	__imp__sub_8215C810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C818) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C818) {
	__imp__sub_8215C818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C820) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C820) {
	__imp__sub_8215C820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C828) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C828) {
	__imp__sub_8215C828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C830) {
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
	// lwz r11,28556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28556);
	// stw r11,26052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26052, ctx.r11.u32);
	// bl 0x821562c0
	ctx.lr = 0x8215C850;
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

PPC_WEAK_FUNC(sub_8215C830) {
	__imp__sub_8215C830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215C870;
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
	// lwz r31,28556(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28556);
	// ble cr6,0x8215c8b4
	if (!ctx.cr6.gt) goto loc_8215C8B4;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8215C890:
	// stw r31,28556(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28556, ctx.r31.u32);
	// stw r31,26052(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26052, ctx.r31.u32);
	// bl 0x821562c0
	ctx.lr = 0x8215C89C;
	sub_821562C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215c8c0
	if (ctx.cr6.eq) goto loc_8215C8C0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8215c890
	if (ctx.cr6.lt) goto loc_8215C890;
loc_8215C8B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8215C8C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215C868) {
	__imp__sub_8215C868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215C8CC) {
	__imp__sub_8215C8CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C8D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C8D0) {
	__imp__sub_8215C8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C8D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C8D8) {
	__imp__sub_8215C8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C8E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C8E0) {
	__imp__sub_8215C8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C8E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C8E8) {
	__imp__sub_8215C8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C8F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C8F0) {
	__imp__sub_8215C8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C8F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C8F8) {
	__imp__sub_8215C8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C900) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C900) {
	__imp__sub_8215C900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C908) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C908) {
	__imp__sub_8215C908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C910) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C910) {
	__imp__sub_8215C910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C918) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C918) {
	__imp__sub_8215C918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C920) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C920) {
	__imp__sub_8215C920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C928) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C928) {
	__imp__sub_8215C928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C930) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C930) {
	__imp__sub_8215C930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C938) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C938) {
	__imp__sub_8215C938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C940) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C940) {
	__imp__sub_8215C940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C948) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C948) {
	__imp__sub_8215C948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C950) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C950) {
	__imp__sub_8215C950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C958) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C958) {
	__imp__sub_8215C958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C960) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C960) {
	__imp__sub_8215C960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C968) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C968) {
	__imp__sub_8215C968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C970) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C970) {
	__imp__sub_8215C970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C978) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C978) {
	__imp__sub_8215C978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C980) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C980) {
	__imp__sub_8215C980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C988) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C988) {
	__imp__sub_8215C988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C990) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C990) {
	__imp__sub_8215C990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C998) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C998) {
	__imp__sub_8215C998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C9A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C9A0) {
	__imp__sub_8215C9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C9A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C9A8) {
	__imp__sub_8215C9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C9B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C9B0) {
	__imp__sub_8215C9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C9B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215C9B8) {
	__imp__sub_8215C9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215C9C0) {
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
	// lwz r4,25960(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25960);
	// bl 0x821778d8
	ctx.lr = 0x8215C9E0;
	sub_821778D8(ctx, base);
	// lwz r11,25960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25960);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215C9F8;
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

PPC_WEAK_FUNC(sub_8215C9C0) {
	__imp__sub_8215C9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215CA0C) {
	__imp__sub_8215CA0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CA10) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215CA10) {
	__imp__sub_8215CA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215CA20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,68
	ctx.r5.s64 = ctx.r4.s64 * 68;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25960(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25960);
	// bl 0x821778d8
	ctx.lr = 0x8215CA38;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25960(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25960);
	// ble cr6,0x8215cac8
	if (!ctx.cr6.gt) goto loc_8215CAC8;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8215CA50:
	// stw r30,25960(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25960, ctx.r30.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215CA64;
	sub_821778D8(ctx, base);
	// lwz r11,25960(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25960);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215CA7C;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215cabc
	if (ctx.cr6.eq) goto loc_8215CABC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215cab8
	if (!ctx.cr6.eq) goto loc_8215CAB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215CA9C;
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
	ctx.lr = 0x8215CAB4;
	sub_821779A0(ctx, base);
	// b 0x8215cabc
	goto loc_8215CABC;
loc_8215CAB8:
	// bl 0x82177978
	ctx.lr = 0x8215CABC;
	sub_82177978(ctx, base);
loc_8215CABC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// bne 0x8215ca50
	if (!ctx.cr0.eq) goto loc_8215CA50;
loc_8215CAC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215CA18) {
	__imp__sub_8215CA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215CAD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215cb70
	if (!ctx.cr6.gt) goto loc_8215CB70;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,25960(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25960);
loc_8215CAF8:
	// li r5,68
	ctx.r5.s64 = 68;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215CB04;
	sub_821778D8(ctx, base);
	// lwz r11,25960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25960);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215CB1C;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215cb5c
	if (ctx.cr6.eq) goto loc_8215CB5C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215cb58
	if (!ctx.cr6.eq) goto loc_8215CB58;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215CB3C;
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
	ctx.lr = 0x8215CB54;
	sub_821779A0(ctx, base);
	// b 0x8215cb5c
	goto loc_8215CB5C;
loc_8215CB58:
	// bl 0x82177978
	ctx.lr = 0x8215CB5C;
	sub_82177978(ctx, base);
loc_8215CB5C:
	// bl 0x82177858
	ctx.lr = 0x8215CB60;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25960(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25960, ctx.r3.u32);
	// bne 0x8215caf8
	if (!ctx.cr0.eq) goto loc_8215CAF8;
loc_8215CB70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215CAD0) {
	__imp__sub_8215CAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CB78) {
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
	// lwz r4,26872(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26872);
	// bl 0x821778d8
	ctx.lr = 0x8215CB98;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8215CBA0;
	sub_82177758(ctx, base);
	// lwz r11,26872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26872);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215CBB4;
	sub_82147188(ctx, base);
	// lwz r11,26872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26872);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215cbf4
	if (ctx.cr6.eq) goto loc_8215CBF4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215CBCC;
	sub_82177868(ctx, base);
	// lwz r11,26872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26872);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,26872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26872);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,25960(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25960, ctx.r10.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8215ca18
	ctx.lr = 0x8215CBF4;
	sub_8215CA18(ctx, base);
loc_8215CBF4:
	// bl 0x821777e0
	ctx.lr = 0x8215CBF8;
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

PPC_WEAK_FUNC(sub_8215CB78) {
	__imp__sub_8215CB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215CC0C) {
	__imp__sub_8215CC0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CC10) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215CC10) {
	__imp__sub_8215CC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215CC20;
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
	// lwz r4,26872(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26872);
	// bl 0x821778d8
	ctx.lr = 0x8215CC38;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26872(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26872);
	// ble cr6,0x8215cc5c
	if (!ctx.cr6.gt) goto loc_8215CC5C;
loc_8215CC44:
	// stw r30,26872(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26872, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215cb78
	ctx.lr = 0x8215CC50;
	sub_8215CB78(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x8215cc44
	if (!ctx.cr0.eq) goto loc_8215CC44;
loc_8215CC5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215CC18) {
	__imp__sub_8215CC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215CC64) {
	__imp__sub_8215CC64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CC68) {
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
	// ble cr6,0x8215cca4
	if (!ctx.cr6.gt) goto loc_8215CCA4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215CC8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215cb78
	ctx.lr = 0x8215CC94;
	sub_8215CB78(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215CC98;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26872(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26872, ctx.r3.u32);
	// bne 0x8215cc8c
	if (!ctx.cr0.eq) goto loc_8215CC8C;
loc_8215CCA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215CC68) {
	__imp__sub_8215CC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215CCBC) {
	__imp__sub_8215CCBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CCC0) {
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
	// lwz r4,24992(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24992);
	// bl 0x821778d8
	ctx.lr = 0x8215CCE4;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8215CCEC;
	sub_82177758(ctx, base);
	// lwz r3,24992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24992);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215cd70
	if (ctx.cr6.eq) goto loc_8215CD70;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8215cd14
	if (ctx.cr6.eq) goto loc_8215CD14;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8215cd14
	if (ctx.cr6.eq) goto loc_8215CD14;
	// bl 0x82177950
	ctx.lr = 0x8215CD10;
	sub_82177950(ctx, base);
	// b 0x8215cd70
	goto loc_8215CD70;
loc_8215CD14:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215CD1C;
	sub_82177868(ctx, base);
	// lwz r11,24992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24992);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,24992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24992);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26872, ctx.r11.u32);
	// bne cr6,0x8215cd48
	if (!ctx.cr6.eq) goto loc_8215CD48;
	// bl 0x82177898
	ctx.lr = 0x8215CD40;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8215cd4c
	goto loc_8215CD4C;
loc_8215CD48:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8215CD4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215cb78
	ctx.lr = 0x8215CD54;
	sub_8215CB78(ctx, base);
	// lwz r3,24992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24992);
	// bl 0x821757c0
	ctx.lr = 0x8215CD5C;
	sub_821757C0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215cd70
	if (ctx.cr6.eq) goto loc_8215CD70;
	// lwz r11,24992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24992);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8215CD70:
	// bl 0x821777e0
	ctx.lr = 0x8215CD74;
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

PPC_WEAK_FUNC(sub_8215CCC0) {
	__imp__sub_8215CCC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215CD8C) {
	__imp__sub_8215CD8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CD90) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215CD90) {
	__imp__sub_8215CD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215CDA0;
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
	// lwz r4,24992(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24992);
	// bl 0x821778d8
	ctx.lr = 0x8215CDB8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,24992(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24992);
	// ble cr6,0x8215cddc
	if (!ctx.cr6.gt) goto loc_8215CDDC;
loc_8215CDC4:
	// stw r30,24992(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24992, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215ccc0
	ctx.lr = 0x8215CDD0;
	sub_8215CCC0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8215cdc4
	if (!ctx.cr0.eq) goto loc_8215CDC4;
loc_8215CDDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215CD98) {
	__imp__sub_8215CD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215CDE4) {
	__imp__sub_8215CDE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CDE8) {
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
	// ble cr6,0x8215ce24
	if (!ctx.cr6.gt) goto loc_8215CE24;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215CE0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215ccc0
	ctx.lr = 0x8215CE14;
	sub_8215CCC0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215CE18;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,24992(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24992, ctx.r3.u32);
	// bne 0x8215ce0c
	if (!ctx.cr0.eq) goto loc_8215CE0C;
loc_8215CE24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215CDE8) {
	__imp__sub_8215CDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215CE3C) {
	__imp__sub_8215CE3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CE40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215CE40) {
	__imp__sub_8215CE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CE48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215CE48) {
	__imp__sub_8215CE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CE50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215CE50) {
	__imp__sub_8215CE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CE58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215CE58) {
	__imp__sub_8215CE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CE60) {
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
	// lwz r11,27920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27920);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215ceb8
	if (ctx.cr6.eq) goto loc_8215CEB8;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28052, ctx.r3.u32);
	// bl 0x82175840
	ctx.lr = 0x8215CE98;
	sub_82175840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215ceb8
	if (!ctx.cr6.eq) goto loc_8215CEB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28052);
	// bl 0x82175840
	ctx.lr = 0x8215CEAC;
	sub_82175840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215cebc
	if (ctx.cr6.eq) goto loc_8215CEBC;
loc_8215CEB8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215CEBC:
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

PPC_WEAK_FUNC(sub_8215CE60) {
	__imp__sub_8215CE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215CED8;
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
	// lwz r31,27920(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27920);
	// ble cr6,0x8215cf44
	if (!ctx.cr6.gt) goto loc_8215CF44;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8215CEF8:
	// stw r31,27920(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27920, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215cf34
	if (ctx.cr6.eq) goto loc_8215CF34;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28052(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28052, ctx.r3.u32);
	// bl 0x82175840
	ctx.lr = 0x8215CF18;
	sub_82175840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215cf34
	if (!ctx.cr6.eq) goto loc_8215CF34;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28052(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28052);
	// bl 0x82175840
	ctx.lr = 0x8215CF2C;
	sub_82175840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215cf50
	if (ctx.cr6.eq) goto loc_8215CF50;
loc_8215CF34:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8215cef8
	if (ctx.cr6.lt) goto loc_8215CEF8;
loc_8215CF44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8215CF50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215CED0) {
	__imp__sub_8215CED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215CF5C) {
	__imp__sub_8215CF5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CF60) {
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
	// lwz r4,25344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// bl 0x821778d8
	ctx.lr = 0x8215CF80;
	sub_821778D8(ctx, base);
	// lwz r11,25344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25344);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215CF94;
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

PPC_WEAK_FUNC(sub_8215CF60) {
	__imp__sub_8215CF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CFA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215CFA8) {
	__imp__sub_8215CFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215CFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215CFB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25344(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// bl 0x821778d8
	ctx.lr = 0x8215CFD0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25344(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// ble cr6,0x8215d05c
	if (!ctx.cr6.gt) goto loc_8215D05C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8215CFE8:
	// stw r30,25344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25344, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215CFFC;
	sub_821778D8(ctx, base);
	// lwz r4,25344(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25344);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215D010;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d050
	if (ctx.cr6.eq) goto loc_8215D050;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215d04c
	if (!ctx.cr6.eq) goto loc_8215D04C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215D030;
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
	ctx.lr = 0x8215D048;
	sub_821779A0(ctx, base);
	// b 0x8215d050
	goto loc_8215D050;
loc_8215D04C:
	// bl 0x82177978
	ctx.lr = 0x8215D050;
	sub_82177978(ctx, base);
loc_8215D050:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8215cfe8
	if (!ctx.cr0.eq) goto loc_8215CFE8;
loc_8215D05C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215CFB0) {
	__imp__sub_8215CFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215D064) {
	__imp__sub_8215D064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215D070;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215d104
	if (!ctx.cr6.gt) goto loc_8215D104;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,25344(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25344);
loc_8215D090:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215D09C;
	sub_821778D8(ctx, base);
	// lwz r4,25344(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25344);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215D0B0;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d0f0
	if (ctx.cr6.eq) goto loc_8215D0F0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215d0ec
	if (!ctx.cr6.eq) goto loc_8215D0EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215D0D0;
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
	ctx.lr = 0x8215D0E8;
	sub_821779A0(ctx, base);
	// b 0x8215d0f0
	goto loc_8215D0F0;
loc_8215D0EC:
	// bl 0x82177978
	ctx.lr = 0x8215D0F0;
	sub_82177978(ctx, base);
loc_8215D0F0:
	// bl 0x82177858
	ctx.lr = 0x8215D0F4;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25344, ctx.r3.u32);
	// bne 0x8215d090
	if (!ctx.cr0.eq) goto loc_8215D090;
loc_8215D104:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D068) {
	__imp__sub_8215D068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215D10C) {
	__imp__sub_8215D10C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25936(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25936);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D110) {
	__imp__sub_8215D110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D120) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D120) {
	__imp__sub_8215D120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25936(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25936);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D128) {
	__imp__sub_8215D128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D138) {
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
	// ble cr6,0x8215d180
	if (!ctx.cr6.gt) goto loc_8215D180;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25936(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25936);
loc_8215D160:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215D16C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215D170;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25936(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25936, ctx.r3.u32);
	// bne 0x8215d160
	if (!ctx.cr0.eq) goto loc_8215D160;
loc_8215D180:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215D138) {
	__imp__sub_8215D138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D198) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D198) {
	__imp__sub_8215D198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26360);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D1A0) {
	__imp__sub_8215D1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D1B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D1B0) {
	__imp__sub_8215D1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26360);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D1B8) {
	__imp__sub_8215D1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D1C8) {
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
	// ble cr6,0x8215d210
	if (!ctx.cr6.gt) goto loc_8215D210;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26360(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26360);
loc_8215D1F0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215D1FC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215D200;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26360, ctx.r3.u32);
	// bne 0x8215d1f0
	if (!ctx.cr0.eq) goto loc_8215D1F0;
loc_8215D210:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215D1C8) {
	__imp__sub_8215D1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D228) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D228) {
	__imp__sub_8215D228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,24984(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24984);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D230) {
	__imp__sub_8215D230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D240) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D240) {
	__imp__sub_8215D240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,24984(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24984);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D248) {
	__imp__sub_8215D248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D258) {
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
	// ble cr6,0x8215d2a0
	if (!ctx.cr6.gt) goto loc_8215D2A0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,24984(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24984);
loc_8215D280:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215D28C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215D290;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,24984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24984, ctx.r3.u32);
	// bne 0x8215d280
	if (!ctx.cr0.eq) goto loc_8215D280;
loc_8215D2A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215D258) {
	__imp__sub_8215D258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D2B8) {
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
	// lwz r4,25876(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25876);
	// bl 0x821778d8
	ctx.lr = 0x8215D2D8;
	sub_821778D8(ctx, base);
	// lwz r11,25876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25876);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215D2F0;
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

PPC_WEAK_FUNC(sub_8215D2B8) {
	__imp__sub_8215D2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215D304) {
	__imp__sub_8215D304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D308) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D308) {
	__imp__sub_8215D308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215D318;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25876(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25876);
	// bl 0x821778d8
	ctx.lr = 0x8215D330;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25876(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25876);
	// ble cr6,0x8215d3c0
	if (!ctx.cr6.gt) goto loc_8215D3C0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8215D348:
	// stw r30,25876(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25876, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215D35C;
	sub_821778D8(ctx, base);
	// lwz r11,25876(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25876);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215D374;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d3b4
	if (ctx.cr6.eq) goto loc_8215D3B4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215d3b0
	if (!ctx.cr6.eq) goto loc_8215D3B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215D394;
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
	ctx.lr = 0x8215D3AC;
	sub_821779A0(ctx, base);
	// b 0x8215d3b4
	goto loc_8215D3B4;
loc_8215D3B0:
	// bl 0x82177978
	ctx.lr = 0x8215D3B4;
	sub_82177978(ctx, base);
loc_8215D3B4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8215d348
	if (!ctx.cr0.eq) goto loc_8215D348;
loc_8215D3C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D310) {
	__imp__sub_8215D310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215D3D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215d468
	if (!ctx.cr6.gt) goto loc_8215D468;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,25876(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25876);
loc_8215D3F0:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215D3FC;
	sub_821778D8(ctx, base);
	// lwz r11,25876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25876);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215D414;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d454
	if (ctx.cr6.eq) goto loc_8215D454;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215d450
	if (!ctx.cr6.eq) goto loc_8215D450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215D434;
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
	ctx.lr = 0x8215D44C;
	sub_821779A0(ctx, base);
	// b 0x8215d454
	goto loc_8215D454;
loc_8215D450:
	// bl 0x82177978
	ctx.lr = 0x8215D454;
	sub_82177978(ctx, base);
loc_8215D454:
	// bl 0x82177858
	ctx.lr = 0x8215D458;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25876(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25876, ctx.r3.u32);
	// bne 0x8215d3f0
	if (!ctx.cr0.eq) goto loc_8215D3F0;
loc_8215D468:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D3C8) {
	__imp__sub_8215D3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D470) {
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
	// lwz r4,25748(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
	// bl 0x821778d8
	ctx.lr = 0x8215D494;
	sub_821778D8(ctx, base);
	// lwz r11,25748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d4e8
	if (ctx.cr6.eq) goto loc_8215D4E8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215D4AC;
	sub_82177868(ctx, base);
	// lwz r11,25748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25876(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25876, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215D4D0;
	sub_821778D8(ctx, base);
	// lwz r11,25876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25876);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215D4E8;
	sub_82147188(ctx, base);
loc_8215D4E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215D470) {
	__imp__sub_8215D470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D500) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D500) {
	__imp__sub_8215D500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215D510;
	__savegprlr_27(ctx, base);
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
	// lwz r4,25748(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
	// bl 0x821778d8
	ctx.lr = 0x8215D528;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r28,25748(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
	// ble cr6,0x8215d5ac
	if (!ctx.cr6.gt) goto loc_8215D5AC;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215D540:
	// stw r28,25748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25748, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215D554;
	sub_821778D8(ctx, base);
	// lwz r11,25748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d5a0
	if (ctx.cr6.eq) goto loc_8215D5A0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215D56C;
	sub_82177868(ctx, base);
	// lwz r11,25748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25876(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25876, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215D58C;
	sub_821778D8(ctx, base);
	// lwz r11,25876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25876);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215D5A0;
	sub_82147188(ctx, base);
loc_8215D5A0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8215d540
	if (!ctx.cr0.eq) goto loc_8215D540;
loc_8215D5AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D508) {
	__imp__sub_8215D508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215D5B4) {
	__imp__sub_8215D5B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215D5C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215d64c
	if (!ctx.cr6.gt) goto loc_8215D64C;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,25748(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
loc_8215D5E0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215D5EC;
	sub_821778D8(ctx, base);
	// lwz r11,25748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d638
	if (ctx.cr6.eq) goto loc_8215D638;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215D604;
	sub_82177868(ctx, base);
	// lwz r11,25748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25748);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25876(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25876, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215D624;
	sub_821778D8(ctx, base);
	// lwz r11,25876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25876);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215D638;
	sub_82147188(ctx, base);
loc_8215D638:
	// bl 0x82177858
	ctx.lr = 0x8215D63C;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25748, ctx.r3.u32);
	// bne 0x8215d5e0
	if (!ctx.cr0.eq) goto loc_8215D5E0;
loc_8215D64C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D5B8) {
	__imp__sub_8215D5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215D654) {
	__imp__sub_8215D654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D658) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D658) {
	__imp__sub_8215D658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D660) {
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
	// lwz r4,24964(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
	// bl 0x821778d8
	ctx.lr = 0x8215D680;
	sub_821778D8(ctx, base);
	// lwz r11,24964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d6c0
	if (ctx.cr6.eq) goto loc_8215D6C0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215D698;
	sub_82177868(ctx, base);
	// lwz r11,24964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,24964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,25748(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25748, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8215d508
	ctx.lr = 0x8215D6C0;
	sub_8215D508(ctx, base);
loc_8215D6C0:
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

PPC_WEAK_FUNC(sub_8215D660) {
	__imp__sub_8215D660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215D6D4) {
	__imp__sub_8215D6D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D6D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D6D8) {
	__imp__sub_8215D6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215D6E8;
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
	// lwz r4,24964(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
	// bl 0x821778d8
	ctx.lr = 0x8215D700;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,24964(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
	// ble cr6,0x8215d76c
	if (!ctx.cr6.gt) goto loc_8215D76C;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8215D710:
	// stw r29,24964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24964, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215D724;
	sub_821778D8(ctx, base);
	// lwz r11,24964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d760
	if (ctx.cr6.eq) goto loc_8215D760;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215D73C;
	sub_82177868(ctx, base);
	// lwz r11,24964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,24964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,25748(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25748, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8215d508
	ctx.lr = 0x8215D760;
	sub_8215D508(ctx, base);
loc_8215D760:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8215d710
	if (!ctx.cr0.eq) goto loc_8215D710;
loc_8215D76C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D6E0) {
	__imp__sub_8215D6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215D774) {
	__imp__sub_8215D774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215D780;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215d7f8
	if (!ctx.cr6.gt) goto loc_8215D7F8;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,24964(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
loc_8215D79C:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215D7A8;
	sub_821778D8(ctx, base);
	// lwz r11,24964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d7e4
	if (ctx.cr6.eq) goto loc_8215D7E4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215D7C0;
	sub_82177868(ctx, base);
	// lwz r11,24964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,24964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24964);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,25748(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25748, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8215d508
	ctx.lr = 0x8215D7E4;
	sub_8215D508(ctx, base);
loc_8215D7E4:
	// bl 0x82177858
	ctx.lr = 0x8215D7E8;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,24964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24964, ctx.r3.u32);
	// bne 0x8215d79c
	if (!ctx.cr0.eq) goto loc_8215D79C;
loc_8215D7F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D778) {
	__imp__sub_8215D778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D800) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D800) {
	__imp__sub_8215D800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D808) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D808) {
	__imp__sub_8215D808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D810) {
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
	// lwz r4,25980(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
	// bl 0x821778d8
	ctx.lr = 0x8215D830;
	sub_821778D8(ctx, base);
	// lwz r11,25980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d870
	if (ctx.cr6.eq) goto loc_8215D870;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215D848;
	sub_82177868(ctx, base);
	// lwz r11,25980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,25980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,28244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28244, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82147218
	ctx.lr = 0x8215D870;
	sub_82147218(ctx, base);
loc_8215D870:
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

PPC_WEAK_FUNC(sub_8215D810) {
	__imp__sub_8215D810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215D884) {
	__imp__sub_8215D884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D888) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D888) {
	__imp__sub_8215D888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215D898;
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
	// lwz r4,25980(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
	// bl 0x821778d8
	ctx.lr = 0x8215D8B0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,25980(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
	// ble cr6,0x8215d91c
	if (!ctx.cr6.gt) goto loc_8215D91C;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8215D8C0:
	// stw r29,25980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25980, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215D8D4;
	sub_821778D8(ctx, base);
	// lwz r11,25980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d910
	if (ctx.cr6.eq) goto loc_8215D910;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215D8EC;
	sub_82177868(ctx, base);
	// lwz r11,25980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,25980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82147218
	ctx.lr = 0x8215D910;
	sub_82147218(ctx, base);
loc_8215D910:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8215d8c0
	if (!ctx.cr0.eq) goto loc_8215D8C0;
loc_8215D91C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D890) {
	__imp__sub_8215D890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215D924) {
	__imp__sub_8215D924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215D930;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215d9a8
	if (!ctx.cr6.gt) goto loc_8215D9A8;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25980(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
loc_8215D94C:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215D958;
	sub_821778D8(ctx, base);
	// lwz r11,25980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d994
	if (ctx.cr6.eq) goto loc_8215D994;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215D970;
	sub_82177868(ctx, base);
	// lwz r11,25980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,25980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25980);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82147218
	ctx.lr = 0x8215D994;
	sub_82147218(ctx, base);
loc_8215D994:
	// bl 0x82177858
	ctx.lr = 0x8215D998;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25980, ctx.r3.u32);
	// bne 0x8215d94c
	if (!ctx.cr0.eq) goto loc_8215D94C;
loc_8215D9A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D928) {
	__imp__sub_8215D928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D9B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D9B0) {
	__imp__sub_8215D9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D9B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D9B8) {
	__imp__sub_8215D9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D9C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D9C0) {
	__imp__sub_8215D9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215D9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,25120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25120);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215da00
	if (!ctx.cr6.eq) goto loc_8215DA00;
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
	// lwz r4,26440(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26440);
	// stw r4,27108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27108, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
loc_8215DA00:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8215da2c
	if (!ctx.cr6.eq) goto loc_8215DA2C;
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
	// lwz r4,26440(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26440);
	// stw r4,24988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24988, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
loc_8215DA2C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8215da48
	if (!ctx.cr6.eq) goto loc_8215DA48;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26440);
	// stw r11,25344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25344, ctx.r11.u32);
	// b 0x8215cf60
	sub_8215CF60(ctx, base);
	return;
loc_8215DA48:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26440);
	// stw r11,26752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26752, ctx.r11.u32);
	// b 0x8216e3e0
	sub_8216E3E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215D9C8) {
	__imp__sub_8215D9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DA64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DA64) {
	__imp__sub_8215DA64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DA68) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DA68) {
	__imp__sub_8215DA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215DA78;
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
	// lwz r4,26440(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26440);
	// bl 0x821778d8
	ctx.lr = 0x8215DA90;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26440(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26440);
	// ble cr6,0x8215dab4
	if (!ctx.cr6.gt) goto loc_8215DAB4;
loc_8215DA9C:
	// stw r30,26440(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26440, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215d9c8
	ctx.lr = 0x8215DAA8;
	sub_8215D9C8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8215da9c
	if (!ctx.cr0.eq) goto loc_8215DA9C;
loc_8215DAB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DA70) {
	__imp__sub_8215DA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215DABC) {
	__imp__sub_8215DABC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DAC0) {
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
	// ble cr6,0x8215dafc
	if (!ctx.cr6.gt) goto loc_8215DAFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215DAE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215d9c8
	ctx.lr = 0x8215DAEC;
	sub_8215D9C8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215DAF0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26440, ctx.r3.u32);
	// bne 0x8215dae4
	if (!ctx.cr0.eq) goto loc_8215DAE4;
loc_8215DAFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DAC0) {
	__imp__sub_8215DAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215DB14) {
	__imp__sub_8215DB14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB18) {
	__imp__sub_8215DB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB20) {
	__imp__sub_8215DB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB28) {
	__imp__sub_8215DB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB30) {
	__imp__sub_8215DB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB38) {
	__imp__sub_8215DB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB40) {
	__imp__sub_8215DB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB48) {
	__imp__sub_8215DB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB50) {
	__imp__sub_8215DB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB58) {
	__imp__sub_8215DB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB60) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB60) {
	__imp__sub_8215DB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB68) {
	__imp__sub_8215DB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB70) {
	__imp__sub_8215DB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB78) {
	__imp__sub_8215DB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB80) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB80) {
	__imp__sub_8215DB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB88) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB88) {
	__imp__sub_8215DB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB90) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB90) {
	__imp__sub_8215DB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DB98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DB98) {
	__imp__sub_8215DB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DBA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DBA0) {
	__imp__sub_8215DBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DBA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DBA8) {
	__imp__sub_8215DBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DBB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DBB0) {
	__imp__sub_8215DBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DBB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DBB8) {
	__imp__sub_8215DBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DBC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DBC0) {
	__imp__sub_8215DBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DBC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DBC8) {
	__imp__sub_8215DBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DBD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DBD0) {
	__imp__sub_8215DBD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DBD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DBD8) {
	__imp__sub_8215DBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DBE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DBE0) {
	__imp__sub_8215DBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DBE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DBE8) {
	__imp__sub_8215DBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DBF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DBF0) {
	__imp__sub_8215DBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DBF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DBF8) {
	__imp__sub_8215DBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC00) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DC00) {
	__imp__sub_8215DC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC08) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DC08) {
	__imp__sub_8215DC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DC10) {
	__imp__sub_8215DC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27872);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DC18) {
	__imp__sub_8215DC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215DC2C) {
	__imp__sub_8215DC2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DC30) {
	__imp__sub_8215DC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC38) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DC38) {
	__imp__sub_8215DC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC40) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DC40) {
	__imp__sub_8215DC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC48) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DC48) {
	__imp__sub_8215DC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC50) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DC50) {
	__imp__sub_8215DC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC58) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DC58) {
	__imp__sub_8215DC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC60) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DC60) {
	__imp__sub_8215DC60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC68) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DC68) {
	__imp__sub_8215DC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC70) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DC70) {
	__imp__sub_8215DC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC78) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DC78) {
	__imp__sub_8215DC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,26108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26108);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DC80) {
	__imp__sub_8215DC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC90) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DC90) {
	__imp__sub_8215DC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,26108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26108);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DC98) {
	__imp__sub_8215DC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DCA8) {
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
	// ble cr6,0x8215dcf0
	if (!ctx.cr6.gt) goto loc_8215DCF0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26108);
loc_8215DCD0:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215DCDC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215DCE0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26108, ctx.r3.u32);
	// bne 0x8215dcd0
	if (!ctx.cr0.eq) goto loc_8215DCD0;
loc_8215DCF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DCA8) {
	__imp__sub_8215DCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DD08) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DD08) {
	__imp__sub_8215DD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DD10) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DD10) {
	__imp__sub_8215DD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,25676(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25676);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DD18) {
	__imp__sub_8215DD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DD28) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DD28) {
	__imp__sub_8215DD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,25676(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25676);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DD30) {
	__imp__sub_8215DD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DD40) {
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
	// ble cr6,0x8215dd88
	if (!ctx.cr6.gt) goto loc_8215DD88;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25676(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25676);
loc_8215DD68:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215DD74;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215DD78;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25676, ctx.r3.u32);
	// bne 0x8215dd68
	if (!ctx.cr0.eq) goto loc_8215DD68;
loc_8215DD88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DD40) {
	__imp__sub_8215DD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DDA0) {
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
	// lwz r4,27368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
	// bl 0x821778d8
	ctx.lr = 0x8215DDC0;
	sub_821778D8(ctx, base);
	// lwz r11,27368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215ddfc
	if (ctx.cr6.eq) goto loc_8215DDFC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215DDD8;
	sub_82177868(ctx, base);
	// lwz r11,27368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25676, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215DDFC;
	sub_821778D8(ctx, base);
loc_8215DDFC:
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

PPC_WEAK_FUNC(sub_8215DDA0) {
	__imp__sub_8215DDA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DE10) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DE10) {
	__imp__sub_8215DE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215DE20;
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
	// lwz r4,27368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
	// bl 0x821778d8
	ctx.lr = 0x8215DE38;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,27368(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
	// ble cr6,0x8215dea0
	if (!ctx.cr6.gt) goto loc_8215DEA0;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8215DE48:
	// stw r29,27368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27368, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215DE5C;
	sub_821778D8(ctx, base);
	// lwz r11,27368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215de94
	if (ctx.cr6.eq) goto loc_8215DE94;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215DE74;
	sub_82177868(ctx, base);
	// lwz r11,27368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25676(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25676, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215DE94;
	sub_821778D8(ctx, base);
loc_8215DE94:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8215de48
	if (!ctx.cr0.eq) goto loc_8215DE48;
loc_8215DEA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DE18) {
	__imp__sub_8215DE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215DEB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215df24
	if (!ctx.cr6.gt) goto loc_8215DF24;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
loc_8215DECC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215DED8;
	sub_821778D8(ctx, base);
	// lwz r11,27368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215df10
	if (ctx.cr6.eq) goto loc_8215DF10;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215DEF0;
	sub_82177868(ctx, base);
	// lwz r11,27368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27368);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25676(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25676, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215DF10;
	sub_821778D8(ctx, base);
loc_8215DF10:
	// bl 0x82177858
	ctx.lr = 0x8215DF14;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27368, ctx.r3.u32);
	// bne 0x8215decc
	if (!ctx.cr0.eq) goto loc_8215DECC;
loc_8215DF24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DEA8) {
	__imp__sub_8215DEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215DF2C) {
	__imp__sub_8215DF2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DF30) {
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
	// li r5,392
	ctx.r5.s64 = 392;
	// lwz r4,27884(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27884);
	// bl 0x821778d8
	ctx.lr = 0x8215DF54;
	sub_821778D8(ctx, base);
	// lwz r11,27884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27884);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8215DF6C;
	sub_82147218(ctx, base);
	// lwz r11,27884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27884);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8215DF84;
	sub_82147218(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215DF30) {
	__imp__sub_8215DF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215DF9C) {
	__imp__sub_8215DF9C(ctx, base);
}

