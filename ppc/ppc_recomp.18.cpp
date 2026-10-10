#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82145534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82145534) {
	__imp__sub_82145534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r31,r10,24832
	ctx.r31.s64 = ctx.r10.s64 + 24832;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
loc_82145560:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821455c4
	if (ctx.cr6.eq) goto loc_821455C4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bge cr6,0x8214557c
	if (!ctx.cr6.lt) goto loc_8214557C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8214557C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821455a4
	if (ctx.cr6.eq) goto loc_821455A4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x823de1f0
	ctx.lr = 0x82145590;
	sub_823DE1F0(ctx, base);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
loc_821455A4:
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	// subf. r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// beq 0x821455e8
	if (ctx.cr0.eq) goto loc_821455E8;
loc_821455C4:
	// bl 0x821452d0
	ctx.lr = 0x821455C8;
	sub_821452D0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821455d8
	if (ctx.cr6.eq) goto loc_821455D8;
	// bl 0x82144df8
	ctx.lr = 0x821455D8;
	sub_82144DF8(ctx, base);
loc_821455D8:
	// bl 0x8228bd80
	ctx.lr = 0x821455DC;
	sub_8228BD80(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// b 0x82145560
	goto loc_82145560;
loc_821455E8:
	// li r11,511
	ctx.r11.s64 = 511;
	// dcbt r11,r10
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145538) {
	__imp__sub_82145538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r31,r11,24832
	ctx.r31.s64 = ctx.r11.s64 + 24832;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,13128
	ctx.r30.s64 = ctx.r11.s64 + 13128;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r4,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
loc_82145634:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x821446e8
	ctx.lr = 0x82145640;
	sub_821446E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82145668
	if (ctx.cr6.eq) goto loc_82145668;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82145668
	if (ctx.cr6.eq) goto loc_82145668;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82280900
	ctx.lr = 0x82145664;
	sub_82280900(ctx, base);
	// bl 0x823ad918
	ctx.lr = 0x82145668;
	sub_823AD918(ctx, base);
loc_82145668:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82145690
	if (ctx.cr6.eq) goto loc_82145690;
	// bl 0x821452d0
	ctx.lr = 0x82145678;
	sub_821452D0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82145688
	if (ctx.cr6.eq) goto loc_82145688;
	// bl 0x82144df8
	ctx.lr = 0x82145688;
	sub_82144DF8(ctx, base);
loc_82145688:
	// bl 0x8228bd80
	ctx.lr = 0x8214568C;
	sub_8228BD80(ctx, base);
	// b 0x82145634
	goto loc_82145634;
loc_82145690:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,511
	ctx.r10.s64 = 511;
	// dcbt r10,r11
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145608) {
	__imp__sub_82145608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821456B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821456B4) {
	__imp__sub_821456B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821456B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,27860(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27860);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821456B8) {
	__imp__sub_821456B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821456C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821456C8) {
	__imp__sub_821456C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821456D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,27860(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27860);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821456D0) {
	__imp__sub_821456D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821456E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145728
	if (!ctx.cr6.gt) goto loc_82145728;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27860(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27860);
loc_82145708:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145714;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145718;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27860(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27860, ctx.r3.u32);
	// bne 0x82145708
	if (!ctx.cr0.eq) goto loc_82145708;
loc_82145728:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821456E0) {
	__imp__sub_821456E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,26260(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26260);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145740) {
	__imp__sub_82145740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145750) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145750) {
	__imp__sub_82145750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,26260(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26260);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145758) {
	__imp__sub_82145758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821457b0
	if (!ctx.cr6.gt) goto loc_821457B0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26260);
loc_82145790:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214579C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821457A0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26260, ctx.r3.u32);
	// bne 0x82145790
	if (!ctx.cr0.eq) goto loc_82145790;
loc_821457B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145768) {
	__imp__sub_82145768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821457C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,28252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28252);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821457C8) {
	__imp__sub_821457C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821457D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821457D8) {
	__imp__sub_821457D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821457E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,28252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28252);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821457E0) {
	__imp__sub_821457E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821457F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145838
	if (!ctx.cr6.gt) goto loc_82145838;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28252(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28252);
loc_82145818:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145824;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145828;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28252, ctx.r3.u32);
	// bne 0x82145818
	if (!ctx.cr0.eq) goto loc_82145818;
loc_82145838:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821457F0) {
	__imp__sub_821457F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,26520(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26520);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145850) {
	__imp__sub_82145850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145860) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145860) {
	__imp__sub_82145860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,26520(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26520);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145868) {
	__imp__sub_82145868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821458c0
	if (!ctx.cr6.gt) goto loc_821458C0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26520(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26520);
loc_821458A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821458AC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821458B0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26520, ctx.r3.u32);
	// bne 0x821458a0
	if (!ctx.cr0.eq) goto loc_821458A0;
loc_821458C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145878) {
	__imp__sub_82145878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821458D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,26588(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26588);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821458D8) {
	__imp__sub_821458D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821458E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821458E8) {
	__imp__sub_821458E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821458F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,26588(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26588);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821458F0) {
	__imp__sub_821458F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145948
	if (!ctx.cr6.gt) goto loc_82145948;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26588(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26588);
loc_82145928:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145934;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145938;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26588, ctx.r3.u32);
	// bne 0x82145928
	if (!ctx.cr0.eq) goto loc_82145928;
