#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8215DFA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DFA0) {
	__imp__sub_8215DFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215DFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215DFB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mulli r5,r4,392
	ctx.r5.s64 = ctx.r4.s64 * 392;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,27884(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27884);
	// bl 0x821778d8
	ctx.lr = 0x8215DFC8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,27884(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27884);
	// ble cr6,0x8215e024
	if (!ctx.cr6.gt) goto loc_8215E024;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8215DFD8:
	// stw r31,27884(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27884, ctx.r31.u32);
	// li r5,392
	ctx.r5.s64 = 392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215DFEC;
	sub_821778D8(ctx, base);
	// lwz r11,27884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27884);
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8215E000;
	sub_82147218(ctx, base);
	// lwz r11,27884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27884);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8215E018;
	sub_82147218(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,392
	ctx.r31.s64 = ctx.r31.s64 + 392;
	// bne 0x8215dfd8
	if (!ctx.cr0.eq) goto loc_8215DFD8;
loc_8215E024:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215DFA8) {
	__imp__sub_8215DFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215E02C) {
	__imp__sub_8215E02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215E038;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215e0a0
	if (!ctx.cr6.gt) goto loc_8215E0A0;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27884(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27884);
loc_8215E054:
	// li r5,392
	ctx.r5.s64 = 392;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215E060;
	sub_821778D8(ctx, base);
	// lwz r11,27884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27884);
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8215E074;
	sub_82147218(ctx, base);
	// lwz r11,27884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27884);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8215E08C;
	sub_82147218(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215E090;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27884, ctx.r3.u32);
	// bne 0x8215e054
	if (!ctx.cr0.eq) goto loc_8215E054;
loc_8215E0A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E030) {
	__imp__sub_8215E030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E0A8) {
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
	// lwz r4,26388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
	// bl 0x821778d8
	ctx.lr = 0x8215E0C8;
	sub_821778D8(ctx, base);
	// lwz r11,26388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e100
	if (ctx.cr6.eq) goto loc_8215E100;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215E0E0;
	sub_82177868(ctx, base);
	// lwz r11,26388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,27884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27884, ctx.r11.u32);
	// bl 0x8215df30
	ctx.lr = 0x8215E100;
	sub_8215DF30(ctx, base);
loc_8215E100:
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

PPC_WEAK_FUNC(sub_8215E0A8) {
	__imp__sub_8215E0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215E114) {
	__imp__sub_8215E114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E118) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E118) {
	__imp__sub_8215E118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215E128;
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
	// lwz r4,26388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
	// bl 0x821778d8
	ctx.lr = 0x8215E140;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r28,26388(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
	// ble cr6,0x8215e1dc
	if (!ctx.cr6.gt) goto loc_8215E1DC;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215E158:
	// stw r28,26388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26388, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215E16C;
	sub_821778D8(ctx, base);
	// lwz r11,26388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e1d0
	if (ctx.cr6.eq) goto loc_8215E1D0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215E184;
	sub_82177868(ctx, base);
	// lwz r11,26388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
	// li r5,392
	ctx.r5.s64 = 392;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27884(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27884, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215E1A4;
	sub_821778D8(ctx, base);
	// lwz r11,27884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27884);
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8215E1B8;
	sub_82147218(ctx, base);
	// lwz r11,27884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27884);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8215E1D0;
	sub_82147218(ctx, base);
loc_8215E1D0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8215e158
	if (!ctx.cr0.eq) goto loc_8215E158;
loc_8215E1DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E120) {
	__imp__sub_8215E120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215E1E4) {
	__imp__sub_8215E1E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215E1F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215e294
	if (!ctx.cr6.gt) goto loc_8215E294;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,26388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
loc_8215E210:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215E21C;
	sub_821778D8(ctx, base);
	// lwz r11,26388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e280
	if (ctx.cr6.eq) goto loc_8215E280;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215E234;
	sub_82177868(ctx, base);
	// lwz r11,26388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
	// li r5,392
	ctx.r5.s64 = 392;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26388);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27884(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27884, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215E254;
	sub_821778D8(ctx, base);
	// lwz r11,27884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27884);
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8215E268;
	sub_82147218(ctx, base);
	// lwz r11,27884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27884);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28244, ctx.r11.u32);
	// bl 0x82147218
	ctx.lr = 0x8215E280;
	sub_82147218(ctx, base);
loc_8215E280:
	// bl 0x82177858
	ctx.lr = 0x8215E284;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26388, ctx.r3.u32);
	// bne 0x8215e210
	if (!ctx.cr0.eq) goto loc_8215E210;
loc_8215E294:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E1E8) {
	__imp__sub_8215E1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215E29C) {
	__imp__sub_8215E29C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r4,25952(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25952);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E2A0) {
	__imp__sub_8215E2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E2B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E2B0) {
	__imp__sub_8215E2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,28
	ctx.r5.s64 = ctx.r4.s64 * 28;
	// lwz r4,25952(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25952);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E2B8) {
	__imp__sub_8215E2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x8215e310
	if (!ctx.cr6.gt) goto loc_8215E310;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25952(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25952);
loc_8215E2F0:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215E2FC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215E300;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25952(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25952, ctx.r3.u32);
	// bne 0x8215e2f0
	if (!ctx.cr0.eq) goto loc_8215E2F0;
loc_8215E310:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215E2C8) {
	__imp__sub_8215E2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E328) {
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
	// lwz r4,26008(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
	// bl 0x821778d8
	ctx.lr = 0x8215E348;
	sub_821778D8(ctx, base);
	// lwz r11,26008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e384
	if (ctx.cr6.eq) goto loc_8215E384;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215E360;
	sub_82177868(ctx, base);
	// lwz r11,26008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25952, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215E384;
	sub_821778D8(ctx, base);
loc_8215E384:
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

PPC_WEAK_FUNC(sub_8215E328) {
	__imp__sub_8215E328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E398) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E398) {
	__imp__sub_8215E398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215E3A8;
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
	// lwz r4,26008(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
	// bl 0x821778d8
	ctx.lr = 0x8215E3C0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,26008(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
	// ble cr6,0x8215e428
	if (!ctx.cr6.gt) goto loc_8215E428;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8215E3D0:
	// stw r29,26008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26008, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215E3E4;
	sub_821778D8(ctx, base);
	// lwz r11,26008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e41c
	if (ctx.cr6.eq) goto loc_8215E41C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215E3FC;
	sub_82177868(ctx, base);
	// lwz r11,26008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25952(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25952, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215E41C;
	sub_821778D8(ctx, base);
loc_8215E41C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8215e3d0
	if (!ctx.cr0.eq) goto loc_8215E3D0;
loc_8215E428:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E3A0) {
	__imp__sub_8215E3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215E438;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215e4ac
	if (!ctx.cr6.gt) goto loc_8215E4AC;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,26008(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
loc_8215E454:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215E460;
	sub_821778D8(ctx, base);
	// lwz r11,26008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e498
	if (ctx.cr6.eq) goto loc_8215E498;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215E478;
	sub_82177868(ctx, base);
	// lwz r11,26008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26008);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,25952(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25952, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215E498;
	sub_821778D8(ctx, base);
loc_8215E498:
	// bl 0x82177858
	ctx.lr = 0x8215E49C;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26008, ctx.r3.u32);
	// bne 0x8215e454
	if (!ctx.cr0.eq) goto loc_8215E454;
loc_8215E4AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E430) {
	__imp__sub_8215E430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215E4B4) {
	__imp__sub_8215E4B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26332(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26332);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E4B8) {
	__imp__sub_8215E4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E4C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E4C8) {
	__imp__sub_8215E4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26332(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26332);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E4D0) {
	__imp__sub_8215E4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x8215e528
	if (!ctx.cr6.gt) goto loc_8215E528;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26332(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26332);
loc_8215E508:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215E514;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215E518;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26332, ctx.r3.u32);
	// bne 0x8215e508
	if (!ctx.cr0.eq) goto loc_8215E508;
loc_8215E528:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215E4E0) {
	__imp__sub_8215E4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E540) {
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
	// lwz r4,26944(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
	// bl 0x821778d8
	ctx.lr = 0x8215E560;
	sub_821778D8(ctx, base);
	// lwz r11,26944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e59c
	if (ctx.cr6.eq) goto loc_8215E59C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215E578;
	sub_82177868(ctx, base);
	// lwz r11,26944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26332, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215E59C;
	sub_821778D8(ctx, base);
loc_8215E59C:
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

PPC_WEAK_FUNC(sub_8215E540) {
	__imp__sub_8215E540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E5B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E5B0) {
	__imp__sub_8215E5B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215E5C0;
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
	// lwz r4,26944(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
	// bl 0x821778d8
	ctx.lr = 0x8215E5D8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,26944(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
	// ble cr6,0x8215e640
	if (!ctx.cr6.gt) goto loc_8215E640;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8215E5E8:
	// stw r29,26944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26944, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215E5FC;
	sub_821778D8(ctx, base);
	// lwz r11,26944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e634
	if (ctx.cr6.eq) goto loc_8215E634;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215E614;
	sub_82177868(ctx, base);
	// lwz r11,26944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26332(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26332, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215E634;
	sub_821778D8(ctx, base);
loc_8215E634:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8215e5e8
	if (!ctx.cr0.eq) goto loc_8215E5E8;
loc_8215E640:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E5B8) {
	__imp__sub_8215E5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215E650;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215e6c4
	if (!ctx.cr6.gt) goto loc_8215E6C4;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,26944(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
loc_8215E66C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215E678;
	sub_821778D8(ctx, base);
	// lwz r11,26944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e6b0
	if (ctx.cr6.eq) goto loc_8215E6B0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215E690;
	sub_82177868(ctx, base);
	// lwz r11,26944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26944);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26332, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215E6B0;
	sub_821778D8(ctx, base);
loc_8215E6B0:
	// bl 0x82177858
	ctx.lr = 0x8215E6B4;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26944, ctx.r3.u32);
	// bne 0x8215e66c
	if (!ctx.cr0.eq) goto loc_8215E66C;
loc_8215E6C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E648) {
	__imp__sub_8215E648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215E6CC) {
	__imp__sub_8215E6CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r4,26884(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26884);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E6D0) {
	__imp__sub_8215E6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E6E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E6E0) {
	__imp__sub_8215E6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E6E8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26884(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26884);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E6E8) {
	__imp__sub_8215E6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x8215e748
	if (!ctx.cr6.gt) goto loc_8215E748;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26884(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26884);
loc_8215E728:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215E734;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215E738;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26884(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26884, ctx.r3.u32);
	// bne 0x8215e728
	if (!ctx.cr0.eq) goto loc_8215E728;
loc_8215E748:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215E700) {
	__imp__sub_8215E700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r4,28312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28312);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E760) {
	__imp__sub_8215E760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E770) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E770) {
	__imp__sub_8215E770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E778) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28312(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28312);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E778) {
	__imp__sub_8215E778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x8215e7d8
	if (!ctx.cr6.gt) goto loc_8215E7D8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28312(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28312);
loc_8215E7B8:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215E7C4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215E7C8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28312, ctx.r3.u32);
	// bne 0x8215e7b8
	if (!ctx.cr0.eq) goto loc_8215E7B8;
