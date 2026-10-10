#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_820EE714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EE714) {
	__imp__sub_820EE714(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82332af8
	ctx.lr = 0x820EE73C;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x820ee7ac
	if (ctx.cr6.eq) goto loc_820EE7AC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// ori r7,r11,61924
	ctx.r7.u64 = ctx.r11.u64 | 61924;
	// addi r10,r8,-15680
	ctx.r10.s64 = ctx.r8.s64 + -15680;
	// mullw r11,r31,r7
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// beq cr6,0x820ee790
	if (ctx.cr6.eq) goto loc_820EE790;
	// ori r9,r10,19056
	ctx.r9.u64 = ctx.r10.u64 | 19056;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820ee7ac
	if (!ctx.cr6.eq) goto loc_820EE7AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211f8e0
	ctx.lr = 0x820EE78C;
	sub_8211F8E0(ctx, base);
	// b 0x820ee7ac
	goto loc_820EE7AC;
loc_820EE790:
	// ori r9,r10,18632
	ctx.r9.u64 = ctx.r10.u64 | 18632;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820ee7ac
	if (!ctx.cr6.eq) goto loc_820EE7AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x820EE7AC;
	sub_8211B8E0(ctx, base);
loc_820EE7AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EE718) {
	__imp__sub_820EE718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EE7C4) {
	__imp__sub_820EE7C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE7C8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// beq cr6,0x820ee804
	if (ctx.cr6.eq) goto loc_820EE804;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x820ee7fc
	if (ctx.cr6.eq) goto loc_820EE7FC;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x820ee7f4
	if (ctx.cr6.eq) goto loc_820EE7F4;
	// lwz r5,3532(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3532);
	// b 0x820f9ae8
	sub_820F9AE8(ctx, base);
	return;
loc_820EE7F4:
	// lwz r5,3516(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3516);
	// b 0x820f9ae8
	sub_820F9AE8(ctx, base);
	return;
loc_820EE7FC:
	// lwz r5,3524(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3524);
	// b 0x820f9ae8
	sub_820F9AE8(ctx, base);
	return;
loc_820EE804:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x820ee824
	if (ctx.cr6.eq) goto loc_820EE824;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x820ee81c
	if (ctx.cr6.eq) goto loc_820EE81C;
	// lwz r5,3528(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3528);
	// b 0x820f9ae8
	sub_820F9AE8(ctx, base);
	return;
loc_820EE81C:
	// lwz r5,3512(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3512);
	// b 0x820f9ae8
	sub_820F9AE8(ctx, base);
	return;
loc_820EE824:
	// lwz r5,3520(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3520);
	// b 0x820f9ae8
	sub_820F9AE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EE7C8) {
	__imp__sub_820EE7C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EE82C) {
	__imp__sub_820EE82C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82284650
	ctx.lr = 0x820EE85C;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ee870
	if (ctx.cr6.eq) goto loc_820EE870;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822efc98
	ctx.lr = 0x820EE870;
	sub_822EFC98(ctx, base);
loc_820EE870:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EE830) {
	__imp__sub_820EE830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820EE890;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,254
	ctx.r11.s64 = 254;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82284650
	ctx.lr = 0x820EE8B8;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ee8d4
	if (ctx.cr6.eq) goto loc_820EE8D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822efc98
	ctx.lr = 0x820EE8CC;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820ee8e0
	if (!ctx.cr6.eq) goto loc_820EE8E0;
loc_820EE8D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820EE8E0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a6878
	ctx.lr = 0x820EE8F4;
	sub_821A6878(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EE888) {
	__imp__sub_820EE888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820EE910;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,254
	ctx.r11.s64 = 254;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82284650
	ctx.lr = 0x820EE934;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ee970
	if (ctx.cr6.eq) goto loc_820EE970;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822efc98
	ctx.lr = 0x820EE948;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ee970
	if (ctx.cr6.eq) goto loc_820EE970;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r9,r11,6968
	ctx.r9.s64 = ctx.r11.s64 + 6968;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,11308(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11308);
	// bl 0x821a2c80
	ctx.lr = 0x820EE970;
	sub_821A2C80(ctx, base);
loc_820EE970:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EE908) {
	__imp__sub_820EE908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820EE980;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,254
	ctx.r11.s64 = 254;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82284650
	ctx.lr = 0x820EE9A4;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ee9d4
	if (ctx.cr6.eq) goto loc_820EE9D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822efc98
	ctx.lr = 0x820EE9B8;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ee9d4
	if (ctx.cr6.eq) goto loc_820EE9D4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a4248
	ctx.lr = 0x820EE9D4;
	sub_821A4248(ctx, base);
loc_820EE9D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EE978) {
	__imp__sub_820EE978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EE9DC) {
	__imp__sub_820EE9DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820EE9E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,254
	ctx.r11.s64 = 254;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82284650
	ctx.lr = 0x820EEA10;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eea4c
	if (ctx.cr6.eq) goto loc_820EEA4C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822efc98
	ctx.lr = 0x820EEA24;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820eea4c
	if (ctx.cr6.eq) goto loc_820EEA4C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r9,r11,6968
	ctx.r9.s64 = ctx.r11.s64 + 6968;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,11308(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11308);
	// bl 0x821a2db8
	ctx.lr = 0x820EEA4C;
	sub_821A2DB8(ctx, base);
loc_820EEA4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EE9E0) {
	__imp__sub_820EE9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EEA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EEA54) {
	__imp__sub_820EEA54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EEA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820EEA60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82284650
	ctx.lr = 0x820EEA80;
	sub_82284650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eeaf8
	if (ctx.cr6.eq) goto loc_820EEAF8;
	// li r11,254
	ctx.r11.s64 = 254;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284650
	ctx.lr = 0x820EEAA0;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eeaf8
	if (ctx.cr6.eq) goto loc_820EEAF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822efc98
	ctx.lr = 0x820EEAB4;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820eeaf8
	if (ctx.cr6.eq) goto loc_820EEAF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eff18
	ctx.lr = 0x820EEACC;
	sub_822EFF18(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// beq cr6,0x820eeaf8
	if (ctx.cr6.eq) goto loc_820EEAF8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,11308(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// bl 0x821a2db8
	ctx.lr = 0x820EEAF8;
	sub_821A2DB8(ctx, base);
loc_820EEAF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EEA58) {
	__imp__sub_820EEA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EEB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820EEB08;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,376(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820eeb34
	if (ctx.cr6.eq) goto loc_820EEB34;
	// bl 0x820f8868
	ctx.lr = 0x820EEB28;
	sub_820F8868(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820eeba0
	if (ctx.cr6.eq) goto loc_820EEBA0;
loc_820EEB34:
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x820eeb90
	if (!ctx.cr6.gt) goto loc_820EEB90;
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// bge cr6,0x820eeb90
	if (!ctx.cr6.lt) goto loc_820EEB90;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r11,16168
	ctx.r9.s64 = ctx.r11.s64 + 16168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822da650
	ctx.lr = 0x820EEB68;
	sub_822DA650(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,6968
	ctx.r5.s64 = ctx.r8.s64 + 6968;
	// addi r6,r31,28
	ctx.r6.s64 = ctx.r31.s64 + 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,11308(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 11308);
	// bl 0x821a2af0
	ctx.lr = 0x820EEB88;
	sub_821A2AF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820EEB90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r4,r11,14688
	ctx.r4.s64 = ctx.r11.s64 + 14688;
	// bl 0x82280b08
	ctx.lr = 0x820EEBA0;
	sub_82280B08(ctx, base);
loc_820EEBA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EEB00) {
	__imp__sub_820EEB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EEBA8) {
	PPC_FUNC_PROLOGUE();
	// lhz r4,334(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 334);
	// addi r5,r5,2520
	ctx.r5.s64 = ctx.r5.s64 + 2520;
	// b 0x820f8cd8
	sub_820F8CD8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EEBA8) {
	__imp__sub_820EEBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EEBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EEBB4) {
	__imp__sub_820EEBB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EEBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820EEBC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r4,2520
	ctx.r3.s64 = ctx.r4.s64 + 2520;
	// bl 0x821201a0
	ctx.lr = 0x820EEBD0;
	sub_821201A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14740
	ctx.r4.s64 = ctx.r11.s64 + 14740;
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// lbz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r29,r11,-5328
	ctx.r29.s64 = ctx.r11.s64 + -5328;
	// bl 0x823deeb8
	ctx.lr = 0x820EEC20;
	sub_823DEEB8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820f8868
	ctx.lr = 0x820EEC28;
	sub_820F8868(ctx, base);
	// lis r5,-32181
	ctx.r5.s64 = -2109014016;
	// lhz r30,334(r30)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r5,-22896
	ctx.r11.s64 = ctx.r5.s64 + -22896;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r11,16168
	ctx.r9.s64 = ctx.r11.s64 + 16168;
	// addi r3,r31,11
	ctx.r3.s64 = ctx.r31.s64 + 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822a1d50
	ctx.lr = 0x820EEC50;
	sub_822A1D50(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r8,254
	ctx.r8.s64 = 254;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bl 0x82284650
	ctx.lr = 0x820EEC70;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eecac
	if (ctx.cr6.eq) goto loc_820EECAC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822efc98
	ctx.lr = 0x820EEC84;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820eecac
	if (ctx.cr6.eq) goto loc_820EECAC;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r9,r11,6968
	ctx.r9.s64 = ctx.r11.s64 + 6968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,11308(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11308);
	// bl 0x821a2db8
	ctx.lr = 0x820EECAC;
	sub_821A2DB8(ctx, base);
loc_820EECAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x822a24e0
	ctx.lr = 0x820EECB8;
	sub_822A24E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EEBB8) {
	__imp__sub_820EEBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EECC0) {
	PPC_FUNC_PROLOGUE();
	// lhz r4,334(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 334);
	// addi r5,r5,2520
	ctx.r5.s64 = ctx.r5.s64 + 2520;
	// b 0x820f8d90
	sub_820F8D90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EECC0) {
	__imp__sub_820EECC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EECCC) {
	__imp__sub_820EECCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EECD0) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// addi r11,r11,18580
	ctx.r11.s64 = ctx.r11.s64 + 18580;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// ori r7,r9,18588
	ctx.r7.u64 = ctx.r9.u64 | 18588;
	// lwzx r6,r3,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// stwx r6,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EECD0) {
	__imp__sub_820EECD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EED04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EED04) {
	__imp__sub_820EED04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EED08) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x820eed2c
	if (!ctx.cr6.eq) goto loc_820EED2C;
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// addi r11,r11,18580
	ctx.r11.s64 = ctx.r11.s64 + 18580;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820eed8c
	if (ctx.cr6.eq) goto loc_820EED8C;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x820eed70
	goto loc_820EED70;
loc_820EED2C:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x820eed50
	if (!ctx.cr6.eq) goto loc_820EED50;
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// addi r11,r11,18580
	ctx.r11.s64 = ctx.r11.s64 + 18580;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x820eed8c
	if (ctx.cr6.eq) goto loc_820EED8C;
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x820eed70
	goto loc_820EED70;
loc_820EED50:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x820eed8c
	if (!ctx.cr6.eq) goto loc_820EED8C;
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// addi r11,r11,18580
	ctx.r11.s64 = ctx.r11.s64 + 18580;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x820eed8c
	if (ctx.cr6.eq) goto loc_820EED8C;
	// li r6,5
	ctx.r6.s64 = 5;
loc_820EED70:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// ori r7,r9,18588
	ctx.r7.u64 = ctx.r9.u64 | 18588;
	// lwzx r4,r3,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// stwx r4,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r4.u32);
loc_820EED8C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18584
	ctx.r10.u64 = ctx.r11.u64 | 18584;
	// stwx r5,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EED08) {
	__imp__sub_820EED08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EED9C) {
	__imp__sub_820EED9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EEDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820EEDA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,-8
	ctx.r11.s64 = ctx.r7.s64 + -8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x820eeec8
	if (ctx.cr6.gt) goto loc_820EEEC8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820eeddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820EEDDC;
	// bdzf 4*cr6+eq,0x820eee58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820EEE58;
	// bdzf 4*cr6+eq,0x820eee58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820EEE58;
	// bne cr6,0x820eee94
	if (!ctx.cr6.eq) goto loc_820EEE94;
loc_820EEDDC:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820eee20
	if (ctx.cr6.eq) goto loc_820EEE20;
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820eee00
	if (ctx.cr6.eq) goto loc_820EEE00;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f87d0
	ctx.lr = 0x820EEE00;
	sub_820F87D0(ctx, base);
loc_820EEE00:
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820eeec8
	if (ctx.cr6.eq) goto loc_820EEEC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f87d0
	ctx.lr = 0x820EEE18;
	sub_820F87D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820EEE20:
	// lwz r5,184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820eee38
	if (ctx.cr6.eq) goto loc_820EEE38;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f87d0
	ctx.lr = 0x820EEE38;
	sub_820F87D0(ctx, base);
loc_820EEE38:
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820eeec8
	if (ctx.cr6.eq) goto loc_820EEEC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f87d0
	ctx.lr = 0x820EEE50;
	sub_820F87D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820EEE58:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820eee7c
	if (ctx.cr6.eq) goto loc_820EEE7C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f87d0
	ctx.lr = 0x820EEE74;
	sub_820F87D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820EEE7C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f87d0
	ctx.lr = 0x820EEE8C;
	sub_820F87D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820EEE94:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820eeeb8
	if (ctx.cr6.eq) goto loc_820EEEB8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f87d0
	ctx.lr = 0x820EEEB0;
	sub_820F87D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820EEEB8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,200(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f87d0
	ctx.lr = 0x820EEEC8;
	sub_820F87D0(ctx, base);
loc_820EEEC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EEDA0) {
	__imp__sub_820EEDA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EEED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820EEED8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r29,r4,28
	ctx.r29.s64 = ctx.r4.s64 + 28;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// lfs f2,-14540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	ctx.f2.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f1,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f1.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x820dcb68
	ctx.lr = 0x820EEF14;
	sub_820DCB68(ctx, base);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211a1d0
	ctx.lr = 0x820EEF34;
	sub_8211A1D0(ctx, base);
	// cmplwi cr6,r27,46
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 46, ctx.xer);
	// bne cr6,0x820eef74
	if (!ctx.cr6.eq) goto loc_820EEF74;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r30,404
	ctx.r10.s64 = ctx.r30.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,380(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820eef74
	if (ctx.cr6.eq) goto loc_820EEF74;
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x820eef74
	if (!ctx.cr6.eq) goto loc_820EEF74;
	// li r5,50
	ctx.r5.s64 = 50;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820e1348
	ctx.lr = 0x820EEF74;
	sub_820E1348(ctx, base);
loc_820EEF74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EEED0) {
	__imp__sub_820EEED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EEF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EEF7C) {
	__imp__sub_820EEF7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EEF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820EEF88;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r5,404
	ctx.r10.s64 = ctx.r5.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// add. r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x820ef0c8
	if (ctx.cr0.eq) goto loc_820EF0C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8234de90
	ctx.lr = 0x820EEFBC;
	sub_8234DE90(ctx, base);
	// bl 0x8234d4a8
	ctx.lr = 0x820EEFC0;
	sub_8234D4A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284650
	ctx.lr = 0x820EEFD0;
	sub_82284650(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ef0c8
	if (ctx.cr6.eq) goto loc_820EF0C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,464
	ctx.r31.s64 = ctx.r28.s64 + 464;
	// lfs f30,6912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_820EEFF4:
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820ef060
	if (ctx.cr6.eq) goto loc_820EF060;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ee1e0
	ctx.lr = 0x820EF010;
	sub_820EE1E0(ctx, base);
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820ef050
	if (!ctx.cr6.lt) goto loc_820EF050;
	// lhz r25,0(r31)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_820EF050:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820eeff4
	if (ctx.cr6.lt) goto loc_820EEFF4;
loc_820EF060:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x820ef0c8
	if (ctx.cr6.eq) goto loc_820EF0C8;
	// li r11,254
	ctx.r11.s64 = 254;
	// lhz r31,334(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 334);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r10,-22896
	ctx.r9.s64 = ctx.r10.s64 + -22896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,16084(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16084);
	// bl 0x82284650
	ctx.lr = 0x820EF08C;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ef0c8
	if (ctx.cr6.eq) goto loc_820EF0C8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822efc98
	ctx.lr = 0x820EF0A0;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ef0c8
	if (ctx.cr6.eq) goto loc_820EF0C8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r9,r11,6968
	ctx.r9.s64 = ctx.r11.s64 + 6968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,11308(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11308);
	// bl 0x821a2c80
	ctx.lr = 0x820EF0C8;
	sub_821A2C80(ctx, base);
loc_820EF0C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EEF80) {
	__imp__sub_820EEF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EF0D8) {
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
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820ef16c
	if (ctx.cr6.eq) goto loc_820EF16C;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lhz r9,334(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 334);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820ef16c
	if (!ctx.cr6.eq) goto loc_820EF16C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addis r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 131072;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r6,r6,2116
	ctx.r6.s64 = ctx.r6.s64 + 2116;
	// lfs f2,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,6032(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6032);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820dc998
	ctx.lr = 0x820EF154;
	sub_820DC998(ctx, base);
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// lhz r4,334(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r8,-22896
	ctx.r7.s64 = ctx.r8.s64 + -22896;
	// lwz r5,1276(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1276);
	// bl 0x820f9ae8
	ctx.lr = 0x820EF16C;
	sub_820F9AE8(ctx, base);
loc_820EF16C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EF0D8) {
	__imp__sub_820EF0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EF184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EF184) {
	__imp__sub_820EF184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EF188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30224);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,173
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 173, ctx.xer);
	// beq cr6,0x820ef1a8
	if (ctx.cr6.eq) goto loc_820EF1A8;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820ef1ac
	if (!ctx.cr6.eq) goto loc_820EF1AC;
loc_820EF1A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EF1AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EF188) {
	__imp__sub_820EF188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EF1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EF1B4) {
	__imp__sub_820EF1B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EF1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f1,f12,f1,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EF1B8) {
	__imp__sub_820EF1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EF1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EF1CC) {
	__imp__sub_820EF1CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EF1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x820EF1D8;
	__savegprlr_17(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r11,-30224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30224);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x820ef24c
	if (!ctx.cr6.eq) goto loc_820EF24C;
	// cmpwi cr6,r11,173
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 173, ctx.xer);
	// beq cr6,0x820ef21c
	if (ctx.cr6.eq) goto loc_820EF21C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820ef220
	if (!ctx.cr6.eq) goto loc_820EF220;
loc_820EF21C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EF220:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r4,r11,15016
	ctx.r4.s64 = ctx.r11.s64 + 15016;
	// bl 0x82280900
	ctx.lr = 0x820EF23C;
	sub_82280900(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EF24C:
	// lwz r27,216(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 216);
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r31,r26,208
	ctx.r31.s64 = ctx.r26.s64 + 208;
	// addi r29,r26,28
	ctx.r29.s64 = ctx.r26.s64 + 28;
	// cmpwi cr6,r11,173
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 173, ctx.xer);
	// beq cr6,0x820ef270
	if (ctx.cr6.eq) goto loc_820EF270;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bne cr6,0x820ef274
	if (!ctx.cr6.eq) goto loc_820EF274;
loc_820EF270:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EF274:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r18,r11,31624
	ctx.r18.s64 = ctx.r11.s64 + 31624;
	// beq cr6,0x820ef2bc
	if (ctx.cr6.eq) goto loc_820EF2BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r4,r11,14980
	ctx.r4.s64 = ctx.r11.s64 + 14980;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82280900
	ctx.lr = 0x820EF2A4;
	sub_82280900(ctx, base);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r4,r9,14960
	ctx.r4.s64 = ctx.r9.s64 + 14960;
	// lwzx r5,r10,r18
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// bl 0x82280900
	ctx.lr = 0x820EF2BC;
	sub_82280900(ctx, base);
loc_820EF2BC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r30,r9
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// clrlwi r17,r20,24
	ctx.r17.u64 = ctx.r20.u32 & 0xFF;
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820ef2f0
	if (ctx.cr6.eq) goto loc_820EF2F0;
	// addis r19,r23,1
	ctx.r19.s64 = ctx.r23.s64 + 65536;
	// addi r19,r19,22924
	ctx.r19.s64 = ctx.r19.s64 + 22924;
	// lwz r22,692(r19)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r19.u32 + 692);
	// b 0x820ef2f8
	goto loc_820EF2F8;
loc_820EF2F0:
	// lhz r22,124(r31)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
loc_820EF2F8:
	// lhz r24,126(r31)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x820ef338
	if (ctx.cr6.eq) goto loc_820EF338;
	// mulli r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 * 200;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// add r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r11,r10,8672
	ctx.r11.s64 = ctx.r10.s64 + 8672;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x820ef338
	if (!ctx.cr6.eq) goto loc_820EF338;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,14872
	ctx.r4.s64 = ctx.r11.s64 + 14872;
	// bl 0x822830e8
	ctx.lr = 0x820EF338;
	sub_822830E8(ctx, base);
loc_820EF338:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82332af8
	ctx.lr = 0x820EF340;
	sub_82332AF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82334408
	ctx.lr = 0x820EF348;
	sub_82334408(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,110
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 110, ctx.xer);
	// blt cr6,0x820ef3ec
	if (ctx.cr6.lt) goto loc_820EF3EC;
	// cmpwi cr6,r25,140
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 140, ctx.xer);
	// bgt cr6,0x820ef3ec
	if (ctx.cr6.gt) goto loc_820EF3EC;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// beq cr6,0x820ef3d0
	if (ctx.cr6.eq) goto loc_820EF3D0;
	// addi r9,r11,2948
	ctx.r9.s64 = ctx.r11.s64 + 2948;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x820f9ae8
	ctx.lr = 0x820EF384;
	sub_820F9AE8(ctx, base);
	// clrldi r8,r27,32
	ctx.r8.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ori r6,r7,22912
	ctx.r6.u64 = ctx.r7.u64 | 22912;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwzx r3,r23,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r6.u32);
	// ori r11,r5,2080
	ctx.r11.u64 = ctx.r5.u64 | 2080;
	// ori r10,r4,2084
	ctx.r10.u64 = ctx.r4.u64 | 2084;
	// stwx r3,r23,r10
	PPC_STORE_U32(ctx.r23.u32 + ctx.r10.u32, ctx.r3.u32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfsx f11,r23,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r11.u32, temp.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EF3D0:
	// addi r9,r11,2824
	ctx.r9.s64 = ctx.r11.s64 + 2824;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x820f9ae8
	ctx.lr = 0x820EF3DC;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EF3EC:
	// cmpwi cr6,r25,141
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 141, ctx.xer);
	// blt cr6,0x820ef50c
	if (ctx.cr6.lt) goto loc_820EF50C;
	// cmpwi cr6,r25,171
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 171, ctx.xer);
	// bgt cr6,0x820ef50c
	if (ctx.cr6.gt) goto loc_820EF50C;
	// rlwinm r11,r27,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r11,r25,-141
	ctx.r11.s64 = ctx.r25.s64 + -141;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r28,r27,0,24,24
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r10,-22896
	ctx.r29.s64 = ctx.r10.s64 + -22896;
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// beq cr6,0x820ef4d8
	if (ctx.cr6.eq) goto loc_820EF4D8;
	// addi r10,r29,3388
	ctx.r10.s64 = ctx.r29.s64 + 3388;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x820f9ae8
	ctx.lr = 0x820EF450;
	sub_820F9AE8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820ef46c
	if (ctx.cr6.eq) goto loc_820EF46C;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lwz r11,-6704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6704);
	// lwz r10,-6456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6456);
	// b 0x820ef47c
	goto loc_820EF47C;
loc_820EF46C:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lwz r11,-6416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6416);
	// lwz r10,-6656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6656);
loc_820EF47C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f1,f12,f31,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// bl 0x82324108
	ctx.lr = 0x820EF490;
	sub_82324108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820ef4e4
	if (!ctx.cr6.gt) goto loc_820EF4E4;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ori r9,r10,22912
	ctx.r9.u64 = ctx.r10.u64 | 22912;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwzx r6,r23,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	// ori r5,r8,2080
	ctx.r5.u64 = ctx.r8.u64 | 2080;
	// ori r4,r7,2084
	ctx.r4.u64 = ctx.r7.u64 | 2084;
	// stwx r6,r23,r4
	PPC_STORE_U32(ctx.r23.u32 + ctx.r4.u32, ctx.r6.u32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfsx f11,r23,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r5.u32, temp.u32);
	// b 0x820ef4e4
	goto loc_820EF4E4;
loc_820EF4D8:
	// addi r10,r29,3264
	ctx.r10.s64 = ctx.r29.s64 + 3264;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x820f9ae8
	ctx.lr = 0x820EF4E4;
	sub_820F9AE8(ctx, base);
loc_820EF4E4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x820f15dc
	if (!ctx.cr6.eq) goto loc_820F15DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,900(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 900);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820EF4FC;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EF50C:
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// cmplwi cr6,r11,171
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 171, ctx.xer);
	// bgt cr6,0x820f15c4
	if (ctx.cr6.gt) goto loc_820F15C4;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2768
	ctx.r12.s64 = ctx.r12.s64 + -2768;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820EF9D0;
	case 1:
		goto loc_820EFCC0;
	case 2:
		goto loc_820F118C;
	case 3:
		goto loc_820F11BC;
	case 4:
		goto loc_820F11F0;
	case 5:
		goto loc_820EF9F8;
	case 6:
		goto loc_820EFA54;
	case 7:
		goto loc_820EFAAC;
	case 8:
		goto loc_820EFB04;
	case 9:
		goto loc_820EFB1C;
	case 10:
		goto loc_820EFB1C;
	case 11:
		goto loc_820EFCE8;
	case 12:
		goto loc_820F15DC;
	case 13:
		goto loc_820EFD44;
	case 14:
		goto loc_820EFD44;
	case 15:
		goto loc_820F15DC;
	case 16:
		goto loc_820EFFB8;
	case 17:
		goto loc_820EFBA0;
	case 18:
		goto loc_820EFBE8;
	case 19:
		goto loc_820EFC30;
	case 20:
		goto loc_820EFC78;
	case 21:
		goto loc_820F15DC;
	case 22:
		goto loc_820F15DC;
	case 23:
		goto loc_820F0038;
	case 24:
		goto loc_820EFFF0;
	case 25:
		goto loc_820F0080;
	case 26:
		goto loc_820F00C8;
	case 27:
		goto loc_820F15DC;
	case 28:
		goto loc_820F01E8;
	case 29:
		goto loc_820F0230;
	case 30:
		goto loc_820F0230;
	case 31:
		goto loc_820F013C;
	case 32:
		goto loc_820F02B0;
	case 33:
		goto loc_820F02F8;
	case 34:
		goto loc_820F0230;
	case 35:
		goto loc_820F0230;
	case 36:
		goto loc_820F02F8;
	case 37:
		goto loc_820F0318;
	case 38:
		goto loc_820F0360;
	case 39:
		goto loc_820F0388;
	case 40:
		goto loc_820F03AC;
	case 41:
		goto loc_820F03D0;
	case 42:
		goto loc_820F0408;
	case 43:
		goto loc_820F048C;
	case 44:
		goto loc_820F04EC;
	case 45:
		goto loc_820F01C0;
	case 46:
		goto loc_820F01C0;
	case 47:
		goto loc_820F0110;
	case 48:
		goto loc_820F0168;
	case 49:
		goto loc_820F06A0;
	case 50:
		goto loc_820F06E8;
	case 51:
		goto loc_820F06E8;
	case 52:
		goto loc_820F06E8;
	case 53:
		goto loc_820F07F4;
	case 54:
		goto loc_820F07F4;
	case 55:
		goto loc_820F07F4;
	case 56:
		goto loc_820F0744;
	case 57:
		goto loc_820F07B0;
	case 58:
		goto loc_820F07D0;
	case 59:
		goto loc_820F0834;
	case 60:
		goto loc_820F0828;
	case 61:
		goto loc_820F0828;
	case 62:
		goto loc_820F09C0;
	case 63:
		goto loc_820F0B18;
	case 64:
		goto loc_820F0B34;
	case 65:
		goto loc_820F0B50;
	case 66:
		goto loc_820F0B50;
	case 67:
		goto loc_820F0CA0;
	case 68:
		goto loc_820F0D0C;
	case 69:
		goto loc_820F0D0C;
	case 70:
		goto loc_820F0E5C;
	case 71:
		goto loc_820F0EC4;
	case 72:
		goto loc_820F0FC4;
	case 73:
		goto loc_820F108C;
	case 74:
		goto loc_820F15C4;
	case 75:
		goto loc_820F122C;
	case 76:
		goto loc_820F1248;
	case 77:
		goto loc_820F1268;
	case 78:
		goto loc_820F1288;
	case 79:
		goto loc_820F12A4;
	case 80:
		goto loc_820F130C;
	case 81:
		goto loc_820F1374;
	case 82:
		goto loc_820F13E0;
	case 83:
		goto loc_820F1428;
	case 84:
		goto loc_820F1454;
	case 85:
		goto loc_820F15DC;
	case 86:
		goto loc_820F0528;
	case 87:
		goto loc_820F0580;
	case 88:
		goto loc_820F0610;
	case 89:
		goto loc_820F15A8;
	case 90:
		goto loc_820F1478;
	case 91:
		goto loc_820F14A0;
	case 92:
		goto loc_820F14C8;
	case 93:
		goto loc_820F14F0;
	case 94:
		goto loc_820F1518;
	case 95:
		goto loc_820F1540;
	case 96:
		goto loc_820EFD84;
	case 97:
		goto loc_820EFDFC;
	case 98:
		goto loc_820EFE74;
	case 99:
		goto loc_820EFED4;
	case 100:
		goto loc_820EFF34;
	case 101:
		goto loc_820EFF94;
	case 102:
		goto loc_820EFF94;
	case 103:
		goto loc_820EFF94;
	case 104:
		goto loc_820EF7E0;
	case 105:
		goto loc_820EF848;
	case 106:
		goto loc_820EF8B0;
	case 107:
		goto loc_820EF918;
	case 108:
		goto loc_820EF980;
	case 109:
		goto loc_820F15C4;
	case 110:
		goto loc_820F15C4;
	case 111:
		goto loc_820F15C4;
	case 112:
		goto loc_820F15C4;
	case 113:
		goto loc_820F15C4;
	case 114:
		goto loc_820F15C4;
	case 115:
		goto loc_820F15C4;
	case 116:
		goto loc_820F15C4;
	case 117:
		goto loc_820F15C4;
	case 118:
		goto loc_820F15C4;
	case 119:
		goto loc_820F15C4;
	case 120:
		goto loc_820F15C4;
	case 121:
		goto loc_820F15C4;
	case 122:
		goto loc_820F15C4;
	case 123:
		goto loc_820F15C4;
	case 124:
		goto loc_820F15C4;
	case 125:
		goto loc_820F15C4;
	case 126:
		goto loc_820F15C4;
	case 127:
		goto loc_820F15C4;
	case 128:
		goto loc_820F15C4;
	case 129:
		goto loc_820F15C4;
	case 130:
		goto loc_820F15C4;
	case 131:
		goto loc_820F15C4;
	case 132:
		goto loc_820F15C4;
	case 133:
		goto loc_820F15C4;
	case 134:
		goto loc_820F15C4;
	case 135:
		goto loc_820F15C4;
	case 136:
		goto loc_820F15C4;
	case 137:
		goto loc_820F15C4;
	case 138:
		goto loc_820F15C4;
	case 139:
		goto loc_820F15C4;
	case 140:
		goto loc_820F15C4;
	case 141:
		goto loc_820F15C4;
	case 142:
		goto loc_820F15C4;
	case 143:
		goto loc_820F15C4;
	case 144:
		goto loc_820F15C4;
	case 145:
		goto loc_820F15C4;
	case 146:
		goto loc_820F15C4;
	case 147:
		goto loc_820F15C4;
	case 148:
		goto loc_820F15C4;
	case 149:
		goto loc_820F15C4;
	case 150:
		goto loc_820F15C4;
	case 151:
		goto loc_820F15C4;
	case 152:
		goto loc_820F15C4;
	case 153:
		goto loc_820F15C4;
	case 154:
		goto loc_820F15C4;
	case 155:
		goto loc_820F15C4;
	case 156:
		goto loc_820F15C4;
	case 157:
		goto loc_820F15C4;
	case 158:
		goto loc_820F15C4;
	case 159:
		goto loc_820F15C4;
	case 160:
		goto loc_820F15C4;
	case 161:
		goto loc_820F15C4;
	case 162:
		goto loc_820F15C4;
	case 163:
		goto loc_820F15C4;
	case 164:
		goto loc_820F15C4;
	case 165:
		goto loc_820F15C4;
	case 166:
		goto loc_820F15C4;
	case 167:
		goto loc_820F15C4;
	case 168:
		goto loc_820F15C4;
	case 169:
		goto loc_820F15C4;
	case 170:
		goto loc_820F15C4;
	case 171:
		goto loc_820F1558;
	default:
		return;
	}
	// lwz r16,-1584(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1584);
	// lwz r16,-832(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -832);
	// lwz r16,4492(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4492);
	// lwz r16,4540(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4540);
	// lwz r16,4592(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4592);
	// lwz r16,-1544(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1544);
	// lwz r16,-1452(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1452);
	// lwz r16,-1364(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1364);
	// lwz r16,-1276(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1276);
	// lwz r16,-1252(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1252);
	// lwz r16,-1252(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1252);
	// lwz r16,-792(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -792);
	// lwz r16,5596(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5596);
	// lwz r16,-700(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -700);
	// lwz r16,-700(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -700);
	// lwz r16,5596(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5596);
	// lwz r16,-72(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -72);
	// lwz r16,-1120(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1120);
	// lwz r16,-1048(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1048);
	// lwz r16,-976(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -976);
	// lwz r16,-904(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -904);
	// lwz r16,5596(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5596);
	// lwz r16,5596(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5596);
	// lwz r16,56(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 56);
	// lwz r16,-16(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -16);
	// lwz r16,128(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 128);
	// lwz r16,200(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 200);
	// lwz r16,5596(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5596);
	// lwz r16,488(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 488);
	// lwz r16,560(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 560);
	// lwz r16,560(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 560);
	// lwz r16,316(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 316);
	// lwz r16,688(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 688);
	// lwz r16,760(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 760);
	// lwz r16,560(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 560);
	// lwz r16,560(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 560);
	// lwz r16,760(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 760);
	// lwz r16,792(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 792);
	// lwz r16,864(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 864);
	// lwz r16,904(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 904);
	// lwz r16,940(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 940);
	// lwz r16,976(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 976);
	// lwz r16,1032(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1032);
	// lwz r16,1164(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1164);
	// lwz r16,1260(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1260);
	// lwz r16,448(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 448);
	// lwz r16,448(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 448);
	// lwz r16,272(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 272);
	// lwz r16,360(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 360);
	// lwz r16,1696(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1696);
	// lwz r16,1768(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1768);
	// lwz r16,1768(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1768);
	// lwz r16,1768(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1768);
	// lwz r16,2036(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2036);
	// lwz r16,2036(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2036);
	// lwz r16,2036(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2036);
	// lwz r16,1860(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1860);
	// lwz r16,1968(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1968);
	// lwz r16,2000(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2000);
	// lwz r16,2100(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2100);
	// lwz r16,2088(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2088);
	// lwz r16,2088(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2088);
	// lwz r16,2496(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2496);
	// lwz r16,2840(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2840);
	// lwz r16,2868(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2868);
	// lwz r16,2896(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2896);
	// lwz r16,2896(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 2896);
	// lwz r16,3232(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 3232);
	// lwz r16,3340(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 3340);
	// lwz r16,3340(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 3340);
	// lwz r16,3676(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 3676);
	// lwz r16,3780(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 3780);
	// lwz r16,4036(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4036);
	// lwz r16,4236(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4236);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,4652(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4652);
	// lwz r16,4680(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4680);
	// lwz r16,4712(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4712);
	// lwz r16,4744(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4744);
	// lwz r16,4772(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4772);
	// lwz r16,4876(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4876);
	// lwz r16,4980(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4980);
	// lwz r16,5088(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5088);
	// lwz r16,5160(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5160);
	// lwz r16,5204(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5204);
	// lwz r16,5596(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5596);
	// lwz r16,1320(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1320);
	// lwz r16,1408(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1408);
	// lwz r16,1552(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 1552);
	// lwz r16,5544(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5544);
	// lwz r16,5240(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5240);
	// lwz r16,5280(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5280);
	// lwz r16,5320(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5320);
	// lwz r16,5360(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5360);
	// lwz r16,5400(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5400);
	// lwz r16,5440(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5440);
	// lwz r16,-636(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -636);
	// lwz r16,-516(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -516);
	// lwz r16,-396(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -396);
	// lwz r16,-300(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -300);
	// lwz r16,-204(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -204);
	// lwz r16,-108(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -108);
	// lwz r16,-108(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -108);
	// lwz r16,-108(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -108);
	// lwz r16,-2080(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -2080);
	// lwz r16,-1976(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1976);
	// lwz r16,-1872(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1872);
	// lwz r16,-1768(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1768);
	// lwz r16,-1664(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -1664);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5572);
	// lwz r16,5464(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 5464);
loc_820EF7E0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30180);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ef824
	if (ctx.cr6.eq) goto loc_820EF824;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,2396
	ctx.r9.s64 = ctx.r11.s64 + 2396;
	// bne cr6,0x820ef810
	if (!ctx.cr6.eq) goto loc_820EF810;
	// addi r9,r11,2272
	ctx.r9.s64 = ctx.r11.s64 + 2272;
loc_820EF810:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f9b10
	ctx.lr = 0x820EF824;
	sub_820F9B10(ctx, base);
loc_820EF824:
	// li r6,2
	ctx.r6.s64 = 2;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ee7c8
	ctx.lr = 0x820EF838;
	sub_820EE7C8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EF848:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30180);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ef88c
	if (ctx.cr6.eq) goto loc_820EF88C;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,2644
	ctx.r9.s64 = ctx.r11.s64 + 2644;
	// bne cr6,0x820ef878
	if (!ctx.cr6.eq) goto loc_820EF878;
	// addi r9,r11,2520
	ctx.r9.s64 = ctx.r11.s64 + 2520;
loc_820EF878:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f9b10
	ctx.lr = 0x820EF88C;
	sub_820F9B10(ctx, base);
loc_820EF88C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ee7c8
	ctx.lr = 0x820EF8A0;
	sub_820EE7C8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EF8B0:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30180);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ef8f4
	if (ctx.cr6.eq) goto loc_820EF8F4;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,2892
	ctx.r9.s64 = ctx.r11.s64 + 2892;
	// bne cr6,0x820ef8e0
	if (!ctx.cr6.eq) goto loc_820EF8E0;
	// addi r9,r11,2768
	ctx.r9.s64 = ctx.r11.s64 + 2768;
loc_820EF8E0:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f9b10
	ctx.lr = 0x820EF8F4;
	sub_820F9B10(ctx, base);
loc_820EF8F4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ee7c8
	ctx.lr = 0x820EF908;
	sub_820EE7C8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EF918:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30180);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ef95c
	if (ctx.cr6.eq) goto loc_820EF95C;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,3140
	ctx.r9.s64 = ctx.r11.s64 + 3140;
	// bne cr6,0x820ef948
	if (!ctx.cr6.eq) goto loc_820EF948;
	// addi r9,r11,3016
	ctx.r9.s64 = ctx.r11.s64 + 3016;
loc_820EF948:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f9b10
	ctx.lr = 0x820EF95C;
	sub_820F9B10(ctx, base);