loc_82145948:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145900) {
	__imp__sub_82145900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,26892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26892);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145960) {
	__imp__sub_82145960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145970) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145970) {
	__imp__sub_82145970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,26892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26892);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145978) {
	__imp__sub_82145978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821459d0
	if (!ctx.cr6.gt) goto loc_821459D0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26892(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26892);
loc_821459B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821459BC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821459C0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26892, ctx.r3.u32);
	// bne 0x821459b0
	if (!ctx.cr0.eq) goto loc_821459B0;
loc_821459D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145988) {
	__imp__sub_82145988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821459E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,25968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25968);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821459E8) {
	__imp__sub_821459E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821459F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821459F8) {
	__imp__sub_821459F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,25968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25968);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145A00) {
	__imp__sub_82145A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145a58
	if (!ctx.cr6.gt) goto loc_82145A58;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25968(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25968);
loc_82145A38:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145A44;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145A48;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25968(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25968, ctx.r3.u32);
	// bne 0x82145a38
	if (!ctx.cr0.eq) goto loc_82145A38;
loc_82145A58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145A10) {
	__imp__sub_82145A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26876(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26876);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145A70) {
	__imp__sub_82145A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145A80) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145A80) {
	__imp__sub_82145A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26876(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26876);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145A88) {
	__imp__sub_82145A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145ae0
	if (!ctx.cr6.gt) goto loc_82145AE0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26876(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26876);
loc_82145AC0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145ACC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145AD0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26876(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26876, ctx.r3.u32);
	// bne 0x82145ac0
	if (!ctx.cr0.eq) goto loc_82145AC0;
loc_82145AE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145A98) {
	__imp__sub_82145A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27108);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145AF8) {
	__imp__sub_82145AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145B08) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145B08) {
	__imp__sub_82145B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27108);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145B10) {
	__imp__sub_82145B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145b68
	if (!ctx.cr6.gt) goto loc_82145B68;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27108);
loc_82145B48:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145B54;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145B58;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27108, ctx.r3.u32);
	// bne 0x82145b48
	if (!ctx.cr0.eq) goto loc_82145B48;
loc_82145B68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145B20) {
	__imp__sub_82145B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,25508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25508);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145B80) {
	__imp__sub_82145B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145B90) {
	PPC_FUNC_PROLOGUE();
	// li r3,4095
	ctx.r3.s64 = 4095;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145B90) {
	__imp__sub_82145B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,25508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25508);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145B98) {
	__imp__sub_82145B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145bf0
	if (!ctx.cr6.gt) goto loc_82145BF0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25508(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25508);
loc_82145BD0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145BDC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145BE0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25508, ctx.r3.u32);
	// bne 0x82145bd0
	if (!ctx.cr0.eq) goto loc_82145BD0;
loc_82145BF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145BA8) {
	__imp__sub_82145BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,25560(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25560);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145C08) {
	__imp__sub_82145C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145C18) {
	PPC_FUNC_PROLOGUE();
	// li r3,127
	ctx.r3.s64 = 127;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145C18) {
	__imp__sub_82145C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,25560(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25560);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145C20) {
	__imp__sub_82145C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145c78
	if (!ctx.cr6.gt) goto loc_82145C78;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25560(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25560);
loc_82145C58:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145C64;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145C68;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25560, ctx.r3.u32);
	// bne 0x82145c58
	if (!ctx.cr0.eq) goto loc_82145C58;
loc_82145C78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145C30) {
	__imp__sub_82145C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,25428(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25428);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145C90) {
	__imp__sub_82145C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145CA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,63
	ctx.r3.s64 = 63;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145CA0) {
	__imp__sub_82145CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,25428(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25428);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145CA8) {
	__imp__sub_82145CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145d00
	if (!ctx.cr6.gt) goto loc_82145D00;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25428(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25428);
loc_82145CE0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145CEC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145CF0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25428, ctx.r3.u32);
	// bne 0x82145ce0
	if (!ctx.cr0.eq) goto loc_82145CE0;
loc_82145D00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145CB8) {
	__imp__sub_82145CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25296(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25296);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145D18) {
	__imp__sub_82145D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145D28) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145D28) {
	__imp__sub_82145D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25296(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25296);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145D30) {
	__imp__sub_82145D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145d88
	if (!ctx.cr6.gt) goto loc_82145D88;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25296(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25296);
loc_82145D68:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145D74;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145D78;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25296, ctx.r3.u32);
	// bne 0x82145d68
	if (!ctx.cr0.eq) goto loc_82145D68;
loc_82145D88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145D40) {
	__imp__sub_82145D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27028(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27028);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145DA0) {
	__imp__sub_82145DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145DB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145DB0) {
	__imp__sub_82145DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27028(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27028);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145DB8) {
	__imp__sub_82145DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145e10
	if (!ctx.cr6.gt) goto loc_82145E10;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27028(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27028);
loc_82145DF0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145DFC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145E00;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27028(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27028, ctx.r3.u32);
	// bne 0x82145df0
	if (!ctx.cr0.eq) goto loc_82145DF0;
loc_82145E10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145DC8) {
	__imp__sub_82145DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27128(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27128);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145E28) {
	__imp__sub_82145E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145E38) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145E38) {
	__imp__sub_82145E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27128(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27128);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145E40) {
	__imp__sub_82145E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145e98
	if (!ctx.cr6.gt) goto loc_82145E98;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27128(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27128);
loc_82145E78:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145E84;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145E88;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27128, ctx.r3.u32);
	// bne 0x82145e78
	if (!ctx.cr0.eq) goto loc_82145E78;