loc_8215E7D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215E790) {
	__imp__sub_8215E790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,176
	ctx.r5.s64 = 176;
	// lwz r4,27260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27260);
	// bl 0x821778d8
	ctx.lr = 0x8215E814;
	sub_821778D8(ctx, base);
	// lwz r11,27260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27260);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215E828;
	sub_82147188(ctx, base);
	// lwz r11,27260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27260);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215E83C;
	sub_82147188(ctx, base);
	// lwz r11,27260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27260);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8215E854;
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

PPC_WEAK_FUNC(sub_8215E7F0) {
	__imp__sub_8215E7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215E86C) {
	__imp__sub_8215E86C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E870) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E870) {
	__imp__sub_8215E870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8215E880;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mulli r5,r4,176
	ctx.r5.s64 = ctx.r4.s64 * 176;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// bl 0x821778d8
	ctx.lr = 0x8215E898;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r29,27260(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// ble cr6,0x8215e994
	if (!ctx.cr6.gt) goto loc_8215E994;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8215E8B4:
	// stw r29,27260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27260, ctx.r29.u32);
	// li r5,176
	ctx.r5.s64 = 176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215E8C8;
	sub_821778D8(ctx, base);
	// lwz r4,27260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215E8DC;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e91c
	if (ctx.cr6.eq) goto loc_8215E91C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215e918
	if (!ctx.cr6.eq) goto loc_8215E918;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215E8FC;
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
	ctx.lr = 0x8215E914;
	sub_821779A0(ctx, base);
	// b 0x8215e91c
	goto loc_8215E91C;
loc_8215E918:
	// bl 0x82177978
	ctx.lr = 0x8215E91C;
	sub_82177978(ctx, base);
loc_8215E91C:
	// lwz r11,27260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215E934;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e974
	if (ctx.cr6.eq) goto loc_8215E974;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215e970
	if (!ctx.cr6.eq) goto loc_8215E970;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215E954;
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
	ctx.lr = 0x8215E96C;
	sub_821779A0(ctx, base);
	// b 0x8215e974
	goto loc_8215E974;
loc_8215E970:
	// bl 0x82177978
	ctx.lr = 0x8215E974;
	sub_82177978(ctx, base);
loc_8215E974:
	// lwz r11,27260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// stw r11,25372(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8215E988;
	sub_82152400(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// bne 0x8215e8b4
	if (!ctx.cr0.eq) goto loc_8215E8B4;
loc_8215E994:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E878) {
	__imp__sub_8215E878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215E99C) {
	__imp__sub_8215E99C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215E9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215E9A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215eaac
	if (!ctx.cr6.gt) goto loc_8215EAAC;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,27260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
loc_8215E9CC:
	// li r5,176
	ctx.r5.s64 = 176;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215E9D8;
	sub_821778D8(ctx, base);
	// lwz r4,27260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215E9EC;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215ea2c
	if (ctx.cr6.eq) goto loc_8215EA2C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215ea28
	if (!ctx.cr6.eq) goto loc_8215EA28;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215EA0C;
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
	ctx.lr = 0x8215EA24;
	sub_821779A0(ctx, base);
	// b 0x8215ea2c
	goto loc_8215EA2C;
loc_8215EA28:
	// bl 0x82177978
	ctx.lr = 0x8215EA2C;
	sub_82177978(ctx, base);
loc_8215EA2C:
	// lwz r11,27260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215EA44;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215ea84
	if (ctx.cr6.eq) goto loc_8215EA84;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215ea80
	if (!ctx.cr6.eq) goto loc_8215EA80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215EA64;
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
	ctx.lr = 0x8215EA7C;
	sub_821779A0(ctx, base);
	// b 0x8215ea84
	goto loc_8215EA84;
loc_8215EA80:
	// bl 0x82177978
	ctx.lr = 0x8215EA84;
	sub_82177978(ctx, base);
loc_8215EA84:
	// lwz r11,27260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// stw r11,25372(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8215EA98;
	sub_82152400(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215EA9C;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27260, ctx.r3.u32);
	// bne 0x8215e9cc
	if (!ctx.cr0.eq) goto loc_8215E9CC;
loc_8215EAAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215E9A0) {
	__imp__sub_8215E9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215EAB4) {
	__imp__sub_8215EAB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EAB8) {
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
	// li r5,176
	ctx.r5.s64 = 176;
	// lwz r4,28444(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28444);
	// bl 0x821778d8
	ctx.lr = 0x8215EAD8;
	sub_821778D8(ctx, base);
	// lwz r11,28444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28444);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,27260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27260, ctx.r11.u32);
	// bl 0x8215e7f0
	ctx.lr = 0x8215EAEC;
	sub_8215E7F0(ctx, base);
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

PPC_WEAK_FUNC(sub_8215EAB8) {
	__imp__sub_8215EAB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EB00) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EB00) {
	__imp__sub_8215EB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8215EB10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mulli r5,r4,176
	ctx.r5.s64 = ctx.r4.s64 * 176;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28444(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28444);
	// bl 0x821778d8
	ctx.lr = 0x8215EB28;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r29,28444(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28444);
	// ble cr6,0x8215ec3c
	if (!ctx.cr6.gt) goto loc_8215EC3C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215EB48:
	// stw r29,28444(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28444, ctx.r29.u32);
	// li r5,176
	ctx.r5.s64 = 176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215EB5C;
	sub_821778D8(ctx, base);
	// lwz r4,28444(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28444);
	// li r5,176
	ctx.r5.s64 = 176;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27260, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215EB70;
	sub_821778D8(ctx, base);
	// lwz r4,27260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215EB84;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215ebc4
	if (ctx.cr6.eq) goto loc_8215EBC4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215ebc0
	if (!ctx.cr6.eq) goto loc_8215EBC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215EBA4;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8215EBBC;
	sub_821779A0(ctx, base);
	// b 0x8215ebc4
	goto loc_8215EBC4;
loc_8215EBC0:
	// bl 0x82177978
	ctx.lr = 0x8215EBC4;
	sub_82177978(ctx, base);
loc_8215EBC4:
	// lwz r11,27260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215EBDC;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215ec1c
	if (ctx.cr6.eq) goto loc_8215EC1C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215ec18
	if (!ctx.cr6.eq) goto loc_8215EC18;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215EBFC;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8215EC14;
	sub_821779A0(ctx, base);
	// b 0x8215ec1c
	goto loc_8215EC1C;
loc_8215EC18:
	// bl 0x82177978
	ctx.lr = 0x8215EC1C;
	sub_82177978(ctx, base);
loc_8215EC1C:
	// lwz r11,27260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// stw r11,25372(r25)
	PPC_STORE_U32(ctx.r25.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8215EC30;
	sub_82152400(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// bne 0x8215eb48
	if (!ctx.cr0.eq) goto loc_8215EB48;
loc_8215EC3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EB08) {
	__imp__sub_8215EB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215EC44) {
	__imp__sub_8215EC44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8215EC50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215ed6c
	if (!ctx.cr6.gt) goto loc_8215ED6C;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,28444(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28444);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215EC78:
	// li r5,176
	ctx.r5.s64 = 176;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215EC84;
	sub_821778D8(ctx, base);
	// lwz r4,28444(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28444);
	// li r5,176
	ctx.r5.s64 = 176;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,27260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27260, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215EC98;
	sub_821778D8(ctx, base);
	// lwz r4,27260(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215ECAC;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215ecec
	if (ctx.cr6.eq) goto loc_8215ECEC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215ece8
	if (!ctx.cr6.eq) goto loc_8215ECE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215ECCC;
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
	ctx.lr = 0x8215ECE4;
	sub_821779A0(ctx, base);
	// b 0x8215ecec
	goto loc_8215ECEC;
loc_8215ECE8:
	// bl 0x82177978
	ctx.lr = 0x8215ECEC;
	sub_82177978(ctx, base);
loc_8215ECEC:
	// lwz r11,27260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215ED04;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215ed44
	if (ctx.cr6.eq) goto loc_8215ED44;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215ed40
	if (!ctx.cr6.eq) goto loc_8215ED40;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215ED24;
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
	ctx.lr = 0x8215ED3C;
	sub_821779A0(ctx, base);
	// b 0x8215ed44
	goto loc_8215ED44;
loc_8215ED40:
	// bl 0x82177978
	ctx.lr = 0x8215ED44;
	sub_82177978(ctx, base);
loc_8215ED44:
	// lwz r11,27260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27260);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// stw r11,25372(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8215ED58;
	sub_82152400(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215ED5C;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28444(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28444, ctx.r3.u32);
	// bne 0x8215ec78
	if (!ctx.cr0.eq) goto loc_8215EC78;
loc_8215ED6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EC48) {
	__imp__sub_8215EC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215ED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215ED74) {
	__imp__sub_8215ED74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215ED78) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215ED78) {
	__imp__sub_8215ED78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215ED80) {
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
	// lwz r4,27496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27496);
	// bl 0x821778d8
	ctx.lr = 0x8215EDA0;
	sub_821778D8(ctx, base);
	// lwz r11,27496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27496);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26168, ctx.r11.u32);
	// bl 0x821700c0
	ctx.lr = 0x8215EDB4;
	sub_821700C0(ctx, base);
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

PPC_WEAK_FUNC(sub_8215ED80) {
	__imp__sub_8215ED80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EDC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EDC8) {
	__imp__sub_8215EDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215EDD8;
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
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27496(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27496);
	// bl 0x821778d8
	ctx.lr = 0x8215EDF8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r31,27496(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27496);
	// ble cr6,0x8215ee38
	if (!ctx.cr6.gt) goto loc_8215EE38;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8215EE08:
	// stw r31,27496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27496, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215EE1C;
	sub_821778D8(ctx, base);
	// lwz r11,27496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27496);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26168(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26168, ctx.r11.u32);
	// bl 0x821700c0
	ctx.lr = 0x8215EE2C;
	sub_821700C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x8215ee08
	if (!ctx.cr0.eq) goto loc_8215EE08;
loc_8215EE38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EDD0) {
	__imp__sub_8215EDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215EE48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215ee94
	if (!ctx.cr6.gt) goto loc_8215EE94;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,27496(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27496);
loc_8215EE64:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215EE70;
	sub_821778D8(ctx, base);
	// lwz r11,27496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27496);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26168, ctx.r11.u32);
	// bl 0x821700c0
	ctx.lr = 0x8215EE80;
	sub_821700C0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215EE84;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27496, ctx.r3.u32);
	// bne 0x8215ee64
	if (!ctx.cr0.eq) goto loc_8215EE64;
loc_8215EE94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EE40) {
	__imp__sub_8215EE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215EE9C) {
	__imp__sub_8215EE9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EEA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EEA0) {
	__imp__sub_8215EEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EEA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EEA8) {
	__imp__sub_8215EEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EEB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EEB0) {
	__imp__sub_8215EEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EEB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EEB8) {
	__imp__sub_8215EEB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EEC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EEC0) {
	__imp__sub_8215EEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EEC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EEC8) {
	__imp__sub_8215EEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EED0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EED0) {
	__imp__sub_8215EED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EED8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EED8) {
	__imp__sub_8215EED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EEE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EEE0) {
	__imp__sub_8215EEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EEE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EEE8) {
	__imp__sub_8215EEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EEF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EEF0) {
	__imp__sub_8215EEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EEF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EEF8) {
	__imp__sub_8215EEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF00) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF00) {
	__imp__sub_8215EF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF08) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF08) {
	__imp__sub_8215EF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF10) {
	__imp__sub_8215EF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF18) {
	__imp__sub_8215EF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF20) {
	__imp__sub_8215EF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF28) {
	__imp__sub_8215EF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,26908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26908);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF30) {
	__imp__sub_8215EF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215EF44) {
	__imp__sub_8215EF44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF48) {
	__imp__sub_8215EF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF50) {
	__imp__sub_8215EF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF58) {
	__imp__sub_8215EF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF60) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF60) {
	__imp__sub_8215EF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF68) {
	__imp__sub_8215EF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF70) {
	__imp__sub_8215EF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF78) {
	__imp__sub_8215EF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF80) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF80) {
	__imp__sub_8215EF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF88) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215EF88) {
	__imp__sub_8215EF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EF90) {
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
	// lwz r11,26844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26844);
	// addi r11,r11,340
	ctx.r11.s64 = ctx.r11.s64 + 340;
	// stw r11,28604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215EFB4;
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

PPC_WEAK_FUNC(sub_8215EF90) {
	__imp__sub_8215EF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215EFCC) {
	__imp__sub_8215EFCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215EFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215EFD8;
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
	// lwz r31,26844(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26844);
	// ble cr6,0x8215f020
	if (!ctx.cr6.gt) goto loc_8215F020;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8215EFF8:
	// addi r11,r31,340
	ctx.r11.s64 = ctx.r31.s64 + 340;
	// stw r31,26844(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26844, ctx.r31.u32);
	// stw r11,28604(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215F008;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215f02c
	if (ctx.cr6.eq) goto loc_8215F02C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,344
	ctx.r31.s64 = ctx.r31.s64 + 344;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8215eff8
	if (ctx.cr6.lt) goto loc_8215EFF8;
loc_8215F020:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8215F02C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215EFD0) {
	__imp__sub_8215EFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F038) {
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
	// lwz r11,27744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27744);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215f080
	if (ctx.cr6.eq) goto loc_8215F080;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// addi r10,r11,340
	ctx.r10.s64 = ctx.r11.s64 + 340;
	// stw r11,26844(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26844, ctx.r11.u32);
	// stw r10,28604(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28604, ctx.r10.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215F074;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215f084
	if (ctx.cr6.eq) goto loc_8215F084;
loc_8215F080:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215F084:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F038) {
	__imp__sub_8215F038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F094) {
	__imp__sub_8215F094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8215F0A0;
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
	// lwz r31,27744(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27744);
	// ble cr6,0x8215f100
	if (!ctx.cr6.gt) goto loc_8215F100;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8215F0C4:
	// stw r31,27744(r26)
	PPC_STORE_U32(ctx.r26.u32 + 27744, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f0f0
	if (ctx.cr6.eq) goto loc_8215F0F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r11,340
	ctx.r10.s64 = ctx.r11.s64 + 340;
	// stw r11,26844(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26844, ctx.r11.u32);
	// stw r10,28604(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28604, ctx.r10.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215F0E8;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215f10c
	if (ctx.cr6.eq) goto loc_8215F10C;
loc_8215F0F0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8215f0c4
	if (ctx.cr6.lt) goto loc_8215F0C4;
loc_8215F100:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8215F10C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215F098) {
	__imp__sub_8215F098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F118) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F118) {
	__imp__sub_8215F118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F120) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F120) {
	__imp__sub_8215F120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F128) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F128) {
	__imp__sub_8215F128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F130) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F130) {
	__imp__sub_8215F130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F138) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F138) {
	__imp__sub_8215F138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F140) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F140) {
	__imp__sub_8215F140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F148) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F148) {
	__imp__sub_8215F148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F150) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F150) {
	__imp__sub_8215F150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F158) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F158) {
	__imp__sub_8215F158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F160) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F160) {
	__imp__sub_8215F160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F168) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F168) {
	__imp__sub_8215F168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F170) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F170) {
	__imp__sub_8215F170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F178) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F178) {
	__imp__sub_8215F178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F180) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F180) {
	__imp__sub_8215F180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F188) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F188) {
	__imp__sub_8215F188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F190) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F190) {
	__imp__sub_8215F190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F198) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F198) {
	__imp__sub_8215F198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F1A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F1A0) {
	__imp__sub_8215F1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F1A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F1A8) {
	__imp__sub_8215F1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F1B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F1B0) {
	__imp__sub_8215F1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F1B8) {
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
	// lwz r11,25448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25448);
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// stw r11,28604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215F1DC;
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

PPC_WEAK_FUNC(sub_8215F1B8) {
	__imp__sub_8215F1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F1F4) {
	__imp__sub_8215F1F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215F200;
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
	// lwz r31,25448(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25448);
	// ble cr6,0x8215f248
	if (!ctx.cr6.gt) goto loc_8215F248;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8215F220:
	// addi r11,r31,172
	ctx.r11.s64 = ctx.r31.s64 + 172;
	// stw r31,25448(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25448, ctx.r31.u32);
	// stw r11,28604(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215F230;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215f254
	if (ctx.cr6.eq) goto loc_8215F254;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8215f220
	if (ctx.cr6.lt) goto loc_8215F220;
loc_8215F248:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8215F254:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215F1F8) {
	__imp__sub_8215F1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F260) {
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
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// lwz r11,27928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27928);
	// addi r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 + 172;
	// stw r10,28604(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28604, ctx.r10.u32);
	// stw r11,25448(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25448, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215F28C;
	sub_82152EC8(ctx, base);
	// addic r7,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r7.s64 = ctx.r3.s64 + -1;
	// subfe r3,r7,r3
	temp.u8 = (~ctx.r7.u32 + ctx.r3.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_8215F260) {
	__imp__sub_8215F260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F2A4) {
	__imp__sub_8215F2A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8215F2B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27928(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27928);
	// ble cr6,0x8215f300
	if (!ctx.cr6.gt) goto loc_8215F300;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_8215F2D4:
	// addi r11,r31,172
	ctx.r11.s64 = ctx.r31.s64 + 172;
	// stw r31,27928(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27928, ctx.r31.u32);
	// stw r31,25448(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25448, ctx.r31.u32);
	// stw r11,28604(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215F2E8;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215f30c
	if (ctx.cr6.eq) goto loc_8215F30C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8215f2d4
	if (ctx.cr6.lt) goto loc_8215F2D4;
loc_8215F300:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8215F30C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215F2A8) {
	__imp__sub_8215F2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F318) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F318) {
	__imp__sub_8215F318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F320) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F320) {
	__imp__sub_8215F320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F328) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F328) {
	__imp__sub_8215F328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F330) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F330) {
	__imp__sub_8215F330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F338) {
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
	// lwz r11,25440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25440);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8215f384
	if (!ctx.cr6.eq) goto loc_8215F384;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27240);
	// stw r11,27744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27744, ctx.r11.u32);
	// bl 0x8215f038
	ctx.lr = 0x8215F36C;
	sub_8215F038(ctx, base);
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
loc_8215F384:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8215f3f0
	if (ctx.cr6.eq) goto loc_8215F3F0;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