loc_820EF95C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ee7c8
	ctx.lr = 0x820EF970;
	sub_820EE7C8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EF980:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r9,r11,2644
	ctx.r9.s64 = ctx.r11.s64 + 2644;
	// bne cr6,0x820ef9a4
	if (!ctx.cr6.eq) goto loc_820EF9A4;
	// addi r9,r11,2520
	ctx.r9.s64 = ctx.r11.s64 + 2520;
loc_820EF9A4:
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x820f9ae8
	ctx.lr = 0x820EF9AC;
	sub_820F9AE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ee7c8
	ctx.lr = 0x820EF9C0;
	sub_820EE7C8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EF9D0:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r5,3536(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3536);
loc_820EF9E4:
	// bl 0x820f9ae8
	ctx.lr = 0x820EF9E8;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EF9F8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820efa38
	if (ctx.cr6.eq) goto loc_820EFA38;
loc_820EFA0C:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r10,14816
	ctx.r4.s64 = ctx.r10.s64 + 14816;
	// li r3,21
	ctx.r3.s64 = 21;
	// lwzx r5,r11,r18
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// bl 0x82280a68
	ctx.lr = 0x820EFA28;
	sub_82280A68(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFA38:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82129bb8
	ctx.lr = 0x820EFA44;
	sub_82129BB8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFA54:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820efa0c
	if (!ctx.cr6.eq) goto loc_820EFA0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82129bb8
	ctx.lr = 0x820EFA74;
	sub_82129BB8(ctx, base);
loc_820EFA74:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// lwz r11,12(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820f15dc
	if (!ctx.cr6.eq) goto loc_820F15DC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,692(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 692);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820eed08
	ctx.lr = 0x820EFA9C;
	sub_820EED08(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFAAC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820efa0c
	if (!ctx.cr6.eq) goto loc_820EFA0C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82129bb8
	ctx.lr = 0x820EFACC;
	sub_82129BB8(ctx, base);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// lwz r11,12(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820f15dc
	if (!ctx.cr6.eq) goto loc_820F15DC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,692(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 692);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820eed08
	ctx.lr = 0x820EFAF4;
	sub_820EED08(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFB04:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820efa74
	if (ctx.cr6.eq) goto loc_820EFA74;
	// b 0x820efa0c
	goto loc_820EFA0C;
loc_820EFB1C:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// blt cr6,0x820f15dc
	if (ctx.cr6.lt) goto loc_820F15DC;
	// cmpwi cr6,r27,200
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 200, ctx.xer);
	// bge cr6,0x820f15dc
	if (!ctx.cr6.lt) goto loc_820F15DC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332af8
	ctx.lr = 0x820EFB34;
	sub_82332AF8(ctx, base);
	// cmpwi cr6,r25,10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 10, ctx.xer);
	// bne cr6,0x820efb54
	if (!ctx.cr6.eq) goto loc_820EFB54;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820efb4c
	if (ctx.cr6.eq) goto loc_820EFB4C;
	// lwz r5,84(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x820efb70
	goto loc_820EFB70;
loc_820EFB4C:
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x820efb70
	goto loc_820EFB70;
loc_820EFB54:
	// cmpwi cr6,r25,11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 11, ctx.xer);
	// bne cr6,0x820efb7c
	if (!ctx.cr6.eq) goto loc_820EFB7C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820efb6c
	if (ctx.cr6.eq) goto loc_820EFB6C;
	// lwz r5,92(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// b 0x820efb70
	goto loc_820EFB70;
loc_820EFB6C:
	// lwz r5,88(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
loc_820EFB70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820EFB7C;
	sub_820F9AE8(ctx, base);
loc_820EFB7C:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ee718
	ctx.lr = 0x820EFB90;
	sub_820EE718(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFBA0:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820efbc8
	if (ctx.cr6.eq) goto loc_820EFBC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,180(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820EFBB8;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFBC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,176(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820EFBD8;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFBE8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820efc10
	if (ctx.cr6.eq) goto loc_820EFC10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,188(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820EFC00;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFC10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,184(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820EFC20;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFC30:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820efc58
	if (ctx.cr6.eq) goto loc_820EFC58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,196(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820EFC48;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFC58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,192(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820EFC68;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFC78:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820efca0
	if (ctx.cr6.eq) goto loc_820EFCA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,204(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820EFC90;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFCA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,200(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820EFCB0;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFCC0:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lhz r6,126(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820eeda0
	ctx.lr = 0x820EFCD8;
	sub_820EEDA0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFCE8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8232cfe8
	ctx.lr = 0x820EFCF0;
	sub_8232CFE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820efd24
	if (!ctx.cr6.eq) goto loc_820EFD24;
	// lbz r11,1638(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1638);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820efd24
	if (!ctx.cr6.eq) goto loc_820EFD24;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820efd14
	if (ctx.cr6.eq) goto loc_820EFD14;
	// lwz r5,148(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// b 0x820efd18
	goto loc_820EFD18;
loc_820EFD14:
	// lwz r5,144(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
loc_820EFD18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820EFD24;
	sub_820F9AE8(ctx, base);
loc_820EFD24:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211da18
	ctx.lr = 0x820EFD34;
	sub_8211DA18(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFD44:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820efa0c
	if (!ctx.cr6.eq) goto loc_820EFA0C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82106d88
	ctx.lr = 0x820EFD6C;
	sub_82106D88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211f910
	ctx.lr = 0x820EFD74;
	sub_8211F910(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFD84:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820efa0c
	if (!ctx.cr6.eq) goto loc_820EFA0C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// addis r11,r23,2
	ctx.r11.s64 = ctx.r23.s64 + 131072;
	// addi r11,r11,18580
	ctx.r11.s64 = ctx.r11.s64 + 18580;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820efdd4
	if (ctx.cr6.eq) goto loc_820EFDD4;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// ori r7,r9,18588
	ctx.r7.u64 = ctx.r9.u64 | 18588;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwzx r5,r23,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r8.u32);
	// stwx r5,r23,r7
	PPC_STORE_U32(ctx.r23.u32 + ctx.r7.u32, ctx.r5.u32);
loc_820EFDD4:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,684(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 684);
	// bl 0x82334898
	ctx.lr = 0x820EFDE0;
	sub_82334898(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18584
	ctx.r10.u64 = ctx.r11.u64 | 18584;
	// stwx r3,r23,r10
	PPC_STORE_U32(ctx.r23.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFDFC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820efa0c
	if (!ctx.cr6.eq) goto loc_820EFA0C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// addis r11,r23,2
	ctx.r11.s64 = ctx.r23.s64 + 131072;
	// addi r11,r11,18580
	ctx.r11.s64 = ctx.r11.s64 + 18580;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820efe4c
	if (ctx.cr6.eq) goto loc_820EFE4C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// ori r7,r9,18588
	ctx.r7.u64 = ctx.r9.u64 | 18588;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwzx r5,r23,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r8.u32);
	// stwx r5,r23,r7
	PPC_STORE_U32(ctx.r23.u32 + ctx.r7.u32, ctx.r5.u32);
loc_820EFE4C:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,688(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 688);
	// bl 0x82334898
	ctx.lr = 0x820EFE58;
	sub_82334898(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18584
	ctx.r10.u64 = ctx.r11.u64 | 18584;
	// stwx r3,r23,r10
	PPC_STORE_U32(ctx.r23.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFE74:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820efa0c
	if (!ctx.cr6.eq) goto loc_820EFA0C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// addis r11,r23,2
	ctx.r11.s64 = ctx.r23.s64 + 131072;
	// addi r11,r11,18580
	ctx.r11.s64 = ctx.r11.s64 + 18580;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// ori r7,r9,18588
	ctx.r7.u64 = ctx.r9.u64 | 18588;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwzx r5,r23,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r8.u32);
	// stwx r5,r23,r7
	PPC_STORE_U32(ctx.r23.u32 + ctx.r7.u32, ctx.r5.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFED4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820efa0c
	if (!ctx.cr6.eq) goto loc_820EFA0C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// addis r11,r23,2
	ctx.r11.s64 = ctx.r23.s64 + 131072;
	// addi r11,r11,18580
	ctx.r11.s64 = ctx.r11.s64 + 18580;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// ori r7,r9,18588
	ctx.r7.u64 = ctx.r9.u64 | 18588;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwzx r5,r23,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r8.u32);
	// stwx r5,r23,r7
	PPC_STORE_U32(ctx.r23.u32 + ctx.r7.u32, ctx.r5.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFF34:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820efa0c
	if (!ctx.cr6.eq) goto loc_820EFA0C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// addis r11,r23,2
	ctx.r11.s64 = ctx.r23.s64 + 131072;
	// addi r11,r11,18580
	ctx.r11.s64 = ctx.r11.s64 + 18580;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// ori r7,r9,18588
	ctx.r7.u64 = ctx.r9.u64 | 18588;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwzx r5,r23,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r8.u32);
	// stwx r5,r23,r7
	PPC_STORE_U32(ctx.r23.u32 + ctx.r7.u32, ctx.r5.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFF94:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234dd70
	ctx.lr = 0x820EFFA8;
	sub_8234DD70(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFFB8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820efa0c
	if (!ctx.cr6.eq) goto loc_820EFA0C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120cc0
	ctx.lr = 0x820EFFE0;
	sub_82120CC0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820EFFF0:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f0018
	if (ctx.cr6.eq) goto loc_820F0018;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,252(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0008;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0018:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,248(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0028;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0038:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f0060
	if (ctx.cr6.eq) goto loc_820F0060;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,244(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0050;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0060:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,240(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0070;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0080:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f00a8
	if (ctx.cr6.eq) goto loc_820F00A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,260(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0098;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F00A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,256(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F00B8;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F00C8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f00f0
	if (ctx.cr6.eq) goto loc_820F00F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,236(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F00E0;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F00F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,232(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0100;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0110:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// addi r31,r11,-25976
	ctx.r31.s64 = ctx.r11.s64 + -25976;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r7,198(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 198);
	// bl 0x8211a1d0
	ctx.lr = 0x820F0138;
	sub_8211A1D0(ctx, base);
	// lhz r7,202(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 202);
loc_820F013C:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211a1d0
	ctx.lr = 0x820F0158;
	sub_8211A1D0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0168:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// addi r31,r11,-25976
	ctx.r31.s64 = ctx.r11.s64 + -25976;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 204);
	// bl 0x8211a1d0
	ctx.lr = 0x820F0190;
	sub_8211A1D0(ctx, base);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r7,206(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 206);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211a1d0
	ctx.lr = 0x820F01B0;
	sub_8211A1D0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F01C0:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820eeed0
	ctx.lr = 0x820F01D8;
	sub_820EEED0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F01E8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f0210
	if (ctx.cr6.eq) goto loc_820F0210;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,104(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0200;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0210:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,100(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0220;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0230:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820f013c
	if (ctx.cr6.eq) goto loc_820F013C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82333d80
	ctx.lr = 0x820F0240;
	sub_82333D80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x82284650
	ctx.lr = 0x820F0250;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822ef0a8
	ctx.lr = 0x820F0260;
	sub_822EF0A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82333d78
	ctx.lr = 0x820F0274;
	sub_82333D78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1490
	ctx.lr = 0x820F0280;
	sub_822A1490(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// bl 0x8211a1d0
	ctx.lr = 0x820F02A0;
	sub_8211A1D0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F02B0:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f02d8
	if (ctx.cr6.eq) goto loc_820F02D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,172(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F02C8;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F02D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,168(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F02E8;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F02F8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82119bf0
	ctx.lr = 0x820F0308;
	sub_82119BF0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0318:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f0340
	if (ctx.cr6.eq) goto loc_820F0340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,156(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0330;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0340:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,152(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0350;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0360:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x821803f8
	ctx.lr = 0x820F036C;
	sub_821803F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f1bd8
	ctx.lr = 0x820F0378;
	sub_820F1BD8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0388:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211f780
	ctx.lr = 0x820F039C;
	sub_8211F780(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F03AC:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211f7d8
	ctx.lr = 0x820F03C0;
	sub_8211F7D8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F03D0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820efa0c
	if (!ctx.cr6.eq) goto loc_820EFA0C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211f8e0
	ctx.lr = 0x820F03F8;
	sub_8211F8E0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0408:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// lhz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f0460
	if (ctx.cr6.eq) goto loc_820F0460;
	// rlwinm r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// beq cr6,0x820f0448
	if (ctx.cr6.eq) goto loc_820F0448;
	// lwz r5,3560(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3560);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0438;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0448:
	// lwz r5,3552(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3552);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0450;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0460:
	// lwz r5,160(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820ef9e4
	if (!ctx.cr6.eq) goto loc_820EF9E4;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r5,3544(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3544);
	// bl 0x820f9ae8
	ctx.lr = 0x820F047C;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F048C:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// lhz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f04c0
	if (ctx.cr6.eq) goto loc_820F04C0;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r5,3556(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3556);
	// bl 0x820f9a68
	ctx.lr = 0x820F04B0;
	sub_820F9A68(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F04C0:
	// lwz r5,164(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820f04d8
	if (!ctx.cr6.eq) goto loc_820F04D8;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r5,3548(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3548);
loc_820F04D8:
	// bl 0x820f9a68
	ctx.lr = 0x820F04DC;
	sub_820F9A68(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F04EC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23180
	ctx.r10.u64 = ctx.r11.u64 | 23180;
	// lwzx r9,r23,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820efa0c
	if (!ctx.cr6.eq) goto loc_820EFA0C;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211b608
	ctx.lr = 0x820F0518;
	sub_8211B608(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0528:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f0560
	if (ctx.cr6.eq) goto loc_820F0560;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82332c00
	ctx.lr = 0x820F0538;
	sub_82332C00(ctx, base);
	// bl 0x82332af8
	ctx.lr = 0x820F053C;
	sub_82332AF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0550;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0560:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,208(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0570;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0580:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f05f0
	if (ctx.cr6.eq) goto loc_820F05F0;
	// lwz r11,172(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 172);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820f05b4
	if (!ctx.cr6.eq) goto loc_820F05B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82333410
	ctx.lr = 0x820F05AC;
	sub_82333410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f05c8
	if (ctx.cr6.eq) goto loc_820F05C8;
loc_820F05B4:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r4,3564(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3564);
	// bl 0x820f9aa8
	ctx.lr = 0x820F05C8;
	sub_820F9AA8(ctx, base);
loc_820F05C8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f05f0
	if (ctx.cr6.eq) goto loc_820F05F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,220(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F05E0;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F05F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,216(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0600;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0610:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f0680
	if (ctx.cr6.eq) goto loc_820F0680;
	// lwz r11,172(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 172);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820f0644
	if (!ctx.cr6.eq) goto loc_820F0644;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82333410
	ctx.lr = 0x820F063C;
	sub_82333410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f0658
	if (ctx.cr6.eq) goto loc_820F0658;
loc_820F0644:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r4,3568(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3568);
	// bl 0x820f9aa8
	ctx.lr = 0x820F0658;
	sub_820F9AA8(ctx, base);
loc_820F0658:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f0680
	if (ctx.cr6.eq) goto loc_820F0680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,228(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0670;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0680:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,224(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x820F0690;
	sub_820F9AE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F06A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x820f06c0
	if (!ctx.cr6.eq) goto loc_820F06C0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235db78
	ctx.lr = 0x820F06B8;
	sub_8235DB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
loc_820F06C0:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r31,88
	ctx.r5.s64 = ctx.r31.s64 + 88;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d6e8
	ctx.lr = 0x820F06D8;
	sub_8235D6E8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F06E8:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r9,r1,232
	ctx.r9.s64 = ctx.r1.s64 + 232;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r31,88
	ctx.r7.s64 = ctx.r31.s64 + 88;
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stfs f0,232(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lhz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// stfs f13,236(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lhz r5,130(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 130);
	// stfs f12,240(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lhz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x8211d4f0
	ctx.lr = 0x820F0734;
	sub_8211D4F0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0744:
	// lhz r30,130(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 130);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d9060
	ctx.lr = 0x820F0750;
	sub_820D9060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f0774
	if (!ctx.cr6.eq) goto loc_820F0774;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x820f0788
	goto loc_820F0788;
loc_820F0774:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r30,9780
	ctx.r10.s64 = ctx.r30.s64 * 9780;
	// addi r11,r11,9240
	ctx.r11.s64 = ctx.r11.s64 + 9240;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
loc_820F0788:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lhz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// lhz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// bl 0x8211b3a0
	ctx.lr = 0x820F07A0;
	sub_8211B3A0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F07B0:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211b4e0
	ctx.lr = 0x820F07C0;
	sub_8211B4E0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F07D0:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211b560
	ctx.lr = 0x820F07E4;
	sub_8211B560(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F07F4:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// lhz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// bl 0x8211d548
	ctx.lr = 0x820F0818;
	sub_8211D548(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0828:
	// lwz r11,380(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 380);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,380(r26)
	PPC_STORE_U32(ctx.r26.u32 + 380, ctx.r10.u32);
loc_820F0834:
	// lwz r11,268(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f0858
	if (ctx.cr6.eq) goto loc_820F0858;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x820f9a68
	ctx.lr = 0x820F0858;
	sub_820F9A68(ctx, base);
loc_820F0858:
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// addi r28,r11,-22896
	ctx.r28.s64 = ctx.r11.s64 + -22896;
	// bne cr6,0x820f093c
	if (!ctx.cr6.eq) goto loc_820F093C;
	// cmpwi cr6,r25,61
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 61, ctx.xer);
	// bne cr6,0x820f093c
	if (!ctx.cr6.eq) goto loc_820F093C;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,16064(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16064);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,385
	ctx.r10.s64 = ctx.r10.s64 + 385;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r26,272
	ctx.r3.s64 = ctx.r26.s64 + 272;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r29,r9,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x822da518
	ctx.lr = 0x820F08A0;
	sub_822DA518(ctx, base);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f13,236(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,240(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,640
	ctx.r7.s64 = 41943040;
	// lfs f11,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r26,236
	ctx.r4.s64 = ctx.r26.s64 + 236;
	// lfs f10,244(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// lfs f8,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// ori r7,r7,57489
	ctx.r7.u64 = ctx.r7.u64 | 57489;
	// lfs f0,5876(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f7,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f9,f11,f0,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f6,f8,f0,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f9,200(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmadds f5,f7,f0,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f6,204(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f5,208(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lhz r6,126(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x8211ec08
	ctx.lr = 0x820F08F4;
	sub_8211EC08(ctx, base);
	// lfs f4,236(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 236);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,240(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	ctx.f3.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f2,244(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f4
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// lfs f11,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fsubs f9,f11,f2
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// lfs f0,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f12,f0,f4
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f8,184(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmadds f7,f10,f0,f3
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfs f7,188(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmadds f6,f9,f0,f2
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stfs f6,192(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// bne cr6,0x820f0974
	if (!ctx.cr6.eq) goto loc_820F0974;
loc_820F093C:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lfs f0,236(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16064(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16064);
	// lfs f13,240(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,350
	ctx.r10.s64 = ctx.r10.s64 + 350;
	// lfs f12,244(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r29,r9,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
loc_820F0974:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d4788
	ctx.lr = 0x820F0980;
	sub_822D4788(ctx, base);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da2d0
	ctx.lr = 0x820F0990;
	sub_822DA2D0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,11308(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// bl 0x821a2a50
	ctx.lr = 0x820F09B0;
	sub_821A2A50(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F09C0:
	// lwz r11,1000(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r26,r9,-5928
	ctx.r26.s64 = ctx.r9.s64 + -5928;
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lfs f30,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x82292438
	ctx.lr = 0x820F0A10;
	sub_82292438(ctx, base);
	// lwz r6,1000(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// lwz r11,1012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// lwz r10,1008(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1008);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821809c0
	ctx.lr = 0x820F0A54;
	sub_821809C0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d4788
	ctx.lr = 0x820F0A60;
	sub_822D4788(ctx, base);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da2d0
	ctx.lr = 0x820F0A70;
	sub_822DA2D0(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211a838
	ctx.lr = 0x820F0A90;
	sub_8211A838(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r11,6968
	ctx.r31.s64 = ctx.r11.s64 + 6968;
	// beq cr6,0x820f0ab8
	if (ctx.cr6.eq) goto loc_820F0AB8;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r5,11308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11308);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a50
	ctx.lr = 0x820F0AB8;
	sub_821A2A50(ctx, base);
loc_820F0AB8:
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f0ad0
	if (ctx.cr6.eq) goto loc_820F0AD0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x820F0AD0;
	sub_820F9A68(ctx, base);
loc_820F0AD0:
	// lwz r4,1064(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1064);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f0af0
	if (ctx.cr6.eq) goto loc_820F0AF0;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r5,11308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11308);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a50
	ctx.lr = 0x820F0AF0;
	sub_821A2A50(ctx, base);
loc_820F0AF0:
	// lwz r5,1072(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1072);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x820F0B08;
	sub_820F9A68(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0B18:
	// lwz r11,380(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 380);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,380(r26)
	PPC_STORE_U32(ctx.r26.u32 + 380, ctx.r10.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0B34:
	// lwz r11,380(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 380);
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,380(r26)
	PPC_STORE_U32(ctx.r26.u32 + 380, ctx.r10.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0B50:
	// lwz r11,1000(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// addi r26,r9,-5928
	ctx.r26.s64 = ctx.r9.s64 + -5928;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f31,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x82292438
	ctx.lr = 0x820F0B98;
	sub_82292438(ctx, base);
	// lwz r7,1000(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r6,1012(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// lwz r10,1008(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1008);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x821809c0
	ctx.lr = 0x820F0BDC;
	sub_821809C0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d4788
	ctx.lr = 0x820F0BE8;
	sub_822D4788(ctx, base);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da2d0
	ctx.lr = 0x820F0BF8;
	sub_822DA2D0(ctx, base);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211a838
	ctx.lr = 0x820F0C18;
	sub_8211A838(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r11,6968
	ctx.r31.s64 = ctx.r11.s64 + 6968;
	// beq cr6,0x820f0c40
	if (ctx.cr6.eq) goto loc_820F0C40;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r5,11308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11308);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a50
	ctx.lr = 0x820F0C40;
	sub_821A2A50(ctx, base);
loc_820F0C40:
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f0c58
	if (ctx.cr6.eq) goto loc_820F0C58;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x820F0C58;
	sub_820F9A68(ctx, base);
loc_820F0C58:
	// lwz r4,1064(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1064);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f0c78
	if (ctx.cr6.eq) goto loc_820F0C78;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r5,11308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11308);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a50
	ctx.lr = 0x820F0C78;
	sub_821A2A50(ctx, base);
loc_820F0C78:
	// lwz r5,1072(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1072);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x820F0C90;
	sub_820F9A68(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0CA0:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d4788
	ctx.lr = 0x820F0CAC;
	sub_822D4788(ctx, base);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da2d0
	ctx.lr = 0x820F0CBC;
	sub_822DA2D0(ctx, base);
	// lwz r4,1064(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1064);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f0ce4
	if (ctx.cr6.eq) goto loc_820F0CE4;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,11308(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// bl 0x821a2a50
	ctx.lr = 0x820F0CE4;
	sub_821A2A50(ctx, base);
loc_820F0CE4:
	// lwz r5,1072(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1072);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x820F0CFC;
	sub_820F9A68(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0D0C:
	// lwz r11,1000(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// addi r26,r9,-5928
	ctx.r26.s64 = ctx.r9.s64 + -5928;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x82292438
	ctx.lr = 0x820F0D54;
	sub_82292438(ctx, base);
	// lwz r7,1000(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r6,1012(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// lwz r10,1008(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1008);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x821809c0
	ctx.lr = 0x820F0D98;
	sub_821809C0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d4788
	ctx.lr = 0x820F0DA4;
	sub_822D4788(ctx, base);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da2d0
	ctx.lr = 0x820F0DB4;
	sub_822DA2D0(ctx, base);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211a838
	ctx.lr = 0x820F0DD4;
	sub_8211A838(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r11,6968
	ctx.r31.s64 = ctx.r11.s64 + 6968;
	// beq cr6,0x820f0dfc
	if (ctx.cr6.eq) goto loc_820F0DFC;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r5,11308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11308);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a50
	ctx.lr = 0x820F0DFC;
	sub_821A2A50(ctx, base);
loc_820F0DFC:
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f0e14
	if (ctx.cr6.eq) goto loc_820F0E14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x820F0E14;
	sub_820F9A68(ctx, base);
loc_820F0E14:
	// lwz r4,1064(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1064);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f0e34
	if (ctx.cr6.eq) goto loc_820F0E34;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r5,11308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11308);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a50
	ctx.lr = 0x820F0E34;
	sub_821A2A50(ctx, base);
loc_820F0E34:
	// lwz r5,1072(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1072);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x820F0E4C;
	sub_820F9A68(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0E5C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d4788
	ctx.lr = 0x820F0E68;
	sub_822D4788(ctx, base);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da2d0
	ctx.lr = 0x820F0E78;
	sub_822DA2D0(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r11,16064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16064);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,1960(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1960);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r9,r10,6968
	ctx.r9.s64 = ctx.r10.s64 + 6968;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,11308(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11308);
	// bl 0x821a2a50
	ctx.lr = 0x820F0EB4;
	sub_821A2A50(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0EC4:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d4788
	ctx.lr = 0x820F0ED0;
	sub_822D4788(ctx, base);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da2d0
	ctx.lr = 0x820F0EE0;
	sub_822DA2D0(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r27,r11,-22896
	ctx.r27.s64 = ctx.r11.s64 + -22896;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r10,r27,1404
	ctx.r10.s64 = ctx.r27.s64 + 1404;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x820f9a68
	ctx.lr = 0x820F0F04;
	sub_820F9A68(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r26,r11,6968
	ctx.r26.s64 = ctx.r11.s64 + 6968;
	// addi r7,r10,490
	ctx.r7.s64 = ctx.r10.s64 + 490;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16064(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16064);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820f0f44
	if (ctx.cr6.eq) goto loc_820F0F44;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r5,11308(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 11308);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a50
	ctx.lr = 0x820F0F44;
	sub_821A2A50(ctx, base);
loc_820F0F44:
	// lwz r4,1064(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1064);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f0f64
	if (ctx.cr6.eq) goto loc_820F0F64;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r5,11308(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 11308);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a50
	ctx.lr = 0x820F0F64;
	sub_821A2A50(ctx, base);
loc_820F0F64:
	// lwz r5,1072(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1072);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f0f7c
	if (ctx.cr6.eq) goto loc_820F0F7C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x820F0F7C;
	sub_820F9A68(ctx, base);
loc_820F0F7C:
	// lwz r4,1068(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1068);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f0f9c
	if (ctx.cr6.eq) goto loc_820F0F9C;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r5,11308(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 11308);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a50
	ctx.lr = 0x820F0F9C;
	sub_821A2A50(ctx, base);
loc_820F0F9C:
	// lwz r5,1076(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1076);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x820F0FB4;
	sub_820F9A68(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F0FC4:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d4788
	ctx.lr = 0x820F0FD0;
	sub_822D4788(ctx, base);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da2d0
	ctx.lr = 0x820F0FE0;
	sub_822DA2D0(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r27,r11,-22896
	ctx.r27.s64 = ctx.r11.s64 + -22896;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r10,r27,1404
	ctx.r10.s64 = ctx.r27.s64 + 1404;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x820f9a68
	ctx.lr = 0x820F1004;
	sub_820F9A68(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r26,r11,6968
	ctx.r26.s64 = ctx.r11.s64 + 6968;
	// addi r7,r10,490
	ctx.r7.s64 = ctx.r10.s64 + 490;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16064(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16064);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820f1044
	if (ctx.cr6.eq) goto loc_820F1044;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r5,11308(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 11308);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a50
	ctx.lr = 0x820F1044;
	sub_821A2A50(ctx, base);
loc_820F1044:
	// lwz r4,1068(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1068);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f1064
	if (ctx.cr6.eq) goto loc_820F1064;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r5,11308(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 11308);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2a50
	ctx.lr = 0x820F1064;
	sub_821A2A50(ctx, base);
loc_820F1064:
	// lwz r5,1076(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1076);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x820F107C;
	sub_820F9A68(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F108C:
	// lwz r11,1000(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// addi r26,r9,-5928
	ctx.r26.s64 = ctx.r9.s64 + -5928;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f31,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x82292438
	ctx.lr = 0x820F10D4;
	sub_82292438(ctx, base);
	// lwz r7,1000(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r6,1012(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,1008(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1008);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x821809c0
	ctx.lr = 0x820F1118;
	sub_821809C0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d4788
	ctx.lr = 0x820F1124;
	sub_822D4788(ctx, base);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822da2d0
	ctx.lr = 0x820F1134;
	sub_822DA2D0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// addi r8,r10,6968
	ctx.r8.s64 = ctx.r10.s64 + 6968;
	// addi r28,r9,-22896
	ctx.r28.s64 = ctx.r9.s64 + -22896;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,11308(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	// lwz r4,16080(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16080);
	// bl 0x821a2a50
	ctx.lr = 0x820F115C;
	sub_821A2A50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,1276(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1276);
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x820F116C;
	sub_820F9A68(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 128);
	// bl 0x820eef80
	ctx.lr = 0x820F117C;
	sub_820EEF80(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F118C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// addi r3,r27,1752
	ctx.r3.s64 = ctx.r27.s64 + 1752;
	// bl 0x821201a0
	ctx.lr = 0x820F119C;
	sub_821201A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f8be8
	ctx.lr = 0x820F11AC;
	sub_820F8BE8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F11BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820f15dc
	if (ctx.cr6.eq) goto loc_820F15DC;
	// addi r3,r27,1752
	ctx.r3.s64 = ctx.r27.s64 + 1752;
	// bl 0x821201a0
	ctx.lr = 0x820F11CC;
	sub_821201A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f8c68
	ctx.lr = 0x820F11E0;
	sub_820F8C68(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F11F0:
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x820f1218
	if (ctx.cr6.eq) goto loc_820F1218;
	// addi r5,r27,-1
	ctx.r5.s64 = ctx.r27.s64 + -1;
	// bl 0x820f87f8
	ctx.lr = 0x820F1208;
	sub_820F87F8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F1218:
	// bl 0x820f87f0
	ctx.lr = 0x820F121C;
	sub_820F87F0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F122C:
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820eeb00
	ctx.lr = 0x820F1238;
	sub_820EEB00(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F1248:
	// addi r5,r27,2520
	ctx.r5.s64 = ctx.r27.s64 + 2520;
	// lhz r4,334(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 334);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f8cd8
	ctx.lr = 0x820F1258;
	sub_820F8CD8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F1268:
	// addi r5,r27,2520
	ctx.r5.s64 = ctx.r27.s64 + 2520;
	// lhz r4,334(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 334);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f8d90
	ctx.lr = 0x820F1278;
	sub_820F8D90(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F1288:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820eebb8
	ctx.lr = 0x820F1294;
	sub_820EEBB8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F12A4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f3,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f2,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// addi r28,r11,-5928
	ctx.r28.s64 = ctx.r11.s64 + -5928;
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82292438
	ctx.lr = 0x820F12D0;
	sub_82292438(ctx, base);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f3,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f2,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821809c0
	ctx.lr = 0x820F12FC;
	sub_821809C0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F130C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f3,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f2,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// addi r28,r11,-5928
	ctx.r28.s64 = ctx.r11.s64 + -5928;
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82292438
	ctx.lr = 0x820F1338;
	sub_82292438(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f3,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f2,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// bl 0x821809c0
	ctx.lr = 0x820F1364;
	sub_821809C0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F1374:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// addi r28,r31,96
	ctx.r28.s64 = ctx.r31.s64 + 96;
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x82292438
	ctx.lr = 0x820F13A4;
	sub_82292438(ctx, base);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f2,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821809c0
	ctx.lr = 0x820F13D0;
	sub_821809C0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F13E0:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r8,r8,-5928
	ctx.r8.s64 = ctx.r8.s64 + -5928;
	// lfs f2,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f3,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821809c0
	ctx.lr = 0x820F1418;
	sub_821809C0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F1428:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f4,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82180d90
	ctx.lr = 0x820F1444;
	sub_82180D90(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F1454:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f2,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820dcb68
	ctx.lr = 0x820F1468;
	sub_820DCB68(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F1478:
	// addi r3,r27,1169
	ctx.r3.s64 = ctx.r27.s64 + 1169;
	// bl 0x821201a0
	ctx.lr = 0x820F1480;
	sub_821201A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82104b30
	ctx.lr = 0x820F1490;
	sub_82104B30(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F14A0:
	// addi r3,r27,1169
	ctx.r3.s64 = ctx.r27.s64 + 1169;
	// bl 0x821201a0
	ctx.lr = 0x820F14A8;
	sub_821201A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82104b50
	ctx.lr = 0x820F14B8;
	sub_82104B50(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F14C8:
	// addi r3,r27,1169
	ctx.r3.s64 = ctx.r27.s64 + 1169;
	// bl 0x821201a0
	ctx.lr = 0x820F14D0;
	sub_821201A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82104b70
	ctx.lr = 0x820F14E0;
	sub_82104B70(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F14F0:
	// addi r3,r27,1169
	ctx.r3.s64 = ctx.r27.s64 + 1169;
	// bl 0x821201a0
	ctx.lr = 0x820F14F8;
	sub_821201A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82104b90
	ctx.lr = 0x820F1508;
	sub_82104B90(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F1518:
	// addi r3,r27,1169
	ctx.r3.s64 = ctx.r27.s64 + 1169;
	// bl 0x821201a0
	ctx.lr = 0x820F1520;
	sub_821201A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82104cf0
	ctx.lr = 0x820F1530;
	sub_82104CF0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F1540:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82104db8
	ctx.lr = 0x820F1548;
	sub_82104DB8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F1558:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820f1584
	if (ctx.cr6.eq) goto loc_820F1584;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,14792
	ctx.r5.s64 = ctx.r11.s64 + 14792;
	// bl 0x820f9a48
	ctx.lr = 0x820F1574;
	sub_820F9A48(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F1584:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,14772
	ctx.r5.s64 = ctx.r11.s64 + 14772;
	// bl 0x820f9a48
	ctx.lr = 0x820F1598;
	sub_820F9A48(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F15A8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef0d8
	ctx.lr = 0x820F15B4;
	sub_820EF0D8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_820F15C4:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,14748
	ctx.r4.s64 = ctx.r10.s64 + 14748;
	// lwzx r5,r11,r18
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// bl 0x822830e8
	ctx.lr = 0x820F15DC;
	sub_822830E8(ctx, base);
loc_820F15DC:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EF1D0) {
	__imp__sub_820EF1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F15EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F15EC) {
	__imp__sub_820F15EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F15F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,388(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f1640
	if (!ctx.cr6.eq) goto loc_820F1640;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,388(r4)
	PPC_STORE_U32(ctx.r4.u32 + 388, ctx.r11.u32);
	// bl 0x820ed710
	ctx.lr = 0x820F1628;
	sub_820ED710(ctx, base);
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// bl 0x820ef1d0
	ctx.lr = 0x820F1640;
	sub_820EF1D0(ctx, base);
loc_820F1640:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F15F0) {
	__imp__sub_820F15F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820F1660;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,388(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,352(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 352);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820f1710
	if (ctx.cr6.eq) goto loc_820F1710;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f1690
	if (!ctx.cr6.eq) goto loc_820F1690;
	// stw r11,388(r4)
	PPC_STORE_U32(ctx.r4.u32 + 388, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_820F1690:
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x820f16a0
	if (!ctx.cr0.lt) goto loc_820F16A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
loc_820F16A0:
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x820f16b8
	if (!ctx.cr6.gt) goto loc_820F16B8;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
loc_820F16B8:
	// lwz r30,388(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820f170c
	if (!ctx.cr6.lt) goto loc_820F170C;
	// lwz r27,216(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r29,r31,356
	ctx.r29.s64 = ctx.r31.s64 + 356;
loc_820F16CC:
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,90
	ctx.r10.s64 = ctx.r11.s64 + 90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r8,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// bl 0x820ef1d0
	ctx.lr = 0x820F16F4;
	sub_820EF1D0(ctx, base);
	// lwz r7,352(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x820f16cc
	if (!ctx.cr6.eq) goto loc_820F16CC;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r27,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r27.u32);
loc_820F170C:
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
loc_820F1710:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F1658) {
	__imp__sub_820F1658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820f1764
	if (!ctx.cr6.eq) goto loc_820F1764;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820f1754
	if (ctx.cr6.lt) goto loc_820F1754;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_820F1754:
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
loc_820F1764:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x820f179c
	if (!ctx.cr6.lt) goto loc_820F179C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820f179c
	if (ctx.cr6.lt) goto loc_820F179C;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// sraw r8,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
loc_820F179C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sraw r8,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F1718) {
	__imp__sub_820F1718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F17B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F17B4) {
	__imp__sub_820F17B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F17B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x820f1840
	if (!ctx.cr6.gt) goto loc_820F1840;
loc_820F17D0:
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820f17f8
	if (!ctx.cr6.eq) goto loc_820F17F8;
	// lwz r9,20(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x820f1848
	if (!ctx.cr6.lt) goto loc_820F1848;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r9.u32);
loc_820F17F8:
	// lwz r6,16(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820f181c
	if (!ctx.cr6.lt) goto loc_820F181C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x820f181c
	if (ctx.cr6.lt) goto loc_820F181C;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lbzx r9,r6,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// b 0x820f1820
	goto loc_820F1820;
loc_820F181C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_820F1820:
	// sraw r9,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// or r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 | ctx.r3.u64;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x820f17d0
	if (ctx.cr6.lt) goto loc_820F17D0;
loc_820F1840:
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// blr 
	return;
loc_820F1848:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F17B8) {
	__imp__sub_820F17B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1858) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,32432
	ctx.r10.s64 = ctx.r10.s64 + 32432;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F1858) {
	__imp__sub_820F1858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1870) {
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
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,32432
	ctx.r9.s64 = ctx.r10.s64 + 32432;
	// li r5,5132
	ctx.r5.s64 = 5132;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,5132(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5132, ctx.r11.u8);
	// bl 0x823de090
	ctx.lr = 0x820F189C;
	sub_823DE090(ctx, base);
	// bl 0x821892f0
	ctx.lr = 0x820F18A0;
	sub_821892F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F1870) {
	__imp__sub_820F1870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F18B0) {
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
	// bl 0x821899a8
	ctx.lr = 0x820F18C0;
	sub_821899A8(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-27972(r10)
	PPC_STORE_U8(ctx.r10.u32 + -27972, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F18B0) {
	__imp__sub_820F18B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F18DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F18DC) {
	__imp__sub_820F18DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F18E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,32432
	ctx.r11.s64 = ctx.r11.s64 + 32432;
	// lbz r10,5128(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,5124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5124);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,5124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5124, ctx.r10.u32);
	// li r3,2046
	ctx.r3.s64 = 2046;
	// b 0x820f9a68
	sub_820F9A68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F18E0) {
	__imp__sub_820F18E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1918) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F1918) {
	__imp__sub_820F1918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F191C) {
	__imp__sub_820F191C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,15048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15044(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15044);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F1920) {
	__imp__sub_820F1920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820F1958;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,32432
	ctx.r31.s64 = ctx.r11.s64 + 32432;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x820f1b8c
	if (!ctx.cr6.lt) goto loc_820F1B8C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x820f19a0
	if (!ctx.cr6.eq) goto loc_820F19A0;
	// bl 0x82189610
	ctx.lr = 0x820F1994;
	sub_82189610(ctx, base);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_820F19A0:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x820f1a10
	if (ctx.cr6.lt) goto loc_820F1A10;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x820f1a10
	if (!ctx.cr6.lt) goto loc_820F1A10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82189448
	ctx.lr = 0x820F19B8;
	sub_82189448(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x820f1a10
	if (!ctx.cr6.eq) goto loc_820F1A10;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188d48
	ctx.lr = 0x820F19CC;
	sub_82188D48(ctx, base);
	// lbz r11,5128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f1b88
	if (ctx.cr6.eq) goto loc_820F1B88;
	// lwz r11,5124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5124);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820f1b88
	if (ctx.cr6.eq) goto loc_820F1B88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// stw r11,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r9,r10,-22896
	ctx.r9.s64 = ctx.r10.s64 + -22896;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// lwz r5,15992(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15992);
	// bl 0x820f9a68
	ctx.lr = 0x820F1A04;
	sub_820F9A68(ctx, base);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_820F1A10:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x820f1b88
	if (ctx.cr6.lt) goto loc_820F1B88;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188d48
	ctx.lr = 0x820F1A24;
	sub_82188D48(ctx, base);
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// lbz r11,5128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5128);
	// bne cr6,0x820f1a98
	if (!ctx.cr6.eq) goto loc_820F1A98;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f1a68
	if (ctx.cr6.eq) goto loc_820F1A68;
	// lwz r11,5124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5124);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820f1a68
	if (ctx.cr6.eq) goto loc_820F1A68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// stw r11,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r9,r10,-22896
	ctx.r9.s64 = ctx.r10.s64 + -22896;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// lwz r5,16000(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16000);
	// bl 0x820f9a68
	ctx.lr = 0x820F1A68;
	sub_820F9A68(ctx, base);
loc_820F1A68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x820f1b74
	goto loc_820F1B74;
loc_820F1A98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f1acc
	if (ctx.cr6.eq) goto loc_820F1ACC;
	// lwz r11,5124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5124);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820f1acc
	if (ctx.cr6.eq) goto loc_820F1ACC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// stw r11,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r9,r10,-22896
	ctx.r9.s64 = ctx.r10.s64 + -22896;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// lwz r5,15996(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15996);
	// bl 0x820f9a68
	ctx.lr = 0x820F1ACC;
	sub_820F9A68(ctx, base);
loc_820F1ACC:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188d80
	ctx.lr = 0x820F1AD8;
	sub_82188D80(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lbz r3,2(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// bl 0x822d4788
	ctx.lr = 0x820F1AE4;
	sub_822D4788(ctx, base);
	// lbz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// lbz r6,3(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfs f0,15048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f2,f8
	ctx.f2.f64 = double(ctx.f8.s64);
	// lfs f13,15044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15044);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f7.f64 = double(temp.f32);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fsubs f6,f4,f0
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// frsp f4,f2
	ctx.f4.f64 = double(float(ctx.f2.f64));
	// fmuls f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fsubs f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fmadds f12,f11,f2,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f12.f64));
	// fmadds f10,f9,f2,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f9,f3,f2,f5
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f6,f1,f11,f12
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f5,f8,f11,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f4,f7,f11,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_820F1B74:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82189b78
	ctx.lr = 0x820F1B88;
	sub_82189B78(ctx, base);
loc_820F1B88:
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
loc_820F1B8C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F1950) {
	__imp__sub_820F1950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F1B94) {
	__imp__sub_820F1B94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1B98) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r10,32432
	ctx.r8.s64 = ctx.r10.s64 + 32432;
	// lbzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F1B98) {
	__imp__sub_820F1B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mulli r10,r3,5
	ctx.r10.s64 = ctx.r3.s64 * 5;
	// addi r9,r11,32432
	ctx.r9.s64 = ctx.r11.s64 + 32432;
	// li r8,2
	ctx.r8.s64 = 2;
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// subfc r6,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F1BB0) {
	__imp__sub_820F1BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F1BD4) {
	__imp__sub_820F1BD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1BD8) {
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
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,332
	ctx.r9.s64 = ctx.r11.s64 + 332;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820f1cb0
	if (ctx.cr6.eq) goto loc_820F1CB0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8211a640
	ctx.lr = 0x820F1C18;
	sub_8211A640(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211a5d0
	ctx.lr = 0x820F1C30;
	sub_8211A5D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f1cb0
	if (ctx.cr6.eq) goto loc_820F1CB0;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r10,-15680
	ctx.r8.s64 = ctx.r10.s64 + -15680;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// ori r7,r9,61924
	ctx.r7.u64 = ctx.r9.u64 | 61924;
	// lwz r11,-6720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6720);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// addis r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 131072;
	// lis r6,-32053
	ctx.r6.s64 = -2100625408;
	// mullw r9,r31,r7
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f13,f8,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f6,f8,f11,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f5,f9,f8,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f10.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r8,r6,-640
	ctx.r8.s64 = ctx.r6.s64 + -640;
	// addi r11,r10,2116
	ctx.r11.s64 = ctx.r10.s64 + 2116;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// bl 0x82196688
	ctx.lr = 0x820F1CB0;
	sub_82196688(ctx, base);
loc_820F1CB0:
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

PPC_WEAK_FUNC(sub_820F1BD8) {
	__imp__sub_820F1BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820f1718
	ctx.lr = 0x820F1CE8;
	sub_820F1718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f1d20
	if (ctx.cr6.eq) goto loc_820F1D20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822881b0
	ctx.lr = 0x820F1CF8;
	sub_822881B0(ctx, base);
	// stb r3,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r3.u8);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f17b8
	ctx.lr = 0x820F1D08;
	sub_820F17B8(ctx, base);
	// stb r3,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r3.u8);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f17b8
	ctx.lr = 0x820F1D18;
	sub_820F17B8(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
	// b 0x820f1d34
	goto loc_820F1D34;
loc_820F1D20:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_820F1D34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F1CC8) {
	__imp__sub_820F1CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F1D4C) {
	__imp__sub_820F1D4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820F1D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820f1718
	ctx.lr = 0x820F1D64;
	sub_820F1718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f1e78
	if (ctx.cr6.eq) goto loc_820F1E78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f1718
	ctx.lr = 0x820F1D74;
	sub_820F1718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f1e10
	if (ctx.cr6.eq) goto loc_820F1E10;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f1e78
	if (!ctx.cr6.eq) goto loc_820F1E78;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,32432
	ctx.r29.s64 = ctx.r11.s64 + 32432;
	// addi r28,r10,15052
	ctx.r28.s64 = ctx.r10.s64 + 15052;
loc_820F1D98:
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f17b8
	ctx.lr = 0x820F1DA4;
	sub_820F17B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1024
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1024, ctx.xer);
	// ble cr6,0x820f1dc4
	if (!ctx.cr6.gt) goto loc_820F1DC4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x820F1DC0;
	sub_822830E8(ctx, base);
	// cmplwi cr6,r31,1024
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1024, ctx.xer);
loc_820F1DC4:
	// beq cr6,0x820f1e78
	if (ctx.cr6.eq) goto loc_820F1E78;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,2
	ctx.r4.s64 = 2;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x820f17b8
	ctx.lr = 0x820F1DE0;
	sub_820F17B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820f1dfc
	if (!ctx.cr6.eq) goto loc_820F1DFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f1cc8
	ctx.lr = 0x820F1DFC;
	sub_820F1CC8(ctx, base);
loc_820F1DFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f1d98
	if (ctx.cr6.eq) goto loc_820F1D98;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820F1E10:
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f17b8
	ctx.lr = 0x820F1E1C;
	sub_820F17B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f1e78
	if (ctx.cr6.eq) goto loc_820F1E78;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r31,r11,32432
	ctx.r31.s64 = ctx.r11.s64 + 32432;
loc_820F1E34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f1e78
	if (!ctx.cr6.eq) goto loc_820F1E78;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f17b8
	ctx.lr = 0x820F1E4C;
	sub_820F17B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820f1e68
	if (!ctx.cr6.eq) goto loc_820F1E68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f1cc8
	ctx.lr = 0x820F1E68;
	sub_820F1CC8(ctx, base);
loc_820F1E68:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x820f1e34
	if (ctx.cr6.lt) goto loc_820F1E34;
loc_820F1E78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F1D50) {
	__imp__sub_820F1D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820F1E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,32432
	ctx.r28.s64 = ctx.r11.s64 + 32432;
	// lbz r11,5132(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f1f84
	if (ctx.cr6.eq) goto loc_820F1F84;
	// bl 0x82141df8
	ctx.lr = 0x820F1EA8;
	sub_82141DF8(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x820f1f84
	if (!ctx.cr6.eq) goto loc_820F1F84;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 131072;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mullw r9,r31,r8
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r11,2116
	ctx.r10.s64 = ctx.r11.s64 + 2116;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,5124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5124, ctx.r11.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 1;
	// li r29,1024
	ctx.r29.s64 = 1024;
loc_820F1EFC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,-1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820f1f34
	if (!ctx.cr6.gt) goto loc_820F1F34;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820f1f34
	if (!ctx.cr6.eq) goto loc_820F1F34;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82188d98
	ctx.lr = 0x820F1F28;
	sub_82188D98(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_820F1F34:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// bne 0x820f1efc
	if (!ctx.cr0.eq) goto loc_820F1EFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1024
	ctx.r29.s64 = 1024;
	// addi r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 1;
loc_820F1F50:
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,-1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820f1f6c
	if (!ctx.cr6.gt) goto loc_820F1F6C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f1950
	ctx.lr = 0x820F1F6C;
	sub_820F1950(ctx, base);
loc_820F1F6C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// bne 0x820f1f50
	if (!ctx.cr0.eq) goto loc_820F1F50;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5128(r28)
	PPC_STORE_U8(ctx.r28.u32 + 5128, ctx.r11.u8);
loc_820F1F84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F1E80) {
	__imp__sub_820F1E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F1F8C) {
	__imp__sub_820F1F8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1F90) {
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
	// bl 0x82141df8
	ctx.lr = 0x820F1FA0;
	sub_82141DF8(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 131072;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,2116
	ctx.r10.s64 = ctx.r10.s64 + 2116;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821894b0
	ctx.lr = 0x820F1FC4;
	sub_821894B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F1F90) {
	__imp__sub_820F1F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F1FD4) {
	__imp__sub_820F1FD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// li r4,5120
	ctx.r4.s64 = 5120;
	// addi r5,r11,32432
	ctx.r5.s64 = ctx.r11.s64 + 32432;
	// b 0x822e40f0
	sub_822E40F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F1FD8) {
	__imp__sub_820F1FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// li r4,5120
	ctx.r4.s64 = 5120;
	// addi r5,r11,32432
	ctx.r5.s64 = ctx.r11.s64 + 32432;
	// b 0x822e4480
	sub_822E4480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F1FE8) {
	__imp__sub_820F1FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F1FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820F2000;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de018
	ctx.lr = 0x820F2008;
	__savefpr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
	// addi r3,r10,17708
	ctx.r3.s64 = ctx.r10.s64 + 17708;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F202C;
	sub_822E15D0(ctx, base);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,-27892(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27892, ctx.r3.u32);
	// addi r30,r8,17676
	ctx.r30.s64 = ctx.r8.s64 + 17676;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f31,6912(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6912);
	ctx.f31.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f29,17672(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17672);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r4,17652
	ctx.r3.s64 = ctx.r4.s64 + 17652;
	// lfs f30,6060(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6060);
	ctx.f30.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F2074;
	sub_822E1660(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r29,r10,17616
	ctx.r29.s64 = ctx.r10.s64 + 17616;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-27912(r11)
	PPC_STORE_U32(ctx.r11.u32 + -27912, ctx.r3.u32);
	// addi r3,r9,17596
	ctx.r3.s64 = ctx.r9.s64 + 17596;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x822e1660
	ctx.lr = 0x820F20A4;
	sub_822E1660(ctx, base);
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r3,-27944(r7)
	PPC_STORE_U32(ctx.r7.u32 + -27944, ctx.r3.u32);
	// addi r3,r5,17564
	ctx.r3.s64 = ctx.r5.s64 + 17564;
	// lfs f26,13220(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 13220);
	ctx.f26.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F20D4;
	sub_822E1660(ctx, base);
	// lis r4,-32188
	ctx.r4.s64 = -2109472768;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-27916(r4)
	PPC_STORE_U32(ctx.r4.u32 + -27916, ctx.r3.u32);
	// addi r3,r10,17532
	ctx.r3.s64 = ctx.r10.s64 + 17532;
	// lfs f1,13904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F2100;
	sub_822E1660(ctx, base);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r8,r6,17448
	ctx.r8.s64 = ctx.r6.s64 + 17448;
	// stw r3,-27952(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27952, ctx.r3.u32);
	// addi r3,r5,17412
	ctx.r3.s64 = ctx.r5.s64 + 17412;
	// lfs f28,5808(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5808);
	ctx.f28.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F2134;
	sub_822E1660(ctx, base);
	// lis r4,-32188
	ctx.r4.s64 = -2109472768;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,-27844(r4)
	PPC_STORE_U32(ctx.r4.u32 + -27844, ctx.r3.u32);
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r10,17328
	ctx.r8.s64 = ctx.r10.s64 + 17328;
	// addi r3,r9,17284
	ctx.r3.s64 = ctx.r9.s64 + 17284;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F2168;
	sub_822E1660(ctx, base);
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r29,r7,17260
	ctx.r29.s64 = ctx.r7.s64 + 17260;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,-27840(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27840, ctx.r3.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r3,r6,17232
	ctx.r3.s64 = ctx.r6.s64 + 17232;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,7932(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F219C;
	sub_822E1660(ctx, base);
	// lis r5,-32188
	ctx.r5.s64 = -2109472768;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f1,7932(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stw r3,-27848(r5)
	PPC_STORE_U32(ctx.r5.u32 + -27848, ctx.r3.u32);
	// addi r3,r4,17204
	ctx.r3.s64 = ctx.r4.s64 + 17204;
	// bl 0x822e1660
	ctx.lr = 0x820F21C4;
	sub_822E1660(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f1,7932(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r9,17180
	ctx.r3.s64 = ctx.r9.s64 + 17180;
	// stw r11,-27900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27900, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F21F0;
	sub_822E1660(ctx, base);
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f1,7932(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r6,17152
	ctx.r3.s64 = ctx.r6.s64 + 17152;
	// stw r11,-27948(r7)
	PPC_STORE_U32(ctx.r7.u32 + -27948, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F221C;
	sub_822E1660(ctx, base);
	// lis r5,-32188
	ctx.r5.s64 = -2109472768;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,17072
	ctx.r6.s64 = ctx.r4.s64 + 17072;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,-27924(r5)
	PPC_STORE_U32(ctx.r5.u32 + -27924, ctx.r3.u32);
	// addi r3,r11,17036
	ctx.r3.s64 = ctx.r11.s64 + 17036;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F2240;
	sub_822E15D0(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,-27932(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27932, ctx.r3.u32);
	// addi r3,r7,17004
	ctx.r3.s64 = ctx.r7.s64 + 17004;
	// addi r8,r9,16968
	ctx.r8.s64 = ctx.r9.s64 + 16968;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,17000(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F2270;
	sub_822E1660(ctx, base);
	// lis r5,-32188
	ctx.r5.s64 = -2109472768;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r8,r11,16896
	ctx.r8.s64 = ctx.r11.s64 + 16896;
	// stw r3,-27896(r5)
	PPC_STORE_U32(ctx.r5.u32 + -27896, ctx.r3.u32);
	// addi r3,r10,16864
	ctx.r3.s64 = ctx.r10.s64 + 16864;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,8664(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8664);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F22A0;
	sub_822E1660(ctx, base);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r8,r6,16816
	ctx.r8.s64 = ctx.r6.s64 + 16816;
	// stw r3,-27856(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27856, ctx.r3.u32);
	// addi r3,r5,16784
	ctx.r3.s64 = ctx.r5.s64 + 16784;
	// lfs f27,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F22D4;
	sub_822E1660(ctx, base);
	// lis r4,-32188
	ctx.r4.s64 = -2109472768;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,16728
	ctx.r8.s64 = ctx.r10.s64 + 16728;
	// stw r3,-27968(r4)
	PPC_STORE_U32(ctx.r4.u32 + -27968, ctx.r3.u32);
	// addi r3,r9,16700
	ctx.r3.s64 = ctx.r9.s64 + 16700;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F2304;
	sub_822E1660(ctx, base);
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-27936(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27936, ctx.r3.u32);
	// addi r8,r5,16640
	ctx.r8.s64 = ctx.r5.s64 + 16640;
	// addi r3,r4,16612
	ctx.r3.s64 = ctx.r4.s64 + 16612;
	// lfs f1,16696(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16696);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F2334;
	sub_822E1660(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,-27888(r11)
	PPC_STORE_U32(ctx.r11.u32 + -27888, ctx.r3.u32);
	// addi r3,r7,16584
	ctx.r3.s64 = ctx.r7.s64 + 16584;
	// addi r8,r9,16536
	ctx.r8.s64 = ctx.r9.s64 + 16536;
	// lfs f1,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F2364;
	sub_822E1660(ctx, base);
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,-27852(r6)
	PPC_STORE_U32(ctx.r6.u32 + -27852, ctx.r3.u32);
	// addi r8,r5,16480
	ctx.r8.s64 = ctx.r5.s64 + 16480;
	// lfs f25,6020(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6020);
	ctx.f25.f64 = double(temp.f32);
	// addi r3,r10,16452
	ctx.r3.s64 = ctx.r10.s64 + 16452;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,14248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14248);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F239C;
	sub_822E1660(ctx, base);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r3,-27908(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27908, ctx.r3.u32);
	// addi r3,r5,16432
	ctx.r3.s64 = ctx.r5.s64 + 16432;
	// lfs f24,6688(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6688);
	ctx.f24.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,16448(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16448);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F23D0;
	sub_822E1660(ctx, base);
	// lis r4,-32188
	ctx.r4.s64 = -2109472768;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// stw r3,-27960(r4)
	PPC_STORE_U32(ctx.r4.u32 + -27960, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,16380
	ctx.r8.s64 = ctx.r10.s64 + 16380;
	// addi r3,r9,16356
	ctx.r3.s64 = ctx.r9.s64 + 16356;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,4292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4292);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F2400;
	sub_822E1660(ctx, base);
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r30,r31,-27956
	ctx.r30.s64 = ctx.r31.s64 + -27956;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r7,16328
	ctx.r3.s64 = ctx.r7.s64 + 16328;
	// addi r8,r8,16232
	ctx.r8.s64 = ctx.r8.s64 + 16232;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820F2434;
	sub_822E1660(ctx, base);
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r4,16128
	ctx.r8.s64 = ctx.r4.s64 + 16128;
	// stw r3,-27920(r6)
	PPC_STORE_U32(ctx.r6.u32 + -27920, ctx.r3.u32);
	// addi r3,r11,16100
	ctx.r3.s64 = ctx.r11.s64 + 16100;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,16228(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16228);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F2464;
	sub_822E1660(ctx, base);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,-27904(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27904, ctx.r3.u32);
	// addi r3,r7,16068
	ctx.r3.s64 = ctx.r7.s64 + 16068;
	// addi r8,r8,15968
	ctx.r8.s64 = ctx.r8.s64 + 15968;
	// lfs f1,16096(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16096);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820F2494;
	sub_822E1660(ctx, base);
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,-27964(r6)
	PPC_STORE_U32(ctx.r6.u32 + -27964, ctx.r3.u32);
	// addi r8,r11,15908
	ctx.r8.s64 = ctx.r11.s64 + 15908;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f2,11804(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11804);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r10,15888
	ctx.r3.s64 = ctx.r10.s64 + 15888;
	// lfs f1,2832(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2832);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F24C8;
	sub_822E1660(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r7,15860
	ctx.r3.s64 = ctx.r7.s64 + 15860;
	// addi r8,r8,15804
	ctx.r8.s64 = ctx.r8.s64 + 15804;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,15884(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15884);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F24F4;
	sub_822E1660(ctx, base);
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r8,r6,15720
	ctx.r8.s64 = ctx.r6.s64 + 15720;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// addi r3,r5,15696
	ctx.r3.s64 = ctx.r5.s64 + 15696;
	// li r7,68
	ctx.r7.s64 = 68;
	// bl 0x822e1660
	ctx.lr = 0x820F251C;
	sub_822E1660(ctx, base);
	// stw r3,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r3.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r8,r4,15608
	ctx.r8.s64 = ctx.r4.s64 + 15608;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r3,r3,15580
	ctx.r3.s64 = ctx.r3.s64 + 15580;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820F2544;
	sub_822E1660(ctx, base);
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r8,r11,15516
	ctx.r8.s64 = ctx.r11.s64 + 15516;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r3,r10,15488
	ctx.r3.s64 = ctx.r10.s64 + 15488;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820F256C;
	sub_822E1660(ctx, base);
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r7,15460
	ctx.r3.s64 = ctx.r7.s64 + 15460;
	// addi r8,r8,15400
	ctx.r8.s64 = ctx.r8.s64 + 15400;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F2598;
	sub_822E1660(ctx, base);
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r8,r6,15312
	ctx.r8.s64 = ctx.r6.s64 + 15312;
	// li r7,68
	ctx.r7.s64 = 68;
	// lfs f30,5488(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5488);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r4,15284
	ctx.r3.s64 = ctx.r4.s64 + 15284;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F25C8;
	sub_822E1660(ctx, base);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r8,r11,15200
	ctx.r8.s64 = ctx.r11.s64 + 15200;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r10,15168
	ctx.r3.s64 = ctx.r10.s64 + 15168;
	// li r7,68
	ctx.r7.s64 = 68;
	// bl 0x822e1660
	ctx.lr = 0x820F25F0;
	sub_822E1660(ctx, base);
	// stw r3,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r9,15128
	ctx.r6.s64 = ctx.r9.s64 + 15128;
	// addi r3,r8,15112
	ctx.r3.s64 = ctx.r8.s64 + 15112;
	// li r5,68
	ctx.r5.s64 = 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F2610;
	sub_822E15D0(ctx, base);
	// stw r3,-27956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27956, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de064
	ctx.lr = 0x820F2620;
	__restfpr_24(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F1FF8) {
	__imp__sub_820F1FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F2624) {
	__imp__sub_820F2624(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820F2630;
	__savegprlr_29(ctx, base);
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x822b7268
	ctx.lr = 0x820F2650;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cda98
	ctx.lr = 0x820F2664;
	sub_822CDA98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F2628) {
	__imp__sub_820F2628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F266C) {
	__imp__sub_820F266C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820F2678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820f26bc
	if (ctx.cr6.eq) goto loc_820F26BC;
	// addi r3,r4,144
	ctx.r3.s64 = ctx.r4.s64 + 144;
	// bl 0x821201a0
	ctx.lr = 0x820F2698;
	sub_821201A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,17728
	ctx.r4.s64 = ctx.r11.s64 + 17728;
	// bl 0x822b7268
	ctx.lr = 0x820F26A8;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cda98
	ctx.lr = 0x820F26BC;
	sub_822CDA98(ctx, base);
loc_820F26BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F2670) {
	__imp__sub_820F2670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F26C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F26C4) {
	__imp__sub_820F26C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F26C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,536(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// bl 0x822c1bf8
	ctx.lr = 0x820F26EC;
	sub_822C1BF8(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x8211f9d8
	ctx.lr = 0x820F2704;
	sub_8211F9D8(ctx, base);
	// fdivs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F26C8) {
	__imp__sub_820F26C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F271C) {
	__imp__sub_820F271C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x820f27d0
	if (ctx.cr6.gt) goto loc_820F27D0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820f27a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820F27A4;
	// bdzf 4*cr6+eq,0x820f27bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820F27BC;
	// bdzf 4*cr6+eq,0x820f2770
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820F2770;
	// bdzf 4*cr6+eq,0x820f27a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820F27A4;
	// bdzf 4*cr6+eq,0x820f27bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820F27BC;
	// bdzf 4*cr6+eq,0x820f278c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820F278C;
	// bne cr6,0x820f27a4
	if (!ctx.cr6.eq) goto loc_820F27A4;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,999
	ctx.r11.s64 = ctx.r11.s64 + 999;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
loc_820F2770:
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,99
	ctx.r11.s64 = ctx.r11.s64 + 99;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
loc_820F278C:
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
loc_820F27A4:
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
loc_820F27BC:
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
loc_820F27D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F2720) {
	__imp__sub_820F2720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F27D8) {
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
	// bl 0x820f2720
	ctx.lr = 0x820F27E8;
	sub_820F2720(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// li r10,3600
	ctx.r10.s64 = 3600;
	// divw r9,r3,r11
	ctx.r9.s32 = ctx.r3.s32 / ctx.r11.s32;
	// li r8,60
	ctx.r8.s64 = 60;
	// divw. r11,r9,r10
	ctx.r11.s32 = ctx.r9.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r7,r11,3600
	ctx.r7.s64 = ctx.r11.s64 * 3600;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// divw r4,r6,r8
	ctx.r4.s32 = ctx.r6.s32 / ctx.r8.s32;
	// mulli r5,r4,60
	ctx.r5.s64 = ctx.r4.s64 * 60;
	// subf r6,r5,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r5.s64;
	// beq 0x820f2838
	if (ctx.cr0.eq) goto loc_820F2838;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,17752
	ctx.r3.s64 = ctx.r10.s64 + 17752;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822e84f0
	ctx.lr = 0x820F2828;
	sub_822E84F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F2838:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r11,17744
	ctx.r3.s64 = ctx.r11.s64 + 17744;
	// bl 0x822e84f0
	ctx.lr = 0x820F2848;
	sub_822E84F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F27D8) {
	__imp__sub_820F27D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2858) {
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
	// bl 0x820f2720
	ctx.lr = 0x820F2868;
	sub_820F2720(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,100
	ctx.r10.s64 = 100;
	// ori r11,r11,36000
	ctx.r11.u64 = ctx.r11.u64 | 36000;
	// divw r9,r3,r10
	ctx.r9.s32 = ctx.r3.s32 / ctx.r10.s32;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// divw. r11,r9,r11
	ctx.r11.s32 = ctx.r9.s32 / ctx.r11.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r6,r11,r8
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// li r7,600
	ctx.r7.s64 = 600;
	// li r3,10
	ctx.r3.s64 = 10;
	// divw r4,r5,r7
	ctx.r4.s32 = ctx.r5.s32 / ctx.r7.s32;
	// mulli r10,r4,600
	ctx.r10.s64 = ctx.r4.s64 * 600;
	// subf r9,r10,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r10.s64;
	// divw r5,r9,r3
	ctx.r5.s32 = ctx.r9.s32 / ctx.r3.s32;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x820f28dc
	if (ctx.cr0.eq) goto loc_820F28DC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,17780
	ctx.r3.s64 = ctx.r10.s64 + 17780;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x822e84f0
	ctx.lr = 0x820F28CC;
	sub_822E84F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F28DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r11,17768
	ctx.r3.s64 = ctx.r11.s64 + 17768;
	// bl 0x822e84f0
	ctx.lr = 0x820F28EC;
	sub_822E84F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F2858) {
	__imp__sub_820F2858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F28FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F28FC) {
	__imp__sub_820F28FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820f2910
	if (!ctx.cr6.eq) goto loc_820F2910;
	// lfs f1,544(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 544);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820F2910:
	// rlwinm r11,r4,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// bne cr6,0x820f293c
	if (!ctx.cr6.eq) goto loc_820F293C;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// blr 
	return;
loc_820F293C:
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-16788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F2900) {
	__imp__sub_820F2900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F2964) {
	__imp__sub_820F2964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820f2978
	if (!ctx.cr6.eq) goto loc_820F2978;
	// lfs f1,544(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 544);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820F2978:
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// bne cr6,0x820f29a4
	if (!ctx.cr6.eq) goto loc_820F29A4;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// blr 
	return;
loc_820F29A4:
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-16788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F2968) {
	__imp__sub_820F2968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F29CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F29CC) {
	__imp__sub_820F29CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F29D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f29f4
	if (!ctx.cr6.eq) goto loc_820F29F4;
	// lfs f8,544(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 544);
	ctx.f8.f64 = double(temp.f32);
	// b 0x820f2a48
	goto loc_820F2A48;
loc_820F29F4:
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rlwinm r9,r10,0,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// bne cr6,0x820f2a24
	if (!ctx.cr6.eq) goto loc_820F2A24;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x820f2a48
	goto loc_820F2A48;
loc_820F2A24:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-16788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
loc_820F2A48:
	// lwz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x820f2a68
	if (ctx.cr6.gt) goto loc_820F2A68;
loc_820F2A54:
	// fmr f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f8.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F2A68:
	// lwz r11,564(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 564);
	// lwz r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x820f2a54
	if (!ctx.cr6.lt) goto loc_820F2A54;
	// lwz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lwz r4,108(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// bl 0x820f2900
	ctx.lr = 0x820F2A88;
	sub_820F2900(ctx, base);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x820f2ac4
	if (!ctx.cr6.gt) goto loc_820F2AC4;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// fsubs f0,f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f10.f64));
	// fmadds f1,f7,f0,f1
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f1.f64));
loc_820F2AC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F29D0) {
	__imp__sub_820F29D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F2AD4) {
	__imp__sub_820F2AD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f2afc
	if (!ctx.cr6.eq) goto loc_820F2AFC;
	// lfs f8,544(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 544);
	ctx.f8.f64 = double(temp.f32);
	// b 0x820f2b50
	goto loc_820F2B50;
loc_820F2AFC:
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x820f2b2c
	if (!ctx.cr6.eq) goto loc_820F2B2C;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x820f2b50
	goto loc_820F2B50;
loc_820F2B2C:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-16788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
loc_820F2B50:
	// lwz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x820f2b70
	if (ctx.cr6.gt) goto loc_820F2B70;
loc_820F2B5C:
	// fmr f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f8.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F2B70:
	// lwz r11,564(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 564);
	// lwz r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x820f2b5c
	if (!ctx.cr6.lt) goto loc_820F2B5C;
	// lwz r5,84(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// lwz r4,108(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// bl 0x820f2968
	ctx.lr = 0x820F2B90;
	sub_820F2968(ctx, base);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x820f2bcc
	if (!ctx.cr6.gt) goto loc_820F2BCC;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// fsubs f0,f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f10.f64));
	// fmadds f1,f7,f0,f1
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f1.f64));
loc_820F2BCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F2AD8) {
	__imp__sub_820F2AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F2BDC) {
	__imp__sub_820F2BDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2BE0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x820f2cb0
	if (ctx.cr6.gt) goto loc_820F2CB0;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11288
	ctx.r12.s64 = ctx.r12.s64 + 11288;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820F2C4C;
	case 1:
		goto loc_820F2C4C;
	case 2:
		goto loc_820F2C4C;
	case 3:
		goto loc_820F2C68;
	case 4:
		goto loc_820F2C4C;
	case 5:
		goto loc_820F2C4C;
	case 6:
		goto loc_820F2C4C;
	case 7:
		goto loc_820F2C4C;
	case 8:
		goto loc_820F2C4C;
	case 9:
		goto loc_820F2C4C;
	case 10:
		goto loc_820F2C68;
	case 11:
		goto loc_820F2C68;
	case 12:
		goto loc_820F2C88;
	default:
		return;
	}
	// lwz r16,11340(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11340);
	// lwz r16,11340(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11340);
	// lwz r16,11340(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11340);
	// lwz r16,11368(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11368);
	// lwz r16,11340(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11340);
	// lwz r16,11340(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11340);
	// lwz r16,11340(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11340);
	// lwz r16,11340(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11340);
	// lwz r16,11340(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11340);
	// lwz r16,11340(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11340);
	// lwz r16,11368(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11368);
	// lwz r16,11368(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11368);
	// lwz r16,11400(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11400);
loc_820F2C4C:
	// lfs f0,532(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 532);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,272(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F2C68:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bl 0x820f29d0
	ctx.lr = 0x820F2C70;
	sub_820F29D0(ctx, base);
	// lfs f0,272(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F2C88:
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F2CB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F2BE0) {
	__imp__sub_820F2BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2CC8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x820f2d88
	if (ctx.cr6.gt) goto loc_820F2D88;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11520
	ctx.r12.s64 = ctx.r12.s64 + 11520;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820F2D34;
	case 1:
		goto loc_820F2D34;
	case 2:
		goto loc_820F2D34;
	case 3:
		goto loc_820F2D3C;
	case 4:
		goto loc_820F2D34;
	case 5:
		goto loc_820F2D34;
	case 6:
		goto loc_820F2D34;
	case 7:
		goto loc_820F2D34;
	case 8:
		goto loc_820F2D34;
	case 9:
		goto loc_820F2D34;
	case 10:
		goto loc_820F2D3C;
	case 11:
		goto loc_820F2D3C;
	case 12:
		goto loc_820F2D48;
	default:
		return;
	}
	// lwz r16,11572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11572);
	// lwz r16,11572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11572);
	// lwz r16,11572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11572);
	// lwz r16,11580(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11580);
	// lwz r16,11572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11572);
	// lwz r16,11572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11572);
	// lwz r16,11572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11572);
	// lwz r16,11572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11572);
	// lwz r16,11572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11572);
	// lwz r16,11572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11572);
	// lwz r16,11580(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11580);
	// lwz r16,11580(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11580);
	// lwz r16,11592(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 11592);
loc_820F2D34:
	// lfs f1,544(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 544);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820f2d60
	goto loc_820F2D60;
loc_820F2D3C:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bl 0x820f2ad8
	ctx.lr = 0x820F2D44;
	sub_820F2AD8(ctx, base);
	// b 0x820f2d60
	goto loc_820F2D60;
loc_820F2D48:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
loc_820F2D60:
	// addic. r11,r7,16
	ctx.xer.ca = ctx.r7.u32 > 4294967279;
	ctx.r11.s64 = ctx.r7.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f2d90
	if (ctx.cr0.eq) goto loc_820F2D90;
	// lfs f0,544(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820f2d90
	if (!ctx.cr6.lt) goto loc_820F2D90;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F2D88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
loc_820F2D90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F2CC8) {
	__imp__sub_820F2CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r8,r10,15096
	ctx.r8.s64 = ctx.r10.s64 + 15096;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f1,f0,f2,f1
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f2.f64 - ctx.f1.f64)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F2DA0) {
	__imp__sub_820F2DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F2DBC) {
	__imp__sub_820F2DBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r10,r3,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xC;
	// addi r9,r11,15096
	ctx.r9.s64 = ctx.r11.s64 + 15096;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f1,f0,f2,f1
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f2.f64 - ctx.f1.f64)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F2DC0) {
	__imp__sub_820F2DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820F2DE0;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// clrlwi r5,r11,28
	ctx.r5.u64 = ctx.r11.u32 & 0xF;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bl 0x82140648
	ctx.lr = 0x820F2E18;
	sub_82140648(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// addi r27,r9,15096
	ctx.r27.s64 = ctx.r9.s64 + 15096;
	// clrlwi r5,r29,28
	ctx.r5.u64 = ctx.r29.u32 & 0xF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfsx f13,r8,r27
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f13,f30,f0
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * ctx.f30.f64 - ctx.f0.f64)));
	// stfs f12,0(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// bl 0x82140788
	ctx.lr = 0x820F2E48;
	sub_82140788(ctx, base);
	// rlwinm r7,r30,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xC;
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lfsx f11,r7,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f10,f11,f29,f1
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f29.f64 - ctx.f1.f64)));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F2DD8) {
	__imp__sub_820F2DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x820f2e88
	if (ctx.cr6.gt) goto loc_820F2E88;
loc_820F2E7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820F2E88:
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// subf. r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x820f2ea0
	if (ctx.cr0.gt) goto loc_820F2EA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820F2EA0:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820f2e7c
	if (!ctx.cr6.lt) goto loc_820F2E7C;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F2E70) {
	__imp__sub_820F2E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820f2eec
	if (ctx.cr6.gt) goto loc_820F2EEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F2EEC:
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subfc r8,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// eqv r7,r11,r9
	ctx.r7.u64 = ~(ctx.r11.u64 ^ ctx.r9.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F2ED8) {
	__imp__sub_820F2ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F2F0C) {
	__imp__sub_820F2F0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F2F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820F2F18;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820f3020
	if (!ctx.cr6.gt) goto loc_820F3020;
	// lwz r11,564(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 564);
	// lwz r9,112(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// subf. r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x820f2fdc
	if (ctx.cr0.gt) goto loc_820F2FDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_820F2F50:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f2,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lfs f1,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x820f2dd8
	ctx.lr = 0x820F2F7C;
	sub_820F2DD8(ctx, base);
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x820f2dd8
	ctx.lr = 0x820F2FA8;
	sub_820F2DD8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f8,f10,f31,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f7,f9,f31,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_820F2FD0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820F2FDC:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820f3020
	if (!ctx.cr6.lt) goto loc_820F3020;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f31,f10,f9
	ctx.f31.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x820f2f50
	if (!ctx.cr6.eq) goto loc_820F2F50;
loc_820F3020:
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// lfs f4,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x820f2dd8
	ctx.lr = 0x820F304C;
	sub_820F2DD8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820f3060
	if (ctx.cr6.gt) goto loc_820F3060;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820f3080
	goto loc_820F3080;
loc_820F3060:
	// lwz r10,564(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfc r7,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// eqv r6,r11,r8
	ctx.r6.u64 = ~(ctx.r11.u64 ^ ctx.r8.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
loc_820F3080:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f2fd0
	if (!ctx.cr6.eq) goto loc_820F2FD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x820F30A0;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x820F30D4;
	sub_823DDE20(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f6.u64);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,0(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F2F10) {
	__imp__sub_820F2F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F3108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820f31a8
	if (!ctx.cr6.gt) goto loc_820F31A8;
	// lwz r11,564(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 564);
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// subf. r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x820f3164
	if (ctx.cr0.gt) goto loc_820F3164;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_820F312C:
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r10,15096
	ctx.r8.s64 = ctx.r10.s64 + 15096;
	// rlwinm r7,r11,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r6,r9,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// lfsx f12,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r6,r8
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f10,f12,f1,f13
	ctx.f10.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// fnmsubs f9,f11,f1,f13
	ctx.f9.f64 = double(float(-(ctx.f11.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmadds f1,f8,f0,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
	// blr 
	return;
loc_820F3164:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820f31a8
	if (!ctx.cr6.lt) goto loc_820F31A8;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820f312c
	if (!ctx.cr6.eq) goto loc_820F312C;
loc_820F31A8:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,15096
	ctx.r9.s64 = ctx.r10.s64 + 15096;
	// rlwinm r8,r11,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lfsx f13,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f13,f1,f0
	ctx.f1.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f0.f64)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F3108) {
	__imp__sub_820F3108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F31C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820F31D0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_820F31EC:
	// lbzx r8,r29,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f3240
	if (ctx.cr6.eq) goto loc_820F3240;
	// cmpwi cr6,r9,38
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 38, ctx.xer);
	// bne cr6,0x820f3224
	if (!ctx.cr6.eq) goto loc_820F3224;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r7,17(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 17);
	// cmplwi cr6,r7,38
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 38, ctx.xer);
	// bne cr6,0x820f3224
	if (!ctx.cr6.eq) goto loc_820F3224;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r7,18(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 18);
	// cmplwi cr6,r7,49
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 49, ctx.xer);
	// beq cr6,0x820f323c
	if (ctx.cr6.eq) goto loc_820F323C;
loc_820F3224:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r8,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x820f31ec
	if (ctx.cr6.lt) goto loc_820F31EC;
	// b 0x820f3240
	goto loc_820F3240;
loc_820F323C:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
loc_820F3240:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bge cr6,0x820f32a0
	if (!ctx.cr6.lt) goto loc_820F32A0;
	// addi r9,r30,276
	ctx.r9.s64 = ctx.r30.s64 + 276;
loc_820F324C:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820f3270
	if (ctx.cr6.eq) goto loc_820F3270;
	// stbx r8,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x820f324c
	if (ctx.cr6.lt) goto loc_820F324C;
	// b 0x820f32a0
	goto loc_820F32A0;
loc_820F3270:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bge cr6,0x820f32a0
	if (!ctx.cr6.lt) goto loc_820F32A0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_820F3280:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f32a0
	if (ctx.cr6.eq) goto loc_820F32A0;
	// stbx r9,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x820f3280
	if (ctx.cr6.lt) goto loc_820F3280;
loc_820F32A0:
	// stbx r28,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r28.u8);
	// addi r31,r30,276
	ctx.r31.s64 = ctx.r30.s64 + 276;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x820F32B4;
	sub_823DE1F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,540(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,536(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// bl 0x822c1bf8
	ctx.lr = 0x820F32C8;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x8211f9d8
	ctx.lr = 0x820F32E0;
	sub_8211F9D8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f12,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// stfs f12,532(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 532, temp.u32);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 272, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F31C8) {
	__imp__sub_820F31C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F3304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F3304) {
	__imp__sub_820F3304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F3308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820F3324:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f3324
	if (!ctx.cr6.eq) goto loc_820F3324;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// bge cr6,0x820f3360
	if (!ctx.cr6.lt) goto loc_820F3360;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x820F3358;
	sub_823DE1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
loc_820F3360:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F3308) {
	__imp__sub_820F3308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F3378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820F3380;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x82141160
	ctx.lr = 0x820F33A0;
	sub_82141160(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x820f3434
	if (ctx.cr6.gt) goto loc_820F3434;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f3434
	if (ctx.cr6.eq) goto loc_820F3434;
	// bdz 0x820f33dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820F33DC;
	// bdz 0x820f33ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820F33EC;
	// bdz 0x820f33fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820F33FC;
	// bdz 0x820f3404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820F3404;
	// bdz 0x820f340c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820F340C;
	// bdz 0x820f3414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820F3414;
	// b 0x820f3424
	goto loc_820F3424;
loc_820F33DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,4
	ctx.r29.s64 = 4;
	// lfs f31,14024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14024);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820f3440
	goto loc_820F3440;
loc_820F33EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,5
	ctx.r29.s64 = 5;
	// lfs f31,17800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17800);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820f3440
	goto loc_820F3440;
loc_820F33FC:
	// li r29,6
	ctx.r29.s64 = 6;
	// b 0x820f3438
	goto loc_820F3438;
loc_820F3404:
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x820f3438
	goto loc_820F3438;
loc_820F340C:
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x820f3438
	goto loc_820F3438;
loc_820F3414:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,9
	ctx.r29.s64 = 9;
	// lfs f31,14024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14024);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820f3440
	goto loc_820F3440;
loc_820F3424:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,10
	ctx.r29.s64 = 10;
	// lfs f31,17800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17800);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820f3440
	goto loc_820F3440;
loc_820F3434:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_820F3438:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f31.f64 = double(temp.f32);
loc_820F3440:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82321540
	ctx.lr = 0x820F3450;
	sub_82321540(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lfs f11,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f0,-16788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f1,540(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// bl 0x822c2068
	ctx.lr = 0x820F347C;
	sub_822C2068(ctx, base);
	// stw r3,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r3.u32);
	// lfs f1,540(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c1c70
	ctx.lr = 0x820F3488;
	sub_822C1C70(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// stb r28,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r28.u8);
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f9,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,544(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f34e0
	if (ctx.cr6.eq) goto loc_820F34E0;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x821201a0
	ctx.lr = 0x820F34BC;
	sub_821201A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,17728
	ctx.r4.s64 = ctx.r11.s64 + 17728;
	// bl 0x822b7268
	ctx.lr = 0x820F34CC;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822cda98
	ctx.lr = 0x820F34E0;
	sub_822CDA98(ctx, base);
loc_820F34E0:
	// stb r28,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r28.u8);
	// addi r29,r31,276
	ctx.r29.s64 = ctx.r31.s64 + 276;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820f35f4
	if (ctx.cr6.gt) goto loc_820F35F4;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13584
	ctx.r12.s64 = ctx.r12.s64 + 13584;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820F3584;
	case 1:
		goto loc_820F35D4;
	case 2:
		goto loc_820F3538;
	case 3:
		goto loc_820F35F4;
	case 4:
		goto loc_820F35A4;
	case 5:
		goto loc_820F35A4;
	case 6:
		goto loc_820F35A4;
	case 7:
		goto loc_820F35BC;
	case 8:
		goto loc_820F35BC;
	case 9:
		goto loc_820F35BC;
	default:
		return;
	}
	// lwz r16,13700(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13700);
	// lwz r16,13780(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13780);
	// lwz r16,13624(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13624);
	// lwz r16,13812(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13812);
	// lwz r16,13732(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13732);
	// lwz r16,13732(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13732);
	// lwz r16,13732(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13732);
	// lwz r16,13756(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13756);
	// lwz r16,13756(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13756);
	// lwz r16,13756(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13756);
loc_820F3538:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x820F354C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820f35f4
	if (ctx.cr6.lt) goto loc_820F35F4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x820f35f4
	if (!ctx.cr6.lt) goto loc_820F35F4;
	// bl 0x82133078
	ctx.lr = 0x820F3570;
	sub_82133078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x822e7e98
	ctx.lr = 0x820F3580;
	sub_822E7E98(ctx, base);
	// b 0x820f35f4
	goto loc_820F35F4;
loc_820F3584:
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820f35f4
	if (ctx.cr6.eq) goto loc_820F35F4;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820f2670
	ctx.lr = 0x820F35A0;
	sub_820F2670(ctx, base);
	// b 0x820f35f4
	goto loc_820F35F4;
loc_820F35A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x820f27d8
	ctx.lr = 0x820F35B0;
	sub_820F27D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820f3308
	ctx.lr = 0x820F35B8;
	sub_820F3308(ctx, base);
	// b 0x820f35f4
	goto loc_820F35F4;
loc_820F35BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x820f2858
	ctx.lr = 0x820F35C8;
	sub_820F2858(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820f3308
	ctx.lr = 0x820F35D0;
	sub_820F3308(ctx, base);
	// b 0x820f35f4
	goto loc_820F35F4;
loc_820F35D4:
	// lfs f1,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r11,17796
	ctx.r5.s64 = ctx.r11.s64 + 17796;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e8368
	ctx.lr = 0x820F35F4;
	sub_822E8368(ctx, base);
loc_820F35F4:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f3618
	if (ctx.cr6.eq) goto loc_820F3618;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f3618
	if (ctx.cr6.eq) goto loc_820F3618;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f31c8
	ctx.lr = 0x820F3618;
	sub_820F31C8(ctx, base);
loc_820F3618:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x820f3664
	if (ctx.cr6.eq) goto loc_820F3664;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// bl 0x822c1bf8
	ctx.lr = 0x820F3640;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bl 0x8211f9d8
	ctx.lr = 0x820F3658;
	sub_8211F9D8(ctx, base);
	// fdivs f12,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// stfs f12,272(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// b 0x820f3668
	goto loc_820F3668;
loc_820F3664:
	// stfs f31,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
loc_820F3668:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f36ac
	if (ctx.cr6.eq) goto loc_820F36AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,540(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// bl 0x822c1bf8
	ctx.lr = 0x820F3688;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x8211f9d8
	ctx.lr = 0x820F36A0;
	sub_8211F9D8(ctx, base);
	// fdivs f12,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// stfs f12,532(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// b 0x820f36b0
	goto loc_820F36B0;
loc_820F36AC:
	// stfs f31,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
loc_820F36B0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820f2be0
	ctx.lr = 0x820F36C0;
	sub_820F2BE0(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f2cc8
	ctx.lr = 0x820F36D0;
	sub_820F2CC8(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820f2f10
	ctx.lr = 0x820F36E0;
	sub_820F2F10(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F3378) {
	__imp__sub_820F3378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F36F0) {
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
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,-9404(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9404);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,8(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,12(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820f37cc
	if (ctx.cr6.eq) goto loc_820F37CC;
	// bl 0x822c3cc8
	ctx.lr = 0x820F3794;
	sub_822C3CC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f37cc
	if (ctx.cr6.eq) goto loc_820F37CC;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,-27940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27940);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_820F37CC:
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

PPC_WEAK_FUNC(sub_820F36F0) {
	__imp__sub_820F36F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F37E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820F37E8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x820F37F0;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82141160
	ctx.lr = 0x820F3808;
	sub_82141160(ctx, base);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lfs f13,544(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// bl 0x820f3108
	ctx.lr = 0x820F3828;
	sub_820F3108(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f1,540(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// bl 0x8238b548
	ctx.lr = 0x820F3838;
	sub_8238B548(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lfs f11,20(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lwz r29,144(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lfs f10,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f29,544(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	ctx.f29.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfs f0,-16788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f28,f7,f10
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// beq cr6,0x820f387c
	if (ctx.cr6.eq) goto loc_820F387C;
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x820f387c
	if (!ctx.cr6.gt) goto loc_820F387C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_820F387C:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// addi r26,r11,-27832
	ctx.r26.s64 = ctx.r11.s64 + -27832;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x820f36f0
	ctx.lr = 0x820F3894;
	sub_820F36F0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820f38ec
	if (ctx.cr6.eq) goto loc_820F38EC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822b7e60
	ctx.lr = 0x820F38A4;
	sub_822B7E60(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// ori r6,r10,48249
	ctx.r6.u64 = ctx.r10.u64 | 48249;
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r5,r9,-15680
	ctx.r5.s64 = ctx.r9.s64 + -15680;
	// lwz r7,148(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// mullw r10,r28,r6
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r6.s32);
	// lwz r4,564(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 196608;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-4356
	ctx.r10.s64 = ctx.r10.s64 + -4356;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82125e88
	ctx.lr = 0x820F38EC;
	sub_82125E88(ctx, base);
loc_820F38EC:
	// lis r11,-31857
	ctx.r11.s64 = -2087780352;
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r7,r11,14296
	ctx.r7.s64 = ctx.r11.s64 + 14296;
	// lwz r6,148(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r31,3
	ctx.r31.s64 = 3;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r30,548
	ctx.r10.s64 = ctx.r30.s64 + 548;
	// lwz r5,536(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lwz r9,40(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fadds f2,f29,f30
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82133638
	ctx.lr = 0x820F3954;
	sub_82133638(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x820F3960;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F37E0) {
	__imp__sub_820F37E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F3964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F3964) {
	__imp__sub_820F3964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F3968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820F3970;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de028
	ctx.lr = 0x820F3978;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r6,58
	ctx.r6.s64 = 58;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,76(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x820fdbf8
	ctx.lr = 0x820F3998;
	sub_820FDBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f3af4
	if (ctx.cr6.eq) goto loc_820F3AF4;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8238bd98
	ctx.lr = 0x820F39AC;
	sub_8238BD98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r11,17808
	ctx.r5.s64 = ctx.r11.s64 + 17808;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e8280
	ctx.lr = 0x820F39C4;
	sub_822E8280(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8238bd98
	ctx.lr = 0x820F39D0;
	sub_8238BD98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x820f2720
	ctx.lr = 0x820F39E0;
	sub_820F2720(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f3a28
	if (ctx.cr6.eq) goto loc_820F3A28;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fdivs f1,f8,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// b 0x820f3a48
	goto loc_820F3A48;
loc_820F3A28:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,17804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_820F3A48:
	// bl 0x822d77c0
	ctx.lr = 0x820F3A4C;
	sub_822D77C0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82141160
	ctx.lr = 0x820F3A58;
	sub_82141160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x820f29d0
	ctx.lr = 0x820F3A68;
	sub_820F29D0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x820f2ad8
	ctx.lr = 0x820F3A78;
	sub_820F2AD8(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// fneg f1,f13
	ctx.f1.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bl 0x820f3108
	ctx.lr = 0x820F3A94;
	sub_820F3108(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r30,r31,548
	ctx.r30.s64 = ctx.r31.s64 + 548;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lfs f8,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x821202c8
	ctx.lr = 0x820F3AD0;
	sub_821202C8(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x820ea140
	ctx.lr = 0x820F3AF4;
	sub_820EA140(ctx, base);
loc_820F3AF4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x820F3B00;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F3968) {
	__imp__sub_820F3968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F3B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F3B04) {
	__imp__sub_820F3B04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F3B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,560(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 560);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820e9e08
	sub_820E9E08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F3B08) {
	__imp__sub_820F3B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F3B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820F3B18;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,76(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820fdbf8
	ctx.lr = 0x820F3B3C;
	sub_820FDBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f3bd0
	if (ctx.cr6.eq) goto loc_820F3BD0;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238bd98
	ctx.lr = 0x820F3B50;
	sub_8238BD98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141160
	ctx.lr = 0x820F3B5C;
	sub_82141160(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820f29d0
	ctx.lr = 0x820F3B68;
	sub_820F29D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82141160
	ctx.lr = 0x820F3B74;
	sub_82141160(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820f2ad8
	ctx.lr = 0x820F3B80;
	sub_820F2AD8(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,548
	ctx.r5.s64 = ctx.r31.s64 + 548;
	// lfs f6,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f7.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fneg f1,f13
	ctx.f1.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bl 0x820f3108
	ctx.lr = 0x820F3BB8;
	sub_820F3108(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f8,f7
	ctx.f8.f64 = ctx.f7.f64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x821202c8
	ctx.lr = 0x820F3BD0;
	sub_821202C8(ctx, base);
loc_820F3BD0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F3B10) {
	__imp__sub_820F3B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F3BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F3BDC) {
	__imp__sub_820F3BDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F3BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r8,r11,6968
	ctx.r8.s64 = ctx.r11.s64 + 6968;
	// lwz r11,11308(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// bgt cr6,0x820f3c48
	if (ctx.cr6.gt) goto loc_820F3C48;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_820F3C48:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fsubs f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f8.f64));
	// fmadds f1,f6,f13,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F3BE0) {
	__imp__sub_820F3BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F3C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820F3C88;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de020
	ctx.lr = 0x820F3C90;
	__savefpr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// fmr f26,f4
	ctx.f26.f64 = ctx.f4.f64;
	// bl 0x82141160
	ctx.lr = 0x820F3CB4;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f12,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f27,f10,f12
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f28,f11,f12
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fsubs f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fadds f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// fsubs f2,f8,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fadds f10,f6,f29
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// fsubs f11,f1,f28
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// fadds f7,f2,f30
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// fadds f8,f3,f26
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f26.f64));
	// fsubs f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// fsubs f10,f28,f7
	ctx.f10.f64 = double(float(ctx.f28.f64 - ctx.f7.f64));
	// fsubs f8,f27,f8
	ctx.f8.f64 = double(float(ctx.f27.f64 - ctx.f8.f64));
	// bge cr6,0x820f3d40
	if (!ctx.cr6.lt) goto loc_820F3D40;
	// fdivs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// b 0x820f3d4c
	goto loc_820F3D4C;
loc_820F3D40:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x820f3d60
	if (!ctx.cr6.gt) goto loc_820F3D60;
	// fdivs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
loc_820F3D4C:
	// fmuls f5,f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_820F3D60:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x820f3d74
	if (!ctx.cr6.lt) goto loc_820F3D74;
	// fdivs f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// b 0x820f3d80
	goto loc_820F3D80;
loc_820F3D74:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x820f3d98
	if (!ctx.cr6.gt) goto loc_820F3D98;
	// fdivs f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 / ctx.f0.f64));
loc_820F3D80:
	// lfs f7,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_820F3D98:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27932);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f3fc8
	if (ctx.cr6.eq) goto loc_820F3FC8;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,-27896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27896);
	// lfs f29,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f6,f29
	ctx.cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f26,f4,f12
	ctx.f26.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// blt cr6,0x820f3de8
	if (ctx.cr6.lt) goto loc_820F3DE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F3DE8:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x820f3e00
	if (ctx.cr6.lt) goto loc_820F3E00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F3E00:
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f3e18
	if (ctx.cr6.eq) goto loc_820F3E18;
	// fadds f13,f26,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f26.f64 + ctx.f11.f64));
	// b 0x820f3e1c
	goto loc_820F3E1C;
loc_820F3E18:
	// fsubs f13,f10,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f26.f64));
loc_820F3E1C:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// stfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f3e34
	if (ctx.cr6.eq) goto loc_820F3E34;
	// fadds f0,f26,f9
	ctx.f0.f64 = double(float(ctx.f26.f64 + ctx.f9.f64));
	// b 0x820f3e38
	goto loc_820F3E38;
loc_820F3E34:
	// fsubs f0,f8,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f26.f64));
loc_820F3E38:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,-27892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27892);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f3ef4
	if (ctx.cr6.eq) goto loc_820F3EF4;
	// lis r25,-32181
	ctx.r25.s64 = -2109014016;
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// lwz r11,-22896(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22896);
	// addi r7,r8,-2200
	ctx.r7.s64 = ctx.r8.s64 + -2200;
	// lfs f30,7544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7544);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fsubs f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsubs f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// bl 0x821202c8
	ctx.lr = 0x820F3EA4;
	sub_821202C8(ctx, base);
	// lwz r11,-22896(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22896);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// addi r5,r6,-2264
	ctx.r5.s64 = ctx.r6.s64 + -2264;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f27
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// fadds f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fsubs f2,f10,f31
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fsubs f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// bl 0x821202c8
	ctx.lr = 0x820F3EEC;
	sub_821202C8(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
loc_820F3EF4:
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x820F3F14;
	sub_822D4AC8(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f3f30
	if (ctx.cr6.eq) goto loc_820F3F30;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x820f3f38
	if (ctx.cr6.lt) goto loc_820F3F38;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820f3f40
	if (!ctx.cr6.eq) goto loc_820F3F40;
loc_820F3F30:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820f3f40
	if (!ctx.cr6.gt) goto loc_820F3F40;
loc_820F3F38:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f3f44
	goto loc_820F3F44;
loc_820F3F40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F3F44:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f3f64
	if (ctx.cr6.eq) goto loc_820F3F64;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x820f3f6c
	if (ctx.cr6.lt) goto loc_820F3F6C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820f3f74
	if (!ctx.cr6.eq) goto loc_820F3F74;
loc_820F3F64:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820f3f74
	if (!ctx.cr6.gt) goto loc_820F3F74;
loc_820F3F6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f3f78
	goto loc_820F3F78;
loc_820F3F74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F3F78:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f3fc8
	if (ctx.cr6.eq) goto loc_820F3FC8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f3fc8
	if (ctx.cr6.eq) goto loc_820F3FC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d48f0
	ctx.lr = 0x820F3F9C;
	sub_822D48F0(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// ble cr6,0x820f3fc8
	if (!ctx.cr6.gt) goto loc_820F3FC8;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f26,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f0.f64));
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f26,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f26.f64 + ctx.f12.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_820F3FC8:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fadds f11,f13,f27
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f4024
	if (ctx.cr6.eq) goto loc_820F4024;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d48f0
	ctx.lr = 0x820F3FF8;
	sub_822D48F0(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,0(r26)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,4(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x820F4024;
	sub_822D4AC8(ctx, base);
loc_820F4024:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r3,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de06c
	ctx.lr = 0x820F4038;
	__restfpr_26(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F3C80) {
	__imp__sub_820F3C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F403C) {
	__imp__sub_820F403C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 131072;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,2116
	ctx.r11.s64 = ctx.r11.s64 + 2116;
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-27936(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -27936);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f10,f3
	ctx.f10.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bgt cr6,0x820f40b4
	if (ctx.cr6.gt) goto loc_820F40B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820F40B4:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27888);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x820f40d8
	if (ctx.cr6.lt) goto loc_820F40D8;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27852);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820F40D8:
	// fsubs f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x820f40f8
	if (ctx.cr6.gt) goto loc_820F40F8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820F40F8:
	// fsubs f12,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27852);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmadds f1,f10,f11,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f9.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F4040) {
	__imp__sub_820F4040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820F4120;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,334(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 334);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,-19420(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19420);
	// lhz r30,6(r9)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// bl 0x82284650
	ctx.lr = 0x820F4148;
	sub_82284650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4188
	if (ctx.cr6.eq) goto loc_820F4188;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ee1e0
	ctx.lr = 0x820F4164;
	sub_820EE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f4194
	if (!ctx.cr6.eq) goto loc_820F4194;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x820F4174;
	sub_822A13A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,17816
	ctx.r4.s64 = ctx.r11.s64 + 17816;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x820F4188;
	sub_82280C30(ctx, base);
loc_820F4188:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820F4194:
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F4118) {
	__imp__sub_820F4118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F41BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F41BC) {
	__imp__sub_820F41BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F41C0) {
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
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820f4204
	if (ctx.cr6.eq) goto loc_820F4204;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x820f4204
	if (ctx.cr6.eq) goto loc_820F4204;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
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
loc_820F4204:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4118
	ctx.lr = 0x820F4210;
	sub_820F4118(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4234
	if (ctx.cr6.eq) goto loc_820F4234;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
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
loc_820F4234:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f4250
	if (ctx.cr6.eq) goto loc_820F4250;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27920);
	// b 0x820f4270
	goto loc_820F4270;
loc_820F4250:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f4268
	if (ctx.cr6.eq) goto loc_820F4268;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27904);
	// b 0x820f4270
	goto loc_820F4270;
loc_820F4268:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27964);
loc_820F4270:
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
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

PPC_WEAK_FUNC(sub_820F41C0) {
	__imp__sub_820F41C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4288) {
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
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x820f42c4
	if (!ctx.cr6.eq) goto loc_820F42C4;
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// b 0x820f434c
	goto loc_820F434C;
loc_820F42C4:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r8,r10,-15680
	ctx.r8.s64 = ctx.r10.s64 + -15680;
	// ori r7,r9,61924
	ctx.r7.u64 = ctx.r9.u64 | 61924;
	// addis r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 131072;
	// mullw r6,r3,r7
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// addi r5,r10,1918
	ctx.r5.s64 = ctx.r10.s64 + 1918;
	// lhzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820f4304
	if (!ctx.cr6.eq) goto loc_820F4304;
loc_820F42EC:
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
loc_820F4304:
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// mulli r10,r11,404
	ctx.r10.s64 = ctx.r11.s64 * 404;
	// addi r11,r9,-5696
	ctx.r11.s64 = ctx.r9.s64 + -5696;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,380(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820f42ec
	if (ctx.cr6.eq) goto loc_820F42EC;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x820f41c0
	ctx.lr = 0x820F4340;
	sub_820F41C0(ctx, base);
	// lfs f11,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_820F434C:
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_820F4288) {
	__imp__sub_820F4288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F4364) {
	__imp__sub_820F4364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,52(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f437c
	if (!ctx.cr6.eq) goto loc_820F437C;
loc_820F4374:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F437C:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820f4374
	if (ctx.cr6.lt) goto loc_820F4374;
	// lfs f13,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820f4374
	if (ctx.cr6.gt) goto loc_820F4374;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820f4374
	if (ctx.cr6.lt) goto loc_820F4374;
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F4368) {
	__imp__sub_820F4368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F43C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lfs f0,48(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-27872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27872);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f43e0
	if (!ctx.cr6.lt) goto loc_820F43E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F43E0:
	// lbz r11,52(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f4400
	if (!ctx.cr6.eq) goto loc_820F4400;
loc_820F43EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_820F4400:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820f43ec
	if (ctx.cr6.lt) goto loc_820F43EC;
	// lfs f13,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820f43ec
	if (ctx.cr6.gt) goto loc_820F43EC;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820f43ec
	if (ctx.cr6.lt) goto loc_820F43EC;
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820f4440
	if (ctx.cr6.gt) goto loc_820F4440;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820F4440:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F43C0) {
	__imp__sub_820F43C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x820f4498
	if (ctx.cr6.eq) goto loc_820F4498;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x820f44a8
	if (ctx.cr6.eq) goto loc_820F44A8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820f448c
	if (!ctx.cr6.eq) goto loc_820F448C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820f451c
	goto loc_820F451C;
loc_820F448C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820f451c
	goto loc_820F451C;
loc_820F4498:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r10,r11,-27884
	ctx.r10.s64 = ctx.r11.s64 + -27884;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// b 0x820f44b0
	goto loc_820F44B0;
loc_820F44A8:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27884);
loc_820F44B0:
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820f44dc
	if (ctx.cr6.gt) goto loc_820F44DC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_820F44DC:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,17872(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17872);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fsel f8,f9,f10,f31
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f31.f64;
	// fmuls f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// bl 0x823de720
	ctx.lr = 0x820F450C;
	sub_823DE720(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x820f451c
	if (!ctx.cr6.eq) goto loc_820F451C;
	// fsubs f1,f31,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
loc_820F451C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F4450) {
	__imp__sub_820F4450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F4534) {
	__imp__sub_820F4534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820F4540;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r8,r11,-27860
	ctx.r8.s64 = ctx.r11.s64 + -27860;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ori r7,r10,61924
	ctx.r7.u64 = ctx.r10.u64 | 61924;
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// lwz r11,-96(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -96);
	// mullw r7,r3,r7
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lwz r29,56(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r10,r6,-15680
	ctx.r10.s64 = ctx.r6.s64 + -15680;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r6,r5,22908
	ctx.r6.u64 = ctx.r5.u64 | 22908;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// beq cr6,0x820f4644
	if (ctx.cr6.eq) goto loc_820F4644;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x820f4638
	if (ctx.cr6.eq) goto loc_820F4638;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x820f45f0
	if (ctx.cr6.eq) goto loc_820F45F0;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x820f45b0
	if (ctx.cr6.eq) goto loc_820F45B0;
	// li r29,3
	ctx.r29.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
loc_820F45B0:
	// lwz r11,-24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r6,r8,22908
	ctx.r6.u64 = ctx.r8.u64 | 22908;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820f474c
	if (ctx.cr6.lt) goto loc_820F474C;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x820f4748
	goto loc_820F4748;
loc_820F45F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x820f4600
	if (ctx.cr6.gt) goto loc_820F4600;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
loc_820F45FC:
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
loc_820F4600:
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lfs f0,12240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820f474c
	if (ctx.cr6.lt) goto loc_820F474C;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x820f4748
	goto loc_820F4748;
loc_820F4638:
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x820f45fc
	goto loc_820F45FC;
loc_820F4644:
	// lwz r11,-20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820f4670
	if (!ctx.cr6.gt) goto loc_820F4670;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x820f46e4
	if (ctx.cr6.eq) goto loc_820F46E4;
	// ble cr6,0x820f466c
	if (!ctx.cr6.gt) goto loc_820F466C;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// ble cr6,0x820f4670
	if (!ctx.cr6.gt) goto loc_820F4670;
loc_820F466C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_820F4670:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x820f46f0
	if (ctx.cr6.eq) goto loc_820F46F0;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x820f4600
	if (ctx.cr6.eq) goto loc_820F4600;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x820f45b0
	if (ctx.cr6.eq) goto loc_820F45B0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4368
	ctx.lr = 0x820F4694;
	sub_820F4368(ctx, base);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// subfic r5,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r8.s64;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// ori r3,r6,22908
	ctx.r3.u64 = ctx.r6.u64 | 22908;
	// lfs f0,12240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lwzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820f474c
	if (ctx.cr6.lt) goto loc_820F474C;
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x820f4748
	goto loc_820F4748;
loc_820F46E4:
	// li r29,2
	ctx.r29.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x820f4600
	goto loc_820F4600;
loc_820F46F0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f43c0
	ctx.lr = 0x820F46FC;
	sub_820F43C0(ctx, base);
	// lwz r11,-8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// subfic r5,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r8.s64;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// ori r3,r6,22908
	ctx.r3.u64 = ctx.r6.u64 | 22908;
	// lfs f0,12240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lwzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820f474c
	if (ctx.cr6.lt) goto loc_820F474C;
	// li r29,2
	ctx.r29.s64 = 2;
loc_820F4748:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820F474C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f4450
	ctx.lr = 0x820F4758;
	sub_820F4450(ctx, base);
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F4538) {
	__imp__sub_820F4538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820F4770;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823ddffc
	ctx.lr = 0x820F4778;
	__savefpr_17(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f27,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// fmr f17,f27
	ctx.f17.f64 = ctx.f27.f64;
	// bl 0x82141160
	ctx.lr = 0x820F4794;
	sub_82141160(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// fadds f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmuls f21,f13,f0
	ctx.f21.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f29,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-27840(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27840);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,-27912(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27912);
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,-27944(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -27944);
	// fmuls f31,f12,f10
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f13,6020(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6020);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f20,f9,f29
	ctx.f20.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f19,f7,f0
	ctx.f19.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f18,f6,f10
	ctx.f18.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f22,f8,f20
	ctx.f22.f64 = double(float(ctx.f8.f64 * ctx.f20.f64));
	// fmuls f30,f11,f20
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f20.f64));
	// fcmpu cr6,f22,f13
	ctx.cr6.compare(ctx.f22.f64, ctx.f13.f64);
	// bge cr6,0x820f480c
	if (!ctx.cr6.lt) goto loc_820F480C;
	// fmr f22,f13
	ctx.f22.f64 = ctx.f13.f64;
loc_820F480C:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// fmadds f13,f31,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64 + ctx.f30.f64));
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// fmuls f28,f11,f12
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lwz r11,-27848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27848);
	// lwz r10,-27900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27900);
	// lwz r9,-27948(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27948);
	// lwz r8,-27924(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27924);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f26,f10,f0,f13
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f8,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f25,f9,f0,f13
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f7,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f24,f8,f12,f13
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f23,f7,f12,f13
	ctx.f23.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f13.f64));
	// bl 0x82141ca8
	ctx.lr = 0x820F4860;
	sub_82141CA8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820f488c
	if (ctx.cr6.eq) goto loc_820F488C;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27908);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f19,f0,f19
	ctx.f19.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// fmuls f18,f0,f18
	ctx.f18.f64 = double(float(ctx.f0.f64 * ctx.f18.f64));
	// fmuls f21,f0,f21
	ctx.f21.f64 = double(float(ctx.f0.f64 * ctx.f21.f64));
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_820F488C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x820eb798
	ctx.lr = 0x820F48C4;
	sub_820EB798(ctx, base);
	// lfs f10,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// lbz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f10,f28
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f28.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x820f4900
	if (ctx.cr6.eq) goto loc_820F4900;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f4538
	ctx.lr = 0x820F48FC;
	sub_820F4538(ctx, base);
	// fmr f17,f1
	ctx.fpscr.disableFlushMode();
	ctx.f17.f64 = ctx.f1.f64;
loc_820F4900:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f28,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// fmr f26,f28
	ctx.f26.f64 = ctx.f28.f64;
	// bl 0x820f3c80
	ctx.lr = 0x820F4930;
	sub_820F3C80(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f4aac
	if (ctx.cr6.eq) goto loc_820F4AAC;
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// ble cr6,0x820f4aac
	if (!ctx.cr6.gt) goto loc_820F4AAC;
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4980
	if (ctx.cr6.eq) goto loc_820F4980;
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x823de9c8
	ctx.lr = 0x820F4964;
	sub_823DE9C8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5812(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5812);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f26,f12,f0,f13
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x820f4aac
	goto loc_820F4AAC;
loc_820F4980:
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// lfs f12,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// beq cr6,0x820f49b4
	if (ctx.cr6.eq) goto loc_820F49B4;
	// stfs f27,172(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
loc_820F49B4:
	// lbz r11,41(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// fcmpu cr6,f13,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x820f49e0
	if (!ctx.cr6.lt) goto loc_820F49E0;
	// fdivs f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f22.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// beq cr6,0x820f49ec
	if (ctx.cr6.eq) goto loc_820F49EC;
	// fsubs f12,f27,f0
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// b 0x820f49ec
	goto loc_820F49EC;
loc_820F49E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f49ec
	if (ctx.cr6.eq) goto loc_820F49EC;
	// stfs f28,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_820F49EC:
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4a00
	if (ctx.cr6.eq) goto loc_820F4A00;
	// fmuls f0,f0,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f17.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
loc_820F4A00:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27856);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// fmuls f0,f0,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// lwz r11,-27968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27968);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820f4a34
	if (!ctx.cr6.lt) goto loc_820F4A34;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x820f4a38
	goto loc_820F4A38;
loc_820F4A34:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_820F4A38:
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f19,f0,f19
	ctx.f19.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// fneg f2,f13
	ctx.f2.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f18,f0,f18
	ctx.f18.f64 = double(float(ctx.f0.f64 * ctx.f18.f64));
	// bl 0x823de9c8
	ctx.lr = 0x820F4A50;
	sub_823DE9C8(ctx, base);
	// lfs f12,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f2,f10,f30,f12
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f12.f64));
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// fmadds f13,f1,f30,f9
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f9.f64));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// fmr f8,f27
	ctx.f8.f64 = ctx.f27.f64;
	// lfs f0,12336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// fmr f7,f27
	ctx.f7.f64 = ctx.f27.f64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// fnmsubs f1,f21,f29,f2
	ctx.f1.f64 = double(float(-(ctx.f21.f64 * ctx.f29.f64 - ctx.f2.f64)));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fnmsubs f2,f31,f29,f13
	ctx.f2.f64 = double(float(-(ctx.f31.f64 * ctx.f29.f64 - ctx.f13.f64)));
	// bl 0x82120538
	ctx.lr = 0x820F4AAC;
	sub_82120538(ctx, base);
loc_820F4AAC:
	// lbz r11,43(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 43);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f4ad4
	if (!ctx.cr6.eq) goto loc_820F4AD4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820f4acc
	if (!ctx.cr6.eq) goto loc_820F4ACC;
	// lbz r10,42(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 42);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f4c54
	if (!ctx.cr6.eq) goto loc_820F4C54;
loc_820F4ACC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4b08
	if (ctx.cr6.eq) goto loc_820F4B08;
loc_820F4AD4:
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_820F4B08:
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4b34
	if (ctx.cr6.eq) goto loc_820F4B34;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4b28
	if (ctx.cr6.eq) goto loc_820F4B28;
	// stfs f17,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// b 0x820f4b34
	goto loc_820F4B34;
loc_820F4B28:
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f17
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f17.f64));
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_820F4B34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820f4040
	ctx.lr = 0x820F4B40;
	sub_820F4040(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmuls f3,f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f19.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f4,f1,f18
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f18.f64));
	// beq cr6,0x820f4b88
	if (ctx.cr6.eq) goto loc_820F4B88;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmr f9,f26
	ctx.f9.f64 = ctx.f26.f64;
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// fmr f8,f27
	ctx.f8.f64 = ctx.f27.f64;
	// fmr f7,f27
	ctx.f7.f64 = ctx.f27.f64;
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// fnmsubs f2,f4,f29,f0
	ctx.f2.f64 = double(float(-(ctx.f4.f64 * ctx.f29.f64 - ctx.f0.f64)));
	// fnmsubs f1,f3,f29,f13
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f29.f64 - ctx.f13.f64)));
	// bl 0x82120538
	ctx.lr = 0x820F4B88;
	sub_82120538(ctx, base);
loc_820F4B88:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4c54
	if (ctx.cr6.eq) goto loc_820F4C54;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r9,r11,-27864
	ctx.r9.s64 = ctx.r11.s64 + -27864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,-27864(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27864);
	// lwz r11,-12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f30,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822c2068
	ctx.lr = 0x820F4BC4;
	sub_822C2068(ctx, base);
	// lfs f12,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// fadds f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 + ctx.f12.f64));
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// lfs f0,-16788(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmuls f7,f30,f0
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmuls f8,f30,f0
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f30,f8,f10
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f31,f7,f9
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// bl 0x8238b5a8
	ctx.lr = 0x820F4C08;
	sub_8238B5A8(ctx, base);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lfs f6,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f5,112(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// li r6,3
	ctx.r6.s64 = 3;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f2,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// fmuls f1,f3,f30
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fnmsubs f1,f1,f29,f6
	ctx.f1.f64 = double(float(-(ctx.f1.f64 * ctx.f29.f64 - ctx.f6.f64)));
	// bl 0x82133600
	ctx.lr = 0x820F4C54;
	sub_82133600(ctx, base);
loc_820F4C54:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de048
	ctx.lr = 0x820F4C60;
	__restfpr_17(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F4768) {
	__imp__sub_820F4768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F4C64) {
	__imp__sub_820F4C64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820F4C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8210b820
	ctx.lr = 0x820F4C80;
	sub_8210B820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f4da0
	if (!ctx.cr6.eq) goto loc_820F4DA0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,11308(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// bl 0x823215b8
	ctx.lr = 0x820F4CA0;
	sub_823215B8(ctx, base);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820f4da0
	if (ctx.cr6.eq) goto loc_820F4DA0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f36f0
	ctx.lr = 0x820F4CBC;
	sub_820F36F0(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fdbf8
	ctx.lr = 0x820F4CD0;
	sub_820FDBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f4da0
	if (ctx.cr6.eq) goto loc_820F4DA0;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8238bd98
	ctx.lr = 0x820F4CE4;
	sub_8238BD98(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4288
	ctx.lr = 0x820F4CF8;
	sub_820F4288(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4da0
	if (ctx.cr6.eq) goto loc_820F4DA0;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lwz r5,164(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// lis r4,-32188
	ctx.r4.s64 = -2109472768;
	// lis r3,-32188
	ctx.r3.s64 = -2109472768;
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// addi r6,r11,-22896
	ctx.r6.s64 = ctx.r11.s64 + -22896;
	// lwz r10,-27960(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27960);
	// rlwinm r30,r5,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r9,-27916(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27916);
	// rlwinm r29,r5,28,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x1;
	// lwz r8,-27952(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27952);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,-27844(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -27844);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r6,16060(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16060);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r5,r5,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x1;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lfs f12,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stb r30,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r30.u8);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r29,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r29.u8);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r5,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r5.u8);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stb r11,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r11.u8);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// bl 0x820f4768
	ctx.lr = 0x820F4DA0;
	sub_820F4768(ctx, base);
loc_820F4DA0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F4C68) {
	__imp__sub_820F4C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820F4DB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,21480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21480);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f4de4
	if (ctx.cr6.eq) goto loc_820F4DE4;
	// lwz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820f4de8
	if (!ctx.cr6.eq) goto loc_820F4DE8;
loc_820F4DE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F4DE8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// bne cr6,0x820f4e1c
	if (!ctx.cr6.eq) goto loc_820F4E1C;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f4f6c
	if (ctx.cr6.eq) goto loc_820F4F6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f4c68
	ctx.lr = 0x820F4E14;
	sub_820F4C68(ctx, base);
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820F4E1C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,11308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r11.u32);
	// bl 0x823215b8
	ctx.lr = 0x820F4E3C;
	sub_823215B8(ctx, base);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820f4e54
	if (!ctx.cr6.eq) goto loc_820F4E54;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4f6c
	if (ctx.cr6.eq) goto loc_820F4F6C;
loc_820F4E54:
	// addi r5,r1,644
	ctx.r5.s64 = ctx.r1.s64 + 644;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f36f0
	ctx.lr = 0x820F4E64;
	sub_820F36F0(ctx, base);
	// addi r6,r1,672
	ctx.r6.s64 = ctx.r1.s64 + 672;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3378
	ctx.lr = 0x820F4E78;
	sub_820F3378(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4ea8
	if (ctx.cr6.eq) goto loc_820F4EA8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f37e0
	ctx.lr = 0x820F4E98;
	sub_820F37E0(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_820F4EA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x820f4f6c
	if (ctx.cr6.gt) goto loc_820F4F6C;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20176
	ctx.r12.s64 = ctx.r12.s64 + 20176;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820F4F00;
	case 1:
		goto loc_820F4F00;
	case 2:
		goto loc_820F4F00;
	case 3:
		goto loc_820F4F40;
	case 4:
		goto loc_820F4F00;
	case 5:
		goto loc_820F4F00;
	case 6:
		goto loc_820F4F00;
	case 7:
		goto loc_820F4F00;
	case 8:
		goto loc_820F4F00;
	case 9:
		goto loc_820F4F00;
	case 10:
		goto loc_820F4F28;
	case 11:
		goto loc_820F4F28;
	default:
		return;
	}
	// lwz r16,20224(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20224);
	// lwz r16,20224(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20224);
	// lwz r16,20224(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20224);
	// lwz r16,20288(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20288);
	// lwz r16,20224(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20224);
	// lwz r16,20224(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20224);
	// lwz r16,20224(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20224);
	// lwz r16,20224(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20224);
	// lwz r16,20224(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20224);
	// lwz r16,20224(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20224);
	// lwz r16,20264(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20264);
	// lwz r16,20264(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20264);
loc_820F4F00:
	// lbz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4f6c
	if (ctx.cr6.eq) goto loc_820F4F6C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,372
	ctx.r4.s64 = ctx.r1.s64 + 372;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f37e0
	ctx.lr = 0x820F4F20;
	sub_820F37E0(ctx, base);
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820F4F28:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3968
	ctx.lr = 0x820F4F38;
	sub_820F3968(ctx, base);
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820F4F40:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4f60
	if (ctx.cr6.eq) goto loc_820F4F60;
	// lfs f1,656(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9e08
	ctx.lr = 0x820F4F58;
	sub_820E9E08(ctx, base);
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820F4F60:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f3b10
	ctx.lr = 0x820F4F6C;
	sub_820F3B10(ctx, base);
loc_820F4F6C:
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F4DA8) {
	__imp__sub_820F4DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F4F74) {
	__imp__sub_820F4F74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4F78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_820F4F88:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blt cr6,0x820f4f88
	if (ctx.cr6.lt) goto loc_820F4F88;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F4F78) {
	__imp__sub_820F4F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F4FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f4fec
	if (!ctx.cr6.lt) goto loc_820F4FEC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820F4FEC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F4FC0) {
	__imp__sub_820F4FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5000) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r7,r10,61924
	ctx.r7.u64 = ctx.r10.u64 | 61924;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// mullw r11,r3,r7
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// addi r9,r10,24100
	ctx.r9.s64 = ctx.r10.s64 + 24100;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
loc_820F5040:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820f5064
	if (ctx.cr6.eq) goto loc_820F5064;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,168
	ctx.r11.s64 = ctx.r11.s64 + 168;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// blt cr6,0x820f5040
	if (ctx.cr6.lt) goto loc_820F5040;
loc_820F5064:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,20416
	ctx.r6.s64 = ctx.r11.s64 + 20416;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x823def18
	ctx.lr = 0x820F507C;
	sub_823DEF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_820F5000) {
	__imp__sub_820F5000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F5094) {
	__imp__sub_820F5094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820F50A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820f5000
	ctx.lr = 0x820F50B4;
	sub_820F5000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f51dc
	if (ctx.cr6.eq) goto loc_820F51DC;
	// bl 0x82140de8
	ctx.lr = 0x820F50C4;
	sub_82140DE8(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r29,r8
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// addi r6,r10,22928
	ctx.r6.s64 = ctx.r10.s64 + 22928;
	// li r11,6
	ctx.r11.s64 = 6;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// subfc r4,r11,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r4.s64 = ctx.r5.s64 - ctx.r11.s64;
	// eqv r3,r11,r5
	ctx.r3.u64 = ~(ctx.r11.u64 ^ ctx.r5.u64);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// ble cr6,0x820f51d8
	if (!ctx.cr6.gt) goto loc_820F51D8;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_820F510C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820f5128
	if (!ctx.cr6.eq) goto loc_820F5128;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820f51cc
	if (!ctx.cr6.eq) goto loc_820F51CC;
loc_820F5128:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x820f5148
	if (!ctx.cr6.eq) goto loc_820F5148;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f51cc
	if (ctx.cr6.eq) goto loc_820F51CC;
	// b 0x820f519c
	goto loc_820F519C;
loc_820F5148:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x820f5174
	if (!ctx.cr6.eq) goto loc_820F5174;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f51cc
	if (ctx.cr6.eq) goto loc_820F51CC;
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f519c
	if (ctx.cr6.eq) goto loc_820F519C;
	// b 0x820f51cc
	goto loc_820F51CC;
loc_820F5174:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x820f519c
	if (!ctx.cr6.eq) goto loc_820F519C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820f51cc
	if (!ctx.cr6.eq) goto loc_820F51CC;
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f51cc
	if (!ctx.cr6.eq) goto loc_820F51CC;
loc_820F519C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f51c0
	if (ctx.cr6.eq) goto loc_820F51C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c4140
	ctx.lr = 0x820F51B8;
	sub_822C4140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f51cc
	if (!ctx.cr6.eq) goto loc_820F51CC;
loc_820F51C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820f4da8
	ctx.lr = 0x820F51CC;
	sub_820F4DA8(ctx, base);
loc_820F51CC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820f510c
	if (!ctx.cr0.eq) goto loc_820F510C;
loc_820F51D8:
	// bl 0x82140e48
	ctx.lr = 0x820F51DC;
	sub_82140E48(ctx, base);
loc_820F51DC:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F5098) {
	__imp__sub_820F5098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F51E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F51E4) {
	__imp__sub_820F51E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F51E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820F51F0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,11308(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// bl 0x823215b8
	ctx.lr = 0x820F521C;
	sub_823215B8(ctx, base);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820f52fc
	if (ctx.cr6.eq) goto loc_820F52FC;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820f52fc
	if (!ctx.cr6.eq) goto loc_820F52FC;
	// li r6,64
	ctx.r6.s64 = 64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fdbf8
	ctx.lr = 0x820F524C;
	sub_820FDBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f52fc
	if (ctx.cr6.eq) goto loc_820F52FC;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8238bd98
	ctx.lr = 0x820F5260;
	sub_8238BD98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3be0
	ctx.lr = 0x820F526C;
	sub_820F3BE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// beq cr6,0x820f52fc
	if (ctx.cr6.eq) goto loc_820F52FC;
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x820f529c
	if (!ctx.cr6.gt) goto loc_820F529C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,3
	ctx.r30.s64 = 3;
	// lfs f0,17876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17876);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x820f52a4
	goto loc_820F52A4;
loc_820F529C:
	// li r30,0
	ctx.r30.s64 = 0;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_820F52A4:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f4288
	ctx.lr = 0x820F52B4;
	sub_820F4288(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f52fc
	if (ctx.cr6.eq) goto loc_820F52FC;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// rlwimi r9,r7,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r8,r9,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x821a0128
	ctx.lr = 0x820F52FC;
	sub_821A0128(ctx, base);
loc_820F52FC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F51E8) {
	__imp__sub_820F51E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F530C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F530C) {
	__imp__sub_820F530C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820F5318;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820f5000
	ctx.lr = 0x820F5328;
	sub_820F5000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820f535c
	if (!ctx.cr6.gt) goto loc_820F535C;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820F5338:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x820f5350
	if (!ctx.cr6.eq) goto loc_820F5350;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f51e8
	ctx.lr = 0x820F5350;
	sub_820F51E8(ctx, base);
loc_820F5350:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820f5338
	if (!ctx.cr0.eq) goto loc_820F5338;
loc_820F535C:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F5310) {
	__imp__sub_820F5310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F5364) {
	__imp__sub_820F5364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5368) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r11,r11,-15680
	ctx.r11.s64 = ctx.r11.s64 + -15680;
	// ori r9,r10,61924
	ctx.r9.u64 = ctx.r10.u64 | 61924;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// mullw r7,r3,r9
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x820f53d4
	if (!ctx.cr6.eq) goto loc_820F53D4;
	// bl 0x82310110
	ctx.lr = 0x820F53A4;
	sub_82310110(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lwz r11,-27812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27812);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x820f53c0
	if (ctx.cr6.gt) goto loc_820F53C0;
	// addi r9,r3,-100
	ctx.r9.s64 = ctx.r3.s64 + -100;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x820f53d4
	if (ctx.cr6.gt) goto loc_820F53D4;
loc_820F53C0:
	// stw r3,-27812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27812, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,17880
	ctx.r4.s64 = ctx.r11.s64 + 17880;
	// bl 0x822c54b8
	ctx.lr = 0x820F53D4;
	sub_822C54B8(ctx, base);
loc_820F53D4:
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

PPC_WEAK_FUNC(sub_820F5368) {
	__imp__sub_820F5368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F53E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820F53F0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x820F53F8;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,18968
	ctx.r6.s64 = ctx.r11.s64 + 18968;
	// addi r3,r10,18952
	ctx.r3.s64 = ctx.r10.s64 + 18952;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F5418;
	sub_822E15D0(ctx, base);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,-27280(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27280, ctx.r3.u32);
	// addi r31,r8,18916
	ctx.r31.s64 = ctx.r8.s64 + 18916;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f31,6912(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6912);
	ctx.f31.f64 = double(temp.f32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f28,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r4,18900
	ctx.r3.s64 = ctx.r4.s64 + 18900;
	// lfs f30,18912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 18912);
	ctx.f30.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F5460;
	sub_822E1660(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// addi r8,r10,18852
	ctx.r8.s64 = ctx.r10.s64 + 18852;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-27312(r11)
	PPC_STORE_U32(ctx.r11.u32 + -27312, ctx.r3.u32);
	// addi r3,r9,18832
	ctx.r3.s64 = ctx.r9.s64 + 18832;
	// bl 0x822e1660
	ctx.lr = 0x820F548C;
	sub_822E1660(ctx, base);
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r30,r7,18796
	ctx.r30.s64 = ctx.r7.s64 + 18796;
	// stw r3,-27288(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27288, ctx.r3.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfs f30,5804(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5804);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r4,18784
	ctx.r3.s64 = ctx.r4.s64 + 18784;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,6048(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F54C8;
	sub_822E1660(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r10,18712
	ctx.r6.s64 = ctx.r10.s64 + 18712;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-27296(r11)
	PPC_STORE_U32(ctx.r11.u32 + -27296, ctx.r3.u32);
	// addi r3,r9,18700
	ctx.r3.s64 = ctx.r9.s64 + 18700;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F54EC;
	sub_822E15D0(ctx, base);
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r7,18544
	ctx.r6.s64 = ctx.r7.s64 + 18544;
	// stw r3,-27316(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27316, ctx.r3.u32);
	// addi r3,r5,18668
	ctx.r3.s64 = ctx.r5.s64 + 18668;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F5510;
	sub_822E15D0(ctx, base);
	// lis r4,-32188
	ctx.r4.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,-27268(r4)
	PPC_STORE_U32(ctx.r4.u32 + -27268, ctx.r3.u32);
	// addi r8,r11,18456
	ctx.r8.s64 = ctx.r11.s64 + 18456;
	// lfs f29,6688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6688);
	ctx.f29.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,7932(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r6,18436
	ctx.r3.s64 = ctx.r6.s64 + 18436;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F5548;
	sub_822E1660(ctx, base);
	// lis r5,-32188
	ctx.r5.s64 = -2109472768;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r4,18380
	ctx.r29.s64 = ctx.r4.s64 + 18380;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,-27284(r5)
	PPC_STORE_U32(ctx.r5.u32 + -27284, ctx.r3.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r3,r10,18360
	ctx.r3.s64 = ctx.r10.s64 + 18360;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,7544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7544);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F557C;
	sub_822E1660(ctx, base);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r8,r5,18280
	ctx.r8.s64 = ctx.r5.s64 + 18280;
	// stw r3,-27292(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27292, ctx.r3.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r3,r4,18256
	ctx.r3.s64 = ctx.r4.s64 + 18256;
	// lfs f1,18356(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 18356);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F55AC;
	sub_822E1660(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,-27320(r11)
	PPC_STORE_U32(ctx.r11.u32 + -27320, ctx.r3.u32);
	// addi r3,r7,18236
	ctx.r3.s64 = ctx.r7.s64 + 18236;
	// addi r8,r9,18172
	ctx.r8.s64 = ctx.r9.s64 + 18172;
	// lfs f1,14272(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14272);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820F55DC;
	sub_822E1660(ctx, base);
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r4,18112
	ctx.r8.s64 = ctx.r4.s64 + 18112;
	// stw r3,-27260(r6)
	PPC_STORE_U32(ctx.r6.u32 + -27260, ctx.r3.u32);
	// addi r3,r11,18096
	ctx.r3.s64 = ctx.r11.s64 + 18096;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F560C;
	sub_822E1660(ctx, base);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,-27808(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27808, ctx.r3.u32);
	// addi r28,r8,18044
	ctx.r28.s64 = ctx.r8.s64 + 18044;
	// lfs f1,6040(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6040);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r6,18028
	ctx.r3.s64 = ctx.r6.s64 + 18028;
	// lfs f29,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F5648;
	sub_822E1660(ctx, base);
	// lis r5,-32188
	ctx.r5.s64 = -2109472768;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,17984
	ctx.r6.s64 = ctx.r4.s64 + 17984;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-27264(r5)
	PPC_STORE_U32(ctx.r5.u32 + -27264, ctx.r3.u32);
	// addi r3,r11,17972
	ctx.r3.s64 = ctx.r11.s64 + 17972;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x820F566C;
	sub_822E15D0(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r3,-27272(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27272, ctx.r3.u32);
	// addi r3,r7,17952
	ctx.r3.s64 = ctx.r7.s64 + 17952;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,17968(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17968);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F5698;
	sub_822E1660(ctx, base);
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-27300(r6)
	PPC_STORE_U32(ctx.r6.u32 + -27300, ctx.r3.u32);
	// addi r3,r4,17936
	ctx.r3.s64 = ctx.r4.s64 + 17936;
	// lfs f1,5808(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5808);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F56C4;
	sub_822E1660(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-27304(r11)
	PPC_STORE_U32(ctx.r11.u32 + -27304, ctx.r3.u32);
	// addi r3,r9,17912
	ctx.r3.s64 = ctx.r9.s64 + 17912;
	// lfs f1,-14540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14540);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F56F0;
	sub_822E1660(ctx, base);
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r3,r6,17892
	ctx.r3.s64 = ctx.r6.s64 + 17892;
	// stw r11,-27308(r7)
	PPC_STORE_U32(ctx.r7.u32 + -27308, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820F571C;
	sub_822E1660(ctx, base);
	// lis r5,-32188
	ctx.r5.s64 = -2109472768;
	// stw r3,-27804(r5)
	PPC_STORE_U32(ctx.r5.u32 + -27804, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x820F5730;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F53E8) {
	__imp__sub_820F53E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F5734) {
	__imp__sub_820F5734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27280);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F5738) {
	__imp__sub_820F5738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,22940
	ctx.r6.s64 = ctx.r11.s64 + 22940;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r3,r5,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F5748) {
	__imp__sub_820F5748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820F5778;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,22940
	ctx.r6.s64 = ctx.r11.s64 + 22940;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r26,r11,30,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// bl 0x822dd778
	ctx.lr = 0x820F57CC;
	sub_822DD778(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x820f57e0
	if (!ctx.cr6.eq) goto loc_820F57E0;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27288);
	// b 0x820f5800
	goto loc_820F5800;
loc_820F57E0:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f57f8
	if (ctx.cr6.eq) goto loc_820F57F8;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	// b 0x820f5800
	goto loc_820F5800;
loc_820F57F8:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27312);
loc_820F5800:
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,640
	ctx.r8.s64 = 41943040;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r11,-9672
	ctx.r6.s64 = ctx.r11.s64 + -9672;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// ori r8,r8,59505
	ctx.r8.u64 = ctx.r8.u64 | 59505;
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f31,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f0.f64));
	// lfs f8,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f31,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f6,f8,f31,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lhz r7,334(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 334);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8211ecc0
	ctx.lr = 0x820F5868;
	sub_8211ECC0(ctx, base);
	// lbz r9,265(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 265);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f5b04
	if (!ctx.cr6.eq) goto loc_820F5B04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lwz r11,-27808(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27808);
	// lfs f0,3100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stb r10,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r10.u8);
	// fsubs f4,f31,f5
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// stfs f3,164(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f1,172(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmadds f0,f13,f4,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f13,f10,f4,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f8.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f12,f7,f4,f6
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f6.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f8.u64);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820f591c
	if (!ctx.cr6.lt) goto loc_820F591C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820f5928
	goto loc_820F5928;
loc_820F591C:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x820f5928
	if (!ctx.cr6.gt) goto loc_820F5928;
	// li r11,255
	ctx.r11.s64 = 255;
loc_820F5928:
	// lfs f10,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f6,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// oris r9,r11,255
	ctx.r9.u64 = ctx.r11.u64 | 16711680;
	// li r27,-1
	ctx.r27.s64 = -1;
	// clrlwi r28,r26,24
	ctx.r28.u64 = ctx.r26.u32 & 0xFF;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f13,f2
	ctx.f13.f64 = double(float(sqrt(ctx.f2.f64)));
	// beq cr6,0x820f5980
	if (ctx.cr6.eq) goto loc_820F5980;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27804);
	// b 0x820f5988
	goto loc_820F5988;
loc_820F5980:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27264);
loc_820F5988:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f0,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f30,f13,f0,f11
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// beq cr6,0x820f59b0
	if (ctx.cr6.eq) goto loc_820F59B0;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27304);
	// b 0x820f59b8
	goto loc_820F59B8;
loc_820F59B0:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27296);
loc_820F59B8:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// addi r29,r11,-22896
	ctx.r29.s64 = ctx.r11.s64 + -22896;
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stb r10,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r10.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// bl 0x82184250
	ctx.lr = 0x820F59E4;
	sub_82184250(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27316);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f5b04
	if (ctx.cr6.eq) goto loc_820F5B04;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x820f5b04
	if (!ctx.cr6.eq) goto loc_820F5B04;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// rlwinm r8,r10,0,6,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFC000;
	// rlwinm r8,r8,0,16,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFE00FFFF;
	// lwz r11,-27260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27260);
	// lwz r10,-27320(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27320);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// beq cr6,0x820f5a40
	if (ctx.cr6.eq) goto loc_820F5A40;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27284);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_820F5A40:
	// fsubs f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,7540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x820f5a74
	if (!ctx.cr6.lt) goto loc_820F5A74;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
loc_820F5A74:
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f1,f9,f0,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f13,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f8,f0,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f3,f6,f13,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f11,f6,f0,f10
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// beq cr6,0x820f5adc
	if (ctx.cr6.eq) goto loc_820F5ADC;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27308);
	// b 0x820f5ae4
	goto loc_820F5AE4;
loc_820F5ADC:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27292);
loc_820F5AE4:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x8219c8f0
	ctx.lr = 0x820F5B04;
	sub_8219C8F0(ctx, base);
loc_820F5B04:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F5770) {
	__imp__sub_820F5770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F5B14) {
	__imp__sub_820F5B14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x820F5B20;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,254
	ctx.r29.s64 = 254;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lhz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 216);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// bl 0x822efc98
	ctx.lr = 0x820F5B60;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f5bb4
	if (!ctx.cr6.eq) goto loc_820F5BB4;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,198(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 198);
	// bl 0x822efc98
	ctx.lr = 0x820F5B7C;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f5bb4
	if (!ctx.cr6.eq) goto loc_820F5BB4;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-27272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27272);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f5be8
	if (ctx.cr6.eq) goto loc_820F5BE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r5,334(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 334);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,19040
	ctx.r4.s64 = ctx.r11.s64 + 19040;
	// bl 0x82280c30
	ctx.lr = 0x820F5BAC;
	sub_82280C30(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_820F5BB4:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820eddf0
	ctx.lr = 0x820F5BCC;
	sub_820EDDF0(ctx, base);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820f5770
	ctx.lr = 0x820F5BE8;
	sub_820F5770(ctx, base);
loc_820F5BE8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F5B18) {
	__imp__sub_820F5B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-27276(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27276, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F5BF0) {
	__imp__sub_820F5BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r11,r11,-27800
	ctx.r11.s64 = ctx.r11.s64 + -27800;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,96
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 96, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// mulli r9,r4,404
	ctx.r9.s64 = ctx.r4.s64 * 404;
	// addi r8,r8,-5696
	ctx.r8.s64 = ctx.r8.s64 + -5696;
	// addi r7,r11,384
	ctx.r7.s64 = ctx.r11.s64 + 384;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,544
	ctx.r3.s64 = ctx.r11.s64 + 544;
	// lwz r4,220(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 220);
	// rlwinm r9,r4,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0x1;
	// stbx r9,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r8,r6,r3
	PPC_STORE_U16(ctx.r6.u32 + ctx.r3.u32, ctx.r8.u16);
	// stwx r4,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r4.u32);
	// stw r10,524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 524, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F5C00) {
	__imp__sub_820F5C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x820F5C60;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82114560
	ctx.lr = 0x820F5C6C;
	sub_82114560(ctx, base);
	// clrlwi r21,r3,24
	ctx.r21.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x820f5c90
	if (!ctx.cr6.eq) goto loc_820F5C90;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,-27268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27268);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f5c94
	if (ctx.cr6.eq) goto loc_820F5C94;
loc_820F5C90:
	// li r22,1
	ctx.r22.s64 = 1;
loc_820F5C94:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 131072;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// mullw r9,r29,r8
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,2168
	ctx.r11.s64 = ctx.r11.s64 + 2168;
	// addi r28,r10,-27416
	ctx.r28.s64 = ctx.r10.s64 + -27416;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r27,140(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
	// ble cr6,0x820f5d94
	if (!ctx.cr6.gt) goto loc_820F5D94;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r25,r28,160
	ctx.r25.s64 = ctx.r28.s64 + 160;
	// addi r24,r28,-384
	ctx.r24.s64 = ctx.r28.s64 + -384;
	// addi r23,r11,-5696
	ctx.r23.s64 = ctx.r11.s64 + -5696;
loc_820F5CF4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f5d0c
	if (ctx.cr6.eq) goto loc_820F5D0C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820f5d80
	if (ctx.cr6.eq) goto loc_820F5D80;
loc_820F5D0C:
	// rlwinm r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f5d20
	if (ctx.cr6.eq) goto loc_820F5D20;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x820f5d80
	if (ctx.cr6.eq) goto loc_820F5D80;
loc_820F5D20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// bl 0x820d81a8
	ctx.lr = 0x820F5D2C;
	sub_820D81A8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x820f5d80
	if (ctx.cr6.eq) goto loc_820F5D80;
	// mulli r11,r30,404
	ctx.r11.s64 = ctx.r30.s64 * 404;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bne cr6,0x820f5d50
	if (!ctx.cr6.eq) goto loc_820F5D50;
	// lbzx r11,r26,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f5d80
	if (ctx.cr6.eq) goto loc_820F5D80;
loc_820F5D50:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82284650
	ctx.lr = 0x820F5D5C;
	sub_82284650(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f5b18
	ctx.lr = 0x820F5D7C;
	sub_820F5B18(ctx, base);
	// lwz r27,140(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
loc_820F5D80:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x820f5cf4
	if (ctx.cr6.lt) goto loc_820F5CF4;
loc_820F5D94:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F5C58) {
	__imp__sub_820F5C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F5D9C) {
	__imp__sub_820F5D9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820F5DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mulli r29,r3,12800
	ctx.r29.s64 = ctx.r3.s64 * 12800;
	// addi r30,r11,-27056
	ctx.r30.s64 = ctx.r11.s64 + -27056;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r31,r29,r30
	ctx.r31.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r5,12800
	ctx.r5.s64 = 12800;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x820F5DD0;
	sub_823DE090(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// addi r11,r10,-1448
	ctx.r11.s64 = ctx.r10.s64 + -1448;
	// mulli r10,r28,100
	ctx.r10.s64 = ctx.r28.s64 * 100;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r5,r9,-1456
	ctx.r5.s64 = ctx.r9.s64 + -1456;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,127
	ctx.r8.s64 = 127;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// stwx r9,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r9.u32);
	// add r11,r29,r7
	ctx.r11.u64 = ctx.r29.u64 + ctx.r7.u64;
	// stwx r31,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820F5E0C:
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// bdnz 0x820f5e0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F5E0C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F5DA0) {
	__imp__sub_820F5DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F5E24) {
	__imp__sub_820F5E24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5e60
	if (!ctx.cr6.eq) goto loc_820F5E60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,19104
	ctx.r4.s64 = ctx.r11.s64 + 19104;
	// bl 0x822830e8
	ctx.lr = 0x820F5E60;
	sub_822830E8(ctx, base);
loc_820F5E60:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r8,-1456
	ctx.r11.s64 = ctx.r8.s64 + -1456;
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F5E28) {
	__imp__sub_820F5E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820F5EB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-1456
	ctx.r30.s64 = ctx.r11.s64 + -1456;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-1448
	ctx.r28.s64 = ctx.r11.s64 + -1448;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f5ee4
	if (!ctx.cr6.eq) goto loc_820F5EE4;
	// mulli r11,r3,100
	ctx.r11.s64 = ctx.r3.s64 * 100;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x820f5e28
	ctx.lr = 0x820F5EE4;
	sub_820F5E28(ctx, base);
loc_820F5EE4:
	// lwzx r27,r29,r30
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
	// bl 0x823de090
	ctx.lr = 0x820F5F00;
	sub_823DE090(ctx, base);
	// mulli r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 * 100;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r27,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// stwx r27,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F5EA8) {
	__imp__sub_820F5EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F5F30) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,22912
	ctx.r10.u64 = ctx.r11.u64 | 22912;
	// addi r3,r4,12
	ctx.r3.s64 = ctx.r4.s64 + 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x8231f840
	ctx.lr = 0x820F5F64;
	sub_8231F840(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x822d4b08
	ctx.lr = 0x820F5F70;
	sub_822D4B08(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// ori r8,r9,61864
	ctx.r8.u64 = ctx.r9.u64 | 61864;
	// lfs f6,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lbzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// lfs f1,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fmuls f8,f11,f7
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f7,f10,f5,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f8.f64));
	// fmadds f6,f9,f3,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fsubs f5,f2,f6
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// fsubs f4,f1,f5
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fsel f3,f4,f5,f1
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f5.f64 : ctx.f1.f64;
	// fmadds f2,f11,f3,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f0.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f1,f10,f3,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f13.f64));
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f0,f9,f3,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x820f5ff4
	if (ctx.cr6.eq) goto loc_820F5FF4;
	// li r6,1
	ctx.r6.s64 = 1;
loc_820F5FF4:
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235da40
	ctx.lr = 0x820F6004;
	sub_8235DA40(ctx, base);
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

PPC_WEAK_FUNC(sub_820F5F30) {
	__imp__sub_820F5F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F601C) {
	__imp__sub_820F601C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F6020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// srawi r10,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// adde r3,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F6020) {
	__imp__sub_820F6020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F6038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820F6040;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mulli r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 * 100;
	// addi r11,r11,-1448
	ctx.r11.s64 = ctx.r11.s64 + -1448;
	// ori r8,r9,61924
	ctx.r8.u64 = ctx.r9.u64 | 61924;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r7,-15680
	ctx.r10.s64 = ctx.r7.s64 + -15680;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r5,r6,22912
	ctx.r5.u64 = ctx.r6.u64 | 22912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// lwzx r27,r25,r5
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// beq cr6,0x820f6114
	if (ctx.cr6.eq) goto loc_820F6114;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r26,r10,-1456
	ctx.r26.s64 = ctx.r10.s64 + -1456;
	// addi r24,r11,19104
	ctx.r24.s64 = ctx.r11.s64 + 19104;
loc_820F6098:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// srawi r10,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 31;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r27
	ctx.xer.ca = ctx.r27.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r27.s64 - ctx.r11.s64;
	// adde r11,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820f60fc
	if (ctx.cr6.eq) goto loc_820F60FC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820f60d0
	if (!ctx.cr6.eq) goto loc_820F60D0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x820F60D0;
	sub_822830E8(ctx, base);
loc_820F60D0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwzx r6,r11,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stwx r31,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r31.u32);
	// b 0x820f6108
	goto loc_820F6108;
loc_820F60FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820f5f30
	ctx.lr = 0x820F6108;
	sub_820F5F30(ctx, base);
loc_820F6108:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x820f6098
	if (!ctx.cr6.eq) goto loc_820F6098;
loc_820F6114:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F6038) {
	__imp__sub_820F6038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F611C) {
	__imp__sub_820F611C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F6120) {
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
	// bl 0x823de000
	ctx.lr = 0x820F6138;
	__savefpr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,31016
	ctx.r6.s64 = ctx.r11.s64 + 31016;
	// addi r3,r10,31004
	ctx.r3.s64 = ctx.r10.s64 + 31004;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F6158;
	sub_822E15D0(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r8,r8,30872
	ctx.r8.s64 = ctx.r8.s64 + 30872;
	// stw r3,-17016(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17016, ctx.r3.u32);
	// addi r3,r7,30988
	ctx.r3.s64 = ctx.r7.s64 + 30988;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822e1618
	ctx.lr = 0x820F6184;
	sub_822E1618(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,30792
	ctx.r6.s64 = ctx.r4.s64 + 30792;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,18804(r5)
	PPC_STORE_U32(ctx.r5.u32 + 18804, ctx.r3.u32);
	// addi r3,r11,30764
	ctx.r3.s64 = ctx.r11.s64 + 30764;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e15d0
	ctx.lr = 0x820F61A8;
	sub_822E15D0(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// ori r31,r9,65535
	ctx.r31.u64 = ctx.r9.u64 | 65535;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,6256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6256, ctx.r3.u32);
	// addi r3,r7,30748
	ctx.r3.s64 = ctx.r7.s64 + 30748;
	// addi r8,r8,30696
	ctx.r8.s64 = ctx.r8.s64 + 30696;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x822e1618
	ctx.lr = 0x820F61DC;
	sub_822E1618(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,-29916(r6)
	PPC_STORE_U32(ctx.r6.u32 + -29916, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f30,12168(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r10,30656
	ctx.r8.s64 = ctx.r10.s64 + 30656;
	// addi r3,r9,30648
	ctx.r3.s64 = ctx.r9.s64 + 30648;
	// lfs f3,3740(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3740);
	ctx.f3.f64 = double(temp.f32);
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f1,30692(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30692);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6218;
	sub_822E1660(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,-29936(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29936, ctx.r3.u32);
	// addi r8,r6,30588
	ctx.r8.s64 = ctx.r6.s64 + 30588;
	// lfs f31,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r5,30564
	ctx.r3.s64 = ctx.r5.s64 + 30564;
	// li r7,68
	ctx.r7.s64 = 68;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F624C;
	sub_822E1660(ctx, base);
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,30540
	ctx.r6.s64 = ctx.r11.s64 + 30540;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-17060(r4)
	PPC_STORE_U32(ctx.r4.u32 + -17060, ctx.r3.u32);
	// addi r3,r10,30528
	ctx.r3.s64 = ctx.r10.s64 + 30528;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F6270;
	sub_822E15D0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,30508
	ctx.r6.s64 = ctx.r8.s64 + 30508;
	// stw r3,-17048(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17048, ctx.r3.u32);
	// addi r3,r7,30496
	ctx.r3.s64 = ctx.r7.s64 + 30496;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F6294;
	sub_822E15D0(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,30480
	ctx.r6.s64 = ctx.r4.s64 + 30480;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-30204(r5)
	PPC_STORE_U32(ctx.r5.u32 + -30204, ctx.r3.u32);
	// addi r3,r11,30464
	ctx.r3.s64 = ctx.r11.s64 + 30464;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x820F62B8;
	sub_822E15D0(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r9,30428
	ctx.r6.s64 = ctx.r9.s64 + 30428;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,6248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6248, ctx.r3.u32);
	// addi r3,r8,30408
	ctx.r3.s64 = ctx.r8.s64 + 30408;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F62DC;
	sub_822E15D0(ctx, base);
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r6,30352
	ctx.r6.s64 = ctx.r6.s64 + 30352;
	// stw r3,6220(r7)
	PPC_STORE_U32(ctx.r7.u32 + 6220, ctx.r3.u32);
	// addi r3,r5,30388
	ctx.r3.s64 = ctx.r5.s64 + 30388;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F6300;
	sub_822E15D0(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,544
	ctx.r30.s64 = ctx.r11.s64 + 544;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,-29992(r4)
	PPC_STORE_U32(ctx.r4.u32 + -29992, ctx.r3.u32);
	// addi r7,r10,30328
	ctx.r7.s64 = ctx.r10.s64 + 30328;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r9,30316
	ctx.r3.s64 = ctx.r9.s64 + 30316;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x820F6330;
	sub_822E1828(ctx, base);
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r7,30284
	ctx.r6.s64 = ctx.r7.s64 + 30284;
	// stw r3,6240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6240, ctx.r3.u32);
	// addi r3,r5,30300
	ctx.r3.s64 = ctx.r5.s64 + 30300;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F6354;
	sub_822E15D0(ctx, base);
	// lis r4,-32188
	ctx.r4.s64 = -2109472768;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,30260
	ctx.r6.s64 = ctx.r11.s64 + 30260;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-1224(r4)
	PPC_STORE_U32(ctx.r4.u32 + -1224, ctx.r3.u32);
	// addi r3,r10,30240
	ctx.r3.s64 = ctx.r10.s64 + 30240;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F6378;
	sub_822E15D0(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,-29972(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29972, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f26,5996(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5996);
	ctx.f26.f64 = double(temp.f32);
	// addi r9,r9,30180
	ctx.r9.s64 = ctx.r9.s64 + 30180;
	// lfs f4,4452(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4452);
	ctx.f4.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f3,30236(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 30236);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r3,30152
	ctx.r3.s64 = ctx.r3.s64 + 30152;
	// lfs f2,30232(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 30232);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x822e16a8
	ctx.lr = 0x820F63BC;
	sub_822E16A8(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,-29956(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29956, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r7,r10,30112
	ctx.r7.s64 = ctx.r10.s64 + 30112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r9,30096
	ctx.r3.s64 = ctx.r9.s64 + 30096;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x820F63E4;
	sub_822E1828(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r7,30036
	ctx.r6.s64 = ctx.r7.s64 + 30036;
	// stw r3,-30056(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30056, ctx.r3.u32);
	// addi r3,r5,30076
	ctx.r3.s64 = ctx.r5.s64 + 30076;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F6408;
	sub_822E15D0(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r11,29992
	ctx.r7.s64 = ctx.r11.s64 + 29992;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r3,-30208(r4)
	PPC_STORE_U32(ctx.r4.u32 + -30208, ctx.r3.u32);
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// addi r3,r10,29976
	ctx.r3.s64 = ctx.r10.s64 + 29976;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x820F6430;
	sub_822E1828(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,29936
	ctx.r6.s64 = ctx.r8.s64 + 29936;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-30060(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30060, ctx.r3.u32);
	// addi r3,r7,29912
	ctx.r3.s64 = ctx.r7.s64 + 29912;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F6454;
	sub_822E15D0(ctx, base);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,29868
	ctx.r6.s64 = ctx.r4.s64 + 29868;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,-19428(r5)
	PPC_STORE_U32(ctx.r5.u32 + -19428, ctx.r3.u32);
	// addi r3,r11,29848
	ctx.r3.s64 = ctx.r11.s64 + 29848;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x820F6478;
	sub_822E15D0(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r9,29824
	ctx.r6.s64 = ctx.r9.s64 + 29824;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-19416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19416, ctx.r3.u32);
	// addi r3,r8,29804
	ctx.r3.s64 = ctx.r8.s64 + 29804;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F649C;
	sub_822E15D0(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r6,29752
	ctx.r6.s64 = ctx.r6.s64 + 29752;
	// stw r3,-29984(r7)
	PPC_STORE_U32(ctx.r7.u32 + -29984, ctx.r3.u32);
	// addi r3,r5,29780
	ctx.r3.s64 = ctx.r5.s64 + 29780;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x820F64C0;
	sub_822E15D0(ctx, base);
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,29716
	ctx.r6.s64 = ctx.r11.s64 + 29716;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-15692(r4)
	PPC_STORE_U32(ctx.r4.u32 + -15692, ctx.r3.u32);
	// addi r3,r10,29700
	ctx.r3.s64 = ctx.r10.s64 + 29700;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F64E4;
	sub_822E15D0(ctx, base);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r8,r8,29640
	ctx.r8.s64 = ctx.r8.s64 + 29640;
	// stw r3,21480(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21480, ctx.r3.u32);
	// addi r3,r7,29680
	ctx.r3.s64 = ctx.r7.s64 + 29680;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x820F6510;
	sub_822E1618(ctx, base);
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r4,29592
	ctx.r8.s64 = ctx.r4.s64 + 29592;
	// stw r3,6216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6216, ctx.r3.u32);
	// addi r3,r11,29572
	ctx.r3.s64 = ctx.r11.s64 + 29572;
	// lfs f20,6016(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6016);
	ctx.f20.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f20
	ctx.f3.f64 = ctx.f20.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6544;
	sub_822E1660(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,-15700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15700, ctx.r3.u32);
	// addi r8,r6,29496
	ctx.r8.s64 = ctx.r6.s64 + 29496;
	// lfs f1,7932(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,29468
	ctx.r3.s64 = ctx.r5.s64 + 29468;
	// lfs f27,5812(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5812);
	ctx.f27.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F657C;
	sub_822E1660(ctx, base);
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,29392
	ctx.r8.s64 = ctx.r10.s64 + 29392;
	// stw r3,-17064(r4)
	PPC_STORE_U32(ctx.r4.u32 + -17064, ctx.r3.u32);
	// addi r3,r9,29360
	ctx.r3.s64 = ctx.r9.s64 + 29360;
	// lfs f29,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f29.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F65B0;
	sub_822E1660(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r6,29280
	ctx.r8.s64 = ctx.r6.s64 + 29280;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r3,6960(r7)
	PPC_STORE_U32(ctx.r7.u32 + 6960, ctx.r3.u32);
	// addi r3,r5,29248
	ctx.r3.s64 = ctx.r5.s64 + 29248;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F65DC;
	sub_822E1660(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,29168
	ctx.r8.s64 = ctx.r10.s64 + 29168;
	// stw r3,-29944(r4)
	PPC_STORE_U32(ctx.r4.u32 + -29944, ctx.r3.u32);
	// addi r3,r9,29140
	ctx.r3.s64 = ctx.r9.s64 + 29140;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,6040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6040);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F660C;
	sub_822E1660(ctx, base);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,-19444(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19444, ctx.r3.u32);
	// addi r8,r6,29096
	ctx.r8.s64 = ctx.r6.s64 + 29096;
	// lfs f1,-23144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23144);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,29068
	ctx.r3.s64 = ctx.r5.s64 + 29068;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F663C;
	sub_822E1660(ctx, base);
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r3,-17088(r4)
	PPC_STORE_U32(ctx.r4.u32 + -17088, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,29012
	ctx.r8.s64 = ctx.r11.s64 + 29012;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r10,28984
	ctx.r3.s64 = ctx.r10.s64 + 28984;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F6668;
	sub_822E1660(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r8,r6,28936
	ctx.r8.s64 = ctx.r6.s64 + 28936;
	// stw r3,-30048(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30048, ctx.r3.u32);
	// addi r3,r5,28908
	ctx.r3.s64 = ctx.r5.s64 + 28908;
	// lfs f28,6020(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6020);
	ctx.f28.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F669C;
	sub_822E1660(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,28856
	ctx.r6.s64 = ctx.r11.s64 + 28856;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-30036(r4)
	PPC_STORE_U32(ctx.r4.u32 + -30036, ctx.r3.u32);
	// addi r3,r10,28828
	ctx.r3.s64 = ctx.r10.s64 + 28828;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F66C0;
	sub_822E15D0(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,28752
	ctx.r6.s64 = ctx.r8.s64 + 28752;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-30244(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30244, ctx.r3.u32);
	// addi r3,r7,28724
	ctx.r3.s64 = ctx.r7.s64 + 28724;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F66E4;
	sub_822E15D0(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r8,r5,28672
	ctx.r8.s64 = ctx.r5.s64 + 28672;
	// fmr f3,f20
	ctx.f3.f64 = ctx.f20.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-30268(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30268, ctx.r3.u32);
	// addi r3,r4,28648
	ctx.r3.s64 = ctx.r4.s64 + 28648;
	// bl 0x822e1660
	ctx.lr = 0x820F6710;
	sub_822E1660(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r8,r9,28568
	ctx.r8.s64 = ctx.r9.s64 + 28568;
	// stw r3,-5700(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5700, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r6,28536
	ctx.r3.s64 = ctx.r6.s64 + 28536;
	// lfs f1,7324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7324);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F6740;
	sub_822E1660(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// addi r8,r4,28456
	ctx.r8.s64 = ctx.r4.s64 + 28456;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-30024(r5)
	PPC_STORE_U32(ctx.r5.u32 + -30024, ctx.r3.u32);
	// addi r3,r11,28428
	ctx.r3.s64 = ctx.r11.s64 + 28428;
	// bl 0x822e1660
	ctx.lr = 0x820F676C;
	sub_822E1660(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r8,28344
	ctx.r8.s64 = ctx.r8.s64 + 28344;
	// stw r3,-17028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17028, ctx.r3.u32);
	// addi r3,r7,28316
	ctx.r3.s64 = ctx.r7.s64 + 28316;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,4292(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4292);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F679C;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r4,28232
	ctx.r8.s64 = ctx.r4.s64 + 28232;
	// stw r3,-30064(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30064, ctx.r3.u32);
	// addi r3,r11,28200
	ctx.r3.s64 = ctx.r11.s64 + 28200;
	// lfs f22,2832(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2832);
	ctx.f22.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F67D0;
	sub_822E1660(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r9,28120
	ctx.r8.s64 = ctx.r9.s64 + 28120;
	// stw r3,-30196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30196, ctx.r3.u32);
	// addi r3,r7,28172
	ctx.r3.s64 = ctx.r7.s64 + 28172;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F67FC;
	sub_822E1660(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r6,28060
	ctx.r8.s64 = ctx.r6.s64 + 28060;
	// stw r3,-30072(r5)
	PPC_STORE_U32(ctx.r5.u32 + -30072, ctx.r3.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f26,6032(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6032);
	ctx.f26.f64 = double(temp.f32);
	// addi r3,r3,28032
	ctx.r3.s64 = ctx.r3.s64 + 28032;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6830;
	sub_822E1660(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,-1244(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1244, ctx.r3.u32);
	// addi r3,r7,28004
	ctx.r3.s64 = ctx.r7.s64 + 28004;
	// lfs f25,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f25.f64 = double(temp.f32);
	// addi r8,r9,27952
	ctx.r8.s64 = ctx.r9.s64 + 27952;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6864;
	sub_822E1660(ctx, base);
	// lis r5,-32188
	ctx.r5.s64 = -2109472768;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,27896
	ctx.r6.s64 = ctx.r4.s64 + 27896;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-1220(r5)
	PPC_STORE_U32(ctx.r5.u32 + -1220, ctx.r3.u32);
	// addi r3,r11,27868
	ctx.r3.s64 = ctx.r11.s64 + 27868;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x820F6888;
	sub_822E15D0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,-29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29996, ctx.r3.u32);
	// addi r3,r7,27844
	ctx.r3.s64 = ctx.r7.s64 + 27844;
	// addi r8,r8,27800
	ctx.r8.s64 = ctx.r8.s64 + 27800;
	// lfs f1,5876(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5876);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820F68B8;
	sub_822E1660(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32181
	ctx.r6.s64 = -2109014016;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// addi r8,r5,27756
	ctx.r8.s64 = ctx.r5.s64 + 27756;
	// stw r3,-22904(r6)
	PPC_STORE_U32(ctx.r6.u32 + -22904, ctx.r3.u32);
	// addi r3,r4,27732
	ctx.r3.s64 = ctx.r4.s64 + 27732;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820F68E4;
	sub_822E1660(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r10,27680
	ctx.r6.s64 = ctx.r10.s64 + 27680;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-1228(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1228, ctx.r3.u32);
	// addi r3,r9,27652
	ctx.r3.s64 = ctx.r9.s64 + 27652;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F6908;
	sub_822E15D0(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r9,r7,27592
	ctx.r9.s64 = ctx.r7.s64 + 27592;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r3,-30216(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30216, ctx.r3.u32);
	// addi r3,r6,27572
	ctx.r3.s64 = ctx.r6.s64 + 27572;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x822e1890
	ctx.lr = 0x820F6938;
	sub_822E1890(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,27524
	ctx.r6.s64 = ctx.r4.s64 + 27524;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-30212(r5)
	PPC_STORE_U32(ctx.r5.u32 + -30212, ctx.r3.u32);
	// addi r3,r11,27500
	ctx.r3.s64 = ctx.r11.s64 + 27500;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F695C;
	sub_822E15D0(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,-19404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19404, ctx.r3.u32);
	// addi r8,r6,27468
	ctx.r8.s64 = ctx.r6.s64 + 27468;
	// lfs f24,3096(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3096);
	ctx.f24.f64 = double(temp.f32);
	// addi r3,r5,27444
	ctx.r3.s64 = ctx.r5.s64 + 27444;
	// lfs f29,7652(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7652);
	ctx.f29.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6998;
	sub_822E1660(ctx, base);
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,27408
	ctx.r8.s64 = ctx.r10.s64 + 27408;
	// stw r3,-17076(r4)
	PPC_STORE_U32(ctx.r4.u32 + -17076, ctx.r3.u32);
	// addi r3,r9,27384
	ctx.r3.s64 = ctx.r9.s64 + 27384;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,27440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27440);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F69C8;
	sub_822E1660(ctx, base);
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r6,27336
	ctx.r8.s64 = ctx.r6.s64 + 27336;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// stw r3,-19424(r7)
	PPC_STORE_U32(ctx.r7.u32 + -19424, ctx.r3.u32);
	// addi r3,r5,27312
	ctx.r3.s64 = ctx.r5.s64 + 27312;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F69F4;
	sub_822E1660(ctx, base);
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,27232
	ctx.r8.s64 = ctx.r11.s64 + 27232;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-19452(r4)
	PPC_STORE_U32(ctx.r4.u32 + -19452, ctx.r3.u32);
	// addi r3,r10,27208
	ctx.r3.s64 = ctx.r10.s64 + 27208;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6000
	ctx.r4.s64 = 6000;
	// bl 0x822e1618
	ctx.lr = 0x820F6A20;
	sub_822E1618(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,27144
	ctx.r6.s64 = ctx.r8.s64 + 27144;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-29960(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29960, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r7,27120
	ctx.r3.s64 = ctx.r7.s64 + 27120;
	// bl 0x822e15d0
	ctx.lr = 0x820F6A44;
	sub_822E15D0(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,-30188(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30188, ctx.r3.u32);
	// addi r8,r5,27016
	ctx.r8.s64 = ctx.r5.s64 + 27016;
	// lfs f24,12240(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12240);
	ctx.f24.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,26984
	ctx.r3.s64 = ctx.r10.s64 + 26984;
	// lfs f1,20476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20476);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6A7C;
	sub_822E1660(ctx, base);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r3,6232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6232, ctx.r3.u32);
	// addi r8,r5,26872
	ctx.r8.s64 = ctx.r5.s64 + 26872;
	// lfs f3,26980(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26980);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r4,26836
	ctx.r3.s64 = ctx.r4.s64 + 26836;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,8664(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8664);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F6AB0;
	sub_822E1660(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,-30220(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30220, ctx.r3.u32);
	// addi r3,r7,26804
	ctx.r3.s64 = ctx.r7.s64 + 26804;
	// addi r8,r9,26688
	ctx.r8.s64 = ctx.r9.s64 + 26688;
	// lfs f1,26832(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F6AE0;
	sub_822E1660(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,26608
	ctx.r6.s64 = ctx.r4.s64 + 26608;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,-30228(r5)
	PPC_STORE_U32(ctx.r5.u32 + -30228, ctx.r3.u32);
	// addi r3,r11,26576
	ctx.r3.s64 = ctx.r11.s64 + 26576;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F6B04;
	sub_822E15D0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,-30264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30264, ctx.r3.u32);
	// addi r3,r7,26548
	ctx.r3.s64 = ctx.r7.s64 + 26548;
	// lfs f23,26572(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26572);
	ctx.f23.f64 = double(temp.f32);
	// addi r8,r8,26488
	ctx.r8.s64 = ctx.r8.s64 + 26488;
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6B38;
	sub_822E1660(ctx, base);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r8,r4,26444
	ctx.r8.s64 = ctx.r4.s64 + 26444;
	// stw r3,-17012(r6)
	PPC_STORE_U32(ctx.r6.u32 + -17012, ctx.r3.u32);
	// addi r3,r11,26420
	ctx.r3.s64 = ctx.r11.s64 + 26420;
	// lfs f24,13220(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 13220);
	ctx.f24.f64 = double(temp.f32);
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6B6C;
	sub_822E1660(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// addi r8,r9,26356
	ctx.r8.s64 = ctx.r9.s64 + 26356;
	// stw r3,-30092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30092, ctx.r3.u32);
	// addi r3,r7,26396
	ctx.r3.s64 = ctx.r7.s64 + 26396;
	// li r7,64
	ctx.r7.s64 = 64;
	// bl 0x822e1660
	ctx.lr = 0x820F6B98;
	sub_822E1660(ctx, base);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,26308
	ctx.r6.s64 = ctx.r4.s64 + 26308;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-19456(r5)
	PPC_STORE_U32(ctx.r5.u32 + -19456, ctx.r3.u32);
	// addi r3,r11,26276
	ctx.r3.s64 = ctx.r11.s64 + 26276;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F6BBC;
	sub_822E15D0(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,-1248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1248, ctx.r3.u32);
	// addi r3,r7,26248
	ctx.r3.s64 = ctx.r7.s64 + 26248;
	// lfs f21,13904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13904);
	ctx.f21.f64 = double(temp.f32);
	// addi r8,r8,26204
	ctx.r8.s64 = ctx.r8.s64 + 26204;
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6BF0;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r5,26160
	ctx.r8.s64 = ctx.r5.s64 + 26160;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r3,-29920(r6)
	PPC_STORE_U32(ctx.r6.u32 + -29920, ctx.r3.u32);
	// addi r3,r4,26132
	ctx.r3.s64 = ctx.r4.s64 + 26132;
	// bl 0x822e1660
	ctx.lr = 0x820F6C1C;
	sub_822E1660(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// stw r3,-30080(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30080, ctx.r3.u32);
	// addi r3,r8,26100
	ctx.r3.s64 = ctx.r8.s64 + 26100;
	// addi r9,r9,26052
	ctx.r9.s64 = ctx.r9.s64 + 26052;
	// lfs f2,26128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26128);
	ctx.f2.f64 = double(temp.f32);
	// li r8,64
	ctx.r8.s64 = 64;
	// bl 0x822e16a8
	ctx.lr = 0x820F6C50;
	sub_822E16A8(ctx, base);
	// lis r7,-32181
	ctx.r7.s64 = -2109014016;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f23
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f23.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r8,r5,25976
	ctx.r8.s64 = ctx.r5.s64 + 25976;
	// stw r3,-22900(r7)
	PPC_STORE_U32(ctx.r7.u32 + -22900, ctx.r3.u32);
	// addi r3,r4,25944
	ctx.r3.s64 = ctx.r4.s64 + 25944;
	// lfs f21,7544(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7544);
	ctx.f21.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6C84;
	sub_822E1660(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f21
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f21.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,25808
	ctx.r8.s64 = ctx.r10.s64 + 25808;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,-16996(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16996, ctx.r3.u32);
	// lfs f24,5488(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5488);
	ctx.f24.f64 = double(temp.f32);
	// addi r3,r9,25772
	ctx.r3.s64 = ctx.r9.s64 + 25772;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6CB8;
	sub_822E1660(ctx, base);
	// lis r5,-32188
	ctx.r5.s64 = -2109472768;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,25632
	ctx.r8.s64 = ctx.r11.s64 + 25632;
	// stw r3,-1236(r5)
	PPC_STORE_U32(ctx.r5.u32 + -1236, ctx.r3.u32);
	// addi r3,r10,25596
	ctx.r3.s64 = ctx.r10.s64 + 25596;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,14272(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14272);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F6CE8;
	sub_822E1660(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r3,-30000(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30000, ctx.r3.u32);
	// addi r8,r5,25544
	ctx.r8.s64 = ctx.r5.s64 + 25544;
	// lfs f29,6912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6912);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r4,25512
	ctx.r3.s64 = ctx.r4.s64 + 25512;
	// lfs f23,5992(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5992);
	ctx.f23.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6D24;
	sub_822E1660(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,21476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21476, ctx.r3.u32);
	// addi r3,r7,25472
	ctx.r3.s64 = ctx.r7.s64 + 25472;
	// lfs f19,6820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6820);
	ctx.f19.f64 = double(temp.f32);
	// addi r8,r9,25416
	ctx.r8.s64 = ctx.r9.s64 + 25416;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6D58;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// addi r8,r5,25352
	ctx.r8.s64 = ctx.r5.s64 + 25352;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-29932(r6)
	PPC_STORE_U32(ctx.r6.u32 + -29932, ctx.r3.u32);
	// addi r3,r4,25320
	ctx.r3.s64 = ctx.r4.s64 + 25320;
	// bl 0x822e1660
	ctx.lr = 0x820F6D84;
	sub_822E1660(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,21496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21496, ctx.r3.u32);
	// addi r3,r7,25284
	ctx.r3.s64 = ctx.r7.s64 + 25284;
	// lfs f18,9760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9760);
	ctx.f18.f64 = double(temp.f32);
	// addi r8,r9,25228
	ctx.r8.s64 = ctx.r9.s64 + 25228;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f18
	ctx.f2.f64 = ctx.f18.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6DB8;
	sub_822E1660(ctx, base);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f18
	ctx.f2.f64 = ctx.f18.f64;
	// addi r8,r6,25168
	ctx.r8.s64 = ctx.r6.s64 + 25168;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-17008(r5)
	PPC_STORE_U32(ctx.r5.u32 + -17008, ctx.r3.u32);
	// addi r3,r4,25128
	ctx.r3.s64 = ctx.r4.s64 + 25128;
	// bl 0x822e1660
	ctx.lr = 0x820F6DE4;
	sub_822E1660(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// addi r8,r10,25064
	ctx.r8.s64 = ctx.r10.s64 + 25064;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-30260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30260, ctx.r3.u32);
	// addi r3,r9,25024
	ctx.r3.s64 = ctx.r9.s64 + 25024;
	// bl 0x822e1660
	ctx.lr = 0x820F6E10;
	sub_822E1660(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r8,r6,24912
	ctx.r8.s64 = ctx.r6.s64 + 24912;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r3,-29964(r7)
	PPC_STORE_U32(ctx.r7.u32 + -29964, ctx.r3.u32);
	// addi r3,r5,24892
	ctx.r3.s64 = ctx.r5.s64 + 24892;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x820F6E3C;
	sub_822E1618(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,24856
	ctx.r8.s64 = ctx.r11.s64 + 24856;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-30240(r4)
	PPC_STORE_U32(ctx.r4.u32 + -30240, ctx.r3.u32);
	// addi r3,r10,24836
	ctx.r3.s64 = ctx.r10.s64 + 24836;
	// bl 0x822e1660
	ctx.lr = 0x820F6E68;
	sub_822E1660(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// addi r8,r8,24752
	ctx.r8.s64 = ctx.r8.s64 + 24752;
	// stw r3,-17040(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17040, ctx.r3.u32);
	// addi r3,r7,24812
	ctx.r3.s64 = ctx.r7.s64 + 24812;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820F6E94;
	sub_822E1660(ctx, base);
	// lis r5,-32181
	ctx.r5.s64 = -2109014016;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,24728
	ctx.r6.s64 = ctx.r4.s64 + 24728;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-5704(r5)
	PPC_STORE_U32(ctx.r5.u32 + -5704, ctx.r3.u32);
	// addi r3,r11,24708
	ctx.r3.s64 = ctx.r11.s64 + 24708;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x820F6EB8;
	sub_822E15D0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r9,24668
	ctx.r6.s64 = ctx.r9.s64 + 24668;
	// li r5,68
	ctx.r5.s64 = 68;
	// stw r3,-30192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30192, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r8,24644
	ctx.r3.s64 = ctx.r8.s64 + 24644;
	// bl 0x822e15d0
	ctx.lr = 0x820F6EDC;
	sub_822E15D0(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r7,24560
	ctx.r6.s64 = ctx.r7.s64 + 24560;
	// stw r3,-30248(r5)
	PPC_STORE_U32(ctx.r5.u32 + -30248, ctx.r3.u32);
	// addi r3,r4,24612
	ctx.r3.s64 = ctx.r4.s64 + 24612;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F6F00;
	sub_822E15D0(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r10,24540
	ctx.r6.s64 = ctx.r10.s64 + 24540;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,6224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6224, ctx.r3.u32);
	// addi r3,r9,24528
	ctx.r3.s64 = ctx.r9.s64 + 24528;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F6F24;
	sub_822E15D0(ctx, base);
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// stw r3,6252(r7)
	PPC_STORE_U32(ctx.r7.u32 + 6252, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r8,r6,24480
	ctx.r8.s64 = ctx.r6.s64 + 24480;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r5,24464
	ctx.r3.s64 = ctx.r5.s64 + 24464;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820F6F50;
	sub_822E1660(ctx, base);
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,24336
	ctx.r8.s64 = ctx.r11.s64 + 24336;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-17004(r4)
	PPC_STORE_U32(ctx.r4.u32 + -17004, ctx.r3.u32);
	// addi r3,r10,24316
	ctx.r3.s64 = ctx.r10.s64 + 24316;
	// li r6,173
	ctx.r6.s64 = 173;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x820F6F7C;
	sub_822E1618(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,24288
	ctx.r6.s64 = ctx.r8.s64 + 24288;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-30224(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30224, ctx.r3.u32);
	// addi r3,r7,24272
	ctx.r3.s64 = ctx.r7.s64 + 24272;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F6FA0;
	sub_822E15D0(ctx, base);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r4,24244
	ctx.r8.s64 = ctx.r4.s64 + 24244;
	// stw r3,-19400(r6)
	PPC_STORE_U32(ctx.r6.u32 + -19400, ctx.r3.u32);
	// addi r3,r11,24228
	ctx.r3.s64 = ctx.r11.s64 + 24228;
	// lfs f23,-14540(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -14540);
	ctx.f23.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F6FD4;
	sub_822E1660(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r9,24196
	ctx.r6.s64 = ctx.r9.s64 + 24196;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-30020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30020, ctx.r3.u32);
	// addi r3,r8,24180
	ctx.r3.s64 = ctx.r8.s64 + 24180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F6FF8;
	sub_822E15D0(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r6,24120
	ctx.r6.s64 = ctx.r6.s64 + 24120;
	// stw r3,-30068(r7)
	PPC_STORE_U32(ctx.r7.u32 + -30068, ctx.r3.u32);
	// addi r3,r5,24156
	ctx.r3.s64 = ctx.r5.s64 + 24156;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e15d0
	ctx.lr = 0x820F701C;
	sub_822E15D0(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,24096
	ctx.r8.s64 = ctx.r11.s64 + 24096;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,18812(r4)
	PPC_STORE_U32(ctx.r4.u32 + 18812, ctx.r3.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,24084
	ctx.r3.s64 = ctx.r10.s64 + 24084;
	// bl 0x822e1618
	ctx.lr = 0x820F7048;
	sub_822E1618(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,24060
	ctx.r6.s64 = ctx.r8.s64 + 24060;
	// li r5,68
	ctx.r5.s64 = 68;
	// stw r3,-29940(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29940, ctx.r3.u32);
	// addi r3,r7,24044
	ctx.r3.s64 = ctx.r7.s64 + 24044;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F706C;
	sub_822E15D0(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,23996
	ctx.r6.s64 = ctx.r4.s64 + 23996;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-30180(r5)
	PPC_STORE_U32(ctx.r5.u32 + -30180, ctx.r3.u32);
	// addi r3,r11,23968
	ctx.r3.s64 = ctx.r11.s64 + 23968;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F7090;
	sub_822E15D0(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// addi r8,r9,23872
	ctx.r8.s64 = ctx.r9.s64 + 23872;
	// stw r3,8664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8664, ctx.r3.u32);
	// addi r3,r7,23944
	ctx.r3.s64 = ctx.r7.s64 + 23944;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F70BC;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r4,23800
	ctx.r8.s64 = ctx.r4.s64 + 23800;
	// stw r3,6956(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6956, ctx.r3.u32);
	// addi r3,r11,23768
	ctx.r3.s64 = ctx.r11.s64 + 23768;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,7540(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7540);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F70EC;
	sub_822E1660(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r9,23672
	ctx.r6.s64 = ctx.r9.s64 + 23672;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-16992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16992, ctx.r3.u32);
	// addi r3,r8,23644
	ctx.r3.s64 = ctx.r8.s64 + 23644;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F7110;
	sub_822E15D0(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// addi r4,r6,23580
	ctx.r4.s64 = ctx.r6.s64 + 23580;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r3,-29976(r7)
	PPC_STORE_U32(ctx.r7.u32 + -29976, ctx.r3.u32);
	// addi r3,r5,23556
	ctx.r3.s64 = ctx.r5.s64 + 23556;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1790
	ctx.lr = 0x820F714C;
	sub_822E1790(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r7,r10,23492
	ctx.r7.s64 = ctx.r10.s64 + 23492;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r8,23468
	ctx.r3.s64 = ctx.r8.s64 + 23468;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r11,-17052(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17052, ctx.r11.u32);
	// bl 0x822e1790
	ctx.lr = 0x820F718C;
	sub_822E1790(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r9,r6,23404
	ctx.r9.s64 = ctx.r6.s64 + 23404;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r4,23380
	ctx.r3.s64 = ctx.r4.s64 + 23380;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r11,-17056(r5)
	PPC_STORE_U32(ctx.r5.u32 + -17056, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x822e1790
	ctx.lr = 0x820F71CC;
	sub_822E1790(ctx, base);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r5,r7,23316
	ctx.r5.s64 = ctx.r7.s64 + 23316;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r6,23292
	ctx.r3.s64 = ctx.r6.s64 + 23292;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-17080(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17080, ctx.r11.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x822e1790
	ctx.lr = 0x820F720C;
	sub_822E1790(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// addi r8,r10,23228
	ctx.r8.s64 = ctx.r10.s64 + 23228;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r9,23204
	ctx.r3.s64 = ctx.r9.s64 + 23204;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r11,-30252(r4)
	PPC_STORE_U32(ctx.r4.u32 + -30252, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x822e1790
	ctx.lr = 0x820F724C;
	sub_822E1790(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r4,r6,23140
	ctx.r4.s64 = ctx.r6.s64 + 23140;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stw r3,-29948(r7)
	PPC_STORE_U32(ctx.r7.u32 + -29948, ctx.r3.u32);
	// addi r3,r5,23116
	ctx.r3.s64 = ctx.r5.s64 + 23116;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x822e1790
	ctx.lr = 0x820F7288;
	sub_822E1790(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,-30084(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30084, ctx.r3.u32);
	// addi r3,r7,23088
	ctx.r3.s64 = ctx.r7.s64 + 23088;
	// addi r8,r9,23028
	ctx.r8.s64 = ctx.r9.s64 + 23028;
	// lfs f1,23112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23112);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F72B8;
	sub_822E1660(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,22972
	ctx.r6.s64 = ctx.r4.s64 + 22972;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-30236(r5)
	PPC_STORE_U32(ctx.r5.u32 + -30236, ctx.r3.u32);
	// addi r3,r11,22952
	ctx.r3.s64 = ctx.r11.s64 + 22952;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F72DC;
	sub_822E15D0(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r8,r9,22936
	ctx.r8.s64 = ctx.r9.s64 + 22936;
	// stw r3,-17000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17000, ctx.r3.u32);
	// addi r3,r7,22924
	ctx.r3.s64 = ctx.r7.s64 + 22924;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x820F7308;
	sub_822E1618(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,22904
	ctx.r6.s64 = ctx.r4.s64 + 22904;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,6964(r5)
	PPC_STORE_U32(ctx.r5.u32 + 6964, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,22888
	ctx.r3.s64 = ctx.r11.s64 + 22888;
	// bl 0x822e15d0
	ctx.lr = 0x820F732C;
	sub_822E15D0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r9,22808
	ctx.r6.s64 = ctx.r9.s64 + 22808;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-29968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29968, ctx.r3.u32);
	// addi r3,r8,22780
	ctx.r3.s64 = ctx.r8.s64 + 22780;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F7350;
	sub_822E15D0(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r8,r6,22704
	ctx.r8.s64 = ctx.r6.s64 + 22704;
	// li r6,640
	ctx.r6.s64 = 640;
	// stw r3,-30052(r7)
	PPC_STORE_U32(ctx.r7.u32 + -30052, ctx.r3.u32);
	// addi r3,r5,22664
	ctx.r3.s64 = ctx.r5.s64 + 22664;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,325
	ctx.r4.s64 = 325;
	// bl 0x822e1618
	ctx.lr = 0x820F737C;
	sub_822E1618(ctx, base);
	// lis r4,-32188
	ctx.r4.s64 = -2109472768;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,22592
	ctx.r8.s64 = ctx.r11.s64 + 22592;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,21500(r4)
	PPC_STORE_U32(ctx.r4.u32 + 21500, ctx.r3.u32);
	// addi r3,r10,22556
	ctx.r3.s64 = ctx.r10.s64 + 22556;
	// li r6,640
	ctx.r6.s64 = 640;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,530
	ctx.r4.s64 = 530;
	// bl 0x822e1618
	ctx.lr = 0x820F73A8;
	sub_822E1618(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// addi r8,r8,22492
	ctx.r8.s64 = ctx.r8.s64 + 22492;
	// stw r3,-17024(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17024, ctx.r3.u32);
	// addi r3,r7,22540
	ctx.r3.s64 = ctx.r7.s64 + 22540;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x820F73D4;
	sub_822E1618(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r8,r5,22448
	ctx.r8.s64 = ctx.r5.s64 + 22448;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-30032(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30032, ctx.r3.u32);
	// addi r3,r4,22436
	ctx.r3.s64 = ctx.r4.s64 + 22436;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x820F7400;
	sub_822E1618(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,22396
	ctx.r8.s64 = ctx.r10.s64 + 22396;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-30200(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30200, ctx.r3.u32);
	// addi r3,r9,22380
	ctx.r3.s64 = ctx.r9.s64 + 22380;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1618
	ctx.lr = 0x820F742C;
	sub_822E1618(ctx, base);
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,-19408(r7)
	PPC_STORE_U32(ctx.r7.u32 + -19408, ctx.r3.u32);
	// addi r8,r6,22352
	ctx.r8.s64 = ctx.r6.s64 + 22352;
	// addi r3,r5,22340
	ctx.r3.s64 = ctx.r5.s64 + 22340;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x820F7458;
	sub_822E1618(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,22304
	ctx.r6.s64 = ctx.r11.s64 + 22304;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-29924(r4)
	PPC_STORE_U32(ctx.r4.u32 + -29924, ctx.r3.u32);
	// addi r3,r10,22292
	ctx.r3.s64 = ctx.r10.s64 + 22292;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F747C;
	sub_822E15D0(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// addi r8,r8,22200
	ctx.r8.s64 = ctx.r8.s64 + 22200;
	// stw r3,-16988(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16988, ctx.r3.u32);
	// addi r3,r7,22272
	ctx.r3.s64 = ctx.r7.s64 + 22272;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F74A8;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r8,r5,22148
	ctx.r8.s64 = ctx.r5.s64 + 22148;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,6952(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6952, ctx.r3.u32);
	// addi r3,r4,22120
	ctx.r3.s64 = ctx.r4.s64 + 22120;
	// li r6,1664
	ctx.r6.s64 = 1664;
	// li r5,130
	ctx.r5.s64 = 130;
	// li r4,480
	ctx.r4.s64 = 480;
	// bl 0x822e1618
	ctx.lr = 0x820F74D4;
	sub_822E1618(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,22076
	ctx.r8.s64 = ctx.r10.s64 + 22076;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-30016(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30016, ctx.r3.u32);
	// addi r3,r9,22048
	ctx.r3.s64 = ctx.r9.s64 + 22048;
	// li r6,1664
	ctx.r6.s64 = 1664;
	// li r5,130
	ctx.r5.s64 = 130;
	// li r4,600
	ctx.r4.s64 = 600;
	// bl 0x822e1618
	ctx.lr = 0x820F7500;
	sub_822E1618(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r8,r6,21996
	ctx.r8.s64 = ctx.r6.s64 + 21996;
	// li r6,1664
	ctx.r6.s64 = 1664;
	// stw r3,-29928(r7)
	PPC_STORE_U32(ctx.r7.u32 + -29928, ctx.r3.u32);
	// addi r3,r5,21976
	ctx.r3.s64 = ctx.r5.s64 + 21976;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,130
	ctx.r5.s64 = 130;
	// li r4,500
	ctx.r4.s64 = 500;
	// bl 0x822e1618
	ctx.lr = 0x820F752C;
	sub_822E1618(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,21920
	ctx.r8.s64 = ctx.r11.s64 + 21920;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-30232(r4)
	PPC_STORE_U32(ctx.r4.u32 + -30232, ctx.r3.u32);
	// addi r3,r10,21896
	ctx.r3.s64 = ctx.r10.s64 + 21896;
	// li r6,1664
	ctx.r6.s64 = 1664;
	// li r5,130
	ctx.r5.s64 = 130;
	// li r4,390
	ctx.r4.s64 = 390;
	// bl 0x822e1618
	ctx.lr = 0x820F7558;
	sub_822E1618(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,21876
	ctx.r6.s64 = ctx.r8.s64 + 21876;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-29988(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29988, ctx.r3.u32);
	// addi r3,r7,21864
	ctx.r3.s64 = ctx.r7.s64 + 21864;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F757C;
	sub_822E15D0(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,21804
	ctx.r6.s64 = ctx.r4.s64 + 21804;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-29952(r5)
	PPC_STORE_U32(ctx.r5.u32 + -29952, ctx.r3.u32);
	// addi r3,r11,21788
	ctx.r3.s64 = ctx.r11.s64 + 21788;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F75A0;
	sub_822E15D0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r6,2000
	ctx.r6.s64 = 2000;
	// addi r8,r9,21696
	ctx.r8.s64 = ctx.r9.s64 + 21696;
	// stw r3,-29980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29980, ctx.r3.u32);
	// addi r3,r7,21768
	ctx.r3.s64 = ctx.r7.s64 + 21768;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,330
	ctx.r4.s64 = 330;
	// bl 0x822e1618
	ctx.lr = 0x820F75CC;
	sub_822E1618(ctx, base);
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r5,21640
	ctx.r8.s64 = ctx.r5.s64 + 21640;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,6228(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6228, ctx.r3.u32);
	// addi r3,r4,21608
	ctx.r3.s64 = ctx.r4.s64 + 21608;
	// bl 0x822e1660
	ctx.lr = 0x820F75F8;
	sub_822E1660(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,-30044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30044, ctx.r3.u32);
	// addi r3,r7,21572
	ctx.r3.s64 = ctx.r7.s64 + 21572;
	// addi r8,r9,21512
	ctx.r8.s64 = ctx.r9.s64 + 21512;
	// lfs f2,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f2.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F7628;
	sub_822E1660(ctx, base);
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r5,21440
	ctx.r8.s64 = ctx.r5.s64 + 21440;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,21492(r6)
	PPC_STORE_U32(ctx.r6.u32 + 21492, ctx.r3.u32);
	// addi r3,r4,21412
	ctx.r3.s64 = ctx.r4.s64 + 21412;
	// bl 0x822e1660
	ctx.lr = 0x820F7654;
	sub_822E1660(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,-19432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19432, ctx.r3.u32);
	// addi r3,r7,21388
	ctx.r3.s64 = ctx.r7.s64 + 21388;
	// lfs f21,6056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6056);
	ctx.f21.f64 = double(temp.f32);
	// addi r8,r9,21332
	ctx.r8.s64 = ctx.r9.s64 + 21332;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F7688;
	sub_822E1660(ctx, base);
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r8,r5,21288
	ctx.r8.s64 = ctx.r5.s64 + 21288;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,6260(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6260, ctx.r3.u32);
	// addi r3,r4,21264
	ctx.r3.s64 = ctx.r4.s64 + 21264;
	// bl 0x822e1660
	ctx.lr = 0x820F76B4;
	sub_822E1660(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,-30184(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30184, ctx.r3.u32);
	// addi r6,r10,21152
	ctx.r6.s64 = ctx.r10.s64 + 21152;
	// addi r3,r9,21124
	ctx.r3.s64 = ctx.r9.s64 + 21124;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F76D8;
	sub_822E15D0(ctx, base);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,-19448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19448, ctx.r3.u32);
	// addi r8,r6,21056
	ctx.r8.s64 = ctx.r6.s64 + 21056;
	// lfs f1,6028(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6028);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,21036
	ctx.r3.s64 = ctx.r5.s64 + 21036;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F7708;
	sub_822E1660(ctx, base);
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-19436(r4)
	PPC_STORE_U32(ctx.r4.u32 + -19436, ctx.r3.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r3,20968
	ctx.r6.s64 = ctx.r3.s64 + 20968;
	// addi r3,r11,21012
	ctx.r3.s64 = ctx.r11.s64 + 21012;
	// bl 0x822e15d0
	ctx.lr = 0x820F772C;
	sub_822E15D0(ctx, base);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// addi r8,r9,20912
	ctx.r8.s64 = ctx.r9.s64 + 20912;
	// stw r3,6236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6236, ctx.r3.u32);
	// addi r3,r7,20952
	ctx.r3.s64 = ctx.r7.s64 + 20952;
	// li r7,68
	ctx.r7.s64 = 68;
	// bl 0x822e1660
	ctx.lr = 0x820F7758;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,-30040(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30040, ctx.r3.u32);
	// addi r8,r11,20880
	ctx.r8.s64 = ctx.r11.s64 + 20880;
	// lfs f27,17672(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 17672);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r10,20860
	ctx.r3.s64 = ctx.r10.s64 + 20860;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,6044(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6044);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F7790;
	sub_822E1660(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// addi r8,r8,20800
	ctx.r8.s64 = ctx.r8.s64 + 20800;
	// stw r3,-17084(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17084, ctx.r3.u32);
	// addi r3,r7,20836
	ctx.r3.s64 = ctx.r7.s64 + 20836;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F77BC;
	sub_822E1660(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,20720
	ctx.r6.s64 = ctx.r4.s64 + 20720;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-30012(r5)
	PPC_STORE_U32(ctx.r5.u32 + -30012, ctx.r3.u32);
	// addi r3,r11,20696
	ctx.r3.s64 = ctx.r11.s64 + 20696;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x822e15d0
	ctx.lr = 0x820F77E0;
	sub_822E15D0(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r8,20576
	ctx.r8.s64 = ctx.r8.s64 + 20576;
	// stw r3,-19412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19412, ctx.r3.u32);
	// addi r3,r7,20564
	ctx.r3.s64 = ctx.r7.s64 + 20564;
	// li r7,68
	ctx.r7.s64 = 68;
	// lfs f3,20560(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20560);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F7810;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// stw r3,-30004(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30004, ctx.r3.u32);
	// bl 0x82110a70
	ctx.lr = 0x820F781C;
	sub_82110A70(ctx, base);
	// bl 0x8234d280
	ctx.lr = 0x820F7820;
	sub_8234D280(ctx, base);
	// bl 0x8217e588
	ctx.lr = 0x820F7824;
	sub_8217E588(ctx, base);
	// bl 0x8211ecd0
	ctx.lr = 0x820F7828;
	sub_8211ECD0(ctx, base);
	// bl 0x820dd560
	ctx.lr = 0x820F782C;
	sub_820DD560(ctx, base);
	// bl 0x820da808
	ctx.lr = 0x820F7830;
	sub_820DA808(ctx, base);
	// bl 0x8210d7f0
	ctx.lr = 0x820F7834;
	sub_8210D7F0(ctx, base);
	// bl 0x821137c0
	ctx.lr = 0x820F7838;
	sub_821137C0(ctx, base);
	// bl 0x820f1ff8
	ctx.lr = 0x820F783C;
	sub_820F1FF8(ctx, base);
	// bl 0x8210f180
	ctx.lr = 0x820F7840;
	sub_8210F180(ctx, base);
	// bl 0x820f53e8
	ctx.lr = 0x820F7844;
	sub_820F53E8(ctx, base);
	// bl 0x82114fd8
	ctx.lr = 0x820F7848;
	sub_82114FD8(ctx, base);
	// bl 0x8231da30
	ctx.lr = 0x820F784C;
	sub_8231DA30(ctx, base);
	// bl 0x82103a78
	ctx.lr = 0x820F7850;
	sub_82103A78(ctx, base);
	// bl 0x8235e088
	ctx.lr = 0x820F7854;
	sub_8235E088(ctx, base);
	// bl 0x820fbe80
	ctx.lr = 0x820F7858;
	sub_820FBE80(ctx, base);
	// bl 0x820d5578
	ctx.lr = 0x820F785C;
	sub_820D5578(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r8,r5,20524
	ctx.r8.s64 = ctx.r5.s64 + 20524;
	// addi r3,r4,20496
	ctx.r3.s64 = ctx.r4.s64 + 20496;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1800
	ctx.r4.s64 = 1800;
	// bl 0x822e1618
	ctx.lr = 0x820F7880;
	sub_822E1618(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,20456
	ctx.r8.s64 = ctx.r10.s64 + 20456;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,21484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21484, ctx.r3.u32);
	// addi r3,r9,20424
	ctx.r3.s64 = ctx.r9.s64 + 20424;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,600
	ctx.r4.s64 = 600;
	// bl 0x822e1618
	ctx.lr = 0x820F78AC;
	sub_822E1618(ctx, base);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-15696(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15696, ctx.r3.u32);
	// addi r8,r5,20344
	ctx.r8.s64 = ctx.r5.s64 + 20344;
	// lfs f27,11804(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11804);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r4,20304
	ctx.r3.s64 = ctx.r4.s64 + 20304;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F78E0;
	sub_822E1660(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,-30272(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30272, ctx.r3.u32);
	// addi r3,r7,20276
	ctx.r3.s64 = ctx.r7.s64 + 20276;
	// lfs f21,6688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6688);
	ctx.f21.f64 = double(temp.f32);
	// addi r8,r9,20212
	ctx.r8.s64 = ctx.r9.s64 + 20212;
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F7914;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r4,20144
	ctx.r8.s64 = ctx.r4.s64 + 20144;
	// stw r3,18808(r6)
	PPC_STORE_U32(ctx.r6.u32 + 18808, ctx.r3.u32);
	// addi r3,r11,20108
	ctx.r3.s64 = ctx.r11.s64 + 20108;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,20208(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20208);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F7944;
	sub_822E1660(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r3,-19396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19396, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r7,20076
	ctx.r3.s64 = ctx.r7.s64 + 20076;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// addi r8,r9,20000
	ctx.r8.s64 = ctx.r9.s64 + 20000;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820F7970;
	sub_822E1660(ctx, base);
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// addi r8,r5,19928
	ctx.r8.s64 = ctx.r5.s64 + 19928;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,6244(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6244, ctx.r3.u32);
	// addi r3,r4,19896
	ctx.r3.s64 = ctx.r4.s64 + 19896;
	// bl 0x822e1660
	ctx.lr = 0x820F799C;
	sub_822E1660(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r10,19844
	ctx.r6.s64 = ctx.r10.s64 + 19844;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,-1240(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1240, ctx.r3.u32);
	// addi r3,r9,19828
	ctx.r3.s64 = ctx.r9.s64 + 19828;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F79C0;
	sub_822E15D0(ctx, base);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r7,19764
	ctx.r6.s64 = ctx.r7.s64 + 19764;
	// stw r3,-17044(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17044, ctx.r3.u32);
	// addi r3,r5,19816
	ctx.r3.s64 = ctx.r5.s64 + 19816;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e15d0
	ctx.lr = 0x820F79E4;
	sub_822E15D0(ctx, base);
	// lis r4,-32188
	ctx.r4.s64 = -2109472768;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,19696
	ctx.r6.s64 = ctx.r11.s64 + 19696;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,21488(r4)
	PPC_STORE_U32(ctx.r4.u32 + 21488, ctx.r3.u32);
	// addi r3,r10,19672
	ctx.r3.s64 = ctx.r10.s64 + 19672;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820F7A08;
	sub_822E15D0(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,19628
	ctx.r6.s64 = ctx.r8.s64 + 19628;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-17032(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17032, ctx.r3.u32);
	// addi r3,r7,19600
	ctx.r3.s64 = ctx.r7.s64 + 19600;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820F7A2C;
	sub_822E15D0(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f23
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f23.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// addi r8,r5,19560
	ctx.r8.s64 = ctx.r5.s64 + 19560;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-30088(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30088, ctx.r3.u32);
	// addi r3,r4,19536
	ctx.r3.s64 = ctx.r4.s64 + 19536;
	// bl 0x822e1660
	ctx.lr = 0x820F7A58;
	sub_822E1660(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f23
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f23.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// addi r8,r10,19480
	ctx.r8.s64 = ctx.r10.s64 + 19480;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-17020(r11)
	PPC_STORE_U32(ctx.r11.u32 + -17020, ctx.r3.u32);
	// addi r3,r9,19448
	ctx.r3.s64 = ctx.r9.s64 + 19448;
	// bl 0x822e1660
	ctx.lr = 0x820F7A84;
	sub_822E1660(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f29,19444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19444);
	ctx.f29.f64 = double(temp.f32);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r31,r5,-28736
	ctx.r31.s64 = ctx.r5.s64 + -28736;
	// lfs f28,7036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7036);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r4,19420
	ctx.r3.s64 = ctx.r4.s64 + 19420;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-17072(r6)
	PPC_STORE_U32(ctx.r6.u32 + -17072, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x822e1790
	ctx.lr = 0x820F7AD4;
	sub_822E1790(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// addi r3,r8,19392
	ctx.r3.s64 = ctx.r8.s64 + 19392;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,-30008(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30008, ctx.r11.u32);
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x822e1790
	ctx.lr = 0x820F7B0C;
	sub_822E1790(ctx, base);
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// addi r3,r6,19368
	ctx.r3.s64 = ctx.r6.s64 + 19368;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r11,-15684(r7)
	PPC_STORE_U32(ctx.r7.u32 + -15684, ctx.r11.u32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822e1790
	ctx.lr = 0x820F7B44;
	sub_822E1790(ctx, base);
	// lis r5,-32188
	ctx.r5.s64 = -2109472768;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// addi r3,r4,19340
	ctx.r3.s64 = ctx.r4.s64 + 19340;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-1232(r5)
	PPC_STORE_U32(ctx.r5.u32 + -1232, ctx.r11.u32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x822e1790
	ctx.lr = 0x820F7B7C;
	sub_822E1790(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// fmr f3,f23
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f23.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// addi r31,r10,19300
	ctx.r31.s64 = ctx.r10.s64 + 19300;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,21472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21472, ctx.r3.u32);
	// addi r3,r9,19280
	ctx.r3.s64 = ctx.r9.s64 + 19280;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x822e1660
	ctx.lr = 0x820F7BAC;
	sub_822E1660(ctx, base);
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f23
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f23.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// addi r3,r7,19252
	ctx.r3.s64 = ctx.r7.s64 + 19252;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r11,6208(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6208, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F7BD8;
	sub_822E1660(ctx, base);
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// stw r3,-19440(r5)
	PPC_STORE_U32(ctx.r5.u32 + -19440, ctx.r3.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de04c
	ctx.lr = 0x820F7BEC;
	__restfpr_18(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F6120) {
	__imp__sub_820F6120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bge cr6,0x820f7c24
	if (!ctx.cr6.lt) goto loc_820F7C24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F7C24:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,22912
	ctx.r6.s64 = ctx.r11.s64 + 22912;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F7C00) {
	__imp__sub_820F7C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7C48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F7C48) {
	__imp__sub_820F7C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F7C4C) {
	__imp__sub_820F7C4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7C50) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,2048
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2048, ctx.xer);
	// bge cr6,0x820f7ca4
	if (!ctx.cr6.lt) goto loc_820F7CA4;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x822da650
	ctx.lr = 0x820F7C8C;
	sub_822DA650(ctx, base);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// b 0x820f7ce8
	goto loc_820F7CE8;
loc_820F7CA4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r10,r10,-15680
	ctx.r10.s64 = ctx.r10.s64 + -15680;
	// mullw r11,r3,r9
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r3,r3,19960
	ctx.r3.s64 = ctx.r3.s64 + 19960;
	// bl 0x822d7a78
	ctx.lr = 0x820F7CCC;
	sub_822D7A78(ctx, base);
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// addi r8,r8,19996
	ctx.r8.s64 = ctx.r8.s64 + 19996;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_820F7CE8:
	// stfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F7C50) {
	__imp__sub_820F7C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F7D04) {
	__imp__sub_820F7D04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// mulli r10,r3,404
	ctx.r10.s64 = ctx.r3.s64 * 404;
	// addi r11,r8,-5696
	ctx.r11.s64 = ctx.r8.s64 + -5696;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// b 0x822da650
	sub_822DA650(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F7D08) {
	__imp__sub_820F7D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// mulli r10,r3,404
	ctx.r10.s64 = ctx.r3.s64 * 404;
	// addi r11,r8,-5696
	ctx.r11.s64 = ctx.r8.s64 + -5696;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// b 0x822da650
	sub_822DA650(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F7D40) {
	__imp__sub_820F7D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7D78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// bne cr6,0x820f7d88
	if (!ctx.cr6.eq) goto loc_820F7D88;
loc_820F7D80:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820F7D88:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// ori r8,r10,6634
	ctx.r8.u64 = ctx.r10.u64 | 6634;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820f7d80
	if (ctx.cr6.eq) goto loc_820F7D80;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r3,404
	ctx.r10.s64 = ctx.r3.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// addi r9,r11,220
	ctx.r9.s64 = ctx.r11.s64 + 220;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// rlwinm r3,r7,7,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F7D78) {
	__imp__sub_820F7D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F7DC4) {
	__imp__sub_820F7DC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F7DC8) {
	__imp__sub_820F7DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F7DEC) {
	__imp__sub_820F7DEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// addi r6,r10,6968
	ctx.r6.s64 = ctx.r10.s64 + 6968;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r7,9240
	ctx.r9.s64 = ctx.r7.s64 + 9240;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// addi r5,r9,24
	ctx.r5.s64 = ctx.r9.s64 + 24;
	// stw r3,11308(r6)
	PPC_STORE_U32(ctx.r6.u32 + 11308, ctx.r3.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lbz r31,29088(r8)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + 29088);
	// lis r30,1
	ctx.r30.s64 = 65536;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r4,-32312(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32312);
	// ori r8,r9,61924
	ctx.r8.u64 = ctx.r9.u64 | 61924;
	// ori r9,r6,22912
	ctx.r9.u64 = ctx.r6.u64 | 22912;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r10,r30,22916
	ctx.r10.u64 = ctx.r30.u64 | 22916;
	// addi r6,r11,-15680
	ctx.r6.s64 = ctx.r11.s64 + -15680;
loc_820F7E4C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820f7e6c
	if (!ctx.cr6.eq) goto loc_820F7E6C;
	// subfc r11,r4,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r4.u32;
	ctx.r11.s64 = ctx.r7.s64 - ctx.r4.s64;
	// eqv r30,r4,r7
	ctx.r30.u64 = ~(ctx.r4.u64 ^ ctx.r7.u64);
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x820f7e7c
	goto loc_820F7E7C;
loc_820F7E6C:
	// lwz r11,-8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_820F7E7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7eac
	if (ctx.cr6.eq) goto loc_820F7EAC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820f7e98
	if (!ctx.cr6.eq) goto loc_820F7E98;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x820f7e9c
	goto loc_820F7E9C;
loc_820F7E98:
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
loc_820F7E9C:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stwx r3,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
loc_820F7EAC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r5,r5,9780
	ctx.r5.s64 = ctx.r5.s64 + 9780;
	// bdnz 0x820f7e4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F7E4C;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F7DF0) {
	__imp__sub_820F7DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F7EC4) {
	__imp__sub_820F7EC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r11,r11,-15680
	ctx.r11.s64 = ctx.r11.s64 + -15680;
	// ori r9,r10,61924
	ctx.r9.u64 = ctx.r10.u64 | 61924;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// mullw r7,r3,r9
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// stwx r4,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F7EC8) {
	__imp__sub_820F7EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,-30232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30232);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82123ab0
	sub_82123AB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F7EE8) {
	__imp__sub_820F7EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,-29988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29988);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82123ab0
	sub_82123AB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F7F08) {
	__imp__sub_820F7F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,6968
	ctx.r31.s64 = ctx.r11.s64 + 6968;
	// addi r3,r31,11772
	ctx.r3.s64 = ctx.r31.s64 + 11772;
	// bl 0x821a93d8
	ctx.lr = 0x820F7F50;
	sub_821A93D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,11772
	ctx.r3.s64 = ctx.r31.s64 + 11772;
	// bl 0x82120098
	ctx.lr = 0x820F7F5C;
	sub_82120098(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105d70
	ctx.lr = 0x820F7F64;
	sub_82105D70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105dd8
	ctx.lr = 0x820F7F6C;
	sub_82105DD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105e80
	ctx.lr = 0x820F7F74;
	sub_82105E80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105ee0
	ctx.lr = 0x820F7F7C;
	sub_82105EE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105f50
	ctx.lr = 0x820F7F84;
	sub_82105F50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F7F28) {
	__imp__sub_820F7F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F7F9C) {
	__imp__sub_820F7F9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F7FA0) {
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
	// li r3,1204
	ctx.r3.s64 = 1204;
	// bl 0x821201a0
	ctx.lr = 0x820F7FB8;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x820f8008
	if (!ctx.cr6.eq) goto loc_820F8008;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,31068
	ctx.r3.s64 = ctx.r11.s64 + 31068;
	// bl 0x8238bd98
	ctx.lr = 0x820F7FD4;
	sub_8238BD98(ctx, base);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-22896
	ctx.r31.s64 = ctx.r10.s64 + -22896;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r9,31052
	ctx.r3.s64 = ctx.r9.s64 + 31052;
	// stw r11,16128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16128, ctx.r11.u32);
	// bl 0x8238bd98
	ctx.lr = 0x820F7FF4;
	sub_8238BD98(ctx, base);
	// stw r3,16132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16132, ctx.r3.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r8,31036
	ctx.r3.s64 = ctx.r8.s64 + 31036;
	// bl 0x82393fe8
	ctx.lr = 0x820F8004;
	sub_82393FE8(ctx, base);
	// stw r3,16124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16124, ctx.r3.u32);
loc_820F8008:
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

PPC_WEAK_FUNC(sub_820F7FA0) {
	__imp__sub_820F7FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F801C) {
	__imp__sub_820F801C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820F8028;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820f5368
	ctx.lr = 0x820F8038;
	sub_820F5368(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,32244
	ctx.r3.s64 = ctx.r11.s64 + 32244;
	// bl 0x8235dbe0
	ctx.lr = 0x820F8044;
	sub_8235DBE0(ctx, base);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-22896
	ctx.r31.s64 = ctx.r10.s64 + -22896;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r10,32224
	ctx.r3.s64 = ctx.r10.s64 + 32224;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8238bd98
	ctx.lr = 0x820F8064;
	sub_8238BD98(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r9,32212
	ctx.r3.s64 = ctx.r9.s64 + 32212;
	// bl 0x8238bd98
	ctx.lr = 0x820F8078;
	sub_8238BD98(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r8,32196
	ctx.r3.s64 = ctx.r8.s64 + 32196;
	// bl 0x8238bd98
	ctx.lr = 0x820F808C;
	sub_8238BD98(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r7,32184
	ctx.r3.s64 = ctx.r7.s64 + 32184;
	// bl 0x8238bd98
	ctx.lr = 0x820F80A0;
	sub_8238BD98(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r6,32168
	ctx.r3.s64 = ctx.r6.s64 + 32168;
	// bl 0x8238bd98
	ctx.lr = 0x820F80B4;
	sub_8238BD98(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r5,32152
	ctx.r3.s64 = ctx.r5.s64 + 32152;
	// bl 0x8238bd98
	ctx.lr = 0x820F80C8;
	sub_8238BD98(ctx, base);
	// stw r3,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,32136
	ctx.r3.s64 = ctx.r11.s64 + 32136;
	// bl 0x8238bd98
	ctx.lr = 0x820F80DC;
	sub_8238BD98(ctx, base);
	// stw r3,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r10,32120
	ctx.r3.s64 = ctx.r10.s64 + 32120;
	// bl 0x8238bd98
	ctx.lr = 0x820F80F0;
	sub_8238BD98(ctx, base);
	// stw r3,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r9,32104
	ctx.r3.s64 = ctx.r9.s64 + 32104;
	// bl 0x8238bd98
	ctx.lr = 0x820F8104;
	sub_8238BD98(ctx, base);
	// stw r3,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r3.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r8,32092
	ctx.r3.s64 = ctx.r8.s64 + 32092;
	// bl 0x8238bd98
	ctx.lr = 0x820F8118;
	sub_8238BD98(ctx, base);
	// stw r3,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r7,32076
	ctx.r3.s64 = ctx.r7.s64 + 32076;
	// bl 0x8238bd98
	ctx.lr = 0x820F812C;
	sub_8238BD98(ctx, base);
	// stw r3,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r6,32056
	ctx.r3.s64 = ctx.r6.s64 + 32056;
	// bl 0x8238bd98
	ctx.lr = 0x820F8140;
	sub_8238BD98(ctx, base);
	// stw r3,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r5,32028
	ctx.r3.s64 = ctx.r5.s64 + 32028;
	// bl 0x8238bd98
	ctx.lr = 0x820F8154;
	sub_8238BD98(ctx, base);
	// stw r3,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,32012
	ctx.r3.s64 = ctx.r11.s64 + 32012;
	// bl 0x8238bd98
	ctx.lr = 0x820F8168;
	sub_8238BD98(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r10,31992
	ctx.r3.s64 = ctx.r10.s64 + 31992;
	// bl 0x8238bd98
	ctx.lr = 0x820F817C;
	sub_8238BD98(ctx, base);
	// stw r3,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r9,31980
	ctx.r3.s64 = ctx.r9.s64 + 31980;
	// bl 0x8238bd98
	ctx.lr = 0x820F8190;
	sub_8238BD98(ctx, base);
	// stw r3,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r3.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r8,31960
	ctx.r3.s64 = ctx.r8.s64 + 31960;
	// bl 0x8238bd98
	ctx.lr = 0x820F81A4;
	sub_8238BD98(ctx, base);
	// stw r3,16004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16004, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r7,31936
	ctx.r3.s64 = ctx.r7.s64 + 31936;
	// bl 0x8238bd98
	ctx.lr = 0x820F81B8;
	sub_8238BD98(ctx, base);
	// stw r3,16008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16008, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r6,31916
	ctx.r3.s64 = ctx.r6.s64 + 31916;
	// bl 0x8238bd98
	ctx.lr = 0x820F81CC;
	sub_8238BD98(ctx, base);
	// stw r3,16012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16012, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r5,31896
	ctx.r3.s64 = ctx.r5.s64 + 31896;
	// bl 0x8238bd98
	ctx.lr = 0x820F81E0;
	sub_8238BD98(ctx, base);
	// stw r3,16016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16016, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,31868
	ctx.r3.s64 = ctx.r11.s64 + 31868;
	// bl 0x8238bd98
	ctx.lr = 0x820F81F4;
	sub_8238BD98(ctx, base);
	// stw r3,16020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16020, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r10,31840
	ctx.r3.s64 = ctx.r10.s64 + 31840;
	// bl 0x8238bd98
	ctx.lr = 0x820F8208;
	sub_8238BD98(ctx, base);
	// stw r3,16024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16024, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r9,31816
	ctx.r3.s64 = ctx.r9.s64 + 31816;
	// bl 0x8238bd98
	ctx.lr = 0x820F821C;
	sub_8238BD98(ctx, base);
	// stw r3,16028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16028, ctx.r3.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r8,31788
	ctx.r3.s64 = ctx.r8.s64 + 31788;
	// bl 0x8238bd98
	ctx.lr = 0x820F8230;
	sub_8238BD98(ctx, base);
	// stw r3,16032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16032, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r7,31768
	ctx.r3.s64 = ctx.r7.s64 + 31768;
	// bl 0x8238bd98
	ctx.lr = 0x820F8244;
	sub_8238BD98(ctx, base);
	// stw r3,16036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16036, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r6,31744
	ctx.r3.s64 = ctx.r6.s64 + 31744;
	// bl 0x8238bd98
	ctx.lr = 0x820F8258;
	sub_8238BD98(ctx, base);
	// stw r3,16040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16040, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r5,31728
	ctx.r3.s64 = ctx.r5.s64 + 31728;
	// bl 0x8238bd98
	ctx.lr = 0x820F826C;
	sub_8238BD98(ctx, base);
	// stw r3,16044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16044, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,31708
	ctx.r3.s64 = ctx.r11.s64 + 31708;
	// bl 0x8238bd98
	ctx.lr = 0x820F8280;
	sub_8238BD98(ctx, base);
	// stw r3,16048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16048, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r10,31684
	ctx.r3.s64 = ctx.r10.s64 + 31684;
	// bl 0x8238bd98
	ctx.lr = 0x820F8294;
	sub_8238BD98(ctx, base);
	// stw r3,16052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16052, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r9,31664
	ctx.r3.s64 = ctx.r9.s64 + 31664;
	// bl 0x8238bd98
	ctx.lr = 0x820F82A8;
	sub_8238BD98(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,16056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16056, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r8,31632
	ctx.r3.s64 = ctx.r8.s64 + 31632;
	// bl 0x8238bd98
	ctx.lr = 0x820F82BC;
	sub_8238BD98(ctx, base);
	// stw r3,16060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16060, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r7,31612
	ctx.r3.s64 = ctx.r7.s64 + 31612;
	// bl 0x8238bd98
	ctx.lr = 0x820F82D0;
	sub_8238BD98(ctx, base);
	// stw r3,16108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16108, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r6,31592
	ctx.r3.s64 = ctx.r6.s64 + 31592;
	// bl 0x8238bd98
	ctx.lr = 0x820F82E4;
	sub_8238BD98(ctx, base);
	// stw r3,16112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16112, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r5,31576
	ctx.r3.s64 = ctx.r5.s64 + 31576;
	// bl 0x8238bd98
	ctx.lr = 0x820F82F8;
	sub_8238BD98(ctx, base);
	// stw r3,16116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16116, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,31560
	ctx.r3.s64 = ctx.r11.s64 + 31560;
	// bl 0x8238bd98
	ctx.lr = 0x820F830C;
	sub_8238BD98(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r26,-32190
	ctx.r26.s64 = -2109603840;
	// stw r3,16120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16120, ctx.r3.u32);
	// addi r27,r11,9240
	ctx.r27.s64 = ctx.r11.s64 + 9240;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r27,24
	ctx.r30.s64 = ctx.r27.s64 + 24;
	// lis r24,-32166
	ctx.r24.s64 = -2108030976;
	// lwz r10,-32312(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
loc_820F832C:
	// lbz r9,29088(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f8350
	if (!ctx.cr6.eq) goto loc_820F8350;
	// subfc r11,r10,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	// eqv r8,r10,r29
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r29.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x820f8360
	goto loc_820F8360;
loc_820F8350:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_820F8360:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8384
	if (ctx.cr6.eq) goto loc_820F8384;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x820f837c
	if (ctx.cr6.eq) goto loc_820F837C;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
loc_820F837C:
	// bl 0x82117c38
	ctx.lr = 0x820F8380;
	sub_82117C38(ctx, base);
	// lwz r10,-32312(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
loc_820F8384:
	// addi r30,r30,9780
	ctx.r30.s64 = ctx.r30.s64 + 9780;
	// addi r11,r27,19584
	ctx.r11.s64 = ctx.r27.s64 + 19584;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f832c
	if (ctx.cr6.lt) goto loc_820F832C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_820F839C:
	// addi r3,r30,1208
	ctx.r3.s64 = ctx.r30.s64 + 1208;
	// bl 0x821201a0
	ctx.lr = 0x820F83A4;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f83d0
	if (ctx.cr6.eq) goto loc_820F83D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820f5368
	ctx.lr = 0x820F83BC;
	sub_820F5368(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82393fe8
	ctx.lr = 0x820F83C4;
	sub_82393FE8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,512
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 512, ctx.xer);
	// blt cr6,0x820f839c
	if (ctx.cr6.lt) goto loc_820F839C;
loc_820F83D0:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,16064
	ctx.r11.s64 = ctx.r31.s64 + 16064;
	// stw r10,16064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16064, ctx.r10.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r31,16172
	ctx.r30.s64 = ctx.r31.s64 + 16172;
loc_820F83E4:
	// addi r3,r29,2264
	ctx.r3.s64 = ctx.r29.s64 + 2264;
	// bl 0x821201a0
	ctx.lr = 0x820F83EC;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8414
	if (ctx.cr6.eq) goto loc_820F8414;
	// bl 0x82198070
	ctx.lr = 0x820F83FC;
	sub_82198070(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r31,17192
	ctx.r11.s64 = ctx.r31.s64 + 17192;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f83e4
	if (ctx.cr6.lt) goto loc_820F83E4;
loc_820F8414:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r28,r11,31508
	ctx.r28.s64 = ctx.r11.s64 + 31508;
loc_820F8420:
	// addi r3,r29,2776
	ctx.r3.s64 = ctx.r29.s64 + 2776;
	// bl 0x821201a0
	ctx.lr = 0x820F8428;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f846c
	if (ctx.cr6.eq) goto loc_820F846C;
	// bl 0x82321740
	ctx.lr = 0x820F843C;
	sub_82321740(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f8454
	if (!ctx.cr6.eq) goto loc_820F8454;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x820F8454;
	sub_822830E8(ctx, base);
loc_820F8454:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82321c38
	ctx.lr = 0x820F845C;
	sub_82321C38(ctx, base);
	// bl 0x82321888
	ctx.lr = 0x820F8460;
	sub_82321888(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x820f8420
	if (ctx.cr6.lt) goto loc_820F8420;
loc_820F846C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,31496
	ctx.r3.s64 = ctx.r11.s64 + 31496;
	// bl 0x82321740
	ctx.lr = 0x820F8478;
	sub_82321740(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f8490
	if (!ctx.cr6.eq) goto loc_820F8490;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,31448
	ctx.r4.s64 = ctx.r11.s64 + 31448;
	// bl 0x822830e8
	ctx.lr = 0x820F8490;
	sub_822830E8(ctx, base);
loc_820F8490:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r11,-32312(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r27,24
	ctx.r30.s64 = ctx.r27.s64 + 24;
	// addi r28,r10,-16984
	ctx.r28.s64 = ctx.r10.s64 + -16984;
loc_820F84A4:
	// lbz r9,29088(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f84c8
	if (!ctx.cr6.eq) goto loc_820F84C8;
	// subfc r10,r11,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// eqv r8,r11,r29
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r29.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// b 0x820f84d8
	goto loc_820F84D8;
loc_820F84C8:
	// lwz r10,-8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_820F84D8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f8510
	if (ctx.cr6.eq) goto loc_820F8510;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x820f84f4
	if (ctx.cr6.eq) goto loc_820F84F4;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
loc_820F84F4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r28,24
	ctx.r9.s64 = ctx.r28.s64 + 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82321888
	ctx.lr = 0x820F850C;
	sub_82321888(ctx, base);
	// lwz r11,-32312(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
loc_820F8510:
	// addi r30,r30,9780
	ctx.r30.s64 = ctx.r30.s64 + 9780;
	// addi r10,r27,19584
	ctx.r10.s64 = ctx.r27.s64 + 19584;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820f84a4
	if (ctx.cr6.lt) goto loc_820F84A4;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820f859c
	if (!ctx.cr6.gt) goto loc_820F859C;
	// addi r29,r27,24
	ctx.r29.s64 = ctx.r27.s64 + 24;
loc_820F8534:
	// lbz r9,29088(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f8558
	if (!ctx.cr6.eq) goto loc_820F8558;
	// subfc r10,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r8,r11,r30
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// b 0x820f8568
	goto loc_820F8568;
loc_820F8558:
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_820F8568:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f858c
	if (ctx.cr6.eq) goto loc_820F858C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x820f8584
	if (ctx.cr6.eq) goto loc_820F8584;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
loc_820F8584:
	// bl 0x82103f80
	ctx.lr = 0x820F8588;
	sub_82103F80(ctx, base);
	// lwz r11,-32312(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
loc_820F858C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,9780
	ctx.r29.s64 = ctx.r29.s64 + 9780;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f8534
	if (ctx.cr6.lt) goto loc_820F8534;
loc_820F859C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820eb988
	ctx.lr = 0x820F85A4;
	sub_820EB988(ctx, base);
	// stw r3,16064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16064, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f85c0
	if (!ctx.cr6.eq) goto loc_820F85C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,31376
	ctx.r4.s64 = ctx.r11.s64 + 31376;
	// bl 0x822830e8
	ctx.lr = 0x820F85C0;
	sub_822830E8(ctx, base);
loc_820F85C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,31344
	ctx.r3.s64 = ctx.r11.s64 + 31344;
	// bl 0x82198070
	ctx.lr = 0x820F85CC;
	sub_82198070(ctx, base);
	// stw r3,16068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16068, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,31320
	ctx.r3.s64 = ctx.r10.s64 + 31320;
	// bl 0x82198070
	ctx.lr = 0x820F85DC;
	sub_82198070(ctx, base);
	// stw r3,16072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16072, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r9,31288
	ctx.r3.s64 = ctx.r9.s64 + 31288;
	// bl 0x82198070
	ctx.lr = 0x820F85EC;
	sub_82198070(ctx, base);
	// stw r3,16076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16076, ctx.r3.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r8,31264
	ctx.r3.s64 = ctx.r8.s64 + 31264;
	// bl 0x82198070
	ctx.lr = 0x820F85FC;
	sub_82198070(ctx, base);
	// stw r3,16080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16080, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r3,r7,31244
	ctx.r3.s64 = ctx.r7.s64 + 31244;
	// bl 0x82198070
	ctx.lr = 0x820F860C;
	sub_82198070(ctx, base);
	// stw r3,16084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16084, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r6,31208
	ctx.r3.s64 = ctx.r6.s64 + 31208;
	// bl 0x82198070
	ctx.lr = 0x820F861C;
	sub_82198070(ctx, base);
	// stw r3,16088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16088, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r3,r5,31180
	ctx.r3.s64 = ctx.r5.s64 + 31180;
	// bl 0x82198070
	ctx.lr = 0x820F862C;
	sub_82198070(ctx, base);
	// stw r3,16092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16092, ctx.r3.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r3,r4,31152
	ctx.r3.s64 = ctx.r4.s64 + 31152;
	// bl 0x82198070
	ctx.lr = 0x820F863C;
	sub_82198070(ctx, base);
	// stw r3,16096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16096, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,31124
	ctx.r3.s64 = ctx.r11.s64 + 31124;
	// bl 0x82198070
	ctx.lr = 0x820F864C;
	sub_82198070(ctx, base);
	// stw r3,16100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16100, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,31096
	ctx.r3.s64 = ctx.r10.s64 + 31096;
	// bl 0x82198070
	ctx.lr = 0x820F865C;
	sub_82198070(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1204
	ctx.r3.s64 = 1204;
	// stw r11,16104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16104, ctx.r11.u32);
	// bl 0x821201a0
	ctx.lr = 0x820F866C;
	sub_821201A0(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,49
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 49, ctx.xer);
	// bne cr6,0x820f86b0
	if (!ctx.cr6.eq) goto loc_820F86B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,31068
	ctx.r3.s64 = ctx.r11.s64 + 31068;
	// bl 0x8238bd98
	ctx.lr = 0x820F8688;
	sub_8238BD98(ctx, base);
	// stw r3,16128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16128, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r10,31052
	ctx.r3.s64 = ctx.r10.s64 + 31052;
	// bl 0x8238bd98
	ctx.lr = 0x820F869C;
	sub_8238BD98(ctx, base);
	// stw r3,16132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16132, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r9,31036
	ctx.r3.s64 = ctx.r9.s64 + 31036;
	// bl 0x82393fe8
	ctx.lr = 0x820F86AC;
	sub_82393FE8(ctx, base);
	// stw r3,16124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16124, ctx.r3.u32);
loc_820F86B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F8020) {
	__imp__sub_820F8020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F86B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820F86C0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1167
	ctx.r3.s64 = 1167;
	// bl 0x821201a0
	ctx.lr = 0x820F86D4;
	sub_821201A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,32268
	ctx.r4.s64 = ctx.r11.s64 + 32268;
	// bl 0x822e8678
	ctx.lr = 0x820F86E4;
	sub_822E8678(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r9,r10,6968
	ctx.r9.s64 = ctx.r10.s64 + 6968;
	// lwz r31,11308(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11308);
	// bl 0x823deaf8
	ctx.lr = 0x820F86F4;
	sub_823DEAF8(ctx, base);
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r31.s64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r4,r7,32264
	ctx.r4.s64 = ctx.r7.s64 + 32264;
	// and r31,r6,r8
	ctx.r31.u64 = ctx.r6.u64 & ctx.r8.u64;
	// bl 0x822e8678
	ctx.lr = 0x820F8714;
	sub_822E8678(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x820F8718;
	sub_823DEAF8(ctx, base);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,11804(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r3,32260
	ctx.r4.s64 = ctx.r3.s64 + 32260;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x822e8678
	ctx.lr = 0x820F8748;
	sub_822E8678(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820F874C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f874c
	if (!ctx.cr6.eq) goto loc_820F874C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f878c
	if (!ctx.cr6.eq) goto loc_820F878C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365eb8
	ctx.lr = 0x820F8780;
	sub_82365EB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820F878C:
	// bl 0x821201c0
	ctx.lr = 0x820F8790;
	sub_821201C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fsel f10,f11,f0,f31
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// fsel f1,f12,f13,f10
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// bl 0x82365ca8
	ctx.lr = 0x820F87C4;
	sub_82365CA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F86B8) {
	__imp__sub_820F86B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F87D0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82364ab0
	sub_82364AB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F87D0) {
	__imp__sub_820F87D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F87EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F87EC) {
	__imp__sub_820F87EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F87F0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82364ac8
	sub_82364AC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F87F0) {
	__imp__sub_820F87F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F87F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82364ab8
	sub_82364AB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F87F8) {
	__imp__sub_820F87F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8808) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82364ab0
	sub_82364AB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F8808) {
	__imp__sub_820F8808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,23180
	ctx.r6.s64 = ctx.r11.s64 + 23180;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x82364ab0
	sub_82364AB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F8818) {
	__imp__sub_820F8818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F883C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F883C) {
	__imp__sub_820F883C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,23180
	ctx.r6.s64 = ctx.r11.s64 + 23180;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F8840) {
	__imp__sub_820F8840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F8864) {
	__imp__sub_820F8864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,-15680
	ctx.r11.s64 = ctx.r11.s64 + -15680;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f88a4
	if (ctx.cr6.eq) goto loc_820F88A4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// slw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820f88a4
	if (ctx.cr6.eq) goto loc_820F88A4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// slw r3,r10,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
loc_820F88A4:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r7,r9,61948
	ctx.r7.u64 = ctx.r9.u64 | 61948;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r7,r9,61924
	ctx.r7.u64 = ctx.r9.u64 | 61924;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// slw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r9,61928
	ctx.r8.u64 = ctx.r9.u64 | 61928;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F8868) {
	__imp__sub_820F8868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F88EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F88EC) {
	__imp__sub_820F88EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F88F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820F88F8;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f89d8
	if (ctx.cr6.eq) goto loc_820F89D8;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f89d8
	if (ctx.cr6.eq) goto loc_820F89D8;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82141398
	ctx.lr = 0x820F892C;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820f89d8
	if (!ctx.cr6.gt) goto loc_820F89D8;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-16984
	ctx.r11.s64 = ctx.r11.s64 + -16984;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// lis r27,-32168
	ctx.r27.s64 = -2108162048;
	// lis r25,-32168
	ctx.r25.s64 = -2108162048;
	// lfs f29,32272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32272);
	ctx.f29.f64 = double(temp.f32);
	// lis r24,-32168
	ctx.r24.s64 = -2108162048;
	// lfs f30,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
loc_820F8964:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820f8978
	if (!ctx.cr6.gt) goto loc_820F8978;
	// lwz r11,-29928(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -29928);
	// b 0x820f897c
	goto loc_820F897C;
loc_820F8978:
	// lwz r11,-30016(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -30016);
loc_820F897C:
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,6952(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6952);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820F8994;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x820f89b0
	if (!ctx.cr6.lt) goto loc_820F89B0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820F89B0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821200c8
	ctx.lr = 0x820F89C4;
	sub_821200C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,640
	ctx.r29.s64 = ctx.r29.s64 + 640;
	// bl 0x82141398
	ctx.lr = 0x820F89D0;
	sub_82141398(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820f8964
	if (ctx.cr6.lt) goto loc_820F8964;
loc_820F89D8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F88F0) {
	__imp__sub_820F88F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F89EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F89EC) {
	__imp__sub_820F89EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F89F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x820f88f0
	sub_820F88F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F89F0) {
	__imp__sub_820F89F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F89F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F89F4) {
	__imp__sub_820F89F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F89F8) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbz r9,29088(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f8a48
	if (ctx.cr6.eq) goto loc_820F8A48;
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lbz r11,17033(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17033);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8a38
	if (ctx.cr6.eq) goto loc_820F8A38;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820f8a48
	if (ctx.cr6.eq) goto loc_820F8A48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f8a40
	if (!ctx.cr6.eq) goto loc_820F8A40;
loc_820F8A38:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x820f8a48
	if (ctx.cr6.eq) goto loc_820F8A48;
loc_820F8A40:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820f8a68
	if (ctx.cr6.eq) goto loc_820F8A68;
loc_820F8A48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r3,r11,32276
	ctx.r3.s64 = ctx.r11.s64 + 32276;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x822e84f0
	ctx.lr = 0x820F8A5C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130ec0
	ctx.lr = 0x820F8A68;
	sub_82130EC0(ctx, base);
loc_820F8A68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F89F8) {
	__imp__sub_820F89F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8A78) {
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
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lhz r9,126(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// addi r11,r10,-5696
	ctx.r11.s64 = ctx.r10.s64 + -5696;
	// mulli r10,r9,404
	ctx.r10.s64 = ctx.r9.s64 * 404;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,208(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 208);
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// beq cr6,0x820f8ac8
	if (ctx.cr6.eq) goto loc_820F8AC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,32288
	ctx.r4.s64 = ctx.r11.s64 + 32288;
	// bl 0x82280a68
	ctx.lr = 0x820F8AB8;
	sub_82280A68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F8AC8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8235dc40
	ctx.lr = 0x820F8AD4;
	sub_8235DC40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F8A78) {
	__imp__sub_820F8A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F8AE4) {
	__imp__sub_820F8AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8AE8) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r4,r11,22916
	ctx.r4.s64 = ctx.r11.s64 + 22916;
	// lwzx r3,r7,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820f8b40
	if (ctx.cr6.lt) goto loc_820F8B40;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822ddcf8
	ctx.lr = 0x820F8B2C;
	sub_822DDCF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f8b40
	if (ctx.cr6.eq) goto loc_820F8B40;
	// li r4,2046
	ctx.r4.s64 = 2046;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82364ae8
	ctx.lr = 0x820F8B40;
	sub_82364AE8(ctx, base);
loc_820F8B40:
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

PPC_WEAK_FUNC(sub_820F8AE8) {
	__imp__sub_820F8AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F8B54) {
	__imp__sub_820F8B54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820F8B60;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,11336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f8b98
	if (ctx.cr6.eq) goto loc_820F8B98;
loc_820F8B88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820F8B98:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822ddcf8
	ctx.lr = 0x820F8BA0;
	sub_822DDCF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f8b88
	if (ctx.cr6.eq) goto loc_820F8B88;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82364c50
	ctx.lr = 0x820F8BC4;
	sub_82364C50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82362d40
	ctx.lr = 0x820F8BD8;
	sub_82362D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F8B58) {
	__imp__sub_820F8B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820F8BF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,11336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f8c1c
	if (ctx.cr6.eq) goto loc_820F8C1C;
loc_820F8C10:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820F8C1C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821201c0
	ctx.lr = 0x820F8C24;
	sub_821201C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f8c10
	if (ctx.cr6.eq) goto loc_820F8C10;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82364b50
	ctx.lr = 0x820F8C44;
	sub_82364B50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82362d40
	ctx.lr = 0x820F8C58;
	sub_82362D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F8BE8) {
	__imp__sub_820F8BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F8C64) {
	__imp__sub_820F8C64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820F8C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821201c0
	ctx.lr = 0x820F8C84;
	sub_821201C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f8c9c
	if (!ctx.cr6.eq) goto loc_820F8C9C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820F8C9C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364cc8
	ctx.lr = 0x820F8CB4;
	sub_82364CC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82362d40
	ctx.lr = 0x820F8CC8;
	sub_82362D40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F8C68) {
	__imp__sub_820F8C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F8CD4) {
	__imp__sub_820F8CD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821201a0
	ctx.lr = 0x820F8CF8;
	sub_821201A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// addi r10,r10,-22896
	ctx.r10.s64 = ctx.r10.s64 + -22896;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r10,16168
	ctx.r7.s64 = ctx.r10.s64 + 16168;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,-5328
	ctx.r9.s64 = ctx.r11.s64 + -5328;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r8,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x822a1d50
	ctx.lr = 0x820F8D58;
	sub_822A1D50(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ee908
	ctx.lr = 0x820F8D6C;
	sub_820EE908(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a24e0
	ctx.lr = 0x820F8D78;
	sub_822A24E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F8CD8) {
	__imp__sub_820F8CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821201a0
	ctx.lr = 0x820F8DB0;
	sub_821201A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// addi r10,r10,-22896
	ctx.r10.s64 = ctx.r10.s64 + -22896;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r10,16168
	ctx.r7.s64 = ctx.r10.s64 + 16168;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,-5328
	ctx.r9.s64 = ctx.r11.s64 + -5328;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r8,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x822a1d50
	ctx.lr = 0x820F8E10;
	sub_822A1D50(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ee978
	ctx.lr = 0x820F8E24;
	sub_820EE978(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a24e0
	ctx.lr = 0x820F8E30;
	sub_822A24E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F8D90) {
	__imp__sub_820F8D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820F8E50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32021
	ctx.r26.s64 = -2098528256;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r11,-14904(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14904);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8e7c
	if (ctx.cr6.eq) goto loc_820F8E7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,32396
	ctx.r3.s64 = ctx.r11.s64 + 32396;
	// b 0x820f8e84
	goto loc_820F8E84;
loc_820F8E7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,32384
	ctx.r3.s64 = ctx.r11.s64 + 32384;
loc_820F8E84:
	// bl 0x822d1668
	ctx.lr = 0x820F8E88;
	sub_822D1668(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mulli r10,r30,3712
	ctx.r10.s64 = ctx.r30.s64 * 3712;
	// addi r11,r11,-1216
	ctx.r11.s64 = ctx.r11.s64 + -1216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822cfab8
	ctx.lr = 0x820F8EAC;
	sub_822CFAB8(ctx, base);
	// bl 0x82393ee8
	ctx.lr = 0x820F8EB0;
	sub_82393EE8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820f8eec
	if (!ctx.cr6.gt) goto loc_820F8EEC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820F8EC8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x822cd630
	ctx.lr = 0x820F8ED8;
	sub_822CD630(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820f8ec8
	if (ctx.cr6.lt) goto loc_820F8EC8;
loc_820F8EEC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82393e28
	ctx.lr = 0x820F8EF4;
	sub_82393E28(ctx, base);
	// lwz r11,-14904(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -14904);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8f14
	if (ctx.cr6.eq) goto loc_820F8F14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,32372
	ctx.r4.s64 = ctx.r11.s64 + 32372;
	// b 0x820f8f1c
	goto loc_820F8F1C;
loc_820F8F14:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,13148
	ctx.r4.s64 = ctx.r11.s64 + 13148;
loc_820F8F1C:
	// bl 0x822c6928
	ctx.lr = 0x820F8F20;
	sub_822C6928(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f8f40
	if (ctx.cr6.eq) goto loc_820F8F40;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// stfs f0,11328(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 11328, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11332(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 11332, temp.u32);
loc_820F8F40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F8E48) {
	__imp__sub_820F8E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8F48) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,-16984
	ctx.r10.s64 = ctx.r10.s64 + -16984;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8211f990
	sub_8211F990(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F8F48) {
	__imp__sub_820F8F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,32484
	ctx.r3.s64 = ctx.r11.s64 + 32484;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r3,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r3.u32);
	// addi r11,r10,32472
	ctx.r11.s64 = ctx.r10.s64 + 32472;
	// addi r10,r9,32460
	ctx.r10.s64 = ctx.r9.s64 + 32460;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// addi r9,r8,32448
	ctx.r9.s64 = ctx.r8.s64 + 32448;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// addi r8,r7,32432
	ctx.r8.s64 = ctx.r7.s64 + 32432;
	// stw r9,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r9.u32);
	// addi r7,r6,32420
	ctx.r7.s64 = ctx.r6.s64 + 32420;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// lwzx r3,r5,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F8F78) {
	__imp__sub_820F8F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F8FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bge cr6,0x820f8ff8
	if (!ctx.cr6.lt) goto loc_820F8FF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,32496
	ctx.r3.s64 = ctx.r11.s64 + 32496;
	// blr 
	return;
loc_820F8FF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,32460
	ctx.r3.s64 = ctx.r11.s64 + 32460;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F8FD0) {
	__imp__sub_820F8FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F9004) {
	__imp__sub_820F9004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bge cr6,0x820f9030
	if (!ctx.cr6.lt) goto loc_820F9030;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,32496
	ctx.r3.s64 = ctx.r11.s64 + 32496;
	// blr 
	return;
loc_820F9030:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,32472
	ctx.r3.s64 = ctx.r11.s64 + 32472;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F9008) {
	__imp__sub_820F9008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F903C) {
	__imp__sub_820F903C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bge cr6,0x820f9064
	if (!ctx.cr6.lt) goto loc_820F9064;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F9064:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,23256
	ctx.r6.s64 = ctx.r11.s64 + 23256;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F9040) {
	__imp__sub_820F9040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,692(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// b 0x820da6b8
	sub_820DA6B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F9090) {
	__imp__sub_820F9090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F90BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F90BC) {
	__imp__sub_820F90BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F90C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// addi r9,r11,208
	ctx.r9.s64 = ctx.r11.s64 + 208;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F90C0) {
	__imp__sub_820F90C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F90D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17968(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17968);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,23112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F90D8) {
	__imp__sub_820F90D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F910C) {
	__imp__sub_820F910C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x820F9118;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// li r5,1280
	ctx.r5.s64 = 1280;
	// addi r16,r11,-16984
	ctx.r16.s64 = ctx.r11.s64 + -16984;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x823de090
	ctx.lr = 0x820F9144;
	sub_823DE090(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// li r5,7424
	ctx.r5.s64 = 7424;
	// addi r15,r11,-1216
	ctx.r15.s64 = ctx.r11.s64 + -1216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x823de090
	ctx.lr = 0x820F915C;
	sub_823DE090(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// li r5,12800
	ctx.r5.s64 = 12800;
	// addi r3,r11,8672
	ctx.r3.s64 = ctx.r11.s64 + 8672;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x820F9170;
	sub_823DE090(ctx, base);
	// lis r18,-32187
	ctx.r18.s64 = -2109407232;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r10,6264
	ctx.r3.s64 = ctx.r10.s64 + 6264;
	// li r5,2400
	ctx.r5.s64 = 2400;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,-17068(r18)
	PPC_STORE_U32(ctx.r18.u32 + -17068, ctx.r29.u32);
	// bl 0x823de090
	ctx.lr = 0x820F9190;
	sub_823DE090(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r14,r11,9240
	ctx.r14.s64 = ctx.r11.s64 + 9240;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r17,29088(r10)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29088);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lfs f29,23112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23112);
	ctx.f29.f64 = double(temp.f32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lfs f30,17968(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17968);
	ctx.f30.f64 = double(temp.f32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lfs f31,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r19,-32312(r10)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32312);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r23,r14,24
	ctx.r23.s64 = ctx.r14.s64 + 24;
	// ori r25,r7,61924
	ctx.r25.u64 = ctx.r7.u64 | 61924;
	// ori r26,r6,58216
	ctx.r26.u64 = ctx.r6.u64 | 58216;
	// ori r27,r5,2188
	ctx.r27.u64 = ctx.r5.u64 | 2188;
	// ori r28,r4,58218
	ctx.r28.u64 = ctx.r4.u64 | 58218;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r21,16
	ctx.r21.s64 = 16;
	// addi r24,r11,-15680
	ctx.r24.s64 = ctx.r11.s64 + -15680;
loc_820F9200:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x820f9220
	if (!ctx.cr6.eq) goto loc_820F9220;
	// subfc r11,r19,r22
	ctx.xer.ca = ctx.r22.u32 >= ctx.r19.u32;
	ctx.r11.s64 = ctx.r22.s64 - ctx.r19.s64;
	// eqv r10,r19,r22
	ctx.r10.u64 = ~(ctx.r19.u64 ^ ctx.r22.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// b 0x820f9230
	goto loc_820F9230;
loc_820F9220:
	// lwz r11,-8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_820F9230:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f9298
	if (ctx.cr6.eq) goto loc_820F9298;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// beq cr6,0x820f924c
	if (ctx.cr6.eq) goto loc_820F924C;
	// lhz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
loc_820F924C:
	// mullw r11,r31,r25
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r25.s32);
	// mulli r10,r31,3712
	ctx.r10.s64 = ctx.r31.s64 * 3712;
	// stwx r31,r10,r15
	PPC_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r31.u32);
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r26
	ctx.r3.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bl 0x823de090
	ctx.lr = 0x820F926C;
	sub_823DE090(ctx, base);
	// add r9,r30,r27
	ctx.r9.u64 = ctx.r30.u64 + ctx.r27.u64;
	// slw r8,r20,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r31.u8 & 0x3F));
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stbx r21,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r21.u8);
	// stfs f31,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f31,12(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// or r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stfs f30,16(r9)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f30,20(r9)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f29,24(r9)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f31,28(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
loc_820F9298:
	// addi r23,r23,9780
	ctx.r23.s64 = ctx.r23.s64 + 9780;
	// addi r11,r14,19584
	ctx.r11.s64 = ctx.r14.s64 + 19584;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f9200
	if (ctx.cr6.lt) goto loc_820F9200;
	// stw r29,-17068(r18)
	PPC_STORE_U32(ctx.r18.u32 + -17068, ctx.r29.u32);
	// bl 0x8228d700
	ctx.lr = 0x820F92B4;
	sub_8228D700(ctx, base);
	// bl 0x82254920
	ctx.lr = 0x820F92B8;
	sub_82254920(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820f5368
	ctx.lr = 0x820F92C0;
	sub_820F5368(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,-32736
	ctx.r3.s64 = ctx.r11.s64 + -32736;
	// bl 0x8238bd98
	ctx.lr = 0x820F92D0;
	sub_8238BD98(ctx, base);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r9,-32752
	ctx.r3.s64 = ctx.r9.s64 + -32752;
	// stw r11,-22896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22896, ctx.r11.u32);
	// addi r31,r10,-22896
	ctx.r31.s64 = ctx.r10.s64 + -22896;
	// bl 0x8238bd98
	ctx.lr = 0x820F92F0;
	sub_8238BD98(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r8,-32764
	ctx.r3.s64 = ctx.r8.s64 + -32764;
	// bl 0x8238bd98
	ctx.lr = 0x820F9304;
	sub_8238BD98(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r7,32752
	ctx.r3.s64 = ctx.r7.s64 + 32752;
	// bl 0x82133898
	ctx.lr = 0x820F9318;
	sub_82133898(ctx, base);
	// stw r3,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r6,32732
	ctx.r3.s64 = ctx.r6.s64 + 32732;
	// bl 0x82133898
	ctx.lr = 0x820F932C;
	sub_82133898(ctx, base);
	// stw r3,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r5,32716
	ctx.r3.s64 = ctx.r5.s64 + 32716;
	// bl 0x8238bd98
	ctx.lr = 0x820F9340;
	sub_8238BD98(ctx, base);
	// stw r3,16136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16136, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,32696
	ctx.r3.s64 = ctx.r11.s64 + 32696;
	// bl 0x8238bd98
	ctx.lr = 0x820F9354;
	sub_8238BD98(ctx, base);
	// stw r3,16140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16140, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r10,32672
	ctx.r3.s64 = ctx.r10.s64 + 32672;
	// bl 0x8238bd98
	ctx.lr = 0x820F9368;
	sub_8238BD98(ctx, base);
	// stw r3,16144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16144, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r9,32644
	ctx.r3.s64 = ctx.r9.s64 + 32644;
	// bl 0x8238bd98
	ctx.lr = 0x820F937C;
	sub_8238BD98(ctx, base);
	// stw r3,16148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16148, ctx.r3.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r8,32624
	ctx.r3.s64 = ctx.r8.s64 + 32624;
	// bl 0x8238bd98
	ctx.lr = 0x820F9390;
	sub_8238BD98(ctx, base);
	// stw r3,16152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16152, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r7,32596
	ctx.r3.s64 = ctx.r7.s64 + 32596;
	// bl 0x8238bd98
	ctx.lr = 0x820F93A4;
	sub_8238BD98(ctx, base);
	// stw r3,16156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16156, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r6,32568
	ctx.r3.s64 = ctx.r6.s64 + 32568;
	// bl 0x8238bd98
	ctx.lr = 0x820F93B8;
	sub_8238BD98(ctx, base);
	// stw r3,16160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16160, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r5,32552
	ctx.r3.s64 = ctx.r5.s64 + 32552;
	// bl 0x8238bd98
	ctx.lr = 0x820F93CC;
	sub_8238BD98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,16164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16164, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16128, ctx.r11.u32);
	// stw r10,16132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16132, ctx.r10.u32);
	// stw r9,16124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16124, ctx.r9.u32);
	// bl 0x820e24b8
	ctx.lr = 0x820F93EC;
	sub_820E24B8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r14,24
	ctx.r31.s64 = ctx.r14.s64 + 24;
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_820F93FC:
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f9424
	if (!ctx.cr6.eq) goto loc_820F9424;
	// subfc r11,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// eqv r8,r10,r30
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x820f9434
	goto loc_820F9434;
loc_820F9424:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_820F9434:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f947c
	if (ctx.cr6.eq) goto loc_820F947C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x820f9450
	if (ctx.cr6.eq) goto loc_820F9450;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_820F9450:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x8211f990
	ctx.lr = 0x820F9478;
	sub_8211F990(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_820F947C:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r14,19584
	ctx.r11.s64 = ctx.r14.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f93fc
	if (ctx.cr6.lt) goto loc_820F93FC;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821201a0
	ctx.lr = 0x820F9498;
	sub_821201A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,32544
	ctx.r5.s64 = ctx.r11.s64 + 32544;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_820F94AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x820f94d0
	if (ctx.cr6.eq) goto loc_820F94D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f94ac
	if (ctx.cr6.eq) goto loc_820F94AC;
loc_820F94D0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f94e8
	if (ctx.cr6.eq) goto loc_820F94E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,32508
	ctx.r4.s64 = ctx.r11.s64 + 32508;
	// bl 0x822830e8
	ctx.lr = 0x820F94E8;
	sub_822830E8(ctx, base);
loc_820F94E8:
	// bl 0x82105d00
	ctx.lr = 0x820F94EC;
	sub_82105D00(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r14,24
	ctx.r31.s64 = ctx.r14.s64 + 24;
loc_820F94F8:
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f951c
	if (!ctx.cr6.eq) goto loc_820F951C;
	// subfc r11,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// eqv r8,r10,r30
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x820f952c
	goto loc_820F952C;
loc_820F951C:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_820F952C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f9558
	if (ctx.cr6.eq) goto loc_820F9558;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x820f9548
	if (ctx.cr6.eq) goto loc_820F9548;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_820F9548:
	// mulli r11,r11,3712
	ctx.r11.s64 = ctx.r11.s64 * 3712;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bl 0x822c59a8
	ctx.lr = 0x820F9554;
	sub_822C59A8(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_820F9558:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r14,19584
	ctx.r11.s64 = ctx.r14.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f94f8
	if (ctx.cr6.lt) goto loc_820F94F8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,6968
	ctx.r31.s64 = ctx.r11.s64 + 6968;
	// addi r3,r31,11772
	ctx.r3.s64 = ctx.r31.s64 + 11772;
	// bl 0x821a93d8
	ctx.lr = 0x820F957C;
	sub_821A93D8(ctx, base);
	// addi r3,r31,11772
	ctx.r3.s64 = ctx.r31.s64 + 11772;
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x82120098
	ctx.lr = 0x820F9588;
	sub_82120098(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105d70
	ctx.lr = 0x820F9590;
	sub_82105D70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105dd8
	ctx.lr = 0x820F9598;
	sub_82105DD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105e80
	ctx.lr = 0x820F95A0;
	sub_82105E80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105ee0
	ctx.lr = 0x820F95A8;
	sub_82105EE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105f50
	ctx.lr = 0x820F95B0;
	sub_82105F50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,11777
	ctx.r3.s64 = ctx.r31.s64 + 11777;
	// bl 0x822e7868
	ctx.lr = 0x820F95BC;
	sub_822E7868(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820f8020
	ctx.lr = 0x820F95C4;
	sub_820F8020(ctx, base);
	// bl 0x8234d2e0
	ctx.lr = 0x820F95C8;
	sub_8234D2E0(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r14,24
	ctx.r31.s64 = ctx.r14.s64 + 24;
loc_820F95D4:
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f95f8
	if (!ctx.cr6.eq) goto loc_820F95F8;
	// subfc r11,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// eqv r8,r10,r30
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x820f9608
	goto loc_820F9608;
loc_820F95F8:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_820F9608:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f962c
	if (ctx.cr6.eq) goto loc_820F962C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x820f9624
	if (ctx.cr6.eq) goto loc_820F9624;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_820F9624:
	// bl 0x820f8e48
	ctx.lr = 0x820F9628;
	sub_820F8E48(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_820F962C:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r14,19584
	ctx.r11.s64 = ctx.r14.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f95d4
	if (ctx.cr6.lt) goto loc_820F95D4;
	// li r31,2792
	ctx.r31.s64 = 2792;
loc_820F9644:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821064f8
	ctx.lr = 0x820F964C;
	sub_821064F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2824
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2824, ctx.xer);
	// blt cr6,0x820f9644
	if (ctx.cr6.lt) goto loc_820F9644;
	// bl 0x82106608
	ctx.lr = 0x820F965C;
	sub_82106608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8210a4f8
	ctx.lr = 0x820F9664;
	sub_8210A4F8(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r14,24
	ctx.r30.s64 = ctx.r14.s64 + 24;
loc_820F9670:
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f9694
	if (!ctx.cr6.eq) goto loc_820F9694;
	// subfc r11,r10,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	// eqv r8,r10,r29
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r29.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x820f96a4
	goto loc_820F96A4;
loc_820F9694:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_820F96A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f96d8
	if (ctx.cr6.eq) goto loc_820F96D8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// beq cr6,0x820f96c0
	if (ctx.cr6.eq) goto loc_820F96C0;
	// lhz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
loc_820F96C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120cc0
	ctx.lr = 0x820F96CC;
	sub_82120CC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d5bd8
	ctx.lr = 0x820F96D4;
	sub_820D5BD8(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_820F96D8:
	// addi r30,r30,9780
	ctx.r30.s64 = ctx.r30.s64 + 9780;
	// addi r11,r14,19584
	ctx.r11.s64 = ctx.r14.s64 + 19584;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f9670
	if (ctx.cr6.lt) goto loc_820F9670;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r14,24
	ctx.r31.s64 = ctx.r14.s64 + 24;
loc_820F96F4:
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f9718
	if (!ctx.cr6.eq) goto loc_820F9718;
	// subfc r11,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// eqv r8,r10,r30
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x820f9728
	goto loc_820F9728;
loc_820F9718:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_820F9728:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f974c
	if (ctx.cr6.eq) goto loc_820F974C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x820f9744
	if (ctx.cr6.eq) goto loc_820F9744;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_820F9744:
	// bl 0x8210e3e8
	ctx.lr = 0x820F9748;
	sub_8210E3E8(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_820F974C:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r14,19584
	ctx.r11.s64 = ctx.r14.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f96f4
	if (ctx.cr6.lt) goto loc_820F96F4;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F9110) {
	__imp__sub_820F9110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F9774) {
	__imp__sub_820F9774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820F9780;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,-30176
	ctx.r28.s64 = ctx.r11.s64 + -30176;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// rlwinm r27,r10,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r29,r27,r11
	ctx.r29.u64 = ctx.r27.u64 + ctx.r11.u64;
loc_820F97A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82116388
	ctx.lr = 0x820F97B4;
	sub_82116388(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82284b00
	ctx.lr = 0x820F97BC;
	sub_82284B00(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f97cc
	if (ctx.cr6.eq) goto loc_820F97CC;
	// bl 0x82282dd0
	ctx.lr = 0x820F97CC;
	sub_82282DD0(ctx, base);
loc_820F97CC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x820f97a8
	if (ctx.cr6.lt) goto loc_820F97A8;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r8,r9,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r11,-17068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17068);
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// stw r11,-17068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17068, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f9810
	if (!ctx.cr6.eq) goto loc_820F9810;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// li r5,2400
	ctx.r5.s64 = 2400;
	// addi r3,r11,6264
	ctx.r3.s64 = ctx.r11.s64 + 6264;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x820F9810;
	sub_823DE090(ctx, base);
loc_820F9810:
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// mulli r11,r31,6400
	ctx.r11.s64 = ctx.r31.s64 * 6400;
	// addi r10,r10,8672
	ctx.r10.s64 = ctx.r10.s64 + 8672;
	// li r5,6400
	ctx.r5.s64 = 6400;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de090
	ctx.lr = 0x820F982C;
	sub_823DE090(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820F9840:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820f9840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F9840;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F9778) {
	__imp__sub_820F9778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820F9858;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8238eb98
	ctx.lr = 0x820F9864;
	sub_8238EB98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236a638
	ctx.lr = 0x820F9874;
	sub_8236A638(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r27,-32190
	ctx.r27.s64 = -2109603840;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,9240
	ctx.r28.s64 = ctx.r11.s64 + 9240;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
	// lwz r10,-32312(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32312);
	// lis r26,-32166
	ctx.r26.s64 = -2108030976;
loc_820F9894:
	// lbz r9,29088(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f98b8
	if (!ctx.cr6.eq) goto loc_820F98B8;
	// subfc r11,r10,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	// eqv r8,r10,r29
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r29.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x820f98c8
	goto loc_820F98C8;
loc_820F98B8:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_820F98C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f98ec
	if (ctx.cr6.eq) goto loc_820F98EC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x820f98e4
	if (ctx.cr6.eq) goto loc_820F98E4;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_820F98E4:
	// bl 0x82104db8
	ctx.lr = 0x820F98E8;
	sub_82104DB8(ctx, base);
	// lwz r10,-32312(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32312);
loc_820F98EC:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r28,19584
	ctx.r11.s64 = ctx.r28.s64 + 19584;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f9894
	if (ctx.cr6.lt) goto loc_820F9894;
	// bl 0x822576c8
	ctx.lr = 0x820F9904;
	sub_822576C8(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r29,r11,-5696
	ctx.r29.s64 = ctx.r11.s64 + -5696;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
loc_820F9910:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f992c
	if (ctx.cr6.eq) goto loc_820F992C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820f992c
	if (ctx.cr6.eq) goto loc_820F992C;
	// bl 0x8228d1f8
	ctx.lr = 0x820F9928;
	sub_8228D1F8(ctx, base);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
loc_820F992C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820f994c
	if (ctx.cr6.eq) goto loc_820F994C;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x820f994c
	if (ctx.cr6.eq) goto loc_820F994C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82259630
	ctx.lr = 0x820F9948;
	sub_82259630(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_820F994C:
	// addis r11,r29,13
	ctx.r11.s64 = ctx.r29.s64 + 851968;
	// addi r31,r31,404
	ctx.r31.s64 = ctx.r31.s64 + 404;
	// addi r11,r11,-24552
	ctx.r11.s64 = ctx.r11.s64 + -24552;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f9910
	if (ctx.cr6.lt) goto loc_820F9910;
	// bl 0x8228d778
	ctx.lr = 0x820F9964;
	sub_8228D778(ctx, base);
	// lwz r10,-32312(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32312);
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
loc_820F996C:
	// lbz r9,29088(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f9990
	if (!ctx.cr6.eq) goto loc_820F9990;
	// subfc r11,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// eqv r8,r10,r30
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x820f99a0
	goto loc_820F99A0;
loc_820F9990:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_820F99A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f99c4
	if (ctx.cr6.eq) goto loc_820F99C4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x820f99bc
	if (ctx.cr6.eq) goto loc_820F99BC;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_820F99BC:
	// bl 0x820f9778
	ctx.lr = 0x820F99C0;
	sub_820F9778(ctx, base);
	// lwz r10,-32312(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32312);
loc_820F99C4:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r28,19584
	ctx.r11.s64 = ctx.r28.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f996c
	if (ctx.cr6.lt) goto loc_820F996C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82282df0
	ctx.lr = 0x820F99E0;
	sub_82282DF0(ctx, base);
	// bl 0x820f18b0
	ctx.lr = 0x820F99E4;
	sub_820F18B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a3cf8
	ctx.lr = 0x820F99EC;
	sub_821A3CF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a02f0
	ctx.lr = 0x820F99F4;
	sub_821A02F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8217ef70
	ctx.lr = 0x820F99FC;
	sub_8217EF70(ctx, base);
	// bl 0x82258700
	ctx.lr = 0x820F9A00;
	sub_82258700(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F9850) {
	__imp__sub_820F9850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9A08) {
	PPC_FUNC_PROLOGUE();
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x822db360
	sub_822DB360(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F9A08) {
	__imp__sub_820F9A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23180
	ctx.r7.u64 = ctx.r8.u64 | 23180;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addis r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 65536;
	// addi r4,r4,22952
	ctx.r4.s64 = ctx.r4.s64 + 22952;
	// lwzx r3,r11,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// b 0x820f8be8
	sub_820F8BE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F9A10) {
	__imp__sub_820F9A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F9A44) {
	__imp__sub_820F9A44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x820f8be8
	sub_820F8BE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F9A48) {
	__imp__sub_820F9A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F9A64) {
	__imp__sub_820F9A64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820f8b58
	sub_820F8B58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F9A68) {
	__imp__sub_820F9A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F9A74) {
	__imp__sub_820F9A74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,22916
	ctx.r8.u64 = ctx.r10.u64 | 22916;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820f9a9c
	if (!ctx.cr6.lt) goto loc_820F9A9C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820F9A9C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820f8b58
	sub_820F8B58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F9A78) {
	__imp__sub_820F9A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// ori r6,r8,23180
	ctx.r6.u64 = ctx.r8.u64 | 23180;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addis r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 65536;
	// lfs f1,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r4,22952
	ctx.r4.s64 = ctx.r4.s64 + 22952;
	// lwzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// b 0x820f8b58
	sub_820F8B58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F9AA8) {
	__imp__sub_820F9AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F9AE4) {
	__imp__sub_820F9AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// lfs f1,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x820f8b58
	sub_820F8B58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F9AE8) {
	__imp__sub_820F9AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F9B0C) {
	__imp__sub_820F9B0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lhz r3,334(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 334);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mulli r10,r3,404
	ctx.r10.s64 = ctx.r3.s64 * 404;
	// lfs f1,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x820f8b58
	sub_820F8B58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820F9B10) {
	__imp__sub_820F9B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F9B34) {
	__imp__sub_820F9B34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r11,20576
	ctx.r31.s64 = ctx.r11.s64 + 20576;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,-36
	ctx.r11.s64 = ctx.r31.s64 + -36;
	// mulli r30,r3,840
	ctx.r30.s64 = ctx.r3.s64 * 840;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r31,-1736
	ctx.r9.s64 = ctx.r31.s64 + -1736;
	// li r5,840
	ctx.r5.s64 = 840;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r9
	ctx.r3.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x823de090
	ctx.lr = 0x820F9B8C;
	sub_823DE090(ctx, base);
	// li r5,840
	ctx.r5.s64 = 840;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x820F9B9C;
	sub_823DE090(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F9B38) {
	__imp__sub_820F9B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F9BB4) {
	__imp__sub_820F9BB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9BB8) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r31,r11,20576
	ctx.r31.s64 = ctx.r11.s64 + 20576;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1680
	ctx.r5.s64 = 1680;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,22264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22264, ctx.r11.u32);
	// bl 0x823de090
	ctx.lr = 0x820F9BEC;
	sub_823DE090(ctx, base);
	// addi r3,r31,-1736
	ctx.r3.s64 = ctx.r31.s64 + -1736;
	// li r5,1680
	ctx.r5.s64 = 1680;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x820F9BFC;
	sub_823DE090(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,-36
	ctx.r11.s64 = ctx.r31.s64 + -36;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F9C10:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820f9c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F9C10;
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

PPC_WEAK_FUNC(sub_820F9BB8) {
	__imp__sub_820F9BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F9C2C) {
	__imp__sub_820F9C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de024
	ctx.lr = 0x820F9C44;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r7,-31616
	ctx.r3.s64 = ctx.r7.s64 + -31616;
	// lfs f31,6912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r8,-31688
	ctx.r8.s64 = ctx.r8.s64 + -31688;
	// lfs f29,7544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7544);
	ctx.f29.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F9C84;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r4,-31756
	ctx.r8.s64 = ctx.r4.s64 + -31756;
	// stw r3,18824(r6)
	PPC_STORE_U32(ctx.r6.u32 + 18824, ctx.r3.u32);
	// addi r3,r11,-31776
	ctx.r3.s64 = ctx.r11.s64 + -31776;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,-31696(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -31696);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F9CB4;
	sub_822E1660(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r3,22260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22260, ctx.r3.u32);
	// addi r3,r7,-31804
	ctx.r3.s64 = ctx.r7.s64 + -31804;
	// lfs f29,17672(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17672);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r8,-31844
	ctx.r8.s64 = ctx.r8.s64 + -31844;
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F9CE8;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r4,-31912
	ctx.r8.s64 = ctx.r4.s64 + -31912;
	// stw r3,22308(r6)
	PPC_STORE_U32(ctx.r6.u32 + 22308, ctx.r3.u32);
	// addi r3,r11,-31936
	ctx.r3.s64 = ctx.r11.s64 + -31936;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,26980(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 26980);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F9D18;
	sub_822E1660(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r3,22312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22312, ctx.r3.u32);
	// addi r8,r6,-32016
	ctx.r8.s64 = ctx.r6.s64 + -32016;
	// lfs f1,5188(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5188);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,-32040
	ctx.r3.s64 = ctx.r5.s64 + -32040;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f3,5812(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5812);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F9D4C;
	sub_822E1660(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r3,22256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22256, ctx.r3.u32);
	// addi r8,r10,-32092
	ctx.r8.s64 = ctx.r10.s64 + -32092;
	// lfs f28,6040(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6040);
	ctx.f28.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r3,r6,-32120
	ctx.r3.s64 = ctx.r6.s64 + -32120;
	// lfs f3,2416(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2416);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F9D84;
	sub_822E1660(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// stw r3,22296(r5)
	PPC_STORE_U32(ctx.r5.u32 + 22296, ctx.r3.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r11,-32224
	ctx.r8.s64 = ctx.r11.s64 + -32224;
	// addi r3,r10,-32252
	ctx.r3.s64 = ctx.r10.s64 + -32252;
	// lfs f28,12168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F9DB8;
	sub_822E1660(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r31,r8,-32312
	ctx.r31.s64 = ctx.r8.s64 + -32312;
	// stw r3,18832(r9)
	PPC_STORE_U32(ctx.r9.u32 + 18832, ctx.r3.u32);
	// addi r3,r6,-32336
	ctx.r3.s64 = ctx.r6.s64 + -32336;
	// lfs f27,2424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2424);
	ctx.f27.f64 = double(temp.f32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x820F9DF0;
	sub_822E1660(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,20520(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20520, ctx.r3.u32);
	// addi r3,r11,-32364
	ctx.r3.s64 = ctx.r11.s64 + -32364;
	// lfs f1,-32340(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -32340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F9E1C;
	sub_822E1660(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r8,r9,-32452
	ctx.r8.s64 = ctx.r9.s64 + -32452;
	// stw r3,22300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22300, ctx.r3.u32);
	// addi r3,r7,-32392
	ctx.r3.s64 = ctx.r7.s64 + -32392;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820F9E48;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r4,-32512
	ctx.r8.s64 = ctx.r4.s64 + -32512;
	// stw r3,20572(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20572, ctx.r3.u32);
	// addi r3,r11,-32544
	ctx.r3.s64 = ctx.r11.s64 + -32544;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,5488(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5488);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F9E78;
	sub_822E1660(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r8,r9,-32672
	ctx.r8.s64 = ctx.r9.s64 + -32672;
	// stw r3,18836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18836, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r5,-32712
	ctx.r3.s64 = ctx.r5.s64 + -32712;
	// lfs f2,6688(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6688);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820F9EA8;
	sub_822E1660(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// stw r3,22304(r4)
	PPC_STORE_U32(ctx.r4.u32 + 22304, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de070
	ctx.lr = 0x820F9EBC;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F9C30) {
	__imp__sub_820F9C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820F9ECC) {
	__imp__sub_820F9ECC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9ED0) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,22264
	ctx.r31.s64 = ctx.r11.s64 + 22264;
	// lwz r11,22264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22264);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820f9f7c
	if (ctx.cr6.eq) goto loc_820F9F7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-31436
	ctx.r3.s64 = ctx.r11.s64 + -31436;
	// bl 0x822dd930
	ctx.lr = 0x820F9F00;
	sub_822DD930(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-31456
	ctx.r3.s64 = ctx.r10.s64 + -31456;
	// bl 0x822dd930
	ctx.lr = 0x820F9F10;
	sub_822DD930(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r9,-31476
	ctx.r3.s64 = ctx.r9.s64 + -31476;
	// bl 0x8238bd98
	ctx.lr = 0x820F9F24;
	sub_8238BD98(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r8,-31500
	ctx.r3.s64 = ctx.r8.s64 + -31500;
	// bl 0x8238bd98
	ctx.lr = 0x820F9F38;
	sub_8238BD98(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-31528
	ctx.r3.s64 = ctx.r7.s64 + -31528;
	// bl 0x82198070
	ctx.lr = 0x820F9F48;
	sub_82198070(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r6,-31556
	ctx.r3.s64 = ctx.r6.s64 + -31556;
	// bl 0x8238bd98
	ctx.lr = 0x820F9F5C;
	sub_8238BD98(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r5,-31588
	ctx.r3.s64 = ctx.r5.s64 + -31588;
	// bl 0x8238bd98
	ctx.lr = 0x820F9F70;
	sub_8238BD98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820F9F7C:
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

PPC_WEAK_FUNC(sub_820F9ED0) {
	__imp__sub_820F9ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822d4918
	ctx.lr = 0x820F9FA8;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x820f9fb8
	if (!ctx.cr6.gt) goto loc_820F9FB8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F9FB8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F9F90) {
	__imp__sub_820F9F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820F9FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,22260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22260);
	// lwz r9,20520(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20520);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r10,22300(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22300);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f4,f7,f8,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fdivs f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f1.f64));
	// fdivs f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 / ctx.f6.f64));
	// stfs f2,0(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f1,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f8,f13,f8,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fdivs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// stfs f7,4(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,4(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820F9FD0) {
	__imp__sub_820F9FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FA05C) {
	__imp__sub_820FA05C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA060) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f2,f0
	ctx.f29.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de720
	ctx.lr = 0x820FA0A0;
	sub_823DE720(ctx, base);
	// lis r30,-32168
	ctx.r30.s64 = -2108162048;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r11,22260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22260);
	// lwz r10,20520(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20520);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f30.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f8,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x823de800
	ctx.lr = 0x820FA0E0;
	sub_823DE800(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lwz r11,22260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22260);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,22300(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22300);
	// fdivs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 / ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

PPC_WEAK_FUNC(sub_820FA060) {
	__imp__sub_820FA060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,6004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6004);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820fa14c
	if (!ctx.cr6.lt) goto loc_820FA14C;
loc_820FA144:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820FA14C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820fa144
	if (ctx.cr6.gt) goto loc_820FA144;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x820fa144
	if (ctx.cr6.lt) goto loc_820FA144;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FA130) {
	__imp__sub_820FA130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FA17C) {
	__imp__sub_820FA17C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA180) {
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
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23616
	ctx.r7.u64 = ctx.r8.u64 | 23616;
	// lwzx r3,r31,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// bl 0x82332b10
	ctx.lr = 0x820FA1B8;
	sub_82332B10(ctx, base);
	// lbz r6,112(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820fa208
	if (!ctx.cr6.eq) goto loc_820FA208;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x820fa1f0
	if (!ctx.cr6.eq) goto loc_820FA1F0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23620
	ctx.r10.u64 = ctx.r11.u64 | 23620;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82332b10
	ctx.lr = 0x820FA1E4;
	sub_82332B10(ctx, base);
	// lbz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fa208
	if (!ctx.cr6.eq) goto loc_820FA208;
loc_820FA1F0:
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
loc_820FA208:
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_820FA180) {
	__imp__sub_820FA180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA220) {
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
	// bl 0x820fa180
	ctx.lr = 0x820FA238;
	sub_820FA180(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fa25c
	if (!ctx.cr6.eq) goto loc_820FA25C;
loc_820FA244:
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
loc_820FA25C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r31,r8
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,23356
	ctx.r6.s64 = ctx.r11.s64 + 23356;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820fa244
	if (ctx.cr6.eq) goto loc_820FA244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fc78
	ctx.lr = 0x820FA28C;
	sub_8210FC78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

PPC_WEAK_FUNC(sub_820FA220) {
	__imp__sub_820FA220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FA2AC) {
	__imp__sub_820FA2AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820FA2B8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,18320
	ctx.r7.u64 = ctx.r8.u64 | 18320;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfsx f1,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d5368
	ctx.lr = 0x820FA2F8;
	sub_822D5368(ctx, base);
	// li r11,42
	ctx.r11.s64 = 42;
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r6,27640
	ctx.r10.s64 = ctx.r6.s64 + 27640;
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,22300(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 22300);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r29,-32168
	ctx.r29.s64 = -2108162048;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lfs f6,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r3,r5,22912
	ctx.r3.u64 = ctx.r5.u64 | 22912;
	// lfs f12,6004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6004);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// ori r7,r11,2116
	ctx.r7.u64 = ctx.r11.u64 | 2116;
	// lwz r5,20520(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20520);
	// lwz r6,22260(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22260);
loc_820FA35C:
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fa418
	if (ctx.cr6.eq) goto loc_820FA418;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fa418
	if (ctx.cr6.eq) goto loc_820FA418;
	// lwzx r10,r31,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r10,r10,-800
	ctx.r10.s64 = ctx.r10.s64 + -800;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820fa418
	if (ctx.cr6.lt) goto loc_820FA418;
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820fa418
	if (!ctx.cr6.eq) goto loc_820FA418;
	// add r11,r31,r7
	ctx.r11.u64 = ctx.r31.u64 + ctx.r7.u64;
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f5,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f2,f11,f3
	ctx.f2.f64 = double(float(ctx.f11.f64 / ctx.f3.f64));
	// lfs f1,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fsubs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f3,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f10,f5
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmadds f5,f4,f9,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmadds f4,f7,f4,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmuls f0,f5,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmadds f13,f4,f2,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f3.f64));
	// fdivs f5,f0,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fadds f0,f5,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x820fa408
	if (ctx.cr6.lt) goto loc_820FA408;
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bgt cr6,0x820fa408
	if (ctx.cr6.gt) goto loc_820FA408;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x820fa408
	if (ctx.cr6.lt) goto loc_820FA408;
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// bgt cr6,0x820fa408
	if (ctx.cr6.gt) goto loc_820FA408;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FA408:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fa418
	if (ctx.cr6.eq) goto loc_820FA418;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820FA418:
	// addi r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 + 44;
	// bdnz 0x820fa35c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FA35C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FA2B0) {
	__imp__sub_820FA2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820FA438;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de028
	ctx.lr = 0x820FA440;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addi r11,r11,18840
	ctx.r11.s64 = ctx.r11.s64 + 18840;
	// mulli r10,r3,840
	ctx.r10.s64 = ctx.r3.s64 * 840;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r9,r7,-15680
	ctx.r9.s64 = ctx.r7.s64 + -15680;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// addi r7,r6,27640
	ctx.r7.s64 = ctx.r6.s64 + 27640;
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r29,r7,4
	ctx.r29.s64 = ctx.r7.s64 + 4;
	// li r30,42
	ctx.r30.s64 = 42;
	// ori r27,r11,18320
	ctx.r27.u64 = ctx.r11.u64 | 18320;
loc_820FA488:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fa510
	if (ctx.cr6.eq) goto loc_820FA510;
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r28,r27
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x822d77c0
	ctx.lr = 0x820FA4A4;
	sub_822D77C0(ctx, base);
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f29,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// fmr f30,f12
	ctx.f30.f64 = ctx.f12.f64;
	// fsubs f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// bl 0x822d77c0
	ctx.lr = 0x820FA4BC;
	sub_822D77C0(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fsubs f1,f29,f30
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// bl 0x822d77c0
	ctx.lr = 0x820FA4C8;
	sub_822D77C0(ctx, base);
	// fcmpu cr6,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f1.f64);
	// blt cr6,0x820fa510
	if (ctx.cr6.lt) goto loc_820FA510;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// bl 0x822d77c0
	ctx.lr = 0x820FA4DC;
	sub_822D77C0(ctx, base);
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fsubs f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// bl 0x822d77c0
	ctx.lr = 0x820FA4EC;
	sub_822D77C0(ctx, base);
	// fcmpu cr6,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f1.f64);
	// bge cr6,0x820fa504
	if (!ctx.cr6.lt) goto loc_820FA504;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x820fa510
	goto loc_820FA510;
loc_820FA504:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_820FA510:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x820fa488
	if (!ctx.cr0.eq) goto loc_820FA488;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x820FA52C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FA430) {
	__imp__sub_820FA430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA530) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82116388
	ctx.lr = 0x820FA544;
	sub_82116388(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// addi r8,r10,22264
	ctx.r8.s64 = ctx.r10.s64 + 22264;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r5,246(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 246);
	// lwz r3,28(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// bl 0x820ee908
	ctx.lr = 0x820FA564;
	sub_820EE908(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FA530) {
	__imp__sub_820FA530(ctx, base);
}