loc_82145E98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145E50) {
	__imp__sub_82145E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25892);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145EB0) {
	__imp__sub_82145EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145EC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145EC0) {
	__imp__sub_82145EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25892);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145EC8) {
	__imp__sub_82145EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145f20
	if (!ctx.cr6.gt) goto loc_82145F20;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25892(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25892);
loc_82145F00:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145F0C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145F10;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25892, ctx.r3.u32);
	// bne 0x82145f00
	if (!ctx.cr0.eq) goto loc_82145F00;
loc_82145F20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145ED8) {
	__imp__sub_82145ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25184);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145F38) {
	__imp__sub_82145F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145F48) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145F48) {
	__imp__sub_82145F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25184);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145F50) {
	__imp__sub_82145F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82145fa8
	if (!ctx.cr6.gt) goto loc_82145FA8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25184);
loc_82145F88:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82145F94;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82145F98;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25184, ctx.r3.u32);
	// bne 0x82145f88
	if (!ctx.cr0.eq) goto loc_82145F88;
loc_82145FA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145F60) {
	__imp__sub_82145F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,24956(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24956);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145FC0) {
	__imp__sub_82145FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145FD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145FD0) {
	__imp__sub_82145FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,24956(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24956);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82145FD8) {
	__imp__sub_82145FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82145FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146030
	if (!ctx.cr6.gt) goto loc_82146030;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,24956(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24956);
loc_82146010:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214601C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146020;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,24956(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24956, ctx.r3.u32);
	// bne 0x82146010
	if (!ctx.cr0.eq) goto loc_82146010;
loc_82146030:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82145FE8) {
	__imp__sub_82145FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27648(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27648);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146048) {
	__imp__sub_82146048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146058) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146058) {
	__imp__sub_82146058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27648(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27648);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146060) {
	__imp__sub_82146060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821460b8
	if (!ctx.cr6.gt) goto loc_821460B8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27648(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27648);
loc_82146098:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821460A4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821460A8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27648, ctx.r3.u32);
	// bne 0x82146098
	if (!ctx.cr0.eq) goto loc_82146098;
loc_821460B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146070) {
	__imp__sub_82146070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821460D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,24988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821460D0) {
	__imp__sub_821460D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821460E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821460E0) {
	__imp__sub_821460E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821460E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,24988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24988);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821460E8) {
	__imp__sub_821460E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821460F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146140
	if (!ctx.cr6.gt) goto loc_82146140;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,24988(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24988);
loc_82146120:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214612C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146130;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,24988(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24988, ctx.r3.u32);
	// bne 0x82146120
	if (!ctx.cr0.eq) goto loc_82146120;
loc_82146140:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821460F8) {
	__imp__sub_821460F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25552(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25552);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146158) {
	__imp__sub_82146158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146168) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146168) {
	__imp__sub_82146168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25552(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25552);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146170) {
	__imp__sub_82146170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821461c8
	if (!ctx.cr6.gt) goto loc_821461C8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25552(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25552);
loc_821461A8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821461B4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821461B8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25552, ctx.r3.u32);
	// bne 0x821461a8
	if (!ctx.cr0.eq) goto loc_821461A8;
loc_821461C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146180) {
	__imp__sub_82146180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821461E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25484(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25484);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821461E0) {
	__imp__sub_821461E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821461F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821461F0) {
	__imp__sub_821461F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821461F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25484(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25484);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821461F8) {
	__imp__sub_821461F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146250
	if (!ctx.cr6.gt) goto loc_82146250;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25484(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25484);
loc_82146230:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214623C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146240;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25484, ctx.r3.u32);
	// bne 0x82146230
	if (!ctx.cr0.eq) goto loc_82146230;
loc_82146250:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146208) {
	__imp__sub_82146208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27040(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27040);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146268) {
	__imp__sub_82146268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146278) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146278) {
	__imp__sub_82146278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27040(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27040);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146280) {
	__imp__sub_82146280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821462d8
	if (!ctx.cr6.gt) goto loc_821462D8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27040(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27040);
loc_821462B8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821462C4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821462C8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27040, ctx.r3.u32);
	// bne 0x821462b8
	if (!ctx.cr0.eq) goto loc_821462B8;
loc_821462D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146290) {
	__imp__sub_82146290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821462F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,28328(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28328);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821462F0) {
	__imp__sub_821462F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146300) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146300) {
	__imp__sub_82146300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146308) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28328(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28328);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146308) {
	__imp__sub_82146308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146368
	if (!ctx.cr6.gt) goto loc_82146368;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28328(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28328);
loc_82146348:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146354;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146358;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28328, ctx.r3.u32);
	// bne 0x82146348
	if (!ctx.cr0.eq) goto loc_82146348;
loc_82146368:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146320) {
	__imp__sub_82146320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,27980(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27980);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146380) {
	__imp__sub_82146380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146390) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146390) {
	__imp__sub_82146390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,27980(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27980);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146398) {
	__imp__sub_82146398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821463A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821463f0
	if (!ctx.cr6.gt) goto loc_821463F0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27980(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27980);
loc_821463D0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821463DC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821463E0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27980(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27980, ctx.r3.u32);
	// bne 0x821463d0
	if (!ctx.cr0.eq) goto loc_821463D0;
loc_821463F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821463A8) {
	__imp__sub_821463A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27008);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146408) {
	__imp__sub_82146408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146418) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146418) {
	__imp__sub_82146418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27008);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146420) {
	__imp__sub_82146420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146478
	if (!ctx.cr6.gt) goto loc_82146478;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27008(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27008);
loc_82146458:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146464;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146468;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27008, ctx.r3.u32);
	// bne 0x82146458
	if (!ctx.cr0.eq) goto loc_82146458;