loc_8215F3F0:
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

PPC_WEAK_FUNC(sub_8215F338) {
	__imp__sub_8215F338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F404) {
	__imp__sub_8215F404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215F410;
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
	// lwz r31,27240(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27240);
	// ble cr6,0x8215f44c
	if (!ctx.cr6.gt) goto loc_8215F44C;
loc_8215F42C:
	// stw r31,27240(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27240, ctx.r31.u32);
	// bl 0x8215f338
	ctx.lr = 0x8215F434;
	sub_8215F338(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215f458
	if (ctx.cr6.eq) goto loc_8215F458;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8215f42c
	if (ctx.cr6.lt) goto loc_8215F42C;
loc_8215F44C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8215F458:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215F408) {
	__imp__sub_8215F408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F464) {
	__imp__sub_8215F464(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F468) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F468) {
	__imp__sub_8215F468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F470) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F470) {
	__imp__sub_8215F470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F478) {
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
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// lis r7,-32142
	ctx.r7.s64 = -2106458112;
	// lwz r11,25440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25440);
	// addi r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 + 172;
	// stw r10,28604(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28604, ctx.r10.u32);
	// stw r11,27928(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27928, ctx.r11.u32);
	// stw r11,25448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25448, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215F4B0;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215f4d0
	if (!ctx.cr6.eq) goto loc_8215F4D0;
loc_8215F4B8:
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
loc_8215F4D0:
	// lwz r11,25440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25440);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,364
	ctx.r11.s64 = ctx.r11.s64 + 364;
	// stw r11,28076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28076, ctx.r11.u32);
	// bl 0x8214da98
	ctx.lr = 0x8215F4E4;
	sub_8214DA98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215f4b8
	if (ctx.cr6.eq) goto loc_8215F4B8;
	// lwz r11,25440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25440);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,388
	ctx.r11.s64 = ctx.r11.s64 + 388;
	// stw r11,27240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27240, ctx.r11.u32);
	// bl 0x8215f338
	ctx.lr = 0x8215F500;
	sub_8215F338(ctx, base);
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

PPC_WEAK_FUNC(sub_8215F478) {
	__imp__sub_8215F478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F51C) {
	__imp__sub_8215F51C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215F528;
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
	// lwz r31,25440(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25440);
	// ble cr6,0x8215f564
	if (!ctx.cr6.gt) goto loc_8215F564;
loc_8215F544:
	// stw r31,25440(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25440, ctx.r31.u32);
	// bl 0x8215f478
	ctx.lr = 0x8215F54C;
	sub_8215F478(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215f570
	if (ctx.cr6.eq) goto loc_8215F570;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,460
	ctx.r31.s64 = ctx.r31.s64 + 460;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8215f544
	if (ctx.cr6.lt) goto loc_8215F544;
loc_8215F564:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8215F570:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215F520) {
	__imp__sub_8215F520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F57C) {
	__imp__sub_8215F57C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F580) {
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
	// lwz r11,26304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26304);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215f5bc
	if (ctx.cr6.eq) goto loc_8215F5BC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r11,25440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25440, ctx.r11.u32);
	// bl 0x8215f478
	ctx.lr = 0x8215F5B0;
	sub_8215F478(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215f5c0
	if (ctx.cr6.eq) goto loc_8215F5C0;
loc_8215F5BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215F5C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F580) {
	__imp__sub_8215F580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215F5D8;
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
	// lwz r31,26304(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26304);
	// ble cr6,0x8215f62c
	if (!ctx.cr6.gt) goto loc_8215F62C;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8215F5F8:
	// stw r31,26304(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26304, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f61c
	if (ctx.cr6.eq) goto loc_8215F61C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,25440(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25440, ctx.r11.u32);
	// bl 0x8215f478
	ctx.lr = 0x8215F614;
	sub_8215F478(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215f638
	if (ctx.cr6.eq) goto loc_8215F638;
loc_8215F61C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8215f5f8
	if (ctx.cr6.lt) goto loc_8215F5F8;
loc_8215F62C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8215F638:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215F5D0) {
	__imp__sub_8215F5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F644) {
	__imp__sub_8215F644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F648) {
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
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// lis r7,-32142
	ctx.r7.s64 = -2106458112;
	// lwz r11,25496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25496);
	// addi r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 + 172;
	// stw r10,28604(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28604, ctx.r10.u32);
	// stw r11,27928(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27928, ctx.r11.u32);
	// stw r11,25448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25448, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x8215F680;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215f69c
	if (!ctx.cr6.eq) goto loc_8215F69C;
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
loc_8215F69C:
	// lwz r11,25496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25496);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215f6cc
	if (ctx.cr6.eq) goto loc_8215F6CC;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,26304(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26304, ctx.r10.u32);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x8215f5d0
	ctx.lr = 0x8215F6C0;
	sub_8215F5D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215f6d0
	if (ctx.cr6.eq) goto loc_8215F6D0;
loc_8215F6CC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215F6D0:
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

PPC_WEAK_FUNC(sub_8215F648) {
	__imp__sub_8215F648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F6E4) {
	__imp__sub_8215F6E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215F6F0;
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
	// lwz r31,25496(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25496);
	// ble cr6,0x8215f72c
	if (!ctx.cr6.gt) goto loc_8215F72C;
loc_8215F70C:
	// stw r31,25496(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25496, ctx.r31.u32);
	// bl 0x8215f648
	ctx.lr = 0x8215F714;
	sub_8215F648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215f738
	if (ctx.cr6.eq) goto loc_8215F738;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,752
	ctx.r31.s64 = ctx.r31.s64 + 752;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8215f70c
	if (ctx.cr6.lt) goto loc_8215F70C;
loc_8215F72C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8215F738:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215F6E8) {
	__imp__sub_8215F6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F744) {
	__imp__sub_8215F744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F748) {
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
	// lwz r11,25896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25896);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215f7c0
	if (ctx.cr6.eq) goto loc_8215F7C0;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25496, ctx.r3.u32);
	// bl 0x82175d90
	ctx.lr = 0x8215F780;
	sub_82175D90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215f7c0
	if (!ctx.cr6.eq) goto loc_8215F7C0;
	// bl 0x8215f648
	ctx.lr = 0x8215F78C;
	sub_8215F648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215f7a8
	if (!ctx.cr6.eq) goto loc_8215F7A8;
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
loc_8215F7A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25496);
	// bl 0x82175d90
	ctx.lr = 0x8215F7B4;
	sub_82175D90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215f7c4
	if (ctx.cr6.eq) goto loc_8215F7C4;
loc_8215F7C0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215F7C4:
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

PPC_WEAK_FUNC(sub_8215F748) {
	__imp__sub_8215F748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215F7E0;
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
	// lwz r31,25896(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25896);
	// ble cr6,0x8215f81c
	if (!ctx.cr6.gt) goto loc_8215F81C;
loc_8215F7FC:
	// stw r31,25896(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25896, ctx.r31.u32);
	// bl 0x8215f748
	ctx.lr = 0x8215F804;
	sub_8215F748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215f828
	if (ctx.cr6.eq) goto loc_8215F828;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8215f7fc
	if (ctx.cr6.lt) goto loc_8215F7FC;
loc_8215F81C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8215F828:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215F7D8) {
	__imp__sub_8215F7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F834) {
	__imp__sub_8215F834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F838) {
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
	// lwz r11,28296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28296);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215f878
	if (ctx.cr6.eq) goto loc_8215F878;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,25896(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25896, ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8215f7d8
	ctx.lr = 0x8215F86C;
	sub_8215F7D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215f87c
	if (ctx.cr6.eq) goto loc_8215F87C;
loc_8215F878:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215F87C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215F838) {
	__imp__sub_8215F838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F88C) {
	__imp__sub_8215F88C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215F898;
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
	// lwz r31,28296(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28296);
	// ble cr6,0x8215f8f0
	if (!ctx.cr6.gt) goto loc_8215F8F0;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_8215F8B8:
	// stw r31,28296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28296, ctx.r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215f8e0
	if (ctx.cr6.eq) goto loc_8215F8E0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,25896(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25896, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8215f7d8
	ctx.lr = 0x8215F8D8;
	sub_8215F7D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215f8fc
	if (ctx.cr6.eq) goto loc_8215F8FC;
loc_8215F8E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8215f8b8
	if (ctx.cr6.lt) goto loc_8215F8B8;
loc_8215F8F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8215F8FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215F890) {
	__imp__sub_8215F890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F908) {
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
	// lwz r11,26324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26324);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215f980
	if (ctx.cr6.eq) goto loc_8215F980;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28296, ctx.r3.u32);
	// bl 0x82175cc0
	ctx.lr = 0x8215F940;
	sub_82175CC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215f980
	if (!ctx.cr6.eq) goto loc_8215F980;
	// bl 0x8215f838
	ctx.lr = 0x8215F94C;
	sub_8215F838(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215f968
	if (!ctx.cr6.eq) goto loc_8215F968;
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
loc_8215F968:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28296);
	// bl 0x82175cc0
	ctx.lr = 0x8215F974;
	sub_82175CC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215f984
	if (ctx.cr6.eq) goto loc_8215F984;
loc_8215F980:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215F984:
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

PPC_WEAK_FUNC(sub_8215F908) {
	__imp__sub_8215F908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215F9A0;
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
	// lwz r31,26324(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26324);
	// ble cr6,0x8215f9dc
	if (!ctx.cr6.gt) goto loc_8215F9DC;
loc_8215F9BC:
	// stw r31,26324(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26324, ctx.r31.u32);
	// bl 0x8215f908
	ctx.lr = 0x8215F9C4;
	sub_8215F908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215f9e8
	if (ctx.cr6.eq) goto loc_8215F9E8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8215f9bc
	if (ctx.cr6.lt) goto loc_8215F9BC;
loc_8215F9DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8215F9E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215F998) {
	__imp__sub_8215F998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215F9F4) {
	__imp__sub_8215F9F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215F9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,25264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25264);
	// bl 0x821778d8
	ctx.lr = 0x8215FA1C;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8215FA24;
	sub_82177758(ctx, base);
	// lwz r11,25264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25264);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215FA38;
	sub_82147188(ctx, base);
	// lwz r11,25264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25264);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215FA4C;
	sub_82147188(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8215FA50;
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

PPC_WEAK_FUNC(sub_8215F9F8) {
	__imp__sub_8215F9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FA68) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215FA68) {
	__imp__sub_8215FA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215FA78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25264(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25264);
	// bl 0x821778d8
	ctx.lr = 0x8215FA90;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r29,25264(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25264);
	// ble cr6,0x8215fb80
	if (!ctx.cr6.gt) goto loc_8215FB80;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_8215FAA8:
	// stw r29,25264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25264, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215FABC;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8215FAC4;
	sub_82177758(ctx, base);
	// lwz r4,25264(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25264);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215FAD8;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215fb18
	if (ctx.cr6.eq) goto loc_8215FB18;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215fb14
	if (!ctx.cr6.eq) goto loc_8215FB14;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215FAF8;
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
	ctx.lr = 0x8215FB10;
	sub_821779A0(ctx, base);
	// b 0x8215fb18
	goto loc_8215FB18;
loc_8215FB14:
	// bl 0x82177978
	ctx.lr = 0x8215FB18;
	sub_82177978(ctx, base);
loc_8215FB18:
	// lwz r11,25264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25264);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215FB30;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215fb70
	if (ctx.cr6.eq) goto loc_8215FB70;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215fb6c
	if (!ctx.cr6.eq) goto loc_8215FB6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215FB50;
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
	ctx.lr = 0x8215FB68;
	sub_821779A0(ctx, base);
	// b 0x8215fb70
	goto loc_8215FB70;
loc_8215FB6C:
	// bl 0x82177978
	ctx.lr = 0x8215FB70;
	sub_82177978(ctx, base);
loc_8215FB70:
	// bl 0x821777e0
	ctx.lr = 0x8215FB74;
	sub_821777E0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8215faa8
	if (!ctx.cr0.eq) goto loc_8215FAA8;
loc_8215FB80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215FA70) {
	__imp__sub_8215FA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8215FB90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215fc88
	if (!ctx.cr6.gt) goto loc_8215FC88;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,25264(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25264);
loc_8215FBB0:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215FBBC;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8215FBC4;
	sub_82177758(ctx, base);
	// lwz r4,25264(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25264);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215FBD8;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215fc18
	if (ctx.cr6.eq) goto loc_8215FC18;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215fc14
	if (!ctx.cr6.eq) goto loc_8215FC14;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215FBF8;
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
	ctx.lr = 0x8215FC10;
	sub_821779A0(ctx, base);
	// b 0x8215fc18
	goto loc_8215FC18;
loc_8215FC14:
	// bl 0x82177978
	ctx.lr = 0x8215FC18;
	sub_82177978(ctx, base);
loc_8215FC18:
	// lwz r11,25264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25264);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215FC30;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215fc70
	if (ctx.cr6.eq) goto loc_8215FC70;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8215fc6c
	if (!ctx.cr6.eq) goto loc_8215FC6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215FC50;
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
	ctx.lr = 0x8215FC68;
	sub_821779A0(ctx, base);
	// b 0x8215fc70
	goto loc_8215FC70;
loc_8215FC6C:
	// bl 0x82177978
	ctx.lr = 0x8215FC70;
	sub_82177978(ctx, base);
loc_8215FC70:
	// bl 0x821777e0
	ctx.lr = 0x8215FC74;
	sub_821777E0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215FC78;
	sub_82177858(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25264, ctx.r3.u32);
	// bne 0x8215fbb0
	if (!ctx.cr0.eq) goto loc_8215FBB0;
loc_8215FC88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215FB88) {
	__imp__sub_8215FB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,28644(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28644);
	// bl 0x821778d8
	ctx.lr = 0x8215FCB4;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8215FCBC;
	sub_82177758(ctx, base);
	// lwz r3,28644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28644);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215fd40
	if (ctx.cr6.eq) goto loc_8215FD40;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8215fce4
	if (ctx.cr6.eq) goto loc_8215FCE4;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x8215fce4
	if (ctx.cr6.eq) goto loc_8215FCE4;
	// bl 0x82177950
	ctx.lr = 0x8215FCE0;
	sub_82177950(ctx, base);
	// b 0x8215fd40
	goto loc_8215FD40;
loc_8215FCE4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215FCEC;
	sub_82177868(ctx, base);
	// lwz r11,28644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28644);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,28644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28644);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25264, ctx.r11.u32);
	// bne cr6,0x8215fd18
	if (!ctx.cr6.eq) goto loc_8215FD18;
	// bl 0x82177898
	ctx.lr = 0x8215FD10;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8215fd1c
	goto loc_8215FD1C;
loc_8215FD18:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8215FD1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215f9f8
	ctx.lr = 0x8215FD24;
	sub_8215F9F8(ctx, base);
	// lwz r3,28644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28644);
	// bl 0x82175da0
	ctx.lr = 0x8215FD2C;
	sub_82175DA0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215fd40
	if (ctx.cr6.eq) goto loc_8215FD40;
	// lwz r11,28644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28644);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8215FD40:
	// bl 0x821777e0
	ctx.lr = 0x8215FD44;
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

PPC_WEAK_FUNC(sub_8215FC90) {
	__imp__sub_8215FC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215FD5C) {
	__imp__sub_8215FD5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FD60) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215FD60) {
	__imp__sub_8215FD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8215FD70;
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
	// lwz r4,28644(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28644);
	// bl 0x821778d8
	ctx.lr = 0x8215FD88;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28644(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28644);
	// ble cr6,0x8215fdac
	if (!ctx.cr6.gt) goto loc_8215FDAC;
loc_8215FD94:
	// stw r30,28644(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28644, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8215fc90
	ctx.lr = 0x8215FDA0;
	sub_8215FC90(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8215fd94
	if (!ctx.cr0.eq) goto loc_8215FD94;
loc_8215FDAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215FD68) {
	__imp__sub_8215FD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215FDB4) {
	__imp__sub_8215FDB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x8215fdf4
	if (!ctx.cr6.gt) goto loc_8215FDF4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215FDDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215fc90
	ctx.lr = 0x8215FDE4;
	sub_8215FC90(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x8215FDE8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28644, ctx.r3.u32);
	// bne 0x8215fddc
	if (!ctx.cr0.eq) goto loc_8215FDDC;
loc_8215FDF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215FDB8) {
	__imp__sub_8215FDB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215FE0C) {
	__imp__sub_8215FE0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FE10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215FE10) {
	__imp__sub_8215FE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FE18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8215FE18) {
	__imp__sub_8215FE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FE20) {
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
	// lwz r11,25000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25000);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215fe78
	if (ctx.cr6.eq) goto loc_8215FE78;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26832, ctx.r3.u32);
	// bl 0x82175e20
	ctx.lr = 0x8215FE58;
	sub_82175E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215fe78
	if (!ctx.cr6.eq) goto loc_8215FE78;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26832);
	// bl 0x82175e20
	ctx.lr = 0x8215FE6C;
	sub_82175E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215fe7c
	if (ctx.cr6.eq) goto loc_8215FE7C;
loc_8215FE78:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215FE7C:
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

PPC_WEAK_FUNC(sub_8215FE20) {
	__imp__sub_8215FE20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8215FE98;
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
	// lwz r31,25000(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25000);
	// ble cr6,0x8215ff04
	if (!ctx.cr6.gt) goto loc_8215FF04;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8215FEB8:
	// stw r31,25000(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25000, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215fef4
	if (ctx.cr6.eq) goto loc_8215FEF4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,26832(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26832, ctx.r3.u32);
	// bl 0x82175e20
	ctx.lr = 0x8215FED8;
	sub_82175E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8215fef4
	if (!ctx.cr6.eq) goto loc_8215FEF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26832(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26832);
	// bl 0x82175e20
	ctx.lr = 0x8215FEEC;
	sub_82175E20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215ff10
	if (ctx.cr6.eq) goto loc_8215FF10;
loc_8215FEF4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8215feb8
	if (ctx.cr6.lt) goto loc_8215FEB8;
loc_8215FF04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8215FF10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215FE90) {
	__imp__sub_8215FE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215FF1C) {
	__imp__sub_8215FF1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FF20) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215FF20) {
	__imp__sub_8215FF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FF28) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215FF28) {
	__imp__sub_8215FF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FF30) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215FF30) {
	__imp__sub_8215FF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FF38) {
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
	// lwz r4,28384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28384);
	// bl 0x821778d8
	ctx.lr = 0x8215FF58;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x8215FF60;
	sub_82177758(ctx, base);
	// lwz r11,28384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28384);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x8215FF74;
	sub_82147188(ctx, base);
	// lwz r11,28384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28384);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25372(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x8215FF8C;
	sub_82152400(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x8215FF90;
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

PPC_WEAK_FUNC(sub_8215FF38) {
	__imp__sub_8215FF38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215FFA4) {
	__imp__sub_8215FFA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FFA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215FFA8) {
	__imp__sub_8215FFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215FFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8215FFB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,112
	ctx.r5.s64 = ctx.r4.s64 * 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,28384(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28384);
	// bl 0x821778d8
	ctx.lr = 0x8215FFD0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,28384(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28384);
	// ble cr6,0x82160080
	if (!ctx.cr6.gt) goto loc_82160080;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215FFEC:
	// stw r31,28384(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28384, ctx.r31.u32);
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82160000;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82160008;
	sub_82177758(ctx, base);
	// lwz r4,28384(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28384);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8216001C;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216005c
	if (ctx.cr6.eq) goto loc_8216005C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82160058
	if (!ctx.cr6.eq) goto loc_82160058;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8216003C;
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
	ctx.lr = 0x82160054;
	sub_821779A0(ctx, base);
	// b 0x8216005c
	goto loc_8216005C;
loc_82160058:
	// bl 0x82177978
	ctx.lr = 0x8216005C;
	sub_82177978(ctx, base);
loc_8216005C:
	// lwz r11,28384(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28384);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,25372(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82160070;
	sub_82152400(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x82160074;
	sub_821777E0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// bne 0x8215ffec
	if (!ctx.cr0.eq) goto loc_8215FFEC;
loc_82160080:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8215FFB0) {
	__imp__sub_8215FFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82160090;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82160148
	if (!ctx.cr6.gt) goto loc_82160148;
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
	// lwz r4,28384(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28384);
loc_821600B4:
	// li r5,112
	ctx.r5.s64 = 112;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821600C0;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x821600C8;
	sub_82177758(ctx, base);
	// lwz r4,28384(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28384);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821600DC;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216011c
	if (ctx.cr6.eq) goto loc_8216011C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82160118
	if (!ctx.cr6.eq) goto loc_82160118;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821600FC;
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
	ctx.lr = 0x82160114;
	sub_821779A0(ctx, base);
	// b 0x8216011c
	goto loc_8216011C;
loc_82160118:
	// bl 0x82177978
	ctx.lr = 0x8216011C;
	sub_82177978(ctx, base);
loc_8216011C:
	// lwz r11,28384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28384);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,25372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x82160130;
	sub_82152400(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x82160134;
	sub_821777E0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160138;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28384, ctx.r3.u32);
	// bne 0x821600b4
	if (!ctx.cr0.eq) goto loc_821600B4;
loc_82160148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160088) {
	__imp__sub_82160088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,28376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28376);
	// bl 0x821778d8
	ctx.lr = 0x82160174;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x8216017C;
	sub_82177758(ctx, base);
	// lwz r3,28376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28376);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82160200
	if (ctx.cr6.eq) goto loc_82160200;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x821601a4
	if (ctx.cr6.eq) goto loc_821601A4;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x821601a4
	if (ctx.cr6.eq) goto loc_821601A4;
	// bl 0x82177950
	ctx.lr = 0x821601A0;
	sub_82177950(ctx, base);
	// b 0x82160200
	goto loc_82160200;
loc_821601A4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821601AC;
	sub_82177868(ctx, base);
	// lwz r11,28376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28376);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,28376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28376);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28384, ctx.r11.u32);
	// bne cr6,0x821601d8
	if (!ctx.cr6.eq) goto loc_821601D8;
	// bl 0x82177898
	ctx.lr = 0x821601D0;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821601dc
	goto loc_821601DC;
loc_821601D8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821601DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215ff38
	ctx.lr = 0x821601E4;
	sub_8215FF38(ctx, base);
	// lwz r3,28376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28376);
	// bl 0x821762b0
	ctx.lr = 0x821601EC;
	sub_821762B0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82160200
	if (ctx.cr6.eq) goto loc_82160200;
	// lwz r11,28376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28376);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82160200:
	// bl 0x821777e0
	ctx.lr = 0x82160204;
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

PPC_WEAK_FUNC(sub_82160150) {
	__imp__sub_82160150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216021C) {
	__imp__sub_8216021C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160220) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160220) {
	__imp__sub_82160220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82160230;
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
	// lwz r4,28376(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28376);
	// bl 0x821778d8
	ctx.lr = 0x82160248;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28376(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28376);
	// ble cr6,0x8216026c
	if (!ctx.cr6.gt) goto loc_8216026C;
loc_82160254:
	// stw r30,28376(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28376, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82160150
	ctx.lr = 0x82160260;
	sub_82160150(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82160254
	if (!ctx.cr0.eq) goto loc_82160254;
loc_8216026C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160228) {
	__imp__sub_82160228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82160274) {
	__imp__sub_82160274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821602b4
	if (!ctx.cr6.gt) goto loc_821602B4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8216029C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82160150
	ctx.lr = 0x821602A4;
	sub_82160150(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821602A8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28376, ctx.r3.u32);
	// bne 0x8216029c
	if (!ctx.cr0.eq) goto loc_8216029C;
loc_821602B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160278) {
	__imp__sub_82160278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821602CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821602CC) {
	__imp__sub_821602CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821602D0) {
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
	// lwz r11,27092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27092);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x821602F4;
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

PPC_WEAK_FUNC(sub_821602D0) {
	__imp__sub_821602D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8216030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8216030C) {
	__imp__sub_8216030C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82160318;
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
	// lwz r31,27092(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27092);
	// ble cr6,0x82160360
	if (!ctx.cr6.gt) goto loc_82160360;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_82160338:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r31,27092(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27092, ctx.r31.u32);
	// stw r11,28604(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x82160348;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8216036c
	if (ctx.cr6.eq) goto loc_8216036C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82160338
	if (ctx.cr6.lt) goto loc_82160338;
loc_82160360:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8216036C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160310) {
	__imp__sub_82160310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160378) {
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
	// lwz r11,26484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26484);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82160400
	if (ctx.cr6.eq) goto loc_82160400;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27092, ctx.r3.u32);
	// bl 0x82176330
	ctx.lr = 0x821603B0;
	sub_82176330(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82160400
	if (!ctx.cr6.eq) goto loc_82160400;
	// lwz r11,27092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27092);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,28604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28604, ctx.r11.u32);
	// bl 0x82152ec8
	ctx.lr = 0x821603CC;
	sub_82152EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821603e8
	if (!ctx.cr6.eq) goto loc_821603E8;
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
loc_821603E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27092);
	// bl 0x82176330
	ctx.lr = 0x821603F4;
	sub_82176330(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82160404
	if (ctx.cr6.eq) goto loc_82160404;
loc_82160400:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82160404:
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

PPC_WEAK_FUNC(sub_82160378) {
	__imp__sub_82160378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82160420;
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
	// lwz r31,26484(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26484);
	// ble cr6,0x8216045c
	if (!ctx.cr6.gt) goto loc_8216045C;
loc_8216043C:
	// stw r31,26484(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26484, ctx.r31.u32);
	// bl 0x82160378
	ctx.lr = 0x82160444;
	sub_82160378(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82160468
	if (ctx.cr6.eq) goto loc_82160468;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8216043c
	if (ctx.cr6.lt) goto loc_8216043C;
loc_8216045C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82160468:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160418) {
	__imp__sub_82160418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82160474) {
	__imp__sub_82160474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26692(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26692);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160478) {
	__imp__sub_82160478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160488) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160488) {
	__imp__sub_82160488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26692(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26692);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160490) {
	__imp__sub_82160490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821604A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821604e8
	if (!ctx.cr6.gt) goto loc_821604E8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26692(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26692);
loc_821604C8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821604D4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821604D8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26692, ctx.r3.u32);
	// bne 0x821604c8
	if (!ctx.cr0.eq) goto loc_821604C8;
loc_821604E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821604A0) {
	__imp__sub_821604A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25580(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25580);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160500) {
	__imp__sub_82160500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160510) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160510) {
	__imp__sub_82160510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25580(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25580);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160518) {
	__imp__sub_82160518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160570
	if (!ctx.cr6.gt) goto loc_82160570;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25580(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25580);
loc_82160550:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216055C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160560;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25580, ctx.r3.u32);
	// bne 0x82160550
	if (!ctx.cr0.eq) goto loc_82160550;
loc_82160570:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160528) {
	__imp__sub_82160528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26488(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26488);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160588) {
	__imp__sub_82160588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160598) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160598) {
	__imp__sub_82160598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821605A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26488(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26488);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821605A0) {
	__imp__sub_821605A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821605B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821605f8
	if (!ctx.cr6.gt) goto loc_821605F8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26488(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26488);
loc_821605D8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821605E4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821605E8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26488, ctx.r3.u32);
	// bne 0x821605d8
	if (!ctx.cr0.eq) goto loc_821605D8;
loc_821605F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821605B0) {
	__imp__sub_821605B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25008);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160610) {
	__imp__sub_82160610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160620) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160620) {
	__imp__sub_82160620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25008(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25008);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160628) {
	__imp__sub_82160628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160680
	if (!ctx.cr6.gt) goto loc_82160680;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25008(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25008);
loc_82160660:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216066C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160670;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25008, ctx.r3.u32);
	// bne 0x82160660
	if (!ctx.cr0.eq) goto loc_82160660;
