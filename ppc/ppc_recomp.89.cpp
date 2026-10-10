#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8235AB90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235AB90) {
	__imp__sub_8235AB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235AB9C) {
	__imp__sub_8235AB9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235ABA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,85(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 85);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235acc4
	if (ctx.cr6.eq) goto loc_8235ACC4;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, ctx.r30.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235acc4
	if (ctx.cr6.eq) goto loc_8235ACC4;
	// bl 0x8228bcc0
	ctx.lr = 0x8235ABDC;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235abfc
	if (ctx.cr6.eq) goto loc_8235ABFC;
	// bl 0x82141b20
	ctx.lr = 0x8235ABEC;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235abfc
	if (ctx.cr6.eq) goto loc_8235ABFC;
	// bl 0x82393cc8
	ctx.lr = 0x8235ABFC;
	sub_82393CC8(ctx, base);
loc_8235ABFC:
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x82360460
	ctx.lr = 0x8235AC04;
	sub_82360460(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-4608
	ctx.r4.s64 = ctx.r11.s64 + -4608;
	// bl 0x82280900
	ctx.lr = 0x8235AC14;
	sub_82280900(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// std r30,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r30.u64);
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// bl 0x82373668
	ctx.lr = 0x8235AC34;
	sub_82373668(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236bad8
	ctx.lr = 0x8235AC44;
	sub_8236BAD8(ctx, base);
	// cmpwi cr6,r3,996
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 996, ctx.xer);
	// bne cr6,0x8235ac64
	if (!ctx.cr6.eq) goto loc_8235AC64;
loc_8235AC4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236bad8
	ctx.lr = 0x8235AC5C;
	sub_8236BAD8(ctx, base);
	// cmpwi cr6,r3,996
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 996, ctx.xer);
	// beq cr6,0x8235ac4c
	if (ctx.cr6.eq) goto loc_8235AC4C;
loc_8235AC64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236bab0
	ctx.lr = 0x8235AC6C;
	sub_8236BAB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235aca0
	if (ctx.cr6.eq) goto loc_8235ACA0;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x8230bba0
	ctx.lr = 0x8235AC80;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235aca0
	if (ctx.cr6.eq) goto loc_8235ACA0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-4656
	ctx.r4.s64 = ctx.r11.s64 + -4656;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8235ACA0;
	sub_82280B08(ctx, base);
loc_8235ACA0:
	// bl 0x8228bcc0
	ctx.lr = 0x8235ACA4;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235acc4
	if (ctx.cr6.eq) goto loc_8235ACC4;
	// bl 0x82141b20
	ctx.lr = 0x8235ACB4;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235acc4
	if (ctx.cr6.eq) goto loc_8235ACC4;
	// bl 0x82393d48
	ctx.lr = 0x8235ACC4;
	sub_82393D48(ctx, base);
loc_8235ACC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235ABA0) {
	__imp__sub_8235ABA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235ACDC) {
	__imp__sub_8235ACDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235ACE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8235ACE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mulli r10,r3,264
	ctx.r10.s64 = ctx.r3.s64 * 264;
	// addi r11,r11,-2712
	ctx.r11.s64 = ctx.r11.s64 + -2712;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r4,r9,-4536
	ctx.r4.s64 = ctx.r9.s64 + -4536;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82280a68
	ctx.lr = 0x8235AD18;
	sub_82280A68(ctx, base);
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r30,r11,-104
	ctx.r30.s64 = ctx.r11.s64 + -104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822805e8
	ctx.lr = 0x8235AD30;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8235AD34;
	sub_822807B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823733c0
	ctx.lr = 0x8235AD44;
	sub_823733C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235ad88
	if (ctx.cr6.eq) goto loc_8235AD88;
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// beq cr6,0x8235ad88
	if (ctx.cr6.eq) goto loc_8235AD88;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x8230bba0
	ctx.lr = 0x8235AD60;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235adb0
	if (ctx.cr6.eq) goto loc_8235ADB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-4584
	ctx.r4.s64 = ctx.r11.s64 + -4584;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8235AD80;
	sub_82280B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8235AD88:
	// bl 0x8235ab08
	ctx.lr = 0x8235AD8C;
	sub_8235AB08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// bl 0x82280760
	ctx.lr = 0x8235ADA8;
	sub_82280760(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822807c8
	ctx.lr = 0x8235ADB0;
	sub_822807C8(ctx, base);
loc_8235ADB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235ACE0) {
	__imp__sub_8235ACE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235ADB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8235ADC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mulli r29,r3,44
	ctx.r29.s64 = ctx.r3.s64 * 44;
	// addi r30,r11,-104
	ctx.r30.s64 = ctx.r11.s64 + -104;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x8235ADDC;
	sub_822807B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8235adf8
	if (!ctx.cr6.eq) goto loc_8235ADF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8235ADF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82280760
	ctx.lr = 0x8235AE04;
	sub_82280760(ctx, base);
	// bl 0x822807d0
	ctx.lr = 0x8235AE08;
	sub_822807D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x82280760
	ctx.lr = 0x8235AE20;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8235AE24;
	sub_822805F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236bab0
	ctx.lr = 0x8235AE2C;
	sub_8236BAB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235ae80
	if (ctx.cr6.eq) goto loc_8235AE80;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,21006
	ctx.r10.u64 = ctx.r11.u64 | 21006;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8235ae80
	if (ctx.cr6.eq) goto loc_8235AE80;
	// addi r11,r30,41
	ctx.r11.s64 = ctx.r30.s64 + 41;
	// lbzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8230bba0
	ctx.lr = 0x8235AE54;
	sub_8230BBA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235ae74
	if (ctx.cr6.eq) goto loc_8235AE74;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-4464
	ctx.r4.s64 = ctx.r11.s64 + -4464;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8235AE74;
	sub_82280B08(ctx, base);
loc_8235AE74:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8235AE80:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-4496
	ctx.r4.s64 = ctx.r11.s64 + -4496;
	// bl 0x82280a68
	ctx.lr = 0x8235AE90;
	sub_82280A68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235ADB8) {
	__imp__sub_8235ADB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235AE9C) {
	__imp__sub_8235AE9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-4404
	ctx.r4.s64 = ctx.r11.s64 + -4404;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8235AEC8;
	sub_82280900(ctx, base);
	// bl 0x8228bcc0
	ctx.lr = 0x8235AECC;
	sub_8228BCC0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235aeec
	if (ctx.cr6.eq) goto loc_8235AEEC;
	// bl 0x82141b20
	ctx.lr = 0x8235AEDC;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235aeec
	if (ctx.cr6.eq) goto loc_8235AEEC;
	// bl 0x82393cc8
	ctx.lr = 0x8235AEEC;
	sub_82393CC8(ctx, base);
loc_8235AEEC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bl 0x823733c0
	ctx.lr = 0x8235AF10;
	sub_823733C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236bad8
	ctx.lr = 0x8235AF20;
	sub_8236BAD8(ctx, base);
	// cmpwi cr6,r3,996
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 996, ctx.xer);
	// bne cr6,0x8235af40
	if (!ctx.cr6.eq) goto loc_8235AF40;
loc_8235AF28:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236bad8
	ctx.lr = 0x8235AF38;
	sub_8236BAD8(ctx, base);
	// cmpwi cr6,r3,996
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 996, ctx.xer);
	// beq cr6,0x8235af28
	if (ctx.cr6.eq) goto loc_8235AF28;
loc_8235AF40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236bab0
	ctx.lr = 0x8235AF48;
	sub_8236BAB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235af64
	if (ctx.cr6.eq) goto loc_8235AF64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-4584
	ctx.r4.s64 = ctx.r11.s64 + -4584;
	// bl 0x82280b08
	ctx.lr = 0x8235AF64;
	sub_82280B08(ctx, base);
loc_8235AF64:
	// bl 0x8228bcc0
	ctx.lr = 0x8235AF68;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235af88
	if (ctx.cr6.eq) goto loc_8235AF88;
	// bl 0x82141b20
	ctx.lr = 0x8235AF78;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235af88
	if (ctx.cr6.eq) goto loc_8235AF88;
	// bl 0x82393d48
	ctx.lr = 0x8235AF88;
	sub_82393D48(ctx, base);
loc_8235AF88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235AEA0) {
	__imp__sub_8235AEA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235AF9C) {
	__imp__sub_8235AF9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8235AFA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235aff4
	if (ctx.cr6.eq) goto loc_8235AFF4;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,112
	ctx.r30.s64 = ctx.r3.s64 + 112;
loc_8235AFC4:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235afdc
	if (ctx.cr6.eq) goto loc_8235AFDC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82142d08
	ctx.lr = 0x8235AFDC;
	sub_82142D08(ctx, base);
loc_8235AFDC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8235afc4
	if (ctx.cr6.lt) goto loc_8235AFC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821426f0
	ctx.lr = 0x8235AFF4;
	sub_821426F0(ctx, base);
loc_8235AFF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235AFA0) {
	__imp__sub_8235AFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235AFFC) {
	__imp__sub_8235AFFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235B000) {
	__imp__sub_8235B000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B004) {
	__imp__sub_8235B004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8235B010;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mulli r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 * 44;
	// addi r30,r11,-104
	ctx.r30.s64 = ctx.r11.s64 + -104;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x8235B02C;
	sub_822807B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8235b048
	if (!ctx.cr6.eq) goto loc_8235B048;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8235B048:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82280760
	ctx.lr = 0x8235B054;
	sub_82280760(ctx, base);
	// bl 0x822807d0
	ctx.lr = 0x8235B058;
	sub_822807D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82280760
	ctx.lr = 0x8235B074;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8235B078;
	sub_822805F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236bab0
	ctx.lr = 0x8235B080;
	sub_8236BAB0(ctx, base);
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r9,r10,20997
	ctx.r9.u64 = ctx.r10.u64 | 20997;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8235b0b0
	if (!ctx.cr6.eq) goto loc_8235B0B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-4224
	ctx.r4.s64 = ctx.r11.s64 + -4224;
	// bl 0x8230ab38
	ctx.lr = 0x8235B0A4;
	sub_8230AB38(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8235B0B0:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,21001
	ctx.r10.u64 = ctx.r11.u64 | 21001;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235b0dc
	if (!ctx.cr6.eq) goto loc_8235B0DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,11320
	ctx.r4.s64 = ctx.r11.s64 + 11320;
	// bl 0x8230ab38
	ctx.lr = 0x8235B0D0;
	sub_8230AB38(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8235B0DC:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20993
	ctx.r10.u64 = ctx.r11.u64 | 20993;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235b11c
	if (!ctx.cr6.eq) goto loc_8235B11C;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,-4364
	ctx.r4.s64 = ctx.r10.s64 + -4364;
	// lwz r3,-4836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4836);
	// bl 0x822e1fa8
	ctx.lr = 0x8235B100;
	sub_822E1FA8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r9,11268
	ctx.r4.s64 = ctx.r9.s64 + 11268;
	// bl 0x8230ab38
	ctx.lr = 0x8235B110;
	sub_8230AB38(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8235B11C:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,57
	ctx.r10.u64 = ctx.r11.u64 | 57;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235b148
	if (!ctx.cr6.eq) goto loc_8235B148;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,9516
	ctx.r4.s64 = ctx.r11.s64 + 9516;
	// bl 0x8230ab38
	ctx.lr = 0x8235B13C;
	sub_8230AB38(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8235B148:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// li r3,16
	ctx.r3.s64 = 16;
	// ori r10,r11,10049
	ctx.r10.u64 = ctx.r11.u64 | 10049;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8235b29c
	if (ctx.cr6.eq) goto loc_8235B29C;
	// rlwinm r11,r5,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r11,0,13,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF8007FFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235b194
	if (ctx.cr6.eq) goto loc_8235B194;
loc_8235B16C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-4276
	ctx.r4.s64 = ctx.r11.s64 + -4276;
	// bl 0x82280b08
	ctx.lr = 0x8235B178;
	sub_82280B08(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,10320
	ctx.r4.s64 = ctx.r10.s64 + 10320;
	// bl 0x8230ab38
	ctx.lr = 0x8235B188;
	sub_8230AB38(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8235B194:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8235b16c
	if (!ctx.cr6.eq) goto loc_8235B16C;
	// lbz r11,31(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 31);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// lbz r27,30(r29)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r29.u32 + 30);
	// addi r4,r10,-4368
	ctx.r4.s64 = ctx.r10.s64 + -4368;
	// lbz r10,29(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 29);
	// lbz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 28);
	// lbz r8,27(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 27);
	// lbz r7,26(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 26);
	// lbz r6,25(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 25);
	// lbz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82280900
	ctx.lr = 0x8235B1DC;
	sub_82280900(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// std r28,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r28.u64);
loc_8235B1F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8235b210
	if (!ctx.cr0.eq) goto loc_8235B210;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8235b1f0
	if (!ctx.cr6.eq) goto loc_8235B1F0;
loc_8235B210:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8235b284
	if (!ctx.cr6.eq) goto loc_8235B284;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-11144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11144);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235b248
	if (!ctx.cr6.eq) goto loc_8235B248;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,10320
	ctx.r4.s64 = ctx.r11.s64 + 10320;
	// bl 0x8230ab38
	ctx.lr = 0x8235B23C;
	sub_8230AB38(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8235B248:
	// bl 0x8230f3d0
	ctx.lr = 0x8235B24C;
	sub_8230F3D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x823df8d0
	ctx.lr = 0x8235B258;
	sub_823DF8D0(ctx, base);
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8235B268;
	sub_823DE1F0(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8235B26C:
	// bl 0x823df900
	ctx.lr = 0x8235B270;
	sub_823DF900(ctx, base);
	// stbx r3,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x8235b26c
	if (ctx.cr6.lt) goto loc_8235B26C;
	// stw r29,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r29.u32);
loc_8235B284:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r28,85(r29)
	PPC_STORE_U8(ctx.r29.u32 + 85, ctx.r28.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,84(r29)
	PPC_STORE_U8(ctx.r29.u32 + 84, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8235B29C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r5,-32761
	ctx.r5.s64 = -2147024896;
	// addi r4,r11,-4276
	ctx.r4.s64 = ctx.r11.s64 + -4276;
	// ori r5,r5,10049
	ctx.r5.u64 = ctx.r5.u64 | 10049;
	// bl 0x82280900
	ctx.lr = 0x8235B2B0;
	sub_82280900(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,11320
	ctx.r4.s64 = ctx.r10.s64 + 11320;
	// bl 0x8230ab38
	ctx.lr = 0x8235B2C0;
	sub_8230AB38(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B008) {
	__imp__sub_8235B008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B2CC) {
	__imp__sub_8235B2CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8235B2D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r7,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r7.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82393cc8
	ctx.lr = 0x8235B2FC;
	sub_82393CC8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r4,r11,-4032
	ctx.r4.s64 = ctx.r11.s64 + -4032;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r24,r30,16
	ctx.r24.s64 = ctx.r30.s64 + 16;
	// bl 0x82280900
	ctx.lr = 0x8235B328;
	sub_82280900(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// std r29,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r29.u64);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// std r29,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r29.u64);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// std r29,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r29.u64);
	// stw r29,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r29.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82373210
	ctx.lr = 0x8235B364;
	sub_82373210(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236bad8
	ctx.lr = 0x8235B374;
	sub_8236BAD8(ctx, base);
	// cmpwi cr6,r3,996
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 996, ctx.xer);
	// bne cr6,0x8235b394
	if (!ctx.cr6.eq) goto loc_8235B394;
loc_8235B37C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236bad8
	ctx.lr = 0x8235B38C;
	sub_8236BAD8(ctx, base);
	// cmpwi cr6,r3,996
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 996, ctx.xer);
	// beq cr6,0x8235b37c
	if (ctx.cr6.eq) goto loc_8235B37C;
loc_8235B394:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236bab0
	ctx.lr = 0x8235B39C;
	sub_8236BAB0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235b418
	if (ctx.cr6.eq) goto loc_8235B418;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-11144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11144);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235b410
	if (!ctx.cr6.eq) goto loc_8235B410;
	// bl 0x82393d48
	ctx.lr = 0x8235B3C0;
	sub_82393D48(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,57
	ctx.r10.u64 = ctx.r11.u64 | 57;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235b3e0
	if (!ctx.cr6.eq) goto loc_8235B3E0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,9516
	ctx.r4.s64 = ctx.r11.s64 + 9516;
	// bl 0x8230ab38
	ctx.lr = 0x8235B3E0;
	sub_8230AB38(ctx, base);
loc_8235B3E0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r11,-4088
	ctx.r4.s64 = ctx.r11.s64 + -4088;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280b08
	ctx.lr = 0x8235B3F4;
	sub_82280B08(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r10,10320
	ctx.r4.s64 = ctx.r10.s64 + 10320;
	// bl 0x8230ab38
	ctx.lr = 0x8235B404;
	sub_8230AB38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8235B410:
	// stb r29,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r29.u8);
	// b 0x8235b420
	goto loc_8235B420;
loc_8235B418:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r11.u8);
loc_8235B420:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lbz r24,7(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r3,16
	ctx.r3.s64 = 16;
	// lbz r23,6(r31)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// addi r4,r10,-4184
	ctx.r4.s64 = ctx.r10.s64 + -4184;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x82280900
	ctx.lr = 0x8235B460;
	sub_82280900(ctx, base);
	// stw r26,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r26.u32);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r28,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r28.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stb r29,85(r30)
	PPC_STORE_U8(ctx.r30.u32 + 85, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r25,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r25.u32);
	// stw r27,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r27.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// bl 0x823de1f0
	ctx.lr = 0x8235B488;
	sub_823DE1F0(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x8235B48C;
	sub_82393D48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B2D0) {
	__imp__sub_8235B2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B498) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,85(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 85);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235B498) {
	__imp__sub_8235B498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8235B4A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mulli r25,r3,44
	ctx.r25.s64 = ctx.r3.s64 * 44;
	// addi r29,r11,-104
	ctx.r29.s64 = ctx.r11.s64 + -104;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// add r3,r25,r11
	ctx.r3.u64 = ctx.r25.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x8235B4C4;
	sub_822807B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8235b4e0
	if (!ctx.cr6.eq) goto loc_8235B4E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8235B4E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82280760
	ctx.lr = 0x8235B4EC;
	sub_82280760(ctx, base);
	// bl 0x822807d0
	ctx.lr = 0x8235B4F0;
	sub_822807D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8236bab0
	ctx.lr = 0x8235B508;
	sub_8236BAB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x8235b650
	if (ctx.cr6.eq) goto loc_8235B650;
	// bl 0x82280760
	ctx.lr = 0x8235B520;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8235B524;
	sub_822805F0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// addi r9,r11,14
	ctx.r9.s64 = ctx.r11.s64 + 14;
	// ori r8,r10,21002
	ctx.r8.u64 = ctx.r10.u64 | 21002;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// stbx r26,r7,r27
	PPC_STORE_U8(ctx.r7.u32 + ctx.r27.u32, ctx.r26.u8);
	// bne cr6,0x8235b56c
	if (!ctx.cr6.eq) goto loc_8235B56C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r3,r11,-3576
	ctx.r3.s64 = ctx.r11.s64 + -3576;
	// bl 0x822e84f0
	ctx.lr = 0x8235B554;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8235B560;
	sub_82280B08(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8235B56C:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20994
	ctx.r10.u64 = ctx.r11.u64 | 20994;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235b5ac
	if (!ctx.cr6.eq) goto loc_8235B5AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,-3688
	ctx.r3.s64 = ctx.r11.s64 + -3688;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x822e84f0
	ctx.lr = 0x8235B594;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8235B5A0;
	sub_82280B08(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8235B5AC:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,57
	ctx.r10.u64 = ctx.r11.u64 | 57;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235b5d8
	if (!ctx.cr6.eq) goto loc_8235B5D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,-3732
	ctx.r4.s64 = ctx.r11.s64 + -3732;
	// bl 0x82280b08
	ctx.lr = 0x8235B5CC;
	sub_82280B08(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8235B5D8:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,21001
	ctx.r10.u64 = ctx.r11.u64 | 21001;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235b604
	if (!ctx.cr6.eq) goto loc_8235B604;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,-3776
	ctx.r4.s64 = ctx.r11.s64 + -3776;
	// bl 0x82280b08
	ctx.lr = 0x8235B5F8;
	sub_82280B08(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8235B604:
	// addi r11,r29,41
	ctx.r11.s64 = ctx.r29.s64 + 41;
	// lbzx r3,r25,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// bl 0x8230bba0
	ctx.lr = 0x8235B610;
	sub_8230BBA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235b644
	if (ctx.cr6.eq) goto loc_8235B644;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,-3864
	ctx.r3.s64 = ctx.r11.s64 + -3864;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x822e84f0
	ctx.lr = 0x8235B638;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8235B644;
	sub_82280B08(ctx, base);
loc_8235B644:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8235B650:
	// bl 0x82280760
	ctx.lr = 0x8235B654;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8235B658;
	sub_822805F0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,25
	ctx.r3.s64 = 25;
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r4,r11,-3916
	ctx.r4.s64 = ctx.r11.s64 + -3916;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82280900
	ctx.lr = 0x8235B670;
	sub_82280900(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B4A0) {
	__imp__sub_8235B4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B67C) {
	__imp__sub_8235B67C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8235B688;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mulli r27,r3,44
	ctx.r27.s64 = ctx.r3.s64 * 44;
	// addi r30,r11,-104
	ctx.r30.s64 = ctx.r11.s64 + -104;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x8235B6A4;
	sub_822807B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8235b6c0
	if (!ctx.cr6.eq) goto loc_8235B6C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8235B6C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236bab0
	ctx.lr = 0x8235B6C8;
	sub_8236BAB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82280760
	ctx.lr = 0x8235B6D8;
	sub_82280760(ctx, base);
	// bl 0x822807d0
	ctx.lr = 0x8235B6DC;
	sub_822807D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// bl 0x82280760
	ctx.lr = 0x8235B6F4;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8235B6F8;
	sub_822805F0(ctx, base);
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// ori r9,r10,20998
	ctx.r9.u64 = ctx.r10.u64 | 20998;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8235b740
	if (!ctx.cr6.eq) goto loc_8235B740;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-3388
	ctx.r4.s64 = ctx.r11.s64 + -3388;
	// bl 0x82280900
	ctx.lr = 0x8235B718;
	sub_82280900(ctx, base);
loc_8235B718:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r10,-3432
	ctx.r4.s64 = ctx.r10.s64 + -3432;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82280900
	ctx.lr = 0x8235B734;
	sub_82280900(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8235B740:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8235b718
	if (ctx.cr6.eq) goto loc_8235B718;
	// addi r11,r30,41
	ctx.r11.s64 = ctx.r30.s64 + 41;
	// lbzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x8230bba0
	ctx.lr = 0x8235B754;
	sub_8230BBA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235b788
	if (ctx.cr6.eq) goto loc_8235B788;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r10,-3488
	ctx.r3.s64 = ctx.r10.s64 + -3488;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e84f0
	ctx.lr = 0x8235B77C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x8235B788;
	sub_82280B08(ctx, base);
loc_8235B788:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B680) {
	__imp__sub_8235B680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B794) {
	__imp__sub_8235B794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8235B7A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82142d08
	ctx.lr = 0x8235B7B0;
	sub_82142D08(ctx, base);
	// addi r11,r30,14
	ctx.r11.s64 = ctx.r30.s64 + 14;
	// rlwinm r29,r11,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235b894
	if (ctx.cr6.eq) goto loc_8235B894;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r10,-3240
	ctx.r4.s64 = ctx.r10.s64 + -3240;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// ld r6,232(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 232);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// bl 0x82280900
	ctx.lr = 0x8235B7F0;
	sub_82280900(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82373520
	ctx.lr = 0x8235B804;
	sub_82373520(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235b870
	if (ctx.cr6.eq) goto loc_8235B870;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r10,r11,20998
	ctx.r10.u64 = ctx.r11.u64 | 20998;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8235b870
	if (ctx.cr6.eq) goto loc_8235B870;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,57
	ctx.r10.u64 = ctx.r11.u64 | 57;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235b848
	if (!ctx.cr6.eq) goto loc_8235B848;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,9516
	ctx.r4.s64 = ctx.r11.s64 + 9516;
	// bl 0x8230ab38
	ctx.lr = 0x8235B840;
	sub_8230AB38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8235B848:
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x8230bba0
	ctx.lr = 0x8235B850;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235b870
	if (ctx.cr6.eq) goto loc_8235B870;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-3292
	ctx.r4.s64 = ctx.r11.s64 + -3292;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8235B870;
	sub_82280B08(ctx, base);
loc_8235B870:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stbx r11,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// beq cr6,0x8235b894
	if (ctx.cr6.eq) goto loc_8235B894;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-3348
	ctx.r4.s64 = ctx.r11.s64 + -3348;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8235B894;
	sub_82280B08(ctx, base);
loc_8235B894:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B798) {
	__imp__sub_8235B798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B89C) {
	__imp__sub_8235B89C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B8A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235b8c4
	if (ctx.cr6.eq) goto loc_8235B8C4;
	// lbz r10,154(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 154);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235b8c4
	if (ctx.cr6.eq) goto loc_8235B8C4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8235B8C4:
	// lbz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,202(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 202);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235B8A0) {
	__imp__sub_8235B8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B8E4) {
	__imp__sub_8235B8E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B8E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235b90c
	if (ctx.cr6.eq) goto loc_8235B90C;
	// lbz r10,154(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 154);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235b90c
	if (!ctx.cr6.eq) goto loc_8235B90C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8235B90C:
	// lbz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,202(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 202);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235B8E8) {
	__imp__sub_8235B8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B92C) {
	__imp__sub_8235B92C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B930) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 112, ctx.r10.u8);
	// b 0x82142d08
	sub_82142D08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235B930) {
	__imp__sub_8235B930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235B958) {
	__imp__sub_8235B958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235B95C) {
	__imp__sub_8235B95C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B960) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8235b9c4
	if (ctx.cr6.gt) goto loc_8235B9C4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b994
	if (ctx.cr6.eq) goto loc_8235B994;
	// bdz 0x8235b988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235B988;
	// bdz 0x8235b9a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235B9A0;
	// bdz 0x8235b9ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235B9AC;
	// b 0x8235b9b8
	goto loc_8235B9B8;
loc_8235B988:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3044
	ctx.r3.s64 = ctx.r11.s64 + -3044;
	// blr 
	return;
loc_8235B994:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3072
	ctx.r3.s64 = ctx.r11.s64 + -3072;
	// blr 
	return;
loc_8235B9A0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3088
	ctx.r3.s64 = ctx.r11.s64 + -3088;
	// blr 
	return;
loc_8235B9AC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3124
	ctx.r3.s64 = ctx.r11.s64 + -3124;
	// blr 
	return;
loc_8235B9B8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3144
	ctx.r3.s64 = ctx.r11.s64 + -3144;
	// blr 
	return;
loc_8235B9C4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-3168
	ctx.r3.s64 = ctx.r11.s64 + -3168;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235B960) {
	__imp__sub_8235B960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235B9D0) {
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
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mulli r9,r4,44
	ctx.r9.s64 = ctx.r4.s64 * 44;
	// addi r10,r11,-104
	ctx.r10.s64 = ctx.r11.s64 + -104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r10,36
	ctx.r11.s64 = ctx.r10.s64 + 36;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235ba58
	if (!ctx.cr6.gt) goto loc_8235BA58;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x8235ba58
	if (ctx.cr6.gt) goto loc_8235BA58;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235ba28
	if (!ctx.cr6.gt) goto loc_8235BA28;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x8235ba28
	if (ctx.cr6.gt) goto loc_8235BA28;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x822807d0
	ctx.lr = 0x8235BA24;
	sub_822807D0(ctx, base);
	// b 0x8235ba2c
	goto loc_8235BA2C;
loc_8235BA28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235BA2C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
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
loc_8235BA58:
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
}

PPC_WEAK_FUNC(sub_8235B9D0) {
	__imp__sub_8235B9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8235BA78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-104
	ctx.r29.s64 = ctx.r11.s64 + -104;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8235BA98:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235bad8
	if (ctx.cr6.eq) goto loc_8235BAD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// slw r10,r26,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// and r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 & ctx.r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8235bad8
	if (ctx.cr6.eq) goto loc_8235BAD8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8235baf8
	if (ctx.cr6.eq) goto loc_8235BAF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235b9d0
	ctx.lr = 0x8235BACC;
	sub_8235B9D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235baf8
	if (!ctx.cr6.eq) goto loc_8235BAF8;
loc_8235BAD8:
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r11,r29,1444
	ctx.r11.s64 = ctx.r29.s64 + 1444;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235ba98
	if (ctx.cr6.lt) goto loc_8235BA98;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8235BAF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235BA70) {
	__imp__sub_8235BA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235BB04) {
	__imp__sub_8235BB04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BB08) {
	PPC_FUNC_PROLOGUE();
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x8235ba70
	sub_8235BA70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235BB08) {
	__imp__sub_8235BB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r31,r11,-104
	ctx.r31.s64 = ctx.r11.s64 + -104;
	// ble cr6,0x8235bb68
	if (!ctx.cr6.gt) goto loc_8235BB68;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bgt cr6,0x8235bb68
	if (ctx.cr6.gt) goto loc_8235BB68;
	// mulli r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 * 44;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822807b0
	ctx.lr = 0x8235BB50;
	sub_822807B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280760
	ctx.lr = 0x8235BB5C;
	sub_82280760(ctx, base);
	// bl 0x822807d0
	ctx.lr = 0x8235BB60;
	sub_822807D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_8235BB68:
	// mulli r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 * 44;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822805f0
	ctx.lr = 0x8235BB78;
	sub_822805F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235BB10) {
	__imp__sub_8235BB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8235BB98;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x8228bcc0
	ctx.lr = 0x8235BBA8;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235bbc8
	if (ctx.cr6.eq) goto loc_8235BBC8;
	// bl 0x82141b20
	ctx.lr = 0x8235BBB8;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235bbc8
	if (ctx.cr6.eq) goto loc_8235BBC8;
	// bl 0x82393cc8
	ctx.lr = 0x8235BBC8;
	sub_82393CC8(ctx, base);
loc_8235BBC8:
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,-104
	ctx.r26.s64 = ctx.r11.s64 + -104;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r26,36
	ctx.r30.s64 = ctx.r26.s64 + 36;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r27,r11,-3016
	ctx.r27.s64 = ctx.r11.s64 + -3016;
loc_8235BBE4:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235bc58
	if (ctx.cr6.eq) goto loc_8235BC58;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// slw r11,r25,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r31.u8 & 0x3F));
	// and r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 & ctx.r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8235bc58
	if (ctx.cr6.eq) goto loc_8235BC58;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8235bc24
	if (ctx.cr6.eq) goto loc_8235BC24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235b9d0
	ctx.lr = 0x8235BC18;
	sub_8235B9D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235bc58
	if (ctx.cr6.eq) goto loc_8235BC58;
loc_8235BC24:
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// bl 0x8236c058
	ctx.lr = 0x8235BC2C;
	sub_8236C058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235bc58
	if (!ctx.cr6.eq) goto loc_8235BC58;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280a68
	ctx.lr = 0x8235BC4C;
	sub_82280A68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235bb10
	ctx.lr = 0x8235BC58;
	sub_8235BB10(ctx, base);
loc_8235BC58:
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// addi r11,r26,1444
	ctx.r11.s64 = ctx.r26.s64 + 1444;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235bbe4
	if (ctx.cr6.lt) goto loc_8235BBE4;
	// bl 0x8228bcc0
	ctx.lr = 0x8235BC70;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235bc90
	if (ctx.cr6.eq) goto loc_8235BC90;
	// bl 0x82141b20
	ctx.lr = 0x8235BC80;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235bc90
	if (ctx.cr6.eq) goto loc_8235BC90;
	// bl 0x82393d48
	ctx.lr = 0x8235BC90;
	sub_82393D48(ctx, base);
loc_8235BC90:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235BB90) {
	__imp__sub_8235BB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BC98) {
	PPC_FUNC_PROLOGUE();
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x8235bb90
	sub_8235BB90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235BC98) {
	__imp__sub_8235BC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8235BCA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-104
	ctx.r30.s64 = ctx.r11.s64 + -104;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
loc_8235BCC0:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235bd10
	if (ctx.cr6.eq) goto loc_8235BD10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235bd10
	if (!ctx.cr6.eq) goto loc_8235BD10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235bcf4
	if (!ctx.cr6.gt) goto loc_8235BCF4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x8235bcf4
	if (ctx.cr6.gt) goto loc_8235BCF4;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x822807d0
	ctx.lr = 0x8235BCF0;
	sub_822807D0(ctx, base);
	// b 0x8235bcf8
	goto loc_8235BCF8;
loc_8235BCF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235BCF8:
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// cmpld cr6,r11,r28
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, ctx.xer);
	// bne cr6,0x8235bd10
	if (!ctx.cr6.eq) goto loc_8235BD10;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8235bd2c
	if (ctx.cr6.eq) goto loc_8235BD2C;
loc_8235BD10:
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r11,r30,1444
	ctx.r11.s64 = ctx.r30.s64 + 1444;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235bcc0
	if (ctx.cr6.lt) goto loc_8235BCC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8235BD2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235BCA0) {
	__imp__sub_8235BCA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BD38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8235BD40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mulli r29,r3,44
	ctx.r29.s64 = ctx.r3.s64 * 44;
	// addi r31,r11,-104
	ctx.r31.s64 = ctx.r11.s64 + -104;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x8235BD5C;
	sub_822807B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x8235bd78
	if (!ctx.cr6.eq) goto loc_8235BD78;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8235BD78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82280760
	ctx.lr = 0x8235BD84;
	sub_82280760(ctx, base);
	// bl 0x822807d0
	ctx.lr = 0x8235BD88;
	sub_822807D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x8236bab0
	ctx.lr = 0x8235BD9C;
	sub_8236BAB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x8235be20
	if (ctx.cr6.eq) goto loc_8235BE20;
	// bl 0x82280760
	ctx.lr = 0x8235BDB4;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8235BDB8;
	sub_822805F0(ctx, base);
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// lbzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x8230bba0
	ctx.lr = 0x8235BDC4;
	sub_8230BBA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235be14
	if (ctx.cr6.eq) goto loc_8235BE14;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r3,16
	ctx.r3.s64 = 16;
	// ori r10,r11,16389
	ctx.r10.u64 = ctx.r11.u64 | 16389;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235bdf4
	if (!ctx.cr6.eq) goto loc_8235BDF4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-2864
	ctx.r4.s64 = ctx.r11.s64 + -2864;
	// bl 0x82280b08
	ctx.lr = 0x8235BDF0;
	sub_82280B08(ctx, base);
	// b 0x8235be04
	goto loc_8235BE04;
loc_8235BDF4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-2912
	ctx.r4.s64 = ctx.r11.s64 + -2912;
	// bl 0x82280b08
	ctx.lr = 0x8235BE04;
	sub_82280B08(ctx, base);
loc_8235BE04:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-2948
	ctx.r4.s64 = ctx.r11.s64 + -2948;
	// bl 0x8230ab38
	ctx.lr = 0x8235BE14;
	sub_8230AB38(ctx, base);
loc_8235BE14:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8235BE20:
	// bl 0x82280760
	ctx.lr = 0x8235BE24;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8235BE28;
	sub_822805F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235BD38) {
	__imp__sub_8235BD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235BE34) {
	__imp__sub_8235BE34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mulli r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 * 44;
	// addi r11,r11,-104
	ctx.r11.s64 = ctx.r11.s64 + -104;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8235bec8
	if (ctx.cr6.gt) goto loc_8235BEC8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235be98
	if (ctx.cr6.eq) goto loc_8235BE98;
	// bdz 0x8235be8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235BE8C;
	// bdz 0x8235bea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235BEA4;
	// bdz 0x8235beb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235BEB0;
	// b 0x8235bebc
	goto loc_8235BEBC;
loc_8235BE8C:
	// bl 0x8235b008
	ctx.lr = 0x8235BE90;
	sub_8235B008(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8235bedc
	goto loc_8235BEDC;
loc_8235BE98:
	// bl 0x8235b4a0
	ctx.lr = 0x8235BE9C;
	sub_8235B4A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8235bedc
	goto loc_8235BEDC;
loc_8235BEA4:
	// bl 0x8235bd38
	ctx.lr = 0x8235BEA8;
	sub_8235BD38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8235bedc
	goto loc_8235BEDC;
loc_8235BEB0:
	// bl 0x8235b680
	ctx.lr = 0x8235BEB4;
	sub_8235B680(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8235bedc
	goto loc_8235BEDC;
loc_8235BEBC:
	// bl 0x8235adb8
	ctx.lr = 0x8235BEC0;
	sub_8235ADB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8235bedc
	goto loc_8235BEDC;
loc_8235BEC8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r3,r11,3736
	ctx.r3.s64 = ctx.r11.s64 + 3736;
	// bl 0x822e84f0
	ctx.lr = 0x8235BED8;
	sub_822E84F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8235BEDC:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8235bef8
	if (ctx.cr6.lt) goto loc_8235BEF8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8235bef8
	if (ctx.cr6.eq) goto loc_8235BEF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8235BEF8;
	sub_82280B08(ctx, base);
loc_8235BEF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235BE38) {
	__imp__sub_8235BE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235BF14) {
	__imp__sub_8235BF14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BF18) {
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
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r5,768
	ctx.r5.s64 = 768;
	// addi r31,r11,-104
	ctx.r31.s64 = ctx.r11.s64 + -104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-1024
	ctx.r3.s64 = ctx.r31.s64 + -1024;
	// bl 0x823de090
	ctx.lr = 0x8235BF40;
	sub_823DE090(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-2808
	ctx.r4.s64 = ctx.r10.s64 + -2808;
	// bl 0x822801e0
	ctx.lr = 0x8235BF50;
	sub_822801E0(ctx, base);
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r9,-360
	ctx.r8.s64 = ctx.r9.s64 + -360;
	// addi r10,r11,-2820
	ctx.r10.s64 = ctx.r11.s64 + -2820;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,-360(r9)
	PPC_STORE_U32(ctx.r9.u32 + -360, ctx.r10.u32);
	// stb r11,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_8235BF18) {
	__imp__sub_8235BF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r3,r11,-104
	ctx.r3.s64 = ctx.r11.s64 + -104;
	// b 0x82280470
	sub_82280470(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235BF80) {
	__imp__sub_8235BF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235BF8C) {
	__imp__sub_8235BF8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235BF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8235BF98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c048
	if (ctx.cr6.eq) goto loc_8235C048;
	// li r4,63
	ctx.r4.s64 = 63;
	// bl 0x8235ba70
	ctx.lr = 0x8235BFB4;
	sub_8235BA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235c048
	if (!ctx.cr6.eq) goto loc_8235C048;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,232
	ctx.r30.s64 = ctx.r29.s64 + 232;
	// addi r28,r29,120
	ctx.r28.s64 = ctx.r29.s64 + 120;
	// addi r27,r11,-2696
	ctx.r27.s64 = ctx.r11.s64 + -2696;
	// addi r26,r10,-2792
	ctx.r26.s64 = ctx.r10.s64 + -2792;
loc_8235BFDC:
	// lbz r10,-8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235c034
	if (ctx.cr6.eq) goto loc_8235C034;
	// lbz r10,-8(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + -8);
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235c00c
	if (!ctx.cr6.eq) goto loc_8235C00C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8235C008;
	sub_82280900(ctx, base);
	// b 0x8235c028
	goto loc_8235C028;
loc_8235C00C:
	// ld r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmpld cr6,r6,r5
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r5.u64, ctx.xer);
	// beq cr6,0x8235c034
	if (ctx.cr6.eq) goto loc_8235C034;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8235C028;
	sub_82280900(ctx, base);
loc_8235C028:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235b798
	ctx.lr = 0x8235C034;
	sub_8235B798(ctx, base);
loc_8235C034:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8235bfdc
	if (ctx.cr6.lt) goto loc_8235BFDC;
loc_8235C048:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235BF90) {
	__imp__sub_8235BF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C050) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,136(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235C050) {
	__imp__sub_8235C050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8235c0bc
	if (!ctx.cr6.eq) goto loc_8235C0BC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r10,-2600
	ctx.r4.s64 = ctx.r10.s64 + -2600;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x8235C0B8;
	sub_82280C30(ctx, base);
	// b 0x8235c0f4
	goto loc_8235C0F4;
loc_8235C0BC:
	// lis r11,32512
	ctx.r11.s64 = 2130706432;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8235c0dc
	if (ctx.cr6.eq) goto loc_8235C0DC;
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r6,140(r31)
	PPC_STORE_U16(ctx.r31.u32 + 140, ctx.r6.u16);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x8235c0f0
	goto loc_8235C0F0;
loc_8235C0DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// sth r11,140(r31)
	PPC_STORE_U16(ctx.r31.u32 + 140, ctx.r11.u16);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x82283040
	ctx.lr = 0x8235C0F0;
	sub_82283040(ctx, base);
loc_8235C0F0:
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_8235C0F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235C068) {
	__imp__sub_8235C068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235C10C) {
	__imp__sub_8235C10C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// lis r9,32512
	ctx.r9.s64 = 2130706432;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// ori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 | 1;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bne cr6,0x8235c178
	if (!ctx.cr6.eq) goto loc_8235C178;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8235c178
	if (ctx.cr6.eq) goto loc_8235C178;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82283040
	ctx.lr = 0x8235C170;
	sub_82283040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_8235C178:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235c1ac
	if (ctx.cr6.eq) goto loc_8235C1AC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// stw r9,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r9.u32);
	// stw r8,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r8.u32);
loc_8235C1AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235C110) {
	__imp__sub_8235C110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235C1C4) {
	__imp__sub_8235C1C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C1C8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r8,140(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235C1C8) {
	__imp__sub_8235C1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235C1F4) {
	__imp__sub_8235C1F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C1F8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235C1F8) {
	__imp__sub_8235C1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235C21C) {
	__imp__sub_8235C21C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C220) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,128(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235C220) {
	__imp__sub_8235C220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C238) {
	PPC_FUNC_PROLOGUE();
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235C238) {
	__imp__sub_8235C238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235C244) {
	__imp__sub_8235C244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C248) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235C248) {
	__imp__sub_8235C248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8235C258;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r10,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r10.u64);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c4c4
	if (ctx.cr6.eq) goto loc_8235C4C4;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r25,0
	ctx.r25.s64 = 0;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r4
	ctx.r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r10,112(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235c2e4
	if (ctx.cr6.eq) goto loc_8235C2E4;
	// ld r7,120(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 120);
	// cmpld cr6,r7,r5
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r5.u64, ctx.xer);
	// beq cr6,0x8235c4c4
	if (ctx.cr6.eq) goto loc_8235C4C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r11,-2288
	ctx.r4.s64 = ctx.r11.s64 + -2288;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280c30
	ctx.lr = 0x8235C2C8;
	sub_82280C30(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235c2e4
	if (ctx.cr6.eq) goto loc_8235C2E4;
	// stb r25,112(r29)
	PPC_STORE_U8(ctx.r29.u32 + 112, ctx.r25.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142d08
	ctx.lr = 0x8235C2E4;
	sub_82142D08(ctx, base);
loc_8235C2E4:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
loc_8235C2EC:
	// lbz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235c304
	if (ctx.cr6.eq) goto loc_8235C304;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r10,r28
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r28.u64, ctx.xer);
	// beq cr6,0x8235c318
	if (ctx.cr6.eq) goto loc_8235C318;
loc_8235C304:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x8235c2ec
	if (ctx.cr6.lt) goto loc_8235C2EC;
	// b 0x8235c384
	goto loc_8235C384;
loc_8235C318:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8235c384
	if (ctx.cr6.lt) goto loc_8235C384;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,-2356
	ctx.r26.s64 = ctx.r11.s64 + -2356;
loc_8235C328:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8235C340;
	sub_82280900(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c36c
	if (ctx.cr6.eq) goto loc_8235C36C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r25,112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 112, ctx.r25.u8);
	// bl 0x82142d08
	ctx.lr = 0x8235C36C;
	sub_82142D08(ctx, base);
loc_8235C36C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235a898
	ctx.lr = 0x8235C378;
	sub_8235A898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8235c328
	if (!ctx.cr6.lt) goto loc_8235C328;
loc_8235C384:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r8,r24
	ctx.r30.u64 = ctx.r8.u64 & ctx.r24.u64;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235c3ac
	if (ctx.cr6.eq) goto loc_8235C3AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r11,-2364
	ctx.r7.s64 = ctx.r11.s64 + -2364;
	// b 0x8235c3b4
	goto loc_8235C3B4;
loc_8235C3AC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r11,-2372
	ctx.r7.s64 = ctx.r11.s64 + -2372;
loc_8235C3B4:
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c3d4
	if (ctx.cr6.eq) goto loc_8235C3D4;
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235c3d4
	if (!ctx.cr6.eq) goto loc_8235C3D4;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8235C3D4:
	// lbz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c3f0
	if (ctx.cr6.eq) goto loc_8235C3F0;
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235c3f0
	if (!ctx.cr6.eq) goto loc_8235C3F0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8235C3F0:
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c410
	if (ctx.cr6.eq) goto loc_8235C410;
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c410
	if (ctx.cr6.eq) goto loc_8235C410;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8235C410:
	// lbz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c42c
	if (ctx.cr6.eq) goto loc_8235C42C;
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c42c
	if (ctx.cr6.eq) goto loc_8235C42C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8235C42C:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r4,r6,-2512
	ctx.r4.s64 = ctx.r6.s64 + -2512;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8235C458;
	sub_82280900(ctx, base);
	// lis r5,32512
	ctx.r5.s64 = 2130706432;
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r11,r5,1
	ctx.r11.u64 = ctx.r5.u64 | 1;
	// stb r30,154(r29)
	PPC_STORE_U8(ctx.r29.u32 + 154, ctx.r30.u8);
	// stb r4,112(r29)
	PPC_STORE_U8(ctx.r29.u32 + 112, ctx.r4.u8);
	// stw r23,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r23.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// std r28,120(r29)
	PPC_STORE_U64(ctx.r29.u32 + 120, ctx.r28.u64);
	// stw r25,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r25.u32);
	// beq cr6,0x8235c488
	if (ctx.cr6.eq) goto loc_8235C488;
	// bl 0x823728d8
	ctx.lr = 0x8235C488;
	sub_823728D8(ctx, base);
loc_8235C488:
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c110
	ctx.lr = 0x8235C4A0;
	sub_8235C110(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82142b30
	ctx.lr = 0x8235C4B0;
	sub_82142B30(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82141280
	ctx.lr = 0x8235C4B8;
	sub_82141280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82136518
	ctx.lr = 0x8235C4C4;
	sub_82136518(ctx, base);
loc_8235C4C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235C250) {
	__imp__sub_8235C250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235C4CC) {
	__imp__sub_8235C4CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x8235C4D8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// bl 0x82310110
	ctx.lr = 0x8235C4E8;
	sub_82310110(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8235ba70
	ctx.lr = 0x8235C4F8;
	sub_8235BA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c698
	if (ctx.cr6.eq) goto loc_8235C698;
	// bl 0x8228bcc0
	ctx.lr = 0x8235C508;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c528
	if (ctx.cr6.eq) goto loc_8235C528;
	// bl 0x82141b20
	ctx.lr = 0x8235C518;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c528
	if (ctx.cr6.eq) goto loc_8235C528;
	// bl 0x82393cc8
	ctx.lr = 0x8235C528;
	sub_82393CC8(ctx, base);
loc_8235C528:
	// lis r4,-31810
	ctx.r4.s64 = -2084700160;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r20,1
	ctx.r20.s64 = 1;
	// addi r28,r4,-104
	ctx.r28.s64 = ctx.r4.s64 + -104;
	// addi r26,r5,-3168
	ctx.r26.s64 = ctx.r5.s64 + -3168;
	// addi r25,r6,-3144
	ctx.r25.s64 = ctx.r6.s64 + -3144;
	// addi r24,r7,-3124
	ctx.r24.s64 = ctx.r7.s64 + -3124;
	// addi r23,r8,-3088
	ctx.r23.s64 = ctx.r8.s64 + -3088;
	// addi r22,r9,-3072
	ctx.r22.s64 = ctx.r9.s64 + -3072;
	// addi r21,r10,-3044
	ctx.r21.s64 = ctx.r10.s64 + -3044;
	// addi r27,r11,-2204
	ctx.r27.s64 = ctx.r11.s64 + -2204;
loc_8235C56C:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r28,36
	ctx.r30.s64 = ctx.r28.s64 + 36;
loc_8235C574:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c648
	if (ctx.cr6.eq) goto loc_8235C648;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// slw r11,r20,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r31.u8 & 0x3F));
	// and r10,r11,r19
	ctx.r10.u64 = ctx.r11.u64 & ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8235c648
	if (ctx.cr6.eq) goto loc_8235C648;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8235c5b4
	if (ctx.cr6.eq) goto loc_8235C5B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8235b9d0
	ctx.lr = 0x8235C5A8;
	sub_8235B9D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c648
	if (ctx.cr6.eq) goto loc_8235C648;
loc_8235C5B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235be38
	ctx.lr = 0x8235C5BC;
	sub_8235BE38(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8235c5cc
	if (ctx.cr6.eq) goto loc_8235C5CC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8235c648
	if (!ctx.cr6.eq) goto loc_8235C648;
loc_8235C5CC:
	// bl 0x82310110
	ctx.lr = 0x8235C5D0;
	sub_82310110(ctx, base);
	// subf r11,r17,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r17.s64;
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// ble cr6,0x8235c648
	if (!ctx.cr6.gt) goto loc_8235C648;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8235c62c
	if (ctx.cr6.gt) goto loc_8235C62C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235c60c
	if (ctx.cr6.eq) goto loc_8235C60C;
	// bdz 0x8235c604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235C604;
	// bdz 0x8235c614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235C614;
	// bdz 0x8235c61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235C61C;
	// b 0x8235c624
	goto loc_8235C624;
loc_8235C604:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// b 0x8235c630
	goto loc_8235C630;
loc_8235C60C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x8235c630
	goto loc_8235C630;
loc_8235C614:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x8235c630
	goto loc_8235C630;
loc_8235C61C:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x8235c630
	goto loc_8235C630;
loc_8235C624:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x8235c630
	goto loc_8235C630;
loc_8235C62C:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8235C630:
	// bl 0x82310110
	ctx.lr = 0x8235C634;
	sub_82310110(ctx, base);
	// subf r5,r17,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r17.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82280c30
	ctx.lr = 0x8235C648;
	sub_82280C30(ctx, base);
loc_8235C648:
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// addi r11,r28,1444
	ctx.r11.s64 = ctx.r28.s64 + 1444;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235c574
	if (ctx.cr6.lt) goto loc_8235C574;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8235ba70
	ctx.lr = 0x8235C668;
	sub_8235BA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235c56c
	if (!ctx.cr6.eq) goto loc_8235C56C;
	// bl 0x8228bcc0
	ctx.lr = 0x8235C678;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c698
	if (ctx.cr6.eq) goto loc_8235C698;
	// bl 0x82141b20
	ctx.lr = 0x8235C688;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c698
	if (ctx.cr6.eq) goto loc_8235C698;
	// bl 0x82393d48
	ctx.lr = 0x8235C698;
	sub_82393D48(ctx, base);
loc_8235C698:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235C4D0) {
	__imp__sub_8235C4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C6A0) {
	PPC_FUNC_PROLOGUE();
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8235c4d0
	sub_8235C4D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235C6A0) {
	__imp__sub_8235C6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C6A8) {
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
	// li r4,63
	ctx.r4.s64 = 63;
	// bl 0x8235c4d0
	ctx.lr = 0x8235C6BC;
	sub_8235C4D0(ctx, base);
	// bl 0x8230a490
	ctx.lr = 0x8235C6C0;
	sub_8230A490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235C6A8) {
	__imp__sub_8235C6A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8235C6D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c7e0
	if (ctx.cr6.eq) goto loc_8235C7E0;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r28,r11,-104
	ctx.r28.s64 = ctx.r11.s64 + -104;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822805e8
	ctx.lr = 0x8235C708;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8235C70C;
	sub_822807B0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8235c72c
	if (ctx.cr6.eq) goto loc_8235C72C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c4d0
	ctx.lr = 0x8235C72C;
	sub_8235C4D0(ctx, base);
loc_8235C72C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-2096
	ctx.r4.s64 = ctx.r11.s64 + -2096;
	// bl 0x82280900
	ctx.lr = 0x8235C73C;
	sub_82280900(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823735c8
	ctx.lr = 0x8235C74C;
	sub_823735C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235c764
	if (ctx.cr6.eq) goto loc_8235C764;
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8235c768
	if (!ctx.cr6.eq) goto loc_8235C768;
loc_8235C764:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8235C768:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r11.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235c7b8
	if (!ctx.cr6.eq) goto loc_8235C7B8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230bba0
	ctx.lr = 0x8235C780;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c7a0
	if (ctx.cr6.eq) goto loc_8235C7A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2148
	ctx.r4.s64 = ctx.r11.s64 + -2148;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8235C7A0;
	sub_82280B08(ctx, base);
loc_8235C7A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82280760
	ctx.lr = 0x8235C7AC;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8235C7B0;
	sub_822805F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8235C7B8:
	// bl 0x8235ab08
	ctx.lr = 0x8235C7BC;
	sub_8235AB08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// bl 0x82280760
	ctx.lr = 0x8235C7D8;
	sub_82280760(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822807c8
	ctx.lr = 0x8235C7E0;
	sub_822807C8(ctx, base);
loc_8235C7E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235C6D0) {
	__imp__sub_8235C6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235C7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8235C7F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r11,4688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4688);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x8235c838
	if (!ctx.cr6.eq) goto loc_8235C838;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r30,-16768(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// b 0x8235c864
	goto loc_8235C864;
loc_8235C838:
	// li r30,4
	ctx.r30.s64 = 4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8235C840:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230ac58
	ctx.lr = 0x8235C848;
	sub_8230AC58(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8235c860
	if (!ctx.cr6.lt) goto loc_8235C860;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8235c840
	if (ctx.cr6.lt) goto loc_8235C840;
	// b 0x8235c864
	goto loc_8235C864;
loc_8235C860:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8235C864:
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r22,r11,11320
	ctx.r22.s64 = ctx.r11.s64 + 11320;
	// lwz r11,-11144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11144);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8235c89c
	if (!ctx.cr6.eq) goto loc_8235C89C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230ac58
	ctx.lr = 0x8235C888;
	sub_8230AC58(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8235c89c
	if (!ctx.cr6.lt) goto loc_8235C89C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8230ab38
	ctx.lr = 0x8235C89C;
	sub_8230AB38(ctx, base);
loc_8235C89C:
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r29,r11,-1128
	ctx.r29.s64 = ctx.r11.s64 + -1128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,1024
	ctx.r3.s64 = ctx.r29.s64 + 1024;
	// bl 0x822805e8
	ctx.lr = 0x8235C8B4;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8235C8B8;
	sub_822807B0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r11,-2064
	ctx.r4.s64 = ctx.r11.s64 + -2064;
	// lwz r6,16(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r31,r25,16
	ctx.r31.s64 = ctx.r25.s64 + 16;
	// bl 0x82280900
	ctx.lr = 0x8235C8E8;
	sub_82280900(ctx, base);
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235c8fc
	if (ctx.cr6.eq) goto loc_8235C8FC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82142e90
	ctx.lr = 0x8235C8FC;
	sub_82142E90(ctx, base);
loc_8235C8FC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82142948
	ctx.lr = 0x8235C904;
	sub_82142948(ctx, base);
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x8235C914;
	sub_823DE090(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r8,r25,24
	ctx.r8.s64 = ctx.r25.s64 + 24;
	// addi r7,r25,88
	ctx.r7.s64 = ctx.r25.s64 + 88;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82373210
	ctx.lr = 0x8235C938;
	sub_82373210(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// beq cr6,0x8235c99c
	if (ctx.cr6.eq) goto loc_8235C99C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230bba0
	ctx.lr = 0x8235C960;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c980
	if (ctx.cr6.eq) goto loc_8235C980;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-4276
	ctx.r4.s64 = ctx.r11.s64 + -4276;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8235C980;
	sub_82280900(ctx, base);
loc_8235C980:
	// addi r3,r29,1024
	ctx.r3.s64 = ctx.r29.s64 + 1024;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82280760
	ctx.lr = 0x8235C98C;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8235C990;
	sub_822805F0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8230ab38
	ctx.lr = 0x8235C99C;
	sub_8230AB38(ctx, base);
loc_8235C99C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8235C9A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235ca10
	if (ctx.cr6.eq) goto loc_8235CA10;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r9,r29,768
	ctx.r9.s64 = ctx.r29.s64 + 768;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8235c9a4
	if (ctx.cr6.lt) goto loc_8235C9A4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8235C9C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// addi r3,r29,1024
	ctx.r3.s64 = ctx.r29.s64 + 1024;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82280760
	ctx.lr = 0x8235C9E0;
	sub_82280760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822807c8
	ctx.lr = 0x8235C9E8;
	sub_822807C8(ctx, base);
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// lwz r11,8820(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8820);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8235ca08
	if (!ctx.cr6.eq) goto loc_8235CA08;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8235c4d0
	ctx.lr = 0x8235CA08;
	sub_8235C4D0(ctx, base);
loc_8235CA08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8235CA10:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8235c9c8
	goto loc_8235C9C8;
}

PPC_WEAK_FUNC(sub_8235C7E8) {
	__imp__sub_8235C7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235CA24) {
	__imp__sub_8235CA24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8235CA30;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// bl 0x8235c4d0
	ctx.lr = 0x8235CA54;
	sub_8235C4D0(ctx, base);
	// bl 0x8230a490
	ctx.lr = 0x8235CA58;
	sub_8230A490(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,232
	ctx.r11.s64 = ctx.r30.s64 + 232;
loc_8235CA60:
	// lbz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8235ca78
	if (ctx.cr6.eq) goto loc_8235CA78;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r26
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r26.u64, ctx.xer);
	// beq cr6,0x8235ca8c
	if (ctx.cr6.eq) goto loc_8235CA8C;
loc_8235CA78:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8235ca60
	if (ctx.cr6.lt) goto loc_8235CA60;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8235CA8C:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8235cbd4
	if (ctx.cr6.eq) goto loc_8235CBD4;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r23,r11,-104
	ctx.r23.s64 = ctx.r11.s64 + -104;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822805e8
	ctx.lr = 0x8235CAAC;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8235CAB0;
	sub_822807B0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8235ab08
	ctx.lr = 0x8235CAB8;
	sub_8235AB08(ctx, base);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r28,14
	ctx.r10.s64 = ctx.r28.s64 + 14;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r27,1
	ctx.r27.s64 = 1;
	// clrlwi r7,r22,24
	ctx.r7.u64 = ctx.r22.u32 & 0xFF;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// std r26,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r26.u64);
	// addi r25,r31,16
	ctx.r25.s64 = ctx.r31.s64 + 16;
	// stbx r27,r8,r30
	PPC_STORE_U8(ctx.r8.u32 + ctx.r30.u32, ctx.r27.u8);
	// std r26,232(r9)
	PPC_STORE_U64(ctx.r9.u32 + 232, ctx.r26.u64);
	// bl 0x82280760
	ctx.lr = 0x8235CB04;
	sub_82280760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822807c8
	ctx.lr = 0x8235CB0C;
	sub_822807C8(ctx, base);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8235cb20
	if (!ctx.cr6.eq) goto loc_8235CB20;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// b 0x8235cb30
	goto loc_8235CB30;
loc_8235CB20:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235cb30
	if (!ctx.cr6.eq) goto loc_8235CB30;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8235CB30:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235cb48
	if (ctx.cr6.eq) goto loc_8235CB48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r11,-2364
	ctx.r6.s64 = ctx.r11.s64 + -2364;
	// b 0x8235cb50
	goto loc_8235CB50;
loc_8235CB48:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r11,-2372
	ctx.r6.s64 = ctx.r11.s64 + -2372;
loc_8235CB50:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,-1896
	ctx.r4.s64 = ctx.r11.s64 + -1896;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8235CB70;
	sub_82280900(ctx, base);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82373470
	ctx.lr = 0x8235CB88;
	sub_82373470(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235cbd4
	if (ctx.cr6.eq) goto loc_8235CBD4;
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// beq cr6,0x8235cbd4
	if (ctx.cr6.eq) goto loc_8235CBD4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8230bba0
	ctx.lr = 0x8235CBA4;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235cbc4
	if (ctx.cr6.eq) goto loc_8235CBC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-1952
	ctx.r4.s64 = ctx.r11.s64 + -1952;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8235CBC4;
	sub_82280B08(ctx, base);
loc_8235CBC4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82280760
	ctx.lr = 0x8235CBD0;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8235CBD4;
	sub_822805F0(ctx, base);
loc_8235CBD4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235CA28) {
	__imp__sub_8235CA28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235CBDC) {
	__imp__sub_8235CBDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CBE0) {
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
	// li r4,63
	ctx.r4.s64 = 63;
	// bl 0x8235c4d0
	ctx.lr = 0x8235CBF4;
	sub_8235C4D0(ctx, base);
	// bl 0x8230a490
	ctx.lr = 0x8235CBF8;
	sub_8230A490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235CBE0) {
	__imp__sub_8235CBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8235CC10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,120
	ctx.r31.s64 = ctx.r3.s64 + 120;
	// addi r28,r3,224
	ctx.r28.s64 = ctx.r3.s64 + 224;
loc_8235CC24:
	// lbz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235cc6c
	if (ctx.cr6.eq) goto loc_8235CC6C;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235cc6c
	if (!ctx.cr6.eq) goto loc_8235CC6C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8235bca0
	ctx.lr = 0x8235CC48;
	sub_8235BCA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235cc6c
	if (!ctx.cr6.eq) goto loc_8235CC6C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r7,34(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,216(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// bl 0x8235ca28
	ctx.lr = 0x8235CC6C;
	sub_8235CA28(ctx, base);
loc_8235CC6C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x8235cc24
	if (ctx.cr6.lt) goto loc_8235CC24;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235CC08) {
	__imp__sub_8235CC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CC88) {
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
	// lbz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235ccc4
	if (ctx.cr6.eq) goto loc_8235CCC4;
	// li r4,63
	ctx.r4.s64 = 63;
	// bl 0x8235ba70
	ctx.lr = 0x8235CCB0;
	sub_8235BA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235ccc4
	if (!ctx.cr6.eq) goto loc_8235CCC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235cc08
	ctx.lr = 0x8235CCC4;
	sub_8235CC08(ctx, base);
loc_8235CCC4:
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

PPC_WEAK_FUNC(sub_8235CC88) {
	__imp__sub_8235CC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CCD8) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235cd28
	if (ctx.cr6.eq) goto loc_8235CD28;
	// bl 0x8235bf90
	ctx.lr = 0x8235CCFC;
	sub_8235BF90(ctx, base);
	// lbz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235cd28
	if (ctx.cr6.eq) goto loc_8235CD28;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ba70
	ctx.lr = 0x8235CD14;
	sub_8235BA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235cd28
	if (!ctx.cr6.eq) goto loc_8235CD28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235cc08
	ctx.lr = 0x8235CD28;
	sub_8235CC08(ctx, base);
loc_8235CD28:
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

PPC_WEAK_FUNC(sub_8235CCD8) {
	__imp__sub_8235CCD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235CD3C) {
	__imp__sub_8235CD3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CD40) {
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
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r31,r11,-360
	ctx.r31.s64 = ctx.r11.s64 + -360;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235cd98
	if (ctx.cr6.eq) goto loc_8235CD98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235bf90
	ctx.lr = 0x8235CD6C;
	sub_8235BF90(ctx, base);
	// lbz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235cd98
	if (ctx.cr6.eq) goto loc_8235CD98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,63
	ctx.r4.s64 = 63;
	// bl 0x8235ba70
	ctx.lr = 0x8235CD84;
	sub_8235BA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235cd98
	if (!ctx.cr6.eq) goto loc_8235CD98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235cc08
	ctx.lr = 0x8235CD98;
	sub_8235CC08(ctx, base);
loc_8235CD98:
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

PPC_WEAK_FUNC(sub_8235CD40) {
	__imp__sub_8235CD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235CDAC) {
	__imp__sub_8235CDAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8235CDB8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c4d0
	ctx.lr = 0x8235CDD0;
	sub_8235C4D0(ctx, base);
	// bl 0x8230a490
	ctx.lr = 0x8235CDD4;
	sub_8230A490(ctx, base);
	// bl 0x8235ab08
	ctx.lr = 0x8235CDD8;
	sub_8235AB08(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r23,r3,8
	ctx.r23.s64 = ctx.r3.s64 + 8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
	// addi r27,r23,-8
	ctx.r27.s64 = ctx.r23.s64 + -8;
	// addi r26,r11,-1744
	ctx.r26.s64 = ctx.r11.s64 + -1744;
loc_8235CDFC:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235ce30
	if (ctx.cr6.eq) goto loc_8235CE30;
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stdu r6,8(r27)
	ea = 8 + ctx.r27.u32;
	PPC_STORE_U64(ea, ctx.r6.u64);
	ctx.r27.u32 = ea;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82280a68
	ctx.lr = 0x8235CE2C;
	sub_82280A68(ctx, base);
	// stb r24,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r24.u8);
loc_8235CE30:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x8235cdfc
	if (ctx.cr6.lt) goto loc_8235CDFC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8235cef0
	if (ctx.cr6.eq) goto loc_8235CEF0;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r30,r11,-104
	ctx.r30.s64 = ctx.r11.s64 + -104;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822805e8
	ctx.lr = 0x8235CE60;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x8235CE64;
	sub_822807B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82280760
	ctx.lr = 0x8235CE74;
	sub_82280760(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822807c8
	ctx.lr = 0x8235CE7C;
	sub_822807C8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82373520
	ctx.lr = 0x8235CE90;
	sub_82373520(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235cee4
	if (ctx.cr6.eq) goto loc_8235CEE4;
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// beq cr6,0x8235cee4
	if (ctx.cr6.eq) goto loc_8235CEE4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8230bba0
	ctx.lr = 0x8235CEAC;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235cecc
	if (ctx.cr6.eq) goto loc_8235CECC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-1808
	ctx.r4.s64 = ctx.r11.s64 + -1808;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8235CECC;
	sub_82280B08(ctx, base);
loc_8235CECC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82280760
	ctx.lr = 0x8235CED8;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x8235CEDC;
	sub_822805F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8235CEE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r31.u32);
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
loc_8235CEF0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235CDB0) {
	__imp__sub_8235CDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CEF8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8235cdb0
	ctx.lr = 0x8235CF18;
	sub_8235CDB0(ctx, base);
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c4d0
	ctx.lr = 0x8235CF24;
	sub_8235C4D0(ctx, base);
	// bl 0x8230a490
	ctx.lr = 0x8235CF28;
	sub_8230A490(ctx, base);
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

PPC_WEAK_FUNC(sub_8235CEF8) {
	__imp__sub_8235CEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235CF3C) {
	__imp__sub_8235CF3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235CF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8235CF48;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82141588
	ctx.lr = 0x8235CF50;
	sub_82141588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235d09c
	if (!ctx.cr6.eq) goto loc_8235D09C;
	// lis r26,-31810
	ctx.r26.s64 = -2084700160;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1308(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1308, ctx.r11.u8);
	// bl 0x82310110
	ctx.lr = 0x8235CF6C;
	sub_82310110(ctx, base);
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r29,r11,-2712
	ctx.r29.s64 = ctx.r11.s64 + -2712;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r29,228
	ctx.r11.s64 = ctx.r29.s64 + 228;
loc_8235CF90:
	// lbz r9,-228(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -228);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235cfc8
	if (ctx.cr6.eq) goto loc_8235CFC8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8235cfb0
	if (!ctx.cr6.lt) goto loc_8235CFB0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_8235CFB0:
	// addi r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 + 264;
	// addi r9,r29,1812
	ctx.r9.s64 = ctx.r29.s64 + 1812;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8235cf90
	if (ctx.cr6.lt) goto loc_8235CF90;
	// b 0x8235cfcc
	goto loc_8235CFCC;
loc_8235CFC8:
	// li r24,1
	ctx.r24.s64 = 1;
loc_8235CFCC:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
loc_8235CFD4:
	// lbz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d080
	if (ctx.cr6.eq) goto loc_8235D080;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x8230bd68
	ctx.lr = 0x8235CFE8;
	sub_8230BD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d080
	if (ctx.cr6.eq) goto loc_8235D080;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ba70
	ctx.lr = 0x8235D000;
	sub_8235BA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235d080
	if (!ctx.cr6.eq) goto loc_8235D080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235aba0
	ctx.lr = 0x8235D014;
	sub_8235ABA0(ctx, base);
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ba70
	ctx.lr = 0x8235D020;
	sub_8235BA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235d080
	if (!ctx.cr6.eq) goto loc_8235D080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x8235cdb0
	ctx.lr = 0x8235D038;
	sub_8235CDB0(ctx, base);
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ba70
	ctx.lr = 0x8235D044;
	sub_8235BA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235d080
	if (!ctx.cr6.eq) goto loc_8235D080;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235d064
	if (!ctx.cr6.eq) goto loc_8235D064;
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8235d070
	if (ctx.cr6.eq) goto loc_8235D070;
loc_8235D064:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// subf. r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8235d080
	if (ctx.cr0.lt) goto loc_8235D080;
loc_8235D070:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ace0
	ctx.lr = 0x8235D078;
	sub_8235ACE0(ctx, base);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// stb r25,-8(r31)
	PPC_STORE_U8(ctx.r31.u32 + -8, ctx.r25.u8);
loc_8235D080:
	// addi r31,r31,264
	ctx.r31.s64 = ctx.r31.s64 + 264;
	// addi r11,r29,1592
	ctx.r11.s64 = ctx.r29.s64 + 1592;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235cfd4
	if (ctx.cr6.lt) goto loc_8235CFD4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stb r25,1308(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1308, ctx.r25.u8);
loc_8235D09C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235CF40) {
	__imp__sub_8235CF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D0A4) {
	__imp__sub_8235D0A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8235D0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-104
	ctx.r29.s64 = ctx.r11.s64 + -104;
	// addi r31,r29,40
	ctx.r31.s64 = ctx.r29.s64 + 40;
loc_8235D0C4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d0d8
	if (ctx.cr6.eq) goto loc_8235D0D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235be38
	ctx.lr = 0x8235D0D8;
	sub_8235BE38(ctx, base);
loc_8235D0D8:
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r11,r29,1448
	ctx.r11.s64 = ctx.r29.s64 + 1448;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235d0c4
	if (ctx.cr6.lt) goto loc_8235D0C4;
	// bl 0x8235cf40
	ctx.lr = 0x8235D0F0;
	sub_8235CF40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235D0A8) {
	__imp__sub_8235D0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bb90
	ctx.lr = 0x8235D118;
	sub_8235BB90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235aba0
	ctx.lr = 0x8235D120;
	sub_8235ABA0(ctx, base);
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c4d0
	ctx.lr = 0x8235D12C;
	sub_8235C4D0(ctx, base);
	// bl 0x8230a490
	ctx.lr = 0x8235D130;
	sub_8230A490(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x8235cdb0
	ctx.lr = 0x8235D13C;
	sub_8235CDB0(ctx, base);
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c4d0
	ctx.lr = 0x8235D148;
	sub_8235C4D0(ctx, base);
	// bl 0x8230a490
	ctx.lr = 0x8235D14C;
	sub_8230A490(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235D15C:
	// stbu r30,48(r11)
	ea = 48 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8235d15c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235D15C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8235aea0
	ctx.lr = 0x8235D16C;
	sub_8235AEA0(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D0F8) {
	__imp__sub_8235D0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-1668
	ctx.r4.s64 = ctx.r11.s64 + -1668;
	// bl 0x82280a68
	ctx.lr = 0x8235D1B0;
	sub_82280A68(ctx, base);
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// mulli r30,r31,264
	ctx.r30.s64 = ctx.r31.s64 * 264;
	// addi r31,r10,-2712
	ctx.r31.s64 = ctx.r10.s64 + -2712;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8235d0f8
	ctx.lr = 0x8235D1C8;
	sub_8235D0F8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D188) {
	__imp__sub_8235D188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8235D1F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,-2712
	ctx.r27.s64 = ctx.r11.s64 + -2712;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r11,-1668
	ctx.r29.s64 = ctx.r11.s64 + -1668;
loc_8235D20C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d244
	if (ctx.cr6.eq) goto loc_8235D244;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c4d0
	ctx.lr = 0x8235D228;
	sub_8235C4D0(ctx, base);
	// bl 0x8230a490
	ctx.lr = 0x8235D22C;
	sub_8230A490(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280a68
	ctx.lr = 0x8235D238;
	sub_82280A68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d0f8
	ctx.lr = 0x8235D240;
	sub_8235D0F8(ctx, base);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_8235D244:
	// addi r31,r31,264
	ctx.r31.s64 = ctx.r31.s64 + 264;
	// addi r11,r27,1584
	ctx.r11.s64 = ctx.r27.s64 + 1584;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235d20c
	if (ctx.cr6.lt) goto loc_8235D20C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235D1E8) {
	__imp__sub_8235D1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D25C) {
	__imp__sub_8235D25C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D260) {
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
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r11,-2712
	ctx.r31.s64 = ctx.r11.s64 + -2712;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8235D280:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235d2d4
	if (ctx.cr6.eq) goto loc_8235D2D4;
	// addi r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 + 264;
	// addi r10,r31,1584
	ctx.r10.s64 = ctx.r31.s64 + 1584;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8235d280
	if (ctx.cr6.lt) goto loc_8235D280;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-1628
	ctx.r4.s64 = ctx.r11.s64 + -1628;
	// bl 0x82280c30
	ctx.lr = 0x8235D2B0;
	sub_82280C30(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r10,-1668
	ctx.r4.s64 = ctx.r10.s64 + -1668;
	// bl 0x82280a68
	ctx.lr = 0x8235D2C0;
	sub_82280A68(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8235d0f8
	ctx.lr = 0x8235D2C8;
	sub_8235D0F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_8235D2D4:
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

PPC_WEAK_FUNC(sub_8235D260) {
	__imp__sub_8235D260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8235D2F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235c4d0
	ctx.lr = 0x8235D300;
	sub_8235C4D0(ctx, base);
	// bl 0x8230a490
	ctx.lr = 0x8235D304;
	sub_8230A490(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142948
	ctx.lr = 0x8235D30C;
	sub_82142948(ctx, base);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8235d3d8
	if (ctx.cr6.eq) goto loc_8235D3D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,-1552
	ctx.r4.s64 = ctx.r11.s64 + -1552;
	// bl 0x82280900
	ctx.lr = 0x8235D330;
	sub_82280900(ctx, base);
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// lwz r11,8820(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8820);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235d3bc
	if (ctx.cr6.eq) goto loc_8235D3BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235afa0
	ctx.lr = 0x8235D34C;
	sub_8235AFA0(ctx, base);
	// bl 0x8235d260
	ctx.lr = 0x8235D350;
	sub_8235D260(ctx, base);
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mulli r28,r3,264
	ctx.r28.s64 = ctx.r3.s64 * 264;
	// addi r29,r11,-2712
	ctx.r29.s64 = ctx.r11.s64 + -2712;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r28,r29
	PPC_STORE_U8(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u8);
	// bl 0x82310110
	ctx.lr = 0x8235D368;
	sub_82310110(ctx, base);
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// addi r9,r9,-25536
	ctx.r9.s64 = ctx.r9.s64 + -25536;
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r9,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r9.u32);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8235D388;
	sub_823DE1F0(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// std r30,224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 224, ctx.r30.u64);
	// li r5,96
	ctx.r5.s64 = 96;
	// std r30,232(r31)
	PPC_STORE_U64(ctx.r31.u32 + 232, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r30.u64);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// std r30,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r30.u64);
	// bl 0x823de090
	ctx.lr = 0x8235D3AC;
	sub_823DE090(ctx, base);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8235D3BC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-1576
	ctx.r4.s64 = ctx.r11.s64 + -1576;
	// bl 0x82280900
	ctx.lr = 0x8235D3D0;
	sub_82280900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d0f8
	ctx.lr = 0x8235D3D8;
	sub_8235D0F8(ctx, base);
loc_8235D3D8:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235D2E8) {
	__imp__sub_8235D2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8235D3F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r26,r11,-2712
	ctx.r26.s64 = ctx.r11.s64 + -2712;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r11,-1668
	ctx.r28.s64 = ctx.r11.s64 + -1668;
loc_8235D410:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d46c
	if (ctx.cr6.eq) goto loc_8235D46C;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8235D42C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8235d44c
	if (!ctx.cr0.eq) goto loc_8235D44C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8235d42c
	if (!ctx.cr6.eq) goto loc_8235D42C;
loc_8235D44C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8235d46c
	if (!ctx.cr6.eq) goto loc_8235D46C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280a68
	ctx.lr = 0x8235D460;
	sub_82280A68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d0f8
	ctx.lr = 0x8235D468;
	sub_8235D0F8(ctx, base);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
loc_8235D46C:
	// addi r31,r31,264
	ctx.r31.s64 = ctx.r31.s64 + 264;
	// addi r11,r26,1584
	ctx.r11.s64 = ctx.r26.s64 + 1584;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235d410
	if (ctx.cr6.lt) goto loc_8235D410;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235D3E8) {
	__imp__sub_8235D3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D484) {
	__imp__sub_8235D484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8235D490;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x8235d3e8
	ctx.lr = 0x8235D4B8;
	sub_8235D3E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142e90
	ctx.lr = 0x8235D4C0;
	sub_82142E90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8235D4D8;
	sub_823DE090(ctx, base);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b2d0
	ctx.lr = 0x8235D4F8;
	sub_8235B2D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235D488) {
	__imp__sub_8235D488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,1312
	ctx.r4.s64 = ctx.r11.s64 + 1312;
	// li r5,4092
	ctx.r5.s64 = 4092;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82287b40
	ctx.lr = 0x8235D52C;
	sub_82287B40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287e08
	ctx.lr = 0x8235D538;
	sub_82287E08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D500) {
	__imp__sub_8235D500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D550) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D550) {
	__imp__sub_8235D550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4092
	ctx.r5.s64 = 4092;
	// addi r4,r11,1312
	ctx.r4.s64 = ctx.r11.s64 + 1312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287b40
	ctx.lr = 0x8235D580;
	sub_82287B40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e08
	ctx.lr = 0x8235D58C;
	sub_82287E08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D558) {
	__imp__sub_8235D558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D5A4) {
	__imp__sub_8235D5A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D5A8) {
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
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821ff1f8
	ctx.lr = 0x8235D5CC;
	sub_821FF1F8(ctx, base);
	// stb r3,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r3.u8);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x8235D5D8;
	sub_821FF1F8(ctx, base);
	// stb r3,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r3.u8);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x8235D5E4;
	sub_821FF1F8(ctx, base);
	// stb r3,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r3.u8);
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x8235D5F0;
	sub_821FF1F8(ctx, base);
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235D5A8) {
	__imp__sub_8235D5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D60C) {
	__imp__sub_8235D60C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D610) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-29976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29976);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235d6d0
	if (ctx.cr6.eq) goto loc_8235D6D0;
	// bl 0x823342a8
	ctx.lr = 0x8235D63C;
	sub_823342A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d6d0
	if (ctx.cr6.eq) goto loc_8235D6D0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// lwz r11,-30236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30236);
	// lwz r10,-17052(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17052);
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x8235d5a8
	ctx.lr = 0x8235D66C;
	sub_8235D5A8(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r11,-17056(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17056);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8235d5a8
	ctx.lr = 0x8235D680;
	sub_8235D5A8(ctx, base);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r11,-17080(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17080);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8235d5a8
	ctx.lr = 0x8235D694;
	sub_8235D5A8(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// lwz r11,-30252(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -30252);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8235d5a8
	ctx.lr = 0x8235D6A8;
	sub_8235D5A8(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// lwz r11,-29948(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29948);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8235d5a8
	ctx.lr = 0x8235D6BC;
	sub_8235D5A8(ctx, base);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// lwz r11,-30084(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -30084);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8235d5a8
	ctx.lr = 0x8235D6D0;
	sub_8235D5A8(ctx, base);
loc_8235D6D0:
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

PPC_WEAK_FUNC(sub_8235D610) {
	__imp__sub_8235D610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235D6E4) {
	__imp__sub_8235D6E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235D6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8235D6F0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de020
	ctx.lr = 0x8235D6F8;
	__savefpr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82332af8
	ctx.lr = 0x8235D718;
	sub_82332AF8(ctx, base);
	// lfs f0,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// mullw r10,r31,r8
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// lfs f13,7324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7324);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// addi r11,r7,-15680
	ctx.r11.s64 = ctx.r7.s64 + -15680;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f29,f3
	ctx.f29.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f2,f29
	ctx.f2.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f29,f13
	ctx.cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// fsel f1,f2,f0,f29
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f29.f64;
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fmuls f28,f0,f6
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f26,f9,f0
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// ble cr6,0x8235da2c
	if (!ctx.cr6.gt) goto loc_8235DA2C;
	// lwz r27,1472(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8235d7cc
	if (!ctx.cr6.eq) goto loc_8235D7CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b28
	ctx.lr = 0x8235D7AC;
	sub_82332B28(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-1516
	ctx.r4.s64 = ctx.r11.s64 + -1516;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280c30
	ctx.lr = 0x8235D7C0;
	sub_82280C30(ctx, base);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// addi r9,r10,-22896
	ctx.r9.s64 = ctx.r10.s64 + -22896;
	// lwz r27,12(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
loc_8235D7CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5ea8
	ctx.lr = 0x8235D7D4;
	sub_820F5EA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r10,334(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 334);
	// addi r25,r3,52
	ctx.r25.s64 = ctx.r3.s64 + 52;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lfs f30,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r30,r27,40
	ctx.r30.s64 = ctx.r27.s64 + 40;
	// stw r6,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// lfs f0,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// addi r28,r3,72
	ctx.r28.s64 = ctx.r3.s64 + 72;
	// lfs f13,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r29,5
	ctx.r29.s64 = 5;
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f12,28(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f11,24(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lfs f31,3100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3100);
	ctx.f31.f64 = double(temp.f32);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
loc_8235D844:
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f0,f31,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8235D850;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x8235d870
	if (ctx.cr6.lt) goto loc_8235D870;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8235d87c
	goto loc_8235D87C;
loc_8235D870:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8235d87c
	if (ctx.cr6.gt) goto loc_8235D87C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235D87C:
	// stb r11,5(r28)
	PPC_STORE_U8(ctx.r28.u32 + 5, ctx.r11.u8);
	// lfs f0,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f0,f31,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8235D88C;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x8235d8ac
	if (ctx.cr6.lt) goto loc_8235D8AC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8235d8b8
	goto loc_8235D8B8;
loc_8235D8AC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8235d8b8
	if (ctx.cr6.gt) goto loc_8235D8B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235D8B8:
	// stb r11,6(r28)
	PPC_STORE_U8(ctx.r28.u32 + 6, ctx.r11.u8);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f0,f31,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8235D8C8;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x8235d8e8
	if (ctx.cr6.lt) goto loc_8235D8E8;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8235d8f4
	goto loc_8235D8F4;
loc_8235D8E8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8235d8f4
	if (ctx.cr6.gt) goto loc_8235D8F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235D8F4:
	// stb r11,7(r28)
	PPC_STORE_U8(ctx.r28.u32 + 7, ctx.r11.u8);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f0,f31,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8235D904;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x8235d924
	if (ctx.cr6.lt) goto loc_8235D924;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8235d930
	goto loc_8235D930;
loc_8235D924:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8235d930
	if (ctx.cr6.gt) goto loc_8235D930;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235D930:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stbu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r28.u32 = ea;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x8235d844
	if (!ctx.cr0.eq) goto loc_8235D844;
	// addis r30,r24,1
	ctx.r30.s64 = ctx.r24.s64 + 65536;
	// addi r30,r30,22908
	ctx.r30.s64 = ctx.r30.s64 + 22908;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235d974
	if (ctx.cr6.eq) goto loc_8235D974;
	// bl 0x823df900
	ctx.lr = 0x8235D958;
	sub_823DF900(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// divw r10,r3,r11
	ctx.r10.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x8235d978
	goto loc_8235D978;
loc_8235D974:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235D978:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfs f0,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// ori r7,r9,22912
	ctx.r7.u64 = ctx.r9.u64 | 22912;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lfs f0,-31048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31048);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r6,r24,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r7.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lfs f10,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f9,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f8,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f7,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f28
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fmuls f5,f27,f7
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f7.f64));
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmuls f4,f26,f7
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f7.f64));
	// stfs f5,40(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f4,44(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x8235d610
	ctx.lr = 0x8235D9FC;
	sub_8235D610(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lwz r11,-17000(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17000);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8235da2c
	if (ctx.cr6.eq) goto loc_8235DA2C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,300
	ctx.r7.s64 = 300;
	// addi r5,r11,-2200
	ctx.r5.s64 = ctx.r11.s64 + -2200;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820eaf18
	ctx.lr = 0x8235DA2C;
	sub_820EAF18(ctx, base);
loc_8235DA2C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de06c
	ctx.lr = 0x8235DA38;
	__restfpr_26(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235D6E8) {
	__imp__sub_8235D6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DA3C) {
	__imp__sub_8235DA3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f13,f2
	ctx.f13.f64 = double(float(sqrt(ctx.f2.f64)));
	// beq cr6,0x8235dac4
	if (ctx.cr6.eq) goto loc_8235DAC4;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6956);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_8235DAC4:
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235dae4
	if (ctx.cr6.eq) goto loc_8235DAE4;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-16992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16992);
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f0,f11,f0,f12
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
loc_8235DAE4:
	// stfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8235db00
	if (ctx.cr6.eq) goto loc_8235DB00;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r9,r11,-22896
	ctx.r9.s64 = ctx.r11.s64 + -22896;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x8235db04
	goto loc_8235DB04;
loc_8235DB00:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8235DB04:
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6016(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6016);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x8235db38
	if (ctx.cr6.lt) goto loc_8235DB38;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8235db44
	goto loc_8235DB44;
loc_8235DB38:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8235db44
	if (ctx.cr6.gt) goto loc_8235DB44;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8235DB44:
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 + 24;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x822dd768
	ctx.lr = 0x8235DB60;
	sub_822DD768(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82184250
	ctx.lr = 0x8235DB68;
	sub_82184250(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235DA40) {
	__imp__sub_8235DA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DB78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1472(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235db8c
	if (!ctx.cr6.eq) goto loc_8235DB8C;
loc_8235DB84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235DB8C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,384(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 384);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8235dba8
	if (ctx.cr6.gt) goto loc_8235DBA8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235dbac
	if (!ctx.cr6.eq) goto loc_8235DBAC;
loc_8235DBA8:
	// stb r11,384(r5)
	PPC_STORE_U8(ctx.r5.u32 + 384, ctx.r11.u8);
loc_8235DBAC:
	// lbz r10,384(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 384);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,384(r5)
	PPC_STORE_U8(ctx.r5.u32 + 384, ctx.r9.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8235db84
	if (!ctx.cr6.eq) goto loc_8235DB84;
	// stb r11,384(r5)
	PPC_STORE_U8(ctx.r5.u32 + 384, ctx.r11.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235DB78) {
	__imp__sub_8235DB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DBD0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,38
	ctx.r3.s64 = 38;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235DBD0) {
	__imp__sub_8235DBD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DBDC) {
	__imp__sub_8235DBDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DBE0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,38
	ctx.r3.s64 = 38;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235DBE0) {
	__imp__sub_8235DBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DBEC) {
	__imp__sub_8235DBEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235DC00:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8235dc00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235DC00;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235DBF0) {
	__imp__sub_8235DBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DC0C) {
	__imp__sub_8235DC0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r9,r4,404
	ctx.r9.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r10,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r10.u8);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// b 0x820f87f0
	sub_820F87F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235DC10) {
	__imp__sub_8235DC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DC3C) {
	__imp__sub_8235DC3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DC40) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stb r9,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, ctx.r9.u8);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235DC40) {
	__imp__sub_8235DC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DC5C) {
	__imp__sub_8235DC5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DC60) {
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
	// lhz r3,332(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 332);
	// bl 0x82332af8
	ctx.lr = 0x8235DC74;
	sub_82332AF8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235dcc8
	if (ctx.cr6.eq) goto loc_8235DCC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235DC8C:
	// addi r9,r11,386
	ctx.r9.s64 = ctx.r11.s64 + 386;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8235dcc8
	if (ctx.cr6.eq) goto loc_8235DCC8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8235dcc8
	if (!ctx.cr6.lt) goto loc_8235DCC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r3,382
	ctx.r9.s64 = ctx.r3.s64 + 382;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8235dc8c
	if (!ctx.cr6.eq) goto loc_8235DC8C;
loc_8235DCC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235DC60) {
	__imp__sub_8235DC60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8235DCE0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lhz r3,332(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 332);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x8235DCF8;
	sub_82332AF8(ctx, base);
	// lbz r11,1661(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1661);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235dec8
	if (ctx.cr6.eq) goto loc_8235DEC8;
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r31,r30,52
	ctx.r31.s64 = ctx.r30.s64 + 52;
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8235dd38
	if (ctx.cr6.eq) goto loc_8235DD38;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235dd38
	if (!ctx.cr6.eq) goto loc_8235DD38;
	// bl 0x82141ca8
	ctx.lr = 0x8235DD2C;
	sub_82141CA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235dec8
	if (!ctx.cr6.eq) goto loc_8235DEC8;
loc_8235DD38:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// ori r7,r10,61924
	ctx.r7.u64 = ctx.r10.u64 | 61924;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mullw r9,r25,r7
	ctx.r9.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// addi r10,r8,-15680
	ctx.r10.s64 = ctx.r8.s64 + -15680;
	// ori r28,r6,22912
	ctx.r28.u64 = ctx.r6.u64 | 22912;
	// addi r27,r30,296
	ctx.r27.s64 = ctx.r30.s64 + 296;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235dda8
	if (!ctx.cr6.gt) goto loc_8235DDA8;
	// lbz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 28);
	// lbz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235dda4
	if (!ctx.cr6.eq) goto loc_8235DDA4;
	// lbz r10,25(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235dec8
	if (ctx.cr6.eq) goto loc_8235DEC8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwzx r9,r29,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// ori r8,r10,22908
	ctx.r8.u64 = ctx.r10.u64 | 22908;
	// lwzx r10,r29,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x8235dec8
	if (ctx.cr6.gt) goto loc_8235DEC8;
loc_8235DDA4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8235DDA8:
	// bne cr6,0x8235de38
	if (!ctx.cr6.eq) goto loc_8235DE38;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r5,r29,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8232fe18
	ctx.lr = 0x8235DDBC;
	sub_8232FE18(ctx, base);
	// lbz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 28);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235de04
	if (ctx.cr6.eq) goto loc_8235DE04;
	// bl 0x8235dc60
	ctx.lr = 0x8235DDD4;
	sub_8235DC60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x823df940
	ctx.lr = 0x8235DDF0;
	sub_823DF940(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8235de34
	goto loc_8235DE34;
loc_8235DE04:
	// bl 0x8235dc60
	ctx.lr = 0x8235DE08;
	sub_8235DC60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8235DE24;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8235DE34:
	// stb r9,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r9.u8);
loc_8235DE38:
	// lbz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// lwzx r9,r29,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// stb r10,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r10.u8);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// beq cr6,0x8235ded4
	if (ctx.cr6.eq) goto loc_8235DED4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// bl 0x8235dc60
	ctx.lr = 0x8235DE68;
	sub_8235DC60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lhz r3,334(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8235de9c
	if (!ctx.cr6.lt) goto loc_8235DE9C;
	// addi r11,r29,382
	ctx.r11.s64 = ctx.r29.s64 + 382;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x820f9a68
	ctx.lr = 0x8235DE8C;
	sub_820F9A68(ctx, base);
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r9.u8);
	// b 0x8235dea4
	goto loc_8235DEA4;
loc_8235DE9C:
	// lwz r5,1524(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1524);
loc_8235DEA0:
	// bl 0x820f9a68
	ctx.lr = 0x8235DEA4;
	sub_820F9A68(ctx, base);
loc_8235DEA4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8235dec8
	if (ctx.cr6.eq) goto loc_8235DEC8;
	// lhz r11,334(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r25,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r25.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82362d40
	ctx.lr = 0x8235DEC8;
	sub_82362D40(ctx, base);
loc_8235DEC8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8235DED4:
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235df04
	if (ctx.cr6.eq) goto loc_8235DF04;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// addi r10,r11,386
	ctx.r10.s64 = ctx.r11.s64 + 386;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// lhz r3,334(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// b 0x8235dea0
	goto loc_8235DEA0;
loc_8235DF04:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,1524(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1524);
	// lhz r4,334(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// bl 0x820f87d0
	ctx.lr = 0x8235DF14;
	sub_820F87D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235DCD8) {
	__imp__sub_8235DCD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8235DF28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r3,332(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 332);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x8235DF3C;
	sub_82332AF8(ctx, base);
	// lbz r11,1661(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1661);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235dfb4
	if (ctx.cr6.eq) goto loc_8235DFB4;
	// lwz r11,1508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235dfb4
	if (ctx.cr6.eq) goto loc_8235DFB4;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235dfb4
	if (ctx.cr6.eq) goto loc_8235DFB4;
	// lbz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235dfb4
	if (ctx.cr6.eq) goto loc_8235DFB4;
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
	// mullw r7,r29,r8
	ctx.r7.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,22912
	ctx.r6.s64 = ctx.r11.s64 + 22912;
	// addi r4,r30,296
	ctx.r4.s64 = ctx.r30.s64 + 296;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// bl 0x8232fe18
	ctx.lr = 0x8235DF98;
	sub_8232FE18(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,5484(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8235dfb4
	if (!ctx.cr6.gt) goto loc_8235DFB4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1508(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// bl 0x82104c88
	ctx.lr = 0x8235DFB4;
	sub_82104C88(ctx, base);
loc_8235DFB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235DF20) {
	__imp__sub_8235DF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235DFBC) {
	__imp__sub_8235DFBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235DFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8235DFC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,332(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 332);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x8235DFDC;
	sub_82332AF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1488(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1488);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8235e07c
	if (!ctx.cr6.gt) goto loc_8235E07C;
	// lfs f13,1492(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8235e07c
	if (!ctx.cr6.gt) goto loc_8235E07C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lbz r9,325(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 325);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// ori r7,r11,61924
	ctx.r7.u64 = ctx.r11.u64 | 61924;
	// addi r11,r8,-15680
	ctx.r11.s64 = ctx.r8.s64 + -15680;
	// mullw r10,r30,r7
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// addi r29,r31,296
	ctx.r29.s64 = ctx.r31.s64 + 296;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235e074
	if (ctx.cr6.eq) goto loc_8235E074;
	// lbz r11,85(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 85);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235e074
	if (!ctx.cr6.eq) goto loc_8235E074;
	// lwz r5,1500(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1500);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8235e04c
	if (ctx.cr6.eq) goto loc_8235E04C;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x820f9a68
	ctx.lr = 0x8235E04C;
	sub_820F9A68(ctx, base);
loc_8235E04C:
	// lwz r4,1504(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1504);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235e074
	if (ctx.cr6.eq) goto loc_8235E074;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lbz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r6,334(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// ori r10,r11,22912
	ctx.r10.u64 = ctx.r11.u64 | 22912;
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x821a2c80
	ctx.lr = 0x8235E074;
	sub_821A2C80(ctx, base);
loc_8235E074:
	// lbz r11,29(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 29);
	// stb r11,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r11.u8);
loc_8235E07C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235DFC0) {
	__imp__sub_8235DFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235E084) {
	__imp__sub_8235E084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f29.u64);
	// stfd f30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,-792
	ctx.r6.s64 = ctx.r11.s64 + -792;
	// addi r3,r10,-816
	ctx.r3.s64 = ctx.r10.s64 + -816;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8235E0BC;
	sub_822E15D0(ctx, base);
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,5416(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5416, ctx.r3.u32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lfs f31,6912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6912);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f30,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r10,r3,-860
	ctx.r10.s64 = ctx.r3.s64 + -860;
	// lfs f29,5996(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5996);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r11,-892
	ctx.r3.s64 = ctx.r11.s64 + -892;
	// lfs f3,5876(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5876);
	ctx.f3.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,-10708(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -10708);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822e16f0
	ctx.lr = 0x8235E110;
	sub_822E16F0(ctx, base);
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r8,r9,-992
	ctx.r8.s64 = ctx.r9.s64 + -992;
	// stw r3,5432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5432, ctx.r3.u32);
	// addi r3,r7,-928
	ctx.r3.s64 = ctx.r7.s64 + -928;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x8235E13C;
	sub_822E1660(ctx, base);
	// lis r6,-31810
	ctx.r6.s64 = -2084700160;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r4,-1044
	ctx.r8.s64 = ctx.r4.s64 + -1044;
	// stw r3,5412(r6)
	PPC_STORE_U32(ctx.r6.u32 + 5412, ctx.r3.u32);
	// addi r3,r11,-1076
	ctx.r3.s64 = ctx.r11.s64 + -1076;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,5808(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5808);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8235E16C;
	sub_822E1660(ctx, base);
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r3,5436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5436, ctx.r3.u32);
	// addi r3,r7,-1120
	ctx.r3.s64 = ctx.r7.s64 + -1120;
	// addi r8,r8,-1200
	ctx.r8.s64 = ctx.r8.s64 + -1200;
	// lfs f1,7324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7324);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x8235E19C;
	sub_822E1660(ctx, base);
	// lis r6,-31810
	ctx.r6.s64 = -2084700160;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r8,r5,-1280
	ctx.r8.s64 = ctx.r5.s64 + -1280;
	// stw r3,5420(r6)
	PPC_STORE_U32(ctx.r6.u32 + 5420, ctx.r3.u32);
	// addi r3,r4,-1308
	ctx.r3.s64 = ctx.r4.s64 + -1308;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,-21416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21416);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8235E1CC;
	sub_822E1660(ctx, base);
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r3,5428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5428, ctx.r3.u32);
	// addi r3,r7,-1372
	ctx.r3.s64 = ctx.r7.s64 + -1372;
	// addi r8,r9,-1340
	ctx.r8.s64 = ctx.r9.s64 + -1340;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x8235E1F8;
	sub_822E1660(ctx, base);
	// lis r6,-31810
	ctx.r6.s64 = -2084700160;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r4,-1416
	ctx.r8.s64 = ctx.r4.s64 + -1416;
	// stw r3,5424(r6)
	PPC_STORE_U32(ctx.r6.u32 + 5424, ctx.r3.u32);
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,7036(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8235E228;
	sub_822E1660(ctx, base);
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// stw r3,5440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5440, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235E088) {
	__imp__sub_8235E088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235E24C) {
	__imp__sub_8235E24C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E250) {
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
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-31628
	ctx.r10.s64 = ctx.r10.s64 + -31628;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8235E294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

PPC_WEAK_FUNC(sub_8235E250) {
	__imp__sub_8235E250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E2A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8235e2c0
	if (ctx.cr6.eq) goto loc_8235E2C0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x820f90c0
	sub_820F90C0(ctx, base);
	return;
loc_8235E2C0:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r5,624
	ctx.r10.s64 = ctx.r5.s64 * 624;
	// addi r9,r11,26552
	ctx.r9.s64 = ctx.r11.s64 + 26552;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235E2A8) {
	__imp__sub_8235E2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235E2D4) {
	__imp__sub_8235E2D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8235E2E0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de028
	ctx.lr = 0x8235E2E8;
	__savefpr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r21,-31810
	ctx.r21.s64 = -2084700160;
	// lfs f9,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lfs f7,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f5,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// lwz r11,5432(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5432);
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r17,r7,-31628
	ctx.r17.s64 = ctx.r7.s64 + -31628;
	// fmadds f13,f9,f0,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f12,f8,f0,f5
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f11,f7,f0,f4
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lfs f5,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lfs f4,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lfs f0,13216(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13216);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// rlwinm r16,r3,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// fmadds f13,f3,f6,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f13.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f12,f2,f6,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f12.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f11,f1,f6,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f13,f3,f10,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f12,f5,f3,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f12.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f11,f4,f3,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f13,f9,f1,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f12,f8,f1,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f11,f7,f1,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f0,f31,f6,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f13.f64));
	// lfs f10,5488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5488);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f30,f6,f12
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f6.f64 + ctx.f12.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f12,f29,f6,f11
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r25,r10,-4
	ctx.r25.s64 = ctx.r10.s64 + -4;
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmadds f3,f9,f4,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f0.f64));
	// stfs f3,164(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f2,f8,f4,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f13.f64));
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmadds f1,f7,f4,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f12.f64));
	// stfs f1,172(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,2424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2424);
	ctx.f31.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r10,-2280
	ctx.r6.s64 = ctx.r10.s64 + -2280;
	// li r15,1
	ctx.r15.s64 = 1;
	// lis r22,-31810
	ctx.r22.s64 = -2084700160;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r24,-31810
	ctx.r24.s64 = -2084700160;
	// addi r14,r11,-2264
	ctx.r14.s64 = ctx.r11.s64 + -2264;
	// addi r20,r9,-9672
	ctx.r20.s64 = ctx.r9.s64 + -9672;
loc_8235E460:
	// lwz r11,5412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5412);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r10,r16,r17
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r17.u32);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,641
	ctx.r8.s64 = 42008576;
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// ori r8,r8,49169
	ctx.r8.u64 = ctx.r8.u64 | 49169;
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// fmadds f6,f0,f8,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f13.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f5,f12,f8,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f4,f11,f8,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f10.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bctrl 
	ctx.lr = 0x8235E4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,28(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r11,5416(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 5416);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8235e500
	if (!ctx.cr6.eq) goto loc_8235E500;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f30,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stbx r9,r27,r10
	PPC_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r9.u8);
	// beq cr6,0x8235e544
	if (ctx.cr6.eq) goto loc_8235E544;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8235e534
	goto loc_8235E534;
loc_8235E500:
	// lwz r9,5412(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5412);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,5432(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5432);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stbx r15,r27,r8
	PPC_STORE_U8(ctx.r27.u32 + ctx.r8.u32, ctx.r15.u8);
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64));
	// stfs f11,4(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// beq cr6,0x8235e544
	if (ctx.cr6.eq) goto loc_8235E544;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_8235E534:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f2d08
	ctx.lr = 0x8235E544;
	sub_821F2D08(ctx, base);
loc_8235E544:
	// lfsu f0,4(r25)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r25.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r25.u32 = ea;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f0,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f8,-4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f0,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,-4(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + -4, temp.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lfs f6,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f10,f0,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f5,0(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// blt cr6,0x8235e460
	if (ctx.cr6.lt) goto loc_8235E460;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235e5a4
	if (!ctx.cr6.eq) goto loc_8235E5A4;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x8235e5a8
	goto loc_8235E5A8;
loc_8235E5A4:
	// lfs f12,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
loc_8235E5A8:
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235e5c0
	if (!ctx.cr6.eq) goto loc_8235E5C0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8235e5c4
	goto loc_8235E5C4;
loc_8235E5C0:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
loc_8235E5C4:
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235e5d4
	if (!ctx.cr6.eq) goto loc_8235E5D4;
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
loc_8235E5D4:
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235e5e4
	if (!ctx.cr6.eq) goto loc_8235E5E4;
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_8235E5E4:
	// fadds f7,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f6,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f8,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f3,f5
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f29,f1,f4
	ctx.f29.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// fmuls f30,f6,f13
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f28,f12,f10
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmsubs f10,f6,f10,f9
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f9.f64));
	// fsel f6,f29,f1,f4
	ctx.f6.f64 = ctx.f29.f64 >= 0.0 ? ctx.f1.f64 : ctx.f4.f64;
	// fmsubs f9,f12,f5,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 - ctx.f30.f64));
	// fmsubs f5,f3,f13,f28
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f28.f64));
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmadds f1,f9,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f13,f11,f3,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f8.f64));
	// stfs f13,0(r23)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f5,f1
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fsqrts f8,f11
	ctx.f8.f64 = double(float(sqrt(ctx.f11.f64)));
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmadds f4,f12,f3,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f7.f64));
	// stfs f4,4(r23)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f1,f3,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fsel f12,f6,f0,f8
	ctx.f12.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// stfs f13,8(r23)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r23.u32 + 8, temp.u32);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmuls f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f6,32(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmuls f8,f11,f5
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f6
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmsubs f0,f5,f7,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 - ctx.f1.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f8,f13,f12,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f9.f64));
	// stfs f8,4(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f7,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f2,f7,f6,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 - ctx.f3.f64));
	// stfs f2,8(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// fmuls f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfic r11,r19,1
	ctx.xer.ca = ctx.r19.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r19.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fmsubs f10,f8,f0,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f11.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmsubs f4,f9,f8,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 - ctx.f5.f64));
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f3,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmsubs f12,f13,f3,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 - ctx.f0.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de074
	ctx.lr = 0x8235E794;
	__restfpr_28(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235E2D8) {
	__imp__sub_8235E2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235E798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8235E7A0;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lis r8,-31810
	ctx.r8.s64 = -2084700160;
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,5420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5420);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r10,5428(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5428);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,5424(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5424);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fadds f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// bl 0x822da518
	ctx.lr = 0x8235E834;
	sub_822DA518(ctx, base);
	// lfs f9,8(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lis r29,-31810
	ctx.r29.s64 = -2084700160;
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f12,f8,f30,f9
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f5,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lis r7,-31810
	ctx.r7.s64 = -2084700160;
	// lfs f3,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,5436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5436);
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f0,f3,f30,f5
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f5.f64));
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f13,f2,f30,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f30.f64 + ctx.f4.f64));
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,5416(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 5416);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f1,f12,f6
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lbz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8235e90c
	if (ctx.cr6.eq) goto loc_8235E90C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2232
	ctx.r5.s64 = ctx.r11.s64 + -2232;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f2d08
	ctx.lr = 0x8235E8CC;
	sub_821F2D08(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r10,-2200
	ctx.r6.s64 = ctx.r10.s64 + -2200;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f2d40
	ctx.lr = 0x8235E8EC;
	sub_821F2D40(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r9,-2264
	ctx.r6.s64 = ctx.r9.s64 + -2264;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f2d40
	ctx.lr = 0x8235E90C;
	sub_821F2D40(ctx, base);
loc_8235E90C:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-31628
	ctx.r9.s64 = ctx.r11.s64 + -31628;
	// lis r8,641
	ctx.r8.s64 = 42008576;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// ori r8,r8,49169
	ctx.r8.u64 = ctx.r8.u64 | 49169;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235E940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lbz r9,265(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 265);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f8,f0,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f4,0(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fmadds f3,f6,f0,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,4(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// fmadds f0,f5,f0,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// bne cr6,0x8235eac0
	if (!ctx.cr6.eq) goto loc_8235EAC0;
	// lbz r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235eac0
	if (!ctx.cr6.eq) goto loc_8235EAC0;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// lfs f13,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,5440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5440);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8235eac0
	if (ctx.cr6.lt) goto loc_8235EAC0;
	// lwz r11,5436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5436);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// bl 0x82276090
	ctx.lr = 0x8235E9C8;
	sub_82276090(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r4,2046
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2046, ctx.xer);
	// beq cr6,0x8235ea08
	if (ctx.cr6.eq) goto loc_8235EA08;
	// cmplwi cr6,r4,2047
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2047, ctx.xer);
	// beq cr6,0x8235eac8
	if (ctx.cr6.eq) goto loc_8235EAC8;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x8235e9f0
	if (ctx.cr6.eq) goto loc_8235E9F0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820f90c0
	ctx.lr = 0x8235E9EC;
	sub_820F90C0(ctx, base);
	// b 0x8235ea00
	goto loc_8235EA00;
loc_8235E9F0:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,26552
	ctx.r9.s64 = ctx.r11.s64 + 26552;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
loc_8235EA00:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x8235eac8
	if (!ctx.cr6.eq) goto loc_8235EAC8;
loc_8235EA08:
	// lfs f0,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmsubs f11,f12,f11,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmsubs f10,f10,f0,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmsubs f9,f9,f13,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmsubs f2,f9,f13,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f5.f64));
	// stfs f2,180(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmsubs f1,f11,f12,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f4.f64));
	// stfs f1,184(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmsubs f0,f10,f0,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x822d7c78
	ctx.lr = 0x8235EA80;
	sub_822D7C78(ctx, base);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235e2d8
	ctx.lr = 0x8235EA98;
	sub_8235E2D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235eac8
	if (ctx.cr6.eq) goto loc_8235EAC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d7c78
	ctx.lr = 0x8235EAAC;
	sub_822D7C78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8235EAC0:
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
loc_8235EAC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235E798) {
	__imp__sub_8235E798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235EADC) {
	__imp__sub_8235EADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8235EAE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,119(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 119);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235ebc0
	if (ctx.cr6.eq) goto loc_8235EBC0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lhz r9,128(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 128);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// ori r7,r11,61924
	ctx.r7.u64 = ctx.r11.u64 | 61924;
	// addi r11,r8,-15680
	ctx.r11.s64 = ctx.r8.s64 + -15680;
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8235ebc0
	if (!ctx.cr6.eq) goto loc_8235EBC0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r9,r10,22912
	ctx.r9.u64 = ctx.r10.u64 | 22912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82322598
	ctx.lr = 0x8235EB50;
	sub_82322598(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lfs f10,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lfs f9,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f8,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f0,6024(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f5,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lhz r5,128(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 128);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8235e798
	ctx.lr = 0x8235EBC0;
	sub_8235E798(ctx, base);
loc_8235EBC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235EAE0) {
	__imp__sub_8235EAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EBC8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,174(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 174);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,204(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lhz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 128);
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// ori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 | 1;
	// stb r8,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r8.u8);
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
	// stw r7,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r7.u32);
	// beq cr6,0x8235ecb0
	if (ctx.cr6.eq) goto loc_8235ECB0;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// addi r30,r3,232
	ctx.r30.s64 = ctx.r3.s64 + 232;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x822d48f0
	ctx.lr = 0x8235EC2C;
	sub_822D48F0(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f30,-696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -696);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x8235ecb0
	if (ctx.cr6.gt) goto loc_8235ECB0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da518
	ctx.lr = 0x8235EC54;
	sub_822DA518(ctx, base);
	// fsubs f31,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f12,f31,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f7,f31,f9,f13
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f9.f64 + ctx.f13.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f6,f8,f31,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8222fb90
	ctx.lr = 0x8235EC94;
	sub_8222FB90(ctx, base);
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,17
	ctx.r3.s64 = 17;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-752
	ctx.r4.s64 = ctx.r11.s64 + -752;
	// bl 0x82280c30
	ctx.lr = 0x8235ECB0;
	sub_82280C30(ctx, base);
loc_8235ECB0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29848(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29848);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,27208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27208);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f12,192(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f12,196(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// bl 0x82340d30
	ctx.lr = 0x8235ECEC;
	sub_82340D30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

PPC_WEAK_FUNC(sub_8235EBC8) {
	__imp__sub_8235EBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235ED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235ED0C) {
	__imp__sub_8235ED0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235ED10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8235ED18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,52(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x82322598
	ctx.lr = 0x8235ED3C;
	sub_82322598(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r5,256(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r8,r31,264
	ctx.r8.s64 = ctx.r31.s64 + 264;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,6024(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r31,28
	ctx.r6.s64 = ctx.r31.s64 + 28;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8235e798
	ctx.lr = 0x8235ED7C;
	sub_8235E798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235ED10) {
	__imp__sub_8235ED10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235ED84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235ED84) {
	__imp__sub_8235ED84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235ED88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822da650
	ctx.lr = 0x8235EDB0;
	sub_822DA650(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lbz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r10,r11,16168
	ctx.r10.s64 = ctx.r11.s64 + 16168;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x821a29d0
	ctx.lr = 0x8235EDDC;
	sub_821A29D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235ED88) {
	__imp__sub_8235ED88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235EDF4) {
	__imp__sub_8235EDF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EDF8) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8235ee50
	if (ctx.cr6.eq) goto loc_8235EE50;
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235ee30
	if (ctx.cr6.eq) goto loc_8235EE30;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a45c0
	ctx.lr = 0x8235EE30;
	sub_821A45C0(ctx, base);
loc_8235EE30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8235ed88
	ctx.lr = 0x8235EE3C;
	sub_8235ED88(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ee50
	if (ctx.cr6.eq) goto loc_8235EE50;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8235EE50:
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

PPC_WEAK_FUNC(sub_8235EDF8) {
	__imp__sub_8235EDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235EE64) {
	__imp__sub_8235EE64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8235EE70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8235eee8
	if (ctx.cr6.eq) goto loc_8235EEE8;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// ori r8,r10,22960
	ctx.r8.u64 = ctx.r10.u64 | 22960;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r5,r7,22952
	ctx.r5.u64 = ctx.r7.u64 | 22952;
	// ori r4,r6,22956
	ctx.r4.u64 = ctx.r6.u64 | 22956;
	// lfsx f0,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfsx f0,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfsx f0,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmuls f6,f9,f9
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f5,f8,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f13
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bge cr6,0x8235ef60
	if (!ctx.cr6.lt) goto loc_8235EF60;
loc_8235EEE8:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r11,6968
	ctx.r30.s64 = ctx.r11.s64 + 6968;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235ef24
	if (!ctx.cr6.eq) goto loc_8235EF24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,11308(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11308);
	// bl 0x8235ed88
	ctx.lr = 0x8235EF0C;
	sub_8235ED88(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ef60
	if (ctx.cr6.eq) goto loc_8235EF60;
	// lwz r11,11308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11308);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_8235EF24:
	// lwz r11,11308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11308);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8235ef60
	if (ctx.cr6.lt) goto loc_8235EF60;
loc_8235EF34:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x821a4338
	ctx.lr = 0x8235EF44;
	sub_821A4338(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,11308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11308);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8235ef34
	if (!ctx.cr6.lt) goto loc_8235EF34;
loc_8235EF60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235EE68) {
	__imp__sub_8235EE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EF68) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,-29912
	ctx.r10.s64 = ctx.r10.s64 + -29912;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r9,33(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// rlwinm r8,r9,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8235ef94
	if (ctx.cr6.eq) goto loc_8235EF94;
	// b 0x8235ee68
	sub_8235EE68(ctx, base);
	return;
loc_8235EF94:
	// b 0x8235edf8
	sub_8235EDF8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235EF68) {
	__imp__sub_8235EF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EF98) {
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
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235efc8
	if (ctx.cr6.eq) goto loc_8235EFC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a45c0
	ctx.lr = 0x8235EFC0;
	sub_821A45C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_8235EFC8:
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r10,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_8235EF98) {
	__imp__sub_8235EF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235EFEC) {
	__imp__sub_8235EFEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235EFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8235EFF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,33(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// clrlwi r29,r11,28
	ctx.r29.u64 = ctx.r11.u32 & 0xF;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8235f048
	if (ctx.cr6.eq) goto loc_8235F048;
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235f030
	if (ctx.cr6.eq) goto loc_8235F030;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a45c0
	ctx.lr = 0x8235F02C;
	sub_821A45C0(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_8235F030:
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stb r10,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r10.u8);
loc_8235F048:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235EFF0) {
	__imp__sub_8235EFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8235F058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r29,r10,-29912
	ctx.r29.s64 = ctx.r10.s64 + -29912;
loc_8235F074:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lbz r9,33(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8235f0e8
	if (ctx.cr6.eq) goto loc_8235F0E8;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235f0b0
	if (ctx.cr6.eq) goto loc_8235F0B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a1118
	ctx.lr = 0x8235F0A8;
	sub_821A1118(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x8235f0b4
	goto loc_8235F0B4;
loc_8235F0B0:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_8235F0B4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8235F0C4;
	sub_822E40F0(ctx, base);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8235F0D4;
	sub_822E40F0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8235F0E4;
	sub_822E40F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8235F0E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 768, ctx.xer);
	// blt cr6,0x8235f074
	if (ctx.cr6.lt) goto loc_8235F074;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8235F10C;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235F050) {
	__imp__sub_8235F050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235F114) {
	__imp__sub_8235F114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8235F120;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8235F138;
	sub_8223E078(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8235f1e4
	if (ctx.cr6.lt) goto loc_8235F1E4;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r9,-29912
	ctx.r29.s64 = ctx.r9.s64 + -29912;
	// addi r28,r10,-692
	ctx.r28.s64 = ctx.r10.s64 + -692;
loc_8235F158:
	// cmpwi cr6,r11,768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 768, ctx.xer);
	// blt cr6,0x8235f178
	if (ctx.cr6.lt) goto loc_8235F178;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r6,768
	ctx.r6.s64 = 768;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8235F174;
	sub_822830E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8235F178:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8223e078
	ctx.lr = 0x8235F198;
	sub_8223E078(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8223e078
	ctx.lr = 0x8235F1A8;
	sub_8223E078(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8235f1c4
	if (ctx.cr6.lt) goto loc_8235F1C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a1138
	ctx.lr = 0x8235F1BC;
	sub_821A1138(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x8235f1c8
	goto loc_8235F1C8;
loc_8235F1C4:
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
loc_8235F1C8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8235F1D8;
	sub_8223E078(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8235f158
	if (!ctx.cr6.lt) goto loc_8235F158;
loc_8235F1E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235F118) {
	__imp__sub_8235F118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235F1EC) {
	__imp__sub_8235F1EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// addi r11,r11,5464
	ctx.r11.s64 = ctx.r11.s64 + 5464;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,5452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f224
	if (ctx.cr6.eq) goto loc_8235F224;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,5452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5452, ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8235F224:
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// stw r10,5452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5452, ctx.r10.u32);
	// stw r10,5460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5460, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F1F0) {
	__imp__sub_8235F1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235F23C) {
	__imp__sub_8235F23C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// lwz r8,5452(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5452);
	// lwz r10,5460(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5460);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235f260
	if (!ctx.cr6.eq) goto loc_8235F260;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,5452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5452, ctx.r8.u32);
loc_8235F260:
	// lis r8,-31810
	ctx.r8.s64 = -2084700160;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,5464
	ctx.r6.s64 = ctx.r8.s64 + 5464;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,5460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5460, ctx.r11.u32);
	// stwx r5,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F240) {
	__imp__sub_8235F240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r10,r11,5464
	ctx.r10.s64 = ctx.r11.s64 + 5464;
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F280) {
	__imp__sub_8235F280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235F294) {
	__imp__sub_8235F294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F298) {
	__imp__sub_8235F298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235F29C) {
	__imp__sub_8235F29C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31810
	ctx.r30.s64 = -2084700160;
	// lwz r11,5460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235f2f4
	if (!ctx.cr6.eq) goto loc_8235F2F4;
	// lis r31,-31810
	ctx.r31.s64 = -2084700160;
	// lwz r3,5456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5456);
	// cmpwi cr6,r3,768
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 768, ctx.xer);
	// bne cr6,0x8235f338
	if (!ctx.cr6.eq) goto loc_8235F338;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,768
	ctx.r5.s64 = 768;
	// addi r4,r11,-636
	ctx.r4.s64 = ctx.r11.s64 + -636;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8235F2E8;
	sub_822830E8(ctx, base);
	// lwz r11,5460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f334
	if (ctx.cr6.eq) goto loc_8235F334;
loc_8235F2F4:
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// addi r10,r10,5464
	ctx.r10.s64 = ctx.r10.s64 + 5464;
	// lwz r8,5452(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5452);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8235f31c
	if (!ctx.cr6.eq) goto loc_8235F31C;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,5452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5452, ctx.r8.u32);
loc_8235F31C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,5460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5460, ctx.r11.u32);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// b 0x8235f340
	goto loc_8235F340;
loc_8235F334:
	// lwz r3,5456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5456);
loc_8235F338:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,5456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5456, ctx.r11.u32);
loc_8235F340:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F2A0) {
	__imp__sub_8235F2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// addi r11,r11,5464
	ctx.r11.s64 = ctx.r11.s64 + 5464;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,5452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f38c
	if (ctx.cr6.eq) goto loc_8235F38C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,5452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5452, ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8235F38C:
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// stw r10,5452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5452, ctx.r10.u32);
	// stw r10,5460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5460, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F358) {
	__imp__sub_8235F358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235F3A4) {
	__imp__sub_8235F3A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r10,36
	ctx.r10.s64 = 36;
	// addi r9,r11,8536
	ctx.r9.s64 = ctx.r11.s64 + 8536;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F3A8) {
	__imp__sub_8235F3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8235f2a0
	ctx.lr = 0x8235F3D8;
	sub_8235F2A0(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,8536
	ctx.r10.s64 = ctx.r10.s64 + 8536;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,36
	ctx.r5.s64 = 36;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r8,33(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bl 0x822dd778
	ctx.lr = 0x8235F40C;
	sub_822DD778(ctx, base);
	// lis r6,-31810
	ctx.r6.s64 = -2084700160;
	// lbz r4,33(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// clrlwi r5,r30,28
	ctx.r5.u64 = ctx.r30.u32 & 0xF;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lwz r11,5448(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 5448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,5448(r6)
	PPC_STORE_U32(ctx.r6.u32 + 5448, ctx.r11.u32);
	// ori r11,r3,16
	ctx.r11.u64 = ctx.r3.u64 | 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F3C0) {
	__imp__sub_8235F3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235F44C) {
	__imp__sub_8235F44C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F450) {
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
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r8,36
	ctx.r8.s64 = 36;
	// addi r9,r11,8536
	ctx.r9.s64 = ctx.r11.s64 + 8536;
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// subf r7,r9,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r9.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r6,-31810
	ctx.r6.s64 = -2084700160;
	// divw r3,r7,r8
	ctx.r3.s32 = ctx.r7.s32 / ctx.r8.s32;
	// lwz r9,5452(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5452);
	// addi r11,r6,5464
	ctx.r11.s64 = ctx.r6.s64 + 5464;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x8235f4a0
	if (ctx.cr6.eq) goto loc_8235F4A0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x8235f4a8
	goto loc_8235F4A8;
loc_8235F4A0:
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// stw r11,5460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5460, ctx.r11.u32);
loc_8235F4A8:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,5452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5452, ctx.r11.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x822a88e0
	ctx.lr = 0x8235F4BC;
	sub_822A88E0(ctx, base);
	// lbz r7,33(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// lis r8,-31810
	ctx.r8.s64 = -2084700160;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r6,r6,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r6,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r6.u8);
	// lwz r11,5448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5448);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,5448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5448, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8235F450) {
	__imp__sub_8235F450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F4F0) {
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
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31810
	ctx.r8.s64 = -2084700160;
	// lis r7,-31810
	ctx.r7.s64 = -2084700160;
	// lis r6,-31810
	ctx.r6.s64 = -2084700160;
	// stw r11,5460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5460, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,5452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5452, ctx.r10.u32);
	// lis r4,-31810
	ctx.r4.s64 = -2084700160;
	// stw r9,5456(r7)
	PPC_STORE_U32(ctx.r7.u32 + 5456, ctx.r9.u32);
	// li r5,3072
	ctx.r5.s64 = 3072;
	// stw r11,5448(r6)
	PPC_STORE_U32(ctx.r6.u32 + 5448, ctx.r11.u32);
	// addi r3,r4,5464
	ctx.r3.s64 = ctx.r4.s64 + 5464;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822dd778
	ctx.lr = 0x8235F53C;
	sub_822DD778(ctx, base);
	// lis r3,-31810
	ctx.r3.s64 = -2084700160;
	// li r5,27648
	ctx.r5.s64 = 27648;
	// addi r3,r3,8536
	ctx.r3.s64 = ctx.r3.s64 + 8536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822dd778
	ctx.lr = 0x8235F550;
	sub_822DD778(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F4F0) {
	__imp__sub_8235F4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r30,r11,8536
	ctx.r30.s64 = ctx.r11.s64 + 8536;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8235F580:
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235f598
	if (ctx.cr6.eq) goto loc_8235F598;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235f450
	ctx.lr = 0x8235F598;
	sub_8235F450(ctx, base);
loc_8235F598:
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// addi r11,r30,27648
	ctx.r11.s64 = ctx.r30.s64 + 27648;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235f580
	if (ctx.cr6.lt) goto loc_8235F580;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F560) {
	__imp__sub_8235F560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r10,36
	ctx.r10.s64 = 36;
	// addi r9,r11,8536
	ctx.r9.s64 = ctx.r11.s64 + 8536;
	// li r4,5
	ctx.r4.s64 = 5;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// b 0x822ace70
	sub_822ACE70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235F5C0) {
	__imp__sub_8235F5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235F5DC) {
	__imp__sub_8235F5DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F5E0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822b2678
	ctx.lr = 0x8235F5F8;
	sub_822B2678(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x8235f630
	if (ctx.cr6.eq) goto loc_8235F630;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-592
	ctx.r4.s64 = ctx.r11.s64 + -592;
	// bl 0x822ad4e0
	ctx.lr = 0x8235F618;
	sub_822AD4E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8235F630:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,8536
	ctx.r10.s64 = ctx.r9.s64 + 8536;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

PPC_WEAK_FUNC(sub_8235F5E0) {
	__imp__sub_8235F5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235F664) {
	__imp__sub_8235F664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F668) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// lhz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 20);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,8536
	ctx.r10.s64 = ctx.r9.s64 + 8536;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F668) {
	__imp__sub_8235F668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F690) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// lhz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,8536
	ctx.r10.s64 = ctx.r9.s64 + 8536;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8235f450
	ctx.lr = 0x8235F6C4;
	sub_8235F450(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235F690) {
	__imp__sub_8235F690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235F6D4) {
	__imp__sub_8235F6D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8235F6E0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8235F6F0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x8235f704
	if (ctx.cr6.lt) goto loc_8235F704;
	// bl 0x822acb68
	ctx.lr = 0x8235F6FC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// ble cr6,0x8235f710
	if (!ctx.cr6.gt) goto loc_8235F710;
loc_8235F704:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x822ad350
	ctx.lr = 0x8235F710;
	sub_822AD350(ctx, base);
loc_8235F710:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x8235F71C;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8235F724;
	sub_822ACB68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x8235f7b0
	if (ctx.cr6.eq) goto loc_8235F7B0;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x8235f81c
	if (!ctx.cr6.eq) goto loc_8235F81C;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b2498
	ctx.lr = 0x8235F750;
	sub_822B2498(ctx, base);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f8,f30
	ctx.cr6.compare(ctx.f8.f64, ctx.f30.f64);
	// fsel f6,f7,f31,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fdivs f5,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// fmuls f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f2,f12,f5
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bne cr6,0x8235f7ac
	if (!ctx.cr6.eq) goto loc_8235F7AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-528
	ctx.r4.s64 = ctx.r11.s64 + -528;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82219020
	ctx.lr = 0x8235F7AC;
	sub_82219020(ctx, base);
loc_8235F7AC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8235F7B0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x8235F7BC;
	sub_822B2498(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f8,f30
	ctx.cr6.compare(ctx.f8.f64, ctx.f30.f64);
	// fsel f6,f7,f31,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fdivs f5,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bne cr6,0x8235f818
	if (!ctx.cr6.eq) goto loc_8235F818;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-576
	ctx.r4.s64 = ctx.r11.s64 + -576;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82219020
	ctx.lr = 0x8235F818;
	sub_82219020(ctx, base);
loc_8235F818:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8235F81C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x8235F828;
	sub_822B2498(ctx, base);
	// bl 0x8235f3c0
	ctx.lr = 0x8235F82C;
	sub_8235F3C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x82218e10
	ctx.lr = 0x8235F85C;
	sub_82218E10(ctx, base);
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// li r9,36
	ctx.r9.s64 = 36;
	// addi r8,r10,8536
	ctx.r8.s64 = ctx.r10.s64 + 8536;
	// li r4,5
	ctx.r4.s64 = 5;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// divw r3,r7,r9
	ctx.r3.s32 = ctx.r7.s32 / ctx.r9.s32;
	// bl 0x822ace70
	ctx.lr = 0x8235F878;
	sub_822ACE70(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235F6D8) {
	__imp__sub_8235F6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F888) {
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
	// bl 0x822acb68
	ctx.lr = 0x8235F89C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8235f8b0
	if (ctx.cr6.lt) goto loc_8235F8B0;
	// bl 0x822acb68
	ctx.lr = 0x8235F8A8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x8235f8bc
	if (!ctx.cr6.gt) goto loc_8235F8BC;
loc_8235F8B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x822ad350
	ctx.lr = 0x8235F8BC;
	sub_822AD350(ctx, base);
loc_8235F8BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8235f5e0
	ctx.lr = 0x8235F8C4;
	sub_8235F5E0(ctx, base);
	// lbz r11,33(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235f8e8
	if (ctx.cr6.eq) goto loc_8235F8E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-484
	ctx.r4.s64 = ctx.r11.s64 + -484;
	// bl 0x822ad4e0
	ctx.lr = 0x8235F8E8;
	sub_822AD4E0(ctx, base);
loc_8235F8E8:
	// bl 0x822acb68
	ctx.lr = 0x8235F8EC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8235f93c
	if (!ctx.cr6.eq) goto loc_8235F93C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8235F8FC;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x8235F918;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// li r9,28
	ctx.r9.s64 = 28;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f11.u32);
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
loc_8235F93C:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8235F888) {
	__imp__sub_8235F888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235F960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8235F968;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x8235F978;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8235f98c
	if (ctx.cr6.lt) goto loc_8235F98C;
	// bl 0x822acb68
	ctx.lr = 0x8235F984;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// ble cr6,0x8235f998
	if (!ctx.cr6.gt) goto loc_8235F998;
loc_8235F98C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x822ad350
	ctx.lr = 0x8235F998;
	sub_822AD350(ctx, base);
loc_8235F998:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x822b1c50
	ctx.lr = 0x8235F9AC;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x8235F9B4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x8235faac
	if (ctx.cr6.eq) goto loc_8235FAAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8235fa40
	if (ctx.cr6.eq) goto loc_8235FA40;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bne cr6,0x8235fab8
	if (!ctx.cr6.eq) goto loc_8235FAB8;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// li r3,5
	ctx.r3.s64 = 5;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x8235F9E4;
	sub_822B2498(ctx, base);
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f8,f30
	ctx.cr6.compare(ctx.f8.f64, ctx.f30.f64);
	// fsel f6,f7,f31,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fdivs f5,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// fmuls f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f4,136(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f3,140(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f2,f12,f5
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bne cr6,0x8235fa40
	if (!ctx.cr6.eq) goto loc_8235FA40;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-340
	ctx.r4.s64 = ctx.r11.s64 + -340;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82219020
	ctx.lr = 0x8235FA40;
	sub_82219020(ctx, base);
loc_8235FA40:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b2498
	ctx.lr = 0x8235FA4C;
	sub_822B2498(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f8,f30
	ctx.cr6.compare(ctx.f8.f64, ctx.f30.f64);
	// fsel f6,f7,f31,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fdivs f5,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// fmuls f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bne cr6,0x8235faa8
	if (!ctx.cr6.eq) goto loc_8235FAA8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-392
	ctx.r4.s64 = ctx.r11.s64 + -392;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82219020
	ctx.lr = 0x8235FAA8;
	sub_82219020(ctx, base);
loc_8235FAA8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8235FAAC:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x8235FAB4;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_8235FAB8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x8235FAC4;
	sub_822B2498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x8235FACC;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x8235FAE8;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x8235fb14
	if (ctx.cr6.gt) goto loc_8235FB14;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-440
	ctx.r4.s64 = ctx.r11.s64 + -440;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82219020
	ctx.lr = 0x8235FB14;
	sub_82219020(ctx, base);
loc_8235FB14:
	// bl 0x8235f3c0
	ctx.lr = 0x8235FB18;
	sub_8235F3C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r10,33(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r9.u8);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x82218e10
	ctx.lr = 0x8235FB54;
	sub_82218E10(ctx, base);
	// stfs f30,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lis r8,-31810
	ctx.r8.s64 = -2084700160;
	// li r7,36
	ctx.r7.s64 = 36;
	// addi r6,r8,8536
	ctx.r6.s64 = ctx.r8.s64 + 8536;
	// li r4,5
	ctx.r4.s64 = 5;
	// subf r5,r6,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r6.s64;
	// divw r3,r5,r7
	ctx.r3.s32 = ctx.r5.s32 / ctx.r7.s32;
	// bl 0x822ace70
	ctx.lr = 0x8235FB78;
	sub_822ACE70(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235F960) {
	__imp__sub_8235F960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FB88) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235fbb0
	if (ctx.cr6.eq) goto loc_8235FBB0;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r10,r11,5464
	ctx.r10.s64 = ctx.r11.s64 + 5464;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// b 0x8235fbb4
	goto loc_8235FBB4;
loc_8235FBB0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8235FBB4:
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822e40f0
	ctx.lr = 0x8235FBC4;
	sub_822E40F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235FB88) {
	__imp__sub_8235FB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235FBD4) {
	__imp__sub_8235FBD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FBD8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8235FBFC;
	sub_8223E078(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8235fc34
	if (ctx.cr6.lt) goto loc_8235FC34;
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,5464
	ctx.r11.s64 = ctx.r9.s64 + 5464;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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
loc_8235FC34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8235FBD8) {
	__imp__sub_8235FBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8235FC58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r11,5448
	ctx.r5.s64 = ctx.r11.s64 + 5448;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8235FC70;
	sub_822E40F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r30,r10,8536
	ctx.r30.s64 = ctx.r10.s64 + 8536;
loc_8235FC80:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r9,33(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8235fcc8
	if (ctx.cr6.eq) goto loc_8235FCC8;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8235FCB4;
	sub_822E40F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8235FCC4;
	sub_822E40F0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8235FCC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 768, ctx.xer);
	// blt cr6,0x8235fc80
	if (ctx.cr6.lt) goto loc_8235FC80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r10,5464
	ctx.r31.s64 = ctx.r10.s64 + 5464;
loc_8235FCEC:
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235fd04
	if (ctx.cr6.eq) goto loc_8235FD04;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// b 0x8235fd08
	goto loc_8235FD08;
loc_8235FD04:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8235FD08:
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8235FD1C;
	sub_822E40F0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 768, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8235fcec
	if (ctx.cr6.lt) goto loc_8235FCEC;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// lwz r11,5460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235fd50
	if (ctx.cr6.eq) goto loc_8235FD50;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// b 0x8235fd54
	goto loc_8235FD54;
loc_8235FD50:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8235FD54:
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8235FD68;
	sub_822E40F0(ctx, base);
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// lwz r11,5452(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235fd84
	if (ctx.cr6.eq) goto loc_8235FD84;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// b 0x8235fd88
	goto loc_8235FD88;
loc_8235FD84:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8235FD88:
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8235FD9C;
	sub_822E40F0(ctx, base);
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r10,5456
	ctx.r5.s64 = ctx.r10.s64 + 5456;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8235FDB0;
	sub_822E40F0(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8235FDC8;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235FC50) {
	__imp__sub_8235FC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8235FDD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,5448
	ctx.r31.s64 = ctx.r11.s64 + 5448;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223e078
	ctx.lr = 0x8235FDF8;
	sub_8223E078(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ble cr6,0x8235fe60
	if (!ctx.cr6.gt) goto loc_8235FE60;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r29,r11,8536
	ctx.r29.s64 = ctx.r11.s64 + 8536;
loc_8235FE14:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8235FE24;
	sub_8223E078(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r4,34
	ctx.r4.s64 = 34;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8223e078
	ctx.lr = 0x8235FE48;
	sub_8223E078(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8235fe14
	if (ctx.cr6.lt) goto loc_8235FE14;
loc_8235FE60:
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r29,r10,5464
	ctx.r29.s64 = ctx.r10.s64 + 5464;
loc_8235FE70:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8223e078
	ctx.lr = 0x8235FE84;
	sub_8223E078(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8235fea4
	if (ctx.cr6.lt) goto loc_8235FEA4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stwx r11,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// b 0x8235fea8
	goto loc_8235FEA8;
loc_8235FEA4:
	// stwx r28,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u32);
loc_8235FEA8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 768, ctx.xer);
	// blt cr6,0x8235fe70
	if (ctx.cr6.lt) goto loc_8235FE70;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8235FECC;
	sub_8223E078(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8235feec
	if (ctx.cr6.lt) goto loc_8235FEEC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8235fef0
	goto loc_8235FEF0;
loc_8235FEEC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8235FEF0:
	// stw r11,5460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5460, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x8235FF04;
	sub_8223E078(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lis r10,-31810
	ctx.r10.s64 = -2084700160;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8235ff24
	if (ctx.cr6.lt) goto loc_8235FF24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8235ff28
	goto loc_8235FF28;
loc_8235FF24:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8235FF28:
	// stw r11,5452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5452, ctx.r11.u32);
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,5456
	ctx.r3.s64 = ctx.r11.s64 + 5456;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8223e078
	ctx.lr = 0x8235FF40;
	sub_8223E078(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8223e078
	ctx.lr = 0x8235FF50;
	sub_8223E078(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8235ff6c
	if (ctx.cr6.eq) goto loc_8235FF6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-288
	ctx.r4.s64 = ctx.r11.s64 + -288;
	// bl 0x822830e8
	ctx.lr = 0x8235FF6C;
	sub_822830E8(ctx, base);
loc_8235FF6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235FDD0) {
	__imp__sub_8235FDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235FF74) {
	__imp__sub_8235FF74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r11,-13944
	ctx.r10.s64 = ctx.r11.s64 + -13944;
	// lbzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235FF78) {
	__imp__sub_8235FF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r11,-15372
	ctx.r10.s64 = ctx.r11.s64 + -15372;
	// lbzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235FF88) {
	__imp__sub_8235FF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235FF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r11,-16708
	ctx.r10.s64 = ctx.r11.s64 + -16708;
	// addi r9,r10,1336
	ctx.r9.s64 = ctx.r10.s64 + 1336;
	// lbzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360018
	if (ctx.cr6.eq) goto loc_82360018;
	// addi r11,r10,2764
	ctx.r11.s64 = ctx.r10.s64 + 2764;
	// lbzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82360018
	if (!ctx.cr6.eq) goto loc_82360018;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8235FFC4:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8235ffdc
	if (ctx.cr6.eq) goto loc_8235FFDC;
	// addi r7,r10,1336
	ctx.r7.s64 = ctx.r10.s64 + 1336;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8235fff8
	if (!ctx.cr6.eq) goto loc_8235FFF8;
loc_8235FFDC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8235ffc4
	if (ctx.cr6.lt) goto loc_8235FFC4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stbx r8,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8235FFF8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82360010
	if (ctx.cr6.lt) goto loc_82360010;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stbx r8,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82360010:
	// stbx r8,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u8);
	// blr 
	return;
loc_82360018:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235FF98) {
	__imp__sub_8235FF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82360024) {
	__imp__sub_82360024(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lbz r3,-13844(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -13844);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82360028) {
	__imp__sub_82360028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82360034) {
	__imp__sub_82360034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360038) {
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
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82287e08
	ctx.lr = 0x82360054;
	sub_82287E08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287c60
	ctx.lr = 0x8236005C;
	sub_82287C60(ctx, base);
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

PPC_WEAK_FUNC(sub_82360038) {
	__imp__sub_82360038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82360078;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82287e08
	ctx.lr = 0x82360098;
	sub_82287E08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287cd0
	ctx.lr = 0x823600A0;
	sub_82287CD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82287fe0
	ctx.lr = 0x823600AC;
	sub_82287FE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82288048
	ctx.lr = 0x823600B8;
	sub_82288048(ctx, base);
	// bl 0x82272b50
	ctx.lr = 0x823600BC;
	sub_82272B50(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,13652
	ctx.r8.s64 = ctx.r11.s64 + 13652;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-10524
	ctx.r5.s64 = ctx.r10.s64 + -10524;
	// addi r4,r9,-10528
	ctx.r4.s64 = ctx.r9.s64 + -10528;
	// addi r7,r7,-10680
	ctx.r7.s64 = ctx.r7.s64 + -10680;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x822e84f0
	ctx.lr = 0x823600E8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288048
	ctx.lr = 0x823600F4;
	sub_82288048(ctx, base);
	// lis r6,-31822
	ctx.r6.s64 = -2085486592;
	// lwz r11,-380(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236010c
	if (ctx.cr6.eq) goto loc_8236010C;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82360114
	goto loc_82360114;
loc_8236010C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
loc_82360114:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288048
	ctx.lr = 0x8236011C;
	sub_82288048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287c60
	ctx.lr = 0x82360124;
	sub_82287C60(ctx, base);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-13948
	ctx.r9.s64 = ctx.r10.s64 + -13948;
	// stw r11,-13948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13948, ctx.r11.u32);
	// stw r30,-2756(r9)
	PPC_STORE_U32(ctx.r9.u32 + -2756, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82360070) {
	__imp__sub_82360070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360140) {
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
	// sth r5,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r5.u16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8230f8b0
	ctx.lr = 0x82360160;
	sub_8230F8B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82360188
	if (!ctx.cr6.lt) goto loc_82360188;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,-13844(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13844, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82360188:
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

PPC_WEAK_FUNC(sub_82360140) {
	__imp__sub_82360140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236019C) {
	__imp__sub_8236019C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823601A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r3,r11,-13896
	ctx.r3.s64 = ctx.r11.s64 + -13896;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823601A0) {
	__imp__sub_823601A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823601AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823601AC) {
	__imp__sub_823601AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823601B0) {
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
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r11,4005
	ctx.r11.s64 = 4005;
	// addi r5,r10,-13896
	ctx.r5.s64 = ctx.r10.s64 + -13896;
	// sth r11,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r11.u16);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8230f8b0
	ctx.lr = 0x823601D8;
	sub_8230F8B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82360200
	if (!ctx.cr6.lt) goto loc_82360200;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,-13844(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13844, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82360200:
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

PPC_WEAK_FUNC(sub_823601B0) {
	__imp__sub_823601B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82360214) {
	__imp__sub_82360214(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// stw r3,-16712(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16712, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82360218) {
	__imp__sub_82360218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82360224) {
	__imp__sub_82360224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82287e08
	ctx.lr = 0x82360248;
	sub_82287E08(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82360274
	if (!ctx.cr6.eq) goto loc_82360274;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// bl 0x82280900
	ctx.lr = 0x8236026C;
	sub_82280900(ctx, base);
	// li r4,16750
	ctx.r4.s64 = 16750;
	// b 0x823602fc
	goto loc_823602FC;
loc_82360274:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r31,-31809
	ctx.r31.s64 = -2084634624;
	// lwz r11,-376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -376);
	// lwz r5,-16712(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16712);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823602e8
	if (ctx.cr6.eq) goto loc_823602E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// bl 0x82280900
	ctx.lr = 0x8236029C;
	sub_82280900(ctx, base);
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lwz r11,-14904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14904);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823602bc
	if (ctx.cr6.eq) goto loc_823602BC;
	// lwz r11,-16712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16712);
	// addi r4,r11,13000
	ctx.r4.s64 = ctx.r11.s64 + 13000;
	// b 0x823602fc
	goto loc_823602FC;
loc_823602BC:
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,17052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17052);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lwz r11,-16712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16712);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823602e0
	if (ctx.cr6.eq) goto loc_823602E0;
	// addi r4,r11,12000
	ctx.r4.s64 = ctx.r11.s64 + 12000;
	// b 0x82360300
	goto loc_82360300;
loc_823602E0:
	// addi r4,r11,14000
	ctx.r4.s64 = ctx.r11.s64 + 14000;
	// b 0x82360300
	goto loc_82360300;
loc_823602E8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-168
	ctx.r4.s64 = ctx.r11.s64 + -168;
	// bl 0x82280900
	ctx.lr = 0x823602F4;
	sub_82280900(ctx, base);
	// lwz r11,-16712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16712);
	// addi r4,r11,15000
	ctx.r4.s64 = ctx.r11.s64 + 15000;
loc_823602FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82360300:
	// bl 0x82287ea0
	ctx.lr = 0x82360304;
	sub_82287EA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82360228) {
	__imp__sub_82360228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236031C) {
	__imp__sub_8236031C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360320) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r11,-5
	ctx.r11.s64 = -327680;
	// ori r11,r11,27680
	ctx.r11.u64 = ctx.r11.u64 | 27680;
	// stw r11,-15364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15364, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82360320) {
	__imp__sub_82360320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82360334) {
	__imp__sub_82360334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360338) {
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
	// bl 0x8230f3e0
	ctx.lr = 0x82360348;
	sub_8230F3E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823728c8
	ctx.lr = 0x82360350;
	sub_823728C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236036c
	if (ctx.cr6.eq) goto loc_8236036C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x82280c30
	ctx.lr = 0x8236036C;
	sub_82280C30(ctx, base);
loc_8236036C:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82360338) {
	__imp__sub_82360338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823603a8
	if (ctx.cr6.eq) goto loc_823603A8;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823603a8
	if (ctx.cr6.eq) goto loc_823603A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
loc_823603A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-21936
	ctx.r3.s64 = ctx.r11.s64 + -21936;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82360380) {
	__imp__sub_82360380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823603B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823603B4) {
	__imp__sub_823603B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823603B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823603e0
	if (ctx.cr6.eq) goto loc_823603E0;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823603e0
	if (ctx.cr6.eq) goto loc_823603E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
loc_823603E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-21936
	ctx.r3.s64 = ctx.r11.s64 + -21936;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823603B8) {
	__imp__sub_823603B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823603EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823603EC) {
	__imp__sub_823603EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823603F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-13884
	ctx.r31.s64 = ctx.r11.s64 + -13884;
	// li r5,1264
	ctx.r5.s64 = 1264;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287b40
	ctx.lr = 0x82360420;
	sub_82287B40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8230be18
	ctx.lr = 0x8236042C;
	sub_8230BE18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230ac10
	ctx.lr = 0x82360434;
	sub_8230AC10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360070
	ctx.lr = 0x82360448;
	sub_82360070(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823603F0) {
	__imp__sub_823603F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-16704
	ctx.r31.s64 = ctx.r11.s64 + -16704;
	// lwz r11,2756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823605b0
	if (ctx.cr6.eq) goto loc_823605B0;
	// lbz r11,2860(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2860);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823604cc
	if (!ctx.cr6.eq) goto loc_823604CC;
	// bl 0x8230bba0
	ctx.lr = 0x8236049C;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823604c0
	if (ctx.cr6.eq) goto loc_823604C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823603f0
	ctx.lr = 0x823604B0;
	sub_823603F0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,104
	ctx.r4.s64 = ctx.r11.s64 + 104;
	// bl 0x82280c30
	ctx.lr = 0x823604C0;
	sub_82280C30(ctx, base);
loc_823604C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r11.u32);
	// b 0x823605b0
	goto loc_823605B0;
loc_823604CC:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x822ec4e8
	ctx.lr = 0x823604D4;
	sub_822EC4E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230bba0
	ctx.lr = 0x823604DC;
	sub_8230BBA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360504
	if (ctx.cr6.eq) goto loc_82360504;
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360504
	if (ctx.cr6.eq) goto loc_82360504;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82280900
	ctx.lr = 0x82360504;
	sub_82280900(ctx, base);
loc_82360504:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r3,r31,2820
	ctx.r3.s64 = ctx.r31.s64 + 2820;
	// addi r4,r11,-13896
	ctx.r4.s64 = ctx.r11.s64 + -13896;
	// li r5,4005
	ctx.r5.s64 = 4005;
	// bl 0x82360140
	ctx.lr = 0x82360518;
	sub_82360140(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
	// bl 0x82310110
	ctx.lr = 0x82360524;
	sub_82310110(ctx, base);
	// addi r10,r31,-12632
	ctx.r10.s64 = ctx.r31.s64 + -12632;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r4,r31,2864
	ctx.r4.s64 = ctx.r31.s64 + 2864;
	// li r5,1264
	ctx.r5.s64 = 1264;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8236053C;
	sub_823DE1F0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r31,2768
	ctx.r10.s64 = ctx.r31.s64 + 2768;
	// addi r9,r31,2820
	ctx.r9.s64 = ctx.r31.s64 + 2820;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82360554:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82360554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82360554;
	// addi r10,r31,-12632
	ctx.r10.s64 = ctx.r31.s64 + -12632;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2776, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r11.u32);
	// bl 0x8230bd68
	ctx.lr = 0x82360578;
	sub_8230BD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360598
	if (ctx.cr6.eq) goto loc_82360598;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823603f0
	ctx.lr = 0x8236058C;
	sub_823603F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-12639(r31)
	PPC_STORE_U8(ctx.r31.u32 + -12639, ctx.r11.u8);
	// b 0x823605a8
	goto loc_823605A8;
loc_82360598:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r10,-12639(r31)
	PPC_STORE_U8(ctx.r31.u32 + -12639, ctx.r10.u8);
loc_823605A8:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x822ec500
	ctx.lr = 0x823605B0;
	sub_822EC500(ctx, base);
loc_823605B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82360460) {
	__imp__sub_82360460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823605C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82310110
	ctx.lr = 0x823605E0;
	sub_82310110(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r31,-31809
	ctx.r31.s64 = -2084634624;
	// addi r5,r11,-13896
	ctx.r5.s64 = ctx.r11.s64 + -13896;
	// addi r30,r31,-13844
	ctx.r30.s64 = ctx.r31.s64 + -13844;
	// li r11,4005
	ctx.r11.s64 = 4005;
	// sth r11,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r11.u16);
	// stw r3,-2852(r30)
	PPC_STORE_U32(ctx.r30.u32 + -2852, ctx.r3.u32);
	// lwz r4,-72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r3,-84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -84);
	// bl 0x8230f8b0
	ctx.lr = 0x82360608;
	sub_8230F8B0(ctx, base);
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r11,-1572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1572);
	// lbz r10,-13844(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -13844);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r11,-1572(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1572, ctx.r11.u32);
	// stb r10,-13844(r31)
	PPC_STORE_U8(ctx.r31.u32 + -13844, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823605C8) {
	__imp__sub_823605C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82360648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-16704
	ctx.r31.s64 = ctx.r11.s64 + -16704;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,-12639(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -12639);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823606b8
	if (!ctx.cr6.eq) goto loc_823606B8;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x822ec4e8
	ctx.lr = 0x82360670;
	sub_822EC4E8(ctx, base);
	// lbz r11,-12639(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -12639);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823606b0
	if (!ctx.cr6.eq) goto loc_823606B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230bd68
	ctx.lr = 0x82360684;
	sub_8230BD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823606a0
	if (!ctx.cr6.eq) goto loc_823606A0;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x822ec500
	ctx.lr = 0x82360698;
	sub_822EC500(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823606A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823603f0
	ctx.lr = 0x823606A8;
	sub_823603F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-12639(r31)
	PPC_STORE_U8(ctx.r31.u32 + -12639, ctx.r11.u8);
loc_823606B0:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x822ec500
	ctx.lr = 0x823606B8;
	sub_822EC500(ctx, base);
loc_823606B8:
	// lwz r11,2840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2840);
	// lwz r10,2836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2836);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823606d8
	if (!ctx.cr6.lt) goto loc_823606D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x823606e0
	if (ctx.cr6.eq) goto loc_823606E0;
loc_823606D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360460
	ctx.lr = 0x823606E0;
	sub_82360460(ctx, base);
loc_823606E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82360640) {
	__imp__sub_82360640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823606E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823606F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82310110
	ctx.lr = 0x823606FC;
	sub_82310110(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-13884
	ctx.r31.s64 = ctx.r11.s64 + -13884;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r10,r11,37856
	ctx.r10.u64 = ctx.r11.u64 | 37856;
	// lwz r11,-1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1480);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8236075c
	if (!ctx.cr6.gt) goto loc_8236075C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82360640
	ctx.lr = 0x8236072C;
	sub_82360640(ctx, base);
	// lbz r11,-15459(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -15459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360754
	if (ctx.cr6.eq) goto loc_82360754;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82360748
	if (!ctx.cr6.eq) goto loc_82360748;
	// stw r30,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r30.u32);
loc_82360748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360228
	ctx.lr = 0x82360750;
	sub_82360228(ctx, base);
	// stw r30,-1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1480, ctx.r30.u32);
loc_82360754:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82360460
	ctx.lr = 0x8236075C;
	sub_82360460(ctx, base);
loc_8236075C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823606E8) {
	__imp__sub_823606E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82360764) {
	__imp__sub_82360764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,-13884
	ctx.r31.s64 = ctx.r11.s64 + -13884;
	// lbz r11,-2807(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2807);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360814
	if (ctx.cr6.eq) goto loc_82360814;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82360798:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82360798
	if (!ctx.cr6.eq) goto loc_82360798;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
	// bl 0x82360640
	ctx.lr = 0x823607BC;
	sub_82360640(ctx, base);
	// lbz r10,-15459(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -15459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82360814
	if (ctx.cr6.eq) goto loc_82360814;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x822ec4e8
	ctx.lr = 0x823607D0;
	sub_822EC4E8(ctx, base);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823607e4
	if (!ctx.cr6.eq) goto loc_823607E4;
	// bl 0x82310110
	ctx.lr = 0x823607E0;
	sub_82310110(ctx, base);
	// stw r3,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r3.u32);
loc_823607E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82287e08
	ctx.lr = 0x823607F0;
	sub_82287E08(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x823607F4;
	sub_82310110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287ed0
	ctx.lr = 0x82360800;
	sub_82287ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82288048
	ctx.lr = 0x8236080C;
	sub_82288048(ctx, base);
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x822ec500
	ctx.lr = 0x82360814;
	sub_822EC500(ctx, base);
loc_82360814:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82360768) {
	__imp__sub_82360768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236082C) {
	__imp__sub_8236082C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360830) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r31,r11,-13884
	ctx.r31.s64 = ctx.r11.s64 + -13884;
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236088c
	if (ctx.cr6.eq) goto loc_8236088C;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x822ec4e8
	ctx.lr = 0x8236085C;
	sub_822EC4E8(ctx, base);
	// lbz r11,-15459(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -15459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236087c
	if (ctx.cr6.eq) goto loc_8236087C;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13896
	ctx.r4.s64 = ctx.r11.s64 + -13896;
	// li r5,4005
	ctx.r5.s64 = 4005;
	// bl 0x82360140
	ctx.lr = 0x8236087C;
	sub_82360140(ctx, base);
loc_8236087C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,21
	ctx.r3.s64 = 21;
	// stb r11,-15459(r31)
	PPC_STORE_U8(ctx.r31.u32 + -15459, ctx.r11.u8);
	// bl 0x822ec500
	ctx.lr = 0x8236088C;
	sub_822EC500(ctx, base);
loc_8236088C:
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

PPC_WEAK_FUNC(sub_82360830) {
	__imp__sub_82360830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823608A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823608A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,-13884
	ctx.r31.s64 = ctx.r11.s64 + -13884;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r11,-2807(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2807);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360944
	if (ctx.cr6.eq) goto loc_82360944;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_823608CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823608cc
	if (!ctx.cr6.eq) goto loc_823608CC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,14
	ctx.r4.s64 = ctx.r11.s64 + 14;
	// bl 0x82360640
	ctx.lr = 0x823608F0;
	sub_82360640(ctx, base);
	// lbz r10,-15459(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -15459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82360944
	if (ctx.cr6.eq) goto loc_82360944;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82360910
	if (!ctx.cr6.eq) goto loc_82360910;
	// bl 0x82310110
	ctx.lr = 0x8236090C;
	sub_82310110(ctx, base);
	// stw r3,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r3.u32);
loc_82360910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82287e08
	ctx.lr = 0x8236091C;
	sub_82287E08(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x82360920;
	sub_82310110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287ed0
	ctx.lr = 0x8236092C;
	sub_82287ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82287fe0
	ctx.lr = 0x82360938;
	sub_82287FE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82288048
	ctx.lr = 0x82360944;
	sub_82288048(ctx, base);
loc_82360944:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823608A0) {
	__imp__sub_823608A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236094C) {
	__imp__sub_8236094C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r11,-13896
	ctx.r10.s64 = ctx.r11.s64 + -13896;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82360950) {
	__imp__sub_82360950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360960) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r31,r11,-13940
	ctx.r31.s64 = ctx.r11.s64 + -13940;
	// addi r9,r10,-27112
	ctx.r9.s64 = ctx.r10.s64 + -27112;
	// lis r4,16726
	ctx.r4.s64 = 1096155136;
	// lwz r11,-13940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13940);
	// addi r5,r31,-2744
	ctx.r5.s64 = ctx.r31.s64 + -2744;
	// ori r4,r4,2157
	ctx.r4.u64 = ctx.r4.u64 | 2157;
	// mulli r8,r11,208
	ctx.r8.s64 = ctx.r11.s64 * 208;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82372888
	ctx.lr = 0x8236099C;
	sub_82372888(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823609d0
	if (ctx.cr6.eq) goto loc_823609D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,272
	ctx.r4.s64 = ctx.r11.s64 + 272;
	// bl 0x82280b08
	ctx.lr = 0x823609B8;
	sub_82280B08(ctx, base);
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
loc_823609D0:
	// lis r9,-31809
	ctx.r9.s64 = -2084634624;
	// lwz r11,-2744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2744);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lbz r10,-2741(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2741);
	// addi r3,r9,-13896
	ctx.r3.s64 = ctx.r9.s64 + -13896;
	// lbz r7,-2742(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2742);
	// addi r4,r8,220
	ctx.r4.s64 = ctx.r8.s64 + 220;
	// lbz r6,-2743(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2743);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbz r5,-2744(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2744);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x82360A04;
	sub_82280900(ctx, base);
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

PPC_WEAK_FUNC(sub_82360960) {
	__imp__sub_82360960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82360A1C) {
	__imp__sub_82360A1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82360A28;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 * 44;
	// addi r31,r11,-13844
	ctx.r31.s64 = ctx.r11.s64 + -13844;
	// addi r11,r31,-1516
	ctx.r11.s64 = ctx.r31.s64 + -1516;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822807b0
	ctx.lr = 0x82360A48;
	sub_822807B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x82360a64
	if (!ctx.cr6.eq) goto loc_82360A64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82360A64:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bad8
	ctx.lr = 0x82360A74;
	sub_8236BAD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bab0
	ctx.lr = 0x82360A7C;
	sub_8236BAB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r31,-1516
	ctx.r3.s64 = ctx.r31.s64 + -1516;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x82360b44
	if (ctx.cr6.eq) goto loc_82360B44;
	// bl 0x82280760
	ctx.lr = 0x82360A94;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82360A98;
	sub_822805F0(ctx, base);
	// lwz r3,-2856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2856);
	// bl 0x8236b770
	ctx.lr = 0x82360AA0;
	sub_8236B770(ctx, base);
	// lis r10,-32747
	ctx.r10.s64 = -2146107392;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,10
	ctx.r9.u64 = ctx.r10.u64 | 10;
	// stw r11,-2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2856, ctx.r11.u32);
	// li r3,25
	ctx.r3.s64 = 25;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82360acc
	if (!ctx.cr6.eq) goto loc_82360ACC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,544
	ctx.r4.s64 = ctx.r11.s64 + 544;
	// bl 0x82280900
	ctx.lr = 0x82360AC8;
	sub_82280900(ctx, base);
	// b 0x82360afc
	goto loc_82360AFC;
loc_82360ACC:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82360aec
	if (!ctx.cr6.eq) goto loc_82360AEC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,512
	ctx.r4.s64 = ctx.r11.s64 + 512;
	// bl 0x82280900
	ctx.lr = 0x82360AE8;
	sub_82280900(ctx, base);
	// b 0x82360afc
	goto loc_82360AFC;
loc_82360AEC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,472
	ctx.r4.s64 = ctx.r11.s64 + 472;
	// bl 0x82280b08
	ctx.lr = 0x82360AFC;
	sub_82280B08(ctx, base);
loc_82360AFC:
	// lwz r11,1268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82360b38
	if (ctx.cr6.lt) goto loc_82360B38;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lwz r10,1272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// stw r10,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// lwz r11,-31596(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31596);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-31596(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31596, ctx.r11.u32);
loc_82360B38:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82360B44:
	// bl 0x82280760
	ctx.lr = 0x82360B48;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82360B4C;
	sub_822805F0(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,25
	ctx.r3.s64 = 25;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// stw r5,-2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2844, ctx.r5.u32);
	// bge cr6,0x82360b88
	if (!ctx.cr6.lt) goto loc_82360B88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,432
	ctx.r4.s64 = ctx.r11.s64 + 432;
	// bl 0x82280b08
	ctx.lr = 0x82360B6C;
	sub_82280B08(ctx, base);
	// lwz r3,-2856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2856);
	// bl 0x8236b770
	ctx.lr = 0x82360B74;
	sub_8236B770(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2856, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82360B88:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,408
	ctx.r4.s64 = ctx.r11.s64 + 408;
	// bl 0x82280900
	ctx.lr = 0x82360B94;
	sub_82280900(ctx, base);
	// lwz r5,-2844(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2844);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,-27112
	ctx.r27.s64 = ctx.r11.s64 + -27112;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82360c28
	if (ctx.cr6.eq) goto loc_82360C28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r27,208
	ctx.r29.s64 = ctx.r27.s64 + 208;
	// addi r28,r11,-10528
	ctx.r28.s64 = ctx.r11.s64 + -10528;
loc_82360BB8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r29,-200
	ctx.r3.s64 = ctx.r29.s64 + -200;
	// bl 0x822e7f80
	ctx.lr = 0x82360BC8;
	sub_822E7F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360c08
	if (ctx.cr6.eq) goto loc_82360C08;
	// lwz r11,-2844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2844);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82360c20
	if (!ctx.cr6.lt) goto loc_82360C20;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r29,-208
	ctx.r3.s64 = ctx.r29.s64 + -208;
	// mulli r5,r11,208
	ctx.r5.s64 = ctx.r11.s64 * 208;
	// bl 0x823de130
	ctx.lr = 0x82360BF8;
	sub_823DE130(ctx, base);
	// lwz r11,-2844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2844);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,-2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2844, ctx.r5.u32);
	// b 0x82360c14
	goto loc_82360C14;
loc_82360C08:
	// lwz r5,-2844(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2844);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,208
	ctx.r29.s64 = ctx.r29.s64 + 208;
loc_82360C14:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82360bb8
	if (ctx.cr6.lt) goto loc_82360BB8;
	// b 0x82360c28
	goto loc_82360C28;
loc_82360C20:
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,-2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2844, ctx.r5.u32);
loc_82360C28:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,364
	ctx.r4.s64 = ctx.r11.s64 + 364;
	// bl 0x82280900
	ctx.lr = 0x82360C38;
	sub_82280900(ctx, base);
	// lwz r11,-2844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2844);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82360c9c
	if (!ctx.cr6.eq) goto loc_82360C9C;
	// lwz r3,-2856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2856);
	// bl 0x8236b770
	ctx.lr = 0x82360C4C;
	sub_8236B770(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2856, ctx.r11.u32);
	// lwz r11,1268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82360b38
	if (ctx.cr6.lt) goto loc_82360B38;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lwz r10,1272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// lwz r11,-31596(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31596);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,-31596(r9)
	PPC_STORE_U32(ctx.r9.u32 + -31596, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82360C9C:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82372860
	ctx.lr = 0x82360CA8;
	sub_82372860(ctx, base);
	// lwz r11,-2844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2844);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf. r5,r8,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x82360cc8
	if (ctx.cr0.lt) goto loc_82360CC8;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82360ccc
	if (ctx.cr6.lt) goto loc_82360CCC;
loc_82360CC8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82360CCC:
	// stw r5,-96(r31)
	PPC_STORE_U32(ctx.r31.u32 + -96, ctx.r5.u32);
	// mulli r10,r5,208
	ctx.r10.s64 = ctx.r5.s64 * 208;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,328
	ctx.r4.s64 = ctx.r9.s64 + 328;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x82360CEC;
	sub_82280900(ctx, base);
	// bl 0x82360960
	ctx.lr = 0x82360CF0;
	sub_82360960(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,-2856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2856);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82360d18
	if (!ctx.cr6.eq) goto loc_82360D18;
	// bl 0x8236b770
	ctx.lr = 0x82360D04;
	sub_8236B770(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,-2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2856, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82360D18:
	// bl 0x8236b770
	ctx.lr = 0x82360D1C;
	sub_8236B770(ctx, base);
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,500
	ctx.r9.s64 = 500;
	// stw r11,-2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2856, ctx.r11.u32);
	// stw r10,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r10.u32);
	// stw r11,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r11.u32);
	// stw r9,-31596(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31596, ctx.r9.u32);
	// stw r10,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// bl 0x82360960
	ctx.lr = 0x82360D44;
	sub_82360960(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82360b38
	if (ctx.cr6.eq) goto loc_82360B38;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82360A20) {
	__imp__sub_82360A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82360D64) {
	__imp__sub_82360D64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82360D70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-16700
	ctx.r31.s64 = ctx.r11.s64 + -16700;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1340
	ctx.r3.s64 = ctx.r31.s64 + 1340;
	// bl 0x82280638
	ctx.lr = 0x82360D8C;
	sub_82280638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82360e88
	if (!ctx.cr6.eq) goto loc_82360E88;
	// lwz r11,4128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4128);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bge cr6,0x82360e88
	if (!ctx.cr6.lt) goto loc_82360E88;
	// bl 0x82310110
	ctx.lr = 0x82360DA8;
	sub_82310110(ctx, base);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r11,4132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4132);
	// lwz r5,-31596(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31596);
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82360e88
	if (ctx.cr6.lt) goto loc_82360E88;
	// stw r3,4132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4132, ctx.r3.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,728
	ctx.r4.s64 = ctx.r11.s64 + 728;
	// bl 0x82280900
	ctx.lr = 0x82360DD4;
	sub_82280900(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,50
	ctx.r4.s64 = 50;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82373bd0
	ctx.lr = 0x82360DE8;
	sub_82373BD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360e04
	if (ctx.cr6.eq) goto loc_82360E04;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,680
	ctx.r4.s64 = ctx.r11.s64 + 680;
	// bl 0x82280900
	ctx.lr = 0x82360E04;
	sub_82280900(ctx, base);
loc_82360E04:
	// addi r3,r31,1340
	ctx.r3.s64 = ctx.r31.s64 + 1340;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822805e8
	ctx.lr = 0x82360E14;
	sub_822805E8(ctx, base);
	// bl 0x822807b0
	ctx.lr = 0x82360E18;
	sub_822807B0(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82360E2C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82360e2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82360E2C;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,-27112
	ctx.r4.s64 = ctx.r11.s64 + -27112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10400
	ctx.r5.s64 = 10400;
	// bl 0x8236fe50
	ctx.lr = 0x82360E50;
	sub_8236FE50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82360e88
	if (ctx.cr6.eq) goto loc_82360E88;
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// beq cr6,0x82360e88
	if (ctx.cr6.eq) goto loc_82360E88;
	// addi r3,r31,1340
	ctx.r3.s64 = ctx.r31.s64 + 1340;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82280760
	ctx.lr = 0x82360E70;
	sub_82280760(ctx, base);
	// bl 0x822805f0
	ctx.lr = 0x82360E74;
	sub_822805F0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,616
	ctx.r4.s64 = ctx.r11.s64 + 616;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82360E88;
	sub_822830E8(ctx, base);
loc_82360E88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82360D68) {
	__imp__sub_82360D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-28072
	ctx.r9.s64 = ctx.r11.s64 + -28072;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
loc_82360EA0:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82360f28
	if (ctx.cr6.eq) goto loc_82360F28;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82360f04
	if (ctx.cr6.eq) goto loc_82360F04;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82360f0c
	if (ctx.cr6.eq) goto loc_82360F0C;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82360f14
	if (ctx.cr6.eq) goto loc_82360F14;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82360f1c
	if (ctx.cr6.eq) goto loc_82360F1C;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82360f24
	if (ctx.cr6.eq) goto loc_82360F24;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r8,r9,968
	ctx.r8.s64 = ctx.r9.s64 + 968;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82360ea0
	if (ctx.cr6.lt) goto loc_82360EA0;
loc_82360EFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82360F04:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82360f28
	goto loc_82360F28;
loc_82360F0C:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x82360f28
	goto loc_82360F28;
loc_82360F14:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// b 0x82360f28
	goto loc_82360F28;
loc_82360F1C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x82360f28
	goto loc_82360F28;
loc_82360F24:
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
loc_82360F28:
	// cmpwi cr6,r10,120
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 120, ctx.xer);
	// bge cr6,0x82360efc
	if (!ctx.cr6.lt) goto loc_82360EFC;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82360E90) {
	__imp__sub_82360E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82360F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x82360F48;
	__savegprlr_17(ctx, base);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822881b0
	ctx.lr = 0x82360F54;
	sub_822881B0(ctx, base);
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// beq cr6,0x82360f74
	if (ctx.cr6.eq) goto loc_82360F74;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r4,r11,976
	ctx.r4.s64 = ctx.r11.s64 + 976;
	// bl 0x82280900
	ctx.lr = 0x82360F6C;
	sub_82280900(ctx, base);
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_82360F74:
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r10,-16704
	ctx.r29.s64 = ctx.r10.s64 + -16704;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,1288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1288, ctx.r11.u32);
	// stw r10,1336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1336, ctx.r10.u32);
	// bne cr6,0x82361278
	if (!ctx.cr6.eq) goto loc_82361278;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r27,-31809
	ctx.r27.s64 = -2084634624;
	// addi r22,r11,948
	ctx.r22.s64 = ctx.r11.s64 + 948;
	// addi r21,r10,908
	ctx.r21.s64 = ctx.r10.s64 + 908;
	// addi r23,r9,868
	ctx.r23.s64 = ctx.r9.s64 + 868;
	// addi r20,r8,836
	ctx.r20.s64 = ctx.r8.s64 + 836;
	// addi r19,r7,804
	ctx.r19.s64 = ctx.r7.s64 + 804;
	// addi r18,r6,776
	ctx.r18.s64 = ctx.r6.s64 + 776;
loc_82360FD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x82360FD8;
	sub_822881B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82361278
	if (!ctx.cr6.eq) goto loc_82361278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881b0
	ctx.lr = 0x82360FF0;
	sub_822881B0(ctx, base);
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82361240
	if (ctx.cr6.gt) goto loc_82361240;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8236117c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236117C;
	// bdzf 4*cr6+eq,0x8236117c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236117C;
	// bdzf 4*cr6+eq,0x823611a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823611A0;
	// bdzf 4*cr6+eq,0x82361250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82361250;
	// bne cr6,0x82361250
	if (!ctx.cr6.eq) goto loc_82361250;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r11,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// beq cr6,0x8236103c
	if (ctx.cr6.eq) goto loc_8236103C;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x8236103C;
	sub_82280900(ctx, base);
loc_8236103C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822883f0
	ctx.lr = 0x82361044;
	sub_822883F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8230b018
	ctx.lr = 0x8236104C;
	sub_8230B018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361110
	if (ctx.cr6.eq) goto loc_82361110;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8236105C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230bd68
	ctx.lr = 0x82361064;
	sub_8230BD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361100
	if (ctx.cr6.eq) goto loc_82361100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230bd88
	ctx.lr = 0x82361078;
	sub_8230BD88(ctx, base);
	// cmpld cr6,r28,r3
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r3.u64, ctx.xer);
	// bne cr6,0x82361100
	if (!ctx.cr6.eq) goto loc_82361100;
	// addi r11,r29,2760
	ctx.r11.s64 = ctx.r29.s64 + 2760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r25,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r25.u8);
	// bl 0x820f1718
	ctx.lr = 0x82361090;
	sub_820F1718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1718
	ctx.lr = 0x82361098;
	sub_820F1718(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stb r11,-16692(r27)
	PPC_STORE_U8(ctx.r27.u32 + -16692, ctx.r11.u8);
	// bl 0x820f1718
	ctx.lr = 0x823610B4;
	sub_820F1718(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// neg r6,r7
	ctx.r6.s64 = -ctx.r7.s64;
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// stb r11,13(r29)
	PPC_STORE_U8(ctx.r29.u32 + 13, ctx.r11.u8);
	// bl 0x820f1718
	ctx.lr = 0x823610D0;
	sub_820F1718(ctx, base);
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// andc r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,-12637(r29)
	PPC_STORE_U8(ctx.r29.u32 + -12637, ctx.r11.u8);
	// bl 0x82288498
	ctx.lr = 0x823610F0;
	sub_82288498(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227ede8
	ctx.lr = 0x82361100;
	sub_8227EDE8(ctx, base);
loc_82361100:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8236105c
	if (ctx.cr6.lt) goto loc_8236105C;
	// b 0x82361250
	goto loc_82361250;
loc_82361110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1718
	ctx.lr = 0x82361118;
	sub_820F1718(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1718
	ctx.lr = 0x82361120;
	sub_820F1718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stb r11,-16692(r27)
	PPC_STORE_U8(ctx.r27.u32 + -16692, ctx.r11.u8);
	// bl 0x820f1718
	ctx.lr = 0x8236113C;
	sub_820F1718(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// neg r7,r8
	ctx.r7.s64 = -ctx.r8.s64;
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// stb r11,13(r29)
	PPC_STORE_U8(ctx.r29.u32 + 13, ctx.r11.u8);
	// bl 0x820f1718
	ctx.lr = 0x82361158;
	sub_820F1718(ctx, base);
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// andc r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,-12637(r29)
	PPC_STORE_U8(ctx.r29.u32 + -12637, ctx.r11.u8);
	// bl 0x82288498
	ctx.lr = 0x82361178;
	sub_82288498(ctx, base);
	// b 0x82361250
	goto loc_82361250;
loc_8236117C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82361194
	if (ctx.cr6.eq) goto loc_82361194;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x82361194;
	sub_82280B08(ctx, base);
loc_82361194:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,14(r29)
	PPC_STORE_U8(ctx.r29.u32 + 14, ctx.r11.u8);
	// b 0x82361250
	goto loc_82361250;
loc_823611A0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x823611c4
	if (ctx.cr6.eq) goto loc_823611C4;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x823611B8;
	sub_82280B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,14(r29)
	PPC_STORE_U8(ctx.r29.u32 + 14, ctx.r11.u8);
	// b 0x82361250
	goto loc_82361250;
loc_823611C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288288
	ctx.lr = 0x823611CC;
	sub_82288288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82361214
	if (!ctx.cr6.gt) goto loc_82361214;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823611D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288210
	ctx.lr = 0x823611E0;
	sub_82288210(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288288
	ctx.lr = 0x823611EC;
	sub_82288288(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288210
	ctx.lr = 0x823611F8;
	sub_82288210(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82280900
	ctx.lr = 0x8236120C;
	sub_82280900(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x823611d8
	if (!ctx.cr0.eq) goto loc_823611D8;
loc_82361214:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288498
	ctx.lr = 0x82361224;
	sub_82288498(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8227ede8
	ctx.lr = 0x82361234;
	sub_8227EDE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,14(r29)
	PPC_STORE_U8(ctx.r29.u32 + 14, ctx.r11.u8);
	// b 0x82361250
	goto loc_82361250;
loc_82361240:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x82361250;
	sub_82280900(ctx, base);
loc_82361250:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8236126c
	if (ctx.cr6.eq) goto loc_8236126C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280900
	ctx.lr = 0x8236126C;
	sub_82280900(ctx, base);
loc_8236126C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82360fd0
	if (ctx.cr6.eq) goto loc_82360FD0;
loc_82361278:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82360F40) {
	__imp__sub_82360F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1264
	ctx.r4.s64 = 1264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db808
	ctx.lr = 0x8236129C;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x823612A4;
	sub_822DB8F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1264
	ctx.r5.s64 = 1264;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82287b40
	ctx.lr = 0x823612B4;
	sub_82287B40(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8230f9c8
	ctx.lr = 0x823612C0;
	sub_8230F9C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361388
	if (ctx.cr6.eq) goto loc_82361388;
	// bge cr6,0x823612dc
	if (!ctx.cr6.lt) goto loc_823612DC;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-13844(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13844, ctx.r11.u8);
	// b 0x82361388
	goto loc_82361388;
loc_823612DC:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lhz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,-31620
	ctx.r10.s64 = ctx.r11.s64 + -31620;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
loc_823612F4:
	// lhz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x82361314
	if (ctx.cr6.gt) goto loc_82361314;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8236132c
	if (!ctx.cr6.lt) goto loc_8236132C;
loc_82361314:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r10,26
	ctx.r7.s64 = ctx.r10.s64 + 26;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823612f4
	if (ctx.cr6.lt) goto loc_823612F4;
	// b 0x82361368
	goto loc_82361368;
loc_8236132C:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361350
	if (ctx.cr6.eq) goto loc_82361350;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236134C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82361364
	goto loc_82361364;
loc_82361350:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,1064
	ctx.r4.s64 = ctx.r11.s64 + 1064;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x82361364;
	sub_82280B08(ctx, base);
loc_82361364:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82361368:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82361388
	if (!ctx.cr6.eq) goto loc_82361388;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,1008
	ctx.r4.s64 = ctx.r11.s64 + 1008;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x82361388;
	sub_82280B08(ctx, base);
loc_82361388:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x82361390;
	sub_822DB8D8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82361280) {
	__imp__sub_82361280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823613A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823613A4) {
	__imp__sub_823613A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823613A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lbz r10,-13844(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -13844);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82361280
	sub_82361280(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823613A8) {
	__imp__sub_823613A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823613BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823613BC) {
	__imp__sub_823613BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823613C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r31,r11,-16696
	ctx.r31.s64 = ctx.r11.s64 + -16696;
	// lbz r10,2852(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2852);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823614b0
	if (ctx.cr6.eq) goto loc_823614B0;
	// lwz r11,1328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1328);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// ori r30,r10,54464
	ctx.r30.u64 = ctx.r10.u64 | 54464;
	// bgt cr6,0x8236141c
	if (ctx.cr6.gt) goto loc_8236141C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82361460
	if (ctx.cr6.eq) goto loc_82361460;
	// bl 0x82310110
	ctx.lr = 0x8236140C;
	sub_82310110(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,4000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4000, ctx.xer);
	// bgt cr6,0x82361438
	if (ctx.cr6.gt) goto loc_82361438;
loc_8236141C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82361460
	if (ctx.cr6.eq) goto loc_82361460;
	// bl 0x82310110
	ctx.lr = 0x82361428;
	sub_82310110(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82361460
	if (!ctx.cr6.gt) goto loc_82361460;
loc_82361438:
	// lwz r11,1328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1328);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r5,4005
	ctx.r5.s64 = 4005;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,-13896
	ctx.r4.s64 = ctx.r10.s64 + -13896;
	// stw r11,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r11.u32);
	// addi r3,r31,1284
	ctx.r3.s64 = ctx.r31.s64 + 1284;
	// bl 0x82360140
	ctx.lr = 0x82361458;
	sub_82360140(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8236145C;
	sub_82310110(ctx, base);
	// stw r3,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r3.u32);
loc_82361460:
	// lbz r10,2852(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2852);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823614b0
	if (ctx.cr6.eq) goto loc_823614B0;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823614b0
	if (ctx.cr6.eq) goto loc_823614B0;
	// lwz r11,1280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82361498
	if (ctx.cr6.gt) goto loc_82361498;
	// bl 0x82310110
	ctx.lr = 0x82361488;
	sub_82310110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,4000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4000, ctx.xer);
	// bgt cr6,0x823614ac
	if (ctx.cr6.gt) goto loc_823614AC;
loc_82361498:
	// bl 0x82310110
	ctx.lr = 0x8236149C;
	sub_82310110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x823614b0
	if (!ctx.cr6.gt) goto loc_823614B0;
loc_823614AC:
	// bl 0x823605c8
	ctx.lr = 0x823614B0;
	sub_823605C8(ctx, base);
loc_823614B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823613C0) {
	__imp__sub_823613C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823614C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823614D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r29,r11,-15360
	ctx.r29.s64 = ctx.r11.s64 + -15360;
	// lbz r11,1516(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823614ec
	if (ctx.cr6.eq) goto loc_823614EC;
	// bl 0x82361280
	ctx.lr = 0x823614EC;
	sub_82361280(ctx, base);
loc_823614EC:
	// bl 0x823613c0
	ctx.lr = 0x823614F0;
	sub_823613C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
	// addi r28,r11,1120
	ctx.r28.s64 = ctx.r11.s64 + 1120;
loc_82361500:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361534
	if (ctx.cr6.eq) goto loc_82361534;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82361534
	if (!ctx.cr6.eq) goto loc_82361534;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360a20
	ctx.lr = 0x82361520;
	sub_82360A20(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x82361534
	if (ctx.cr6.lt) goto loc_82361534;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280b08
	ctx.lr = 0x82361534;
	sub_82280B08(ctx, base);
loc_82361534:
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r11,r29,1444
	ctx.r11.s64 = ctx.r29.s64 + 1444;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82361500
	if (ctx.cr6.lt) goto loc_82361500;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823614C8) {
	__imp__sub_823614C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361550) {
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
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r10,-15360
	ctx.r3.s64 = ctx.r10.s64 + -15360;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r4,r9,1192
	ctx.r4.s64 = ctx.r9.s64 + 1192;
	// stb r11,-1331(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1331, ctx.r11.u8);
	// stb r10,-13981(r3)
	PPC_STORE_U8(ctx.r3.u32 + -13981, ctx.r10.u8);
	// bl 0x822801e0
	ctx.lr = 0x82361580;
	sub_822801E0(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r6,r8,1160
	ctx.r6.s64 = ctx.r8.s64 + 1160;
	// addi r3,r7,1148
	ctx.r3.s64 = ctx.r7.s64 + 1148;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8236159C;
	sub_822E15D0(ctx, base);
	// lis r6,-31809
	ctx.r6.s64 = -2084634624;
	// lis r5,-31809
	ctx.r5.s64 = -2084634624;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,-29340(r6)
	PPC_STORE_U32(ctx.r6.u32 + -29340, ctx.r3.u32);
	// stw r11,-13896(r5)
	PPC_STORE_U32(ctx.r5.u32 + -13896, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82361550) {
	__imp__sub_82361550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823615C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r3,r11,-15360
	ctx.r3.s64 = ctx.r11.s64 + -15360;
	// b 0x82280470
	sub_82280470(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823615C0) {
	__imp__sub_823615C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823615CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823615CC) {
	__imp__sub_823615CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823615D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823615D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8230be18
	ctx.lr = 0x823615EC;
	sub_8230BE18(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r5,1264
	ctx.r5.s64 = 1264;
	// addi r31,r11,-13844
	ctx.r31.s64 = ctx.r11.s64 + -13844;
	// addi r4,r31,-2836
	ctx.r4.s64 = ctx.r31.s64 + -2836;
	// addi r3,r31,-1568
	ctx.r3.s64 = ctx.r31.s64 + -1568;
	// bl 0x82287b40
	ctx.lr = 0x82361604;
	sub_82287B40(ctx, base);
	// addi r4,r31,-1568
	ctx.r4.s64 = ctx.r31.s64 + -1568;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360070
	ctx.lr = 0x82361618;
	sub_82360070(ctx, base);
	// addi r3,r31,-1568
	ctx.r3.s64 = ctx.r31.s64 + -1568;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82287e08
	ctx.lr = 0x82361624;
	sub_82287E08(ctx, base);
	// bl 0x82272ba0
	ctx.lr = 0x82361628;
	sub_82272BA0(ctx, base);
	// addi r11,r31,-1568
	ctx.r11.s64 = ctx.r31.s64 + -1568;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82287ed0
	ctx.lr = 0x82361638;
	sub_82287ED0(ctx, base);
	// bl 0x8230f3e0
	ctx.lr = 0x8236163C;
	sub_8230F3E0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823728c8
	ctx.lr = 0x82361644;
	sub_823728C8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r27,r11,-48
	ctx.r27.s64 = ctx.r11.s64 + -48;
	// beq cr6,0x82361664
	if (ctx.cr6.eq) goto loc_82361664;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280c30
	ctx.lr = 0x82361664;
	sub_82280C30(ctx, base);
loc_82361664:
	// addi r3,r31,-1568
	ctx.r3.s64 = ctx.r31.s64 + -1568;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82287fe0
	ctx.lr = 0x82361670;
	sub_82287FE0(ctx, base);
	// bl 0x8230f3e0
	ctx.lr = 0x82361674;
	sub_8230F3E0(ctx, base);
	// addi r11,r31,-1568
	ctx.r11.s64 = ctx.r31.s64 + -1568;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82287e40
	ctx.lr = 0x82361688;
	sub_82287E40(ctx, base);
	// addi r3,r31,-1568
	ctx.r3.s64 = ctx.r31.s64 + -1568;
	// bl 0x82360228
	ctx.lr = 0x82361690;
	sub_82360228(ctx, base);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r11,4005
	ctx.r11.s64 = 4005;
	// lwz r4,-1548(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1548);
	// addi r5,r10,-13896
	ctx.r5.s64 = ctx.r10.s64 + -13896;
	// lwz r3,-1560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1560);
	// sth r11,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r11.u16);
	// bl 0x8230f8b0
	ctx.lr = 0x823616AC;
	sub_8230F8B0(ctx, base);
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r9,r31,-100
	ctx.r9.s64 = ctx.r31.s64 + -100;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r7,r31,-1528
	ctx.r7.s64 = ctx.r31.s64 + -1528;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stbx r6,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u8);
	// stbx r5,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r5.u8);
	// bl 0x82310110
	ctx.lr = 0x823616DC;
	sub_82310110(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r3,-2864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2864, ctx.r3.u32);
	// bne cr6,0x823616f0
	if (!ctx.cr6.eq) goto loc_823616F0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r11,-28736
	ctx.r29.s64 = ctx.r11.s64 + -28736;
loc_823616F0:
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r31,r10,-21936
	ctx.r31.s64 = ctx.r10.s64 + -21936;
	// lwz r11,-4784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361720
	if (ctx.cr6.eq) goto loc_82361720;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82361724
	if (!ctx.cr6.eq) goto loc_82361724;
loc_82361720:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82361724:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-4848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361744
	if (ctx.cr6.eq) goto loc_82361744;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361744
	if (ctx.cr6.eq) goto loc_82361744;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_82361744:
	// bl 0x8230f3e0
	ctx.lr = 0x82361748;
	sub_8230F3E0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823728c8
	ctx.lr = 0x82361750;
	sub_823728C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361768
	if (ctx.cr6.eq) goto loc_82361768;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82280c30
	ctx.lr = 0x82361768;
	sub_82280C30(ctx, base);
loc_82361768:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8213d7f0
	ctx.lr = 0x82361774;
	sub_8213D7F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213d808
	ctx.lr = 0x82361780;
	sub_8213D808(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r11,1208
	ctx.r3.s64 = ctx.r11.s64 + 1208;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x822e84f0
	ctx.lr = 0x823617A8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360768
	ctx.lr = 0x823617B4;
	sub_82360768(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823615D0) {
	__imp__sub_823615D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823617BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823617BC) {
	__imp__sub_823617BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823617C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823617C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-13948
	ctx.r31.s64 = ctx.r11.s64 + -13948;
	// lbz r11,-2743(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2743);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236194c
	if (ctx.cr6.eq) goto loc_8236194C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8236180c
	if (!ctx.cr6.eq) goto loc_8236180C;
loc_823617F0:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236180c
	if (ctx.cr6.eq) goto loc_8236180C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x823617f0
	if (ctx.cr6.eq) goto loc_823617F0;
loc_8236180C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82361810:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82361810
	if (!ctx.cr6.eq) goto loc_82361810;
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82361848
	if (!ctx.cr6.gt) goto loc_82361848;
	// bl 0x82360830
	ctx.lr = 0x82361848;
	sub_82360830(ctx, base);
loc_82361848:
	// lbz r11,-15395(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -15395);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823618fc
	if (!ctx.cr6.eq) goto loc_823618FC;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x822ec4e8
	ctx.lr = 0x8236185C;
	sub_822EC4E8(ctx, base);
	// lbz r11,-15395(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -15395);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823618f4
	if (!ctx.cr6.eq) goto loc_823618F4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// stb r11,-15395(r31)
	PPC_STORE_U8(ctx.r31.u32 + -15395, ctx.r11.u8);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// li r5,1264
	ctx.r5.s64 = 1264;
	// bl 0x82287b40
	ctx.lr = 0x8236188C;
	sub_82287B40(ctx, base);
	// bl 0x82141588
	ctx.lr = 0x82361890;
	sub_82141588(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823618dc
	if (!ctx.cr6.eq) goto loc_823618DC;
	// bl 0x821414f0
	ctx.lr = 0x823618A0;
	sub_821414F0(ctx, base);
	// bl 0x8230bd68
	ctx.lr = 0x823618A4;
	sub_8230BD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823618dc
	if (ctx.cr6.eq) goto loc_823618DC;
	// bl 0x821414f0
	ctx.lr = 0x823618B4;
	sub_821414F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8230be18
	ctx.lr = 0x823618BC;
	sub_8230BE18(ctx, base);
	// bl 0x821414f0
	ctx.lr = 0x823618C0;
	sub_821414F0(ctx, base);
	// bl 0x8230ac10
	ctx.lr = 0x823618C4;
	sub_8230AC10(ctx, base);
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821414f0
	ctx.lr = 0x823618D0;
	sub_821414F0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x823618ec
	goto loc_823618EC;
loc_823618DC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,-2756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2756);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r6,r11,1292
	ctx.r6.s64 = ctx.r11.s64 + 1292;
loc_823618EC:
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// bl 0x82360070
	ctx.lr = 0x823618F4;
	sub_82360070(ctx, base);
loc_823618F4:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x822ec500
	ctx.lr = 0x823618FC;
	sub_822EC500(ctx, base);
loc_823618FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82361910
	if (!ctx.cr6.eq) goto loc_82361910;
	// bl 0x82310110
	ctx.lr = 0x8236190C;
	sub_82310110(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82361910:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x822ec4e8
	ctx.lr = 0x82361918;
	sub_822EC4E8(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82287e08
	ctx.lr = 0x82361924;
	sub_82287E08(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x82361928;
	sub_82310110(ctx, base);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82287ed0
	ctx.lr = 0x82361938;
	sub_82287ED0(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82288048
	ctx.lr = 0x82361944;
	sub_82288048(ctx, base);
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x822ec500
	ctx.lr = 0x8236194C;
	sub_822EC500(ctx, base);
loc_8236194C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823617C0) {
	__imp__sub_823617C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82361954) {
	__imp__sub_82361954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361958) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e4480
	ctx.lr = 0x82361980;
	sub_822E4480(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e4480
	ctx.lr = 0x82361998;
	sub_822E4480(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x823619B0;
	sub_822E4480(ctx, base);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82361958) {
	__imp__sub_82361958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823619D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// lwz r3,26072(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26072);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823619D0) {
	__imp__sub_823619D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823619E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r8,r11,-12528
	ctx.r8.s64 = ctx.r11.s64 + -12528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addis r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 65536;
	// addi r11,r11,-32404
	ctx.r11.s64 = ctx.r11.s64 + -32404;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823619FC:
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82361a18
	if (!ctx.cr6.eq) goto loc_82361A18;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82361a18
	if (!ctx.cr6.eq) goto loc_82361A18;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82361A18:
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82361a34
	if (!ctx.cr6.eq) goto loc_82361A34;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82361a34
	if (!ctx.cr6.eq) goto loc_82361A34;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82361A34:
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82361a50
	if (!ctx.cr6.eq) goto loc_82361A50;
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82361a50
	if (!ctx.cr6.eq) goto loc_82361A50;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82361A50:
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82361a6c
	if (!ctx.cr6.eq) goto loc_82361A6C;
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82361a6c
	if (!ctx.cr6.eq) goto loc_82361A6C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82361A6C:
	// lwz r10,688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82361a88
	if (!ctx.cr6.eq) goto loc_82361A88;
	// lwz r10,704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82361a88
	if (!ctx.cr6.eq) goto loc_82361A88;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82361A88:
	// lwz r10,864(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 864);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82361aa4
	if (!ctx.cr6.eq) goto loc_82361AA4;
	// lwz r10,880(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 880);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82361aa4
	if (!ctx.cr6.eq) goto loc_82361AA4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82361AA4:
	// addi r11,r11,1056
	ctx.r11.s64 = ctx.r11.s64 + 1056;
	// bdnz 0x823619fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823619FC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,20764
	ctx.r10.s64 = ctx.r8.s64 + 20764;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r6,r8,20760
	ctx.r6.s64 = ctx.r8.s64 + 20760;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r5,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfc r3,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// eqv r11,r4,r11
	ctx.r11.u64 = ~(ctx.r4.u64 ^ ctx.r11.u64);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823619E0) {
	__imp__sub_823619E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82361AE4) {
	__imp__sub_82361AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361AE8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,-12528
	ctx.r10.s64 = ctx.r10.s64 + -12528;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,20764
	ctx.r10.s64 = ctx.r10.s64 + 20764;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82361AE8) {
	__imp__sub_82361AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361B10) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,-12528
	ctx.r10.s64 = ctx.r10.s64 + -12528;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,20764
	ctx.r10.s64 = ctx.r10.s64 + 20764;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82361B10) {
	__imp__sub_82361B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361B38) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-12528
	ctx.r11.s64 = ctx.r10.s64 + -12528;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,20752
	ctx.r7.s64 = ctx.r11.s64 + 20752;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82361B38) {
	__imp__sub_82361B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361B58) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-12528
	ctx.r11.s64 = ctx.r10.s64 + -12528;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,20757
	ctx.r7.s64 = ctx.r11.s64 + 20757;
	// lbzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82361B58) {
	__imp__sub_82361B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361B78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-12528
	ctx.r11.s64 = ctx.r10.s64 + -12528;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r11,20756
	ctx.r7.s64 = ctx.r11.s64 + 20756;
	// lbzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82361B78) {
	__imp__sub_82361B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,25808
	ctx.r8.s64 = ctx.r11.s64 + 25808;
	// clrlwi r7,r3,27
	ctx.r7.u64 = ctx.r3.u32 & 0x1F;
	// li r6,1
	ctx.r6.s64 = 1;
	// slw r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82361B98) {
	__imp__sub_82361B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82361BCC) {
	__imp__sub_82361BCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,25816
	ctx.r9.s64 = ctx.r11.s64 + 25816;
	// lfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82361BD0) {
	__imp__sub_82361BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361BE8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,-12528
	ctx.r10.s64 = ctx.r10.s64 + -12528;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,20688
	ctx.r10.s64 = ctx.r10.s64 + 20688;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82361BE8) {
	__imp__sub_82361BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82361C10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-12528
	ctx.r29.s64 = ctx.r11.s64 + -12528;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,26072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82361c5c
	if (!ctx.cr6.gt) goto loc_82361C5C;
	// addi r30,r29,20688
	ctx.r30.s64 = ctx.r29.s64 + 20688;
loc_82361C34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e8058
	ctx.lr = 0x82361C40;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361c68
	if (ctx.cr6.eq) goto loc_82361C68;
	// lwz r11,26072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26072);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82361c34
	if (ctx.cr6.lt) goto loc_82361C34;
loc_82361C5C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82361C68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82361C08) {
	__imp__sub_82361C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82361C74) {
	__imp__sub_82361C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82361C80;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r7,r11,13236
	ctx.r7.s64 = ctx.r11.s64 + 13236;
	// addi r6,r10,1416
	ctx.r6.s64 = ctx.r10.s64 + 1416;
	// addi r5,r9,20044
	ctx.r5.s64 = ctx.r9.s64 + 20044;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r4,r8,1400
	ctx.r4.s64 = ctx.r8.s64 + 1400;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r31,r1,84
	ctx.r31.s64 = ctx.r1.s64 + 84;
loc_82361CC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82361CD0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361d30
	if (ctx.cr6.eq) goto loc_82361D30;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82361cc4
	if (ctx.cr6.lt) goto loc_82361CC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,1328
	ctx.r4.s64 = ctx.r11.s64 + 1328;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x82361CFC;
	sub_82280900(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r29,r11,-3724
	ctx.r29.s64 = ctx.r11.s64 + -3724;
loc_82361D0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x82361D1C;
	sub_82280900(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82361d0c
	if (!ctx.cr0.eq) goto loc_82361D0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82361D30:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82361C78) {
	__imp__sub_82361C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82361D48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-31544
	ctx.r30.s64 = ctx.r11.s64 + -31544;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-31544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361d98
	if (ctx.cr6.eq) goto loc_82361D98;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82361D6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82361D78;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361e08
	if (ctx.cr6.eq) goto loc_82361E08;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82361d6c
	if (!ctx.cr6.eq) goto loc_82361D6C;
loc_82361D98:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,1424
	ctx.r4.s64 = ctx.r11.s64 + 1424;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x82361DAC;
	sub_82280900(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361dfc
	if (ctx.cr6.eq) goto loc_82361DFC;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r29,r10,-3724
	ctx.r29.s64 = ctx.r10.s64 + -3724;
loc_82361DC8:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361de4
	if (ctx.cr6.eq) goto loc_82361DE4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x82361DE4;
	sub_82280900(ctx, base);
loc_82361DE4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82361dc8
	if (!ctx.cr6.eq) goto loc_82361DC8;
loc_82361DFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82361E08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82361D40) {
	__imp__sub_82361D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82361E14) {
	__imp__sub_82361E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82361E20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-31568
	ctx.r30.s64 = ctx.r11.s64 + -31568;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-31568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361e70
	if (ctx.cr6.eq) goto loc_82361E70;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82361E44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82361E50;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82361ee0
	if (ctx.cr6.eq) goto loc_82361EE0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82361e44
	if (!ctx.cr6.eq) goto loc_82361E44;
loc_82361E70:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,1496
	ctx.r4.s64 = ctx.r11.s64 + 1496;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x82361E84;
	sub_82280900(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361ed4
	if (ctx.cr6.eq) goto loc_82361ED4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r29,r10,-3724
	ctx.r29.s64 = ctx.r10.s64 + -3724;
loc_82361EA0:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361ebc
	if (ctx.cr6.eq) goto loc_82361EBC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x82361EBC;
	sub_82280900(ctx, base);
loc_82361EBC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82361ea0
	if (!ctx.cr6.eq) goto loc_82361EA0;
loc_82361ED4:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82361EE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82361E18) {
	__imp__sub_82361E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82361EEC) {
	__imp__sub_82361EEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82361EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82361EF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r27,r10,-28736
	ctx.r27.s64 = ctx.r10.s64 + -28736;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82361f40
	if (!ctx.cr6.gt) goto loc_82361F40;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82361f44
	goto loc_82361F44;
loc_82361F40:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82361F44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361c08
	ctx.lr = 0x82361F4C;
	sub_82361C08(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82361f78
	if (!ctx.cr6.eq) goto loc_82361F78;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,1664
	ctx.r4.s64 = ctx.r11.s64 + 1664;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x82361F6C;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82361F78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x82361fa0
	if (!ctx.cr6.gt) goto loc_82361FA0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82361fa4
	goto loc_82361FA4;
loc_82361FA0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82361FA4:
	// bl 0x823deaf8
	ctx.lr = 0x82361FA8;
	sub_823DEAF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82362034
	if (ctx.cr6.lt) goto loc_82362034;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x82362034
	if (!ctx.cr6.lt) goto loc_82362034;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x82361fe8
	if (!ctx.cr6.gt) goto loc_82361FE8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82361fec
	goto loc_82361FEC;
loc_82361FE8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82361FEC:
	// bl 0x823deaf8
	ctx.lr = 0x82361FF0;
	sub_823DEAF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82362014
	if (ctx.cr6.lt) goto loc_82362014;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x82362014
	if (!ctx.cr6.lt) goto loc_82362014;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82362014:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r4,r11,1616
	ctx.r4.s64 = ctx.r11.s64 + 1616;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x82362028;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82362034:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r11,1568
	ctx.r4.s64 = ctx.r11.s64 + 1568;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x82362048;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82361EF0) {
	__imp__sub_82361EF0(ctx, base);
}