loc_82146478:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146430) {
	__imp__sub_82146430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27436(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27436);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146490) {
	__imp__sub_82146490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821464A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,127
	ctx.r3.s64 = 127;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821464A0) {
	__imp__sub_821464A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821464A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27436(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27436);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821464A8) {
	__imp__sub_821464A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821464B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146500
	if (!ctx.cr6.gt) goto loc_82146500;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27436(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27436);
loc_821464E0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821464EC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821464F0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27436, ctx.r3.u32);
	// bne 0x821464e0
	if (!ctx.cr0.eq) goto loc_821464E0;
loc_82146500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821464B8) {
	__imp__sub_821464B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,27856(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27856);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146518) {
	__imp__sub_82146518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146528) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146528) {
	__imp__sub_82146528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,27856(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27856);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146530) {
	__imp__sub_82146530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146588
	if (!ctx.cr6.gt) goto loc_82146588;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27856(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27856);
loc_82146568:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146574;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146578;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27856, ctx.r3.u32);
	// bne 0x82146568
	if (!ctx.cr0.eq) goto loc_82146568;
loc_82146588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146540) {
	__imp__sub_82146540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821465A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,27936(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27936);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821465A0) {
	__imp__sub_821465A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821465B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821465B0) {
	__imp__sub_821465B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821465B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,27936(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27936);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821465B8) {
	__imp__sub_821465B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821465C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146610
	if (!ctx.cr6.gt) goto loc_82146610;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27936(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27936);
loc_821465F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821465FC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146600;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27936(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27936, ctx.r3.u32);
	// bne 0x821465f0
	if (!ctx.cr0.eq) goto loc_821465F0;
loc_82146610:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821465C8) {
	__imp__sub_821465C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,25444(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25444);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146628) {
	__imp__sub_82146628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146638) {
	PPC_FUNC_PROLOGUE();
	// li r3,4095
	ctx.r3.s64 = 4095;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146638) {
	__imp__sub_82146638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,25444(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25444);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146640) {
	__imp__sub_82146640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146698
	if (!ctx.cr6.gt) goto loc_82146698;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25444(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25444);
loc_82146678:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146684;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146688;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25444, ctx.r3.u32);
	// bne 0x82146678
	if (!ctx.cr0.eq) goto loc_82146678;
loc_82146698:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146650) {
	__imp__sub_82146650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821466B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26744);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821466B0) {
	__imp__sub_821466B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821466C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821466C0) {
	__imp__sub_821466C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821466C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26744);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821466C8) {
	__imp__sub_821466C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821466D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146720
	if (!ctx.cr6.gt) goto loc_82146720;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26744(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26744);
loc_82146700:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214670C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146710;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26744(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26744, ctx.r3.u32);
	// bne 0x82146700
	if (!ctx.cr0.eq) goto loc_82146700;
loc_82146720:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821466D8) {
	__imp__sub_821466D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,25820(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25820);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146738) {
	__imp__sub_82146738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146748) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146748) {
	__imp__sub_82146748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,25820(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25820);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146750) {
	__imp__sub_82146750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821467a8
	if (!ctx.cr6.gt) goto loc_821467A8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25820(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25820);
loc_82146788:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146794;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146798;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25820, ctx.r3.u32);
	// bne 0x82146788
	if (!ctx.cr0.eq) goto loc_82146788;
loc_821467A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146760) {
	__imp__sub_82146760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821467C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,26616(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26616);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821467C0) {
	__imp__sub_821467C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821467D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821467D0) {
	__imp__sub_821467D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821467D8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26616(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26616);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821467D8) {
	__imp__sub_821467D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821467F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146838
	if (!ctx.cr6.gt) goto loc_82146838;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26616(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26616);
loc_82146818:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146824;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146828;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26616, ctx.r3.u32);
	// bne 0x82146818
	if (!ctx.cr0.eq) goto loc_82146818;
loc_82146838:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821467F0) {
	__imp__sub_821467F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,26512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26512);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146850) {
	__imp__sub_82146850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146860) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146860) {
	__imp__sub_82146860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,26512(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26512);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146868) {
	__imp__sub_82146868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821468c0
	if (!ctx.cr6.gt) goto loc_821468C0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26512(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26512);
loc_821468A0:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821468AC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821468B0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26512, ctx.r3.u32);
	// bne 0x821468a0
	if (!ctx.cr0.eq) goto loc_821468A0;
loc_821468C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146878) {
	__imp__sub_82146878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821468D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r4,27516(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27516);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821468D8) {
	__imp__sub_821468D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821468E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821468E8) {
	__imp__sub_821468E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821468F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,27516(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27516);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821468F0) {
	__imp__sub_821468F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146950
	if (!ctx.cr6.gt) goto loc_82146950;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27516(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27516);
loc_82146930:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8214693C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146940;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27516, ctx.r3.u32);
	// bne 0x82146930
	if (!ctx.cr0.eq) goto loc_82146930;