loc_82160680:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160638) {
	__imp__sub_82160638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,28552(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28552);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160698) {
	__imp__sub_82160698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821606A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821606A8) {
	__imp__sub_821606A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821606B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28552(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28552);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821606B0) {
	__imp__sub_821606B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821606C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160708
	if (!ctx.cr6.gt) goto loc_82160708;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28552(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28552);
loc_821606E8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821606F4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821606F8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28552, ctx.r3.u32);
	// bne 0x821606e8
	if (!ctx.cr0.eq) goto loc_821606E8;
loc_82160708:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821606C0) {
	__imp__sub_821606C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27568(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27568);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160720) {
	__imp__sub_82160720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160730) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160730) {
	__imp__sub_82160730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27568(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27568);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160738) {
	__imp__sub_82160738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160790
	if (!ctx.cr6.gt) goto loc_82160790;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27568(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27568);
loc_82160770:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216077C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160780;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27568(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27568, ctx.r3.u32);
	// bne 0x82160770
	if (!ctx.cr0.eq) goto loc_82160770;
loc_82160790:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160748) {
	__imp__sub_82160748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821607A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,28340(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28340);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821607A8) {
	__imp__sub_821607A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821607B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821607B8) {
	__imp__sub_821607B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821607C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28340(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28340);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821607C0) {
	__imp__sub_821607C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821607D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160818
	if (!ctx.cr6.gt) goto loc_82160818;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28340(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28340);
loc_821607F8:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82160804;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160808;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28340, ctx.r3.u32);
	// bne 0x821607f8
	if (!ctx.cr0.eq) goto loc_821607F8;
loc_82160818:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821607D0) {
	__imp__sub_821607D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26992(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26992);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160830) {
	__imp__sub_82160830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160840) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160840) {
	__imp__sub_82160840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26992(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26992);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160848) {
	__imp__sub_82160848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821608a0
	if (!ctx.cr6.gt) goto loc_821608A0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26992(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26992);
loc_82160880:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216088C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160890;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26992(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26992, ctx.r3.u32);
	// bne 0x82160880
	if (!ctx.cr0.eq) goto loc_82160880;
loc_821608A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160858) {
	__imp__sub_82160858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821608B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25912(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25912);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821608B8) {
	__imp__sub_821608B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821608C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821608C8) {
	__imp__sub_821608C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821608D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25912(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25912);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821608D0) {
	__imp__sub_821608D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821608E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160928
	if (!ctx.cr6.gt) goto loc_82160928;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25912(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25912);
loc_82160908:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82160914;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160918;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25912(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25912, ctx.r3.u32);
	// bne 0x82160908
	if (!ctx.cr0.eq) goto loc_82160908;
loc_82160928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821608E0) {
	__imp__sub_821608E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25456);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160940) {
	__imp__sub_82160940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160950) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160950) {
	__imp__sub_82160950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25456);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160958) {
	__imp__sub_82160958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x821609b0
	if (!ctx.cr6.gt) goto loc_821609B0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25456(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25456);
loc_82160990:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8216099C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821609A0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25456, ctx.r3.u32);
	// bne 0x82160990
	if (!ctx.cr0.eq) goto loc_82160990;