loc_82146950:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146908) {
	__imp__sub_82146908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,26320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26320);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146968) {
	__imp__sub_82146968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146978) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146978) {
	__imp__sub_82146978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,26320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26320);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146980) {
	__imp__sub_82146980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821469d8
	if (!ctx.cr6.gt) goto loc_821469D8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26320(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26320);
loc_821469B8:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821469C4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821469C8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26320, ctx.r3.u32);
	// bne 0x821469b8
	if (!ctx.cr0.eq) goto loc_821469B8;
loc_821469D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146990) {
	__imp__sub_82146990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821469F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,28488(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28488);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821469F0) {
	__imp__sub_821469F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146A00) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146A00) {
	__imp__sub_82146A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146A08) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28488(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28488);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146A08) {
	__imp__sub_82146A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146a68
	if (!ctx.cr6.gt) goto loc_82146A68;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28488(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28488);
loc_82146A48:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146A54;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146A58;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28488, ctx.r3.u32);
	// bne 0x82146a48
	if (!ctx.cr0.eq) goto loc_82146A48;
loc_82146A68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146A20) {
	__imp__sub_82146A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,28596(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28596);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146A80) {
	__imp__sub_82146A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146A90) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146A90) {
	__imp__sub_82146A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,28596(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28596);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146A98) {
	__imp__sub_82146A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146af0
	if (!ctx.cr6.gt) goto loc_82146AF0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28596(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28596);
loc_82146AD0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146ADC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146AE0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28596, ctx.r3.u32);
	// bne 0x82146ad0
	if (!ctx.cr0.eq) goto loc_82146AD0;
loc_82146AF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146AA8) {
	__imp__sub_82146AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,25224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25224);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146B08) {
	__imp__sub_82146B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146B18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146B18) {
	__imp__sub_82146B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,25224(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25224);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146B20) {
	__imp__sub_82146B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146b78
	if (!ctx.cr6.gt) goto loc_82146B78;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25224(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25224);
loc_82146B58:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146B64;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146B68;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25224, ctx.r3.u32);
	// bne 0x82146b58
	if (!ctx.cr0.eq) goto loc_82146B58;
loc_82146B78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146B30) {
	__imp__sub_82146B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,28528(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28528);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146B90) {
	__imp__sub_82146B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146BA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146BA0) {
	__imp__sub_82146BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,28528(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28528);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146BA8) {
	__imp__sub_82146BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146c00
	if (!ctx.cr6.gt) goto loc_82146C00;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28528(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28528);
loc_82146BE0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146BEC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146BF0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28528, ctx.r3.u32);
	// bne 0x82146be0
	if (!ctx.cr0.eq) goto loc_82146BE0;
loc_82146C00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146BB8) {
	__imp__sub_82146BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,25460(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25460);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146C18) {
	__imp__sub_82146C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146C28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146C28) {
	__imp__sub_82146C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,25460(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25460);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146C30) {
	__imp__sub_82146C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146c88
	if (!ctx.cr6.gt) goto loc_82146C88;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25460(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25460);
loc_82146C68:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146C74;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146C78;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25460, ctx.r3.u32);
	// bne 0x82146c68
	if (!ctx.cr0.eq) goto loc_82146C68;
loc_82146C88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146C40) {
	__imp__sub_82146C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,26452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26452);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146CA0) {
	__imp__sub_82146CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146CB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146CB0) {
	__imp__sub_82146CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26452(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26452);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146CB8) {
	__imp__sub_82146CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146d10
	if (!ctx.cr6.gt) goto loc_82146D10;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26452(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26452);
loc_82146CF0:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146CFC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146D00;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26452, ctx.r3.u32);
	// bne 0x82146cf0
	if (!ctx.cr0.eq) goto loc_82146CF0;
loc_82146D10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146CC8) {
	__imp__sub_82146CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25340(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25340);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146D28) {
	__imp__sub_82146D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146D38) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146D38) {
	__imp__sub_82146D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25340(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25340);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146D40) {
	__imp__sub_82146D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146d98
	if (!ctx.cr6.gt) goto loc_82146D98;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25340(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25340);
loc_82146D78:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146D84;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146D88;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25340, ctx.r3.u32);
	// bne 0x82146d78
	if (!ctx.cr0.eq) goto loc_82146D78;
loc_82146D98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146D50) {
	__imp__sub_82146D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,25984(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25984);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146DB0) {
	__imp__sub_82146DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146DC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146DC0) {
	__imp__sub_82146DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,25984(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25984);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146DC8) {
	__imp__sub_82146DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146e20
	if (!ctx.cr6.gt) goto loc_82146E20;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25984(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25984);
loc_82146E00:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146E0C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146E10;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25984, ctx.r3.u32);
	// bne 0x82146e00
	if (!ctx.cr0.eq) goto loc_82146E00;
loc_82146E20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146DD8) {
	__imp__sub_82146DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146E38) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,28440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28440);
	// bl 0x821778d8
	ctx.lr = 0x82146E58;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x82146E60;
	sub_8217E550(ctx, base);
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