loc_821609B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160968) {
	__imp__sub_82160968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821609C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27912(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27912);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821609C8) {
	__imp__sub_821609C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821609D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821609D8) {
	__imp__sub_821609D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821609E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27912(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27912);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821609E0) {
	__imp__sub_821609E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821609F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160a38
	if (!ctx.cr6.gt) goto loc_82160A38;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27912(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27912);
loc_82160A18:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82160A24;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160A28;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27912(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27912, ctx.r3.u32);
	// bne 0x82160a18
	if (!ctx.cr0.eq) goto loc_82160A18;
loc_82160A38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821609F0) {
	__imp__sub_821609F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27904(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27904);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160A50) {
	__imp__sub_82160A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160A60) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160A60) {
	__imp__sub_82160A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27904(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27904);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160A68) {
	__imp__sub_82160A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160ac0
	if (!ctx.cr6.gt) goto loc_82160AC0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27904(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27904);
loc_82160AA0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82160AAC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160AB0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27904(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27904, ctx.r3.u32);
	// bne 0x82160aa0
	if (!ctx.cr0.eq) goto loc_82160AA0;
loc_82160AC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160A78) {
	__imp__sub_82160A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27360);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160AD8) {
	__imp__sub_82160AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160AE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160AE8) {
	__imp__sub_82160AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27360);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160AF0) {
	__imp__sub_82160AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160b48
	if (!ctx.cr6.gt) goto loc_82160B48;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27360(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27360);
loc_82160B28:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82160B34;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160B38;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27360, ctx.r3.u32);
	// bne 0x82160b28
	if (!ctx.cr0.eq) goto loc_82160B28;