PPC_WEAK_FUNC(sub_82146E38) {
	__imp__sub_82146E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82146E74) {
	__imp__sub_82146E74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146E78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146E78) {
	__imp__sub_82146E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82146E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,28440(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28440);
	// bl 0x821778d8
	ctx.lr = 0x82146EA0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,28440(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28440);
	// ble cr6,0x82146ed4
	if (!ctx.cr6.gt) goto loc_82146ED4;
loc_82146EAC:
	// stw r31,28440(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28440, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82146EC0;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x82146EC8;
	sub_8217E550(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x82146eac
	if (!ctx.cr0.eq) goto loc_82146EAC;
loc_82146ED4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146E80) {
	__imp__sub_82146E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82146EDC) {
	__imp__sub_82146EDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146f30
	if (!ctx.cr6.gt) goto loc_82146F30;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28440(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28440);
loc_82146F08:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146F14;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x82146F1C;
	sub_8217E550(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146F20;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28440, ctx.r3.u32);
	// bne 0x82146f08
	if (!ctx.cr0.eq) goto loc_82146F08;
loc_82146F30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146EE0) {
	__imp__sub_82146EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,25088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25088);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146F48) {
	__imp__sub_82146F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146F58) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146F58) {
	__imp__sub_82146F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,25088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25088);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82146F60) {
	__imp__sub_82146F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82146fb8
	if (!ctx.cr6.gt) goto loc_82146FB8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25088(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25088);
loc_82146F98:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82146FA4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82146FA8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25088, ctx.r3.u32);
	// bne 0x82146f98
	if (!ctx.cr0.eq) goto loc_82146F98;