loc_82160B48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160B00) {
	__imp__sub_82160B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25628(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25628);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160B60) {
	__imp__sub_82160B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160B70) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160B70) {
	__imp__sub_82160B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25628(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25628);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160B78) {
	__imp__sub_82160B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160bd0
	if (!ctx.cr6.gt) goto loc_82160BD0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25628(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25628);
loc_82160BB0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82160BBC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160BC0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25628, ctx.r3.u32);
	// bne 0x82160bb0
	if (!ctx.cr0.eq) goto loc_82160BB0;
loc_82160BD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160B88) {
	__imp__sub_82160B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26252);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160BE8) {
	__imp__sub_82160BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160BF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160BF8) {
	__imp__sub_82160BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26252(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26252);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160C00) {
	__imp__sub_82160C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160c58
	if (!ctx.cr6.gt) goto loc_82160C58;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26252(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26252);
loc_82160C38:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82160C44;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160C48;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26252, ctx.r3.u32);
	// bne 0x82160c38
	if (!ctx.cr0.eq) goto loc_82160C38;
loc_82160C58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160C10) {
	__imp__sub_82160C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26140);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160C70) {
	__imp__sub_82160C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160C80) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160C80) {
	__imp__sub_82160C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26140);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160C88) {
	__imp__sub_82160C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160ce0
	if (!ctx.cr6.gt) goto loc_82160CE0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26140);