loc_82146FB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82146F70) {
	__imp__sub_82146F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82146FD0) {
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
	// lwz r4,26296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
	// bl 0x821778d8
	ctx.lr = 0x82146FF0;
	sub_821778D8(ctx, base);
	// lwz r3,26296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82147044
	if (ctx.cr6.eq) goto loc_82147044;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82147040
	if (!ctx.cr6.eq) goto loc_82147040;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82147010;
	sub_82177868(ctx, base);
	// lwz r11,26296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,26296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25088, ctx.r11.u32);
	// bl 0x82177a20
	ctx.lr = 0x8214702C;
	sub_82177A20(ctx, base);
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
loc_82147040:
	// bl 0x82177978
	ctx.lr = 0x82147044;
	sub_82177978(ctx, base);
loc_82147044:
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

PPC_WEAK_FUNC(sub_82146FD0) {
	__imp__sub_82146FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147058) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147058) {
	__imp__sub_82147058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82147068;
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
	// lwz r4,26296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
	// bl 0x821778d8
	ctx.lr = 0x82147080;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,26296(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
	// ble cr6,0x821470f0
	if (!ctx.cr6.gt) goto loc_821470F0;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82147090:
	// stw r29,26296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26296, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821470A4;
	sub_821778D8(ctx, base);
	// lwz r3,26296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821470e4
	if (ctx.cr6.eq) goto loc_821470E4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821470e0
	if (!ctx.cr6.eq) goto loc_821470E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821470C4;
	sub_82177868(ctx, base);
	// lwz r11,26296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,26296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25088, ctx.r11.u32);
	// bl 0x82177a20
	ctx.lr = 0x821470DC;
	sub_82177A20(ctx, base);
	// b 0x821470e4
	goto loc_821470E4;
loc_821470E0:
	// bl 0x82177978
	ctx.lr = 0x821470E4;
	sub_82177978(ctx, base);
loc_821470E4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82147090
	if (!ctx.cr0.eq) goto loc_82147090;
loc_821470F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147060) {
	__imp__sub_82147060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821470F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82147100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8214717c
	if (!ctx.cr6.gt) goto loc_8214717C;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,26296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
loc_8214711C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82147128;
	sub_821778D8(ctx, base);
	// lwz r3,26296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82147168
	if (ctx.cr6.eq) goto loc_82147168;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82147164
	if (!ctx.cr6.eq) goto loc_82147164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82147148;
	sub_82177868(ctx, base);
	// lwz r11,26296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,26296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25088, ctx.r11.u32);
	// bl 0x82177a20
	ctx.lr = 0x82147160;
	sub_82177A20(ctx, base);
	// b 0x82147168
	goto loc_82147168;
loc_82147164:
	// bl 0x82177978
	ctx.lr = 0x82147168;
	sub_82177978(ctx, base);
loc_82147168:
	// bl 0x82177858
	ctx.lr = 0x8214716C;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26296, ctx.r3.u32);
	// bne 0x8214711c
	if (!ctx.cr0.eq) goto loc_8214711C;
loc_8214717C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821470F8) {
	__imp__sub_821470F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82147184) {
	__imp__sub_82147184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147188) {
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
	// lwz r4,28244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// bl 0x821778d8
	ctx.lr = 0x821471A8;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821471fc
	if (ctx.cr6.eq) goto loc_821471FC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821471f8
	if (!ctx.cr6.eq) goto loc_821471F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821471C8;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x821471E4;
	sub_821779A0(ctx, base);
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
loc_821471F8:
	// bl 0x82177978
	ctx.lr = 0x821471FC;
	sub_82177978(ctx, base);
loc_821471FC:
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

PPC_WEAK_FUNC(sub_82147188) {
	__imp__sub_82147188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147210) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147210) {
	__imp__sub_82147210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82147220;
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
	// lwz r4,28244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// bl 0x821778d8
	ctx.lr = 0x82147238;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,28244(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// ble cr6,0x821472a8
	if (!ctx.cr6.gt) goto loc_821472A8;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82147248:
	// stw r29,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214725C;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214729c
	if (ctx.cr6.eq) goto loc_8214729C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82147298
	if (!ctx.cr6.eq) goto loc_82147298;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8214727C;
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
	ctx.lr = 0x82147294;
	sub_821779A0(ctx, base);
	// b 0x8214729c
	goto loc_8214729C;
loc_82147298:
	// bl 0x82177978
	ctx.lr = 0x8214729C;
	sub_82177978(ctx, base);
loc_8214729C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82147248
	if (!ctx.cr0.eq) goto loc_82147248;
loc_821472A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147218) {
	__imp__sub_82147218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821472B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821472B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82147334
	if (!ctx.cr6.gt) goto loc_82147334;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,28244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
loc_821472D4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821472E0;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82147320
	if (ctx.cr6.eq) goto loc_82147320;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214731c
	if (!ctx.cr6.eq) goto loc_8214731C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82147300;
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
	ctx.lr = 0x82147318;
	sub_821779A0(ctx, base);
	// b 0x82147320
	goto loc_82147320;
loc_8214731C:
	// bl 0x82177978
	ctx.lr = 0x82147320;
	sub_82177978(ctx, base);
loc_82147320:
	// bl 0x82177858
	ctx.lr = 0x82147324;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r3.u32);
	// bne 0x821472d4
	if (!ctx.cr0.eq) goto loc_821472D4;
loc_82147334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821472B0) {
	__imp__sub_821472B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214733C) {
	__imp__sub_8214733C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147340) {
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
	// lwz r4,27664(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
	// bl 0x821778d8
	ctx.lr = 0x82147360;
	sub_821778D8(ctx, base);
	// lwz r3,27664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821473b8
	if (ctx.cr6.eq) goto loc_821473B8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821473b4
	if (!ctx.cr6.eq) goto loc_821473B4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82147380;
	sub_82177868(ctx, base);
	// lwz r11,27664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821473A0;
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
loc_821473B4:
	// bl 0x82177978
	ctx.lr = 0x821473B8;
	sub_82177978(ctx, base);
loc_821473B8:
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

PPC_WEAK_FUNC(sub_82147340) {
	__imp__sub_82147340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821473CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821473CC) {
	__imp__sub_821473CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821473D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821473D0) {
	__imp__sub_821473D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821473D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821473E0;
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
	// lwz r4,27664(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
	// bl 0x821778d8
	ctx.lr = 0x821473F8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,27664(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
	// ble cr6,0x8214746c
	if (!ctx.cr6.gt) goto loc_8214746C;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82147408:
	// stw r29,27664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27664, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214741C;
	sub_821778D8(ctx, base);
	// lwz r3,27664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82147460
	if (ctx.cr6.eq) goto loc_82147460;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214745c
	if (!ctx.cr6.eq) goto loc_8214745C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8214743C;
	sub_82177868(ctx, base);
	// lwz r11,27664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82147458;
	sub_82147188(ctx, base);
	// b 0x82147460
	goto loc_82147460;
loc_8214745C:
	// bl 0x82177978
	ctx.lr = 0x82147460;
	sub_82177978(ctx, base);
loc_82147460:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82147408
	if (!ctx.cr0.eq) goto loc_82147408;
loc_8214746C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821473D8) {
	__imp__sub_821473D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82147474) {
	__imp__sub_82147474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82147480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82147500
	if (!ctx.cr6.gt) goto loc_82147500;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27664(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
loc_8214749C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821474A8;
	sub_821778D8(ctx, base);
	// lwz r3,27664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821474ec
	if (ctx.cr6.eq) goto loc_821474EC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821474e8
	if (!ctx.cr6.eq) goto loc_821474E8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821474C8;
	sub_82177868(ctx, base);
	// lwz r11,27664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,27664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27664);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821474E4;
	sub_82147188(ctx, base);
	// b 0x821474ec
	goto loc_821474EC;
loc_821474E8:
	// bl 0x82177978
	ctx.lr = 0x821474EC;
	sub_82177978(ctx, base);
loc_821474EC:
	// bl 0x82177858
	ctx.lr = 0x821474F0;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27664, ctx.r3.u32);
	// bne 0x8214749c
	if (!ctx.cr0.eq) goto loc_8214749C;
loc_82147500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147478) {
	__imp__sub_82147478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147508) {
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
	// lwz r4,27824(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// bl 0x821778d8
	ctx.lr = 0x82147528;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82147530;
	sub_82177758(ctx, base);
	// lwz r11,27824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82147570
	if (ctx.cr6.eq) goto loc_82147570;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82147548;
	sub_82177868(ctx, base);
	// lwz r11,27824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,26296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26296, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82147060
	ctx.lr = 0x82147570;
	sub_82147060(ctx, base);
loc_82147570:
	// bl 0x821777e0
	ctx.lr = 0x82147574;
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

PPC_WEAK_FUNC(sub_82147508) {
	__imp__sub_82147508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147588) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147588) {
	__imp__sub_82147588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82147598;
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
	// lwz r4,27824(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// bl 0x821778d8
	ctx.lr = 0x821475B0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,27824(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// ble cr6,0x82147628
	if (!ctx.cr6.gt) goto loc_82147628;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_821475C0:
	// stw r29,27824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27824, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821475D4;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x821475DC;
	sub_82177758(ctx, base);
	// lwz r11,27824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82147618
	if (ctx.cr6.eq) goto loc_82147618;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821475F4;
	sub_82177868(ctx, base);
	// lwz r11,27824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,26296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26296, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82147060
	ctx.lr = 0x82147618;
	sub_82147060(ctx, base);
loc_82147618:
	// bl 0x821777e0
	ctx.lr = 0x8214761C;
	sub_821777E0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x821475c0
	if (!ctx.cr0.eq) goto loc_821475C0;
loc_82147628:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147590) {
	__imp__sub_82147590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82147638;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821476bc
	if (!ctx.cr6.gt) goto loc_821476BC;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27824(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
loc_82147654:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82147660;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82147668;
	sub_82177758(ctx, base);
	// lwz r11,27824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821476a4
	if (ctx.cr6.eq) goto loc_821476A4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82147680;
	sub_82177868(ctx, base);
	// lwz r11,27824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,27824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27824);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,26296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26296, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82147060
	ctx.lr = 0x821476A4;
	sub_82147060(ctx, base);
loc_821476A4:
	// bl 0x821777e0
	ctx.lr = 0x821476A8;
	sub_821777E0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821476AC;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27824, ctx.r3.u32);
	// bne 0x82147654
	if (!ctx.cr0.eq) goto loc_82147654;
loc_821476BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147630) {
	__imp__sub_82147630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821476C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821476C4) {
	__imp__sub_821476C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821476C8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,25908(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25908);
	// bl 0x821778d8
	ctx.lr = 0x821476E8;
	sub_821778D8(ctx, base);
	// lwz r4,25908(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25908);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,26260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26260, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82147700;
	sub_821778D8(ctx, base);
	// lwz r3,25908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25908);
	// bl 0x82177020
	ctx.lr = 0x82147708;
	sub_82177020(ctx, base);
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

PPC_WEAK_FUNC(sub_821476C8) {
	__imp__sub_821476C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214771C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214771C) {
	__imp__sub_8214771C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147720) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147720) {
	__imp__sub_82147720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82147730;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,25908(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25908);
	// bl 0x821778d8
	ctx.lr = 0x82147748;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,25908(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25908);
	// ble cr6,0x82147794
	if (!ctx.cr6.gt) goto loc_82147794;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82147758:
	// stw r31,25908(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25908, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8214776C;
	sub_821778D8(ctx, base);
	// lwz r4,25908(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25908);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,26260(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26260, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82147780;
	sub_821778D8(ctx, base);
	// lwz r3,25908(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25908);
	// bl 0x82177020
	ctx.lr = 0x82147788;
	sub_82177020(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x82147758
	if (!ctx.cr0.eq) goto loc_82147758;
loc_82147794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147728) {
	__imp__sub_82147728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214779C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214779C) {
	__imp__sub_8214779C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821477A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821477A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82147800
	if (!ctx.cr6.gt) goto loc_82147800;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25908(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25908);
loc_821477C4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821477D0;
	sub_821778D8(ctx, base);
	// lwz r4,25908(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25908);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,26260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26260, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821477E4;
	sub_821778D8(ctx, base);
	// lwz r3,25908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25908);
	// bl 0x82177020
	ctx.lr = 0x821477EC;
	sub_82177020(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821477F0;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25908, ctx.r3.u32);
	// bne 0x821477c4
	if (!ctx.cr0.eq) goto loc_821477C4;
loc_82147800:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821477A0) {
	__imp__sub_821477A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,27704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27704);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147808) {
	__imp__sub_82147808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147818) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147818) {
	__imp__sub_82147818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,27704(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27704);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82147820) {
	__imp__sub_82147820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82147878
	if (!ctx.cr6.gt) goto loc_82147878;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27704(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27704);
loc_82147858:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82147864;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82147868;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27704, ctx.r3.u32);
	// bne 0x82147858
	if (!ctx.cr0.eq) goto loc_82147858;
loc_82147878:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147830) {
	__imp__sub_82147830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147890) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147890) {
	__imp__sub_82147890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147898) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147898) {
	__imp__sub_82147898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821478A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821478A0) {
	__imp__sub_821478A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821478A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821478A8) {
	__imp__sub_821478A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821478B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821478B0) {
	__imp__sub_821478B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821478B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821478B8) {
	__imp__sub_821478B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821478C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821478C0) {
	__imp__sub_821478C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821478C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821478C8) {
	__imp__sub_821478C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821478D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821478D0) {
	__imp__sub_821478D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821478D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821478D8) {
	__imp__sub_821478D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821478E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821478E0) {
	__imp__sub_821478E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821478E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821478E8) {
	__imp__sub_821478E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821478F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821478F0) {
	__imp__sub_821478F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821478F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821478F8) {
	__imp__sub_821478F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147900) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147900) {
	__imp__sub_82147900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147908) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147908) {
	__imp__sub_82147908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147910) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147910) {
	__imp__sub_82147910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147918) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147918) {
	__imp__sub_82147918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147920) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147920) {
	__imp__sub_82147920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147928) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147928) {
	__imp__sub_82147928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147930) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147930) {
	__imp__sub_82147930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147938) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147938) {
	__imp__sub_82147938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147940) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147940) {
	__imp__sub_82147940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147948) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147948) {
	__imp__sub_82147948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147950) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147950) {
	__imp__sub_82147950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147958) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147958) {
	__imp__sub_82147958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147960) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147960) {
	__imp__sub_82147960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147968) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147968) {
	__imp__sub_82147968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147970) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147970) {
	__imp__sub_82147970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147978) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147978) {
	__imp__sub_82147978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147980) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147980) {
	__imp__sub_82147980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147988) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147988) {
	__imp__sub_82147988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147990) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147990) {
	__imp__sub_82147990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82147998) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82147998) {
	__imp__sub_82147998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821479A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821479A0) {
	__imp__sub_821479A0(ctx, base);
}