loc_82160CC0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82160CCC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160CD0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26140, ctx.r3.u32);
	// bne 0x82160cc0
	if (!ctx.cr0.eq) goto loc_82160CC0;
loc_82160CE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160C98) {
	__imp__sub_82160C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27524(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27524);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160CF8) {
	__imp__sub_82160CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160D08) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160D08) {
	__imp__sub_82160D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,27524(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27524);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160D10) {
	__imp__sub_82160D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160d68
	if (!ctx.cr6.gt) goto loc_82160D68;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27524(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27524);
loc_82160D48:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82160D54;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160D58;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27524, ctx.r3.u32);
	// bne 0x82160d48
	if (!ctx.cr0.eq) goto loc_82160D48;
loc_82160D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160D20) {
	__imp__sub_82160D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26060(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26060);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160D80) {
	__imp__sub_82160D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160D90) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160D90) {
	__imp__sub_82160D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26060(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26060);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82160D98) {
	__imp__sub_82160D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82160DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// ble cr6,0x82160df0
	if (!ctx.cr6.gt) goto loc_82160DF0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26060(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26060);
loc_82160DD0:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82160DDC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82160DE0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26060(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26060, ctx.r3.u32);
	// bne 0x82160dd0
	if (!ctx.cr0.eq) goto loc_82160DD0;
loc_82160DF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82160DA8) {
	__imp__sub_82160DA8(ctx, base);
}

